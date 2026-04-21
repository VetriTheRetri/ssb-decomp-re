/* AnimJoint data for relocData file 510 (FTMarioAnimJumpB) */
/* 2032 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimJumpB_joint2[8];
extern u16 dFTMarioAnimJumpB_joint4[26];
extern u16 dFTMarioAnimJumpB_joint5[168];
extern u16 dFTMarioAnimJumpB_joint6[30];
extern u16 dFTMarioAnimJumpB_joint7[14];
extern u16 dFTMarioAnimJumpB_joint10[20];
extern u16 dFTMarioAnimJumpB_joint11[148];
extern u16 dFTMarioAnimJumpB_joint12[20];
extern u16 dFTMarioAnimJumpB_joint13[14];
extern u16 dFTMarioAnimJumpB_joint15[10];
extern u16 dFTMarioAnimJumpB_joint16[62];
extern u16 dFTMarioAnimJumpB_joint18[30];
extern u16 dFTMarioAnimJumpB_joint20[84];
extern u16 dFTMarioAnimJumpB_joint21[116];
extern u16 dFTMarioAnimJumpB_joint23[46];
extern u16 dFTMarioAnimJumpB_joint24[172];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimJumpB_joints[] = {
	(u32)dFTMarioAnimJumpB_joint2, /* [0] joint 2 */
	0x00000000, /* [1] NULL */
	(u32)dFTMarioAnimJumpB_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimJumpB_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimJumpB_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimJumpB_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimJumpB_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimJumpB_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimJumpB_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimJumpB_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimJumpB_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimJumpB_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimJumpB_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimJumpB_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimJumpB_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimJumpB_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimJumpB_joint24, /* [23] joint 24 */
};

/* Joint 2 */
u16 dFTMarioAnimJumpB_joint2[8] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 6433, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 100), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimJumpB_joint4[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -134, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 100), 89,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 80), 0, 0, 0, -1, 0, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, -14, -92,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimJumpB_joint5[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1777, 0, -334, 0, 2160, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -1748, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), -619, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 2042, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2036, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1426, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1729, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1100, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -633, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -671, -22,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1377, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 1386, -27,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1097, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1148, 28,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -693, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -523, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1108, 66, 1346, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -819, 245, 1057, -246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -524, 243, 760, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -140, -1, 370, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -150, -15, 381, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 854, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), -655, -41,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -526, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), -692, -2,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 895, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1434, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -696, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1270, -52,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1509, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1490, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1302, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1251, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1243, 7, -693, 0, 1482, -7,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimJumpB_joint6[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimJumpB_joint7[14] = {
	ftAnimSetVal(FT_ANIM_ROTX), -1608,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 50), -1608,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 50), -625,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimJumpB_joint10[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -368,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 72), -425, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), 138, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 127,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimJumpB_joint11[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1805, -3, 332, 1, 2165, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 619, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 23), 1777, -5, 2036, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1767, -17, 2018, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 1334, -70, 1539, -73,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 634, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 693, 24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1268, -54, 1471, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 17), 1182, -22, 1386, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1141, -66, 716, 22, 1346, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 528, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 577, -255, 779, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 338, -160, 539, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 192, 5, 391, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 194, 8, 395, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 796, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 651, 33,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 526, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), 692, 0,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 827, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1358, 92,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 685, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1155, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1241, 66, 1446, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1284, -13, 1490, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1276, -7, 693, 0, 1482, -7,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimJumpB_joint12[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 57), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 41), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimJumpB_joint13[14] = {
	ftAnimSetVal(FT_ANIM_ROTX), 1608,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 50), 1608,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 50), 625,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimJumpB_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimJumpB_joint16[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1617, 0, 1628, 0, 1822, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 92), 1627, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 99), -1609, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 38), 1837, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1837, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 1746, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1748, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 1514, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1515, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1504, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1623, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1605, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1609, 0, 1604, 0, 1503, -1,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimJumpB_joint18[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 47), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimJumpB_joint20[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1517, 0, 1558, 0, -1280, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 64), 1524, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 90), 1556, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 40), -1363, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1374, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -1182, -3,
	ftAnimBlock(0, 23),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1523, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 1467, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1183, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -1082, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1071, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1273, -66,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1455, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1462, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1558, 3, -1332, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1614, 2, -1063, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1462, 0, 1615, 1, -1060, 2,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimJumpB_joint21[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1617, -1327, 1588, 0, 1818, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 34), 1802, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 86), 1583, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 290, -664,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 288, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 54), 259, 1,
	ftAnimBlock(0, 32),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1803, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), 1776, 9,
	ftAnimBlock(0, 21),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 260, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 338, 9,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1788, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 1833, -3,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 353, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 419, 583, 1582, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1378, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1520, 681, 1826, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1776, -15, 1535, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1749, -30, 1465, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 1632, 0, 1369, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1366, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1399, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1631, 0, 1403, 4, 1374, 5,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimJumpB_joint23[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 51), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, 305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 618, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 936, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, -4,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimJumpB_joint24[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 80, -164, -20, 1348, 326, -646,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -83, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1328, 674, -319, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1329, 1, -319, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 37), -240, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), 1297, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -81, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 39), -7, 7,
	ftAnimBlock(0, 36),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -229, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -424, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1296, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), 1334, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -148, 0,
	ftAnimBlock(0, 21),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -427, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -259, 10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -148, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -73, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1327, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), 1272, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1255, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -90, 106, 1193, -588, -257, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 139, 69, 77, -691, 192, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 48, -49, -189, -148, 25, -126,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -191, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 114, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -219, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -175, 7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -204, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -180, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 121, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 143, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 148, 4, -170, 4, -183, -2,
	ftAnimEnd(),
	0x0000, 0x0000,
};
