/* AnimJoint data for relocData file 1876 (FTYoshiAnimCatch) */
/* 4880 bytes: 112-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimCatch_joint1[100];
extern u16 dFTYoshiAnimCatch_joint2[120];
extern u16 dFTYoshiAnimCatch_joint3[108];
extern u16 dFTYoshiAnimCatch_joint4[168];
extern u16 dFTYoshiAnimCatch_joint5[40];
extern u16 dFTYoshiAnimCatch_joint7[96];
extern u16 dFTYoshiAnimCatch_joint8[310];
extern u16 dFTYoshiAnimCatch_joint11[126];
extern u16 dFTYoshiAnimCatch_joint12[290];
extern u16 dFTYoshiAnimCatch_joint13[120];
extern u16 dFTYoshiAnimCatch_joint14[10];
extern u16 dFTYoshiAnimCatch_joint15[10];
extern u16 dFTYoshiAnimCatch_joint16[32];
extern u16 dFTYoshiAnimCatch_joint18[34];
extern u16 dFTYoshiAnimCatch_joint19[108];
extern u16 dFTYoshiAnimCatch_joint21[80];
extern u16 dFTYoshiAnimCatch_joint23[144];
extern u16 dFTYoshiAnimCatch_joint24[168];
extern u16 dFTYoshiAnimCatch_joint26[80];
extern u16 dFTYoshiAnimCatch_joint27[198];
extern u16 dFTYoshiAnimCatch_joint28[42];

/* Joint pointer table (28 entries, 112 bytes) */
AObjEvent32 * dFTYoshiAnimCatch_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimCatch_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimCatch_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimCatch_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimCatch_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimCatch_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTYoshiAnimCatch_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTYoshiAnimCatch_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTYoshiAnimCatch_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTYoshiAnimCatch_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimCatch_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimCatch_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimCatch_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimCatch_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTYoshiAnimCatch_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTYoshiAnimCatch_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTYoshiAnimCatch_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTYoshiAnimCatch_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTYoshiAnimCatch_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTYoshiAnimCatch_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTYoshiAnimCatch_joint27, /* [26] joint 27 */
	(AObjEvent32 *)dFTYoshiAnimCatch_joint28, /* [27] joint 28 */
};

