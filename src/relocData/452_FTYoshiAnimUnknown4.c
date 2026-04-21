/* AnimJoint data for relocData file 452 (FTYoshiAnimUnknown4) */
/* 2384 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimUnknown4_joint1[10];
extern u16 dFTYoshiAnimUnknown4_joint2[10];
extern u16 dFTYoshiAnimUnknown4_joint3[96];
extern u16 dFTYoshiAnimUnknown4_joint4[40];
extern u16 dFTYoshiAnimUnknown4_joint6[44];
extern u16 dFTYoshiAnimUnknown4_joint7[304];
extern u16 dFTYoshiAnimUnknown4_joint8[132];
extern u16 dFTYoshiAnimUnknown4_joint10[14];
extern u16 dFTYoshiAnimUnknown4_joint11[260];
extern u16 dFTYoshiAnimUnknown4_joint12[132];
extern u16 dFTYoshiAnimUnknown4_joint14[8];
extern u16 dFTYoshiAnimUnknown4_joint15[8];
extern u16 dFTYoshiAnimUnknown4_joint16[8];
extern u16 dFTYoshiAnimUnknown4_joint17[10];
extern u16 dFTYoshiAnimUnknown4_joint18[8];
extern u16 dFTYoshiAnimUnknown4_joint20[8];
extern u16 dFTYoshiAnimUnknown4_joint21[8];
extern u16 dFTYoshiAnimUnknown4_joint22[10];
extern u16 dFTYoshiAnimUnknown4_joint23[8];
extern u16 dFTYoshiAnimUnknown4_joint25[8];
extern u16 dFTYoshiAnimUnknown4_joint26[14];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimUnknown4_joints[] = {
	(u32)dFTYoshiAnimUnknown4_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimUnknown4_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimUnknown4_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimUnknown4_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimUnknown4_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimUnknown4_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimUnknown4_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimUnknown4_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimUnknown4_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimUnknown4_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimUnknown4_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTYoshiAnimUnknown4_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimUnknown4_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimUnknown4_joint17, /* [16] joint 17 */
	(u32)dFTYoshiAnimUnknown4_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimUnknown4_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimUnknown4_joint21, /* [20] joint 21 */
	(u32)dFTYoshiAnimUnknown4_joint22, /* [21] joint 22 */
	(u32)dFTYoshiAnimUnknown4_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimUnknown4_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimUnknown4_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimUnknown4_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 969, 434, -1756,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimUnknown4_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimUnknown4_joint3[96] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 51, 60, 386,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 307, 0,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 450, 450, 450,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 104), 450, 450, 450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 99), 0, 3, 307, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 326, 13, -17, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 306,
	ftAnimSetFlags(0),
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -127, -123, -121,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 29, 307, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 2754, 560, 8216, 560, 2754, 560,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 541, 4096, -1114, 4096, 567,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 5463, 2643, 4939,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 307, 0,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 32), 4096, 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, 307, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimUnknown4_joint4[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 104), 0, -2, 0, 0, 0, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -346, -81, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 17, 0, 4, 0, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimUnknown4_joint6[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 48, 119, 3150, 3150, 3150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 104), 0, 4, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 558, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -27, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimUnknown4_joint7[304] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, 0, 1608, 0, 1359, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 34), 1855, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), 1182, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 1752, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1752, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1615, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1843, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1623, -50,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1169, -8, 1515, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1575, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 46), 1141, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1608, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 1625, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1588, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 1724, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1727, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 1675, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1625, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1608, -8,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1668, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1554, -24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1608, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1608, 19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1143, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1608, 45,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1509, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1737, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1663, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1878, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1751, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1558, -146,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1866, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1560, -31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1358, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 653, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1658, 14, 632, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1571, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1545, 34, 700, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1767, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 493, -298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 103, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -98, -139,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 167, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1764, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1410, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1586, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1677, 19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 361, 153,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 518, 21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1424, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1389, -33,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1705, 36, 546, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1804, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 851, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1366, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1553, 1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1776, -28,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 25), 1690,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1554, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 21), 1546,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 843, -5,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 15), 840,
	ftAnimBlock(0, 12),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 4), 1690,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1546, 840,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimUnknown4_joint8[132] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -875, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), -452, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -25, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -25, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -25, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -94, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -473, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -578, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -939, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1009, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -764, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -776, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1152, -299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1374, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1328, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1339, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1361, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1314, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -870, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -736, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -658, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -654, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 26), -658,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -658,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimUnknown4_joint10[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 172, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 159), 172, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimUnknown4_joint11[260] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0, -248, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 33), -172, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 37), -383, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), 0, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -12, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -197, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -154, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 0, -6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -388, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 53), -409, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -201, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -38, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -12, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -15, -7,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -14, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 2, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -15, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), -12, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -186, -24,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -402, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 53, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -12, -45, -212, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -208, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -263, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -208, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 55, 43,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -515, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -946, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 86, -17, 37, -23, -939, -167,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -78, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 66, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1618, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1754, -88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1299, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -77, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 133, -10,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1293, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -945, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 116, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 153, -43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 76, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 193, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 155, -38, -843, 99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -292, -5,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 25), -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 106, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -3, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -302, -13,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 19), -388,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), -3,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 5), -2,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3, -388,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimUnknown4_joint12[132] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -875, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), -444, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -378, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -181, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -25, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -25, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -25, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -25, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -25, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -403, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -524, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -949, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -961, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -820, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1187, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1218, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1220, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1134, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1098, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -812, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -742, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -953, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -958, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -885, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -902, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 17), -924,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -924,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimUnknown4_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimUnknown4_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -129, -163, -97,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTYoshiAnimUnknown4_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -348, -116, -123,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimUnknown4_joint17[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -804, 240, -96, 95,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimUnknown4_joint18[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -59, 10, -89,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTYoshiAnimUnknown4_joint20[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 812,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTYoshiAnimUnknown4_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1653, 39, -459,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimUnknown4_joint22[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -804, -239, -96, 95,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimUnknown4_joint23[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -58, 10, -89,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTYoshiAnimUnknown4_joint25[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 812,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimUnknown4_joint26[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1653, 38, -459,
	ftAnimBlock(0, 159),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
