/* AnimJoint data for relocData file 657 (FTFoxAnimFallAerial) */
/* 864 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimFallAerial_joint1[12];
extern u16 dFTFoxAnimFallAerial_joint2[8];
extern u16 dFTFoxAnimFallAerial_joint4[36];
extern u16 dFTFoxAnimFallAerial_joint5[26];
extern u16 dFTFoxAnimFallAerial_joint7[8];
extern u16 dFTFoxAnimFallAerial_joint8[40];
extern u16 dFTFoxAnimFallAerial_joint10[12];
extern u16 dFTFoxAnimFallAerial_joint11[32];
extern u16 dFTFoxAnimFallAerial_joint13[16];
extern u16 dFTFoxAnimFallAerial_joint15[12];
extern u16 dFTFoxAnimFallAerial_joint16[26];
extern u16 dFTFoxAnimFallAerial_joint18[16];
extern u16 dFTFoxAnimFallAerial_joint20[26];
extern u16 dFTFoxAnimFallAerial_joint21[26];
extern u16 dFTFoxAnimFallAerial_joint23[16];
extern u16 dFTFoxAnimFallAerial_joint24[36];
extern u16 dFTFoxAnimFallAerial_joint25[16];
extern u16 dFTFoxAnimFallAerial_joint26[16];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimFallAerial_joints[] = {
	(u32)dFTFoxAnimFallAerial_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimFallAerial_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimFallAerial_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimFallAerial_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimFallAerial_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTFoxAnimFallAerial_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimFallAerial_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimFallAerial_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimFallAerial_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTFoxAnimFallAerial_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimFallAerial_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimFallAerial_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimFallAerial_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimFallAerial_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimFallAerial_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimFallAerial_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimFallAerial_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimFallAerial_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimFallAerial_joint1[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 960, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimFallAerial_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 4 */
u16 dFTFoxAnimFallAerial_joint4[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 3, 0, -266, -2, 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2, 0, -280, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1, 0, -269, 2, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -268, 0,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimFallAerial_joint5[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1328, -20, -1326, -16, 1146, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1348, 24, -1319, -3, 1177, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1328, 19, -1326, -6, 1146, -30,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimFallAerial_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 8 */
u16 dFTFoxAnimFallAerial_joint8[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 178, 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 179, 0, 268, 3, -2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 177, 0, 284, 0, -2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 179, 0, 267, -3, -4, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 178, 268, 0,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimFallAerial_joint10[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimFallAerial_joint11[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2849, 16, 517, -11, -16, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -2854, 7, -29, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 477, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 501, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2849, 5, 517, 15, -16, 13,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimFallAerial_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 15 */
u16 dFTFoxAnimFallAerial_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimFallAerial_joint16[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -5, 0, 18, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0, -11, 6, 21, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, -5, 6, 18, -2,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimFallAerial_joint18[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 5,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTFoxAnimFallAerial_joint20[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -16, 13, -64, 9, 610, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1, -20, -47, -18, 614, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -16, -18, -64, -17, 610, -4,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimFallAerial_joint21[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1600, 0, 1603, 0, 1116, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1601, 0, 1603, 0, 1123, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1600, 0, 1603, 0, 1116, -6,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimFallAerial_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 626, -21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 610, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 626, 15,
	ftAnimLoop(0x6800, -30),
};

/* Joint 24 */
u16 dFTFoxAnimFallAerial_joint24[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, -4, -3092, 2, -91, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -16, 1, -3096, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -70, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -106, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -102, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -14, 2, -3092, 3, -91, 10,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimFallAerial_joint25[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -126, -96,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 218,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 26 */
u16 dFTFoxAnimFallAerial_joint26[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 402,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -63,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 402,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
	0x0000, 0x0000,
};
