import Foundation

func isBTHand(_ hand: UInt64) -> Bool {
  if (hand & 0x1FFF1FFF1FFF1FFF) != hand { return false }
  if hand.bitCount() > 7 { return false }
  return true
}

func isBT7CardHand(_ hand: UInt64) -> Bool {
  if (hand & 0x1FFF1FFF1FFF1FFF) != hand { return false }
  if hand.bitCount() != 7 { return false }
  return true
}

func isSKHand(_ hand: UInt64) -> Bool {
  var handSet: Set<UInt64> = []
  for i: UInt64 in (0..<7) {
    let card = (hand >> (i * 8)) & 0xFF
    handSet.insert(card)
    if card > 51 { return false }
  }
  if handSet.count > 7 { return false }
  return true
}

func isSK7CardHand(_ hand: UInt64) -> Bool {
  var handSet: Set<UInt64> = []
  for i: UInt64 in (0..<7) {
    let card = (hand >> (i * 8)) & 0xFF
    handSet.insert(card)
    if card > 51 { return false }
  }
  if handSet.count != 7 { return false }
  return true
}
