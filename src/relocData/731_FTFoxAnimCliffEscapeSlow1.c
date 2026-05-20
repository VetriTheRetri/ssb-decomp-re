/* AnimJoint data for relocData file 731 (FTFoxAnimCliffEscapeSlow1) */
/* 2448 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimCliffEscapeSlow1_joint1[24];
extern u16 dFTFoxAnimCliffEscapeSlow1_joint2[20];
extern u16 dFTFoxAnimCliffEscapeSlow1_joint3[42];
extern u16 dFTFoxAnimCliffEscapeSlow1_joint5[26];
extern u16 dFTFoxAnimCliffEscapeSlow1_joint6[110];
extern u16 dFTFoxAnimCliffEscapeSlow1_joint7[30];
extern u16 dFTFoxAnimCliffEscapeSlow1_joint8[10];
extern u16 dFTFoxAnimCliffEscapeSlow1_joint9[26];
extern u16 dFTFoxAnimCliffEscapeSlow1_joint11[10];
extern u16 dFTFoxAnimCliffEscapeSlow1_joint12[116];
extern u16 dFTFoxAnimCliffEscapeSlow1_joint13[40];
extern u16 dFTFoxAnimCliffEscapeSlow1_joint14[82];
extern u16 dFTFoxAnimCliffEscapeSlow1_joint16[10];
extern u16 dFTFoxAnimCliffEscapeSlow1_joint17[104];
extern u16 dFTFoxAnimCliffEscapeSlow1_joint19[32];
extern u16 dFTFoxAnimCliffEscapeSlow1_joint21[112];
extern u16 dFTFoxAnimCliffEscapeSlow1_joint22[122];
extern u16 dFTFoxAnimCliffEscapeSlow1_joint24[48];
extern u16 dFTFoxAnimCliffEscapeSlow1_joint25[122];
extern u16 dFTFoxAnimCliffEscapeSlow1_joint26[42];
extern u16 dFTFoxAnimCliffEscapeSlow1_joint27[42];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTFoxAnimCliffEscapeSlow1_joints[] = {
	(AObjEvent32 *)dFTFoxAnimCliffEscapeSlow1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeSlow1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeSlow1_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeSlow1_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeSlow1_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeSlow1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeSlow1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeSlow1_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeSlow1_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeSlow1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeSlow1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeSlow1_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeSlow1_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeSlow1_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeSlow1_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeSlow1_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeSlow1_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeSlow1_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeSlow1_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeSlow1_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeSlow1_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimCliffEscapeSlow1_joint1[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -1320, -240,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 20), -240,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), -1080, 240,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), -720, 432,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), 0, 671,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimCliffEscapeSlow1_joint2[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), 60, 912,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 20), 912,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 10), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 0, 552,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTFoxAnimCliffEscapeSlow1_joint3[42] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 357,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 10), 536,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 5), -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 268, -26,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 5), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 5), 0,
	ftAnimSetValT(FT_ANIM_TRAX, 40), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 40), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimCliffEscapeSlow1_joint5[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 178, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 357, 26, -178, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 0, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 714,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimCliffEscapeSlow1_joint6[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -986, -119, -520, -63, 901, 104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -564, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1105, -280, 1005, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1546, -433, 1434, 432,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1971, -295, 1869, 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2137, -120, -416, 146, 2059, 147,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 70, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 2432, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -2443, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2528, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2574, -10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 68, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -14, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2440, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 2316, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2586, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -2380, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2361, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2411, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2320, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2348, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2501, -90, -8, 5, 2406, 58,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimCliffEscapeSlow1_joint7[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1263, 67,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -523, 259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -275, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimCliffEscapeSlow1_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimCliffEscapeSlow1_joint9[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 111,
	ftAnimSetValRate(FT_ANIM_ROTX), -178, 23,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 10), -178,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 10), -178,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 10), -178,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimCliffEscapeSlow1_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimCliffEscapeSlow1_joint12[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 624, -7, 1295, -2, 104, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1105, -3, -754, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 200, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 55, -166,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -545, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1119, 42, -941, -152,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1309, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -943, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -662, -134, -776, 133,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1041, -304, -739, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1177, -133,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1069, 76,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1421, -374, -1036, -320,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2119, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1605, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1155, 97, -1763, -140,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1586, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2113, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2197, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2298, 21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1595, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1605, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2270, 27, 1600, -5, -2065, 48,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimCliffEscapeSlow1_joint13[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -809, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -1447, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1474, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -728, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -535, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTFoxAnimCliffEscapeSlow1_joint14[82] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -89, 0, 536,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -178, -7, -268, -22, 804, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -170, 41, -250, 2, 815, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -94, 107, -264, -19, 810, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 43, 180, -288, 1, 775, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 267, 335, -261, -34, 688, -298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 714, 43, -357, 50, 178, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 526, -2, 43, 50, -16, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 688, 20, 151, 21, -37, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 731, 31, 260, 27, -79, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTFoxAnimCliffEscapeSlow1_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimCliffEscapeSlow1_joint17[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1666, -40, -1342, 8, 1634, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1284, 102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1041, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1574, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1484, -66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1169, -199,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1428, 176,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1817, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 945, -183,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 787, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1048, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1234, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1816, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1908, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 812, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1100, 13,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1898, -10, -1217, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 1712, -110, -1052, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1115, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1393, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1571, -141, -1039, 13, 1565, 172,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimCliffEscapeSlow1_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 141, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 370, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 889, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 867, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 358, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, -66,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimCliffEscapeSlow1_joint21[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1639, 71, 1702, 77, -1211, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1574, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1323, 14, 1765, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1373, -26, 1648, -88,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1417, -124,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1428, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1615, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1833, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1281, -112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1569, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1578, -118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1721, -42,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1822, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1843, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1771, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -2004, -18,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1587, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1607, 11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1833, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1849, -13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2020, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2030, -9, 1617, 10, -1862, -12,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimCliffEscapeSlow1_joint22[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, -10, -202, 21, 22, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 636, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 108, 20, 92, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 116, 4, 69, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 118, -77, 620, -17, 36, -119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 314, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -38, -94, -170, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 139, 79, -163, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 222, 100, -94, 98,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 531, 252, 29, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 279, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 454, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 844, 159, 30, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 53, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 855, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 859, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 852, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 462, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 360, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 834, -233, 80, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 385, -324, -188, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 185, -200, 192, -167, -199, -11,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimCliffEscapeSlow1_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 231, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 283, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 238, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 573, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 727, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1103, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1086, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimCliffEscapeSlow1_joint25[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1417, -6, -1616, -9, 2057, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1831, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1696, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1425, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1535, 96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1278, -50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1834, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1635, 10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1668, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1523, 75,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1228, -49, 1658, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1794, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1070, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1404, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1238, 26, 1669, -152,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1215, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1166, 66, -1351, -87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1303, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1006, 36,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1128, -99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 916, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1237, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1053, 31, -1501, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1069, 15, -1716, -214, 846, -69,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimCliffEscapeSlow1_joint26[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -761, 78, -549,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -715, -1, -12, 0, 70, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -780, 0, 86, -1, -668, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -729, -4, -49, -7, 296, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -848, -33, -39, 6, 133, -37,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTFoxAnimCliffEscapeSlow1_joint27[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 50, 282, -178,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 60, 5, -401, -75, -247, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 109, -1, -543, 117, -301, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 51, -3, 302, 14, -175, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 49, -7, -273, -43, -230, 5,
	ftAnimEnd(),
	0x0000,
};
