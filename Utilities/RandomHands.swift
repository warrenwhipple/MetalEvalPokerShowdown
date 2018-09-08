import Foundation

private func randomSKHand() -> UInt64 {
  var hand: UInt64
  var cards: [UInt64] = allSKCards
  var i = Int(arc4random_uniform(52))
  hand = cards[i]
  cards[i] = cards[51]
  i = Int(arc4random_uniform(51))
  hand |= cards[i] << 8
  cards[i] = cards[50]
  i = Int(arc4random_uniform(50))
  hand |= cards[i] << 16
  cards[i] = cards[49]
  i = Int(arc4random_uniform(49))
  hand |= cards[i] << 24
  cards[i] = cards[48]
  i = Int(arc4random_uniform(48))
  hand |= cards[i] << 32
  cards[i] = cards[47]
  i = Int(arc4random_uniform(47))
  hand |= cards[i] << 40
  cards[i] = cards[46]
  i = Int(arc4random_uniform(46))
  hand |= cards[i] << 48
  return hand
}

func randomSKHands(count: Int) -> [UInt64] {
  return (0 ..< count).map { _ in randomSKHand() }
}

private func randomBTHand() -> UInt64 {
  var hand: UInt64
  var cards =  allBTCards
  var i = Int(arc4random_uniform(52))
  hand = cards[i]
  cards[i] = cards[51]
  i = Int(arc4random_uniform(51))
  hand |= cards[i]
  cards[i] = cards[50]
  i = Int(arc4random_uniform(50))
  hand |= cards[i]
  cards[i] = cards[49]
  i = Int(arc4random_uniform(49))
  hand |= cards[i]
  cards[i] = cards[48]
  i = Int(arc4random_uniform(48))
  hand |= cards[i]
  cards[i] = cards[47]
  i = Int(arc4random_uniform(47))
  hand |= cards[i]
  cards[i] = cards[46]
  i = Int(arc4random_uniform(46))
  hand |= cards[i]
  return hand
}

func randomBTHands(count: Int) -> [UInt64] {
  return (0 ..< count).map { _ in randomBTHand() }
}
