/* AnimJoint data for relocData file 683 (FTFoxAnimDamaged) */
/* 1568 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDamaged_joint1[38];
extern u16 dFTFoxAnimDamaged_joint2[16];
extern u16 dFTFoxAnimDamaged_joint4[20];
extern u16 dFTFoxAnimDamaged_joint5[84];
extern u16 dFTFoxAnimDamaged_joint6[32];
extern u16 dFTFoxAnimDamaged_joint7[12];
extern u16 dFTFoxAnimDamaged_joint8[20];
extern u16 dFTFoxAnimDamaged_joint10[12];
extern u16 dFTFoxAnimDamaged_joint11[128];
extern u16 dFTFoxAnimDamaged_joint12[40];
extern u16 dFTFoxAnimDamaged_joint13[12];
extern u16 dFTFoxAnimDamaged_joint15[12];
extern u16 dFTFoxAnimDamaged_joint16[58];
extern u16 dFTFoxAnimDamaged_joint18[32];
extern u16 dFTFoxAnimDamaged_joint20[36];
extern u16 dFTFoxAnimDamaged_joint21[48];
extern u16 dFTFoxAnimDamaged_joint23[32];
extern u16 dFTFoxAnimDamaged_joint24[48];
extern u16 dFTFoxAnimDamaged_joint25[12];
extern u16 dFTFoxAnimDamaged_joint26[40];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimDamaged_joints[] = {
	(AObjEvent32 *)dFTFoxAnimDamaged_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimDamaged_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimDamaged_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimDamaged_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimDamaged_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimDamaged_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimDamaged_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimDamaged_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimDamaged_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimDamaged_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimDamaged_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimDamaged_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimDamaged_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimDamaged_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimDamaged_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimDamaged_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimDamaged_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimDamaged_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimDamaged_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimDamaged_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimDamaged_joint1[38] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 9,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 603, 2,
	ftAnimSetValBlock(FT_ANIM_ROTX), 2680,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 905, 285,
	ftAnimSetValT(FT_ANIM_ROTX, 29), -536,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), 230,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1103, 42, 2, -324,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 958, -266,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), -175,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 603, 2,
	ftAnimLoop(0x6800, -74),
};

/* Joint 2 */
u16 dFTFoxAnimDamaged_joint2[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -32,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -748, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, -31,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimDamaged_joint4[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 565, 323, 312,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 569, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 565, 323, 312,
	ftAnimLoop(0x6800, -38),
};

/* Joint 5 */
u16 dFTFoxAnimDamaged_joint5[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2750, 6, -634, 2, 447, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 3007, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -344, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -282, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -185, 87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -338, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2996, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 3001, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -373, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 163, 104,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -430, -83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -632, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2965, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2756, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 264, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 436, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2750, -5, -634, -2, 447, 11,
	ftAnimLoop(0x6800, -164),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimDamaged_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -599, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -706, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -687, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -679, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -650, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -606, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -599, 6,
	ftAnimLoop(0x6800, -62),
};

/* Joint 7 */
u16 dFTFoxAnimDamaged_joint7[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimDamaged_joint8[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 225, -423, 133,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 44, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 225, -423, 133,
	ftAnimLoop(0x6800, -38),
};

/* Joint 10 */
u16 dFTFoxAnimDamaged_joint10[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 29),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimDamaged_joint11[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -721, -6, 1319, 54, -810, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -756, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 659, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -836, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -850, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -818, 259, -920, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -237, 153, -356, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -511, -116, -664, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -470, 14, 517, -56, -707, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -675, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 953, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -481, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -499, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -464, -286, -601, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1071, -152, -1182, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -769, 163, -865, 172,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -741, 3, -832, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1075, 119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1360, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -739, 1, -833, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -723, 2, -813, 4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1332, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -721, 1, 1319, -13, -810, 2,
	ftAnimLoop(0x6800, -252),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimDamaged_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -363, -156,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -641, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -533, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -383, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -415, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -824, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -759, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -397, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -363, 33,
	ftAnimLoop(0x6800, -78),
};

/* Joint 13 */
u16 dFTFoxAnimDamaged_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 44, 0, 44, 272, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimDamaged_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 29),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimDamaged_joint16[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -1, -76, 0, -462, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -11, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -19, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 37, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 105, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -459, -6,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -27, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -76, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -10, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 1, -76, 0, -462, -3,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimDamaged_joint18[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 688, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 665, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 596, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 647, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 707, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 697, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 688, -8,
	ftAnimLoop(0x6800, -62),
};

/* Joint 20 */
u16 dFTFoxAnimDamaged_joint20[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 15, 3, 25, -1, 98, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 28), 19, -4, 24, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 66, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 97, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 15, -3, 25, 0, 98, 1,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimDamaged_joint21[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 130, -3, 107, 2, 23, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 33, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 110, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -511, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -508, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 12, 20,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 49, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 127, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 130, 3, 107, -2, 23, 11,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimDamaged_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 293, 17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 615, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 605, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 453, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 399, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 309, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 293, -15,
	ftAnimLoop(0x6800, -62),
};

/* Joint 24 */
u16 dFTFoxAnimDamaged_joint24[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -150, 3, -8, 0, 498, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -30, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 0, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 42, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 493, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -58, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -149, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -150, -1, -8, 0, 498, 4,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimDamaged_joint25[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 219, 0, 0, -126, -96,
	ftAnimBlock(0, 29),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimDamaged_joint26[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 446,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 64, -450,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 59,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 59,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 59,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 59,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 59,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 446,
	ftAnimLoop(0x6800, -78),
};
