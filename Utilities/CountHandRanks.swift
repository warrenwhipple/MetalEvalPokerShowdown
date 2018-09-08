import Foundation

let correct5CardRankCounts = [
  1302540, // high card
  1098240, // one pair
  123552,  // two pair
  54912,   // three of a kind
  10200,   // straight
  5108,    // flush
  3744,    // full house
  624,     // four of a kind
  40       // straight flush
]

let correct7CardRankCounts = [
  23294460, // high card
  58627800, // one pair
  31433400, // two pair
  6461620,  // three of a kind
  6180020,  // straight
  4047644,  // flush
  3473184,  // full house
  224848,   // four of a kind
  41584     // striaght flush
]

func countBTHandRanks(scores: [UInt32]) -> [Int] {
  var counts = Array<Int>(repeating: 0, count: 9)
  var errorCount = 0
  for score in scores {
    let handRank = Int(score >> 26)
    if handRank < counts.count {
      counts[handRank] += 1
    } else {
      errorCount += 1
    }
  }
  if errorCount > 0 { print("countBTHandRanks() errors: \(errorCount)") }
  return counts
}
