/* AnimJoint data for relocData file 514 (FTMarioAnimFallAerial) */
/* 704 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimFallAerial_joint4[18];
extern u16 dFTMarioAnimFallAerial_joint5[40];
extern u16 dFTMarioAnimFallAerial_joint6[16];
extern u16 dFTMarioAnimFallAerial_joint7[8];
extern u16 dFTMarioAnimFallAerial_joint10[18];
extern u16 dFTMarioAnimFallAerial_joint11[26];
extern u16 dFTMarioAnimFallAerial_joint12[16];
extern u16 dFTMarioAnimFallAerial_joint13[8];
extern u16 dFTMarioAnimFallAerial_joint15[12];
extern u16 dFTMarioAnimFallAerial_joint16[26];
extern u16 dFTMarioAnimFallAerial_joint18[16];
extern u16 dFTMarioAnimFallAerial_joint20[26];
extern u16 dFTMarioAnimFallAerial_joint21[26];
extern u16 dFTMarioAnimFallAerial_joint23[16];
extern u16 dFTMarioAnimFallAerial_joint24[32];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimFallAerial_joints[] = {
	0x00000000, /* [0] NULL */
	0x00000000, /* [1] NULL */
	(u32)dFTMarioAnimFallAerial_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimFallAerial_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimFallAerial_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimFallAerial_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimFallAerial_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimFallAerial_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimFallAerial_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimFallAerial_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimFallAerial_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimFallAerial_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimFallAerial_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimFallAerial_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimFallAerial_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimFallAerial_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimFallAerial_joint24, /* [23] joint 24 */
};

/* Joint 4 */
u16 dFTMarioAnimFallAerial_joint4[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 134, 10, 0, 4, 0, -4,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -14, -92,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 134, 0, 0,
	ftAnimLoop(0x6800, -34),
};

/* Joint 5 */
u16 dFTMarioAnimFallAerial_joint5[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1361, 41, -1133, 19, 1520, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1130, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -1246, -55, 1422, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1303, -49, 1469, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1345, -29, 1506, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1361, -16, -1133, -3, 1520, 14,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimFallAerial_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -381, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, -2,
	ftAnimLoop(0x6800, -30),
};

/* Joint 7 */
u16 dFTMarioAnimFallAerial_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -625, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -14),
};

/* Joint 10 */
u16 dFTMarioAnimFallAerial_joint10[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 127, 6, 0, -12, 0, 5,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 127, 0, 0,
	ftAnimLoop(0x6800, -34),
};

/* Joint 11 */
u16 dFTMarioAnimFallAerial_joint11[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -201, -51, 462, 0, -78, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -206, 9, 462, 0, -83, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -201, 5, 462, 0, -78, 4,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimFallAerial_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, 13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -383, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, -1,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTMarioAnimFallAerial_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -14),
};

/* Joint 15 */
u16 dFTMarioAnimFallAerial_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimFallAerial_joint16[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 109, 2, -3, 3, -247, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 110, 0, -2, 0, -249, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 109, 0, -3, 0, -247, 2,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimFallAerial_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 229, 18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 232, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 229, -2,
	ftAnimLoop(0x6800, -30),
};

/* Joint 20 */
u16 dFTMarioAnimFallAerial_joint20[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -260, -5, -33, 1, 436, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -260, 0, -33, 0, 437, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -260, 0, -33, 0, 436, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimFallAerial_joint21[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 65, -2, 162, -4, -346, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 65, 0, 162, 0, -345, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 65, 0, 162, 0, -346, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimFallAerial_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 716, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 716, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 24 */
u16 dFTMarioAnimFallAerial_joint24[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 57, 5, -134, -4, 164, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 58, -1, -134, 0, 165, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 57, 0, -134, 0, 164, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
