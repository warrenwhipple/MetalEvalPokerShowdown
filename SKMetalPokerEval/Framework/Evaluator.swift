import Metal
import CSKPokerEvalCopyLookupTables

public class Evaluator {
  
  let commandQueue: MTLCommandQueue
  let pipeline: MTLComputePipelineState
  let
  cardBuffer,
  flushCheckBuffer,
  suitKroneckerBuffer,
  flushRanksBuffer,
  offsetsBuffer,
  rankHashBuffer: MTLBuffer
  
  public init?() {
    
    // Setup access to Metal device
    guard let device = MTLCreateSystemDefaultDevice() else {
      print("Failed to find Metal device.")
      return nil
    }
    guard let commandQueue = device.makeCommandQueue() else {
      print("Failed to make Metal command queue.")
      return nil
    }
    self.commandQueue = commandQueue
    
    // Setup access to Metal program
    let frameworkBundle = Bundle(for: type(of: self))
    let library: MTLLibrary
    do {
      library = try device.makeDefaultLibrary(bundle: frameworkBundle)
    } catch {
      print("Failed to find Metal library \"\(frameworkBundle)\".")
      return nil
    }
    guard let function = library
      .makeFunction(name: "scoreKernel") else {
        print("Failed to find Metal function \"scoreKernel\".")
        return nil
    }
    let pipeline: MTLComputePipelineState
    do {
      pipeline = try device.makeComputePipelineState(function: function)
    } catch {
      print("Failed to make Metal pipeline \"scoreKernel\".")
      print(error)
      return nil
    }
    self.pipeline = pipeline
    
    // Copy lookup table data to buffers
    guard
      let cardBuffer = device.makeBuffer(length: cardTableSize(), options: []),
      let flushCheckBuffer = device.makeBuffer(length: flushCheckTableSize(), options: []),
      let suitKroneckerBuffer = device.makeBuffer(length: suitKroneckerTableSize(), options: []),
      let flushRanksBuffer = device.makeBuffer(length: flushRanksTableSize(), options: []),
      let offsetsBuffer = device.makeBuffer(length: offsetsTableSize(), options: []),
      let rankHashBuffer = device.makeBuffer(length: rankHashTableSize(), options: [])
      else {
        print("Failed to make Metal buffers for lookup tables.")
        return nil
    }
    cardTableCopy(cardBuffer.contents().assumingMemoryBound(to: uint_fast32_t.self))
    flushCheckTableCopy(flushCheckBuffer.contents().assumingMemoryBound(to: int_fast8_t.self))
    suitKroneckerTableCopy(suitKroneckerBuffer.contents().assumingMemoryBound(to: uint_fast16_t.self))
    flushRanksTableCopy(flushRanksBuffer.contents().assumingMemoryBound(to: UInt16.self))
    offsetsTableCopy(offsetsBuffer.contents().assumingMemoryBound(to: UInt16.self))
    rankHashTableCopy(rankHashBuffer.contents().assumingMemoryBound(to: UInt16.self))
    self.cardBuffer = cardBuffer
    self.flushCheckBuffer = flushCheckBuffer
    self.suitKroneckerBuffer = suitKroneckerBuffer
    self.flushRanksBuffer = flushRanksBuffer
    self.offsetsBuffer = offsetsBuffer
    self.rankHashBuffer = rankHashBuffer
  }
  
  public func dispatchScoreCommand(
    handsBuffer: MTLBuffer,
    scoresBuffer: MTLBuffer,
    count: Int) -> MTLCommandBuffer? {
    
    // Initialize one-off command queue and encoder
    guard let commandBuffer = commandQueue
      .makeCommandBuffer() else {
        print("Failed to make Metal command buffer.")
        return nil
    }
    guard let commandEncoder = commandBuffer
      .makeComputeCommandEncoder() else {
        print("Failed to make Metal compute command encoder.")
        return nil
    }
    commandEncoder.setComputePipelineState(pipeline)
    
    // Set buffer pointers
    commandEncoder.setBuffer(cardBuffer, offset: 0, index: 0)
    commandEncoder.setBuffer(flushCheckBuffer, offset: 0, index: 1)
    commandEncoder.setBuffer(suitKroneckerBuffer, offset: 0, index: 2)
    commandEncoder.setBuffer(flushRanksBuffer, offset: 0, index: 3)
    commandEncoder.setBuffer(offsetsBuffer, offset: 0, index: 4)
    commandEncoder.setBuffer(rankHashBuffer, offset: 0, index: 5)
    commandEncoder.setBuffer(handsBuffer, offset: 0, index: 6)
    commandEncoder.setBuffer(scoresBuffer, offset: 0, index: 7)

    // Set variables
    var threadCount = CUnsignedInt(count)
    commandEncoder.setBytes(
      &threadCount,
      length: MemoryLayout<CUnsignedInt>.size,
      index: 8
    )
    
    // Calculate optimal execution threadgroup size and grid size
    let w = pipeline.threadExecutionWidth
    // TODO: Benchmark larger threadgroups
    // let h = pipeline.maxTotalThreadsPerThreadgroup / w
    let threadsPerThreadgroup = MTLSize(
      width: w,
      height: 1,
      depth: 1
    )
    let threadgroupsPerGrid = MTLSize(
      width: (count + w - 1) / w,
      height: 1,
      depth: 1
    )
    
    // Dispatch execution request
    commandEncoder.dispatchThreadgroups(
      threadgroupsPerGrid,
      threadsPerThreadgroup: threadsPerThreadgroup)
    commandEncoder.endEncoding()
    commandBuffer.commit()
    
    // Return queued command buffer
    return commandBuffer
  }
  
  public func makeHandsBuffer(hands: [Hand]) -> MTLBuffer? {
    return commandQueue.device.makeBuffer(
      bytes: UnsafeRawPointer(hands),
      length: MemoryLayout<Hand>.stride * hands.count,
      options: []
    )
  }
  
  public func makeScoreBuffer(count: Int) -> MTLBuffer? {
    return commandQueue.device.makeBuffer(
      length: MemoryLayout<Score>.stride * count,
      options: []
    )
  }
  
  public func makeScoresArray(scoresBuffer: MTLBuffer, count: Int) -> [Score] {
    let scoresPointer = scoresBuffer
      .contents()
      .assumingMemoryBound(to: Score.self)
    let scoresBufferPointer = UnsafeBufferPointer(
      start: scoresPointer,
      count: count
    )
    return [Score](scoresBufferPointer)
  }
  
  public func score(hands: [Hand]) -> [Score] {
    guard let handsBuffer = makeHandsBuffer(hands: hands) else { return [] }
    guard let scoresBuffer = makeScoreBuffer(count: hands.count) else { return [] }
    guard let commandBuffer = dispatchScoreCommand(
      handsBuffer: handsBuffer,
      scoresBuffer: scoresBuffer,
      count: hands.count
      ) else { return [] }
    commandBuffer.waitUntilCompleted()
    let scores = makeScoresArray(scoresBuffer: scoresBuffer, count: hands.count)
    return scores
  }
  
}
