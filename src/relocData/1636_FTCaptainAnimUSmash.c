/* AnimJoint data for relocData file 1636 (FTCaptainAnimUSmash) */
/* 4592 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimUSmash_joint1[38];
extern u16 dFTCaptainAnimUSmash_joint2[108];
extern u16 dFTCaptainAnimUSmash_joint3[98];
extern u16 dFTCaptainAnimUSmash_joint5[122];
extern u16 dFTCaptainAnimUSmash_joint6[256];
extern u16 dFTCaptainAnimUSmash_joint7[104];
extern u16 dFTCaptainAnimUSmash_joint8[26];
extern u16 dFTCaptainAnimUSmash_joint9[60];
extern u16 dFTCaptainAnimUSmash_joint11[68];
extern u16 dFTCaptainAnimUSmash_joint12[250];
extern u16 dFTCaptainAnimUSmash_joint13[88];
extern u16 dFTCaptainAnimUSmash_joint14[62];
extern u16 dFTCaptainAnimUSmash_joint15[10];
extern u16 dFTCaptainAnimUSmash_joint17[14];
extern u16 dFTCaptainAnimUSmash_joint18[182];
extern u16 dFTCaptainAnimUSmash_joint20[84];
extern u16 dFTCaptainAnimUSmash_joint22[196];
extern u16 dFTCaptainAnimUSmash_joint23[168];
extern u16 dFTCaptainAnimUSmash_joint25[84];
extern u16 dFTCaptainAnimUSmash_joint26[226];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimUSmash_joints[] = {
	(u32)dFTCaptainAnimUSmash_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimUSmash_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimUSmash_joint3, /* [2] joint 3 */
	(u32)dFTCaptainAnimUSmash_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTCaptainAnimUSmash_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimUSmash_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimUSmash_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimUSmash_joint9, /* [8] joint 9 */
	(u32)dFTCaptainAnimUSmash_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTCaptainAnimUSmash_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimUSmash_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimUSmash_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimUSmash_joint15, /* [14] joint 15 */
	(u32)dFTCaptainAnimUSmash_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTCaptainAnimUSmash_joint18, /* [17] joint 18 */
	(u32)dFTCaptainAnimUSmash_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTCaptainAnimUSmash_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTCaptainAnimUSmash_joint23, /* [22] joint 23 */
	(u32)dFTCaptainAnimUSmash_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTCaptainAnimUSmash_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTCaptainAnimUSmash_joint1[38] = {
	ftAnimSetVal(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0,
	ftAnimSetValT(FT_ANIM_TRAY, 27), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 2), 453,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -31,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 438, -34,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 16), 0, -717,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 5), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimUSmash_joint2[108] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1592, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), -184, 33,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 976, -295,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -138, 19,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 976, 92,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 419,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 793, 181,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1777, 128,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 2025, 128,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 952, 2,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 2111, 125,
	ftAnimSetValT(FT_ANIM_TRAY, 3), 1969,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 1), 122,
	ftAnimSetValT(FT_ANIM_TRAZ, 7), 76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 2534, 252,
	ftAnimBlock(0, 2),
	ftAnimSetValBlockT(FT_ANIM_TRAY, 5), 1905,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1862, 57,
	ftAnimSetValT(FT_ANIM_TRAY, 10), 1717,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 6), 21,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 130,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 2944, 60,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 4), 23,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1187, -2,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -571,
	ftAnimSetValT(FT_ANIM_TRAZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 9), 3221, -2, 1190, 547,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 6), 3216, 0, 1592, 890,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTCaptainAnimUSmash_joint3[98] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 107, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -281, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 107, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -107, 3, 107, 6, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -263, 8, 138, 16, -261, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -41, 23, 237, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -250, 4,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -157, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 67, 9, 8, -1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -145, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 177, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 88, 1, -15, 18,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 78, -4, -15, 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 107, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimUSmash_joint5[122] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 189, 0, 0, 0, -31, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 404, 51, -102, -13, -101, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -3, -26, 70,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 3, -31, -5, 47, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 397, -28, -55, 18, -53, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 260, 4, -8, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 273, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 107, 32,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -31, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 282, -1, 57, 9,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 0, -31, 47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 264, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 260, -9, 133, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 433, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 38, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 187, -3, 33, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 224, 0, -49, 0, 20, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 189, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 34, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 22, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimUSmash_joint6[256] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1849, -171, -1613, 501, -2137, 276,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1525, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1112, 184, -1861, 304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1244, -116, -1529, 244,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1370, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1344, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1574, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1648, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1633, 98, -1489, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1844, 127, -1380, -100, -2018, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1887, 21, -1545, -100, -2046, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2021, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1845, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1582, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1363, 48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2097, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1643, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1815, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1658, 72,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1316, 30, -1647, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1309, 187,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1496, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1750, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1695, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1703, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1640, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1101, 199,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -840, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1466, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1360, -276, -1534, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 782, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1352, 148, -887, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1073, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -794, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 720, 36, -740, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 854, 312, -1078, -212, -971, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1345, 314, -1499, -159, -818, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1362, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1396, 69, -1102, -105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1374, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1029, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1551, -208,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1327, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1688, 94,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1383, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1592, -30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1778, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1835, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1768, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1960, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1849, 13, -1613, -20, -2137, -177,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimUSmash_joint7[104] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -800, -372,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1172, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1291, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -999, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -936, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -879, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -705, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -491, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -247, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -600, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -672, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -485, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1033, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -928, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -769, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -768, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -642, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -512, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -751, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -840, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1255, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1267, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1049, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -800, 248,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimUSmash_joint8[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 2435,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -89, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 2435, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2942, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 2942, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 3418, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 2435,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTCaptainAnimUSmash_joint9[60] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -25, -4, 30, -24, 0, 1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -27, 0, -168, -33, 10, 1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -27, 0, -168, 12, 10, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), -42, 0, 3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), 4, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 66, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -25, 2, -1, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimUSmash_joint11[68] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -92, -25, 46, -45, -1, 12,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -152, -10, -273, -22, 73, 12,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -152, 14, -273, 54, 73, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 46, -1, 421, 0, 19, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 165, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -60, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 24, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -97, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTCaptainAnimUSmash_joint12[250] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1479, 171, 1463, -253, 2208, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1651, -62, 1210, -34, 2029, -351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1353, -143, 1394, 184, 1505, -436,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1587, -219, 714, -490,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1364, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1541, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1142, -575, 1140, -135, 176, -362,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 141, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 389, -394, 1315, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 353, 32, 1255, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1606, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 454, 131,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 651, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 287, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 72, -78,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 636, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 479, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 27, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 156, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 193, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 251, -48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1557, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1200, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 472, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 372, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 267, -230, 178, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -87, -300, 1070, -72, -132, -259,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1014, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -333, -177, -341, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -371, 152, -346, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -137, 493, 1002, -22, -150, 495,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 615, 671, 968, -10, 645, 620,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1204, 382, 982, 247, 1089, 227,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1363, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1463, 223, 1099, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1429, -34, 1074, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1344, 145,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1353, 67,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1382, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1519, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1505, 155,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1957, 172,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1523, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1538, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1423, 55, 2139, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1479, -59, 1463, 40, 2208, 68,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimUSmash_joint13[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1032, -86,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1118, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -678, 410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -297, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1086, -493,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1285, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1309, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1049, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -963, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -834, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -837, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -925, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -642, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -600, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1027, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1061, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1270, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1248, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1215, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1032, 183,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimUSmash_joint14[62] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -333, -146, 291, -92, 202, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -462, -57, -188, -47, -135, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -678, -6, 7, 38, 225, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -524, 14, 196, 21, 310, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -548, 53, 197, 6, 294, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 64, 123, 269, 2, 240, -56,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 15, -27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 270, 275, 62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTCaptainAnimUSmash_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 46),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimUSmash_joint17[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 18, 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 46), 0, 18, 0, -3,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTCaptainAnimUSmash_joint18[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 190, 110, 72, 45, -479, -136,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -778, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 72, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 274, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 232, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 117, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -809, 319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -64, -192, -139, 514,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -312, -122, 218, 151,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -53, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -310, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -91, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 237, 81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -33, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -154, -113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -396, 33,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -116, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -66, 42,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -36, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 128, 82,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -24, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -128, -58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -366, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -541, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 213, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 67, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -33, 14, -183, -33, -542, -184,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 119, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 97, 57, -910, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 82, -17, -967, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -631, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 129, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 150, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 187, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 115, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 100, -21, -566, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 190, 3, 72, -27, -479, 86,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimUSmash_joint20[84] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 457, 493,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 950, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1014, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1062, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1116, -299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 464, -556,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 258, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 317, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 569, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 579, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 561, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 527, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 499, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 889, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 927, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 951, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 672, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 588, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 457, -131,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimUSmash_joint22[196] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1736, -248, 1650, 6, 1684, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1550, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1631, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1984, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1957, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1817, 162,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1463, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1577, 138, 1469, 0, 1512, 143,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1592, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1632, 18, 1750, 165,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1893, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1505, -76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1491, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1579, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1589, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1981, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2102, 31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1485, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1703, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1557, 27, 2131, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 2075, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -1865, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1927, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1931, 166, 1699, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1747, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1593, 161,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1734, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2014, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1806, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1753, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1552, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1662, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1593, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1764, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1588, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1507, -38, 1607, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 1648, 4, 1643, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1561, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -1758, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1756, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1749, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1736, 13, 1650, 1, 1684, 41,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimUSmash_joint23[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1445, -235, 1502, -257, -1665, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1680, -128, 1245, -99, -1521, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1703, -16, 1302, 50, -1592, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1361, 123, -1686, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1714, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1698, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1273, 137, 1593, 42, -1799, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1423, -79, 1445, -58, -2112, -114,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1351, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1475, 20, -2027, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1508, 41, -2228, -10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1367, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1547, 17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1556, 47, -2235, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -2028, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1503, 44,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1530, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1629, -37,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1991, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1847, -101,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1547, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1483, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1677, -15, -2040, -85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1548, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1990, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1962, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1714, 40,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1537, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1461, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1445, 16, 1502, 18, -1665, 48,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimUSmash_joint25[84] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 533, 631,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1164, 323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1181, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1197, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1063, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1258, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1210, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1026, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1005, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 682, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 669, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 585, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 559, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 556, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 565, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1088, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1119, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 743, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 658, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 533, -124,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTCaptainAnimUSmash_joint26[226] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1766, -65, 1257, 551, 1312, -218,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1553, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1808, 234, 1093, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1727, -66, 1366, 218,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1664, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1530, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1535, -74, 1538, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1852, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1405, -16, 1761, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1678, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1501, 107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1623, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1782, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1889, 26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1580, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1633, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1688, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1501, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1927, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1778, -14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1693, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1653, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1417, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1408, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1763, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1891, 192,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1346, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1331, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1676, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1784, 9, 2140, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1695, -18, 1682, 290, 2306, -147,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1729, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1913, 39, 1846, -373,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1468, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1761, -170,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1400, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1530, -154,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1419, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1434, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1124, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1352, -43, 1071, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1200, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1257, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1406, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1772, 1,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1247, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1766, -6, 1257, 0, 1312, 65,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
