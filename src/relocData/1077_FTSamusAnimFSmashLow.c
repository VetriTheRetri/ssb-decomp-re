/* AnimJoint data for relocData file 1077 (FTSamusAnimFSmashLow) */
/* 3152 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimFSmashLow_joint1[36];
extern u16 dFTSamusAnimFSmashLow_joint2[30];
extern u16 dFTSamusAnimFSmashLow_joint4[84];
extern u16 dFTSamusAnimFSmashLow_joint5[162];
extern u16 dFTSamusAnimFSmashLow_joint6[62];
extern u16 dFTSamusAnimFSmashLow_joint7[40];
extern u16 dFTSamusAnimFSmashLow_joint8[10];
extern u16 dFTSamusAnimFSmashLow_joint11[36];
extern u16 dFTSamusAnimFSmashLow_joint12[220];
extern u16 dFTSamusAnimFSmashLow_joint13[80];
extern u16 dFTSamusAnimFSmashLow_joint14[30];
extern u16 dFTSamusAnimFSmashLow_joint16[30];
extern u16 dFTSamusAnimFSmashLow_joint17[142];
extern u16 dFTSamusAnimFSmashLow_joint19[72];
extern u16 dFTSamusAnimFSmashLow_joint21[134];
extern u16 dFTSamusAnimFSmashLow_joint22[148];
extern u16 dFTSamusAnimFSmashLow_joint24[210];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTSamusAnimFSmashLow_joints[] = {
	(u32)dFTSamusAnimFSmashLow_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimFSmashLow_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimFSmashLow_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimFSmashLow_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimFSmashLow_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimFSmashLow_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimFSmashLow_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimFSmashLow_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimFSmashLow_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimFSmashLow_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimFSmashLow_joint14, /* [13] joint 14 */
	(u32)dFTSamusAnimFSmashLow_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTSamusAnimFSmashLow_joint17, /* [16] joint 17 */
	(u32)dFTSamusAnimFSmashLow_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimFSmashLow_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTSamusAnimFSmashLow_joint22, /* [21] joint 22 */
	(u32)dFTSamusAnimFSmashLow_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF02CB, /* [24] END */
};

