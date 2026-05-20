/* AnimJoint data for relocData file 541 (FTMarioAnimFallSpecial) */
/* 736 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimFallSpecial_joint1[14];
extern u16 dFTMarioAnimFallSpecial_joint2[16];
extern u16 dFTMarioAnimFallSpecial_joint4[18];
extern u16 dFTMarioAnimFallSpecial_joint5[24];
extern u16 dFTMarioAnimFallSpecial_joint10[12];
extern u16 dFTMarioAnimFallSpecial_joint11[26];
extern u16 dFTMarioAnimFallSpecial_joint12[20];
extern u16 dFTMarioAnimFallSpecial_joint13[26];
extern u16 dFTMarioAnimFallSpecial_joint15[14];
extern u16 dFTMarioAnimFallSpecial_joint16[26];
extern u16 dFTMarioAnimFallSpecial_joint18[20];
extern u16 dFTMarioAnimFallSpecial_joint20[26];
extern u16 dFTMarioAnimFallSpecial_joint21[26];
extern u16 dFTMarioAnimFallSpecial_joint23[20];
extern u16 dFTMarioAnimFallSpecial_joint24[32];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTMarioAnimFallSpecial_joints[] = {
	(AObjEvent32 *)dFTMarioAnimFallSpecial_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimFallSpecial_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimFallSpecial_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTMarioAnimFallSpecial_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTMarioAnimFallSpecial_joint10, /* [5] joint 10 */
	NULL, /* [6] NULL */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTMarioAnimFallSpecial_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTMarioAnimFallSpecial_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimFallSpecial_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimFallSpecial_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTMarioAnimFallSpecial_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTMarioAnimFallSpecial_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTMarioAnimFallSpecial_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTMarioAnimFallSpecial_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTMarioAnimFallSpecial_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTMarioAnimFallSpecial_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimFallSpecial_joint1[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -125,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 6), -134,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 2 */
u16 dFTMarioAnimFallSpecial_joint2[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -698, 87, 65,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -683, 163, 68,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -698, 87, 65,
	ftAnimLoop(0x6800, -30),
};

/* Joint 4 */
u16 dFTMarioAnimFallSpecial_joint4[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 536, 0, 0, 20, 115, -24,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 536, 0, 0, 20, 115, -24,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimFallSpecial_joint5[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -31, 0, -26, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), -1262,
	ftAnimSetValAfterT(FT_ANIM_ROTY, 6), -1262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -31, 0, -26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -31, 0, -26, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 10 */
u16 dFTMarioAnimFallSpecial_joint10[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimFallSpecial_joint11[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1447, 2, 309, -1, -1419, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1444, 0, 307, 0, -1414, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1447, -2, 309, 1, -1419, -4,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimFallSpecial_joint12[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimLoop(0x6800, -38),
};

/* Joint 13 */
u16 dFTMarioAnimFallSpecial_joint13[26] = {
	ftAnimSetValAfter(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 1697,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetValAfterT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), 1697,
	ftAnimSetValT(FT_ANIM_ROTX, 4), 1697,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 0,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimFallSpecial_joint15[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1608, -804, 0,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimFallSpecial_joint16[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 112, 0, -94, 0, -390, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 112, 0, -94, 0, -390, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 112, 0, -94, 0, -390, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimFallSpecial_joint18[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 510, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 510, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 510, 0,
	ftAnimLoop(0x6800, -38),
};

/* Joint 20 */
u16 dFTMarioAnimFallSpecial_joint20[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -218, 1, -93, -4, 13, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -185, 6, -155, -9, -76, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -181, 4, -161, -5, -85, -8,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimFallSpecial_joint21[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -249, 0, 12, 0, -829, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 12, 0, -829, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -249, 0, 12, 0, -829, 0,
	ftAnimLoop(0x6800, -50),
};

/* Joint 23 */
u16 dFTMarioAnimFallSpecial_joint23[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 679, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 679, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 679, 0,
	ftAnimLoop(0x6800, -38),
};

/* Joint 24 */
u16 dFTMarioAnimFallSpecial_joint24[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 96, 0, 250, 0, 100, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 96, 0, 250, 0, 100, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 96, 0, 250, 0, 100, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
