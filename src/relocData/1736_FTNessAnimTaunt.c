/* AnimJoint data for relocData file 1736 (FTNessAnimTaunt) */
/* 4016 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimTaunt_joint1[52];
extern u16 dFTNessAnimTaunt_joint2[28];
extern u16 dFTNessAnimTaunt_joint4[48];
extern u16 dFTNessAnimTaunt_joint5[286];
extern u16 dFTNessAnimTaunt_joint6[80];
extern u16 dFTNessAnimTaunt_joint7[10];
extern u16 dFTNessAnimTaunt_joint8[68];
extern u16 dFTNessAnimTaunt_joint10[10];
extern u16 dFTNessAnimTaunt_joint11[294];
extern u16 dFTNessAnimTaunt_joint12[88];
extern u16 dFTNessAnimTaunt_joint13[30];
extern u16 dFTNessAnimTaunt_joint15[32];
extern u16 dFTNessAnimTaunt_joint16[196];
extern u16 dFTNessAnimTaunt_joint18[80];
extern u16 dFTNessAnimTaunt_joint19[176];
extern u16 dFTNessAnimTaunt_joint21[48];
extern u16 dFTNessAnimTaunt_joint22[176];
extern u16 dFTNessAnimTaunt_joint24[80];
extern u16 dFTNessAnimTaunt_joint25[174];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimTaunt_joints[] = {
	(u32)dFTNessAnimTaunt_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimTaunt_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimTaunt_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimTaunt_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimTaunt_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimTaunt_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimTaunt_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimTaunt_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimTaunt_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimTaunt_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimTaunt_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimTaunt_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimTaunt_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimTaunt_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimTaunt_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimTaunt_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimTaunt_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimTaunt_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimTaunt_joint25, /* [24] joint 25 */
	0xFFFF03DC, /* [25] END */
};

