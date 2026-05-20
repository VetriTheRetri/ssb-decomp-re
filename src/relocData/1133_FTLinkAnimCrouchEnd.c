/* AnimJoint data for relocData file 1133 (FTLinkAnimCrouchEnd) */
/* 768 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimCrouchEnd_joint1[10];
extern u16 dFTLinkAnimCrouchEnd_joint2[10];
extern u16 dFTLinkAnimCrouchEnd_joint4[14];
extern u16 dFTLinkAnimCrouchEnd_joint5[24];
extern u16 dFTLinkAnimCrouchEnd_joint6[16];
extern u16 dFTLinkAnimCrouchEnd_joint9[10];
extern u16 dFTLinkAnimCrouchEnd_joint10[24];
extern u16 dFTLinkAnimCrouchEnd_joint11[16];
extern u16 dFTLinkAnimCrouchEnd_joint12[8];
extern u16 dFTLinkAnimCrouchEnd_joint13[8];
extern u16 dFTLinkAnimCrouchEnd_joint16[10];
extern u16 dFTLinkAnimCrouchEnd_joint17[8];
extern u16 dFTLinkAnimCrouchEnd_joint18[10];
extern u16 dFTLinkAnimCrouchEnd_joint20[10];
extern u16 dFTLinkAnimCrouchEnd_joint21[24];
extern u16 dFTLinkAnimCrouchEnd_joint23[20];
extern u16 dFTLinkAnimCrouchEnd_joint25[24];
extern u16 dFTLinkAnimCrouchEnd_joint26[32];
extern u16 dFTLinkAnimCrouchEnd_joint28[20];
extern u16 dFTLinkAnimCrouchEnd_joint29[28];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimCrouchEnd_joints[] = {
	(AObjEvent32 *)dFTLinkAnimCrouchEnd_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimCrouchEnd_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimCrouchEnd_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimCrouchEnd_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimCrouchEnd_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimCrouchEnd_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimCrouchEnd_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimCrouchEnd_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimCrouchEnd_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimCrouchEnd_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimCrouchEnd_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimCrouchEnd_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimCrouchEnd_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimCrouchEnd_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimCrouchEnd_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimCrouchEnd_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimCrouchEnd_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimCrouchEnd_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimCrouchEnd_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimCrouchEnd_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimCrouchEnd_joint1[10] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 469,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 901,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimCrouchEnd_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -107, 276, 0, 0, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimCrouchEnd_joint4[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 551, 423, 273,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 259, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimCrouchEnd_joint5[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -938, -104, -1327, 16, 1218, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1293, -66, -1283, 5, 1485, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1328, -34, -1281, 2, 1522, 37,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimCrouchEnd_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -359, -36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -491, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimCrouchEnd_joint9[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -76, 36, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 4, 7, 76,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimCrouchEnd_joint10[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 954, -125, 84, -30, 165, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 457, -91, 109, 26, 31, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, -40, 123, 14, -50, -82,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimCrouchEnd_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -812, -27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -689, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 101,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimCrouchEnd_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimCrouchEnd_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimCrouchEnd_joint16[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2182, -376, -605,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1697, -536, -339,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimCrouchEnd_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimCrouchEnd_joint18[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -199, -499, 128,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimCrouchEnd_joint20[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -163,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimCrouchEnd_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -51, 7, -328, 1, -27, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -174, -80, -291, 38, 0, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -67, -244, 47, 108, 108,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimCrouchEnd_joint23[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1094, -67,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 819, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 503, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -253,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimCrouchEnd_joint25[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 223, 25, -203, 9, -639, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 319, 19, -164, 7, -171, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 9, -161, 2, -34, 137,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimCrouchEnd_joint26[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -283, 68, 272, 44, -901, 77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 326, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -17, 203, -564, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 192, 144, -260, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 78, 269, -57, -125, 135,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimCrouchEnd_joint28[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 839, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 776, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 578, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -153,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimCrouchEnd_joint29[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -356, -23, -73, 2, 150, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -425, -8, -72, -1, -96, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -427, -2, -74, -1, -69, 26,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
