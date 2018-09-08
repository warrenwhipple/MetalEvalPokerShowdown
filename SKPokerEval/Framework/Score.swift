import Foundation
import CSKPokerEval

public func makeHand(_ i: UInt8, _ j: UInt8, _ k: UInt8, _ m: UInt8, _ n: UInt8,
                     _ p: UInt8, _ q: UInt8) -> UInt64 {
  return CSKPokerEval.makeHand(i, j, k, m, n, p, q)
}

public func score(hand: UInt64) -> UInt16 {
  return CSKPokerEval.scoreHand(hand)
}

public func score(handPointer: UnsafePointer<UInt64>,
           scorePointer: UnsafeMutablePointer<UInt16>,
           count: Int) {
  CSKPokerEval.scoreHands(handPointer, scorePointer, Int32(count))
}

public func score(hands: [UInt64]) -> [UInt16] {
  let scores = UnsafeMutableBufferPointer<UInt16>
    .allocate(capacity: hands.count)
  CSKPokerEval.scoreHands(UnsafePointer(hands),
                          scores.baseAddress,
                          Int32(hands.count))
  return Array<UInt16>(scores)
}
