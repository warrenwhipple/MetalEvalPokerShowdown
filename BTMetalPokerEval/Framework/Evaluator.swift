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
    handBuffer: MTLBuffer,
    scoreBuffer: MTLBuffer,
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
    commandEncoder.setBuffer(handBuffer, offset: 0, index: 0)
    commandEncoder.setBuffer(scoreBuffer, offset: 0, index: 1)
    
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
  
  public func makeHandBuffer(hands: [Hand]) -> MTLBuffer? {
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
  
  public func makeScoreArray(scoreBuffer: MTLBuffer, count: Int) -> [Score] {
    let scorePointer = scoreBuffer
      .contents()
      .assumingMemoryBound(to: Score.self)
    let scoreBufferPointer = UnsafeBufferPointer(
      start: scorePointer,
      count: count
    )
    return [Score](scoreBufferPointer)
  }
  
  public func score(hands: [Hand]) -> [Score] {
    guard let handBuffer = makeHandBuffer(hands: hands) else { return [] }
    guard let scoreBuffer = makeScoreBuffer(count: hands.count) else { return [] }
    guard let commandBuffer = dispatchScoreCommand(
      handBuffer: handBuffer,
      scoreBuffer: scoreBuffer,
      count: hands.count
      ) else { return [] }
    commandBuffer.waitUntilCompleted()
    let scores = makeScoreArray(scoreBuffer: scoreBuffer, count: hands.count)
    return scores
  }
  
}
