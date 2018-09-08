import Metal

public class Evaluator {
  
  let commandQueue: MTLCommandQueue
  let pipeline: MTLComputePipelineState
  
  public init?() {
    guard let device = MTLCreateSystemDefaultDevice() else {
      print("Failed to find Metal device.")
      return nil
    }
    guard let commandQueue = device.makeCommandQueue() else {
      print("Failed to make Metal command queue.")
      return nil
    }
    self.commandQueue = commandQueue
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
    commandEncoder.setBuffer(handsBuffer, offset: 0, index: 0)
    commandEncoder.setBuffer(scoresBuffer, offset: 0, index: 1)
    
    // Set variables
    var threadCount = CUnsignedInt(count)
    commandEncoder.setBytes(
      &threadCount,
      length: MemoryLayout<CUnsignedInt>.size,
      index: 2
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
