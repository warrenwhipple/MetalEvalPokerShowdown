# MetalPokerEvalShowdown

Benchmark some CPU vs GPU 7-card poker hand evaluators on iOS and macOS. 

## Tests

All unit tests use XCTest. Tests are split into macOS and iOS testing targets, but are built from the same Swift test files.

macOS unit tests are performed with the standalone `Showdown_macOSTests` target.

iOS unit tests on an iOS device require an app testing target, so a minimal empty `Showdown_iOS` app is included as the testing target for the `Showdown_iOSTests` target. Metal tests will fail in the iOS simulator.

## Evaluators

Each evaluator is encapsulted in a Swift framework subproject. Framework targets build for both iOS and macOS architectures.

### SKPokerEval

[SpecialK](https://github.com/kennethshackleton/SKPokerEval) is a C++ evaluator that uses a brute force precalculated perfect hash with 136 kB of lookup tables as described [here](https://github.com/kennethshackleton/SKPokerEval/blob/v1.9/README.md).

This SKPokerEval framework is Swift wrapper around a C implementation of the [SpecialK v1.9](https://github.com/kennethshackleton/SKPokerEval/tree/v1.9) evaluator. Evaluation is performed on a single CPU thread.

```swift
import SKPokerEval

let hands = randomSKHands(count: 10_000)

// With Swift arrays
let scores = SKPokerEval.score(hands: hands)

// With pointers
let scoreBuffer = UnsafeMutableBufferPointer<UInt16>
  .allocate(capacity: hands.count)
score(handPointer: UnsafePointer<UInt64>(hands),
      scorePointer: scoreBuffer.baseAddress!,
      count: skHands.count)
```

### SKMetalPokerEval

A Swift convenience class for a Metal implementation of the [SpecialK v1.9](https://github.com/kennethshackleton/SKPokerEval/tree/v1.9) evaluator. An initialized `Evaluator` object loads the Metal pipeline and copies the lookup tables to Metal buffers. Evaluation is performed in parallel at the execution width of the default Metal GPU. 

```swift
import SKMetalPokerEval

let hands = randomSKHands(count: 10_000)
let evaluator = Evaluator()!

// With Swift arrays
let scores = evaluator.score(hands: hands)

// With Metal buffers
let handBuffer = evaluator.makeHandBuffer(hands: hands)!
let scoreBuffer = evaluator.makeScoreBuffer(count: hands.count)!
let commandBuffer = evaluator.dispatchScoreCommand(
  handBuffer: handBuffer,
  scoreBuffer: scoreBuffer,
  count: skHands.count
)!
commandBuffer.waitUntilCompleted()
```

### BTPokerEval

A Swift wrapper around a bit twiddling (lookup tableless) evaluator implemented in C. Evaluation is performed on a single CPU thread.

```swift
import BTPokerEval

let hands = randomBTHands(count: 10_000)

// With Swift arrays
let scores = SKPokerEval.score(hands: hands)

// With pointers
let scoreBuffer = UnsafeMutableBufferPointer<UInt16>
  .allocate(capacity: hands.count)
score(handPointer: UnsafePointer<UInt64>(hands),
      scorePointer: scoreBuffer.baseAddress!,
      count: skHands.count)
```

### BTMetalPokerEval

A Swift convenience class for a Metal implementation of BTPokerEval. An initialized `Evaluator` object loads the Metal pipeline. Evaluation is performed in parallel at the execution width of the default Metal GPU.

```swift
import BTMetalPokerEval

let hands = randomBTHands(count: 10_000)
let evaluator = Evaluator()!

// With Swift arrays
let scores = evaluator.score(hands: hands)

// With Metal buffers
let handBuffer = evaluator.makeHandBuffer(hands: hands)!
let scoreBuffer = evaluator.makeScoreBuffer(count: hands.count)!
let commandBuffer = evaluator.dispatchScoreCommand(
  handBuffer: handBuffer,
  scoreBuffer: scoreBuffer,
  count: skHands.count
)!
commandBuffer.waitUntilCompleted()
```

## Contributing

Contributions are welcome, including improvements to the benchmarking code, individual evaluator performance enhancements, and addition of other evaluators.
