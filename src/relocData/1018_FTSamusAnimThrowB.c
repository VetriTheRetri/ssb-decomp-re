/* AnimJoint data for relocData file 1018 (FTSamusAnimThrowB) */
/* 4416 bytes: 132-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimThrowB_joint1[50];
extern u16 dFTSamusAnimThrowB_joint2[8];
extern u16 dFTSamusAnimThrowB_joint4[120];
extern u16 dFTSamusAnimThrowB_joint5[190];
extern u16 dFTSamusAnimThrowB_joint6[80];
extern u16 dFTSamusAnimThrowB_joint7[22];
extern u16 dFTSamusAnimThrowB_joint8[12];
extern u16 dFTSamusAnimThrowB_joint11[54];
extern u16 dFTSamusAnimThrowB_joint12[238];
extern u16 dFTSamusAnimThrowB_joint13[102];
extern u16 dFTSamusAnimThrowB_joint14[250];
extern u16 dFTSamusAnimThrowB_joint15[76];
extern u16 dFTSamusAnimThrowB_joint16[84];
extern u16 dFTSamusAnimThrowB_joint17[84];
extern u16 dFTSamusAnimThrowB_joint18[82];
extern u16 dFTSamusAnimThrowB_joint20[84];
extern u16 dFTSamusAnimThrowB_joint21[58];
extern u16 dFTSamusAnimThrowB_joint23[62];
extern u16 dFTSamusAnimThrowB_joint24[56];
extern u16 dFTSamusAnimThrowB_joint26[40];
extern u16 dFTSamusAnimThrowB_joint28[62];
extern u16 dFTSamusAnimThrowB_joint29[76];
extern u16 dFTSamusAnimThrowB_joint31[32];
extern u16 dFTSamusAnimThrowB_joint32[220];

/* Joint pointer table (33 entries, 132 bytes) */
u32 dFTSamusAnimThrowB_joints[] = {
	(u32)dFTSamusAnimThrowB_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimThrowB_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimThrowB_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimThrowB_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimThrowB_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimThrowB_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimThrowB_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimThrowB_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimThrowB_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimThrowB_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimThrowB_joint14, /* [13] joint 14 */
	(u32)dFTSamusAnimThrowB_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimThrowB_joint16, /* [15] joint 16 */
	(u32)dFTSamusAnimThrowB_joint17, /* [16] joint 17 */
	(u32)dFTSamusAnimThrowB_joint18, /* [17] joint 18 */
	(u32)dFTSamusAnimThrowB_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTSamusAnimThrowB_joint21, /* [20] joint 21 */
	(u32)dFTSamusAnimThrowB_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTSamusAnimThrowB_joint24, /* [23] joint 24 */
	(u32)dFTSamusAnimThrowB_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTSamusAnimThrowB_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	(u32)dFTSamusAnimThrowB_joint29, /* [28] joint 29 */
	(u32)dFTSamusAnimThrowB_joint31, /* [29] joint 31 */
	0x00000000, /* [30] NULL */
	(u32)dFTSamusAnimThrowB_joint32, /* [31] joint 32 */
	0xFFFF040B, /* [32] END */
};

