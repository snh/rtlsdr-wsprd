/*******************************************************************************
 * 4 metric tables calculated via simulation for 2-FSK with Es/No=0,3,6,9 dB
 * tables were calculated for constant rms noise level of 50. The symbol vector
 * should be normalized to have rms amplitude equal to "symbol_scale".
 ********************************************************************************/

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-braces"

// float symbol_scale[4]={42.6, 53.3, 72.7, 100.2};
static const float metric_tables[4][256] = {
    0.9782, 0.9695, 0.9689, 0.9669, 0.9666, 0.9653, 0.9638, 0.9618, 0.9599, 0.9601,
    0.9592, 0.9570, 0.9556, 0.9540, 0.9525, 0.9527, 0.9486, 0.9477, 0.9450, 0.9436,
    0.9424, 0.9400, 0.9381, 0.9360, 0.9340, 0.9316, 0.9301, 0.9272, 0.9254, 0.9224,
    0.9196, 0.9171, 0.9154, 0.9123, 0.9076, 0.9061, 0.9030, 0.9000, 0.8965, 0.8934,
    0.8903, 0.8874, 0.8834, 0.8792, 0.8760, 0.8726, 0.8685, 0.8639, 0.8599, 0.8550,
    0.8504, 0.8459, 0.8422, 0.8364, 0.8320, 0.8262, 0.8215, 0.8159, 0.8111, 0.8052,
    0.7996, 0.7932, 0.7878, 0.7812, 0.7745, 0.7685, 0.7616, 0.7550, 0.7479, 0.7405,
    0.7336, 0.7255, 0.7184, 0.7102, 0.7016, 0.6946, 0.6860, 0.6769, 0.6687, 0.6598,
    0.6503, 0.6416, 0.6325, 0.6219, 0.6122, 0.6016, 0.5920, 0.5818, 0.5711, 0.5606,
    0.5487, 0.5374, 0.5266, 0.5142, 0.5020, 0.4908, 0.4784, 0.4663, 0.4532, 0.4405,
    0.4271, 0.4144, 0.4006, 0.3865, 0.3731, 0.3594, 0.3455, 0.3304, 0.3158, 0.3009,
    0.2858, 0.2708, 0.2560, 0.2399, 0.2233, 0.2074, 0.1919, 0.1756, 0.1590, 0.1427,
    0.1251, 0.1074, 0.0905, 0.0722, 0.0550, 0.0381, 0.0183, 0.0000, -0.0185, -0.0391,
    -0.0571, -0.0760, -0.0966, -0.1160, -0.1370, -0.1584, -0.1787, -0.1999, -0.2214, -0.2423,
    -0.2643, -0.2879, -0.3114, -0.3336, -0.3568, -0.3806, -0.4050, -0.4293, -0.4552, -0.4798,
    -0.5046, -0.5296, -0.5564, -0.5836, -0.6093, -0.6372, -0.6645, -0.6933, -0.7208, -0.7495,
    -0.7763, -0.8065, -0.8378, -0.8660, -0.8964, -0.9293, -0.9592, -0.9907, -1.0214, -1.0509,
    -1.0850, -1.1168, -1.1528, -1.1847, -1.2157, -1.2511, -1.2850, -1.3174, -1.3540, -1.3900,
    -1.4201, -1.4580, -1.4956, -1.5292, -1.5683, -1.6030, -1.6411, -1.6789, -1.7147, -1.7539,
    -1.7887, -1.8289, -1.8699, -1.9043, -1.9469, -1.9849, -2.0267, -2.0610, -2.1028, -2.1391,
    -2.1855, -2.2215, -2.2712, -2.3033, -2.3440, -2.3870, -2.4342, -2.4738, -2.5209, -2.5646,
    -2.6016, -2.6385, -2.6868, -2.7356, -2.7723, -2.8111, -2.8524, -2.9009, -2.9428, -2.9879,
    -3.0103, -3.0832, -3.1340, -3.1628, -3.2049, -3.2557, -3.3101, -3.3453, -3.4025, -3.4317,
    -3.4828, -3.5270, -3.5745, -3.6181, -3.6765, -3.7044, -3.7410, -3.8118, -3.8368, -3.9549,
    -3.9488, -3.9941, -4.0428, -4.0892, -4.1648, -4.1965, -4.1892, -4.2565, -4.3356, -4.3948,
    -4.4481, -4.4607, -4.5533, -4.5809, -4.5927, -5.1047,
    0.9978, 0.9962, 0.9961, 0.9959, 0.9958, 0.9954, 0.9949, 0.9950, 0.9947, 0.9942,
    0.9940, 0.9939, 0.9933, 0.9931, 0.9928, 0.9924, 0.9921, 0.9916, 0.9911, 0.9909,
    0.9903, 0.9900, 0.9892, 0.9887, 0.9883, 0.9877, 0.9869, 0.9863, 0.9857, 0.9848,
    0.9842, 0.9835, 0.9825, 0.9817, 0.9808, 0.9799, 0.9791, 0.9777, 0.9767, 0.9757,
    0.9744, 0.9729, 0.9716, 0.9704, 0.9690, 0.9674, 0.9656, 0.9641, 0.9625, 0.9609,
    0.9587, 0.9567, 0.9548, 0.9524, 0.9501, 0.9478, 0.9453, 0.9426, 0.9398, 0.9371,
    0.9339, 0.9311, 0.9277, 0.9242, 0.9206, 0.9168, 0.9131, 0.9087, 0.9043, 0.8999,
    0.8953, 0.8907, 0.8857, 0.8803, 0.8747, 0.8690, 0.8632, 0.8572, 0.8507, 0.8439,
    0.8368, 0.8295, 0.8217, 0.8138, 0.8058, 0.7972, 0.7883, 0.7784, 0.7694, 0.7597,
    0.7489, 0.7378, 0.7269, 0.7152, 0.7030, 0.6911, 0.6782, 0.6643, 0.6506, 0.6371,
    0.6211, 0.6054, 0.5897, 0.5740, 0.5565, 0.5393, 0.5214, 0.5027, 0.4838, 0.4643,
    0.4436, 0.4225, 0.4004, 0.3787, 0.3562, 0.3324, 0.3089, 0.2839, 0.2584, 0.2321,
    0.2047, 0.1784, 0.1499, 0.1213, 0.0915, 0.0628, 0.0314, 0.0000, -0.0321, -0.0657,
    -0.0977, -0.1324, -0.1673, -0.2036, -0.2387, -0.2768, -0.3150, -0.3538, -0.3936, -0.4327,
    -0.4739, -0.5148, -0.5561, -0.6000, -0.6438, -0.6889, -0.7331, -0.7781, -0.8247, -0.8712,
    -0.9177, -0.9677, -1.0142, -1.0631, -1.1143, -1.1686, -1.2169, -1.2680, -1.3223, -1.3752,
    -1.4261, -1.4806, -1.5356, -1.5890, -1.6462, -1.7041, -1.7591, -1.8124, -1.8735, -1.9311,
    -1.9891, -2.0459, -2.1048, -2.1653, -2.2248, -2.2855, -2.3466, -2.4079, -2.4668, -2.5263,
    -2.5876, -2.6507, -2.7142, -2.7761, -2.8366, -2.8995, -2.9620, -3.0279, -3.0973, -3.1576,
    -3.2238, -3.2890, -3.3554, -3.4215, -3.4805, -3.5518, -3.6133, -3.6812, -3.7473, -3.8140,
    -3.8781, -3.9450, -4.0184, -4.0794, -4.1478, -4.2241, -4.2853, -4.3473, -4.4062, -4.4839,
    -4.5539, -4.6202, -4.6794, -4.7478, -4.8309, -4.9048, -4.9669, -5.0294, -5.1194, -5.1732,
    -5.2378, -5.3094, -5.3742, -5.4573, -5.5190, -5.5728, -5.6637, -5.7259, -5.7843, -5.8854,
    -5.9553, -6.0054, -6.0656, -6.1707, -6.2241, -6.3139, -6.3393, -6.4356, -6.5153, -6.5758,
    -6.6506, -6.7193, -6.7542, -6.8942, -6.9219, -6.9605, -7.1013, -7.1895, -7.1549, -7.2799,
    -7.4119, -7.4608, -7.5256, -7.5879, -7.7598, -8.4120,
    0.9999, 0.9998, 0.9998, 0.9998, 0.9998, 0.9998, 0.9997, 0.9997, 0.9997, 0.9997,
    0.9997, 0.9996, 0.9996, 0.9996, 0.9995, 0.9995, 0.9994, 0.9994, 0.9994, 0.9993,
    0.9993, 0.9992, 0.9991, 0.9991, 0.9990, 0.9989, 0.9988, 0.9988, 0.9988, 0.9986,
    0.9985, 0.9984, 0.9983, 0.9982, 0.9980, 0.9979, 0.9977, 0.9976, 0.9974, 0.9971,
    0.9969, 0.9968, 0.9965, 0.9962, 0.9960, 0.9957, 0.9953, 0.9950, 0.9947, 0.9941,
    0.9937, 0.9933, 0.9928, 0.9922, 0.9917, 0.9911, 0.9904, 0.9897, 0.9890, 0.9882,
    0.9874, 0.9863, 0.9855, 0.9843, 0.9832, 0.9819, 0.9806, 0.9792, 0.9777, 0.9760,
    0.9743, 0.9724, 0.9704, 0.9683, 0.9659, 0.9634, 0.9609, 0.9581, 0.9550, 0.9516,
    0.9481, 0.9446, 0.9406, 0.9363, 0.9317, 0.9270, 0.9218, 0.9160, 0.9103, 0.9038,
    0.8972, 0.8898, 0.8822, 0.8739, 0.8647, 0.8554, 0.8457, 0.8357, 0.8231, 0.8115,
    0.7984, 0.7854, 0.7704, 0.7556, 0.7391, 0.7210, 0.7038, 0.6840, 0.6633, 0.6408,
    0.6174, 0.5939, 0.5678, 0.5410, 0.5137, 0.4836, 0.4524, 0.4193, 0.3850, 0.3482,
    0.3132, 0.2733, 0.2315, 0.1891, 0.1435, 0.0980, 0.0493, 0.0000, -0.0510, -0.1052,
    -0.1593, -0.2177, -0.2759, -0.3374, -0.4005, -0.4599, -0.5266, -0.5935, -0.6626, -0.7328,
    -0.8051, -0.8757, -0.9498, -1.0271, -1.1019, -1.1816, -1.2642, -1.3459, -1.4295, -1.5077,
    -1.5958, -1.6818, -1.7647, -1.8548, -1.9387, -2.0295, -2.1152, -2.2154, -2.3011, -2.3904,
    -2.4820, -2.5786, -2.6730, -2.7652, -2.8616, -2.9546, -3.0526, -3.1445, -3.2445, -3.3416,
    -3.4357, -3.5325, -3.6324, -3.7313, -3.8225, -3.9209, -4.0248, -4.1278, -4.2261, -4.3193,
    -4.4220, -4.5262, -4.6214, -4.7242, -4.8234, -4.9245, -5.0298, -5.1250, -5.2232, -5.3267,
    -5.4332, -5.5342, -5.6431, -5.7270, -5.8401, -5.9350, -6.0407, -6.1418, -6.2363, -6.3384,
    -6.4536, -6.5429, -6.6582, -6.7433, -6.8438, -6.9478, -7.0789, -7.1894, -7.2714, -7.3815,
    -7.4810, -7.5575, -7.6852, -7.8071, -7.8580, -7.9724, -8.1000, -8.2207, -8.2867, -8.4017,
    -8.5287, -8.6347, -8.7082, -8.8319, -8.9448, -9.0355, -9.1885, -9.2095, -9.2863, -9.4186,
    -9.5064, -9.6386, -9.7207, -9.8286, -9.9453, -10.0701, -10.1735, -10.3001, -10.2858, -10.5427,
    -10.5982, -10.7361, -10.7042, -10.9212, -11.0097, -11.0469, -11.1155, -11.2812, -11.3472, -11.4988,
    -11.5327, -11.6692, -11.9376, -11.8606, -12.1372, -13.2539,
    1.0000, 1.0000, 1.0000, 1.0000, 1.0000, 1.0000, 1.0000, 1.0000, 1.0000, 1.0000,
    1.0000, 1.0000, 1.0000, 1.0000, 1.0000, 1.0000, 1.0000, 1.0000, 1.0000, 1.0000,
    1.0000, 1.0000, 1.0000, 1.0000, 1.0000, 1.0000, 1.0000, 1.0000, 1.0000, 1.0000,
    0.9999, 0.9999, 0.9999, 0.9999, 0.9999, 0.9999, 0.9999, 0.9999, 0.9999, 0.9999,
    0.9999, 0.9998, 0.9998, 0.9998, 0.9998, 0.9997, 0.9997, 0.9997, 0.9997, 0.9996,
    0.9996, 0.9995, 0.9995, 0.9994, 0.9994, 0.9993, 0.9992, 0.9991, 0.9991, 0.9989,
    0.9988, 0.9986, 0.9985, 0.9983, 0.9981, 0.9980, 0.9977, 0.9974, 0.9971, 0.9968,
    0.9965, 0.9962, 0.9956, 0.9950, 0.9948, 0.9941, 0.9933, 0.9926, 0.9919, 0.9910,
    0.9899, 0.9889, 0.9877, 0.9863, 0.9845, 0.9829, 0.9811, 0.9791, 0.9769, 0.9741,
    0.9716, 0.9684, 0.9645, 0.9611, 0.9563, 0.9519, 0.9463, 0.9406, 0.9344, 0.9272,
    0.9197, 0.9107, 0.9016, 0.8903, 0.8791, 0.8653, 0.8523, 0.8357, 0.8179, 0.7988,
    0.7779, 0.7562, 0.7318, 0.7024, 0.6753, 0.6435, 0.6089, 0.5700, 0.5296, 0.4860,
    0.4366, 0.3855, 0.3301, 0.2735, 0.2114, 0.1443, 0.0682, 0.0000, -0.0715, -0.1604,
    -0.2478, -0.3377, -0.4287, -0.5277, -0.6291, -0.7384, -0.8457, -0.9559, -1.0742, -1.1913,
    -1.3110, -1.4238, -1.5594, -1.6854, -1.8093, -1.9414, -2.0763, -2.2160, -2.3611, -2.4876,
    -2.6374, -2.7710, -2.9225, -3.0591, -3.2077, -3.3452, -3.4916, -3.6316, -3.7735, -3.9296,
    -4.0682, -4.2334, -4.3607, -4.5270, -4.6807, -4.8108, -4.9753, -5.1212, -5.2631, -5.4042,
    -5.5510, -5.7227, -5.8794, -6.0244, -6.1677, -6.3271, -6.4862, -6.6130, -6.7449, -6.9250,
    -7.1232, -7.1736, -7.3628, -7.5596, -7.6906, -7.8129, -7.9817, -8.1440, -8.3016, -8.4797,
    -8.5734, -8.7692, -8.9198, -9.0610, -9.1746, -9.3536, -9.5939, -9.6957, -9.8475, -9.9639,
    -10.1730, -10.2427, -10.4573, -10.5413, -10.7303, -10.9339, -11.0215, -11.2047, -11.2894, -11.4572,
    -11.6256, -11.7794, -11.8801, -12.1717, -12.2354, -12.3686, -12.6195, -12.6527, -12.8247, -12.9560,
    -13.3265, -13.1667, -13.4274, -13.6064, -13.5515, -13.9501, -13.9926, -14.4049, -14.1653, -14.4348,
    -14.7983, -14.7807, -15.2349, -15.3536, -15.3026, -15.2739, -15.7170, -16.2161, -15.9185, -15.9490,
    -16.6258, -16.5568, -16.4318, -16.7999, -16.4101, -17.6393, -17.7643, -17.2644, -17.5973, -17.0403,
    -17.7039, -18.0073, -18.1840, -18.3848, -18.6286, -20.7063};

#pragma GCC diagnostic pop