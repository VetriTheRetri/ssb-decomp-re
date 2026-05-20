/* AnimJoint data for relocData file 684 (FTFoxAnimFallSpecial) */
/* 784 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimFallSpecial_joint1[8];
extern u16 dFTFoxAnimFallSpecial_joint2[14];
extern u16 dFTFoxAnimFallSpecial_joint4[14];
extern u16 dFTFoxAnimFallSpecial_joint5[26];
extern u16 dFTFoxAnimFallSpecial_joint7[20];
extern u16 dFTFoxAnimFallSpecial_joint8[16];
extern u16 dFTFoxAnimFallSpecial_joint10[12];
extern u16 dFTFoxAnimFallSpecial_joint11[26];
extern u16 dFTFoxAnimFallSpecial_joint13[20];
extern u16 dFTFoxAnimFallSpecial_joint15[12];
extern u16 dFTFoxAnimFallSpecial_joint16[26];
extern u16 dFTFoxAnimFallSpecial_joint18[16];
extern u16 dFTFoxAnimFallSpecial_joint20[26];
extern u16 dFTFoxAnimFallSpecial_joint21[26];
extern u16 dFTFoxAnimFallSpecial_joint23[16];
extern u16 dFTFoxAnimFallSpecial_joint24[26];
extern u16 dFTFoxAnimFallSpecial_joint25[18];
extern u16 dFTFoxAnimFallSpecial_joint26[18];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimFallSpecial_joints[] = {
	(AObjEvent32 *)dFTFoxAnimFallSpecial_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimFallSpecial_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimFallSpecial_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimFallSpecial_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimFallSpecial_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTFoxAnimFallSpecial_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimFallSpecial_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimFallSpecial_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimFallSpecial_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTFoxAnimFallSpecial_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimFallSpecial_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimFallSpecial_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimFallSpecial_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimFallSpecial_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimFallSpecial_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimFallSpecial_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimFallSpecial_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimFallSpecial_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimFallSpecial_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 240, -240,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 2 */
u16 dFTFoxAnimFallSpecial_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -714,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -750,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -714,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimFallSpecial_joint4[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 446,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 464,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 446,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimFallSpecial_joint5[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1083, -6, -1409, -8, -721, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1076, 9, -1417, 10, -709, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1083, 6, -1409, 8, -721, -11,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimFallSpecial_joint7[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -481, -36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -588, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -518, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -481, 36,
	ftAnimLoop(0x6800, -38),
};

/* Joint 8 */
u16 dFTFoxAnimFallSpecial_joint8[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 402,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 411,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 402,
	ftAnimLoop(0x6800, -30),
};

/* Joint 10 */
u16 dFTFoxAnimFallSpecial_joint10[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimFallSpecial_joint11[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2136, 6, 1419, 7, -714, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 2142, -9, 1426, -9, -703, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2136, -6, 1419, -7, -714, -11,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimFallSpecial_joint13[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -501, -35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -603, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -536, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -501, 35,
	ftAnimLoop(0x6800, -38),
};

/* Joint 15 */
u16 dFTFoxAnimFallSpecial_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimFallSpecial_joint16[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 2, -96, 0, -666, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -8, -3, -96, 0, -672, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -10, -2, -96, 0, -666, 6,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimFallSpecial_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 722, 13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 735, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 722, -13,
	ftAnimLoop(0x6800, -30),
};

/* Joint 20 */
u16 dFTFoxAnimFallSpecial_joint20[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1586, 0, 1542, 0, 1376, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1586, 0, 1542, 0, 1374, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1586, 0, 1542, 0, 1376, 1,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimFallSpecial_joint21[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1553, 0, 1533, 0, -2367, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1554, 1, 1533, 0, -2373, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1553, 0, 1533, 0, -2367, 5,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimFallSpecial_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 602, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 612, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 602, -9,
	ftAnimLoop(0x6800, -30),
};

/* Joint 24 */
u16 dFTFoxAnimFallSpecial_joint24[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1699, 0, -1620, 0, -1567, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1699, 0, -1620, 0, -1565, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1699, 0, -1620, 0, -1567, -1,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimFallSpecial_joint25[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 755, 16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -126, -96,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 545,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 755,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimFallSpecial_joint26[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 634,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 271,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 634,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