/* Joint 1 */
u16 dFTSamusAnimThrowB_joint1[50] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1063, 0, 253, 1,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1600, 4, -56, -2,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1600, 0, -56, 2,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 1619, -280,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 10), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 1600, -5, -56, 80,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 17), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 1600, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 11), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimThrowB_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimThrowB_joint4[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 284, 0, 405, 0, 213, 0, 40, 0, -6, 0, 58, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 1, -178, 0, 0, 0, -29, -170, 0, 13, 2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 178, -114, -178, 2, 0, 0, -45, 38, 0, -2, 54, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 220, 61, -594, 0, -395, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -10, 97, -1, 0, 6, -91,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 3, 0, 23, 0, 8, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), 220, 0, -395, 0, 3, 0, 8, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 10), -594, 23,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, -1, -594, 0, 0, 0, -39, -1, 23, 0, -15, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 37, 0, 19, 0, -11, 0, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimThrowB_joint5[190] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1236, -422, -1194, -109, 1630, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1658, -170, -1304, -213, 1638, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1577, 15, -1620, -127, 1260, -129,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1745, -62, 1570, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1559, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1517, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1424, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1753, -13, 1627, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1928, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 2091, -2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1395, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1158, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1905, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1603, 104,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2077, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1822, -190,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1149, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1409, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1487, 32, 1583, -159,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1462, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1774, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1795, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1729, 88,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1342, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1522, -172,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1631, 51, 1284, -153,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1624, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1136, 45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1700, -124,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1735, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1542, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1153, 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1730, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1727, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1185, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1305, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1132, 21, -1722, 5, 1377, 71,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimThrowB_joint6[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -433, -462,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -895, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -840, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1073, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1174, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1095, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1029, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -374, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -232, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -213, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1002, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -963, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -704, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -704, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -730, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimThrowB_joint7[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -518, 0, 0, 2, 0, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 701, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimThrowB_joint8[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 86, 68, -29,
	_FT_ANIM_CMD(11, 0, 1), 2,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimThrowB_joint11[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -440, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -352, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 37, -352, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 227, 0, -613, 0, -339, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 227, 0, -613, 0, -339, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimThrowB_joint12[238] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1517, 195, 1134, 226, -2070, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1322, 25, 1361, 89, -1794, 298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1467, -214, 1314, -85, -1474, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1751, -74, 1189, -13, -1512, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1617, 60, 1288, -77, -1476, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1631, -435, 1035, -42, -1756, -628,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2487, -421, 1203, 25, -2734, -474,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 955, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2474, -242, -2705, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2972, -379, -3223, -391,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3234, 212, 910, -181, -3487, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2547, 127, 592, -263, -2751, 262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2979, -364, 383, -183, -2963, -140,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 297, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3275, -156, -3033, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3057, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -3276, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3251, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2814, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3077, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2851, 91,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 313, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 578, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2789, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2440, 499, -2602, 352,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1815, -215, 593, 7, -2084, -76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 435, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2871, -863, -2756, -578,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3542, -393, -3242, -276,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3346, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3658, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -3263, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 433, -35, -3405, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -3412, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -26, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -53, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -145, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3244, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -3150, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3415, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -3437, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3158, -8, -128, 16, -3432, 4,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTSamusAnimThrowB_joint13[102] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -424, -549,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1248, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -981, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -770, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1052, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -621, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -481, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -444, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -971, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1058, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1010, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1273, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1008, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -848, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -817, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -748, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -616, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -646, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -652, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 57,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimThrowB_joint14[250] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY), 808, 14, 11, 4096, 4095,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -900, 0, -622, 0, -694, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -900, -1, -622, 1, -694, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8,
	ftAnimSetValRateBlock(FT_ANIM_SCAZ), 81, 3,
	ftAnimSetValRateT(FT_ANIM_SCAZ, 4), 81, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -794, -394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1000, -3, -585, 35,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -267, 416,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 501, 904, 1173, 397,
	ftAnimSetValRateBlockT(FT_ANIM_SCAZ, 1), 409, 958,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 1186,
	ftAnimSetValRateT(FT_ANIM_SCAZ, 7), 4096, 501,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 183, 1038,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1713, -1421, 605, -647, 1281, -1376,
	ftAnimSetValRateBlock(FT_ANIM_ROTY), 261, 192,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2342, -1096, 657, 407, -2569, -1043,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -480, 952, 910, 231, -806, 953,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -436, 3, 1120, 244, -662, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -472, 530, 1398, 184, -576, 811,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 624, 577, 1489, 10, 961, 763,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAZ), -401,
	ftAnimSetValRateT(FT_ANIM_SCAZ, 16), 409, -430,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 681, 831, 1419, -652, 951, -813,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2288, -797, 184, -650, -666, -815,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -912, -1548, 118, -41, -680, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -809, -474, 101, -109, -665, -652,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1862, -391, -100, -22, -1985, 286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1592, 217, 55, 102, -93, 1894,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1426, 20, 104, 113, 1803, -623,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1552, -126, 283, 224, -1339, -3180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1679, 391, 553, -126, -1611, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -769, 495, 29, -427, -801, 386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -688, -24, -301, -96, -837, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -890, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -355, -127, -1185, 18,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -12,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -601, -20, -819, 5,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -784, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_SCAZ, 3), 16, -89,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 11), 16,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimThrowB_joint15[76] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 230, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -251, -142,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 481,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 180, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 70, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 133, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -153, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -13, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -241, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 321, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -162, -361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -401, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -255, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -619, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 353, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimThrowB_joint16[84] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 24,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 203, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 692, 468,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 229, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 481, -4,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -98, -251,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -61, 23,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -267, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 355, 233,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -500, -310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -265, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -269, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -486, -83,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 10, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTSamusAnimThrowB_joint17[84] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -28, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 317, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 465, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 380, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 415, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -123, -354,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -239, -112,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -310, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 255, 134,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -285, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -158, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -253, -7,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 220, 152,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -358, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTSamusAnimThrowB_joint18[82] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -610, -258,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 262, 377,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 507, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 173, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 406, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -106, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -381, -386,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -334, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 178, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -180, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 150, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -89, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -122, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 184, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -327, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimThrowB_joint20[84] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 207, 353,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 304, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 87, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 374, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -191, -378,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -126, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -316, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 274, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -236, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 356, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 101, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -144, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 286, 138,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -501, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTSamusAnimThrowB_joint21[58] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 458, 13, 5, 4096, 4096, 4096,
	ftAnimSetValAfterT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 27), 4096, 4096, 4096,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX, 5), 536,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX, 1), -383,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX, 14), -402,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX, 2), 368,
	ftAnimSetValAfterT(FT_ANIM_ROTX, 19), 368,
	ftAnimBlock(0, 4),
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2, 2, -2,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 16, -5982, 16, -6074, 16, -6202,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -5982, -6074, -6202,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 11), 16, 16, 16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimThrowB_joint23[62] = {
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 891, 28, -21, 4096, 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 766, 16, 3, 2048, 2048, 2048,
	ftAnimSetValAfterBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 766, 16, 3, 2048, 2048, 2048,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 891, 28, -21, 4096, 4096, 4096,
	ftAnimSetValAfterBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 891, 28, -21, 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 16, 16, 16,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 726, 14, 1,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 891, 28, -21,
	ftAnimBlock(0, 3),
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 11), 16, 16, 16,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTSamusAnimThrowB_joint24[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 125, -25, -10, -3, -630, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 149, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 41), -27, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -397, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -398, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -397, -1,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 143, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 87, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -398, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -389, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 0, -27, 0, -389, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTSamusAnimThrowB_joint26[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1076, -257,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 819, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 450, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 451, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 239, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 255, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 478, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 28 */
u16 dFTSamusAnimThrowB_joint28[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -116, 26, -14, -3, -409, 184,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -119, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), -34, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -6, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 168, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 154, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -41, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -116, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -76, 0,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -33, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 0, -28, 0, -41, 0,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTSamusAnimThrowB_joint29[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 79, 66, 212, 5, -55, -69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -99, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 234, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 239, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 234, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 368, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -111, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 34), -54, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 245, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 163, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 354, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 223, 0,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 162, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 223, 0, 162, 0, -54, 0,
	ftAnimEnd(),
};

