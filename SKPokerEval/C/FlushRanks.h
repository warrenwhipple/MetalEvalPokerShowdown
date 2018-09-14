#ifndef SKPOKEREVAL_FLUSHRANKS_H
#define SKPOKEREVAL_FLUSHRANKS_H

#include <stdint.h>

// 8129 * 16 / 8 = 16258 bytes = 16 kB
uint16_t const flush_ranks[8129] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 7454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5864, 0, 0,
  0, 0, 0, 0, 0, 5865, 0, 0, 0, 5866, 0, 5867, 7455, 7455, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 5868, 0, 0, 0, 0, 0, 0, 0, 5869, 0, 0, 0, 5870, 0,
  5871, 5872, 7454, 0, 0, 0, 0, 0, 0, 0, 5873, 0, 0, 0, 5874, 0, 5875, 5876,
  5876, 0, 0, 0, 5877, 0, 5878, 5879, 5879, 0, 5880, 5881, 5881, 7456, 7456,
  7456, 7456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5882, 0, 0, 0, 0, 0,
  0, 0, 5883, 0, 0, 0, 5884, 0, 5885, 5886, 7454, 0, 0, 0, 0, 0, 0, 0, 5887, 0,
  0, 0, 5888, 0, 5889, 5890, 5890, 0, 0, 0, 5891, 0, 5892, 5893, 5893, 0, 5894,
  5895, 5895, 5896, 5896, 7455, 7455, 0, 0, 0, 0, 0, 0, 0, 5897, 0, 0, 0, 5898,
  0, 5899, 5900, 5900, 0, 0, 0, 5901, 0, 5902, 5903, 5903, 0, 5904, 5905, 5905,
  5906, 5906, 5906, 7454, 0, 0, 0, 5907, 0, 5908, 5909, 5909, 0, 5910, 5911,
  5911, 5912, 5912, 5912, 5912, 0, 5913, 5914, 5914, 5915, 5915, 5915, 5915,
  7457, 7457, 7457, 7457, 7457, 7457, 7457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 5916, 0, 0, 0, 0, 0, 0, 0, 5917, 0, 0, 0, 5918, 0, 5919, 5920,
  7454, 0, 0, 0, 0, 0, 0, 0, 5921, 0, 0, 0, 5922, 0, 5923, 5924, 5924, 0, 0, 0,
  5925, 0, 5926, 5927, 5927, 0, 5928, 5929, 5929, 5930, 5930, 7455, 7455, 0, 0,
  0, 0, 0, 0, 0, 5931, 0, 0, 0, 5932, 0, 5933, 5934, 5934, 0, 0, 0, 5935, 0,
  5936, 5937, 5937, 0, 5938, 5939, 5939, 5940, 5940, 5940, 7454, 0, 0, 0, 5941,
  0, 5942, 5943, 5943, 0, 5944, 5945, 5945, 5946, 5946, 5946, 5946, 0, 5947,
  5948, 5948, 5949, 5949, 5949, 5949, 5950, 5950, 5950, 5950, 7456, 7456, 7456,
  0, 0, 0, 0, 0, 0, 0, 0, 5951, 0, 0, 0, 5952, 0, 5953, 5954, 5954, 0, 0, 0,
  5955, 0, 5956, 5957, 5957, 0, 5958, 5959, 5959, 5960, 5960, 5960, 7454, 0, 0,
  0, 5961, 0, 5962, 5963, 5963, 0, 5964, 5965, 5965, 5966, 5966, 5966, 5966, 0,
  5967, 5968, 5968, 5969, 5969, 5969, 5969, 5970, 5970, 5970, 5970, 5970, 5970,
  7455, 0, 0, 0, 0, 5971, 0, 5972, 5973, 5973, 0, 5974, 5975, 5975, 5976, 5976,
  5976, 5976, 0, 5977, 5978, 5978, 5979, 5979, 5979, 5979, 5980, 5980, 5980,
  5980, 5980, 5980, 5980, 0, 0, 5981, 5982, 5982, 5983, 5983, 5983, 5983, 5984,
  5984, 5984, 5984, 5984, 5984, 5984, 0, 7458, 7458, 7458, 7458, 7458, 7458,
  7458, 0, 7458, 7458, 7458, 0, 7458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 5985, 0, 0, 0, 0, 0, 0, 0, 5986, 0, 0, 0, 5987, 0, 5988, 5989,
  7454, 0, 0, 0, 0, 0, 0, 0, 5990, 0, 0, 0, 5991, 0, 5992, 5993, 5993, 0, 0, 0,
  5994, 0, 5995, 5996, 5996, 0, 5997, 5998, 5998, 5999, 5999, 7455, 7455, 0, 0,
  0, 0, 0, 0, 0, 6000, 0, 0, 0, 6001, 0, 6002, 6003, 6003, 0, 0, 0, 6004, 0,
  6005, 6006, 6006, 0, 6007, 6008, 6008, 6009, 6009, 6009, 7454, 0, 0, 0, 6010,
  0, 6011, 6012, 6012, 0, 6013, 6014, 6014, 6015, 6015, 6015, 6015, 0, 6016,
  6017, 6017, 6018, 6018, 6018, 6018, 6019, 6019, 6019, 6019, 7456, 7456, 7456,
  0, 0, 0, 0, 0, 0, 0, 0, 6020, 0, 0, 0, 6021, 0, 6022, 6023, 6023, 0, 0, 0,
  6024, 0, 6025, 6026, 6026, 0, 6027, 6028, 6028, 6029, 6029, 6029, 7454, 0, 0,
  0, 6030, 0, 6031, 6032, 6032, 0, 6033, 6034, 6034, 6035, 6035, 6035, 6035, 0,
  6036, 6037, 6037, 6038, 6038, 6038, 6038, 6039, 6039, 6039, 6039, 6039, 6039,
  7455, 0, 0, 0, 0, 6040, 0, 6041, 6042, 6042, 0, 6043, 6044, 6044, 6045, 6045,
  6045, 6045, 0, 6046, 6047, 6047, 6048, 6048, 6048, 6048, 6049, 6049, 6049,
  6049, 6049, 6049, 6049, 0, 0, 6050, 6051, 6051, 6052, 6052, 6052, 6052, 6053,
  6053, 6053, 6053, 6053, 6053, 6053, 0, 6054, 6054, 6054, 6054, 6054, 6054,
  6054, 0, 7457, 7457, 7457, 0, 7457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6055, 0, 0,
  0, 6056, 0, 6057, 6058, 6058, 0, 0, 0, 6059, 0, 6060, 6061, 6061, 0, 6062,
  6063, 6063, 6064, 6064, 6064, 7454, 0, 0, 0, 6065, 0, 6066, 6067, 6067, 0,
  6068, 6069, 6069, 6070, 6070, 6070, 6070, 0, 6071, 6072, 6072, 6073, 6073,
  6073, 6073, 6074, 6074, 6074, 6074, 6074, 6074, 7455, 0, 0, 0, 0, 6075, 0,
  6076, 6077, 6077, 0, 6078, 6079, 6079, 6080, 6080, 6080, 6080, 0, 6081, 6082,
  6082, 6083, 6083, 6083, 6083, 6084, 6084, 6084, 6084, 6084, 6084, 6084, 0, 0,
  6085, 6086, 6086, 6087, 6087, 6087, 6087, 6088, 6088, 6088, 6088, 6088, 6088,
  6088, 0, 6089, 6089, 6089, 6089, 6089, 6089, 6089, 0, 6089, 6089, 6089, 0,
  7456, 0, 0, 0, 0, 0, 0, 6090, 0, 6091, 6092, 6092, 0, 6093, 6094, 6094, 6095,
  6095, 6095, 6095, 0, 6096, 6097, 6097, 6098, 6098, 6098, 6098, 6099, 6099,
  6099, 6099, 6099, 6099, 6099, 0, 0, 6100, 6101, 6101, 6102, 6102, 6102, 6102,
  6103, 6103, 6103, 6103, 6103, 6103, 6103, 0, 6104, 6104, 6104, 6104, 6104,
  6104, 6104, 0, 6104, 6104, 6104, 0, 6104, 0, 0, 0, 0, 6105, 6106, 6106, 6107,
  6107, 6107, 6107, 6108, 6108, 6108, 6108, 6108, 6108, 6108, 0, 6109, 6109,
  6109, 6109, 6109, 6109, 6109, 0, 6109, 6109, 6109, 0, 6109, 0, 0, 0, 7459,
  7459, 7459, 7459, 7459, 7459, 7459, 0, 7459, 7459, 7459, 0, 7459, 0, 0, 0,
  7459, 7459, 7459, 0, 7459, 0, 0, 0, 7459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6110, 0, 0, 0, 0, 0, 0, 0, 6111, 0, 0, 0, 6112,
  0, 6113, 6114, 7454, 0, 0, 0, 0, 0, 0, 0, 6115, 0, 0, 0, 6116, 0, 6117, 6118,
  6118, 0, 0, 0, 6119, 0, 6120, 6121, 6121, 0, 6122, 6123, 6123, 6124, 6124,
  7455, 7455, 0, 0, 0, 0, 0, 0, 0, 6125, 0, 0, 0, 6126, 0, 6127, 6128, 6128, 0,
  0, 0, 6129, 0, 6130, 6131, 6131, 0, 6132, 6133, 6133, 6134, 6134, 6134, 7454,
  0, 0, 0, 6135, 0, 6136, 6137, 6137, 0, 6138, 6139, 6139, 6140, 6140, 6140,
  6140, 0, 6141, 6142, 6142, 6143, 6143, 6143, 6143, 6144, 6144, 6144, 6144,
  7456, 7456, 7456, 0, 0, 0, 0, 0, 0, 0, 0, 6145, 0, 0, 0, 6146, 0, 6147, 6148,
  6148, 0, 0, 0, 6149, 0, 6150, 6151, 6151, 0, 6152, 6153, 6153, 6154, 6154,
  6154, 7454, 0, 0, 0, 6155, 0, 6156, 6157, 6157, 0, 6158, 6159, 6159, 6160,
  6160, 6160, 6160, 0, 6161, 6162, 6162, 6163, 6163, 6163, 6163, 6164, 6164,
  6164, 6164, 6164, 6164, 7455, 0, 0, 0, 0, 6165, 0, 6166, 6167, 6167, 0, 6168,
  6169, 6169, 6170, 6170, 6170, 6170, 0, 6171, 6172, 6172, 6173, 6173, 6173,
  6173, 6174, 6174, 6174, 6174, 6174, 6174, 6174, 0, 0, 6175, 6176, 6176, 6177,
  6177, 6177, 6177, 6178, 6178, 6178, 6178, 6178, 6178, 6178, 0, 6179, 6179,
  6179, 6179, 6179, 6179, 6179, 0, 7457, 7457, 7457, 0, 7457, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 6180, 0, 0, 0, 6181, 0, 6182, 6183, 6183, 0, 0, 0, 6184, 0, 6185,
  6186, 6186, 0, 6187, 6188, 6188, 6189, 6189, 6189, 7454, 0, 0, 0, 6190, 0,
  6191, 6192, 6192, 0, 6193, 6194, 6194, 6195, 6195, 6195, 6195, 0, 6196, 6197,
  6197, 6198, 6198, 6198, 6198, 6199, 6199, 6199, 6199, 6199, 6199, 7455, 0, 0,
  0, 0, 6200, 0, 6201, 6202, 6202, 0, 6203, 6204, 6204, 6205, 6205, 6205, 6205,
  0, 6206, 6207, 6207, 6208, 6208, 6208, 6208, 6209, 6209, 6209, 6209, 6209,
  6209, 6209, 0, 0, 6210, 6211, 6211, 6212, 6212, 6212, 6212, 6213, 6213, 6213,
  6213, 6213, 6213, 6213, 0, 6214, 6214, 6214, 6214, 6214, 6214, 6214, 0, 6214,
  6214, 6214, 0, 7456, 0, 0, 0, 0, 0, 0, 6215, 0, 6216, 6217, 6217, 0, 6218,
  6219, 6219, 6220, 6220, 6220, 6220, 0, 6221, 6222, 6222, 6223, 6223, 6223,
  6223, 6224, 6224, 6224, 6224, 6224, 6224, 6224, 0, 0, 6225, 6226, 6226, 6227,
  6227, 6227, 6227, 6228, 6228, 6228, 6228, 6228, 6228, 6228, 0, 6229, 6229,
  6229, 6229, 6229, 6229, 6229, 0, 6229, 6229, 6229, 0, 6229, 0, 0, 0, 0, 6230,
  6231, 6231, 6232, 6232, 6232, 6232, 6233, 6233, 6233, 6233, 6233, 6233, 6233,
  0, 6234, 6234, 6234, 6234, 6234, 6234, 6234, 0, 6234, 6234, 6234, 0, 6234, 0,
  0, 0, 6235, 6235, 6235, 6235, 6235, 6235, 6235, 0, 6235, 6235, 6235, 0, 6235,
  0, 0, 0, 7458, 7458, 7458, 0, 7458, 0, 0, 0, 7458, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 6236, 0, 0, 0, 6237, 0, 6238, 6239, 6239, 0, 0, 0, 6240, 0,
  6241, 6242, 6242, 0, 6243, 6244, 6244, 6245, 6245, 6245, 7454, 0, 0, 0, 6246,
  0, 6247, 6248, 6248, 0, 6249, 6250, 6250, 6251, 6251, 6251, 6251, 0, 6252,
  6253, 6253, 6254, 6254, 6254, 6254, 6255, 6255, 6255, 6255, 6255, 6255, 7455,
  0, 0, 0, 0, 6256, 0, 6257, 6258, 6258, 0, 6259, 6260, 6260, 6261, 6261, 6261,
  6261, 0, 6262, 6263, 6263, 6264, 6264, 6264, 6264, 6265, 6265, 6265, 6265,
  6265, 6265, 6265, 0, 0, 6266, 6267, 6267, 6268, 6268, 6268, 6268, 6269, 6269,
  6269, 6269, 6269, 6269, 6269, 0, 6270, 6270, 6270, 6270, 6270, 6270, 6270, 0,
  6270, 6270, 6270, 0, 7456, 0, 0, 0, 0, 0, 0, 6271, 0, 6272, 6273, 6273, 0,
  6274, 6275, 6275, 6276, 6276, 6276, 6276, 0, 6277, 6278, 6278, 6279, 6279,
  6279, 6279, 6280, 6280, 6280, 6280, 6280, 6280, 6280, 0, 0, 6281, 6282, 6282,
  6283, 6283, 6283, 6283, 6284, 6284, 6284, 6284, 6284, 6284, 6284, 0, 6285,
  6285, 6285, 6285, 6285, 6285, 6285, 0, 6285, 6285, 6285, 0, 6285, 0, 0, 0, 0,
  6286, 6287, 6287, 6288, 6288, 6288, 6288, 6289, 6289, 6289, 6289, 6289, 6289,
  6289, 0, 6290, 6290, 6290, 6290, 6290, 6290, 6290, 0, 6290, 6290, 6290, 0,
  6290, 0, 0, 0, 6291, 6291, 6291, 6291, 6291, 6291, 6291, 0, 6291, 6291, 6291,
  0, 6291, 0, 0, 0, 6291, 6291, 6291, 0, 6291, 0, 0, 0, 7457, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 6292, 0, 6293, 6294, 6294, 0, 6295, 6296, 6296, 6297, 6297, 6297,
  6297, 0, 6298, 6299, 6299, 6300, 6300, 6300, 6300, 6301, 6301, 6301, 6301,
  6301, 6301, 6301, 0, 0, 6302, 6303, 6303, 6304, 6304, 6304, 6304, 6305, 6305,
  6305, 6305, 6305, 6305, 6305, 0, 6306, 6306, 6306, 6306, 6306, 6306, 6306, 0,
  6306, 6306, 6306, 0, 6306, 0, 0, 0, 0, 6307, 6308, 6308, 6309, 6309, 6309,
  6309, 6310, 6310, 6310, 6310, 6310, 6310, 6310, 0, 6311, 6311, 6311, 6311,
  6311, 6311, 6311, 0, 6311, 6311, 6311, 0, 6311, 0, 0, 0, 6312, 6312, 6312,
  6312, 6312, 6312, 6312, 0, 6312, 6312, 6312, 0, 6312, 0, 0, 0, 6312, 6312,
  6312, 0, 6312, 0, 0, 0, 6312, 0, 0, 0, 0, 0, 0, 0, 0, 6313, 6314, 6314, 6315,
  6315, 6315, 6315, 6316, 6316, 6316, 6316, 6316, 6316, 6316, 0, 6317, 6317,
  6317, 6317, 6317, 6317, 6317, 0, 6317, 6317, 6317, 0, 6317, 0, 0, 0, 6318,
  6318, 6318, 6318, 6318, 6318, 6318, 0, 6318, 6318, 6318, 0, 6318, 0, 0, 0,
  6318, 6318, 6318, 0, 6318, 0, 0, 0, 6318, 0, 0, 0, 0, 0, 0, 0, 7460, 7460,
  7460, 7460, 7460, 7460, 7460, 0, 7460, 7460, 7460, 0, 7460, 0, 0, 0, 7460,
  7460, 7460, 0, 7460, 0, 0, 0, 7460, 0, 0, 0, 0, 0, 0, 0, 7460, 7460, 7460, 0,
  7460, 0, 0, 0, 7460, 0, 0, 0, 0, 0, 0, 0, 7460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6319, 0, 0, 0, 0,
  0, 0, 0, 6320, 0, 0, 0, 6321, 0, 6322, 6323, 7454, 0, 0, 0, 0, 0, 0, 0, 6324,
  0, 0, 0, 6325, 0, 6326, 6327, 6327, 0, 0, 0, 6328, 0, 6329, 6330, 6330, 0,
  6331, 6332, 6332, 6333, 6333, 7455, 7455, 0, 0, 0, 0, 0, 0, 0, 6334, 0, 0, 0,
  6335, 0, 6336, 6337, 6337, 0, 0, 0, 6338, 0, 6339, 6340, 6340, 0, 6341, 6342,
  6342, 6343, 6343, 6343, 7454, 0, 0, 0, 6344, 0, 6345, 6346, 6346, 0, 6347,
  6348, 6348, 6349, 6349, 6349, 6349, 0, 6350, 6351, 6351, 6352, 6352, 6352,
  6352, 6353, 6353, 6353, 6353, 7456, 7456, 7456, 0, 0, 0, 0, 0, 0, 0, 0, 6354,
  0, 0, 0, 6355, 0, 6356, 6357, 6357, 0, 0, 0, 6358, 0, 6359, 6360, 6360, 0,
  6361, 6362, 6362, 6363, 6363, 6363, 7454, 0, 0, 0, 6364, 0, 6365, 6366, 6366,
  0, 6367, 6368, 6368, 6369, 6369, 6369, 6369, 0, 6370, 6371, 6371, 6372, 6372,
  6372, 6372, 6373, 6373, 6373, 6373, 6373, 6373, 7455, 0, 0, 0, 0, 6374, 0,
  6375, 6376, 6376, 0, 6377, 6378, 6378, 6379, 6379, 6379, 6379, 0, 6380, 6381,
  6381, 6382, 6382, 6382, 6382, 6383, 6383, 6383, 6383, 6383, 6383, 6383, 0, 0,
  6384, 6385, 6385, 6386, 6386, 6386, 6386, 6387, 6387, 6387, 6387, 6387, 6387,
  6387, 0, 6388, 6388, 6388, 6388, 6388, 6388, 6388, 0, 7457, 7457, 7457, 0,
  7457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6389, 0, 0, 0, 6390, 0, 6391, 6392, 6392,
  0, 0, 0, 6393, 0, 6394, 6395, 6395, 0, 6396, 6397, 6397, 6398, 6398, 6398,
  7454, 0, 0, 0, 6399, 0, 6400, 6401, 6401, 0, 6402, 6403, 6403, 6404, 6404,
  6404, 6404, 0, 6405, 6406, 6406, 6407, 6407, 6407, 6407, 6408, 6408, 6408,
  6408, 6408, 6408, 7455, 0, 0, 0, 0, 6409, 0, 6410, 6411, 6411, 0, 6412, 6413,
  6413, 6414, 6414, 6414, 6414, 0, 6415, 6416, 6416, 6417, 6417, 6417, 6417,
  6418, 6418, 6418, 6418, 6418, 6418, 6418, 0, 0, 6419, 6420, 6420, 6421, 6421,
  6421, 6421, 6422, 6422, 6422, 6422, 6422, 6422, 6422, 0, 6423, 6423, 6423,
  6423, 6423, 6423, 6423, 0, 6423, 6423, 6423, 0, 7456, 0, 0, 0, 0, 0, 0, 6424,
  0, 6425, 6426, 6426, 0, 6427, 6428, 6428, 6429, 6429, 6429, 6429, 0, 6430,
  6431, 6431, 6432, 6432, 6432, 6432, 6433, 6433, 6433, 6433, 6433, 6433, 6433,
  0, 0, 6434, 6435, 6435, 6436, 6436, 6436, 6436, 6437, 6437, 6437, 6437, 6437,
  6437, 6437, 0, 6438, 6438, 6438, 6438, 6438, 6438, 6438, 0, 6438, 6438, 6438,
  0, 6438, 0, 0, 0, 0, 6439, 6440, 6440, 6441, 6441, 6441, 6441, 6442, 6442,
  6442, 6442, 6442, 6442, 6442, 0, 6443, 6443, 6443, 6443, 6443, 6443, 6443, 0,
  6443, 6443, 6443, 0, 6443, 0, 0, 0, 6444, 6444, 6444, 6444, 6444, 6444, 6444,
  0, 6444, 6444, 6444, 0, 6444, 0, 0, 0, 7458, 7458, 7458, 0, 7458, 0, 0, 0,
  7458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6445, 0, 0, 0, 6446, 0, 6447,
  6448, 6448, 0, 0, 0, 6449, 0, 6450, 6451, 6451, 0, 6452, 6453, 6453, 6454,
  6454, 6454, 7454, 0, 0, 0, 6455, 0, 6456, 6457, 6457, 0, 6458, 6459, 6459,
  6460, 6460, 6460, 6460, 0, 6461, 6462, 6462, 6463, 6463, 6463, 6463, 6464,
  6464, 6464, 6464, 6464, 6464, 7455, 0, 0, 0, 0, 6465, 0, 6466, 6467, 6467, 0,
  6468, 6469, 6469, 6470, 6470, 6470, 6470, 0, 6471, 6472, 6472, 6473, 6473,
  6473, 6473, 6474, 6474, 6474, 6474, 6474, 6474, 6474, 0, 0, 6475, 6476, 6476,
  6477, 6477, 6477, 6477, 6478, 6478, 6478, 6478, 6478, 6478, 6478, 0, 6479,
  6479, 6479, 6479, 6479, 6479, 6479, 0, 6479, 6479, 6479, 0, 7456, 0, 0, 0, 0,
  0, 0, 6480, 0, 6481, 6482, 6482, 0, 6483, 6484, 6484, 6485, 6485, 6485, 6485,
  0, 6486, 6487, 6487, 6488, 6488, 6488, 6488, 6489, 6489, 6489, 6489, 6489,
  6489, 6489, 0, 0, 6490, 6491, 6491, 6492, 6492, 6492, 6492, 6493, 6493, 6493,
  6493, 6493, 6493, 6493, 0, 6494, 6494, 6494, 6494, 6494, 6494, 6494, 0, 6494,
  6494, 6494, 0, 6494, 0, 0, 0, 0, 6495, 6496, 6496, 6497, 6497, 6497, 6497,
  6498, 6498, 6498, 6498, 6498, 6498, 6498, 0, 6499, 6499, 6499, 6499, 6499,
  6499, 6499, 0, 6499, 6499, 6499, 0, 6499, 0, 0, 0, 6500, 6500, 6500, 6500,
  6500, 6500, 6500, 0, 6500, 6500, 6500, 0, 6500, 0, 0, 0, 6500, 6500, 6500, 0,
  6500, 0, 0, 0, 7457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6501, 0, 6502, 6503, 6503,
  0, 6504, 6505, 6505, 6506, 6506, 6506, 6506, 0, 6507, 6508, 6508, 6509, 6509,
  6509, 6509, 6510, 6510, 6510, 6510, 6510, 6510, 6510, 0, 0, 6511, 6512, 6512,
  6513, 6513, 6513, 6513, 6514, 6514, 6514, 6514, 6514, 6514, 6514, 0, 6515,
  6515, 6515, 6515, 6515, 6515, 6515, 0, 6515, 6515, 6515, 0, 6515, 0, 0, 0, 0,
  6516, 6517, 6517, 6518, 6518, 6518, 6518, 6519, 6519, 6519, 6519, 6519, 6519,
  6519, 0, 6520, 6520, 6520, 6520, 6520, 6520, 6520, 0, 6520, 6520, 6520, 0,
  6520, 0, 0, 0, 6521, 6521, 6521, 6521, 6521, 6521, 6521, 0, 6521, 6521, 6521,
  0, 6521, 0, 0, 0, 6521, 6521, 6521, 0, 6521, 0, 0, 0, 6521, 0, 0, 0, 0, 0, 0,
  0, 0, 6522, 6523, 6523, 6524, 6524, 6524, 6524, 6525, 6525, 6525, 6525, 6525,
  6525, 6525, 0, 6526, 6526, 6526, 6526, 6526, 6526, 6526, 0, 6526, 6526, 6526,
  0, 6526, 0, 0, 0, 6527, 6527, 6527, 6527, 6527, 6527, 6527, 0, 6527, 6527,
  6527, 0, 6527, 0, 0, 0, 6527, 6527, 6527, 0, 6527, 0, 0, 0, 6527, 0, 0, 0, 0,
  0, 0, 0, 6528, 6528, 6528, 6528, 6528, 6528, 6528, 0, 6528, 6528, 6528, 0,
  6528, 0, 0, 0, 6528, 6528, 6528, 0, 6528, 0, 0, 0, 6528, 0, 0, 0, 0, 0, 0, 0,
  7459, 7459, 7459, 0, 7459, 0, 0, 0, 7459, 0, 0, 0, 0, 0, 0, 0, 7459, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6529, 0, 0, 0, 6530,
  0, 6531, 6532, 6532, 0, 0, 0, 6533, 0, 6534, 6535, 6535, 0, 6536, 6537, 6537,
  6538, 6538, 6538, 7454, 0, 0, 0, 6539, 0, 6540, 6541, 6541, 0, 6542, 6543,
  6543, 6544, 6544, 6544, 6544, 0, 6545, 6546, 6546, 6547, 6547, 6547, 6547,
  6548, 6548, 6548, 6548, 6548, 6548, 7455, 0, 0, 0, 0, 6549, 0, 6550, 6551,
  6551, 0, 6552, 6553, 6553, 6554, 6554, 6554, 6554, 0, 6555, 6556, 6556, 6557,
  6557, 6557, 6557, 6558, 6558, 6558, 6558, 6558, 6558, 6558, 0, 0, 6559, 6560,
  6560, 6561, 6561, 6561, 6561, 6562, 6562, 6562, 6562, 6562, 6562, 6562, 0,
  6563, 6563, 6563, 6563, 6563, 6563, 6563, 0, 6563, 6563, 6563, 0, 7456, 0, 0,
  0, 0, 0, 0, 6564, 0, 6565, 6566, 6566, 0, 6567, 6568, 6568, 6569, 6569, 6569,
  6569, 0, 6570, 6571, 6571, 6572, 6572, 6572, 6572, 6573, 6573, 6573, 6573,
  6573, 6573, 6573, 0, 0, 6574, 6575, 6575, 6576, 6576, 6576, 6576, 6577, 6577,
  6577, 6577, 6577, 6577, 6577, 0, 6578, 6578, 6578, 6578, 6578, 6578, 6578, 0,
  6578, 6578, 6578, 0, 6578, 0, 0, 0, 0, 6579, 6580, 6580, 6581, 6581, 6581,
  6581, 6582, 6582, 6582, 6582, 6582, 6582, 6582, 0, 6583, 6583, 6583, 6583,
  6583, 6583, 6583, 0, 6583, 6583, 6583, 0, 6583, 0, 0, 0, 6584, 6584, 6584,
  6584, 6584, 6584, 6584, 0, 6584, 6584, 6584, 0, 6584, 0, 0, 0, 6584, 6584,
  6584, 0, 6584, 0, 0, 0, 7457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6585, 0, 6586,
  6587, 6587, 0, 6588, 6589, 6589, 6590, 6590, 6590, 6590, 0, 6591, 6592, 6592,
  6593, 6593, 6593, 6593, 6594, 6594, 6594, 6594, 6594, 6594, 6594, 0, 0, 6595,
  6596, 6596, 6597, 6597, 6597, 6597, 6598, 6598, 6598, 6598, 6598, 6598, 6598,
  0, 6599, 6599, 6599, 6599, 6599, 6599, 6599, 0, 6599, 6599, 6599, 0, 6599, 0,
  0, 0, 0, 6600, 6601, 6601, 6602, 6602, 6602, 6602, 6603, 6603, 6603, 6603,
  6603, 6603, 6603, 0, 6604, 6604, 6604, 6604, 6604, 6604, 6604, 0, 6604, 6604,
  6604, 0, 6604, 0, 0, 0, 6605, 6605, 6605, 6605, 6605, 6605, 6605, 0, 6605,
  6605, 6605, 0, 6605, 0, 0, 0, 6605, 6605, 6605, 0, 6605, 0, 0, 0, 6605, 0, 0,
  0, 0, 0, 0, 0, 0, 6606, 6607, 6607, 6608, 6608, 6608, 6608, 6609, 6609, 6609,
  6609, 6609, 6609, 6609, 0, 6610, 6610, 6610, 6610, 6610, 6610, 6610, 0, 6610,
  6610, 6610, 0, 6610, 0, 0, 0, 6611, 6611, 6611, 6611, 6611, 6611, 6611, 0,
  6611, 6611, 6611, 0, 6611, 0, 0, 0, 6611, 6611, 6611, 0, 6611, 0, 0, 0, 6611,
  0, 0, 0, 0, 0, 0, 0, 6612, 6612, 6612, 6612, 6612, 6612, 6612, 0, 6612, 6612,
  6612, 0, 6612, 0, 0, 0, 6612, 6612, 6612, 0, 6612, 0, 0, 0, 6612, 0, 0, 0, 0,
  0, 0, 0, 6612, 6612, 6612, 0, 6612, 0, 0, 0, 6612, 0, 0, 0, 0, 0, 0, 0, 7458,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6613, 0, 6614, 6615,
  6615, 0, 6616, 6617, 6617, 6618, 6618, 6618, 6618, 0, 6619, 6620, 6620, 6621,
  6621, 6621, 6621, 6622, 6622, 6622, 6622, 6622, 6622, 6622, 0, 0, 6623, 6624,
  6624, 6625, 6625, 6625, 6625, 6626, 6626, 6626, 6626, 6626, 6626, 6626, 0,
  6627, 6627, 6627, 6627, 6627, 6627, 6627, 0, 6627, 6627, 6627, 0, 6627, 0, 0,
  0, 0, 6628, 6629, 6629, 6630, 6630, 6630, 6630, 6631, 6631, 6631, 6631, 6631,
  6631, 6631, 0, 6632, 6632, 6632, 6632, 6632, 6632, 6632, 0, 6632, 6632, 6632,
  0, 6632, 0, 0, 0, 6633, 6633, 6633, 6633, 6633, 6633, 6633, 0, 6633, 6633,
  6633, 0, 6633, 0, 0, 0, 6633, 6633, 6633, 0, 6633, 0, 0, 0, 6633, 0, 0, 0, 0,
  0, 0, 0, 0, 6634, 6635, 6635, 6636, 6636, 6636, 6636, 6637, 6637, 6637, 6637,
  6637, 6637, 6637, 0, 6638, 6638, 6638, 6638, 6638, 6638, 6638, 0, 6638, 6638,
  6638, 0, 6638, 0, 0, 0, 6639, 6639, 6639, 6639, 6639, 6639, 6639, 0, 6639,
  6639, 6639, 0, 6639, 0, 0, 0, 6639, 6639, 6639, 0, 6639, 0, 0, 0, 6639, 0, 0,
  0, 0, 0, 0, 0, 6640, 6640, 6640, 6640, 6640, 6640, 6640, 0, 6640, 6640, 6640,
  0, 6640, 0, 0, 0, 6640, 6640, 6640, 0, 6640, 0, 0, 0, 6640, 0, 0, 0, 0, 0, 0,
  0, 6640, 6640, 6640, 0, 6640, 0, 0, 0, 6640, 0, 0, 0, 0, 0, 0, 0, 6640, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6641, 6642, 6642, 6643, 6643, 6643,
  6643, 6644, 6644, 6644, 6644, 6644, 6644, 6644, 0, 6645, 6645, 6645, 6645,
  6645, 6645, 6645, 0, 6645, 6645, 6645, 0, 6645, 0, 0, 0, 6646, 6646, 6646,
  6646, 6646, 6646, 6646, 0, 6646, 6646, 6646, 0, 6646, 0, 0, 0, 6646, 6646,
  6646, 0, 6646, 0, 0, 0, 6646, 0, 0, 0, 0, 0, 0, 0, 6647, 6647, 6647, 6647,
  6647, 6647, 6647, 0, 6647, 6647, 6647, 0, 6647, 0, 0, 0, 6647, 6647, 6647, 0,
  6647, 0, 0, 0, 6647, 0, 0, 0, 0, 0, 0, 0, 6647, 6647, 6647, 0, 6647, 0, 0, 0,
  6647, 0, 0, 0, 0, 0, 0, 0, 6647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  7461, 7461, 7461, 7461, 7461, 7461, 7461, 0, 7461, 7461, 7461, 0, 7461, 0, 0,
  0, 7461, 7461, 7461, 0, 7461, 0, 0, 0, 7461, 0, 0, 0, 0, 0, 0, 0, 7461, 7461,
  7461, 0, 7461, 0, 0, 0, 7461, 0, 0, 0, 0, 0, 0, 0, 7461, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 7461, 7461, 7461, 0, 7461, 0, 0, 0, 7461, 0, 0, 0, 0,
  0, 0, 0, 7461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7461, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7453, 0, 0, 0, 0, 0, 0, 0,
  6648, 0, 0, 0, 6649, 0, 6650, 6651, 7454, 0, 0, 0, 0, 0, 0, 0, 6652, 0, 0, 0,
  6653, 0, 6654, 6655, 7453, 0, 0, 0, 6656, 0, 6657, 6658, 6658, 0, 6659, 6660,
  6660, 6661, 6661, 7455, 7455, 0, 0, 0, 0, 0, 0, 0, 6662, 0, 0, 0, 6663, 0,
  6664, 6665, 7453, 0, 0, 0, 6666, 0, 6667, 6668, 6668, 0, 6669, 6670, 6670,
  6671, 6671, 6671, 7454, 0, 0, 0, 6672, 0, 6673, 6674, 6674, 0, 6675, 6676,
  6676, 6677, 6677, 6677, 7453, 0, 6678, 6679, 6679, 6680, 6680, 6680, 6680,
  6681, 6681, 6681, 6681, 7456, 7456, 7456, 0, 0, 0, 0, 0, 0, 0, 0, 6682, 0, 0,
  0, 6683, 0, 6684, 6685, 7453, 0, 0, 0, 6686, 0, 6687, 6688, 6688, 0, 6689,
  6690, 6690, 6691, 6691, 6691, 7454, 0, 0, 0, 6692, 0, 6693, 6694, 6694, 0,
  6695, 6696, 6696, 6697, 6697, 6697, 7453, 0, 6698, 6699, 6699, 6700, 6700,
  6700, 6700, 6701, 6701, 6701, 6701, 6701, 6701, 7455, 0, 0, 0, 0, 6702, 0,
  6703, 6704, 6704, 0, 6705, 6706, 6706, 6707, 6707, 6707, 7453, 0, 6708, 6709,
  6709, 6710, 6710, 6710, 6710, 6711, 6711, 6711, 6711, 6711, 6711, 6711, 0, 0,
  6712, 6713, 6713, 6714, 6714, 6714, 6714, 6715, 6715, 6715, 6715, 6715, 6715,
  6715, 0, 6716, 6716, 6716, 6716, 6716, 6716, 6716, 0, 7457, 7457, 7457, 0,
  7457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6717, 0, 0, 0, 6718, 0, 6719, 6720, 7453,
  0, 0, 0, 6721, 0, 6722, 6723, 6723, 0, 6724, 6725, 6725, 6726, 6726, 6726,
  7454, 0, 0, 0, 6727, 0, 6728, 6729, 6729, 0, 6730, 6731, 6731, 6732, 6732,
  6732, 7453, 0, 6733, 6734, 6734, 6735, 6735, 6735, 6735, 6736, 6736, 6736,
  6736, 6736, 6736, 7455, 0, 0, 0, 0, 6737, 0, 6738, 6739, 6739, 0, 6740, 6741,
  6741, 6742, 6742, 6742, 7453, 0, 6743, 6744, 6744, 6745, 6745, 6745, 6745,
  6746, 6746, 6746, 6746, 6746, 6746, 6746, 0, 0, 6747, 6748, 6748, 6749, 6749,
  6749, 6749, 6750, 6750, 6750, 6750, 6750, 6750, 6750, 0, 6751, 6751, 6751,
  6751, 6751, 6751, 6751, 0, 6751, 6751, 6751, 0, 7456, 0, 0, 0, 0, 0, 0, 6752,
  0, 6753, 6754, 6754, 0, 6755, 6756, 6756, 6757, 6757, 6757, 7453, 0, 6758,
  6759, 6759, 6760, 6760, 6760, 6760, 6761, 6761, 6761, 6761, 6761, 6761, 6761,
  0, 0, 6762, 6763, 6763, 6764, 6764, 6764, 6764, 6765, 6765, 6765, 6765, 6765,
  6765, 6765, 0, 6766, 6766, 6766, 6766, 6766, 6766, 6766, 0, 6766, 6766, 6766,
  0, 6766, 0, 0, 0, 0, 6767, 6768, 6768, 6769, 6769, 6769, 6769, 6770, 6770,
  6770, 6770, 6770, 6770, 6770, 0, 6771, 6771, 6771, 6771, 6771, 6771, 6771, 0,
  6771, 6771, 6771, 0, 6771, 0, 0, 0, 6772, 6772, 6772, 6772, 6772, 6772, 6772,
  0, 6772, 6772, 6772, 0, 6772, 0, 0, 0, 7458, 7458, 7458, 0, 7458, 0, 0, 0,
  7458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6773, 0, 0, 0, 6774, 0, 6775,
  6776, 7453, 0, 0, 0, 6777, 0, 6778, 6779, 6779, 0, 6780, 6781, 6781, 6782,
  6782, 6782, 7454, 0, 0, 0, 6783, 0, 6784, 6785, 6785, 0, 6786, 6787, 6787,
  6788, 6788, 6788, 7453, 0, 6789, 6790, 6790, 6791, 6791, 6791, 6791, 6792,
  6792, 6792, 6792, 6792, 6792, 7455, 0, 0, 0, 0, 6793, 0, 6794, 6795, 6795, 0,
  6796, 6797, 6797, 6798, 6798, 6798, 7453, 0, 6799, 6800, 6800, 6801, 6801,
  6801, 6801, 6802, 6802, 6802, 6802, 6802, 6802, 6802, 0, 0, 6803, 6804, 6804,
  6805, 6805, 6805, 6805, 6806, 6806, 6806, 6806, 6806, 6806, 6806, 0, 6807,
  6807, 6807, 6807, 6807, 6807, 6807, 0, 6807, 6807, 6807, 0, 7456, 0, 0, 0, 0,
  0, 0, 6808, 0, 6809, 6810, 6810, 0, 6811, 6812, 6812, 6813, 6813, 6813, 7453,
  0, 6814, 6815, 6815, 6816, 6816, 6816, 6816, 6817, 6817, 6817, 6817, 6817,
  6817, 6817, 0, 0, 6818, 6819, 6819, 6820, 6820, 6820, 6820, 6821, 6821, 6821,
  6821, 6821, 6821, 6821, 0, 6822, 6822, 6822, 6822, 6822, 6822, 6822, 0, 6822,
  6822, 6822, 0, 6822, 0, 0, 0, 0, 6823, 6824, 6824, 6825, 6825, 6825, 6825,
  6826, 6826, 6826, 6826, 6826, 6826, 6826, 0, 6827, 6827, 6827, 6827, 6827,
  6827, 6827, 0, 6827, 6827, 6827, 0, 6827, 0, 0, 0, 6828, 6828, 6828, 6828,
  6828, 6828, 6828, 0, 6828, 6828, 6828, 0, 6828, 0, 0, 0, 6828, 6828, 6828, 0,
  6828, 0, 0, 0, 7457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6829, 0, 6830, 6831, 6831,
  0, 6832, 6833, 6833, 6834, 6834, 6834, 7453, 0, 6835, 6836, 6836, 6837, 6837,
  6837, 6837, 6838, 6838, 6838, 6838, 6838, 6838, 6838, 0, 0, 6839, 6840, 6840,
  6841, 6841, 6841, 6841, 6842, 6842, 6842, 6842, 6842, 6842, 6842, 0, 6843,
  6843, 6843, 6843, 6843, 6843, 6843, 0, 6843, 6843, 6843, 0, 6843, 0, 0, 0, 0,
  6844, 6845, 6845, 6846, 6846, 6846, 6846, 6847, 6847, 6847, 6847, 6847, 6847,
  6847, 0, 6848, 6848, 6848, 6848, 6848, 6848, 6848, 0, 6848, 6848, 6848, 0,
  6848, 0, 0, 0, 6849, 6849, 6849, 6849, 6849, 6849, 6849, 0, 6849, 6849, 6849,
  0, 6849, 0, 0, 0, 6849, 6849, 6849, 0, 6849, 0, 0, 0, 6849, 0, 0, 0, 0, 0, 0,
  0, 0, 6850, 6851, 6851, 6852, 6852, 6852, 6852, 6853, 6853, 6853, 6853, 6853,
  6853, 6853, 0, 6854, 6854, 6854, 6854, 6854, 6854, 6854, 0, 6854, 6854, 6854,
  0, 6854, 0, 0, 0, 6855, 6855, 6855, 6855, 6855, 6855, 6855, 0, 6855, 6855,
  6855, 0, 6855, 0, 0, 0, 6855, 6855, 6855, 0, 6855, 0, 0, 0, 6855, 0, 0, 0, 0,
  0, 0, 0, 6856, 6856, 6856, 6856, 6856, 6856, 6856, 0, 6856, 6856, 6856, 0,
  6856, 0, 0, 0, 6856, 6856, 6856, 0, 6856, 0, 0, 0, 6856, 0, 0, 0, 0, 0, 0, 0,
  7459, 7459, 7459, 0, 7459, 0, 0, 0, 7459, 0, 0, 0, 0, 0, 0, 0, 7459, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6857, 0, 0, 0, 6858,
  0, 6859, 6860, 7453, 0, 0, 0, 6861, 0, 6862, 6863, 6863, 0, 6864, 6865, 6865,
  6866, 6866, 6866, 7454, 0, 0, 0, 6867, 0, 6868, 6869, 6869, 0, 6870, 6871,
  6871, 6872, 6872, 6872, 7453, 0, 6873, 6874, 6874, 6875, 6875, 6875, 6875,
  6876, 6876, 6876, 6876, 6876, 6876, 7455, 0, 0, 0, 0, 6877, 0, 6878, 6879,
  6879, 0, 6880, 6881, 6881, 6882, 6882, 6882, 7453, 0, 6883, 6884, 6884, 6885,
  6885, 6885, 6885, 6886, 6886, 6886, 6886, 6886, 6886, 6886, 0, 0, 6887, 6888,
  6888, 6889, 6889, 6889, 6889, 6890, 6890, 6890, 6890, 6890, 6890, 6890, 0,
  6891, 6891, 6891, 6891, 6891, 6891, 6891, 0, 6891, 6891, 6891, 0, 7456, 0, 0,
  0, 0, 0, 0, 6892, 0, 6893, 6894, 6894, 0, 6895, 6896, 6896, 6897, 6897, 6897,
  7453, 0, 6898, 6899, 6899, 6900, 6900, 6900, 6900, 6901, 6901, 6901, 6901,
  6901, 6901, 6901, 0, 0, 6902, 6903, 6903, 6904, 6904, 6904, 6904, 6905, 6905,
  6905, 6905, 6905, 6905, 6905, 0, 6906, 6906, 6906, 6906, 6906, 6906, 6906, 0,
  6906, 6906, 6906, 0, 6906, 0, 0, 0, 0, 6907, 6908, 6908, 6909, 6909, 6909,
  6909, 6910, 6910, 6910, 6910, 6910, 6910, 6910, 0, 6911, 6911, 6911, 6911,
  6911, 6911, 6911, 0, 6911, 6911, 6911, 0, 6911, 0, 0, 0, 6912, 6912, 6912,
  6912, 6912, 6912, 6912, 0, 6912, 6912, 6912, 0, 6912, 0, 0, 0, 6912, 6912,
  6912, 0, 6912, 0, 0, 0, 7457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6913, 0, 6914,
  6915, 6915, 0, 6916, 6917, 6917, 6918, 6918, 6918, 7453, 0, 6919, 6920, 6920,
  6921, 6921, 6921, 6921, 6922, 6922, 6922, 6922, 6922, 6922, 6922, 0, 0, 6923,
  6924, 6924, 6925, 6925, 6925, 6925, 6926, 6926, 6926, 6926, 6926, 6926, 6926,
  0, 6927, 6927, 6927, 6927, 6927, 6927, 6927, 0, 6927, 6927, 6927, 0, 6927, 0,
  0, 0, 0, 6928, 6929, 6929, 6930, 6930, 6930, 6930, 6931, 6931, 6931, 6931,
  6931, 6931, 6931, 0, 6932, 6932, 6932, 6932, 6932, 6932, 6932, 0, 6932, 6932,
  6932, 0, 6932, 0, 0, 0, 6933, 6933, 6933, 6933, 6933, 6933, 6933, 0, 6933,
  6933, 6933, 0, 6933, 0, 0, 0, 6933, 6933, 6933, 0, 6933, 0, 0, 0, 6933, 0, 0,
  0, 0, 0, 0, 0, 0, 6934, 6935, 6935, 6936, 6936, 6936, 6936, 6937, 6937, 6937,
  6937, 6937, 6937, 6937, 0, 6938, 6938, 6938, 6938, 6938, 6938, 6938, 0, 6938,
  6938, 6938, 0, 6938, 0, 0, 0, 6939, 6939, 6939, 6939, 6939, 6939, 6939, 0,
  6939, 6939, 6939, 0, 6939, 0, 0, 0, 6939, 6939, 6939, 0, 6939, 0, 0, 0, 6939,
  0, 0, 0, 0, 0, 0, 0, 6940, 6940, 6940, 6940, 6940, 6940, 6940, 0, 6940, 6940,
  6940, 0, 6940, 0, 0, 0, 6940, 6940, 6940, 0, 6940, 0, 0, 0, 6940, 0, 0, 0, 0,
  0, 0, 0, 6940, 6940, 6940, 0, 6940, 0, 0, 0, 6940, 0, 0, 0, 0, 0, 0, 0, 7458,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6941, 0, 6942, 6943,
  6943, 0, 6944, 6945, 6945, 6946, 6946, 6946, 7453, 0, 6947, 6948, 6948, 6949,
  6949, 6949, 6949, 6950, 6950, 6950, 6950, 6950, 6950, 6950, 0, 0, 6951, 6952,
  6952, 6953, 6953, 6953, 6953, 6954, 6954, 6954, 6954, 6954, 6954, 6954, 0,
  6955, 6955, 6955, 6955, 6955, 6955, 6955, 0, 6955, 6955, 6955, 0, 6955, 0, 0,
  0, 0, 6956, 6957, 6957, 6958, 6958, 6958, 6958, 6959, 6959, 6959, 6959, 6959,
  6959, 6959, 0, 6960, 6960, 6960, 6960, 6960, 6960, 6960, 0, 6960, 6960, 6960,
  0, 6960, 0, 0, 0, 6961, 6961, 6961, 6961, 6961, 6961, 6961, 0, 6961, 6961,
  6961, 0, 6961, 0, 0, 0, 6961, 6961, 6961, 0, 6961, 0, 0, 0, 6961, 0, 0, 0, 0,
  0, 0, 0, 0, 6962, 6963, 6963, 6964, 6964, 6964, 6964, 6965, 6965, 6965, 6965,
  6965, 6965, 6965, 0, 6966, 6966, 6966, 6966, 6966, 6966, 6966, 0, 6966, 6966,
  6966, 0, 6966, 0, 0, 0, 6967, 6967, 6967, 6967, 6967, 6967, 6967, 0, 6967,
  6967, 6967, 0, 6967, 0, 0, 0, 6967, 6967, 6967, 0, 6967, 0, 0, 0, 6967, 0, 0,
  0, 0, 0, 0, 0, 6968, 6968, 6968, 6968, 6968, 6968, 6968, 0, 6968, 6968, 6968,
  0, 6968, 0, 0, 0, 6968, 6968, 6968, 0, 6968, 0, 0, 0, 6968, 0, 0, 0, 0, 0, 0,
  0, 6968, 6968, 6968, 0, 6968, 0, 0, 0, 6968, 0, 0, 0, 0, 0, 0, 0, 6968, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6969, 6970, 6970, 6971, 6971, 6971,
  6971, 6972, 6972, 6972, 6972, 6972, 6972, 6972, 0, 6973, 6973, 6973, 6973,
  6973, 6973, 6973, 0, 6973, 6973, 6973, 0, 6973, 0, 0, 0, 6974, 6974, 6974,
  6974, 6974, 6974, 6974, 0, 6974, 6974, 6974, 0, 6974, 0, 0, 0, 6974, 6974,
  6974, 0, 6974, 0, 0, 0, 6974, 0, 0, 0, 0, 0, 0, 0, 6975, 6975, 6975, 6975,
  6975, 6975, 6975, 0, 6975, 6975, 6975, 0, 6975, 0, 0, 0, 6975, 6975, 6975, 0,
  6975, 0, 0, 0, 6975, 0, 0, 0, 0, 0, 0, 0, 6975, 6975, 6975, 0, 6975, 0, 0, 0,
  6975, 0, 0, 0, 0, 0, 0, 0, 6975, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  6976, 6976, 6976, 6976, 6976, 6976, 6976, 0, 6976, 6976, 6976, 0, 6976, 0, 0,
  0, 6976, 6976, 6976, 0, 6976, 0, 0, 0, 6976, 0, 0, 0, 0, 0, 0, 0, 6976, 6976,
  6976, 0, 6976, 0, 0, 0, 6976, 0, 0, 0, 0, 0, 0, 0, 6976, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 7460, 7460, 7460, 0, 7460, 0, 0, 0, 7460, 0, 0, 0, 0,
  0, 0, 0, 7460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7460, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 6977, 0, 0, 0, 6978, 0, 6979, 6980, 7453, 0, 0, 0,
  6981, 0, 6982, 6983, 6983, 0, 6984, 6985, 6985, 6986, 6986, 6986, 7454, 0, 0,
  0, 6987, 0, 6988, 6989, 6989, 0, 6990, 6991, 6991, 6992, 6992, 6992, 7453, 0,
  6993, 6994, 6994, 6995, 6995, 6995, 6995, 6996, 6996, 6996, 6996, 6996, 6996,
  7455, 0, 0, 0, 0, 6997, 0, 6998, 6999, 6999, 0, 7000, 7001, 7001, 7002, 7002,
  7002, 7453, 0, 7003, 7004, 7004, 7005, 7005, 7005, 7005, 7006, 7006, 7006,
  7006, 7006, 7006, 7006, 0, 0, 7007, 7008, 7008, 7009, 7009, 7009, 7009, 7010,
  7010, 7010, 7010, 7010, 7010, 7010, 0, 7011, 7011, 7011, 7011, 7011, 7011,
  7011, 0, 7011, 7011, 7011, 0, 7456, 0, 0, 0, 0, 0, 0, 7012, 0, 7013, 7014,
  7014, 0, 7015, 7016, 7016, 7017, 7017, 7017, 7453, 0, 7018, 7019, 7019, 7020,
  7020, 7020, 7020, 7021, 7021, 7021, 7021, 7021, 7021, 7021, 0, 0, 7022, 7023,
  7023, 7024, 7024, 7024, 7024, 7025, 7025, 7025, 7025, 7025, 7025, 7025, 0,
  7026, 7026, 7026, 7026, 7026, 7026, 7026, 0, 7026, 7026, 7026, 0, 7026, 0, 0,
  0, 0, 7027, 7028, 7028, 7029, 7029, 7029, 7029, 7030, 7030, 7030, 7030, 7030,
  7030, 7030, 0, 7031, 7031, 7031, 7031, 7031, 7031, 7031, 0, 7031, 7031, 7031,
  0, 7031, 0, 0, 0, 7032, 7032, 7032, 7032, 7032, 7032, 7032, 0, 7032, 7032,
  7032, 0, 7032, 0, 0, 0, 7032, 7032, 7032, 0, 7032, 0, 0, 0, 7457, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 7033, 0, 7034, 7035, 7035, 0, 7036, 7037, 7037, 7038, 7038,
  7038, 7453, 0, 7039, 7040, 7040, 7041, 7041, 7041, 7041, 7042, 7042, 7042,
  7042, 7042, 7042, 7042, 0, 0, 7043, 7044, 7044, 7045, 7045, 7045, 7045, 7046,
  7046, 7046, 7046, 7046, 7046, 7046, 0, 7047, 7047, 7047, 7047, 7047, 7047,
  7047, 0, 7047, 7047, 7047, 0, 7047, 0, 0, 0, 0, 7048, 7049, 7049, 7050, 7050,
  7050, 7050, 7051, 7051, 7051, 7051, 7051, 7051, 7051, 0, 7052, 7052, 7052,
  7052, 7052, 7052, 7052, 0, 7052, 7052, 7052, 0, 7052, 0, 0, 0, 7053, 7053,
  7053, 7053, 7053, 7053, 7053, 0, 7053, 7053, 7053, 0, 7053, 0, 0, 0, 7053,
  7053, 7053, 0, 7053, 0, 0, 0, 7053, 0, 0, 0, 0, 0, 0, 0, 0, 7054, 7055, 7055,
  7056, 7056, 7056, 7056, 7057, 7057, 7057, 7057, 7057, 7057, 7057, 0, 7058,
  7058, 7058, 7058, 7058, 7058, 7058, 0, 7058, 7058, 7058, 0, 7058, 0, 0, 0,
  7059, 7059, 7059, 7059, 7059, 7059, 7059, 0, 7059, 7059, 7059, 0, 7059, 0, 0,
  0, 7059, 7059, 7059, 0, 7059, 0, 0, 0, 7059, 0, 0, 0, 0, 0, 0, 0, 7060, 7060,
  7060, 7060, 7060, 7060, 7060, 0, 7060, 7060, 7060, 0, 7060, 0, 0, 0, 7060,
  7060, 7060, 0, 7060, 0, 0, 0, 7060, 0, 0, 0, 0, 0, 0, 0, 7060, 7060, 7060, 0,
  7060, 0, 0, 0, 7060, 0, 0, 0, 0, 0, 0, 0, 7458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 7061, 0, 7062, 7063, 7063, 0, 7064, 7065, 7065, 7066,
  7066, 7066, 7453, 0, 7067, 7068, 7068, 7069, 7069, 7069, 7069, 7070, 7070,
  7070, 7070, 7070, 7070, 7070, 0, 0, 7071, 7072, 7072, 7073, 7073, 7073, 7073,
  7074, 7074, 7074, 7074, 7074, 7074, 7074, 0, 7075, 7075, 7075, 7075, 7075,
  7075, 7075, 0, 7075, 7075, 7075, 0, 7075, 0, 0, 0, 0, 7076, 7077, 7077, 7078,
  7078, 7078, 7078, 7079, 7079, 7079, 7079, 7079, 7079, 7079, 0, 7080, 7080,
  7080, 7080, 7080, 7080, 7080, 0, 7080, 7080, 7080, 0, 7080, 0, 0, 0, 7081,
  7081, 7081, 7081, 7081, 7081, 7081, 0, 7081, 7081, 7081, 0, 7081, 0, 0, 0,
  7081, 7081, 7081, 0, 7081, 0, 0, 0, 7081, 0, 0, 0, 0, 0, 0, 0, 0, 7082, 7083,
  7083, 7084, 7084, 7084, 7084, 7085, 7085, 7085, 7085, 7085, 7085, 7085, 0,
  7086, 7086, 7086, 7086, 7086, 7086, 7086, 0, 7086, 7086, 7086, 0, 7086, 0, 0,
  0, 7087, 7087, 7087, 7087, 7087, 7087, 7087, 0, 7087, 7087, 7087, 0, 7087, 0,
  0, 0, 7087, 7087, 7087, 0, 7087, 0, 0, 0, 7087, 0, 0, 0, 0, 0, 0, 0, 7088,
  7088, 7088, 7088, 7088, 7088, 7088, 0, 7088, 7088, 7088, 0, 7088, 0, 0, 0,
  7088, 7088, 7088, 0, 7088, 0, 0, 0, 7088, 0, 0, 0, 0, 0, 0, 0, 7088, 7088,
  7088, 0, 7088, 0, 0, 0, 7088, 0, 0, 0, 0, 0, 0, 0, 7088, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 7089, 7090, 7090, 7091, 7091, 7091, 7091, 7092,
  7092, 7092, 7092, 7092, 7092, 7092, 0, 7093, 7093, 7093, 7093, 7093, 7093,
  7093, 0, 7093, 7093, 7093, 0, 7093, 0, 0, 0, 7094, 7094, 7094, 7094, 7094,
  7094, 7094, 0, 7094, 7094, 7094, 0, 7094, 0, 0, 0, 7094, 7094, 7094, 0, 7094,
  0, 0, 0, 7094, 0, 0, 0, 0, 0, 0, 0, 7095, 7095, 7095, 7095, 7095, 7095, 7095,
  0, 7095, 7095, 7095, 0, 7095, 0, 0, 0, 7095, 7095, 7095, 0, 7095, 0, 0, 0,
  7095, 0, 0, 0, 0, 0, 0, 0, 7095, 7095, 7095, 0, 7095, 0, 0, 0, 7095, 0, 0, 0,
  0, 0, 0, 0, 7095, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7096, 7096,
  7096, 7096, 7096, 7096, 7096, 0, 7096, 7096, 7096, 0, 7096, 0, 0, 0, 7096,
  7096, 7096, 0, 7096, 0, 0, 0, 7096, 0, 0, 0, 0, 0, 0, 0, 7096, 7096, 7096, 0,
  7096, 0, 0, 0, 7096, 0, 0, 0, 0, 0, 0, 0, 7096, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 7096, 7096, 7096, 0, 7096, 0, 0, 0, 7096, 0, 0, 0, 0, 0, 0, 0,
  7096, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7459, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 7097, 0, 7098, 7099, 7099, 0, 7100, 7101, 7101, 7102, 7102, 7102, 7453, 0,
  7103, 7104, 7104, 7105, 7105, 7105, 7105, 7106, 7106, 7106, 7106, 7106, 7106,
  7106, 0, 0, 7107, 7108, 7108, 7109, 7109, 7109, 7109, 7110, 7110, 7110, 7110,
  7110, 7110, 7110, 0, 7111, 7111, 7111, 7111, 7111, 7111, 7111, 0, 7111, 7111,
  7111, 0, 7111, 0, 0, 0, 0, 7112, 7113, 7113, 7114, 7114, 7114, 7114, 7115,
  7115, 7115, 7115, 7115, 7115, 7115, 0, 7116, 7116, 7116, 7116, 7116, 7116,
  7116, 0, 7116, 7116, 7116, 0, 7116, 0, 0, 0, 7117, 7117, 7117, 7117, 7117,
  7117, 7117, 0, 7117, 7117, 7117, 0, 7117, 0, 0, 0, 7117, 7117, 7117, 0, 7117,
  0, 0, 0, 7117, 0, 0, 0, 0, 0, 0, 0, 0, 7118, 7119, 7119, 7120, 7120, 7120,
  7120, 7121, 7121, 7121, 7121, 7121, 7121, 7121, 0, 7122, 7122, 7122, 7122,
  7122, 7122, 7122, 0, 7122, 7122, 7122, 0, 7122, 0, 0, 0, 7123, 7123, 7123,
  7123, 7123, 7123, 7123, 0, 7123, 7123, 7123, 0, 7123, 0, 0, 0, 7123, 7123,
  7123, 0, 7123, 0, 0, 0, 7123, 0, 0, 0, 0, 0, 0, 0, 7124, 7124, 7124, 7124,
  7124, 7124, 7124, 0, 7124, 7124, 7124, 0, 7124, 0, 0, 0, 7124, 7124, 7124, 0,
  7124, 0, 0, 0, 7124, 0, 0, 0, 0, 0, 0, 0, 7124, 7124, 7124, 0, 7124, 0, 0, 0,
  7124, 0, 0, 0, 0, 0, 0, 0, 7124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 7125, 7126, 7126, 7127, 7127, 7127, 7127, 7128, 7128, 7128, 7128, 7128,
  7128, 7128, 0, 7129, 7129, 7129, 7129, 7129, 7129, 7129, 0, 7129, 7129, 7129,
  0, 7129, 0, 0, 0, 7130, 7130, 7130, 7130, 7130, 7130, 7130, 0, 7130, 7130,
  7130, 0, 7130, 0, 0, 0, 7130, 7130, 7130, 0, 7130, 0, 0, 0, 7130, 0, 0, 0, 0,
  0, 0, 0, 7131, 7131, 7131, 7131, 7131, 7131, 7131, 0, 7131, 7131, 7131, 0,
  7131, 0, 0, 0, 7131, 7131, 7131, 0, 7131, 0, 0, 0, 7131, 0, 0, 0, 0, 0, 0, 0,
  7131, 7131, 7131, 0, 7131, 0, 0, 0, 7131, 0, 0, 0, 0, 0, 0, 0, 7131, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7132, 7132, 7132, 7132, 7132, 7132, 7132,
  0, 7132, 7132, 7132, 0, 7132, 0, 0, 0, 7132, 7132, 7132, 0, 7132, 0, 0, 0,
  7132, 0, 0, 0, 0, 0, 0, 0, 7132, 7132, 7132, 0, 7132, 0, 0, 0, 7132, 0, 0, 0,
  0, 0, 0, 0, 7132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7132, 7132,
  7132, 0, 7132, 0, 0, 0, 7132, 0, 0, 0, 0, 0, 0, 0, 7132, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 7132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7133, 7134, 7134, 7135, 7135,
  7135, 7135, 7136, 7136, 7136, 7136, 7136, 7136, 7136, 0, 7137, 7137, 7137,
  7137, 7137, 7137, 7137, 0, 7137, 7137, 7137, 0, 7137, 0, 0, 0, 7138, 7138,
  7138, 7138, 7138, 7138, 7138, 0, 7138, 7138, 7138, 0, 7138, 0, 0, 0, 7138,
  7138, 7138, 0, 7138, 0, 0, 0, 7138, 0, 0, 0, 0, 0, 0, 0, 7139, 7139, 7139,
  7139, 7139, 7139, 7139, 0, 7139, 7139, 7139, 0, 7139, 0, 0, 0, 7139, 7139,
  7139, 0, 7139, 0, 0, 0, 7139, 0, 0, 0, 0, 0, 0, 0, 7139, 7139, 7139, 0, 7139,
  0, 0, 0, 7139, 0, 0, 0, 0, 0, 0, 0, 7139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 7140, 7140, 7140, 7140, 7140, 7140, 7140, 0, 7140, 7140, 7140, 0,
  7140, 0, 0, 0, 7140, 7140, 7140, 0, 7140, 0, 0, 0, 7140, 0, 0, 0, 0, 0, 0, 0,
  7140, 7140, 7140, 0, 7140, 0, 0, 0, 7140, 0, 0, 0, 0, 0, 0, 0, 7140, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7140, 7140, 7140, 0, 7140, 0, 0, 0, 7140,
  0, 0, 0, 0, 0, 0, 0, 7140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7140,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 7462, 7462, 7462, 7462, 7462, 7462, 7462, 0, 7462, 7462, 7462,
  0, 7462, 0, 0, 0, 7462, 7462, 7462, 0, 7462, 0, 0, 0, 7462, 0, 0, 0, 0, 0, 0,
  0, 7462, 7462, 7462, 0, 7462, 0, 0, 0, 7462, 0, 0, 0, 0, 0, 0, 0, 7462, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7462, 7462, 7462, 0, 7462, 0, 0, 0,
  7462, 0, 0, 0, 0, 0, 0, 0, 7462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  7462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 7462, 7462, 7462, 0, 7462, 0, 0, 0, 7462, 0, 0, 0, 0, 0,
  0, 0, 7462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7462, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  7462
};

#endif