/* Joint 1 */
u16 dFTYoshiAnimCatch_joint1[100] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 672, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 508, -73, -256, 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), -402,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 33, 525, 10, 180, 268,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 27, 1,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 525, 180,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 21), 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 16), 27, -1, 525, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 5), 0, -3, 525, 12,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 536, 23, 180, -639,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 2), 537,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 26), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -60, -960,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), -60,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 536, 0, -60, 148,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), 88, 86,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 7), 536,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 536, 80, 134, -52,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 672, 220, 0, -219,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 672, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimCatch_joint2[120] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -7, -89, -2, 30, 9, 20, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 34, 0, 34, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -373, 0, -53, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -7, 28, 0, 4,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), -8,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), -8, 0, 34, 0, 34, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 16), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 34, 0, 23, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -7, 0, 0, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -15, -3,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), -5,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY, 3), -5, -15, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), -55,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 23, 70,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -5, -15, 34, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -5, 0, -15, -5, 34, -2, 23, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 1, -89, -14, 30, -6, 20, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ, 2), 0, 16, -89, 40, 20, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 30,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimCatch_joint3[108] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 16, 7,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 380, 15, 0, -54, 0, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 140, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -435, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 607, 35, 0, 35, 0, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 29, 1, 7, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), 607,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 29, -1, 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 16), 607,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 607, -25, 0, -4, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 402, -29, -2, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 402, -2, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 402, -2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 402, -116, -2, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -192, 7, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 16, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimCatch_joint4[168] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 78, -1, 0, -7, 0, -3,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 329,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 76, -76,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -285, -65, 0, 493, 421,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, 600, 77, 329, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -913, -119, 0, 35, 0, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -876, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 619, 7, 317, -4,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 54), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), -876,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), -876, -2, 0, 0, 619, -7, 317, 4,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 3, 600, -142, 329, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -923, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -918, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -876, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -392, 30, 3, -15, 494, -732, 392, -207,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 14), -392,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -7, 234, 226,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 3, 6, 494, 159, 392, 102,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -392, 3, 494, 392,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -392, 77,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 3, 494, 392,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -111, 138, 3, -3, 494, 112, 392, -65,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, -3, 600, 115, 329, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 312, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 78, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 78, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 600, 329,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTYoshiAnimCatch_joint5[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 48, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 0, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 619, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 742, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 742, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 619, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, -38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 14), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimCatch_joint7[96] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY), 0, 0, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 175, 72,
	ftAnimSetValBlock(FT_ANIM_SCAZ), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 276, 13, 0, 0, 56, -45, 0, -27,
	ftAnimSetValBlockT(FT_ANIM_SCAZ, 16), 4096,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAZ), 9929,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 56, 0,
	ftAnimSetValRateT(FT_ANIM_SCAZ, 5), 20480, 41,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), 276,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_SCAZ, 16), 276, 0, 20480, -96,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, 56, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAZ, 5), 276, -39, 0, 0, 56, 32, 0, 19, 4096, -15998,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), 0, 175, 72,
	ftAnimSetValT(FT_ANIM_SCAZ, 28), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 14), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 175, 72,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimCatch_joint8[310] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1718, 34, -1476, 21, 1256, -124,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1582, 125,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1217, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1131, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 832, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1433, -24, 650, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1632, -397, -1009, 100, 919, 439,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2058, 304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2229, -572, -1017, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2778, -324, -897, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2878, -74, -1031, -91, 2137, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2945, -48, 2195, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1081, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1058, -70,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3023, 69, 2284, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2806, 77, -1216, -102, 2000, -125,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1137, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2868, -63, 2034, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -3227, -164, 2515, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3404, -117, 2731, 144,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -3353, 9, 2683, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1152, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -1198, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3358, -4, 2689, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), -3353, 16, 2683, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3324, 33, 2649, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -3211, 57, 2494, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1203, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1037, 27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3140, 188, 2413, -201,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1753, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2833, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2473, -18, -1013, 384,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2870, -200, -268, 362, 1983, 123,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2042, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2874, 14, -287, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3103, -102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -616, -23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2159, 111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 3044, 44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3213, -111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -3847, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -633, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -673, -25,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3082, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3196, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3909, 13, -697, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3729, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -635, 243, 3115, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3275, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -211, 312,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -132, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3698, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3380, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3159, -129,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2938, -75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -149, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3327, 52, -132, 17, 2864, -73,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimCatch_joint11[126] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -764, -32,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -711, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -756, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -630, 378,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 315,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -592, -378,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -757, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -494, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -516, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -662, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -706, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -819, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -855, 405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 423,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -157, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -375, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -787, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -800, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -773, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -835, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -948, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -816, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -847, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -742, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -707, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, -57,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTYoshiAnimCatch_joint12[290] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1753, -1, 1711, 69, -1827, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1693, 119, 1979, 172, -2196, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1516, 153, 2126, 97, -2432, -185,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 2242, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1386, -148, -2567, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1813, -489, -2111, 501,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2365, -399, -1564, 386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2612, -148, 2182, -42, -1337, 133,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 2082, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2278, 359, -1644, -345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1826, 401, -2089, -421,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1884, -712,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2488, -255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1887, -382, -2600, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1318, -408, -2753, -479,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2880, -661, 1069, -78, -3559, -582,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3270, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -4017, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1160, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1148, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 1158, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3283, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -3279, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4006, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -3980, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3988, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -4008, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1144, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1009, -58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3295, -132, -4021, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3543, -395, -4279, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4086, 30, 950, -408, -4798, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3483, 300, 191, -372, -4446, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3485, -17, 206, 20, -4432, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 556, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -2869, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -4281, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4196, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -3572, 68,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 576, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 688, 34,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2806, 36, -3510, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2774, 53, -3476, 145,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 721, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 644, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2723, 33, 183, -341, -3250, 187,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3148, -124,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -34, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2900, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3169, -205,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3373, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3306, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -92, -34, -3392, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3362, 11, -103, -10, -3436, -43,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimCatch_joint13[120] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1002, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -855, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -468, 423,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -589, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -607, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -480, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -477, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -497, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -845, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -906, 418,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 453,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -129, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -375, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -804, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -819, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -822, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -790, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -991, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -889, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -984, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -929, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -897, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, -104,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimCatch_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 172, 0, 0,
	ftAnimBlock(0, 70),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimCatch_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimBlock(0, 70),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimCatch_joint16[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -190, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -384, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 260, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), 260, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -446, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -190, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -190, 17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimCatch_joint18[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -153, -13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -418, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 303, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), 303, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -153, -58,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -456,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -153, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -153, 10,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTYoshiAnimCatch_joint19[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, 0, 5, 0, -3, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -27, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -13, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 262, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 272, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 57, -10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -8, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -15, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 55), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 49, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), 48, 6,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -8, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 44), 6, 0,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 52, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 49, -324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -542, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -491, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -427, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -64, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -57, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 35, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 0, 5, 0, -3, -39,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimCatch_joint21[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 262, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 469, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 493, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 581, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 551, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 555, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 555, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 525, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 518, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 501, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 849, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 835, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 820, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 630, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 620, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 430, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, 62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimCatch_joint23[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1614, 26, -83, -37, -263, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -582, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1431, -96, -220, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1342, -51, -159, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1524, 100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -550, -26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -570, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -236, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1607, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1588, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -565, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), -570, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -217, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -135, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1593, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 48), 1614, 0,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -568, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -551, 125,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -126, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -93, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -304, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -406, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -436, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -563, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -549, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -237, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -106, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -114, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, 0, -83, 30, -263, -25,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimCatch_joint24[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 5, 0, -2, -154, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 19, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -11, 13, 338, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -28, 358, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -166, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -370, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 27, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 270, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -117, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 31, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -484, -102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -653, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 215, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -11, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -9, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 13, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -652, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -646, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 31, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), 30, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 20, 45, 30, -20, -665, 106,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 89, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 29, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -432, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -592, -112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -715, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 72, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 13, -13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -714, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -718, 30,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 27, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -6, 3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -673, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -209, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -13, 0, 6, -154, 55,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimCatch_joint26[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 378, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 410, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 447, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 883, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 965, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 902, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 902, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 897, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 890, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 857, -441,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 316, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 470, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 800, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 819, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 878, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 873, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 375, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTYoshiAnimCatch_joint27[198] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1609, -13, -89, 1, -228, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 1592, 22, -459, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 143, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 266, 94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 409, 84,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1610, -16, -477, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1369, -160,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -756, 74,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 515, 69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 310, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1238, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1475, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -579, 202,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -202, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1537, 62, 182, -89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 171, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1619, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -207, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), -214, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 165, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 85, -10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1619, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 1599, -4,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -230, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1592, -40, -181, 325,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1587, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 421, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 91, 5, 274, -116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 144, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 188, -66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -127, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1591, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1596, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -119, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -259, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 135, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -108, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -262, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -162, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1609, 12, -89, 19, -228, -66,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTYoshiAnimCatch_joint28[42] = {
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -4, 16, 1327,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), -4, 16, 1327,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -211, -78, 43, 10, 3228, 724,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 16), -211, 82, 3228, -750,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 16), 43,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 33), 43,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 4, 1257,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 28), 4, 1257,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
