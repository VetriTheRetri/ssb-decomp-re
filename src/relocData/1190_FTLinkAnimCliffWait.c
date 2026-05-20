/* AnimJoint data for relocData file 1190 (FTLinkAnimCliffWait) */
/* 1040 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimCliffWait_joint1[14];
extern u16 dFTLinkAnimCliffWait_joint2[18];
extern u16 dFTLinkAnimCliffWait_joint3[20];
extern u16 dFTLinkAnimCliffWait_joint5[20];
extern u16 dFTLinkAnimCliffWait_joint6[56];
extern u16 dFTLinkAnimCliffWait_joint7[16];
extern u16 dFTLinkAnimCliffWait_joint10[38];
extern u16 dFTLinkAnimCliffWait_joint11[48];
extern u16 dFTLinkAnimCliffWait_joint12[32];
extern u16 dFTLinkAnimCliffWait_joint13[8];
extern u16 dFTLinkAnimCliffWait_joint14[8];
extern u16 dFTLinkAnimCliffWait_joint17[8];
extern u16 dFTLinkAnimCliffWait_joint18[14];
extern u16 dFTLinkAnimCliffWait_joint19[20];
extern u16 dFTLinkAnimCliffWait_joint21[8];
extern u16 dFTLinkAnimCliffWait_joint22[26];
extern u16 dFTLinkAnimCliffWait_joint24[16];
extern u16 dFTLinkAnimCliffWait_joint26[26];
extern u16 dFTLinkAnimCliffWait_joint27[26];
extern u16 dFTLinkAnimCliffWait_joint29[16];
extern u16 dFTLinkAnimCliffWait_joint30[22];

/* Joint pointer table (30 entries, 120 bytes) */
AObjEvent32 * dFTLinkAnimCliffWait_joints[] = {
	(AObjEvent32 *)dFTLinkAnimCliffWait_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimCliffWait_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimCliffWait_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTLinkAnimCliffWait_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffWait_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimCliffWait_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTLinkAnimCliffWait_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffWait_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimCliffWait_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimCliffWait_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimCliffWait_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTLinkAnimCliffWait_joint17, /* [14] joint 17 */
	NULL, /* [15] NULL */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffWait_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimCliffWait_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTLinkAnimCliffWait_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffWait_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTLinkAnimCliffWait_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffWait_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffWait_joint27, /* [26] joint 27 */
	(AObjEvent32 *)dFTLinkAnimCliffWait_joint29, /* [27] joint 29 */
	NULL, /* [28] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffWait_joint30, /* [29] joint 30 */
};

/* Joint 1 */
u16 dFTLinkAnimCliffWait_joint1[14] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -1850, -3, 0, 4,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 80), -1850, 0,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimCliffWait_joint2[18] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 929, 2, -214, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), 956, -216,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), 929, -214,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTLinkAnimCliffWait_joint3[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 120, 0, -608, 0, -157, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 245, -706, -287,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 120, -608, -157,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimCliffWait_joint5[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 59, 0, 20, 0, 227, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 62, -157, 206,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 59, 20, 227,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimCliffWait_joint6[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -170, 0, -1282, 0, -278, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 56), -412, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 57), -1400, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 54), -42, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -45, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), -169, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -278, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1393, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 21), -1282, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -170, 0, -1282, 0, -278, 0,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimCliffWait_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -360, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 79), -360, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -360, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 10 */
u16 dFTLinkAnimCliffWait_joint10[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, 25, 542, 42, 255, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 176, 4, 580, 2, 247, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 243, 7, 569, -1, 290, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 456, 0, 533, 0, 409, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 191, 542, 255,
	ftAnimLoop(0x6800, -74),
};

/* Joint 11 */
u16 dFTLinkAnimCliffWait_joint11[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 441, -1, 82, -1, 320, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 63), 79, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 79), 441, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 60), 244, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 252, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 320, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 78, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), 82, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 441, 0, 82, 0, 320, 0,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimCliffWait_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -244, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 40), -234, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -234, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), -252, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -249, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -245, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -244, 0,
	ftAnimLoop(0x6800, -62),
};

/* Joint 13 */
u16 dFTLinkAnimCliffWait_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -14),
};

/* Joint 14 */
u16 dFTLinkAnimCliffWait_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -14),
};

/* Joint 17 */
u16 dFTLinkAnimCliffWait_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -14),
};

/* Joint 18 */
u16 dFTLinkAnimCliffWait_joint18[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -85, 0, 217, 3, 30, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 80), -85, 217, 30,
	ftAnimLoop(0x6800, -26),
};

/* Joint 19 */
u16 dFTLinkAnimCliffWait_joint19[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -133, 0, 245, 6, 0, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), -186, 473, -86,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), -133, 245, 0,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimCliffWait_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -174,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -14),
};

/* Joint 22 */
u16 dFTLinkAnimCliffWait_joint22[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 74, -1, -31, 1, -467, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 79), 74, 0, -31, 0, -467, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 74, 0, -31, 0, -467, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimCliffWait_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 884, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 79), 884, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 884, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 26 */
u16 dFTLinkAnimCliffWait_joint26[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 737, -1, 38, 0, 13, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 79), 737, 0, 38, 0, 13, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 737, 0, 38, 0, 13, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimCliffWait_joint27[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 231, 0, -131, 0, -59, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 79), 231, 0, -131, 0, -59, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 231, 0, -131, 0, -59, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimCliffWait_joint29[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 316, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 79), 316, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 316, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 30 */
u16 dFTLinkAnimCliffWait_joint30[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -645, 2, 354, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 3114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 79), -645, 0, 354, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -645, 0, 354, 0,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};
