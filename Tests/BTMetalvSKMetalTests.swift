import XCTest
import BTMetalPokerEval
import SKMetalPokerEval

class BTMetalvSKMetalTests: XCTestCase {
  
  var btEvaluator: BTMetalPokerEval.Evaluator!
  var skEvaluator: SKMetalPokerEval.Evaluator!

  override func setUp() {
    super.setUp()
    btEvaluator = BTMetalPokerEval.Evaluator()
    skEvaluator = SKMetalPokerEval.Evaluator()
  }
  
  override func tearDown() {
    btEvaluator = nil
    skEvaluator = nil
    super.tearDown()
  }
  
  func testBTvSKRelativeScores() {
    let aBTHands = randomBTHands(count: sampleSize)
    let bBTHands = randomBTHands(count: sampleSize)
    let aSKHands = convertToSKHands(btHands: aBTHands)
    let bSKHands = convertToSKHands(btHands: bBTHands)
    let aBTScores = btEvaluator.score(hands: aBTHands)
    let bBTScores = btEvaluator.score(hands: bBTHands)
    let aSKScores = skEvaluator.score(hands: aSKHands)
    let bSKScores = skEvaluator.score(hands: bSKHands)
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
