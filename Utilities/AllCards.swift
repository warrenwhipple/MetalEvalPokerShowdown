import Foundation

let allSKCards: [UInt64] = (0..<52).map { $0 }

let allBTCards: [UInt64] = {
  var cards: [UInt64] = []
  for suitShift: UInt64 in 0 ..< 4 {
    for rankShift: UInt64 in 0 ..< 13 {
      cards.append(1 << (16 * suitShift + rankShift))
    }
  }
  return cards
}()
