import Foundation

extension UInt32 {
  
  func bitCount() -> UInt32 {
    // http://graphics.stanford.edu/~seander/bithacks.html#CountBitsSetParallel
    var x = self &- ((self >> 1) & 0x55555555)
    x = (x & 0x33333333) &+ ((x >>  2) & 0x33333333)
    return (((x &+ (x >> 4)) & 0x0F0F0F0F) &* 0x01010101) >> 24
  }
  
  func binaryString() -> String {
    var s = ""
    for i: UInt32 in (0 ..< 32).reversed() {
      s += String((self >> i) & 1)
      if i==16 { s+=" " }
    }
    return s
  }
  
}

extension UInt64 {
  
  func bitCount() -> UInt64 {
    // http://graphics.stanford.edu/~seander/bithacks.html#CountBitsSetParallel
    var x = self &- ((self >> 1) & 0x5555555555555555)
    x = (x & 0x3333333333333333) &+ ((x >>  2) & 0x3333333333333333)
    return (((x &+ (x >> 4)) & 0x0F0F0F0F0F0F0F0F) &* 0x0101010101010101) >> 56
  }
  
  func binaryString() -> String {
    var s = ""
    for i: UInt64 in (0 ..< 64).reversed() {
      s += String((self >> i) & 1)
      if i==16 || i==32 || i==48 { s+=" " }
    }
    return s
  }
  
}
