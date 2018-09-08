import Foundation
import BTPokerEvalC

public func score(hand: UInt64) -> UInt32 {
  return BTPokerEvalC.scoreHand(hand)
}

public func score(handPointer: UnsafePointer<UInt64>,
                  scorePointer: UnsafeMutablePointer<UInt32>,
                  count: Int) {
  BTPokerEvalC.scoreHands(handPointer, scorePointer, Int32(count))
}

public func score(hands: [UInt64]) -> [UInt32] {
  let scores = UnsafeMutableBufferPointer<UInt32>
    .allocate(capacity: hands.count)
  BTPokerEvalC.scoreHands(UnsafePointer(hands),
                          scores.baseAddress,
                          Int32(hands.count))
  return Array<UInt32>(scores)
}
