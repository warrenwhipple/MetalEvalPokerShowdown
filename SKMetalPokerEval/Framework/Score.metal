#include <metal_stdlib>
using namespace metal;

#define DECK_SIZE 52
#define NUMBER_OF_SUITS 4
#define NOT_A_SUIT (-1)
#define RANK_OFFSET_SHIFT 9
#define RANK_HASH_MOD ((1<<RANK_OFFSET_SHIFT) - 1)
#define FLUSH_BIT_SHIFT 23
#define FACE_BIT_MASK ((1 << FLUSH_BIT_SHIFT) - 1)

kernel
void scoreKernel(const device uint*   card          [[buffer(0)]],
                 const device char*   flush_check   [[buffer(1)]],
                 const device ushort* suit_kronecker[[buffer(2)]],
                 const device ushort* flush_ranks   [[buffer(3)]],
                 const device ushort* offsets       [[buffer(4)]],
                 const device ushort* rank_hash     [[buffer(5)]],
                 const device uint2*  hands         [[buffer(6)]],
                 device ushort*       scores        [[buffer(7)]],
                 const device uint&   threadCount   [[buffer(8)]],
                 const uint           t [[thread_position_in_grid]]) {
  
  if (t < threadCount) {
    
    // Extract hand components
    const uint2 hand = hands[t];
    const uchar i = (uchar)(hand.x);
    const uchar j = (uchar)(hand.x >> 8);
    const uchar k = (uchar)(hand.x >> 16);
    const uchar m = (uchar)(hand.x >> 24);
    const uchar n = (uchar)(hand.y);
    const uchar p = (uchar)(hand.y >> 8);
    const uchar q = (uchar)(hand.y >> 16);
    
    // Create a 7-card hand key by adding up each of the card keys.
    const uint key = card[i] + card[j] + card[k] + card[m] + card[n] + card[p] + card[q];
    const char suit = flush_check[key >> FLUSH_BIT_SHIFT];
    if (NOT_A_SUIT != suit) {
      // Generate a flush key, and look up the rank.
      const device ushort* s = &(suit_kronecker[suit * DECK_SIZE]);
      scores[t] = flush_ranks[s[i] | s[j] | s[k] | s[m] | s[n] | s[p] | s[q]];
    } else {
      // Tear off the non-flush key strip, and look up the rank.
      const uint hash = FACE_BIT_MASK & (31 * (uint)key);
      scores[t] = rank_hash[offsets[hash >> RANK_OFFSET_SHIFT] + (hash & RANK_HASH_MOD)];
    }
  }
}
