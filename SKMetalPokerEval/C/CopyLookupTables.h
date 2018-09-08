#ifndef CopyLookupTables_h
#define CopyLookupTables_h

#include <stdint.h>

size_t cardTableStride(void);
size_t cardTableSize(void);
void cardTableCopy(uint_fast32_t* buffer);

size_t flushCheckTableStride(void);
size_t flushCheckTableSize(void);
void flushCheckTableCopy(int_fast8_t* buffer);

size_t suitKroneckerTableStride(void);
size_t suitKroneckerTableSize(void);
void suitKroneckerTableCopy(uint_fast16_t* buffer);

size_t flushRanksTableStride(void);
size_t flushRanksTableSize(void);
void flushRanksTableCopy(uint16_t* buffer);

size_t offsetsTableStride(void);
size_t offsetsTableSize(void);
void offsetsTableCopy(uint16_t* buffer);

size_t rankHashTableStride(void);
size_t rankHashTableSize(void);
void rankHashTableCopy(uint16_t* buffer);

#endif
