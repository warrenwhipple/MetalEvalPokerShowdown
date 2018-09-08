#include <metal_stdlib>
using namespace metal;

// Most significant bit (max 16 bits)
// http://aggregate.org/MAGIC/#Most%20Significant%201%20Bit
uint msb(uint x) {
  x |= x >> 1;
  x |= x >> 2;
  x |= x >> 4;
  x |= x >> 8;
  return x & ~(x >> 1);
}

// Most significant 2 bits (max 16 bits)
uint ms2b(uint x) {
  uint y = msb(x);
  x &= ~y;
  y |= msb(x);
  return y;
}

// Most significant 3 bits (max 16 bits)
uint ms3b(uint x) {
  uint y = msb(x);
  x &= ~y;
  y |= msb(x);
  x &= ~y;
  y |= msb(x);
  return y;
}

// Most significant 5 bits (max 16 bits)
uint ms5b(uint x) {
  uint y = msb(x);
  x &= ~y;
  y |= msb(x);
  x &= ~y;
  y |= msb(x);
  x &= ~y;
  y |= msb(x);
  x &= ~y;
  y |= msb(x);
  return y;
}

// uint2 hand2
// 32 bit 2D vector = 64 bits
// ...akqjt98765432 ...akqjt98765432 ...akqjt98765432 ...akqjt98765432

// uint score
// 32 bit unsigned integer
// ..RR RRAK QJT9 8765    432a kqjt 9876 5432
// RRRR = hand rank (0-8)
// AKQJT98765432 = value bits
// akqjt98765432 = kicker bits

// score bit shifts
#define VALUE_SHIFT     13
#define HAND_RANK_SHIFT 26

// hand rank
#define HIGH_CARD        0
#define ONE_PAIR        (1 << HAND_RANK_SHIFT)
#define TWO_PAIR        (2 << HAND_RANK_SHIFT)
#define THREE_OF_A_KIND (3 << HAND_RANK_SHIFT)
#define STRAIGHT        (4 << HAND_RANK_SHIFT)
#define FLUSH           (5 << HAND_RANK_SHIFT)
#define FULL_HOUSE      (6 << HAND_RANK_SHIFT)
#define FOUR_OF_A_KIND  (7 << HAND_RANK_SHIFT)
#define STRAIGHT_FLUSH  (8 << HAND_RANK_SHIFT)

