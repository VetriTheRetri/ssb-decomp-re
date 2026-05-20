/* AnimJoint data for relocData file 1855 (FTYoshiAnimDamaged) */
/* 1776 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimDamaged_joint1[16];
extern u16 dFTYoshiAnimDamaged_joint2[20];
extern u16 dFTYoshiAnimDamaged_joint3[50];
extern u16 dFTYoshiAnimDamaged_joint4[34];
extern u16 dFTYoshiAnimDamaged_joint6[34];
extern u16 dFTYoshiAnimDamaged_joint7[80];
extern u16 dFTYoshiAnimDamaged_joint8[40];
extern u16 dFTYoshiAnimDamaged_joint10[8];
extern u16 dFTYoshiAnimDamaged_joint11[86];
extern u16 dFTYoshiAnimDamaged_joint12[32];
extern u16 dFTYoshiAnimDamaged_joint13[14];
extern u16 dFTYoshiAnimDamaged_joint14[12];
extern u16 dFTYoshiAnimDamaged_joint15[46];
extern u16 dFTYoshiAnimDamaged_joint17[48];
extern u16 dFTYoshiAnimDamaged_joint18[74];
extern u16 dFTYoshiAnimDamaged_joint20[32];
extern u16 dFTYoshiAnimDamaged_joint22[64];
extern u16 dFTYoshiAnimDamaged_joint23[64];
extern u16 dFTYoshiAnimDamaged_joint25[32];
extern u16 dFTYoshiAnimDamaged_joint26[50];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTYoshiAnimDamaged_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimDamaged_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimDamaged_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimDamaged_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimDamaged_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimDamaged_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamaged_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTYoshiAnimDamaged_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTYoshiAnimDamaged_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamaged_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTYoshiAnimDamaged_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimDamaged_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimDamaged_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimDamaged_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimDamaged_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamaged_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTYoshiAnimDamaged_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamaged_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamaged_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTYoshiAnimDamaged_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTYoshiAnimDamaged_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimDamaged_joint1[16] = {
	ftAnimSetVal(FT_ANIM_ROTX), 1072,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 672, 0, 4096, 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 29), -2144,
	ftAnimLoop(0x6800, -30),
};

/* Joint 2 */
u16 dFTYoshiAnimDamaged_joint2[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -174, -413, 392,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 369, 102,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -22, -181, 126,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -174, -413, 392,
	ftAnimLoop(0x6800, -38),
};

/* Joint 3 */
u16 dFTYoshiAnimDamaged_joint3[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 227, -166,
	ftAnimSetValRate(FT_ANIM_ROTX), 1124, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -87, 15,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 14), 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1211, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1183, -13,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -88, -6,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 15), 227,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1124, 1,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), -166,
	ftAnimLoop(0x6800, -96),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimDamaged_joint4[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 263, 14, -197, 8,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 205,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 15), -422,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 389, 7, 3, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 100, -6, 129, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 263, 13, -197, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 14), 205,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimDamaged_joint6[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 409, -14, 0, -1, 0, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 309, -38,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 532, 51,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 14), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 409, -17, 0, 0, 0, -7,
	ftAnimLoop(0x6800, -66),
};

/* Joint 7 */
u16 dFTYoshiAnimDamaged_joint7[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1420, -7, -1644, 2, 1156, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1715, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1384, 65, 836, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1320, 57, 762, -72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 677, 63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1486, -57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1680, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1681, 47,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 743, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1157, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1539, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1642, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1628, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1427, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1420, 6, -1644, -2, 1156, -1,
	ftAnimLoop(0x6800, -156),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimDamaged_joint8[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -769, -14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -895, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -824, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -668, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -733, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -909, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -861, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -782, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -769, 12,
	ftAnimLoop(0x6800, -78),
};

/* Joint 10 */
u16 dFTYoshiAnimDamaged_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimLoop(0x6800, -14),
};

/* Joint 11 */
u16 dFTYoshiAnimDamaged_joint11[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -213, 2, -2852, 8, -1072, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -2587, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 328, 229, -472, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 565, 201, -241, 193,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 888, -36, 52, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2618, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -2552, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 842, -63, 13, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 201, -198, -597, -196,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2563, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -2844, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 31, -137, -767, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -210, -4, -1066, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -213, -2, -2852, -7, -1072, -5,
	ftAnimLoop(0x6800, -168),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimDamaged_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -557, -13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -916, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -913, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -693, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -643, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -568, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -557, 11,
	ftAnimLoop(0x6800, -62),
};

/* Joint 13 */
u16 dFTYoshiAnimDamaged_joint13[14] = {
	ftAnimSetVal(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 14), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimDamaged_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimBlock(0, 29),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimDamaged_joint15[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -211, -5, 143, 0, -152, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 108, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -115, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -239, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -134, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 103, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -176, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -211, -8, 143, 0, -152, 3,
	ftAnimLoop(0x6800, -88),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimDamaged_joint17[48] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -268, -13, -17, 7,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 168,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -284, 32,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 14), 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 26, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -56, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -98, -1,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 15), 168,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -268, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -17, 6,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimDamaged_joint18[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 293, -5, 61, 6, 679, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 150, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -193, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 16, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 80, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 147, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 461, 66,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -153, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 287, 10,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 527, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 666, 22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 66, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 293, 5, 61, -5, 679, 12,
	ftAnimLoop(0x6800, -144),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimDamaged_joint20[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 334, 17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 668, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 660, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 492, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 349, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 334, -15,
	ftAnimLoop(0x6800, -62),
};

/* Joint 22 */
u16 dFTYoshiAnimDamaged_joint22[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1565, -2, 85, 1, 457, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 339, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 89, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -1508, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1467, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1595, 11,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 356, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 454, 4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1584, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1567, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 86, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1565, 2, 85, 0, 457, 2,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimDamaged_joint23[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -239, -1, 329, -4, 436, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 191, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), -9, 35, 754, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 21, 26, 798, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 439, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -243, 1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 199, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 325, 7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 435, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -240, 1, 436, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -239, 1, 329, 4, 436, 0,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimDamaged_joint25[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 378, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 492, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 454, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 483, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 448, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 388, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -10,
	ftAnimLoop(0x6800, -62),
};

/* Joint 26 */
u16 dFTYoshiAnimDamaged_joint26[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1772, 0, 71, 0, 107, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 1720, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 71, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 295, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 275, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 111, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1736, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1772, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1772, 0, 71, 0, 107, -3,
	ftAnimLoop(0x6800, -88),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
