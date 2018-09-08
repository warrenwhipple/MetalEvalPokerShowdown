#include "CopyLookupTables.h"
#include "RankHash.h"
#include "RankOffsets.h"
#include "FlushRanks.h"
#include "FlushCheck.h"
#include "Deckcards.h"
#include "Constants.h"
#include <stdint.h>
#include <string.h>
#include <assert.h>

size_t cardTableStride() { return sizeof(card[0]); }
size_t cardTableSize() { return sizeof(card); }
void cardTableCopy(uint_fast32_t* buffer) {
  assert(cardTableStride() == sizeof(uint_fast32_t));
  memcpy(buffer, card, sizeof(card));
}

size_t flushCheckTableStride() { return sizeof(flush_check[0]); }
size_t flushCheckTableSize() { return sizeof(flush_check); }
void flushCheckTableCopy(int_fast8_t* buffer) {
  assert(flushCheckTableStride() == sizeof(uint_fast8_t));
  memcpy(buffer, flush_check, sizeof(flush_check));
}

// Note suit_kronecker table is a 2D array
size_t suitKroneckerTableStride() { return sizeof(suit_kronecker[0][0]); }
size_t suitKroneckerTableSize() {
  return NUMBER_OF_SUITS * DECK_SIZE * suitKroneckerTableStride();
}
void suitKroneckerTableCopy(uint_fast16_t* buffer) {
  size_t stride = suitKroneckerTableStride();
  assert(stride == sizeof(uint_fast16_t));
  for (int i=0; i<NUMBER_OF_SUITS; i++)
    memcpy(&buffer[i * DECK_SIZE], suit_kronecker[i], stride * DECK_SIZE);
}

size_t flushRanksTableStride() { return sizeof(flush_ranks[0]); }
size_t flushRanksTableSize() { return sizeof(flush_ranks); }
void flushRanksTableCopy(uint16_t* buffer) {
  assert(flushRanksTableStride() == sizeof(uint16_t));
  memcpy(buffer, flush_ranks, sizeof(flush_ranks));
}

size_t offsetsTableStride() { return sizeof(offsets[0]); }
size_t offsetsTableSize() { return sizeof(offsets); }
void offsetsTableCopy(uint16_t* buffer) {
  assert(offsetsTableStride() == sizeof(uint16_t));
  memcpy(buffer, offsets, sizeof(offsets));
}

size_t rankHashTableStride() { return sizeof(rank_hash[0]); }
size_t rankHashTableSize() { return sizeof(rank_hash); }
void rankHashTableCopy(uint16_t* buffer) {
  assert(rankHashTableStride() == sizeof(uint16_t));
  memcpy(buffer, rank_hash, sizeof(rank_hash));
}