uint score(uint2 hand2) {
  
  // Check straight flush
  
  // Copy aces below twos
  uint2 straightFlushes2 = (hand2 << 1) | ((hand2 & uint2(0x10001000)) >> 12);
  
  // Remove bits that have no bit to their right
  // Repeat 4 times
  // Remaining bits are high cards of 5 card straight flushes
  // (But shifted 1 left)
  straightFlushes2 &= straightFlushes2 << 1;
  straightFlushes2 &= straightFlushes2 << 1;
  straightFlushes2 &= straightFlushes2 << 1;
  straightFlushes2 &= straightFlushes2 << 1;
  
  // Fold straight flushes once into 32 bits
  uint straightFlushes = straightFlushes2.x | straightFlushes2.y;
  
  if (straightFlushes) {
    
    // Shift back right 1 bit
    straightFlushes >>= 1;
    
    // Fold straight flushes again into 16 bits
    straightFlushes |= straightFlushes >> 16;
    straightFlushes &= 0xFFFF;
    
    // Score best straight flush no kickers
    return STRAIGHT_FLUSH | (msb(straightFlushes) << VALUE_SHIFT);
  }
  
  // Check quads
  
  // Break into suits
  uint a = hand2.x & 0xFFFF;
  uint b = hand2.x >> 16;
  uint c = hand2.y & 0xFFFF;
  uint d = hand2.y >> 16;
  
  // Fold suits together
  uint ranks = a | b | c | d;
  
  // Quad requires a rank of all 4 suits
  uint quad = a & b & c & d;
  
  if (quad) {
    
    // Assuming 7 card hand means only 1 quad possible
    // No need to include lower quads with kickers
    // 8 or more card hands break logic here
    uint kickers = ranks ^ quad;
    
    // Score quad and best kicker
    return FOUR_OF_A_KIND | (quad << VALUE_SHIFT) | msb(kickers);
  }
  
  // Check full house
  
  // XOR 4 suits together and all ranks gives ranks with even overlap
  // Quads were detected above leaving only pairs
  uint pairs = a ^ b ^ c ^ d ^ ranks;
  
  // AND 3 suits together in 4 permutations gives trips
  // (a & b & c) | (a & b & d) | (a & c & d) | (b & c & d)
  // Logicall equivalent to
  uint trips = ((a & b) | (c & d)) & ((a & c) | (b & d));
  
  if (trips) {
    
    uint bestTrip = msb(trips);
    
    // OR pairs and trips together excluding best trip
    // Because pairs or lower trips can fill a full house
    uint fullHousePairs = (pairs | trips) ^ bestTrip;
    
    if (fullHousePairs) {
      // Score best trips and best pair / low trip bits
      return FULL_HOUSE | (bestTrip << VALUE_SHIFT) | msb(fullHousePairs);
    }
  }
  
  // Check flush
  
  // Use sideways addition to count suit bits in parallel
  // http://graphics.stanford.edu/~seander/bithacks.html#CountBitsSetParallel
  // Swift overflow addition (&+) and subtraction (&-) for speed
  uint2 flushCounts2 = hand2 - ((hand2 >> 1) & uint2(0x55555555));
  flushCounts2 = (flushCounts2 & uint2(0x33333333)) + ((flushCounts2 >> 2) & uint2(0x33333333));
  flushCounts2 = (flushCounts2 + (flushCounts2 >> 4)) & uint2(0x0F0F0F0F);
  flushCounts2 = (flushCounts2 + (flushCounts2 >> 8)) & uint2(0x00FF00FF);
  
  // Check each suit for count at least 5 and score best 5 cards
  // Assuming 7 card hand means only 1 flush possible
  // 10 or more cards could result in multiple flushes breaking logic
  if (flushCounts2.x >= 0x50000)      return FLUSH | (ms5b(b) << VALUE_SHIFT);
  if ((flushCounts2.x & 0xFFFF) >= 5) return FLUSH | (ms5b(a) << VALUE_SHIFT);
  if (flushCounts2.y >= 0x50000)      return FLUSH | (ms5b(d) << VALUE_SHIFT);
  if ((flushCounts2.y & 0xFFFF) >= 5) return FLUSH | (ms5b(c) << VALUE_SHIFT);
  
  // Check straight
  
  // Shift 1 left and copy aces below twos
  uint straights = (ranks << 1) | ((ranks & 0x1000) >> 12);
  
  // Remove bits that have no bit to their right
  // Repeat 4 times
  // Remaining bits are high cards of 5 card straights
  // (But shifted 1 left)
  straights &= straights << 1;
  straights &= straights << 1;
  straights &= straights << 1;
  straights &= straights << 1;
  
  if (straights) {
    
    // Shift back 1 right
    straights >>= 1;
    
    // Score best straight no kickers
    return STRAIGHT | (msb(straights) << VALUE_SHIFT);
  }
  
  // Check trips
  
  if (trips) {
    
    // Assuming 1 trip no pairs because full house was checked above
    uint kickers = ranks ^ trips;
    
    // Score trip card and 2 kickers
    return THREE_OF_A_KIND | (trips << VALUE_SHIFT) | ms2b(kickers);
  }
  
  // Check pairs
  
  if (pairs) {
    
    uint bestPair = msb(pairs);
    uint lowPairs = pairs ^ bestPair;
    if (lowPairs) {
      // Account for posibility of 3 pairs
      uint bestTwoPair = bestPair | msb(lowPairs);
      uint kickers = ranks ^ bestTwoPair;
      
      // Score 2 pairs and 1 kicker
      return TWO_PAIR | (bestTwoPair << VALUE_SHIFT) | msb(kickers);
    }
    
    // Only 1 pair means rest are kickers
    uint kickers = ranks ^ bestPair;
    
    // Score 1 pair and 3 kickers
    return ONE_PAIR | (bestPair << VALUE_SHIFT) | ms3b(kickers);
  }
  
  // Default high card
  
  return HIGH_CARD | ms5b(ranks);
}

kernel
void scoreKernel(const device uint2* hands[[buffer(0)]],
                 device uint* scores[[buffer(1)]],
                 const device uint& threadCount [[ buffer(2) ]],
                 const uint t [[thread_position_in_grid]]) {
  
  if (t < threadCount)
    scores[t] = score(hands[t]);
}
