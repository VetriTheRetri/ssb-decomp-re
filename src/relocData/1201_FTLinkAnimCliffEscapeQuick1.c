/* AnimJoint data for relocData file 1201 (FTLinkAnimCliffEscapeQuick1) */
/* 1248 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimCliffEscapeQuick1_joint1[24];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint2[22];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint3[32];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint5[28];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint6[34];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint7[24];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint10[26];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint11[24];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint12[32];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint13[26];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint14[20];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint17[26];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint18[26];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint19[24];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint21[26];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint22[30];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint24[16];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint26[24];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint27[34];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint29[24];
extern u16 dFTLinkAnimCliffEscapeQuick1_joint30[42];

/* Joint pointer table (30 entries, 120 bytes) */
AObjEvent32 * dFTLinkAnimCliffEscapeQuick1_joints[] = {
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick1_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick1_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick1_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick1_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick1_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick1_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick1_joint17, /* [14] joint 17 */
	NULL, /* [15] NULL */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick1_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick1_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick1_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick1_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick1_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick1_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick1_joint27, /* [26] joint 27 */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick1_joint29, /* [27] joint 29 */
	NULL, /* [28] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffEscapeQuick1_joint30, /* [29] joint 30 */
};

/* Joint 1 */
u16 dFTLinkAnimCliffEscapeQuick1_joint1[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 17), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 10,
	ftAnimSetValRate(FT_ANIM_TRAY), -532, 1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), -532, -2,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 608,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 0, 453,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimCliffEscapeQuick1_joint2[22] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 480, -427, -600, -185,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 395, 117, -447, 582,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 597, 310, -17, 321,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTLinkAnimCliffEscapeQuick1_joint3[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -23, -48, 56, 0, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -117, 0, -48, 0, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 178, 4, -6,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), -42,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 495, 184, -38, 9,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimCliffEscapeQuick1_joint5[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 446, 45, 0, -2, 0, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 513, 0, 0, 0, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -69,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -4, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 483, -127,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimCliffEscapeQuick1_joint6[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1598, 1, -1621, -44, -2231, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 1618, -1, -1603, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -2135, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1979, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1937, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1619, 0, -1602, 1, -2192, -255,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimCliffEscapeQuick1_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -539, -23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -790, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -914, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -427, 457,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 427,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimCliffEscapeQuick1_joint10[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 690, 49, -126, -14, -32, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 690, -28, -126, 0, -32, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 119, -33, -107, 6, 319, 5,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimCliffEscapeQuick1_joint11[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -457, -15, -20, -61, -968, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -422, 11, 163, 14, -823, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -408, 14, 173, 10, -859, -35,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimCliffEscapeQuick1_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -257, 80,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -176, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -266, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -336, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -573, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -747, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -728, 18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimCliffEscapeQuick1_joint13[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -261, -26, 49, 25, 311, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -261, 14, 49, -7, 311, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 62, 8, -130, -8, 158, -10,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTLinkAnimCliffEscapeQuick1_joint14[20] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 804, 3, -804, 0, 804, -3,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 937, -804, 670,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimCliffEscapeQuick1_joint17[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1569, -12, -22, 51, -1296, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1569, 2, -22, 46, -1296, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1605, 4, 588, -17, -1015, 31,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimCliffEscapeQuick1_joint18[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 8, 0, -21, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0, -2, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), 0, 0, -83, -5, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTLinkAnimCliffEscapeQuick1_joint19[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 13, 0, -24, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0, -5, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, -199, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimCliffEscapeQuick1_joint21[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -281, 0, 0, 0, 0, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 7, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -202, -8, 0, 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTLinkAnimCliffEscapeQuick1_joint22[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1416, -3, -1452, 13, -2685, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1343, -88, -1438, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -2786, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2656, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1452, -108, -1369, 69, -2441, 215,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimCliffEscapeQuick1_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 788, 31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1048, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1014, -33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimCliffEscapeQuick1_joint26[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 364, 12, -126, -16, -399, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 316, 56, -90, 13, -318, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 384, 68, -77, 13, -289, 28,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimCliffEscapeQuick1_joint27[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -146, 1, 17, 3, -1044, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -138, 68, 43, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1117, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1129, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1008, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -82, 55, 88, 45, -866, 142,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimCliffEscapeQuick1_joint29[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 780, 33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1056, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1103, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 850, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 885, 35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 30 */
u16 dFTLinkAnimCliffEscapeQuick1_joint30[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -351, 15, 156, 8, -412, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 156, -36, -412, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -288, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -89, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -261, -74, 141, -15, -345, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -237, 24, 125, -15, -286, 58,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
