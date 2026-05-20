/* AnimJoint data for relocData file 1115 (FTLinkAnimEggLay) */
/* 1312 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimEggLay_joint1[14];
extern u16 dFTLinkAnimEggLay_joint2[12];
extern u16 dFTLinkAnimEggLay_joint4[12];
extern u16 dFTLinkAnimEggLay_joint5[68];
extern u16 dFTLinkAnimEggLay_joint6[32];
extern u16 dFTLinkAnimEggLay_joint9[16];
extern u16 dFTLinkAnimEggLay_joint10[36];
extern u16 dFTLinkAnimEggLay_joint11[24];
extern u16 dFTLinkAnimEggLay_joint12[8];
extern u16 dFTLinkAnimEggLay_joint13[8];
extern u16 dFTLinkAnimEggLay_joint16[68];
extern u16 dFTLinkAnimEggLay_joint17[8];
extern u16 dFTLinkAnimEggLay_joint18[14];
extern u16 dFTLinkAnimEggLay_joint20[20];
extern u16 dFTLinkAnimEggLay_joint21[58];
extern u16 dFTLinkAnimEggLay_joint23[32];
extern u16 dFTLinkAnimEggLay_joint25[48];
extern u16 dFTLinkAnimEggLay_joint26[58];
extern u16 dFTLinkAnimEggLay_joint28[24];
extern u16 dFTLinkAnimEggLay_joint29[38];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimEggLay_joints[] = {
	(AObjEvent32 *)dFTLinkAnimEggLay_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimEggLay_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimEggLay_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimEggLay_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimEggLay_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimEggLay_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimEggLay_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimEggLay_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimEggLay_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimEggLay_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimEggLay_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimEggLay_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimEggLay_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimEggLay_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimEggLay_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimEggLay_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimEggLay_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimEggLay_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimEggLay_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimEggLay_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimEggLay_joint1[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 901,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 33), 810,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 47), 901,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimEggLay_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -107, 276, 0, 0, 0, 0,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimEggLay_joint4[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 259, 166, 56, 0, 130, 0,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimEggLay_joint5[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 280, 0, -326, 0, -86, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 57), 67, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 62), -255, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 40), -19, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -20, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 32), -66, -4,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 78, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 279, 1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -261, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -326, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -71, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -85, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, 0, -326, 0, -86, 0,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimEggLay_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 40), -294, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -289, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), -496, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -498, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -500, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 0,
	ftAnimLoop(0x6800, -62),
};

/* Joint 9 */
u16 dFTLinkAnimEggLay_joint9[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 299, 121, 140,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 4, 7, 76,
	ftAnimLoop(0x6800, -30),
};

/* Joint 10 */
u16 dFTLinkAnimEggLay_joint10[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 416, 0, 123, 0, -50, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 79), 415, 0, 124, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 46), -79, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -81, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), -52, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, 0, 123, 0, -50, 1,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimEggLay_joint11[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 38), -539, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -527, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 40), -577, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, -10,
	ftAnimLoop(0x6800, -46),
};

/* Joint 12 */
u16 dFTLinkAnimEggLay_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -14),
};

/* Joint 13 */
u16 dFTLinkAnimEggLay_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTLinkAnimEggLay_joint16[68] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1755, 3, -544, 0, -329, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1776, -1, -545, 0, -327, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1723, -7, -546, 0, -327, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1628, -7, -546, 0, -326, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1572, -2, -547, 0, -325, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1579, 1, -549, 0, -323, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1609, 5, -550, 0, -322, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1697, -536, -339,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimEggLay_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -14),
};

/* Joint 18 */
u16 dFTLinkAnimEggLay_joint18[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -199, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 40), 61,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 40), 0,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimEggLay_joint20[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), 25, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -66, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 40), 0, 1,
	ftAnimLoop(0x6800, -38),
};

/* Joint 21 */
u16 dFTLinkAnimEggLay_joint21[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, 0, -244, 0, 108, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 41), -129, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 43), -306, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), -44, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -42, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 41), 108, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -132, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 37), -242, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -305, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 35), -244, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, 0, -244, 0, 108, 0,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimEggLay_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 543, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 546, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 46), 255, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 252, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 250, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, 0,
	ftAnimLoop(0x6800, -62),
};

/* Joint 25 */
u16 dFTLinkAnimEggLay_joint25[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, 0, -161, 0, -34, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 59), 316, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 79), -161, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), -163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -162, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 42), -34, 0,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 317, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), 329, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 0, -161, 0, -34, 0,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimEggLay_joint26[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 0, 269, 0, -125, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 43), 180, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 47), 321, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 40), -264, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -262, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 38), -125, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 183, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), 270, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 320, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 31), 269, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 0, 269, 0, -125, 0,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimEggLay_joint28[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), 660, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 658, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 43), 425, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 29 */
u16 dFTLinkAnimEggLay_joint29[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -427, 0, -74, 0, -69, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 79), -427, 0, -74, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 41), -160, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -159, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), -70, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -427, 0, -74, 0, -69, 0,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
	0x0000, 0x0000,
};
