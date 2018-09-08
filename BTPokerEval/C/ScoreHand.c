#include "ScoreHand.h"
#include "MSB.h"

// BT hand
// 64 bit unsigned integer
// ...akqjt98765432 ...akqjt98765432 ...akqjt98765432 ...akqjt98765432

// BT score
// 32 bit unsigned integer
// ..RR RRAK QJT9 8765    432a kqjt 9876 5432
// RRRR = hand rank (0-8)
// AKQJT98765432 = value bits
// akqjt98765432 = kicker bits

// score bit shifts
#define BT_VALUE_SHIFT     13
#define BT_HAND_RANK_SHIFT 26

// hand rank
#define BT_HIGH_CARD        0
#define BT_ONE_PAIR        (1 << BT_HAND_RANK_SHIFT)
#define BT_TWO_PAIR        (2 << BT_HAND_RANK_SHIFT)
#define BT_THREE_OF_A_KIND (3 << BT_HAND_RANK_SHIFT)
#define BT_STRAIGHT        (4 << BT_HAND_RANK_SHIFT)
#define BT_FLUSH           (5 << BT_HAND_RANK_SHIFT)
#define BT_FULL_HOUSE      (6 << BT_HAND_RANK_SHIFT)
#define BT_FOUR_OF_A_KIND  (7 << BT_HAND_RANK_SHIFT)
#define BT_STRAIGHT_FLUSH  (8 << BT_HAND_RANK_SHIFT)

uint32_t scoreHand(uint64_t hand) {
    
    // Check straight flush
  
    // Copy aces below twos
    uint64_t straightFlushes = (hand << 1) | ((hand & 0x1000100010001000) >> 12);
    
    // Check straights for each suit in parallel
    // Remove bits that have no bit to their right
    // Repeat 4 times
    // Remaining bits are high cards of 5 card straight flushes
    // (But shifted 1 left)
    straightFlushes &= straightFlushes << 1;
    straightFlushes &= straightFlushes << 1;
    straightFlushes &= straightFlushes << 1;
    straightFlushes &= straightFlushes << 1;
    
    if (straightFlushes) {
        
        // Shift 1 right
        straightFlushes >>= 1;
        
        // Fold straight flushes together
        straightFlushes |= straightFlushes >> 32;
        straightFlushes |= straightFlushes >> 16;
        straightFlushes &= 0xFFFF;

        // Score best straight flush no kickers
        return (uint32_t)(BT_STRAIGHT_FLUSH | (msb(straightFlushes) << BT_VALUE_SHIFT));
    }
    
    // Check quads
  
    // Break into suits
    uint64_t a = hand & 0xFFFF;
    uint64_t b = (hand >> 16) & 0xFFFF;
    uint64_t c = (hand >> 32) & 0xFFFF;
    uint64_t d = hand >> 48;

    // Fold suits together
    uint64_t ranks = a | b | c | d;
    
    // Quad requires a rank of all 4 suits
    uint64_t quad = a & b & c & d;
    
    if (quad) {
        
        // Assuming 7 card hand means only 1 quad possible
        // No need to include lower quads with kickers
        // 8 or more card hands break logic here
        uint64_t kickers = ranks ^ quad;
        
        // Score quad and best kicker
        return (uint32_t)(BT_FOUR_OF_A_KIND | (quad << BT_VALUE_SHIFT) | msb(kickers));
    }
    
    // Check full house
  
    // XOR 4 suits together and all ranks gives ranks with even overlap
    // Quads were detected above leaving only pairs
    uint64_t pairs = a ^ b ^ c ^ d ^ ranks;
    
    // AND 3 suits together in 4 permutations gives trips
    // (a & b & c) | (a & b & d) | (a & c & d) | (b & c & d)
    // Logically equivalent to
    uint64_t trips = ((a & b) | (c & d)) & ((a & c) | (b & d));
    
    if (trips) {
        
        uint64_t bestTrip = msb(trips);
        
        // OR pairs and trips together excluding best trip
        // Because pairs or lower trips can fill a full house
        uint64_t fullHousePairs = (pairs | trips) ^ bestTrip;
        
        if (fullHousePairs) {
            
            // Score best trips and best pair / low trip bits
            return (uint32_t)(BT_FULL_HOUSE | (bestTrip << BT_VALUE_SHIFT) | msb(fullHousePairs));
        }
    }
    
    // Check flush
  
    // Use sideways addition to count suit bits in parallel
    // http://graphics.stanford.edu/~seander/bithacks.html#CountBitsSetParallel
    uint64_t flushCounts = hand - ((hand >> 1) & 0x5555555555555555);
    flushCounts = (flushCounts & 0x3333333333333333) + ((flushCounts >> 2) & 0x3333333333333333);
    flushCounts = (flushCounts + (flushCounts >> 4)) & 0x0F0F0F0F0F0F0F0F;
    flushCounts = (flushCounts + (flushCounts >> 8)) & 0x00FF00FF00FF00FF;
    
    // Check each suit for count at least 5 and score best 5 cards
    // Assuming 7 card hand means only 1 flush possible
    // 10 or more cards could result in multiple flushes breaking logic
    if (flushCounts >= 0x5000000000000)
      return (uint32_t)(BT_FLUSH | (ms5b(d) << BT_VALUE_SHIFT));
    if ((flushCounts & 0xFFFF00000000) >= 0x500000000)
      return (uint32_t)(BT_FLUSH | (ms5b(c) << BT_VALUE_SHIFT));
    if ((flushCounts & 0xFFFF0000) >= 0x50000)
      return (uint32_t)(BT_FLUSH | (ms5b(b) << BT_VALUE_SHIFT));
    if ((flushCounts & 0xFFFF) >= 5)
      return (uint32_t)(BT_FLUSH | (ms5b(a) << BT_VALUE_SHIFT));
    
    // Check straight
  
    // Shift 1 left and copy aces below twos
    uint64_t straights = (ranks << 1) | ((ranks & 0x1000) >> 12);
    
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
        return (uint32_t)(BT_STRAIGHT | (msb(straights) << BT_VALUE_SHIFT));
    }
    
    // Check trips
  
    if (trips) {
        
        // Assuming 1 trip no pairs because full house was checked above
        uint64_t kickers = ranks ^ trips;
        
        // Score trip card and 2 kickers
        return (uint32_t)(BT_THREE_OF_A_KIND | (trips << BT_VALUE_SHIFT) | ms2b(kickers));
    }
    
    // Check pairs
  
    if (pairs) {
        
        uint64_t bestPair = msb(pairs);
        uint64_t lowPairs = pairs ^ bestPair;
        if (lowPairs) {
            // Account for posibility of 3 pairs
            uint64_t bestTwoPair = bestPair | msb(lowPairs);
            uint64_t kickers = ranks ^ bestTwoPair;
            
            // Score 2 pairs and 1 kicker
            return (uint32_t)(BT_TWO_PAIR | (bestTwoPair << BT_VALUE_SHIFT) | msb(kickers));
        }
        
        // Only 1 pair means rest are kickers
        uint64_t kickers = ranks ^ bestPair;
        
        // Score 1 pair and 3 kickers
        return (uint32_t)(BT_ONE_PAIR | (bestPair << BT_VALUE_SHIFT) | ms3b(kickers));
    }

    // Default high card
  
    // Score 5 kickers
    return (uint32_t)(ms5b(ranks));
}
