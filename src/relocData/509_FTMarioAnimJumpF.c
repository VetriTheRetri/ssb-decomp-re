/* AnimJoint data for relocData file 509 (FTMarioAnimJumpF) */
/* 1088 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimJumpF_joint2[8];
extern u16 dFTMarioAnimJumpF_joint4[22];
extern u16 dFTMarioAnimJumpF_joint5[62];
extern u16 dFTMarioAnimJumpF_joint6[14];
extern u16 dFTMarioAnimJumpF_joint7[10];
extern u16 dFTMarioAnimJumpF_joint8[18];
extern u16 dFTMarioAnimJumpF_joint10[8];
extern u16 dFTMarioAnimJumpF_joint11[96];
extern u16 dFTMarioAnimJumpF_joint12[30];
extern u16 dFTMarioAnimJumpF_joint13[8];
extern u16 dFTMarioAnimJumpF_joint15[10];
extern u16 dFTMarioAnimJumpF_joint16[34];
extern u16 dFTMarioAnimJumpF_joint18[8];
extern u16 dFTMarioAnimJumpF_joint20[34];
extern u16 dFTMarioAnimJumpF_joint21[54];
extern u16 dFTMarioAnimJumpF_joint23[24];
extern u16 dFTMarioAnimJumpF_joint24[56];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimJumpF_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTMarioAnimJumpF_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimJumpF_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimJumpF_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimJumpF_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimJumpF_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimJumpF_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimJumpF_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimJumpF_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimJumpF_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimJumpF_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimJumpF_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimJumpF_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimJumpF_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimJumpF_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimJumpF_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimJumpF_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimJumpF_joint24, /* [23] joint 24 */
};

/* Joint 2 */
u16 dFTMarioAnimJumpF_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimJumpF_joint4[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, -373, 241,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -14, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -178, 6, -373, 9, 241, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 89, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimJumpF_joint5[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -740, 0, -1017, 0, 265, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 298, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 36), -928, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 22), -714, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -688, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 368, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 302, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -94, -37,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -922, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -918, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -132, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 364, -3, -915, 3, -125, 6,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimJumpF_joint6[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 39), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimJumpF_joint7[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -115, -132, 190,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), -625, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimJumpF_joint8[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -77, 361, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -77, 5, 361, -9, -175, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 127, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimJumpF_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimJumpF_joint11[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 454, 0, 369, 0, 268, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 256, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 244, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 22), 379, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 396, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 691, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 243, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 264, 44,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 214, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 207, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 237, 141, 325, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 697, 185, 843, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 861, 222, 698, 21, 1026, 241,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 696, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1143, 184, 1326, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1231, 53, 1426, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1250, 15, 1453, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1261, 10, 690, -5, 1467, 13,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimJumpF_joint12[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -119, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimJumpF_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimJumpF_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimJumpF_joint16[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 59, 0, -37, 0, 255, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), 74, 0, 3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), 31, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -98, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 74, 0, 3, 0, -101, -2,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimJumpF_joint18[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimJumpF_joint20[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -147, 0, -36, 0, 461, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), -209, 0, -45, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 438, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 443, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 553, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -209, 0, -45, 0, 556, 2,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimJumpF_joint21[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 179, 0, 353, 0, -631, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 74, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 32), 237, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -604, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -588, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -237, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 58, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 22, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 230, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 205, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 22, 0, 204, 0, -233, 3,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimJumpF_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 886, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), 975, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 983, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 934, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimJumpF_joint24[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -278, 0, -8, 0, 43, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 32), -120, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), -144, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 27), -70, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -36, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 147, 2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -135, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -182, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -153, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -169, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 148, 1, -170, -1, -183, 0,
	ftAnimEnd(),
};
