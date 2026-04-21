/* AnimJoint data for relocData file 1643 (FTCaptainAnimLandingAirF) */
/* 2448 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimLandingAirF_joint1[60];
extern u16 dFTCaptainAnimLandingAirF_joint2[38];
extern u16 dFTCaptainAnimLandingAirF_joint4[48];
extern u16 dFTCaptainAnimLandingAirF_joint5[130];
extern u16 dFTCaptainAnimLandingAirF_joint6[64];
extern u16 dFTCaptainAnimLandingAirF_joint7[8];
extern u16 dFTCaptainAnimLandingAirF_joint10[10];
extern u16 dFTCaptainAnimLandingAirF_joint11[152];
extern u16 dFTCaptainAnimLandingAirF_joint12[72];
extern u16 dFTCaptainAnimLandingAirF_joint13[26];
extern u16 dFTCaptainAnimLandingAirF_joint14[16];
extern u16 dFTCaptainAnimLandingAirF_joint16[12];
extern u16 dFTCaptainAnimLandingAirF_joint17[106];
extern u16 dFTCaptainAnimLandingAirF_joint19[40];
extern u16 dFTCaptainAnimLandingAirF_joint21[118];
extern u16 dFTCaptainAnimLandingAirF_joint22[116];
extern u16 dFTCaptainAnimLandingAirF_joint24[40];
extern u16 dFTCaptainAnimLandingAirF_joint25[118];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimLandingAirF_joints[] = {
	(u32)dFTCaptainAnimLandingAirF_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimLandingAirF_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimLandingAirF_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimLandingAirF_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimLandingAirF_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimLandingAirF_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimLandingAirF_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimLandingAirF_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimLandingAirF_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimLandingAirF_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimLandingAirF_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimLandingAirF_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimLandingAirF_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimLandingAirF_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimLandingAirF_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimLandingAirF_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimLandingAirF_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTCaptainAnimLandingAirF_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimLandingAirF_joint1[60] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), -581, 700, -14,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 506, -164, -22, -59,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 30), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), 1,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 474, 12, -96, 42,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 9), 9,
	ftAnimSetValT(FT_ANIM_TRAX, 7), 6,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), 61, 40,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 526, 218,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 708, 746,
	ftAnimSetValT(FT_ANIM_TRAX, 12), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 1272, 474,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), 1600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimLandingAirF_joint2[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -9, 20,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 466,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 267, -104, 466,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 303, -61, 462,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 479, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -20, 459,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 286, -42,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 496, -39,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 107, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimLandingAirF_joint4[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -196, -34,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 182, 276, 99, -115, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -18, -22, -234, 5,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 0, -31, 47,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 68,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -33, -20, -118, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 62,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -160, 2, -303, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 95,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 189, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimLandingAirF_joint5[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1609, -3, -1593, -45, 1918, -234,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1644, 13, -1672, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1480, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1474, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1654, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1626, 14, -1666, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1560, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1615, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1678, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1679, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1549, 33, 1647, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1292, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1770, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1634, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1803, 45,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1269, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1231, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1740, 47, 1675, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1541, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1540, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1376, -158,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1089, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1426, 80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1369, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1343, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1596, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1368, 0, -1614, -18, 1084, -5,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimLandingAirF_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -477, 248,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -5, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -55, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -267, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -679, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -733, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -741, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -878, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1167, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1160, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1203, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1116, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -828, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 30,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimLandingAirF_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2435, -89, -388,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimLandingAirF_joint10[10] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 195, -27,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 79,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 30), 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimLandingAirF_joint11[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, -38, 294, -12, 627, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 267, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 311, 11, 742, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 306, -36, 741, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -102, -125, 166, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 371, 100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 673, 60,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -193, -104, 74, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -611, -165, -297, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -785, -270, -447, -246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1153, -539, 745, 48, -790, -503,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 946, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1864, -571, -1453, -515,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2297, -234, -1822, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2333, -39, -1818, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2361, 98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1738, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1090, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1258, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1511, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1532, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1516, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2238, 131, 1323, -122,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1739, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1271, -25, -1582, 153,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1449, 26, -1026, 28,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1735, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1737, -2, 1464, 14, -1016, 10,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimLandingAirF_joint12[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -367, 70,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -399, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -698, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1124, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1106, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1100, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1165, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -721, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -459, 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -395, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -540, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1009, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, -14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimLandingAirF_joint13[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 362, 167, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 533, 59, 630, -52, 1251, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 944, 55, 285, -47, 809, -63,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 270, 275, 62,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimLandingAirF_joint14[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 39,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 1538, -1003, 119, 85, 49, 38,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimLandingAirF_joint16[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 471, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 30), 0, 18, 0, -3,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimLandingAirF_joint17[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -32, 81, -101, 66, 2910, -208,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 153, 7, 40, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2530, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2492, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2017, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 158, 0, 26, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -91, -23, -279, 27,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1981, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2066, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -118, -32, -244, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -104, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -321, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -296, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 178, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -47, 46, 2174, 97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 70, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 2560, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2633, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2730, 26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 188, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 2, 70, 0, 2744, 13,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimLandingAirF_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 946, 22,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 941, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 917, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 675, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 521, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 399, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 414, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 440, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimLandingAirF_joint21[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1910, 25, -1466, 91, 1221, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1745, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1295, -23, 1387, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1325, -36, 1418, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1621, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1688, -11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1685, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1397, 60,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1595, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1592, 30,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1477, 93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1657, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1677, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1750, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1658, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1436, 11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1563, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1562, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1735, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1692, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1455, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1474, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1481, 7, -1566, -3, 1688, -3,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimLandingAirF_joint22[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1935, -26, 367, -38, 1993, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 1784, -10, 209, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1794, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1793, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2031, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1777, -3, 205, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 2068, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 223, 20,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2040, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1956, 63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2146, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2446, 172,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 234, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 170, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2645, 179, 2032, 80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2956, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 3229, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3287, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3372, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 140, -26, 3052, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 118, -15, 3116, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3377, 4, 110, -8, 3140, 23,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimLandingAirF_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1187, 63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1431, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1442, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1314, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1228, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 870, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 828, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 556, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimLandingAirF_joint25[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1347, -69, -1307, 31, -1790, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1132, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1774, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1215, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1228, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1387, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1115, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1306, -78,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1394, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1284, 26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1731, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1709, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1383, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1917, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1316, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1407, 67,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1704, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1888, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1479, 68, -1922, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 1759, 18, -1969, -6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1888, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1769, 10, -1973, -3, -1888, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
