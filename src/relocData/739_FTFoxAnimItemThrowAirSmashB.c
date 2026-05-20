/* AnimJoint data for relocData file 739 (FTFoxAnimItemThrowAirSmashB) */
/* 2368 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimItemThrowAirSmashB_joint1[10];
extern u16 dFTFoxAnimItemThrowAirSmashB_joint2[22];
extern u16 dFTFoxAnimItemThrowAirSmashB_joint4[26];
extern u16 dFTFoxAnimItemThrowAirSmashB_joint5[130];
extern u16 dFTFoxAnimItemThrowAirSmashB_joint6[62];
extern u16 dFTFoxAnimItemThrowAirSmashB_joint7[10];
extern u16 dFTFoxAnimItemThrowAirSmashB_joint8[26];
extern u16 dFTFoxAnimItemThrowAirSmashB_joint10[10];
extern u16 dFTFoxAnimItemThrowAirSmashB_joint11[156];
extern u16 dFTFoxAnimItemThrowAirSmashB_joint12[80];
extern u16 dFTFoxAnimItemThrowAirSmashB_joint13[48];
extern u16 dFTFoxAnimItemThrowAirSmashB_joint15[10];
extern u16 dFTFoxAnimItemThrowAirSmashB_joint16[84];
extern u16 dFTFoxAnimItemThrowAirSmashB_joint18[16];
extern u16 dFTFoxAnimItemThrowAirSmashB_joint20[96];
extern u16 dFTFoxAnimItemThrowAirSmashB_joint21[104];
extern u16 dFTFoxAnimItemThrowAirSmashB_joint23[46];
extern u16 dFTFoxAnimItemThrowAirSmashB_joint24[122];
extern u16 dFTFoxAnimItemThrowAirSmashB_joint25[26];
extern u16 dFTFoxAnimItemThrowAirSmashB_joint26[48];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimItemThrowAirSmashB_joints[] = {
	(AObjEvent32 *)dFTFoxAnimItemThrowAirSmashB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimItemThrowAirSmashB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimItemThrowAirSmashB_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimItemThrowAirSmashB_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimItemThrowAirSmashB_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimItemThrowAirSmashB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimItemThrowAirSmashB_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimItemThrowAirSmashB_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimItemThrowAirSmashB_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimItemThrowAirSmashB_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimItemThrowAirSmashB_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimItemThrowAirSmashB_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimItemThrowAirSmashB_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimItemThrowAirSmashB_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimItemThrowAirSmashB_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimItemThrowAirSmashB_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimItemThrowAirSmashB_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimItemThrowAirSmashB_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimItemThrowAirSmashB_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimItemThrowAirSmashB_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimItemThrowAirSmashB_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 960, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimItemThrowAirSmashB_joint2[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 268, 26, 268, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 312, -14, 312, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimItemThrowAirSmashB_joint4[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 268, 22, 268, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 268, -14, 268, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 0, -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimItemThrowAirSmashB_joint5[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1885, -37, 1893, -32, 1151, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1843, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1848, -172, 1192, 323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1541, -166, 1797, 369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1541, 46, 1946, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1607, 73, 1977, 114, 1907, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1584, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1842, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1879, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1985, 100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2286, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1526, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1408, -58,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2409, 92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2157, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1350, -21, 1916, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1534, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1697, 87,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1990, -138,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1614, -325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1534, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1624, 152,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1836, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1849, 131, 1870, 27, 1202, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1888, 38, 1890, 20, 1146, -55,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimItemThrowAirSmashB_joint6[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -683, -363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -726, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -723, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -581, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -620, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -592, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -715, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -430, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -343, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -485, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -397, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 198,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimItemThrowAirSmashB_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimItemThrowAirSmashB_joint8[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 178, 268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -178, -14, -357, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 0, 19, 0, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 178, 268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimItemThrowAirSmashB_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimItemThrowAirSmashB_joint11[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 367, 700, 517, -80, -16, 638,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 462, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1068, 780, 622, 470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1928, 583, 925, 267,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2099, -362, 1056, -304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 453, 118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1155, 89,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1509, -507, 550, -489,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1085, -207, 77, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1094, -4, 1121, -22, 127, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 491, 190,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1500, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1006, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 825, -147,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 851, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 675, 174,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1270, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1828, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1837, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1351, -339,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1341, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1090, 194,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1822, 186,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1432, 82, 1501, 232,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1843, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1343, -209,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2007, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2082, -18, 1769, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1971, -53, 1111, -126, 1584, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1976, 4, 1090, -20, 1592, 7,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimItemThrowAirSmashB_joint12[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, -184,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -395, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -862, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -678, 427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -256, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -645, -366,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -638, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -661, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -685, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -406, 339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimItemThrowAirSmashB_joint13[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 804, 14, 0, -89, 0, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 89, 119, -536, -104, 670, -148,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1519, 178, -893, -193,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -625,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1161, -101, -536, 41, -491, 59,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimItemThrowAirSmashB_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimItemThrowAirSmashB_joint16[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -151, -5, -34, 18, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 255, -94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -138, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -141, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -23, 140,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 297, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 52, -229,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -488, -83,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -12, 111,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -3, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 269, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 109, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -550, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -338, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -251, 84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 7, 26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 33, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -33, -5, -1, 18, 11,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimItemThrowAirSmashB_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimItemThrowAirSmashB_joint20[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1625, 153, -1543, -88, 2218, -84,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1505, 173, 1950, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1471, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1524, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1663, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1565, 71, -1279, 151, 2077, 110,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1569, -2, 2015, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1448, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1486, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1369, -56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1573, 0, 1972, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 2081, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -1616, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1688, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1647, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1432, -59, 2160, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1528, -27, 2216, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1625, 21, -1543, -15, 2218, 1,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimItemThrowAirSmashB_joint21[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1600, 6, 1603, -24, 1116, 134,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1911, 128,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1526, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1250, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1670, 288,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1280, -180,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2028, 85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1857, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1421, -93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1291, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1124, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 778, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 740, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 898, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1872, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1800, -80,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1340, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1600, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1723, -71, 891, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1592, 5, 1099, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1600, 8, 1603, 2, 1116, 16,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimItemThrowAirSmashB_joint23[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 626, 62,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 688, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 295, -344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -145,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 461, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 558, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 627, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 626, -1,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimItemThrowAirSmashB_joint24[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1622, -7, 1484, -9, 1516, -125,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1801, -149, 1585, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1492, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1809, 172,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1852, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1956, -8, 1637, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1678, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1817, 76, 1922, 96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2025, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1803, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1736, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1959, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1884, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1638, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1702, -75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1712, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1787, -35,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1855, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1588, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1618, -80, 1534, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1482, -6, 1513, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1815, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1664, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1622, 41, 1484, 2, 1516, 2,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimItemThrowAirSmashB_joint25[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -358, 52, 219, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 627, 17, 219, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTFoxAnimItemThrowAirSmashB_joint26[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 402, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 230, -122, -237, -51, 46, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -456, 32, -360, 0, -28, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 592, 67, -239, 15, -20, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 548, -21, -132, 26, -2, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 402, 0, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
