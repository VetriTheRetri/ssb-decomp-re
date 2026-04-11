/* AnimJoint data for relocData file 1131 (FTLinkAnimCrouch) */
/* 784 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimCrouch_joint1[10];
extern u16 dFTLinkAnimCrouch_joint2[10];
extern u16 dFTLinkAnimCrouch_joint4[14];
extern u16 dFTLinkAnimCrouch_joint5[24];
extern u16 dFTLinkAnimCrouch_joint6[16];
extern u16 dFTLinkAnimCrouch_joint9[10];
extern u16 dFTLinkAnimCrouch_joint10[30];
extern u16 dFTLinkAnimCrouch_joint11[16];
extern u16 dFTLinkAnimCrouch_joint12[8];
extern u16 dFTLinkAnimCrouch_joint13[8];
extern u16 dFTLinkAnimCrouch_joint16[10];
extern u16 dFTLinkAnimCrouch_joint17[8];
extern u16 dFTLinkAnimCrouch_joint18[10];
extern u16 dFTLinkAnimCrouch_joint20[14];
extern u16 dFTLinkAnimCrouch_joint21[24];
extern u16 dFTLinkAnimCrouch_joint23[16];
extern u16 dFTLinkAnimCrouch_joint25[24];
extern u16 dFTLinkAnimCrouch_joint26[38];
extern u16 dFTLinkAnimCrouch_joint28[44];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimCrouch_joints[] = {
	(u32)dFTLinkAnimCrouch_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimCrouch_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimCrouch_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimCrouch_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimCrouch_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimCrouch_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimCrouch_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimCrouch_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimCrouch_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimCrouch_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimCrouch_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimCrouch_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimCrouch_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimCrouch_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimCrouch_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimCrouch_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimCrouch_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimCrouch_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimCrouch_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF00B6, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimCrouch_joint1[10] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 901,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 469,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimCrouch_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -107, 276, 0, 0, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimCrouch_joint4[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 551, 423, 273,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimCrouch_joint5[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1328, 34, -1281, -2, 1522, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1042, 129, -1311, -17, 1279, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -938, 104, -1327, -16, 1218, -60,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimCrouch_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -396, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -359, 36,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimCrouch_joint9[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -76, 36, -44,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimCrouch_joint10[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 416, 40, 123, -14, -50, 82,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 53, 7, 181, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 600, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 829, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 954, 125, 84, 30, 165, -16,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimCrouch_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -101,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -840, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -812, 27,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimCrouch_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimCrouch_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimCrouch_joint16[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 2182, -376, -605,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimCrouch_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimCrouch_joint18[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -199, -499, 128,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimCrouch_joint20[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 256, -40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -163,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimCrouch_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, 67, -244, -47, 108, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -44, 14, -327, -3, -83, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -51, -7, -328, -1, -27, 55,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimCrouch_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 253,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1027, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1094, 67,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimCrouch_joint25[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, -9, -161, -2, -34, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 248, -33, -193, -13, -551, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 223, -25, -203, -9, -639, -88,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimCrouch_joint26[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -78, 269, 57, -125, -135,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -17, -203,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 317, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -260, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -564, -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -215, -132, -824, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -283, -68, 272, -44, -901, -77,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimCrouch_joint28[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, 153,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 847, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 839, -7,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFE55, 0x0002, 0xFFB6, 0x0001, 0xFFBB, 0xFFE6, 0x200F, 0x0003, 0xFE85, 0x001B, 0xFFBA, 0xFFFF, 0x0045, 0x0069, 0x200F, 0x0001, 0xFE9C, 0x0017, 0xFFB7, 0xFFFE, 0x0096, 0x0051, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
