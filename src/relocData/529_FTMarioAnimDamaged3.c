/* AnimJoint data for relocData file 529 (FTMarioAnimDamaged3) */
/* 2176 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimDamaged3_joint1[64];
extern u16 dFTMarioAnimDamaged3_joint2[60];
extern u16 dFTMarioAnimDamaged3_joint4[50];
extern u16 dFTMarioAnimDamaged3_joint5[98];
extern u16 dFTMarioAnimDamaged3_joint6[38];
extern u16 dFTMarioAnimDamaged3_joint7[10];
extern u16 dFTMarioAnimDamaged3_joint8[56];
extern u16 dFTMarioAnimDamaged3_joint10[40];
extern u16 dFTMarioAnimDamaged3_joint11[82];
extern u16 dFTMarioAnimDamaged3_joint12[26];
extern u16 dFTMarioAnimDamaged3_joint13[62];
extern u16 dFTMarioAnimDamaged3_joint15[10];
extern u16 dFTMarioAnimDamaged3_joint16[92];
extern u16 dFTMarioAnimDamaged3_joint18[36];
extern u16 dFTMarioAnimDamaged3_joint20[90];
extern u16 dFTMarioAnimDamaged3_joint21[82];
extern u16 dFTMarioAnimDamaged3_joint23[44];
extern u16 dFTMarioAnimDamaged3_joint24[100];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTMarioAnimDamaged3_joints[] = {
	(AObjEvent32 *)dFTMarioAnimDamaged3_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimDamaged3_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimDamaged3_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged3_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTMarioAnimDamaged3_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTMarioAnimDamaged3_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTMarioAnimDamaged3_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTMarioAnimDamaged3_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged3_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTMarioAnimDamaged3_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimDamaged3_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimDamaged3_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged3_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTMarioAnimDamaged3_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged3_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged3_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTMarioAnimDamaged3_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTMarioAnimDamaged3_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimDamaged3_joint1[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 223, 0, 540, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -16, -64, 669, 502, -100, -1162,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 666, -4, -290, -253,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 11), 223,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), -16,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 8), -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 666, -290,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 666, -520, -290, 920,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 471, -607, 54, 1181,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -16, 64, 514, 278, 4, -217,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 540, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimDamaged3_joint2[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, -790, -95,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 255, 0, -324, 22, -85, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -76, -66, -268, 29, 0, 2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -2, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -76, -66, -268, 29, 0, 2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -2, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -76, 20, 0, 1, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 6, 1, -275, -263, 7, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -71, -790, -95,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimDamaged3_joint4[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 258, 110,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, 84, 0, -129, 0, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 296, 68,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 296, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 424, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 95, -72, 0, 86, 0, 36,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 208, 258, 110,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimDamaged3_joint5[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1741, 315, -1308, 150, -1880, -245,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2358, -119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1026, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2057, 377,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2497, 252,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2565, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2364, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2279, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1040, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1035, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2541, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2508, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2498, 265, -2360, -404,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3039, 401, -1031, -99, -3087, -447,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1164, 343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3302, 61, -3255, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3161, 32, -3054, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3366, 94, -547, 432, -3532, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3350, -16, -300, 247, -3489, 42,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimDamaged3_joint6[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, 24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -158, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 74,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -91, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, -173,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimDamaged3_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -625, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimDamaged3_joint8[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, 70, -4, 48, 176, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -130, 6, 149, 2, -15, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 138, 93, 0, -24, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 138, 93, 0, -24, 0, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 109, -24, -170, 7, 220, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 38, 30, 30, 55, -45, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 201, -43, -4, -4, 176, 39,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimDamaged3_joint10[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 139, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 110, 0, -69, 0, 104,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -73, 0, 46, 0, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -221, -5, 139, 3, -209, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimDamaged3_joint11[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 443, 144, 551, 15, 65, 338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 587, 451, 567, -73, 404, 378,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1346, 371, 404, -96, 822, 208,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 402, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1331, -13, 820, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1319, -9, 804, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1020, 236,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2000, 377,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 384, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 427, 138, 1290, 452,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 662, 106, 1924, 431,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2437, 25, 640, 197, 2154, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2052, -385, 1056, 416, 1674, -480,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimDamaged3_joint12[26] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 517,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -401,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -811,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimDamaged3_joint13[62] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 625,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 20, 11, 302, 143,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 103,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 102, 0, 22, 0, 287, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 102, -56, 22, -13, 287, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -293, -10, -68, -13, 290, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 70, 306, -17, 22, 448, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 625, 39, 0, 1, 0, -32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimDamaged3_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimDamaged3_joint16[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -135, 953, -230, 13, 45, -451,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -84, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 818, 88, -406, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 42, -444, -260, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -361, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -70, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -113, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -103, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -369, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -328, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -96, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 31, 96,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -427, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -636, -85, 106, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -598, -141, -312, -201, -368, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -919, 231, -297, 40, -199, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, 784, -230, 66, 45, 245,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimDamaged3_joint18[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, -400,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 664, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimDamaged3_joint20[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -212, -503, -11, 205, -156, 698,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 932, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -715, 113, 194, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 14, 405, 83, -100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 28, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 94, 55, 949, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 932, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 125, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 178, 222,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 49, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -98, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 552, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 718, -19, 827, -325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 514, 51, 428, 317, 280, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 820, -363, 535, -219, 644, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, -1032, -11, -547, -156, -800,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimDamaged3_joint21[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, -161, 187, -98, 35, -712,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 38, -30, 88, 55, -677, -443,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 138, -8, 297, 92, -850, -132,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -834, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -18, -19, 259, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -17, 0, 259, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -49, -101, 222, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -220, -131, 112, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 200, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -313, 66, -750, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -87, 236, -594, 311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 159, 143, -127, 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 40, 187, -13, 35, 162,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimDamaged3_joint23[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 135,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 574, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 983, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1045, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1044, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 984, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 881, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 965, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 548, -263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -110,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimDamaged3_joint24[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, 139, -93, -231, -212, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 229, -36, -325, -70, -139, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, -29, -235, 92, 70, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 0, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -150, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 170, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 213, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 299, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -90, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -118, 138,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 248, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 490, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 447, -168, -9, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -297, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 152, -190, 101, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 65, -31, 28, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, 23, -93, -121, -212, 84,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
