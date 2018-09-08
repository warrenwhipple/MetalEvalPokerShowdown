import Foundation

func generateAllBT5CardHands() -> [UInt64] {
  let cards = allBTCards
  var hands: [UInt64] = []
  for a in 0..<48 {
    for b in a+1..<49 {
      for c in b+1..<50 {
        for d in c+1..<51 {
          for e in d+1..<52 {
            hands.append(
              cards[a] | cards[b] | cards[c] | cards[d] | cards[e]
            )
          }
        }
      }
    }
  }
  return hands
}