/* Joint 1 */
u16 dFTSamusAnimFSmashLow_joint1[36] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 1189, -388, -642, 517,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1017, -343, 776, 2837,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1017, 776,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 15, -1505,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 1202, 172, -2, -230,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 1600, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimFSmashLow_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 11), -402,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 0, 100,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimFSmashLow_joint4[84] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 0, 47, -214, 36, 89, 37, -53, 50, -12, -40, -6, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 565, 141, 442, 164, 445, 89, 75, 259, -60, -96, 42, 97,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 565, 442, 445, 75, -60, 42,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -49, 49, -2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -147, -38, -178,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 2, -20, -361, -6, 16, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 26, -85, -11, 53, 40, -87,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -42, -9, 12, 4, 3, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimFSmashLow_joint5[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1132, 4, -1722, 4, 1377, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -742, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1452, 19, 1048, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1443, -5, 1002, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -706, -84, -1463, 227, 943, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -912, -102, -988, 237, 1463, 259,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -912, -988, 1463,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -912, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -988, 1463,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1262, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1463, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -842, -20, 1166, -194,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1354, -127, 1227, 40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1447, -146,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1409, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1431, -41, 1234, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 970, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1223, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1002, 188, -1345, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -839, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1507, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 892, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 924, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -859, -23, 931, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1147, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1324, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1547, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1722, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1142, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1136, 5, 1357, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1132, 4, -1722, 0, 1377, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTSamusAnimFSmashLow_joint6[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -703, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -771, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1192, -210,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1192, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1262, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -896, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -806, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -355, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -317, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -655, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -691, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -719, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -19,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimFSmashLow_joint7[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 701, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -312, 0, 0, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -312, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 18,
	ftAnimSetValT(FT_ANIM_ROTZ, 27), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -49, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 701, 113,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimFSmashLow_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimFSmashLow_joint11[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, -32, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -384, -96, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -384, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -57, 14, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimFSmashLow_joint12[220] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1666, 1, 1737, 20, 1392, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1828, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1571, -57, 1675, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1514, -38, 1798, 109,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1660, -1, 1976, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1774, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1693, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1634, -127, 1736, -296, 2006, -634,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1406, -114, 1100, -318, 707, -649,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1406, 0, 1100, 0, 707, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1100, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1406, 0, 707, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1406, 187, 707, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1782, 177, 1277, 165, 1146, 304,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1464, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1761, -60, 1316, 161,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1576, 105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2026, 33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1392, -78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1073, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1733, 172,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2217, 49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2061, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2266, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2254, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2282, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1075, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 994, -59,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2221, -155, 2259, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1971, -377, 928, -18, 2065, -327,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1523, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1466, -332, 1605, -296,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1373, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1482, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1508, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1403, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1441, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1655, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1621, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1733, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1666, 11, 1737, 3, 1392, -11,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTSamusAnimFSmashLow_joint13[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1032, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1105, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1182, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1183, 588,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 589,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -510, -366,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -737, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1188, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1231, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1048, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1087, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1211, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1143, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -617, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTSamusAnimFSmashLow_joint14[30] = {
	ftAnimSetVal(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 425, -203, -64,
	ftAnimSetFlags(FT_ANIM_ROTY),
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 425, -203, -64,
	ftAnimSetFlags(0),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -9, 92, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 408, -30, -16,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 27), 425, -203, -64,
	ftAnimBlock(0, 1),
	ftAnimSetFlagsT(FT_ANIM_ROTY, 26),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTSamusAnimFSmashLow_joint16[30] = {
	ftAnimSetVal(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 423, 203, 64,
	ftAnimSetFlags(FT_ANIM_ROTY),
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 423, 203, 64,
	ftAnimSetFlags(0),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -99, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 424, 17, 22,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 27), 423, 203, 64,
	ftAnimBlock(0, 1),
	ftAnimSetFlagsT(FT_ANIM_ROTY, 26),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimFSmashLow_joint17[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, -4, -27, -4, -389, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -293, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 117, 25, -533, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 140, 20, -558, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 168, -45, -668, -147,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -304, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 66, -51, -76, 113, -898, -114,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 66, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -76, 0, -898, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -47, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -898, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -817, 49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 41, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 95, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -763, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -854, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -851, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -642, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 90, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 75, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -59, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -27, 1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -395, 11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 81, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 86, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 1, -27, 0, -389, 6,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTSamusAnimFSmashLow_joint19[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 398, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 389, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 469, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 567, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 947, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 947, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 947, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 820, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 559, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 426, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 779, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 913, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 900, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 487, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTSamusAnimFSmashLow_joint21[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, 1, -28, 3, -41, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 132, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 135, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -156, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -198, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -242, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -232, 114, 96, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -14, 106, 129, -2, -19, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 61, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -18, -1, -19, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -28, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -19, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 109, 113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 300, 93,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -56, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -45, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 394, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 211, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 52, -5, 95, -100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 34, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -178, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -158, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -44, 4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -52, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -75, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 17, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -26, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 0, -28, -2, -41, 2,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimFSmashLow_joint22[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -4, 160, 5, -49, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 368, 32, -368, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 264, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 303, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 179, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 391, 11, -411, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 366, -38, -541, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 62, 31, 313, -143, -596, 560,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 242, 89, 80, -116, 579, 588,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 242, 0, 80, 0, 579, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 80, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 180, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 579, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 579, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 166, 55, 335, -199,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 167, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 131, -43, 179, -140,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -233, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -12, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 156, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 154, 7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -246, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -54, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -10, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 221, 10,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 160, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 160, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 4, 160, 0, -49, 4,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTSamusAnimFSmashLow_joint24[210] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 924, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 968, -381,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 160, -404,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 160, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 161, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 160, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 551, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 718, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 929, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 617, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 564, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 448, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -6,
	ftAnimEnd(),
	0x0000, 0x200E, 0x008E, 0x0000, 0x00C1, 0xFFFA, 0xFF2B, 0xFFFD, 0x2803, 0x0007, 0xFFE2, 0xFFCE, 0x2809, 0x000A, 0xFEEF, 0xFFF1, 0x2005, 0x0006, 0xFF99, 0xFFAA, 0x2005, 0x0001, 0xFF4A, 0xFFC7, 0x2805, 0x0003, 0xFF70, 0x0053, 0x2003, 0x0001, 0xFFB5, 0xFFE3, 0x2003, 0x0002, 0xFFC0, 0x0031, 0x200F, 0x0001, 0x0009, 0x000B, 0xFFDA, 0x0011, 0xFEE1, 0x011E, 0x200F, 0x0001, 0xFFD6, 0xFFE7, 0xFF94, 0xFFDE, 0x012C, 0x0126, 0x200F, 0x0001, 0xFFD6, 0x0000, 0xFF94, 0x0000, 0x012C, 0x0000, 0x2803, 0x0003, 0x0014, 0x0040, 0x2805, 0x0008, 0xFFFC, 0x000F, 0x2009, 0x0001, 0x012C, 0x0000, 0x2009, 0x0001, 0x012C, 0xFF55, 0x2009, 0x0001, 0xFFD5, 0xFEBC, 0x200B, 0x0001, 0x0057, 0x0031, 0xFEA5, 0xFEF7, 0x2809, 0x0006, 0xFD61, 0x000D, 0x2803, 0x0007, 0x0072, 0x0000, 0x0801, 0x0004, 0x2005, 0x0001, 0x000B, 0x0011, 0x2805, 0x0011, 0x00CE, 0xFFF9, 0x0801, 0x0001, 0x2009, 0x0001, 0xFD6F, 0x000E, 0x2809, 0x000F, 0xFEFE, 0x001A, 0x2003, 0x0001, 0x0072, 0x0000, 0x2803, 0x0010, 0x008D, 0x0000, 0x0801, 0x000E, 0x200D, 0x0001, 0x00C7, 0xFFFB, 0xFF15, 0x0013, 0x200D, 0x0001, 0x00C3, 0xFFFD, 0xFF25, 0x000A, 0x200F, 0x0001, 0x008E, 0x0000, 0x00C1, 0xFFFF, 0xFF2B, 0x0005, 0x0000, 0x0000, 0x0000,
};
