short int sin_tab[2048] = {
   0, -25, -50, -75, -100, -125, -150, -175,
   -201, -226, -251, -276, -301, -326, -351, -376,
   -401, -427, -452, -477, -502, -527, -552, -577,
   -602, -627, -652, -677, -702, -727, -752, -777,
   -802, -827, -852, -877, -902, -927, -952, -977,
   -1002, -1027, -1052, -1077, -1102, -1127, -1152, -1177,
   -1201, -1226, -1251, -1276, -1301, -1326, -1350, -1375,
   -1400, -1425, -1449, -1474, -1499, -1523, -1548, -1573,
   -1597, -1622, -1647, -1671, -1696, -1721, -1745, -1770,
   -1794, -1819, -1843, -1868, -1892, -1917, -1941, -1965,
   -1990, -2014, -2038, -2063, -2087, -2111, -2136, -2160,
   -2184, -2208, -2233, -2257, -2281, -2305, -2329, -2353,
   -2377, -2401, -2425, -2449, -2473, -2497, -2521, -2545,
   -2569, -2593, -2617, -2640, -2664, -2688, -2712, -2735,
   -2759, -2783, -2806, -2830, -2853, -2877, -2900, -2924,
   -2947, -2971, -2994, -3018, -3041, -3064, -3088, -3111,
   -3134, -3157, -3180, -3204, -3227, -3250, -3273, -3296,
   -3319, -3342, -3365, -3388, -3410, -3433, -3456, -3479,
   -3502, -3524, -3547, -3570, -3592, -3615, -3637, -3660,
   -3682, -3705, -3727, -3749, -3772, -3794, -3816, -3839,
   -3861, -3883, -3905, -3927, -3949, -3971, -3993, -4015,
   -4037, -4059, -4080, -4102, -4124, -4146, -4167, -4189,
   -4211, -4232, -4254, -4275, -4296, -4318, -4339, -4360,
   -4382, -4403, -4424, -4445, -4466, -4487, -4508, -4529,
   -4550, -4571, -4592, -4613, -4633, -4654, -4675, -4695,
   -4716, -4736, -4757, -4777, -4798, -4818, -4838, -4859,
   -4879, -4899, -4919, -4939, -4959, -4979, -4999, -5019,
   -5039, -5059, -5078, -5098, -5118, -5137, -5157, -5176,
   -5196, -5215, -5235, -5254, -5273, -5292, -5311, -5331,
   -5350, -5369, -5388, -5406, -5425, -5444, -5463, -5482,
   -5500, -5519, -5537, -5556, -5574, -5593, -5611, -5629,
   -5648, -5666, -5684, -5702, -5720, -5738, -5756, -5774,
   -5791, -5809, -5827, -5844, -5862, -5880, -5897, -5914,
   -5932, -5949, -5966, -5984, -6001, -6018, -6035, -6052,
   -6069, -6085, -6102, -6119, -6136, -6152, -6169, -6185,
   -6202, -6218, -6235, -6251, -6267, -6283, -6299, -6315,
   -6331, -6347, -6363, -6379, -6395, -6410, -6426, -6441,
   -6457, -6472, -6488, -6503, -6518, -6533, -6549, -6564,
   -6579, -6594, -6608, -6623, -6638, -6653, -6667, -6682,
   -6696, -6711, -6725, -6739, -6754, -6768, -6782, -6796,
   -6810, -6824, -6838, -6852, -6865, -6879, -6893, -6906,
   -6920, -6933, -6946, -6960, -6973, -6986, -6999, -7012,
   -7025, -7038, -7051, -7064, -7076, -7089, -7101, -7114,
   -7126, -7139, -7151, -7163, -7175, -7187, -7199, -7211,
   -7223, -7235, -7247, -7259, -7270, -7282, -7293, -7305,
   -7316, -7327, -7338, -7349, -7361, -7372, -7382, -7393,
   -7404, -7415, -7425, -7436, -7446, -7457, -7467, -7478,
   -7488, -7498, -7508, -7518, -7528, -7538, -7548, -7557,
   -7567, -7577, -7586, -7596, -7605, -7614, -7623, -7633,
   -7642, -7651, -7660, -7668, -7677, -7686, -7695, -7703,
   -7712, -7720, -7728, -7737, -7745, -7753, -7761, -7769,
   -7777, -7785, -7793, -7800, -7808, -7816, -7823, -7830,
   -7838, -7845, -7852, -7859, -7866, -7873, -7880, -7887,
   -7894, -7900, -7907, -7914, -7920, -7926, -7933, -7939,
   -7945, -7951, -7957, -7963, -7969, -7975, -7980, -7986,
   -7991, -7997, -8002, -8008, -8013, -8018, -8023, -8028,
   -8033, -8038, -8043, -8047, -8052, -8057, -8061, -8066,
   -8070, -8074, -8078, -8082, -8086, -8090, -8094, -8098,
   -8102, -8105, -8109, -8113, -8116, -8119, -8123, -8126,
   -8129, -8132, -8135, -8138, -8141, -8143, -8146, -8149,
   -8151, -8153, -8156, -8158, -8160, -8162, -8164, -8166,
   -8168, -8170, -8172, -8174, -8175, -8177, -8178, -8179,
   -8181, -8182, -8183, -8184, -8185, -8186, -8187, -8187,
   -8188, -8189, -8189, -8190, -8190, -8190, -8190, -8190,
   -8191, -8190, -8190, -8190, -8190, -8190, -8189, -8189,
   -8188, -8187, -8187, -8186, -8185, -8184, -8183, -8182,
   -8181, -8179, -8178, -8177, -8175, -8174, -8172, -8170,
   -8168, -8166, -8164, -8162, -8160, -8158, -8156, -8153,
   -8151, -8149, -8146, -8143, -8141, -8138, -8135, -8132,
   -8129, -8126, -8123, -8119, -8116, -8113, -8109, -8105,
   -8102, -8098, -8094, -8090, -8086, -8082, -8078, -8074,
   -8070, -8066, -8061, -8057, -8052, -8047, -8043, -8038,
   -8033, -8028, -8023, -8018, -8013, -8008, -8002, -7997,
   -7991, -7986, -7980, -7975, -7969, -7963, -7957, -7951,
   -7945, -7939, -7933, -7926, -7920, -7914, -7907, -7900,
   -7894, -7887, -7880, -7873, -7866, -7859, -7852, -7845,
   -7838, -7830, -7823, -7816, -7808, -7800, -7793, -7785,
   -7777, -7769, -7761, -7753, -7745, -7737, -7728, -7720,
   -7712, -7703, -7695, -7686, -7677, -7668, -7660, -7651,
   -7642, -7633, -7623, -7614, -7605, -7596, -7586, -7577,
   -7567, -7557, -7548, -7538, -7528, -7518, -7508, -7498,
   -7488, -7478, -7467, -7457, -7446, -7436, -7425, -7415,
   -7404, -7393, -7382, -7372, -7361, -7349, -7338, -7327,
   -7316, -7305, -7293, -7282, -7270, -7259, -7247, -7235,
   -7223, -7211, -7199, -7187, -7175, -7163, -7151, -7139,
   -7126, -7114, -7101, -7089, -7076, -7064, -7051, -7038,
   -7025, -7012, -6999, -6986, -6973, -6960, -6946, -6933,
   -6920, -6906, -6893, -6879, -6865, -6852, -6838, -6824,
   -6810, -6796, -6782, -6768, -6754, -6739, -6725, -6711,
   -6696, -6682, -6667, -6653, -6638, -6623, -6608, -6594,
   -6579, -6564, -6549, -6533, -6518, -6503, -6488, -6472,
   -6457, -6441, -6426, -6410, -6395, -6379, -6363, -6347,
   -6331, -6315, -6299, -6283, -6267, -6251, -6235, -6218,
   -6202, -6185, -6169, -6152, -6136, -6119, -6102, -6085,
   -6069, -6052, -6035, -6018, -6001, -5984, -5966, -5949,
   -5932, -5914, -5897, -5880, -5862, -5844, -5827, -5809,
   -5791, -5774, -5756, -5738, -5720, -5702, -5684, -5666,
   -5648, -5629, -5611, -5593, -5574, -5556, -5537, -5519,
   -5500, -5482, -5463, -5444, -5425, -5406, -5388, -5369,
   -5350, -5331, -5311, -5292, -5273, -5254, -5235, -5215,
   -5196, -5176, -5157, -5137, -5118, -5098, -5078, -5059,
   -5039, -5019, -4999, -4979, -4959, -4939, -4919, -4899,
   -4879, -4859, -4838, -4818, -4798, -4777, -4757, -4736,
   -4716, -4695, -4675, -4654, -4633, -4613, -4592, -4571,
   -4550, -4529, -4508, -4487, -4466, -4445, -4424, -4403,
   -4382, -4360, -4339, -4318, -4296, -4275, -4254, -4232,
   -4211, -4189, -4167, -4146, -4124, -4102, -4080, -4059,
   -4037, -4015, -3993, -3971, -3949, -3927, -3905, -3883,
   -3861, -3839, -3816, -3794, -3772, -3749, -3727, -3705,
   -3682, -3660, -3637, -3615, -3592, -3570, -3547, -3524,
   -3502, -3479, -3456, -3433, -3410, -3388, -3365, -3342,
   -3319, -3296, -3273, -3250, -3227, -3204, -3180, -3157,
   -3134, -3111, -3088, -3064, -3041, -3018, -2994, -2971,
   -2947, -2924, -2900, -2877, -2853, -2830, -2806, -2783,
   -2759, -2735, -2712, -2688, -2664, -2640, -2617, -2593,
   -2569, -2545, -2521, -2497, -2473, -2449, -2425, -2401,
   -2377, -2353, -2329, -2305, -2281, -2257, -2233, -2208,
   -2184, -2160, -2136, -2111, -2087, -2063, -2038, -2014,
   -1990, -1965, -1941, -1917, -1892, -1868, -1843, -1819,
   -1794, -1770, -1745, -1721, -1696, -1671, -1647, -1622,
   -1597, -1573, -1548, -1523, -1499, -1474, -1449, -1425,
   -1400, -1375, -1350, -1326, -1301, -1276, -1251, -1226,
   -1201, -1177, -1152, -1127, -1102, -1077, -1052, -1027,
   -1002, -977, -952, -927, -902, -877, -852, -827,
   -802, -777, -752, -727, -702, -677, -652, -627,
   -602, -577, -552, -527, -502, -477, -452, -427,
   -401, -376, -351, -326, -301, -276, -251, -226,
   -201, -175, -150, -125, -100, -75, -50, -25,
   0, 25, 50, 75, 100, 125, 150, 175,
   201, 226, 251, 276, 301, 326, 351, 376,
   401, 427, 452, 477, 502, 527, 552, 577,
   602, 627, 652, 677, 702, 727, 752, 777,
   802, 827, 852, 877, 902, 927, 952, 977,
   1002, 1027, 1052, 1077, 1102, 1127, 1152, 1177,
   1201, 1226, 1251, 1276, 1301, 1326, 1350, 1375,
   1400, 1425, 1449, 1474, 1499, 1523, 1548, 1573,
   1597, 1622, 1647, 1671, 1696, 1721, 1745, 1770,
   1794, 1819, 1843, 1868, 1892, 1917, 1941, 1965,
   1990, 2014, 2038, 2063, 2087, 2111, 2136, 2160,
   2184, 2208, 2233, 2257, 2281, 2305, 2329, 2353,
   2377, 2401, 2425, 2449, 2473, 2497, 2521, 2545,
   2569, 2593, 2617, 2640, 2664, 2688, 2712, 2735,
   2759, 2783, 2806, 2830, 2853, 2877, 2900, 2924,
   2947, 2971, 2994, 3018, 3041, 3064, 3088, 3111,
   3134, 3157, 3180, 3204, 3227, 3250, 3273, 3296,
   3319, 3342, 3365, 3388, 3410, 3433, 3456, 3479,
   3502, 3524, 3547, 3570, 3592, 3615, 3637, 3660,
   3682, 3705, 3727, 3749, 3772, 3794, 3816, 3839,
   3861, 3883, 3905, 3927, 3949, 3971, 3993, 4015,
   4037, 4059, 4080, 4102, 4124, 4146, 4167, 4189,
   4211, 4232, 4254, 4275, 4296, 4318, 4339, 4360,
   4382, 4403, 4424, 4445, 4466, 4487, 4508, 4529,
   4550, 4571, 4592, 4613, 4633, 4654, 4675, 4695,
   4716, 4736, 4757, 4777, 4798, 4818, 4838, 4859,
   4879, 4899, 4919, 4939, 4959, 4979, 4999, 5019,
   5039, 5059, 5078, 5098, 5118, 5137, 5157, 5176,
   5196, 5215, 5235, 5254, 5273, 5292, 5311, 5331,
   5350, 5369, 5388, 5406, 5425, 5444, 5463, 5482,
   5500, 5519, 5537, 5556, 5574, 5593, 5611, 5629,
   5648, 5666, 5684, 5702, 5720, 5738, 5756, 5774,
   5791, 5809, 5827, 5844, 5862, 5880, 5897, 5914,
   5932, 5949, 5966, 5984, 6001, 6018, 6035, 6052,
   6069, 6085, 6102, 6119, 6136, 6152, 6169, 6185,
   6202, 6218, 6235, 6251, 6267, 6283, 6299, 6315,
   6331, 6347, 6363, 6379, 6395, 6410, 6426, 6441,
   6457, 6472, 6488, 6503, 6518, 6533, 6549, 6564,
   6579, 6594, 6608, 6623, 6638, 6653, 6667, 6682,
   6696, 6711, 6725, 6739, 6754, 6768, 6782, 6796,
   6810, 6824, 6838, 6852, 6865, 6879, 6893, 6906,
   6920, 6933, 6946, 6960, 6973, 6986, 6999, 7012,
   7025, 7038, 7051, 7064, 7076, 7089, 7101, 7114,
   7126, 7139, 7151, 7163, 7175, 7187, 7199, 7211,
   7223, 7235, 7247, 7259, 7270, 7282, 7293, 7305,
   7316, 7327, 7338, 7349, 7361, 7372, 7382, 7393,
   7404, 7415, 7425, 7436, 7446, 7457, 7467, 7478,
   7488, 7498, 7508, 7518, 7528, 7538, 7548, 7557,
   7567, 7577, 7586, 7596, 7605, 7614, 7623, 7633,
   7642, 7651, 7660, 7668, 7677, 7686, 7695, 7703,
   7712, 7720, 7728, 7737, 7745, 7753, 7761, 7769,
   7777, 7785, 7793, 7800, 7808, 7816, 7823, 7830,
   7838, 7845, 7852, 7859, 7866, 7873, 7880, 7887,
   7894, 7900, 7907, 7914, 7920, 7926, 7933, 7939,
   7945, 7951, 7957, 7963, 7969, 7975, 7980, 7986,
   7991, 7997, 8002, 8008, 8013, 8018, 8023, 8028,
   8033, 8038, 8043, 8047, 8052, 8057, 8061, 8066,
   8070, 8074, 8078, 8082, 8086, 8090, 8094, 8098,
   8102, 8105, 8109, 8113, 8116, 8119, 8123, 8126,
   8129, 8132, 8135, 8138, 8141, 8143, 8146, 8149,
   8151, 8153, 8156, 8158, 8160, 8162, 8164, 8166,
   8168, 8170, 8172, 8174, 8175, 8177, 8178, 8179,
   8181, 8182, 8183, 8184, 8185, 8186, 8187, 8187,
   8188, 8189, 8189, 8190, 8190, 8190, 8190, 8190,
   8191, 8190, 8190, 8190, 8190, 8190, 8189, 8189,
   8188, 8187, 8187, 8186, 8185, 8184, 8183, 8182,
   8181, 8179, 8178, 8177, 8175, 8174, 8172, 8170,
   8168, 8166, 8164, 8162, 8160, 8158, 8156, 8153,
   8151, 8149, 8146, 8143, 8141, 8138, 8135, 8132,
   8129, 8126, 8123, 8119, 8116, 8113, 8109, 8105,
   8102, 8098, 8094, 8090, 8086, 8082, 8078, 8074,
   8070, 8066, 8061, 8057, 8052, 8047, 8043, 8038,
   8033, 8028, 8023, 8018, 8013, 8008, 8002, 7997,
   7991, 7986, 7980, 7975, 7969, 7963, 7957, 7951,
   7945, 7939, 7933, 7926, 7920, 7914, 7907, 7900,
   7894, 7887, 7880, 7873, 7866, 7859, 7852, 7845,
   7838, 7830, 7823, 7816, 7808, 7800, 7793, 7785,
   7777, 7769, 7761, 7753, 7745, 7737, 7728, 7720,
   7712, 7703, 7695, 7686, 7677, 7668, 7660, 7651,
   7642, 7633, 7623, 7614, 7605, 7596, 7586, 7577,
   7567, 7557, 7548, 7538, 7528, 7518, 7508, 7498,
   7488, 7478, 7467, 7457, 7446, 7436, 7425, 7415,
   7404, 7393, 7382, 7372, 7361, 7349, 7338, 7327,
   7316, 7305, 7293, 7282, 7270, 7259, 7247, 7235,
   7223, 7211, 7199, 7187, 7175, 7163, 7151, 7139,
   7126, 7114, 7101, 7089, 7076, 7064, 7051, 7038,
   7025, 7012, 6999, 6986, 6973, 6960, 6946, 6933,
   6920, 6906, 6893, 6879, 6865, 6852, 6838, 6824,
   6810, 6796, 6782, 6768, 6754, 6739, 6725, 6711,
   6696, 6682, 6667, 6653, 6638, 6623, 6608, 6594,
   6579, 6564, 6549, 6533, 6518, 6503, 6488, 6472,
   6457, 6441, 6426, 6410, 6395, 6379, 6363, 6347,
   6331, 6315, 6299, 6283, 6267, 6251, 6235, 6218,
   6202, 6185, 6169, 6152, 6136, 6119, 6102, 6085,
   6069, 6052, 6035, 6018, 6001, 5984, 5966, 5949,
   5932, 5914, 5897, 5880, 5862, 5844, 5827, 5809,
   5791, 5774, 5756, 5738, 5720, 5702, 5684, 5666,
   5648, 5629, 5611, 5593, 5574, 5556, 5537, 5519,
   5500, 5482, 5463, 5444, 5425, 5406, 5388, 5369,
   5350, 5331, 5311, 5292, 5273, 5254, 5235, 5215,
   5196, 5176, 5157, 5137, 5118, 5098, 5078, 5059,
   5039, 5019, 4999, 4979, 4959, 4939, 4919, 4899,
   4879, 4859, 4838, 4818, 4798, 4777, 4757, 4736,
   4716, 4695, 4675, 4654, 4633, 4613, 4592, 4571,
   4550, 4529, 4508, 4487, 4466, 4445, 4424, 4403,
   4382, 4360, 4339, 4318, 4296, 4275, 4254, 4232,
   4211, 4189, 4167, 4146, 4124, 4102, 4080, 4059,
   4037, 4015, 3993, 3971, 3949, 3927, 3905, 3883,
   3861, 3839, 3816, 3794, 3772, 3749, 3727, 3705,
   3682, 3660, 3637, 3615, 3592, 3570, 3547, 3524,
   3502, 3479, 3456, 3433, 3410, 3388, 3365, 3342,
   3319, 3296, 3273, 3250, 3227, 3204, 3180, 3157,
   3134, 3111, 3088, 3064, 3041, 3018, 2994, 2971,
   2947, 2924, 2900, 2877, 2853, 2830, 2806, 2783,
   2759, 2735, 2712, 2688, 2664, 2640, 2617, 2593,
   2569, 2545, 2521, 2497, 2473, 2449, 2425, 2401,
   2377, 2353, 2329, 2305, 2281, 2257, 2233, 2208,
   2184, 2160, 2136, 2111, 2087, 2063, 2038, 2014,
   1990, 1965, 1941, 1917, 1892, 1868, 1843, 1819,
   1794, 1770, 1745, 1721, 1696, 1671, 1647, 1622,
   1597, 1573, 1548, 1523, 1499, 1474, 1449, 1425,
   1400, 1375, 1350, 1326, 1301, 1276, 1251, 1226,
   1201, 1177, 1152, 1127, 1102, 1077, 1052, 1027,
   1002, 977, 952, 927, 902, 877, 852, 827,
   802, 777, 752, 727, 702, 677, 652, 627,
   602, 577, 552, 527, 502, 477, 452, 427,
   401, 376, 351, 326, 301, 276, 251, 226,
   201, 175, 150, 125, 100, 75, 50, 25,
    };
