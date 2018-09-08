#ifndef MSB_H
#define MSB_H

#include <stdint.h>

// Most significant bit max 16 bits
uint64_t msb(uint64_t x);

// Most significant 2 bits (max 16 bits)
uint64_t ms2b(uint64_t x);

// Most significant 3 bits (max 16 bits)
uint64_t ms3b(uint64_t x);

// Most significant 5 bits (max 16 bits)
uint64_t ms5b(uint64_t x);

#endif
