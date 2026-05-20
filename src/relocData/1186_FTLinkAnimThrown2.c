/* AnimJoint data for relocData file 1186 (FTLinkAnimThrown2) */
/* 928 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimThrown2_joint2[8];
extern u16 dFTLinkAnimThrown2_joint3[12];
extern u16 dFTLinkAnimThrown2_joint5[12];
extern u16 dFTLinkAnimThrown2_joint6[26];
extern u16 dFTLinkAnimThrown2_joint7[28];
extern u16 dFTLinkAnimThrown2_joint10[8];
extern u16 dFTLinkAnimThrown2_joint11[26];
extern u16 dFTLinkAnimThrown2_joint12[16];
extern u16 dFTLinkAnimThrown2_joint13[8];
extern u16 dFTLinkAnimThrown2_joint14[8];
extern u16 dFTLinkAnimThrown2_joint17[8];
extern u16 dFTLinkAnimThrown2_joint18[8];
extern u16 dFTLinkAnimThrown2_joint19[8];
extern u16 dFTLinkAnimThrown2_joint21[8];
extern u16 dFTLinkAnimThrown2_joint22[40];
extern u16 dFTLinkAnimThrown2_joint24[16];
extern u16 dFTLinkAnimThrown2_joint26[36];
extern u16 dFTLinkAnimThrown2_joint27[50];
extern u16 dFTLinkAnimThrown2_joint29[32];
extern u16 dFTLinkAnimThrown2_joint30[44];

/* Joint pointer table (30 entries, 120 bytes) */
AObjEvent32 * dFTLinkAnimThrown2_joints[] = {
	NULL, /* [0] NULL */
	(AObjEvent32 *)dFTLinkAnimThrown2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimThrown2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTLinkAnimThrown2_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTLinkAnimThrown2_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimThrown2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTLinkAnimThrown2_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTLinkAnimThrown2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimThrown2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimThrown2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimThrown2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTLinkAnimThrown2_joint17, /* [14] joint 17 */
	NULL, /* [15] NULL */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTLinkAnimThrown2_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimThrown2_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTLinkAnimThrown2_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTLinkAnimThrown2_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTLinkAnimThrown2_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTLinkAnimThrown2_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTLinkAnimThrown2_joint27, /* [26] joint 27 */
	(AObjEvent32 *)dFTLinkAnimThrown2_joint29, /* [27] joint 29 */
	NULL, /* [28] NULL */
	(AObjEvent32 *)dFTLinkAnimThrown2_joint30, /* [29] joint 30 */
};

/* 4-byte alignment padding */
static u32 dFTLinkAnimThrown2_pad[1] = { 0 };

/* Joint 2 */
u16 dFTLinkAnimThrown2_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -55, -314,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 3 */
u16 dFTLinkAnimThrown2_joint3[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 8, -10, -5, 0, 0, 56,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimThrown2_joint5[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 476, 4, -4,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -22),
};

/* Joint 6 */
u16 dFTLinkAnimThrown2_joint6[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1034, -7, -1559, 86, -1607, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1032, 1, -1548, -25, -1617, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1034, 1, -1559, -10, -1607, 9,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimThrown2_joint7[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -204, 204,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -84, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -204, -26,
	ftAnimLoop(0x6800, -54),
};

/* Joint 10 */
u16 dFTLinkAnimThrown2_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 11 */
u16 dFTLinkAnimThrown2_joint11[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 447, -12, 73, 22, 61, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 445, 2, 76, -5, 55, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 447, 1, 73, -2, 61, 6,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimThrown2_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -374, 71,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -365, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -374, -9,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTLinkAnimThrown2_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 14 */
u16 dFTLinkAnimThrown2_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 17 */
u16 dFTLinkAnimThrown2_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 18 */
u16 dFTLinkAnimThrown2_joint18[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 19 */
u16 dFTLinkAnimThrown2_joint19[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -296, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 21 */
u16 dFTLinkAnimThrown2_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 22 */
u16 dFTLinkAnimThrown2_joint22[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -346, -2, -163, -39, 114, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -49, 85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -193, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -425, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -368, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -346, 11, 52, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -346, 0, -163, 29, 114, 61,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimThrown2_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 217, 102,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 296, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 217, -78,
	ftAnimLoop(0x6800, -30),
};

/* Joint 26 */
u16 dFTLinkAnimThrown2_joint26[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 399, 117, -363, 108, -4, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 489, -97, -42, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -18, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -132, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -285, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 399, -90, -363, -77, -4, 37,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimThrown2_joint27[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 227, -98, 164, 3, -342, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 96, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 169, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -200, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -12, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 82, 26, -230, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 149, 72, -343, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 227, 77, 164, -4, -342, 1,
	ftAnimLoop(0x6800, -96),
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimThrown2_joint29[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 366, 149,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 570, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 459, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 343, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 472, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 485, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 366, -118,
	ftAnimLoop(0x6800, -62),
};

/* Joint 30 */
u16 dFTLinkAnimThrown2_joint30[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 1058, -166, 1870, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 1648,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1870, 0, 1648, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 889, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1034, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1021, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 876, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 920, 91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 1058, 138,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1870, 1648,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};
