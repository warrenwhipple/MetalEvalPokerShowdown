import XCTest
import SKPokerEval
import BTPokerEval

class BTvSKTests: XCTestCase {
    
  func testConvertToSKHand() {
    let btHands = randomBTHands(count: sampleSize)
    let skHands = convertToSKHands(btHands: btHands)
    var validSKHandCount = 0
    for skHand in skHands {
      if isSK7CardHand(skHand) { validSKHandCount += 1 }
    }
    XCTAssertEqual(validSKHandCount, skHands.count)
  }
  
  func testBTvSKRelativeScores() {
    let aBTHands = randomBTHands(count: sampleSize)
    let bBTHands = randomBTHands(count: sampleSize)
    let aSKHands = convertToSKHands(btHands: aBTHands)
    let bSKHands = convertToSKHands(btHands: bBTHands)
    let aBTScores = BTPokerEval.score(hands: aBTHands)
    let bBTScores = BTPokerEval.score(hands: bBTHands)
    let aSKScores = SKPokerEval.score(hands: aSKHands)
    let bSKScores = SKPokerEval.score(hands: bSKHands)
    var matchingCount = 0
    for i in (0 ..< sampleSize) {
      let a = aBTScores[i]
      let b = bBTScores[i]
      let x = aSKScores[i]
      let y = bSKScores[i]
      if ((a>b)&&(x>y)) || ((a<b)&&(x<y)) || ((a==b)&&(x==y)) {
        matchingCount += 1
      }
    }
    XCTAssertEqual(matchingCount, sampleSize)
  }
  
}
