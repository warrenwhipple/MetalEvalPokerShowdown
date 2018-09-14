import XCTest
import SKMetalPokerEval
import SKPokerEval

class SKMetalTests: XCTestCase {
    
  var evaluator: Evaluator?
  
  override func setUp() {
    super.setUp()
    evaluator = Evaluator()
  }
  
  override func tearDown() {
    evaluator = nil
    super.tearDown()
  }
  
  func testCanInit() {
    XCTAssertNotNil(evaluator)
  }
  
  func testCanScore() {
    guard let evaluator = evaluator else {
      XCTFail()
      return
    }
    let hands: [Hand] = randomSKHands(count: 1)
    let scores = evaluator.score(hands: hands)
    XCTAssertFalse(scores.isEmpty)
  }
  
  func testCvMetalScoreMatch() {
    guard let evaluator = evaluator else {
      XCTFail()
      return
    }
    let hands = randomSKHands(count: sampleSize)
    let cScores = SKPokerEval.score(hands: hands)
    let metalScores = evaluator.score(hands: hands)
    var agreeCount = 0
    for (a, b) in zip(cScores, metalScores) {
      if a == b { agreeCount += 1 }
    }
    XCTAssertEqual(agreeCount, sampleSize)
  }
  
}
