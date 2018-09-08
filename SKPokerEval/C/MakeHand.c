#include "MakeHand.h"

inline uint64_t makeHand(uint8_t i, uint8_t j, uint8_t k, uint8_t m, uint8_t n,
                         uint8_t p, uint8_t q) {
  return (uint64_t)i |
    ((uint64_t)j << 8) |
    ((uint64_t)k << 16) |
    ((uint64_t)m << 24) |
    ((uint64_t)n << 32) |
    ((uint64_t)p << 40) |
    ((uint64_t)q << 48);
}
