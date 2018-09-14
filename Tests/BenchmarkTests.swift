import XCTest
import BTPokerEval
import SKPokerEval
import BTMetalPokerEval
import SKMetalPokerEval

private let btHands = randomBTHands(count: sampleSize)
private let skHands = convertToSKHands(btHands: btHands)

class BenchmarkTests: XCTestCase {
  
  func testPerformanceBTPokerEvalPointer() {
    let scoreBuffer = UnsafeMutableBufferPointer<UInt32>
      .allocate(capacity: btHands.count)
    self.measure {
      BTPokerEval.score(
        handPointer: UnsafePointer<UInt64>(btHands),
        scorePointer: scoreBuffer.baseAddress!,
        count: btHands.count
      )
    }
  }

  func testPerformanceSKPokerEvalPointer() {
    let scoreBuffer = UnsafeMutableBufferPointer<UInt16>
      .allocate(capacity: skHands.count)
    self.measure {
      SKPokerEval.score(
        handPointer: UnsafePointer<UInt64>(skHands),
        scorePointer: scoreBuffer.baseAddress!,
        count: skHands.count
      )
    }
  }
  
  func testPerformanceBTMetalPokerEval() {
    guard let evaluator = BTMetalPokerEval.Evaluator() else {
      XCTFail()
      return
    }
    let handBuffer = evaluator.makeHandBuffer(hands: btHands)!
    let scoreBuffer = evaluator.makeScoreBuffer(count: btHands.count)!
    self.measure {
      let commandBuffer = evaluator.dispatchScoreCommand(
        handBuffer: handBuffer,
        scoreBuffer: scoreBuffer,
        count: btHands.count
      )!
      commandBuffer.waitUntilCompleted()
    }
  }
  
  func testPerformanceSKMetalPokerEval() {
    guard let evaluator = SKMetalPokerEval.Evaluator() else {
      XCTFail()
      return
    }
    let handBuffer = evaluator.makeHandBuffer(hands: skHands)!
    let scoreBuffer = evaluator.makeScoreBuffer(count: skHands.count)!
    self.measure {
      let commandBuffer = evaluator.dispatchScoreCommand(
        handBuffer: handBuffer,
        scoreBuffer: scoreBuffer,
        count: skHands.count
        )!
      commandBuffer.waitUntilCompleted()
    }
  }

}
