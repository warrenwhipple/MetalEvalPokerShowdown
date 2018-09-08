import XCTest
import BTPokerEval
import SKPokerEval
import BTMetalPokerEval
import SKMetalPokerEval


private let btHands = randomBTHands(count: 1_000_000)
private let skHands = convertToSKHands(btHands: btHands)

class BenchmarkTests: XCTestCase {
  
  func testPerformanceRandomBTHands() {
    measure {
      let _ = randomBTHands(count: 1_000_000)
    }
  }
  
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
    let evaluator = BTMetalPokerEval.Evaluator()!
    let handBuffer = evaluator.makeHandsBuffer(hands: btHands)!
    let scoreBuffer = evaluator.makeScoreBuffer(count: btHands.count)!
    self.measure {
      let commandBuffer = evaluator.dispatchScoreCommand(
        handsBuffer: handBuffer,
        scoresBuffer: scoreBuffer,
        count: btHands.count
      )!
      commandBuffer.waitUntilCompleted()
    }
  }
  
  func testPerformanceSKMetalPokerEval() {
    let evaluator = SKMetalPokerEval.Evaluator()!
    let handBuffer = evaluator.makeHandsBuffer(hands: skHands)!
    let scoreBuffer = evaluator.makeScoreBuffer(count: skHands.count)!
    self.measure {
      let commandBuffer = evaluator.dispatchScoreCommand(
        handsBuffer: handBuffer,
        scoresBuffer: scoreBuffer,
        count: skHands.count
        )!
      commandBuffer.waitUntilCompleted()
    }
  }

}
