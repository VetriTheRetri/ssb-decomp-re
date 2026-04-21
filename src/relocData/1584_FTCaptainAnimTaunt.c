/* AnimJoint data for relocData file 1584 (FTCaptainAnimTaunt) */
/* 4144 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimTaunt_joint1[56];
extern u16 dFTCaptainAnimTaunt_joint2[42];
extern u16 dFTCaptainAnimTaunt_joint4[58];
extern u16 dFTCaptainAnimTaunt_joint5[220];
extern u16 dFTCaptainAnimTaunt_joint6[88];
extern u16 dFTCaptainAnimTaunt_joint7[26];
extern u16 dFTCaptainAnimTaunt_joint8[34];
extern u16 dFTCaptainAnimTaunt_joint10[8];
extern u16 dFTCaptainAnimTaunt_joint11[314];
extern u16 dFTCaptainAnimTaunt_joint12[144];
extern u16 dFTCaptainAnimTaunt_joint13[34];
extern u16 dFTCaptainAnimTaunt_joint14[46];
extern u16 dFTCaptainAnimTaunt_joint16[12];
extern u16 dFTCaptainAnimTaunt_joint17[210];
extern u16 dFTCaptainAnimTaunt_joint19[88];
extern u16 dFTCaptainAnimTaunt_joint21[200];
extern u16 dFTCaptainAnimTaunt_joint22[188];
extern u16 dFTCaptainAnimTaunt_joint24[78];
extern u16 dFTCaptainAnimTaunt_joint25[176];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimTaunt_joints[] = {
	(u32)dFTCaptainAnimTaunt_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimTaunt_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimTaunt_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimTaunt_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimTaunt_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimTaunt_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimTaunt_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimTaunt_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimTaunt_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimTaunt_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimTaunt_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimTaunt_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimTaunt_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimTaunt_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimTaunt_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimTaunt_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimTaunt_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimTaunt_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTCaptainAnimTaunt_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimTaunt_joint1[56] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 10), -21,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), -2, -2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 1528, -112,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 1381,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 10), -41,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 1458, 331,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 1808,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 30), -41,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 30), -5, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 20), 1840,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 1808,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 1600, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimTaunt_joint2[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTY), 107, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 4, -76, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -738, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -933, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -715, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -356,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 30), -356,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 107, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimTaunt_joint4[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 189, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -31, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 299, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 214, 134,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -44, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 285, -31, -234, -5, 1, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -61, 0, -3, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 25,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), -58, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 28), 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 189, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimTaunt_joint5[220] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 239, 23, 5, -100, -524, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 228, -110, -378, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -95, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -288, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 43, -135, -376, -25, -62, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -42, -7, -338, 32, 190, 162,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -267, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 28, 82, 262, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 407, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 273, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 271, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 231, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -248, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -302, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 441, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 493, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 221, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 123, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 513, 16, -303, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -395, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 535, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 127, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 106, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -397, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -390, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 536, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 537, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 105, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 103, 0,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -392, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -426, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 537, -4, 103, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -64, -99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 395, -17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -443, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -238, 102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -181, -121,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -477, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 383, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 265, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -129, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -34, 67, -512, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, -25, 5, 40, -524, -11,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimTaunt_joint6[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, -71,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -869, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -995, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1051, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1004, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -857, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -817, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -753, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -762, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -896, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -892, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -827, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -826, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -784, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -788, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -830, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -831, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -977, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -960, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -817, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimTaunt_joint7[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2435, -89, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 2439, 0, 455, 10, -302, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 2439, 0, 455, -14, -302, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 2435, -89, -388,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimTaunt_joint8[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 34, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), -22, -383,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 34, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), -22, -383,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 0, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 0, -158,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimTaunt_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimTaunt_joint11[314] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -129, 24, 144, 66, 592, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -104, 76, 210, 121, 626, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 24, 418, 387, 235, 729, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 731, 390, 681, 348, 731, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 806, 101, 1085, 297, 402, -115,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1366, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 935, 84, 500, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 975, 31, 533, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 565, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 997, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1406, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1407, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1432, 29, 572, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 443, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1462, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 977, -33, 1426, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1304, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 714, -56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 436, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 579, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1207, -128,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 721, -95,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 659, 115, 633, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 945, 277, 947, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1215, 401, 672, -47, 1185, 381,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1748, 440, 626, -135, 1710, 462,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2096, 166, 402, -109, 2111, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2082, -267, 408, 97, 2093, -305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1560, -61, 596, 58, 1499, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 403, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1958, 269, 1938, 307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2099, 71, 2114, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2102, 2, 402, 0, 2118, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 397, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2103, 0, 2120, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 2084, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 2106, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2102, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2098, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 399, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2083, 19, 399, 5, 2097, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2122, -9, 410, 119, 2142, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2065, 348, 639, 158, 2077, 377,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2819, 489, 727, -23, 2897, 559,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3043, 165, 591, -91, 3196, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3150, 153, 544, -49, 3347, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3350, 111, 493, -85, 3611, 205,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3814, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3374, -43, 373, -115,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 180, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3263, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3138, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3087, -50, 144, -36, 3809, -5,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimTaunt_joint12[144] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, -86,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1111, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1320, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1506, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1302, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1131, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1084, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1141, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1116, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1095, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1121, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1233, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1263, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1175, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1003, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -647, 499,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -322, 361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -490, -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -715, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -731, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -738, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -961, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1028, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1034, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimTaunt_joint13[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 437, -4, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 270, 275, 62,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -34, 414, -443,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 250, 365, -57,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 250, 365, -57,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 270, 275, 62,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimTaunt_joint14[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1538, -1003, 119,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 85, 49, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1149, 0, -1138, 0, 570, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 1248, 0, -1064, 0, 669, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1064, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 1248, 669,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1248, 0, -1064, -1, 669, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1538, -1003, 119,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimTaunt_joint16[12] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 60), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTCaptainAnimTaunt_joint17[210] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, 29, 70, -16, -472, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 11, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -384, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 220, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 265, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 144, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -41, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -85, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -309, 64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -234, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 118, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 141, 45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -86, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -27, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -238, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -265, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 191, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 186, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -10, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -94, -48,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -263, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 98, -99, -139, -29, -223, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -147, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -12, -75, -101, 74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -74, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -53, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -54, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -146, 0, -72, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), -72, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), -146, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -54, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 26), -54, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -54, 4, -72, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -97, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 24, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -146, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -37, 39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -189, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -466, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 71, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 188, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 61, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 2, 70, 9, -472, -6,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimTaunt_joint19[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, 24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 525, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 583, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 703, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 741, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 751, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 715, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 520, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 348, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 72, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 129, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 227, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 438, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimTaunt_joint21[200] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1735, -26, 1650, 72, -1528, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1950, -169, -1489, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1722, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1879, 159,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 2158, 79,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2167, -223, -1342, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2397, -179, 2200, 24, -1167, 130,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 2199, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2526, -111, -1081, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -2755, -20, -1000, 16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2199, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 2209, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2777, -15, -979, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2763, 46, -971, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2693, 154, -1014, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2453, 289, 2220, -24, -1195, -210,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 2034, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2114, 267, -1436, -156,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1508, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1916, -88, -1432, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1858, 0, -1388, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1804, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), -1804, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1858, 0, -1387, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 1858, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -1383, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1386, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1393, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1858, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1656, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1799, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1734, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1398, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1456, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1491, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1528, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1735, 0, 1650, -5, -1528, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimTaunt_joint22[188] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 160, -20, 110, 28, -76, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 81, -63, -180, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 138, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 193, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 226, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 12, -46, -304, -120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 46, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -485, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -525, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -634, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 76, 28, 241, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 158, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 336, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -628, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -458, 99,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 139, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 198, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 341, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 281, -50,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -337, 128,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -71, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 259, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 351, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 219, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 152, -33, 26, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 351, 0, 152, 0, 26, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 28), 350, 0, 154, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 24, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), 24, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 351, -6, 152, 8, 26, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 204, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 210, 5, -49, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 209, -6, -61, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 116, -11, -76, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 185, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 161, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, -1, 110, -6, -76, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimTaunt_joint24[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, 16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 625, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 628, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 749, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 747, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 523, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 377, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 191, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 57, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 170, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 535, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, 6,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimTaunt_joint25[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 161, 7, 365, -56, -279, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 137, -43, -156, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 308, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 176, -145,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -198, -37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 83, -49, -95, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -115, -17, 2, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -199, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -180, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -190, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -13, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -120, 9, 4, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 72, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 17, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 56, 44, 47, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 199, 7, 317, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 164, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 265, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 199, 0, 317, 0, 265, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 199, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 317, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 270, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 267, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 265, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 199, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 234, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 318, 0, 230, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 322, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -267, -22,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 219, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 167, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 342, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 358, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, -5, 365, 6, -279, -11,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
