/* AnimJoint data for relocData file 1187 (FTLinkAnimThrown1) */
/* 944 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimThrown1_joint2[8];
extern u16 dFTLinkAnimThrown1_joint3[8];
extern u16 dFTLinkAnimThrown1_joint5[12];
extern u16 dFTLinkAnimThrown1_joint6[72];
extern u16 dFTLinkAnimThrown1_joint7[24];
extern u16 dFTLinkAnimThrown1_joint10[10];
extern u16 dFTLinkAnimThrown1_joint11[64];
extern u16 dFTLinkAnimThrown1_joint12[24];
extern u16 dFTLinkAnimThrown1_joint13[10];
extern u16 dFTLinkAnimThrown1_joint14[8];
extern u16 dFTLinkAnimThrown1_joint17[8];
extern u16 dFTLinkAnimThrown1_joint18[8];
extern u16 dFTLinkAnimThrown1_joint19[8];
extern u16 dFTLinkAnimThrown1_joint21[10];
extern u16 dFTLinkAnimThrown1_joint22[24];
extern u16 dFTLinkAnimThrown1_joint24[14];
extern u16 dFTLinkAnimThrown1_joint26[26];
extern u16 dFTLinkAnimThrown1_joint27[26];
extern u16 dFTLinkAnimThrown1_joint29[16];
extern u16 dFTLinkAnimThrown1_joint30[30];

/* Joint pointer table (30 entries, 120 bytes) */
u32 dFTLinkAnimThrown1_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTLinkAnimThrown1_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimThrown1_joint3, /* [2] joint 3 */
	(u32)dFTLinkAnimThrown1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTLinkAnimThrown1_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimThrown1_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimThrown1_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTLinkAnimThrown1_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimThrown1_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimThrown1_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimThrown1_joint14, /* [13] joint 14 */
	(u32)dFTLinkAnimThrown1_joint17, /* [14] joint 17 */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	(u32)dFTLinkAnimThrown1_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimThrown1_joint19, /* [18] joint 19 */
	(u32)dFTLinkAnimThrown1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTLinkAnimThrown1_joint22, /* [21] joint 22 */
	(u32)dFTLinkAnimThrown1_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTLinkAnimThrown1_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTLinkAnimThrown1_joint27, /* [26] joint 27 */
	(u32)dFTLinkAnimThrown1_joint29, /* [27] joint 29 */
	0x00000000, /* [28] NULL */
	(u32)dFTLinkAnimThrown1_joint30, /* [29] joint 30 */
};

/* 4-byte alignment padding */
static u32 dFTLinkAnimThrown1_pad[1] = { 0 };

/* Joint 2 */
u16 dFTLinkAnimThrown1_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 576, -35,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 3 */
u16 dFTLinkAnimThrown1_joint3[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 8, -10, -5,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 5 */
u16 dFTLinkAnimThrown1_joint5[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 194, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -22),
};

/* Joint 6 */
u16 dFTLinkAnimThrown1_joint6[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -762, -54, -1045, 67, 2892, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -656, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -816, 230, 2937, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -300, -102, 2425, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1021, -349, 3140, 344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -999, -13, -588, 4, 3113, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -752, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1048, -328, 3168, 336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1656, -633, 3785, 639,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2316, -356, -641, 94, 4447, 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2370, -54, -563, 77, 4500, 53,
	ftAnimLoop(0x6800, -140),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimThrown1_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -440, -69,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -801, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -700, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -542, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -440, 101,
	ftAnimLoop(0x6800, -46),
};

/* Joint 10 */
u16 dFTLinkAnimThrown1_joint10[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	_FT_ANIM_CMD(11, 0, 1), 10,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -18),
};

/* Joint 11 */
u16 dFTLinkAnimThrown1_joint11[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2400, -113, 549, 79, -183, -155,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 671, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2896, -509, -758, -550,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3532, -346, -1441, -389,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1597, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3590, -111, 608, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1009, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3755, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4033, -125, -1831, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4007, 12, -1794, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4008, -1, 1058, 49, -1792, 1,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimThrown1_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -727, 20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -599, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -550, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -736, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 8,
	ftAnimLoop(0x6800, -46),
};

/* Joint 13 */
u16 dFTLinkAnimThrown1_joint13[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	_FT_ANIM_CMD(11, 0, 1), 10,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -18),
};

/* Joint 14 */
u16 dFTLinkAnimThrown1_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 17 */
u16 dFTLinkAnimThrown1_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 18 */
u16 dFTLinkAnimThrown1_joint18[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 10, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 19 */
u16 dFTLinkAnimThrown1_joint19[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 189, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 21 */
u16 dFTLinkAnimThrown1_joint21[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 10,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -18),
};

/* Joint 22 */
u16 dFTLinkAnimThrown1_joint22[24] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -66, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -214, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -214, 0, -66, 0, -59, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -214, 0, -66, 0, -59, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 24 */
u16 dFTLinkAnimThrown1_joint24[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 156,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 156, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 156,
	ftAnimLoop(0x6800, -26),
};

/* Joint 26 */
u16 dFTLinkAnimThrown1_joint26[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 471, 0, 58, 0, 222, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 471, 0, 58, 0, 222, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 471, 0, 58, 0, 222, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimThrown1_joint27[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 158, 0, 108, 0, -77, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 158, 0, 108, 0, -77, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 158, 0, 108, 0, -77, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimThrown1_joint29[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 192, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 192, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 30 */
u16 dFTLinkAnimThrown1_joint30[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 1770,
	ftAnimSetValRate(FT_ANIM_ROTX), 875, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 2057,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 875, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 7), 1770,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 875, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 1770,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
