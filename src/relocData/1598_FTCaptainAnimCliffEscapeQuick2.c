/* AnimJoint data for relocData file 1598 (FTCaptainAnimCliffEscapeQuick2) */
/* 2768 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimCliffEscapeQuick2_joint1[24];
extern u16 dFTCaptainAnimCliffEscapeQuick2_joint2[148];
extern u16 dFTCaptainAnimCliffEscapeQuick2_joint3[36];
extern u16 dFTCaptainAnimCliffEscapeQuick2_joint5[78];
extern u16 dFTCaptainAnimCliffEscapeQuick2_joint6[126];
extern u16 dFTCaptainAnimCliffEscapeQuick2_joint7[64];
extern u16 dFTCaptainAnimCliffEscapeQuick2_joint8[22];
extern u16 dFTCaptainAnimCliffEscapeQuick2_joint9[32];
extern u16 dFTCaptainAnimCliffEscapeQuick2_joint11[8];
extern u16 dFTCaptainAnimCliffEscapeQuick2_joint12[116];
extern u16 dFTCaptainAnimCliffEscapeQuick2_joint13[66];
extern u16 dFTCaptainAnimCliffEscapeQuick2_joint14[54];
extern u16 dFTCaptainAnimCliffEscapeQuick2_joint15[24];
extern u16 dFTCaptainAnimCliffEscapeQuick2_joint17[28];
extern u16 dFTCaptainAnimCliffEscapeQuick2_joint18[110];
extern u16 dFTCaptainAnimCliffEscapeQuick2_joint20[40];
extern u16 dFTCaptainAnimCliffEscapeQuick2_joint22[112];
extern u16 dFTCaptainAnimCliffEscapeQuick2_joint23[98];
extern u16 dFTCaptainAnimCliffEscapeQuick2_joint25[32];
extern u16 dFTCaptainAnimCliffEscapeQuick2_joint26[114];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTCaptainAnimCliffEscapeQuick2_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimCliffEscapeQuick2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimCliffEscapeQuick2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimCliffEscapeQuick2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTCaptainAnimCliffEscapeQuick2_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTCaptainAnimCliffEscapeQuick2_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimCliffEscapeQuick2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimCliffEscapeQuick2_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimCliffEscapeQuick2_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTCaptainAnimCliffEscapeQuick2_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTCaptainAnimCliffEscapeQuick2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimCliffEscapeQuick2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimCliffEscapeQuick2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimCliffEscapeQuick2_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTCaptainAnimCliffEscapeQuick2_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTCaptainAnimCliffEscapeQuick2_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTCaptainAnimCliffEscapeQuick2_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTCaptainAnimCliffEscapeQuick2_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTCaptainAnimCliffEscapeQuick2_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTCaptainAnimCliffEscapeQuick2_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTCaptainAnimCliffEscapeQuick2_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTCaptainAnimCliffEscapeQuick2_joint1[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 1536,
	ftAnimSetValBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValT(FT_ANIM_TRAY, 21), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 1920, 2959,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), 4440, 1189,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 9), 4800, -15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimCliffEscapeQuick2_joint2[148] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX), -1, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 26), 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 5,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), 984, -773,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 906, -497,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 1,
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), 461, -1150,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 234, -1481,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -497, -1481,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 809, -2016, 91, -1193,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -2016,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -1193,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -187, -702,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 402, -1953,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -1953,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 321, 1593,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1593, -702,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 800, 2478, -239, 453,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 2478, 453,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 940, 94, -74, 975,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 94,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 975,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), -78, -176,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 824, -1878,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -1878,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 471, -1908,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -1908,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 347, 154,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 154,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 509, 1087,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 1087,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 619, 639,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -176,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 639,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 780, 899,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -86, -68,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -68,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), -91, 676,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 899,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 932, 1330,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 1330,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 1246, 939,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 939,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 4), 1600,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTCaptainAnimCliffEscapeQuick2_joint3[36] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY, 17), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 5,
	ftAnimSetValT(FT_ANIM_ROTZ, 27), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 715, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 6558, 21,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 38,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), 107,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), 6433,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimCliffEscapeQuick2_joint5[78] = {
	ftAnimSetValBlock(FT_ANIM_TRAY), -11,
	ftAnimSetValRateBlock(FT_ANIM_TRAX), 0, 0,
	ftAnimSetValT(FT_ANIM_TRAY, 7), -11,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 5,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 12), 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 5,
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAZ), 446, 27, 75, -15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), 53, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 491, 10,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -9,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), -26, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 491, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 402, -17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, -31, -3, 47, -2,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, -31, 47,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 189, 0,
	ftAnimBlock(0, 9),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimCliffEscapeQuick2_joint6[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1860, 66, -1388, 92, -2067, -123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1323, -95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2516, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2022, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2302, 208,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2473, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1454, -117,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1656, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2472, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2440, -52,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2509, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2548, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1625, 20, -2500, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2556, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1616, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1695, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1587, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2382, -110, -2566, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 2111, -110, -2395, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1588, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1537, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1466, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1572, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1989, -112, -2274, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1886, -70, -2173, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1848, -38, -1614, -42, -2132, 40,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimCliffEscapeQuick2_joint7[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -864, -103,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -993, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -868, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -644, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -596, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -473, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -347, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -513, -232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -676, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -767, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, -30,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimCliffEscapeQuick2_joint8[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -21, 0, 32, 0, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -781, -38, -89, -4, -388, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -781, -89, -388,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTCaptainAnimCliffEscapeQuick2_joint9[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 357, 27, -3, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 402, -37, -2, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -20, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0, 0,
	ftAnimBlock(0, 11),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimCliffEscapeQuick2_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 21),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTCaptainAnimCliffEscapeQuick2_joint12[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1644, 40, 1508, 71, -2024, -77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2514, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1668, -134, 1584, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1872, -223, 1507, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2352, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1570, -22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2497, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2599, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2380, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2627, 73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1549, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1629, -28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2553, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2055, 384,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2480, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2323, 94, 1607, -108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1161, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2292, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2066, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1835, 154, 1246, 103, -1573, 434,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1743, 9, 1438, 47, -1043, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1737, 5, 1464, 26, -1016, 26,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimCliffEscapeQuick2_joint13[66] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -837, -115,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -980, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -734, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -488, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -577, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -723, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -644, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -277, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 138,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -402, -390,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -781, -336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1211, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1087, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 62,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimCliffEscapeQuick2_joint14[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -561, -68, -24, -30, -28, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -720, 113, -71, 60, -102, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -18, 209, 264, 51, 256, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 281, 112, 173, -11, 435, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 520, 26, 210, 14, 173, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 409, -23, 241, 6, 166, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 270, 275, 62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTCaptainAnimCliffEscapeQuick2_joint15[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), -1003,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 1538, 119,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 34), 1538, 0, 119, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 24,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 85, 49, 38,
	ftAnimBlock(0, 10),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 1538, 119,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimCliffEscapeQuick2_joint17[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -490, 0, -55, -5, -61, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -317, 22, 0, 2, 0, 2,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 12), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 0, 0, 0, 6,
	ftAnimBlock(0, 11),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTCaptainAnimCliffEscapeQuick2_joint18[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 62, -11, -39, -141, -23, -182,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -209, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 196, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -205, -288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -600, -299,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -963, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -191, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -349, -48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 192, -16, -935, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 134, 37, -1433, -43,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -381, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -141, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 164, 20, -45, 64, -1423, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 150, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 88, 42, -923, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 119, 19, -840, 88,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 93, -25, -545, 91,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 169, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 184, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 6, 70, -23, -472, 73,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimCliffEscapeQuick2_joint20[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 998, 144,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1325, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1330, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1272, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1308, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1131, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 573, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -128,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimCliffEscapeQuick2_joint22[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -81, 22, 187, -60, -311, -99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 234, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 77, 5, -386, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 138, 38, -171, 150,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 51, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -44, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -96, -147,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 283, -83, 56, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 26, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 67, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -57, -102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -151, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 57, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -33, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -273, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -382, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -300, 96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 61, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -39, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -42, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -137, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, 9, -42, 0, 80, 18,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimCliffEscapeQuick2_joint23[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 6, 191, 9, -647, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -909, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -135, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 140, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 144, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 124, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -916, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1273, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 48, -39, -1405, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1191, 226,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 197, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -146, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 97, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -929, 210,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -224, 134,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 194, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 140, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 121, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 138, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 21, 110, -30, -76, 148,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimCliffEscapeQuick2_joint25[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1272, 25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1289, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1251, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1326, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1216, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 695, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -153,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTCaptainAnimCliffEscapeQuick2_joint26[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 31, -50, -161, -7, -293, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -75, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -160, 78, -246, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -12, 98, -99, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 92, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -103, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -68, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 181, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 69, -56, -73, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -62, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 68, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 265, 12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 43, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 127, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -246, -153,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -346, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 281, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 364, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -381, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -329, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, 34, 365, 0, -279, 49,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