/* Joint 1 */
u16 dFTNessAnimTaunt_joint1[52] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -16, 537, -28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -13, 0, 471, -83, -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -16, -3, 516, 160, -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -21, 2, 590, -5, -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -11, 1, 502, -17, -28, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 25), -16, -28,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 15), 536, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 537,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimTaunt_joint2[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -360, 8,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -766, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -824, 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 45), 28, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 35), -807, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -360,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimTaunt_joint4[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -15, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 12), 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 0, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -10, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 179, 3, -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 17, -7, -1, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimTaunt_joint5[286] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1893, -24, -1415, -19, 2081, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2094, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1971, -57, -1484, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2032, -54, -1551, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2092, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1649, 98,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2119, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2186, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2065, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2034, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1510, 169, 2205, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1115, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2059, -75, 2286, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2186, -198, 2523, 301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2456, -240, -1034, 43, 2889, 318,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1039, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2666, -103, 3161, 191,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3270, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2664, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2508, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2399, 49, -998, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -888, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2409, -36, 3271, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2473, -105, 3311, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2620, -244, 3428, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2962, -414, -861, 7, 3746, 395,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1078, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3449, -365, 4220, 356,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 4558, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3693, -172,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3844, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4608, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 4467, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3871, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -3746, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1113, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -972, 5,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3733, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -3690, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -970, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -966, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4463, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 4412, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3664, 3, 4384, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3828, -218, 4519, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -954, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1017, -79,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4120, -296, 4789, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4421, -249, 5068, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4619, -170, -1114, -98, 5244, 135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 5352, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1409, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -4890, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5004, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5083, -52, 5315, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5110, -27, -1415, -5, 5298, -17,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimTaunt_joint6[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -723, -29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -824, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -917, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1184, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1089, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -698, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -630, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -686, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -688, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -566, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -534, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -784, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -798, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -819, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -849, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -951, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -920, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -746, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -723, 23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimTaunt_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimTaunt_joint8[68] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, 364, 0, -32, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -76, -15, 0, -11, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -179, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 332, 7, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -2, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -10, 0, -32, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 40, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 364, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimTaunt_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimTaunt_joint11[294] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1192, 29, 1038, -16, 1489, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1005, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1306, 108, 1618, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1439, 141, 1766, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1590, 124, 1935, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1688, 94, 2058, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1780, 116, 2201, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1920, 112, 2442, 242,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2876, 143,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1850, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1076, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1072, -41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2974, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1023, -43, 2994, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 978, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1682, -89, 2927, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1670, 109, 2932, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1900, 197, 3062, 83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3097, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2066, 105, 974, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 860, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2111, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2135, 1, 3094, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2114, -327, 3053, -347,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1481, -674, 817, 3, 2399, -695,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 939, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 765, -377, 1661, -398,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 727, -21, 1602, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1583, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 721, -2, 1012, 71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1185, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 654, -20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1583, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1462, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1172, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 983, -7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 633, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 587, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 980, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 978, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1466, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1540, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 595, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 699, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 707, 23, 949, -29, 1542, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1643, 92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 903, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 745, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 861, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1024, 137, 1749, 70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1618, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1137, 82, 928, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1212, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1033, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1556, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1199, -10, 1508, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1192, -7, 1038, 5, 1489, -19,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimTaunt_joint12[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -48,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -607, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -719, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1244, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1246, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -720, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -585, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -546, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -535, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -309, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -254, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -479, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -523, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -515, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -504, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -607, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -667, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -877, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -837, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -593, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 34,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimTaunt_joint13[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 54, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 136, 25, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 527, 8, 105, 1, -405, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), 527, -9, 105, -1, -405, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 90, 54, 126,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimTaunt_joint15[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, -935, 681,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 75, 68, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1105, 0, 737, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 816,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 51), -938, 3, 682, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 51), 994,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 893, -935, 681,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimTaunt_joint16[196] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -365, 13, -279, -12, -297, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -355, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -392, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -261, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -201, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -55, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -344, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -131, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -359, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -170, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -48, 5, -142, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 8, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -63, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -120, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -83, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 61, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 153, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 150, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 144, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -57, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -28, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -83, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -123, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -25, 13, 145, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 20, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 29, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -23, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -147, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 28, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -37, -10,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -142, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -91, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -47, -12, -125, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -288, -42, -278, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -96, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -287, -11,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -327, -33, -282, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -355, -18, -281, 1, -295, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, -10, -279, 1, -297, -2,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimTaunt_joint18[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 396, 30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 497, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 576, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 619, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 560, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 297, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 188, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 220, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 320, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 547, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 536, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 405, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 415, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 400, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimTaunt_joint19[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, -7, 12, -4, 26, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -352, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -245, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -144, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -184, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -164, 5,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -346, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -196, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -255, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -317, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -160, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -171, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -139, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -46, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -30, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -167, 0, -11, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -163, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -116, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -165, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -288, 4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -316, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -259, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -159, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -145, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -282, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -236, 7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -250, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -36, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -226, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 20, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -146, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -29, 29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -16, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 8, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 9, 12, 3, 26, 5,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimTaunt_joint21[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -193, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 48, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 5, 15, 0, -2, 0, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 108, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 65, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 5, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -66,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimTaunt_joint22[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -127, -4, 136, -4, -210, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 62, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -146, 6, -392, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -139, 5, -390, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -98, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -46, 15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 71, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 113, -1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -52, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 60, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -30, 8, 137, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -31, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 136, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 139, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 133, -1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -31, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -84, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 134, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 109, -3, 46, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 100, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -13, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -141, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -87, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -85, -5,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -138, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -83, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 96, -8, -90, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 77, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -228, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -91, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -126, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 94, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 130, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -223, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -215, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, -1, 136, 6, -210, 4,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimTaunt_joint24[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 407, 30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 508, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 589, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 278, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 155, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 173, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 288, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 534, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 525, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 384, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 374, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 465, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 454, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 415, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimTaunt_joint25[174] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3140, 1, 25, -2, -202, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -3133, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 29, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -356, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -374, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -320, 46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3128, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -3120, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 43, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 86, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -269, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -151, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3121, -1, -72, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -3108, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -61, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -49, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -44, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 0, -51, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 108, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -134, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -192, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -323, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -317, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -265, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3110, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -3153, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3170, -14, 105, -7, -264, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -3144, 6, 26, -2, -204, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3140, 3, 25, 0, -202, 2,
	ftAnimEnd(),
	0x4002, 0x0038, 0x48EC, 0x0000, 0x0000, 0xFF82, 0xFFAE, 0xFFF4, 0x2003, 0x0005, 0xFFBC, 0xFFFE, 0x2003, 0x000A, 0x0019, 0x0009, 0x2003, 0x000A, 0x0074, 0x0001, 0x2003, 0x000A, 0x002E, 0xFFFE, 0x2003, 0x000F, 0x0034, 0x0000, 0x3803, 0x000A, 0x0038, 0x0000,
};
