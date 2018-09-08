import XCTest
import SKPokerEval

class SKTests: XCTestCase {
    
  func testRandomHand() {
    let hands = randomSKHands(count: sampleSize)
    var validHandCount = 0
    for hand in hands {
      if isSK7CardHand(hand) { validHandCount += 1 }
    }
    XCTAssertEqual(validHandCount, hands.count)
  }
    
}
