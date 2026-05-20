/* AnimJoint data for relocData file 1738 (FTNessAnimCliffWait) */
/* 1728 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimCliffWait_joint1[38];
extern u16 dFTNessAnimCliffWait_joint2[44];
extern u16 dFTNessAnimCliffWait_joint5[32];
extern u16 dFTNessAnimCliffWait_joint6[58];
extern u16 dFTNessAnimCliffWait_joint7[32];
extern u16 dFTNessAnimCliffWait_joint8[8];
extern u16 dFTNessAnimCliffWait_joint9[28];
extern u16 dFTNessAnimCliffWait_joint11[24];
extern u16 dFTNessAnimCliffWait_joint12[64];
extern u16 dFTNessAnimCliffWait_joint13[32];
extern u16 dFTNessAnimCliffWait_joint14[22];
extern u16 dFTNessAnimCliffWait_joint16[12];
extern u16 dFTNessAnimCliffWait_joint17[78];
extern u16 dFTNessAnimCliffWait_joint19[32];
extern u16 dFTNessAnimCliffWait_joint20[92];
extern u16 dFTNessAnimCliffWait_joint22[24];
extern u16 dFTNessAnimCliffWait_joint23[68];
extern u16 dFTNessAnimCliffWait_joint25[24];
extern u16 dFTNessAnimCliffWait_joint26[68];
extern u16 dFTNessAnimCliffWait_joint27[30];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTNessAnimCliffWait_joints[] = {
	(AObjEvent32 *)dFTNessAnimCliffWait_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimCliffWait_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimCliffWait_joint5, /* [2] joint 5 */
	NULL, /* [3] NULL */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTNessAnimCliffWait_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimCliffWait_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimCliffWait_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimCliffWait_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTNessAnimCliffWait_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTNessAnimCliffWait_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimCliffWait_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimCliffWait_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTNessAnimCliffWait_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTNessAnimCliffWait_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTNessAnimCliffWait_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTNessAnimCliffWait_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTNessAnimCliffWait_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTNessAnimCliffWait_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTNessAnimCliffWait_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTNessAnimCliffWait_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTNessAnimCliffWait_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTNessAnimCliffWait_joint1[38] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), -120, 14, -1200, 7,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 47), 120, -1200,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 22,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), -240,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 25), -240, -21,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 50), -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 100), -1200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 25), -376,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 25), -240, 21,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 50), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 25), -240,
	ftAnimLoop(0x6800, -74),
};

/* Joint 2 */
u16 dFTNessAnimCliffWait_joint2[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTZ), -44, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 47), 44,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 22,
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 0, -33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 100), 0, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), 0, 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 50), -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 25), 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), 0, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 50), 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 25), 0,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimCliffWait_joint5[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTY), -134, 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 47), 134,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 22,
	ftAnimSetValRate(FT_ANIM_TRAY), 600, 33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 100), 600, -32,
	ftAnimBlock(0, 25),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 50), -134,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 50), 134,
	ftAnimBlock(0, 25),
	ftAnimLoop(0x6800, -62),
};

/* Joint 6 */
u16 dFTNessAnimCliffWait_joint6[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2264, -9, -1434, -9, 285, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 48), 231, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 93), -1407, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 44), 2275, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2287, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 54), 2272, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 224, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 50), 280, 6,
	ftAnimBlock(0, 44),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1411, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1429, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2262, -9, -1439, -9, 285, 5,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimCliffWait_joint7[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 25), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimCliffWait_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, 0,
	ftAnimBlock(0, 100),
	ftAnimLoop(0x6800, -14),
};

/* Joint 9 */
u16 dFTNessAnimCliffWait_joint9[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), 288, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 93), 288,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 43,
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -357,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 50), -491,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 100), 288,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 50), -357,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimCliffWait_joint11[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTY), 44, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 47), -44,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 22,
	ftAnimBlock(0, 25),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 50), 44,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 50), -44,
	ftAnimBlock(0, 25),
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimCliffWait_joint12[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 963, -12, 1432, -1, 294, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 62), 1043, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 65), 339, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 51), 1445, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1449, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 46), 1445, -5,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1059, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), 964, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 346, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 33), 293, -6,
	ftAnimBlock(0, 32),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1440, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 951, -13, 1435, -5, 286, -6,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimCliffWait_joint13[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), -9, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTNessAnimCliffWait_joint14[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 963, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -48, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 1159, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 80), 982, 0, 0,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimCliffWait_joint16[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 100),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimCliffWait_joint17[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 180, 4, 291, -5, -11, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 49), -275, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 59), -15, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 42), 437, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 438, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 38), 255, -12,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -274, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 22, 29,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -15, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 39), -11, -2,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 52, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 297, -4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 244, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), 174, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 177, 3, 292, -4, -15, -4,
	ftAnimLoop(0x6800, -152),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimCliffWait_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 44), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTNessAnimCliffWait_joint20[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1594, -3, 1635, -5, 2258, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), -2123, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), 2072, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 31), 1871, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1879, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 61), 1838, -24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2133, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 38), -2156, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2077, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 58), 2290, -6,
	ftAnimBlock(0, 37),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2133, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -1641, 26,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1813, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1666, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2284, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2264, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1616, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1594, 21, 1635, -31, 2258, -6,
	ftAnimLoop(0x6800, -180),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimCliffWait_joint22[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -268, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), 0, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 134, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), -294, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), -294,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTNessAnimCliffWait_joint23[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -160, 0, 354, 0, -15, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 32), 41, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 99), -15, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 29), 18, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -8, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), 122, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 51, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 63), -157, 0,
	ftAnimBlock(0, 36),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 140, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 355, 0,
	ftAnimBlock(0, 26),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -160, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -160, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -160, 0, 354, 0, -15, 0,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimCliffWait_joint25[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 72), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 26 */
u16 dFTNessAnimCliffWait_joint26[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2088, 1, 1513, -4, 2192, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), 1187, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 76), 1870, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 27), 1825, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1803, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 40), 1773, 20,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1187, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 65), 1517, -2,
	ftAnimBlock(0, 34),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1793, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 2085, 2,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1882, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 2191, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2088, 2, 1513, -3, 2192, 1,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTNessAnimCliffWait_joint27[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -223, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), 81, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 241, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), -223, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), -223,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
