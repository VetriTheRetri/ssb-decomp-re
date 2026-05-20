/* AnimJoint data for relocData file 1735 (FTNessAnimThrown1) */
/* 1552 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimThrown1_joint1[8];
extern u16 dFTNessAnimThrown1_joint2[18];
extern u16 dFTNessAnimThrown1_joint3[8];
extern u16 dFTNessAnimThrown1_joint5[30];
extern u16 dFTNessAnimThrown1_joint6[94];
extern u16 dFTNessAnimThrown1_joint7[24];
extern u16 dFTNessAnimThrown1_joint8[12];
extern u16 dFTNessAnimThrown1_joint9[18];
extern u16 dFTNessAnimThrown1_joint11[26];
extern u16 dFTNessAnimThrown1_joint12[94];
extern u16 dFTNessAnimThrown1_joint13[22];
extern u16 dFTNessAnimThrown1_joint14[12];
extern u16 dFTNessAnimThrown1_joint16[12];
extern u16 dFTNessAnimThrown1_joint17[36];
extern u16 dFTNessAnimThrown1_joint19[14];
extern u16 dFTNessAnimThrown1_joint20[82];
extern u16 dFTNessAnimThrown1_joint22[14];
extern u16 dFTNessAnimThrown1_joint23[58];
extern u16 dFTNessAnimThrown1_joint25[22];
extern u16 dFTNessAnimThrown1_joint26[100];
extern u16 dFTNessAnimThrown1_joint27[18];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTNessAnimThrown1_joints[] = {
	(AObjEvent32 *)dFTNessAnimThrown1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimThrown1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimThrown1_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTNessAnimThrown1_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTNessAnimThrown1_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimThrown1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimThrown1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimThrown1_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTNessAnimThrown1_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTNessAnimThrown1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimThrown1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimThrown1_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTNessAnimThrown1_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTNessAnimThrown1_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTNessAnimThrown1_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTNessAnimThrown1_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTNessAnimThrown1_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTNessAnimThrown1_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTNessAnimThrown1_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTNessAnimThrown1_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTNessAnimThrown1_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTNessAnimThrown1_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 840, 240,
	ftAnimBlock(0, 24),
	ftAnimLoop(0x6800, -14),
};

/* Joint 2 */
u16 dFTNessAnimThrown1_joint2[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal(FT_ANIM_TRAY), 480,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 12), 480,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 12), 480,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTNessAnimThrown1_joint3[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimLoop(0x6800, -14),
};

/* Joint 5 */
u16 dFTNessAnimThrown1_joint5[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -31, 0, -7, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 0, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 0, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimThrown1_joint6[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 168, -11, -1379, -14, -172, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 57, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1478, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -47, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 29, 69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 61, -49,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 65, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 358, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1454, 25, 6, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1320, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -387, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 433, 64, -456, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -383, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 431, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 356, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 213, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -309, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1351, -29, -233, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 168, -45, -1379, -27, -172, 60,
	ftAnimLoop(0x6800, -184),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimThrown1_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 8 */
u16 dFTNessAnimThrown1_joint8[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTNessAnimThrown1_joint9[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -178, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 300, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), -312,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), -178,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimThrown1_joint11[26] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 0, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 0, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 0, -37,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimThrown1_joint12[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1439, -45, 262, -2, -1776, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -1569, 32, 220, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -2135, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2091, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1781, 79,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1531, 39, 231, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1261, 126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 416, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1699, 93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1267, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1119, 138,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -890, -65,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 413, -4, -1294, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 297, -38, -1699, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -986, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1372, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1439, -66, 262, -35, -1776, -76,
	ftAnimLoop(0x6800, -184),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimThrown1_joint13[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimLoop(0x6800, -42),
};

/* Joint 14 */
u16 dFTNessAnimThrown1_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -141, 6, 998, 143, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimThrown1_joint16[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 24),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimThrown1_joint17[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2122, -28, -1513, -3, 1572, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), -1512, -2, 1581, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), -2079, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2081, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -2106, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2122, -16, -1513, 0, 1572, -8,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimThrown1_joint19[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 20 */
u16 dFTNessAnimThrown1_joint20[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 43, -1, 164, 47, 95, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -37, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 508, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 250, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 267, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 111, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -37, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 52, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 459, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 164, -47,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 95, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 86, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 127, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 127, 34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 55, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 45, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 43, -1, 164, 37, 95, 9,
	ftAnimLoop(0x6800, -160),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimThrown1_joint22[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -51, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 126, -82, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 24), -51,
	ftAnimLoop(0x6800, -26),
};

/* Joint 23 */
u16 dFTNessAnimThrown1_joint23[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 499, -14, 93, 0, -36, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -76, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 85, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 574, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 588, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 529, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -76, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -52, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 88, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 96, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 498, -30, 97, 0, -38, 13,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimThrown1_joint25[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimLoop(0x6800, -42),
};

/* Joint 26 */
u16 dFTNessAnimThrown1_joint26[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -34, 7, -164, 26, 95, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 80, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 28, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 39, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 9, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -204, -46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 88, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 227, 41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 13, -24, -258, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -505, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -166, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -212, 3, 259, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -57, 20, 140, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -421, 86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -204, 46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -49, 6, 117, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -44, 7, 104, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -35, 9, -164, 39, 95, -8,
	ftAnimLoop(0x6800, -196),
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTNessAnimThrown1_joint27[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -92, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -82, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 24), -92,
	ftAnimLoop(0x6800, -26),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
