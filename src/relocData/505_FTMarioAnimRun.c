/* AnimJoint data for relocData file 505 (FTMarioAnimRun) */
/* 2400 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimRun_joint1[46];
extern u16 dFTMarioAnimRun_joint2[26];
extern u16 dFTMarioAnimRun_joint4[34];
extern u16 dFTMarioAnimRun_joint5[108];
extern u16 dFTMarioAnimRun_joint6[48];
extern u16 dFTMarioAnimRun_joint7[14];
extern u16 dFTMarioAnimRun_joint8[20];
extern u16 dFTMarioAnimRun_joint10[20];
extern u16 dFTMarioAnimRun_joint11[114];
extern u16 dFTMarioAnimRun_joint12[56];
extern u16 dFTMarioAnimRun_joint13[14];
extern u16 dFTMarioAnimRun_joint15[12];
extern u16 dFTMarioAnimRun_joint16[118];
extern u16 dFTMarioAnimRun_joint18[64];
extern u16 dFTMarioAnimRun_joint20[112];
extern u16 dFTMarioAnimRun_joint21[140];
extern u16 dFTMarioAnimRun_joint23[64];
extern u16 dFTMarioAnimRun_joint24[142];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimRun_joints[] = {
	(u32)dFTMarioAnimRun_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimRun_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimRun_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimRun_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimRun_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimRun_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimRun_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimRun_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimRun_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimRun_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimRun_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimRun_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimRun_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimRun_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimRun_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimRun_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimRun_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimRun_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimRun_joint1[46] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 755,
	ftAnimSetValRate(FT_ANIM_TRAZ), -67, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 7), 552,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -59, 8,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), -60, -7,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), -67, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), 755,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 6), 552,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -32, 8,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -60, -31,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), -67, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), 755,
	ftAnimLoop(0x6800, -88),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimRun_joint2[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -124, 0, -113, 0, 41, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -124, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 37, 0, -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -113, 0, 41, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimRun_joint4[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 407, 0, 234, 0, 78, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -176, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 408,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 234, 0, 78, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 407, 0,
	ftAnimLoop(0x6800, -66),
};

/* Joint 5 */
u16 dFTMarioAnimRun_joint5[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1266, 30, -1305, 14, -1320, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1282, 12, -1085, 55, -1509, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1288, -13, -1039, 33, -1559, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -919, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1434, 225, -1708, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1727, 214, -2001, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1864, -157, -2130, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1413, -396, -1636, 444,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1071, -168, -1240, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1076, 61, -973, -31, -1189, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1133, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1538, 24, -1639, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1436, -114, -1530, 129,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1242, 16, -1270, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1222, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1311, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1266, 23, -1305, 5, -1320, -49,
	ftAnimLoop(0x6800, -212),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimRun_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -247, 36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -351, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -300, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -493, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -482, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -481, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -340, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -310, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -428, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -354, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -247, 107,
	ftAnimLoop(0x6800, -94),
};

/* Joint 7 */
u16 dFTMarioAnimRun_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 13), -804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), -268,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimRun_joint8[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -68,
	ftAnimSetValRate(FT_ANIM_ROTX), 188, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 188, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 13), -66,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 12), -68,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimRun_joint10[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 97,
	ftAnimSetValRate(FT_ANIM_ROTY), -42, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), -190,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 150, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -42, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 97,
	ftAnimLoop(0x6800, -38),
};

/* Joint 11 */
u16 dFTMarioAnimRun_joint11[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1389, 29, 1005, -20, 1048, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1123, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1575, 163, 1313, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1745, 125, 1532, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1749, -82, 1630, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1653, -8, 1541, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1963, 76, 1808, 66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1194, 76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1356, -56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2023, 49, 1853, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2169, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1640, -36,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1279, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1036, -37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2134, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1718, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1587, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1344, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1512, -164, 1012, -15, 1149, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1389, -122, 1005, -7, 1048, -100,
	ftAnimLoop(0x6800, -224),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimRun_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -489, -27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -478, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -352, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -239, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -358, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -235, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -84, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -216, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -259, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -568, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -559, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -515, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -489, 25,
	ftAnimLoop(0x6800, -110),
};

/* Joint 13 */
u16 dFTMarioAnimRun_joint13[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 804,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 13), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 804,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimRun_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 25),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimRun_joint16[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 122, -97, -109, 2, -386, 119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -79, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -15, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -267, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -294, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 178, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -48, 32, 150, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 480, 139,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 60, 47,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -23, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -62, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 620, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 633, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 441, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -184, -254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -47, 42, -483, -259,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -639, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 113, 130, 22, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 320, 284, 241, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 683, 33, 267, -98, -391, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 388, -280, 45, -188, -515, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 122, -265, -109, -154, -386, 128,
	ftAnimLoop(0x6800, -232),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimRun_joint18[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 112, -112,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 286, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 185, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 464, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 348, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 238, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 451, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 955, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1069, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1193, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1003, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 475, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 112, -363,
	ftAnimLoop(0x6800, -126),
};

/* Joint 20 */
u16 dFTMarioAnimRun_joint20[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1808, 56, 1907, -59, -1361, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1750, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -1754, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1388, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1607, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1655, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1763, 16, -1805, -137,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1793, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1837, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1760, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1904, -80,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1808, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1785, 96,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1985, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1361, 320,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1776, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1848, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2185, -380, 1928, 108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 2071, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2609, 40, -971, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2104, 400, -1277, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1808, 295, 1907, -163, -1361, -84,
	ftAnimLoop(0x6800, -220),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimRun_joint21[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -43, -2, 174, -9, 752, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -59, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 100, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 617, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 466, -136,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -313, -384,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -58, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -92, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, 2, -744, -273,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -650, 197,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 32, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -76, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -102, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -520, -104, -400, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -311, 221, -396, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -77, 136, -269, 190,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 77, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -139, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 36, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 128, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 29, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 220, 166,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -160, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -91, 47,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 403, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 162, 23, 590, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -43, 48, 174, 12, 752, 162,
	ftAnimLoop(0x6800, -276),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimRun_joint23[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 284, 28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 313, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 530, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1171, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1299, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 510, -366,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 88, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 294, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 428, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 166, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 304, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 732, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 632, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 467, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 284, -183,
	ftAnimLoop(0x6800, -126),
};

/* Joint 24 */
u16 dFTMarioAnimRun_joint24[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 54, 8, 126, -3, -150, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 17, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 67, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -240, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -265, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 60, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -41, -118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -312, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 99, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 179, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 92, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 108, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -119, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 102, 348, 209, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 577, 65, 539, 111, 558, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 233, -264, 432, -144, 155, -328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 48, -110, 251, -101, -98, -124,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -81, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 229, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 217, -37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -157, -84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -252, 92,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 31, 31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 177, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 145, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 54, 22, 126, -18, -150, 101,
	ftAnimLoop(0x6800, -280),
	ftAnimEnd(),
};
