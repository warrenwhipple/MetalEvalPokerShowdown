#include "ScoreHands.h"
#include "ScoreHand.h"

void scoreHands(const uint64_t* hands, uint32_t* scores, int count) {
  for (int i=0; i<count; i++)
    scores[i] = scoreHand(hands[i]);
}
