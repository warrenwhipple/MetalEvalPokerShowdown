#ifndef SKPOKEREVAL_CONSTANTS_H_
#define SKPOKEREVAL_CONSTANTS_H_

#define DECK_SIZE 52

#define NUMBER_OF_SUITS 4
#define NUMBER_OF_FACES 13

#define SPADE 0
#define HEART 1
#define DIAMOND 8
#define CLUB 57

#define INDEX_SPADE 0
#define INDEX_HEART 1
#define INDEX_DIAMOND 2
#define INDEX_CLUB 3
#define NOT_A_SUIT (-1)

#define TWO_FLUSH 1
#define THREE_FLUSH TWO_FLUSH<<1
#define FOUR_FLUSH THREE_FLUSH<<1
#define FIVE_FLUSH FOUR_FLUSH<<1
#define SIX_FLUSH FIVE_FLUSH<<1
#define SEVEN_FLUSH SIX_FLUSH<<1
#define EIGHT_FLUSH SEVEN_FLUSH<<1
#define NINE_FLUSH EIGHT_FLUSH<<1
#define TEN_FLUSH NINE_FLUSH<<1
#define JACK_FLUSH TEN_FLUSH<<1
#define QUEEN_FLUSH JACK_FLUSH<<1
#define KING_FLUSH QUEEN_FLUSH<<1
#define ACE_FLUSH KING_FLUSH<<1

#define TWO 0
#define THREE 1
#define FOUR 5
#define FIVE 22
#define SIX 98
#define SEVEN 453
#define EIGHT 2031
#define NINE 8698
#define TEN 22854
#define JACK 83661
#define QUEEN 262349
#define KING 636345
#define ACE 1479181

#define RANK_OFFSET_SHIFT 9
#define RANK_HASH_MOD ((1<<RANK_OFFSET_SHIFT) - 1)

#define FLUSH_BIT_SHIFT 23
#define FACE_BIT_MASK ((1 << FLUSH_BIT_SHIFT) - 1)

#endif // SKPOKEREVAL_CONSTANTS_H_
