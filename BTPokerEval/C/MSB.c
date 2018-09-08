#include "MSB.h"

// http://aggregate.org/MAGIC/#Most%20Significant%201%20Bit

// Most significant bit (max 16 bits)
uint64_t msb(uint64_t x) {
//  return  1 << (63 - __builtin_clzll(x));
    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    return x & ~(x >> 1);
}

// Most significant 2 bits (max 16 bits)
uint64_t ms2b(uint64_t x) {
  uint64_t y = msb(x);
  x &= ~y;
  y |= msb(x);
  return y;
}

// Most significant 3 bits (max 16 bits)
uint64_t ms3b(uint64_t x) {
  uint64_t y = msb(x);
  x &= ~y;
  y |= msb(x);
  x &= ~y;
  y |= msb(x);
  return y;
}

// Most significant 5 bits (max 16 bits)
uint64_t ms5b(uint64_t x) {
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
