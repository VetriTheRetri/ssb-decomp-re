/* AnimJoint data for relocData file 1132 (FTLinkAnimCrouchIdle) */
/* 1248 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimCrouchIdle_joint1[18];
extern u16 dFTLinkAnimCrouchIdle_joint2[12];
extern u16 dFTLinkAnimCrouchIdle_joint4[26];
extern u16 dFTLinkAnimCrouchIdle_joint5[66];
extern u16 dFTLinkAnimCrouchIdle_joint6[32];
extern u16 dFTLinkAnimCrouchIdle_joint9[28];
extern u16 dFTLinkAnimCrouchIdle_joint10[54];
extern u16 dFTLinkAnimCrouchIdle_joint11[24];
extern u16 dFTLinkAnimCrouchIdle_joint12[8];
extern u16 dFTLinkAnimCrouchIdle_joint13[8];
extern u16 dFTLinkAnimCrouchIdle_joint16[8];
extern u16 dFTLinkAnimCrouchIdle_joint17[8];
extern u16 dFTLinkAnimCrouchIdle_joint18[18];
extern u16 dFTLinkAnimCrouchIdle_joint20[20];
extern u16 dFTLinkAnimCrouchIdle_joint21[58];
extern u16 dFTLinkAnimCrouchIdle_joint23[24];
extern u16 dFTLinkAnimCrouchIdle_joint25[48];
extern u16 dFTLinkAnimCrouchIdle_joint26[40];
extern u16 dFTLinkAnimCrouchIdle_joint28[66];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimCrouchIdle_joints[] = {
	(u32)dFTLinkAnimCrouchIdle_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimCrouchIdle_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimCrouchIdle_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimCrouchIdle_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimCrouchIdle_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimCrouchIdle_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimCrouchIdle_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimCrouchIdle_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimCrouchIdle_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimCrouchIdle_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimCrouchIdle_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimCrouchIdle_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimCrouchIdle_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimCrouchIdle_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimCrouchIdle_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimCrouchIdle_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimCrouchIdle_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimCrouchIdle_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimCrouchIdle_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF0123, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimCrouchIdle_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 469,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 40), 436,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 40), 469,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 40), 436,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimCrouchIdle_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -107, 276, 0, 0, 0, 0,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimCrouchIdle_joint4[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 551, 423, 273,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 655, 398, 348,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 551, 423, 273,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 655, 398, 348,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -50),
};

/* Joint 5 */
u16 dFTLinkAnimCrouchIdle_joint5[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -938, 1, -1327, -5, 1218, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 71), -959, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 74), 1226, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 22), -1337, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1331, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 49), -1279, -5,
	ftAnimBlock(0, 48),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -956, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -940, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1285, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1321, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1224, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1219, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -938, 2, -1327, -5, 1218, -1,
	ftAnimLoop(0x6800, -128),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimCrouchIdle_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -359, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -276, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -282, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 53), -440, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -368, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -359, 8,
	ftAnimLoop(0x6800, -62),
};

/* Joint 9 */
u16 dFTLinkAnimCrouchIdle_joint9[28] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 36, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -76, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 53), -83, 178, -72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 36, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 27), -76, -44,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 53), -83, 178, -72,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimCrouchIdle_joint10[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 954, 0, 84, 0, 165, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 56), 210, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 57), 995, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 55), 149, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 145, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 84, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 207, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 165, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 992, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 21), 954, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 954, 0, 84, 0, 165, 0,
	ftAnimLoop(0x6800, -104),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimCrouchIdle_joint11[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -812, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 59), -791, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -793, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -812, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -812, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 12 */
u16 dFTLinkAnimCrouchIdle_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -14),
};

/* Joint 13 */
u16 dFTLinkAnimCrouchIdle_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTLinkAnimCrouchIdle_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2182, -376, -605,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -14),
};

/* Joint 17 */
u16 dFTLinkAnimCrouchIdle_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -14),
};

/* Joint 18 */
u16 dFTLinkAnimCrouchIdle_joint18[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -199,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -499, 128,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 40), -276,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 40), -199,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 40), -276,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimCrouchIdle_joint20[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -163, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 45), -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 35), -163, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 80), -163,
	ftAnimBlock0(0),
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimCrouchIdle_joint21[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -51, 0, -328, 0, -27, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 60), -69, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 65), -20, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 54), -400, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -396, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -328, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -67, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -51, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -21, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -27, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -51, 0, -328, 0, -27, 0,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimCrouchIdle_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1094, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 68), 1101, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1100, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1094, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1094, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 25 */
u16 dFTLinkAnimCrouchIdle_joint25[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 223, 0, -203, 0, -639, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 58), 190, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 79), -639, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 55), -146, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -150, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -203, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 192, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), 223, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 223, 0, -203, 0, -639, 0,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimCrouchIdle_joint26[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -283, 0, 272, 0, -901, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 79), -901, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 59), -312, 2, 246, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -310, 2, 248, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 19), -283, 0, 272, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -283, 0, 272, 0, -901, 0,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimCrouchIdle_joint28[66] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 839, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 73), 841, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 841, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 839, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 839, 0,
	ftAnimLoop(0x6800, -46),
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -356, 0, -73, 0, 150, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 79), -73, 0, 150, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 59), -331, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -333, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), -356, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -356, 0, -73, 0, 150, 0,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
