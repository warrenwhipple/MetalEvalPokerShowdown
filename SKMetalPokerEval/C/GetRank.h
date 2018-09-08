#ifndef SKPOKEREVAL_GETRANK_H
#define SKPOKEREVAL_GETRANK_H

#include "RankHash.h"
#include "RankOffsets.h"
#include "FlushRanks.h"
#include "FlushCheck.h"
#include "Deckcards.h"
#include "Constants.h"
#include <stdint.h>

// Get the rank of a hand comprising seven cards, each represented by an
// integer from 0 (resp. Ace of Spades) to 51 (resp. Two of Clubs) inclusive.
// Two such integers of the same residue modulo 4 correspond to the same suit.
// The higher the rank the better the hand. Two hands of equal rank tie.
static inline uint16_t getRank(uint8_t i, uint8_t j, uint8_t k, uint8_t m,
                               uint8_t n, uint8_t p, uint8_t q) {
  // Create a 7-card hand key by adding up each of the card keys.
  uint_fast32_t const key = card[i] + card[j] + card[k] + card[m] + card[n] +
  card[p] + card[q];
  int_fast8_t const suit = flush_check[key >> FLUSH_BIT_SHIFT];
  if (NOT_A_SUIT != suit) {
    // Generate a flush key, and look up the rank.
    uint_fast16_t const * const s = suit_kronecker[suit];
    return flush_ranks[s[i] | s[j] | s[k] | s[m] | s[n] | s[p] | s[q]];
  }
  // Tear off the non-flush key strip, and look up the rank.
  unsigned const hash = FACE_BIT_MASK & (unsigned)(31L * key);
  return rank_hash[offsets[hash >> RANK_OFFSET_SHIFT] +
                   (hash & RANK_HASH_MOD)];
}

#endif
