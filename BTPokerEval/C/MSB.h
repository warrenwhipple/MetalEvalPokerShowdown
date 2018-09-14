#ifndef MSB_H
#define MSB_H

#include <stdint.h>

// Most significant bit
static inline uint64_t msb(uint64_t x) {
  return 0x8000000000000000 >> __builtin_clzll(x);
}

// Most significant 2 bits
static inline uint64_t ms2b(uint64_t x) {
  uint64_t y = msb(x);
  x &= ~y;
  y |= msb(x);
  return y;
}

// Most significant 3 bits
static inline uint64_t ms3b(uint64_t x) {
  uint64_t y = msb(x);
  x &= ~y;
  y |= msb(x);
  x &= ~y;
  y |= msb(x);
  return y;
}

// Most significant 5 bits
static inline uint64_t ms5b(uint64_t x) {
  uint64_t y = msb(x);
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

#endif
