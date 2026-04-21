/* AnimJoint data for relocData file 539 (FTMarioAnimDamageFlyTop) */
/* 656 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimDamageFlyTop_joint1[12];
extern u16 dFTMarioAnimDamageFlyTop_joint2[10];
extern u16 dFTMarioAnimDamageFlyTop_joint4[8];
extern u16 dFTMarioAnimDamageFlyTop_joint5[26];
extern u16 dFTMarioAnimDamageFlyTop_joint6[16];
extern u16 dFTMarioAnimDamageFlyTop_joint7[8];
extern u16 dFTMarioAnimDamageFlyTop_joint10[8];
extern u16 dFTMarioAnimDamageFlyTop_joint11[26];
extern u16 dFTMarioAnimDamageFlyTop_joint13[16];
extern u16 dFTMarioAnimDamageFlyTop_joint15[12];
extern u16 dFTMarioAnimDamageFlyTop_joint16[26];
extern u16 dFTMarioAnimDamageFlyTop_joint18[16];
extern u16 dFTMarioAnimDamageFlyTop_joint20[26];
extern u16 dFTMarioAnimDamageFlyTop_joint21[26];
extern u16 dFTMarioAnimDamageFlyTop_joint23[16];
extern u16 dFTMarioAnimDamageFlyTop_joint24[28];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimDamageFlyTop_joints[] = {
	(u32)dFTMarioAnimDamageFlyTop_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimDamageFlyTop_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimDamageFlyTop_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimDamageFlyTop_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimDamageFlyTop_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimDamageFlyTop_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimDamageFlyTop_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimDamageFlyTop_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimDamageFlyTop_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTMarioAnimDamageFlyTop_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimDamageFlyTop_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimDamageFlyTop_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimDamageFlyTop_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimDamageFlyTop_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimDamageFlyTop_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimDamageFlyTop_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimDamageFlyTop_joint1[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 450, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimDamageFlyTop_joint2[10] = {
	ftAnimSetVal(FT_ANIM_ROTY), 402,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ), 134, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 16), 3619,
	ftAnimLoop(0x6800, -18),
};

/* Joint 4 */
u16 dFTMarioAnimDamageFlyTop_joint4[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, 402, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 5 */
u16 dFTMarioAnimDamageFlyTop_joint5[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 919, 0, -151, -4, -647, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 920, 0, -155, 2, -648, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 919, 0, -151, 4, -647, 1,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimDamageFlyTop_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimLoop(0x6800, -30),
};

/* Joint 7 */
u16 dFTMarioAnimDamageFlyTop_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -625, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 10 */
u16 dFTMarioAnimDamageFlyTop_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 402, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 11 */
u16 dFTMarioAnimDamageFlyTop_joint11[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 573, 0, 517, 0, 574, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 573, 0, 517, 0, 574, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 573, 0, 517, 0, 574, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimDamageFlyTop_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -209, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -209, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 15 */
u16 dFTMarioAnimDamageFlyTop_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimDamageFlyTop_joint16[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 895, 0, -122, 3, -476, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 895, 0, -122, -1, -476, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -122, 0, -476, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 895,
	ftAnimLoop(0x6800, -50),
};

/* Joint 18 */
u16 dFTMarioAnimDamageFlyTop_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimDamageFlyTop_joint20[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2991, 0, 0, 0, 329, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 2991, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 329,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2991, 329,
	ftAnimLoop(0x6800, -50),
};

/* Joint 21 */
u16 dFTMarioAnimDamageFlyTop_joint21[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -328, 1, -210, -2, 188, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -328, 0, -210, 1, 188, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -328, 0, -210, 0, 188, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimDamageFlyTop_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimDamageFlyTop_joint24[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 192, 1, 84, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 192, 0, 84, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 192, 0, 84, 0,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
