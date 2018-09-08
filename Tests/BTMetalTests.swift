import XCTest
import BTMetalPokerEval
import BTPokerEval

class BTMetalTests: XCTestCase {
  
  var evaluator: Evaluator!

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
  
  func test5CardHandRankCounts() {
    let scores = evaluator.score(hands: allBT5CardHands)
    let rankCounts = countBTHandRanks(scores: scores)
    XCTAssertEqual(rankCounts, correct5CardRankCounts)
  }
  
  func testCvMetalScoreMatch() {
    let hands = randomBTHands(count: sampleSize)
    let cScores = BTPokerEval.score(hands: hands)
    let metalScores = evaluator.score(hands: hands)
    var agreeCount = 0
    for (a, b) in zip(cScores, metalScores) {
      if a == b { agreeCount += 1 }
    }
    XCTAssertEqual(agreeCount, sampleSize)
  }
  
}
