#include "ScoreHand.h"
#include "GetRank.h"

inline uint16_t scoreHand(uint64_t hand) {
  return getRank((uint8_t)hand,
                 (uint8_t)(hand >> 8),
                 (uint8_t)(hand >> 16),
                 (uint8_t)(hand >> 24),
                 (uint8_t)(hand >> 32),
                 (uint8_t)(hand >> 40),
                 (uint8_t)(hand >> 48));
}
