/* AnimJoint data for relocData file 1939 (FTYoshiAnimLandingAirF) */
/* 2400 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimLandingAirF_joint1[84];
extern u16 dFTYoshiAnimLandingAirF_joint2[60];
extern u16 dFTYoshiAnimLandingAirF_joint3[52];
extern u16 dFTYoshiAnimLandingAirF_joint6[56];
extern u16 dFTYoshiAnimLandingAirF_joint7[102];
extern u16 dFTYoshiAnimLandingAirF_joint8[28];
extern u16 dFTYoshiAnimLandingAirF_joint10[16];
extern u16 dFTYoshiAnimLandingAirF_joint11[106];
extern u16 dFTYoshiAnimLandingAirF_joint12[54];
extern u16 dFTYoshiAnimLandingAirF_joint13[16];
extern u16 dFTYoshiAnimLandingAirF_joint14[10];
extern u16 dFTYoshiAnimLandingAirF_joint15[26];
extern u16 dFTYoshiAnimLandingAirF_joint17[32];
extern u16 dFTYoshiAnimLandingAirF_joint18[100];
extern u16 dFTYoshiAnimLandingAirF_joint20[52];
extern u16 dFTYoshiAnimLandingAirF_joint22[98];
extern u16 dFTYoshiAnimLandingAirF_joint23[96];
extern u16 dFTYoshiAnimLandingAirF_joint25[52];
extern u16 dFTYoshiAnimLandingAirF_joint26[108];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimLandingAirF_joints[] = {
	(u32)dFTYoshiAnimLandingAirF_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimLandingAirF_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimLandingAirF_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimLandingAirF_joint6, /* [3] joint 6 */
	0x00000000, /* [4] NULL */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimLandingAirF_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimLandingAirF_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimLandingAirF_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimLandingAirF_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimLandingAirF_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimLandingAirF_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimLandingAirF_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimLandingAirF_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimLandingAirF_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimLandingAirF_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimLandingAirF_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimLandingAirF_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimLandingAirF_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimLandingAirF_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimLandingAirF_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimLandingAirF_joint1[84] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1650, 0, 0, 0, 546, 295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 1650, -74, 0, 13, 0, 56, 0, -17, 546, -330, 295, -165,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1052, -150, -17, -41, 216, -880, 130, -403,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 108, 451,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -105, 0, -10, 0, -45,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -19, 68, 143, -46, 110, -652,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 57, 204, 596, -32, -121,
	ftAnimSetValRateT(FT_ANIM_TRAY, 1), 342, 157,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 244, 238,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 441, 855,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 672,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimLandingAirF_joint2[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -254, -9, -45, -3, -55, -1, -2, -2, 144, 41, -201, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -254, 184, -45, 3, -55, 4, -2, 1, 144, -57, -201, 111,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, -3, 0, 5,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 0, 0, 30, -29, 20, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1587, 349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2195, 271,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 3216, -39, -89, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimLandingAirF_joint3[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 629, 35, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 629, 70, 0, 17, 0, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1191, 41, 124, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 838, -138, 0, -18, 0, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 172, -137, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 16, -10, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimLandingAirF_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 662, 15, 41, 2, -144, -3,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 16, 531, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 662, -50, 41, -1, -144, 15, 16, -8, 531, 34, 234, 47,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 0, 600, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 153, -6, 26, -3, 7, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 597, -12, 1, -4, 1, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 78, -16, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimLandingAirF_joint7[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -46, -9, -1430, 6, -580, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -46, 88, -1430, -25, -580, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 65, 560, -1452, 95, -923, -563,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1073, 745, -1238, 88, -1707, -658,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1557, 262, -1276, -156, -2239, -269,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1811, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1599, 53, -2246, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1663, 67, -2183, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1670, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1885, -9, -2091, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1670, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2179, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1626, -22, -2268, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1585, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2186, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1469, 135, -2238, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1578, -6, -1399, 69, -2249, -11,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimLandingAirF_joint8[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -549, -347,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -703, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, -61,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimLandingAirF_joint10[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, -80,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimLandingAirF_joint11[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -255, 31, 1118, -3, -1016, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1118, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -132, -69, -877, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -255, -429, -1016, -404,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1600, -266, -2282, -385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1042, 197,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1955, 181,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1523, -77, -2457, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1755, -42, 1876, -184, -2051, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, 78, 1587, -147, -2329, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1673, -12, -1867, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1581, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1619, -37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1622, 39, -1864, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1613, -50, -2207, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1585, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1630, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1694, -81, 1805, 175, -2105, 101,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimLandingAirF_joint12[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -559, -328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -665, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -945, 332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 468,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, -474,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -957, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1087, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1019, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 16,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimLandingAirF_joint13[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, -80,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimLandingAirF_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimLandingAirF_joint15[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -319, -17, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -319, -14, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -463, 11, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -190, 14, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimLandingAirF_joint17[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -459, -39, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -459, -11, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -576, 27, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -153, 11, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimLandingAirF_joint18[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1647, 4, 1759, 15, 1879, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1621, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1759, -80, 1879, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1663, -11, 1892, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1798, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1605, 16, 2021, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1655, -20, 1889, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1564, -6, 2131, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1643, 112, 1434, -193, 2112, 137,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1442, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1788, -53, 2406, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1536, -145, 1795, -449,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1496, -11, 1532, 77, 1508, -265,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1558, 44, 1613, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1264, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1156, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1602, 44, 1603, -10, 1604, 447,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimLandingAirF_joint20[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 687, 16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 696, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 419, -340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 293, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 802, 479,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 966, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1053, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 995, -395,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -733,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimLandingAirF_joint22[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1802, -33, 172, 22, -318, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1572, -58, 172, -137, -318, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1540, -7, -5, -156, -375, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1557, -70, -140, -172, -254, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1399, -84, -350, 103, 181, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1388, -59, 66, 44, -142, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1281, 315, -261, -61, -70, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2018, 301, -57, 141, -71, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1884, -127, 21, 50, -442, -222,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1645, -35, -25, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -517, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -584, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -574, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, -31, -83, -58, -263, 310,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimLandingAirF_joint23[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -34, 1, 150, -6, 286, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 236, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -34, -80, 286, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -166, -110, 71, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -256, 94, 306, 0, 7, 191,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 92, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 23, 87, 454, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -82, -214, 27, -461,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -35, -67, 168, -468, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -153, 147, 429, 137, 200, 304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -111, -2, 208, -177, 141, -190,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -23, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -110, 54, -484, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -48, 55, -633, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 49, 0, 23, -154, 478,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimLandingAirF_joint25[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 670, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 670, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 840, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 751, -420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1268, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1066, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1239, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1285, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1267, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1124, -444,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -745,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimLandingAirF_joint26[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -470, -51, -1268, -3, -1942, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -470, 217, -1268, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1878, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1942, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -193, -3, -1109, 313, -2244, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -477, 415, -642, 323, -2094, -242,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3479, -352,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 636, 1057, -461, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1638, 642, -95, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1921, 333, -184, -28, -3435, -207,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 47, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2306, 14, -3895, -311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1951, -248, -4057, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3871, 117,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1648, -45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 41, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -22, -65, -3737, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1609, -39, -89, -67, -3445, 291,
	ftAnimEnd(),
	0x0000, 0x0000,
};
