import XCTest
import BTPokerEval

class BTTests: XCTestCase {
    
  func testRandomHand() {
    let hands = randomBTHands(count: sampleSize)
    var validHandCount = 0
    for hand in hands {
      if isBT7CardHand(hand) { validHandCount += 1 }
    }
    XCTAssertEqual(validHandCount, hands.count)
  }
  
  func test5CardHandRankCounts() {
    let scores = BTPokerEval.score(hands: allBT5CardHands)
    let rankCounts = countBTHandRanks(scores: scores)
    XCTAssertEqual(rankCounts, correct5CardRankCounts)
  }
  
}
