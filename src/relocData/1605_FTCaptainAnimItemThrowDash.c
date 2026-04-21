/* AnimJoint data for relocData file 1605 (FTCaptainAnimItemThrowDash) */
/* 3680 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimItemThrowDash_joint1[20];
extern u16 dFTCaptainAnimItemThrowDash_joint2[20];
extern u16 dFTCaptainAnimItemThrowDash_joint3[56];
extern u16 dFTCaptainAnimItemThrowDash_joint5[66];
extern u16 dFTCaptainAnimItemThrowDash_joint6[232];
extern u16 dFTCaptainAnimItemThrowDash_joint7[72];
extern u16 dFTCaptainAnimItemThrowDash_joint8[46];
extern u16 dFTCaptainAnimItemThrowDash_joint9[54];
extern u16 dFTCaptainAnimItemThrowDash_joint11[8];
extern u16 dFTCaptainAnimItemThrowDash_joint12[250];
extern u16 dFTCaptainAnimItemThrowDash_joint13[94];
extern u16 dFTCaptainAnimItemThrowDash_joint14[48];
extern u16 dFTCaptainAnimItemThrowDash_joint15[10];
extern u16 dFTCaptainAnimItemThrowDash_joint17[36];
extern u16 dFTCaptainAnimItemThrowDash_joint18[172];
extern u16 dFTCaptainAnimItemThrowDash_joint20[60];
extern u16 dFTCaptainAnimItemThrowDash_joint22[188];
extern u16 dFTCaptainAnimItemThrowDash_joint23[146];
extern u16 dFTCaptainAnimItemThrowDash_joint25[68];
extern u16 dFTCaptainAnimItemThrowDash_joint26[142];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimItemThrowDash_joints[] = {
	(u32)dFTCaptainAnimItemThrowDash_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimItemThrowDash_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimItemThrowDash_joint3, /* [2] joint 3 */
	(u32)dFTCaptainAnimItemThrowDash_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTCaptainAnimItemThrowDash_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimItemThrowDash_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimItemThrowDash_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimItemThrowDash_joint9, /* [8] joint 9 */
	(u32)dFTCaptainAnimItemThrowDash_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTCaptainAnimItemThrowDash_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimItemThrowDash_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimItemThrowDash_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimItemThrowDash_joint15, /* [14] joint 15 */
	(u32)dFTCaptainAnimItemThrowDash_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTCaptainAnimItemThrowDash_joint18, /* [17] joint 18 */
	(u32)dFTCaptainAnimItemThrowDash_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTCaptainAnimItemThrowDash_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTCaptainAnimItemThrowDash_joint23, /* [22] joint 23 */
	(u32)dFTCaptainAnimItemThrowDash_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTCaptainAnimItemThrowDash_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTCaptainAnimItemThrowDash_joint1[20] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 0, 10,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 2529,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 18), 3759, 525,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), 4264, 296,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 14), 4547,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimItemThrowDash_joint2[20] = {
	ftAnimSetVal(FT_ANIM_TRAY), 1503,
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 8), 1503,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 11), 1503,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 7), 842,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 7), 1116,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 7), 1600,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTCaptainAnimItemThrowDash_joint3[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 242,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 0, 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 210,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 178,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 223,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 11), 223,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), 318,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 7, 0, 0, 0, 2, 0, -43, 0, 5,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), 318,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 107, 0, 4, -76, 9,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimItemThrowDash_joint5[66] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 92, 230, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 159, 3, -468, 57, -78, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 105, -19, 462, 116, 133, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 60, -3, 115, -30, 33, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 46, -7, 0, -11, 0, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 7), -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -79, 30, 2, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 257, -2, -76, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 14), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -102, -4, 7, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 189, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTCaptainAnimItemThrowDash_joint6[232] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1481, -91, 1882, 0, 2174, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1390, 78, 1881, 124, 1959, -340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1637, 15, 2131, 45, 1493, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1422, -126, 1973, -119, 1786, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1385, -20, 1892, -47, 1887, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1867, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1376, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1909, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1932, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2010, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1858, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1853, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1378, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1388, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1427, -2, 1876, -12, 2047, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2054, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1383, -39, 1828, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1348, -29, 1788, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1303, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1697, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2055, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1930, -102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1346, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1717, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1708, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1758, -13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1810, -125,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1308, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1799, 76, 1735, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 2029, 94, 1713, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2130, 58, 1728, 0, 1192, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1715, 7, 1140, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2145, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2156, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2119, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1728, 15, 1140, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1782, -20, 1269, 57,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2089, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1998, -66, 1738, -36, 1335, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1624, -21, 1095, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1956, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1874, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1848, -26, 1602, -22, 1084, -11,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimItemThrowDash_joint7[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1015, -200,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1216, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1174, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1070, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -863, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -828, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -799, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -930, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1118, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1075, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -819, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -897, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -856, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -815, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimItemThrowDash_joint8[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -30, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 893, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 294, 443,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -506, -30, 0, -13, 0, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 213, 51,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 213, -71, 0, -6, 0, -27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -781, -89, -388,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTCaptainAnimItemThrowDash_joint9[54] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -82, 38, 274, -110, -51, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 154, -5, -441, -56, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -116, -10, -64, 22, -54, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 12, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimItemThrowDash_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTCaptainAnimItemThrowDash_joint12[250] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 131, 845, 287, 183, -637, 970,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 977, 474, 471, 118, 332, 703,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1079, -120, 524, -18, 770, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 735, -319, 435, 399, 656, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 440, -169, 1322, 646, 530, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 397, 169, 1728, 301, 603, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 779, 241, 1925, 88, 564, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 510, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 880, 62, 1904, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 905, 12, 1863, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 880, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1719, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1622, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 833, -71, 1469, -102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 463, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1418, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1371, -85, 516, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 393, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1247, -121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 681, -165,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 492, 147, 358, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 758, -44, 569, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 403, -152, 205, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 452, 9, 516, -172, 301, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 182, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 422, -55, 372, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 119, -101, 566, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 106, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 124, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 26, -85, 556, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -200, -72, 495, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 154, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 411, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -269, -60, 475, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -381, 17, 327, 29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 421, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 283, -63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -351, 38, 375, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -144, 28, 583, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 217, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 164, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, 15, 144, -20, 592, 8,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimItemThrowDash_joint13[94] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1127, 139,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -988, 561,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 494,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -92,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -128, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -53, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -194, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1078, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1157, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -881, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -784, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -791, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -879, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1173, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1176, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1036, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 11,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimItemThrowDash_joint14[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -58, -59, 190, -101, 838, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 31, 30, -131, -33, 899, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 457, 3, -387, 15, 219, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 110, -24, 220, 16, 106, -7,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 275, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 210, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 270,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTCaptainAnimItemThrowDash_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimItemThrowDash_joint17[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -151, 94, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 376, 28, 2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), 268, -40, 2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -504, -11, 21, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 0, 18, 0, -3,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTCaptainAnimItemThrowDash_joint18[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 31, 11, -81, 6, -936, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 53, -12, -114, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -959, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -837, 144,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -523, 112,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 35, -18, -150, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -168, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 62, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -446, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -339, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -170, -1, -342, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -811, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -84, 22,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 79, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 160, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -889, -69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1120, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -63, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 27, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 175, 2, 68, 16, -1157, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 133, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1108, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 47, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 34, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -7, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 122, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 108, -15, -1088, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 90, 46, -22, 46, -1067, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 202, 79, 84, 71, -960, 98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -568, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 248, 25, 119, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 201, -13, 87, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, -10, 70, -16, -472, 96,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimItemThrowDash_joint20[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 905, 41,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1056, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1003, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 978, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1210, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1230, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1191, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1168, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 951, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 895, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 562, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 511, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -65,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimItemThrowDash_joint22[188] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -29, 21, 2, -3, 22, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -27, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -39, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -12, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -93, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -215, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -59, -42, -179, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -20, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -112, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -203, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -248, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 12, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -50, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -40, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -57, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -205, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -31, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -79, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -279, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -44, -15, -290, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -126, -55, -299, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -59, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -199, -32, -59, 15, -294, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -177, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -27, 17, -187, 72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -21, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -149, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 42, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -163, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -117, 19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -25, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -99, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -95, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -218, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -251, -10, 65, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -151, 27, 92, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -115, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -59, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, 25, -42, 17, 80, -12,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimItemThrowDash_joint23[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -11, -10, 54, 3, 0, -69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 69, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 23, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -68, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 10, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 41, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 100, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -82, -40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 67, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 96, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 24, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -43, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -123, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -285, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -327, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -583, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -42, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -42, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 97, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 83, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -607, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -636, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -32, 25, 84, 17, -641, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 74, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 136, 11, -506, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, 2, -428, 79,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 123, -11, -172, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 100, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 142, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 17, 110, -13, -76, 96,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimItemThrowDash_joint25[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 508, 155,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 664, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 621, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 642, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 622, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 539, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 473, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 506, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 563, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 977, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 990, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 992, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 972, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 701, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 631, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -89,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTCaptainAnimItemThrowDash_joint26[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2, 39, 6, 4, 309, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 86, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 34, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 224, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -223, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 111, -1, -323, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -138, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 82, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 72, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 7, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -141, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -300, -21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 31, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 168, 29,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 7, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 68, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -323, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -622, -4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 104, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 122, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -618, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -304, 26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 198, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 365, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 125, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 155, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 171, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 178, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, -16, 365, 0, -279, 24,
	ftAnimEnd(),
	0x0000, 0x0000,
};
