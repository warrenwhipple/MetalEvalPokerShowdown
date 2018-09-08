import Foundation

private func convertToSKHand(btHand: UInt64) -> UInt64 {
  var skHand: UInt64 = 0;
  var skShift: UInt64 = 0;
  for btRank: UInt64 in (0..<13) {
    for btSuit: UInt64 in (0..<4) {
      if btHand & (1 << (btSuit * 16 + btRank)) != 0 {
        let skCard = (12 - btRank) * 4 + btSuit
        skHand |= skCard << skShift
        skShift += 8
      }
    }
  }
  return skHand
}

func convertToSKHands(btHands: [UInt64]) -> [UInt64] {
  return btHands.map { convertToSKHand(btHand: $0) }
}