/* Joint 31 */
u16 dFTSamusAnimThrowB_joint31[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 873, -131,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 741, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 480, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 480, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 482, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), 453, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 32 */
u16 dFTSamusAnimThrowB_joint32[220] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -353, 348, 490, -192, -426, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 126, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 168, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -382, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -212, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -210, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 132, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 75, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 170, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 23, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -208, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 35), -214, 0,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 36, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 193, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 83, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), 145, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 145, 0, 193, 0, -214, 0,
	ftAnimEnd(),
	0x2020, 0x0000, 0xF8C5, 0x2821, 0x0003, 0xFD05, 0xE5F2, 0x5821, 0x0002, 0x20CE, 0x0000, 0x0029, 0x0648, 0xFFFE, 0x0000, 0xFFFE, 0xFFA1, 0x0B4F, 0x0506, 0xF51E, 0x28CF, 0x0002, 0x00F4, 0x00A7, 0x05FD, 0xFFCA, 0xFFBB, 0xFFC4, 0x01DD, 0x00E3, 0x0167, 0xF423, 0x0801, 0x0001, 0x3020, 0x0463, 0x2821, 0x0002, 0xFDF8, 0xFD28, 0x0801, 0x0001, 0x3080, 0x0128, 0x304E, 0x0211, 0x0055, 0x00FB, 0xED78, 0x284F, 0x0002, 0x0318, 0xFFF2, 0x062D, 0xFF76, 0x0193, 0x0040, 0xFDEC, 0xFE90, 0x2081, 0x0001, 0x01DE, 0xFEA7, 0x3020, 0xF989, 0x20A1, 0x0001, 0xFC9C, 0xFFF9, 0x0111, 0x013A, 0x3044, 0xFECB, 0x0DCA, 0x300A, 0xF68E, 0xFBE7, 0x280B, 0x0002, 0xFB28, 0xFE95, 0xF944, 0xFF6C, 0x20E5, 0x0001, 0x025D, 0xFFC7, 0xFE4B, 0x00ED, 0x01B3, 0x036C, 0x02E3, 0xFE95, 0x28C1, 0x0003, 0x07E3, 0xF48A, 0x00EF, 0xFE67, 0x2025, 0x0001, 0x05B5, 0x0026, 0xFE00, 0xFF00, 0x3028, 0x17D0, 0x06F3, 0x202F, 0x0002, 0xF901, 0x0045, 0x06CD, 0x009C, 0x0628, 0xFFDD, 0xFFB2, 0x0816, 0x30E4, 0xFFFD, 0xFFCE, 0xFD0D, 0x00E9, 0x28E1, 0x0022, 0xFF1A, 0xFFD5, 0xFFA1, 0xFD0A, 0x038D, 0x0113, 0x380F, 0x0022, 0x0000, 0x0648, 0x0000, 0x0000, 0x0000,
};
