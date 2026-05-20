/* AnimJoint data for relocData file 1834 (FTYoshiAnimShieldDrop) */
/* 1472 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimShieldDrop_joint1[26];
extern u16 dFTYoshiAnimShieldDrop_joint2[82];
extern u16 dFTYoshiAnimShieldDrop_joint3[48];
extern u16 dFTYoshiAnimShieldDrop_joint6[32];
extern u16 dFTYoshiAnimShieldDrop_joint7[56];
extern u16 dFTYoshiAnimShieldDrop_joint8[32];
extern u16 dFTYoshiAnimShieldDrop_joint10[10];
extern u16 dFTYoshiAnimShieldDrop_joint11[48];
extern u16 dFTYoshiAnimShieldDrop_joint12[30];
extern u16 dFTYoshiAnimShieldDrop_joint13[38];
extern u16 dFTYoshiAnimShieldDrop_joint14[10];
extern u16 dFTYoshiAnimShieldDrop_joint15[28];
extern u16 dFTYoshiAnimShieldDrop_joint17[16];
extern u16 dFTYoshiAnimShieldDrop_joint18[48];
extern u16 dFTYoshiAnimShieldDrop_joint20[24];
extern u16 dFTYoshiAnimShieldDrop_joint22[34];
extern u16 dFTYoshiAnimShieldDrop_joint23[38];
extern u16 dFTYoshiAnimShieldDrop_joint25[24];
extern u16 dFTYoshiAnimShieldDrop_joint26[60];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTYoshiAnimShieldDrop_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimShieldDrop_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimShieldDrop_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimShieldDrop_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimShieldDrop_joint6, /* [3] joint 6 */
	NULL, /* [4] NULL */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTYoshiAnimShieldDrop_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTYoshiAnimShieldDrop_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTYoshiAnimShieldDrop_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTYoshiAnimShieldDrop_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTYoshiAnimShieldDrop_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimShieldDrop_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimShieldDrop_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimShieldDrop_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimShieldDrop_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTYoshiAnimShieldDrop_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTYoshiAnimShieldDrop_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTYoshiAnimShieldDrop_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTYoshiAnimShieldDrop_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTYoshiAnimShieldDrop_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTYoshiAnimShieldDrop_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimShieldDrop_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, -110,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 672,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 3216, 123,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 11), 0, 35,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 14), 0,
	ftAnimBlock(0, 11),
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 3), 3216,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimShieldDrop_joint2[82] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -8, -89, -1, -41, -4, -136, 5, 131, 25,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), -89,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 20), 121, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -536, 0, 0, 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 7), -16, -105, -16, 282,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), -185, -175, 252, 544,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -147, 472, 391, -16,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 168, 416, 240, -1009,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 216, -122, -492, -1676,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 107, -864, -598, -633, 135, -61,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -215, -650, -140, 106, -8,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 153), -24, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, 0, -668, 38,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimShieldDrop_joint3[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 303, 19, -193, 4, -178, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 824, 92, 152, 4, -16, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 951, 5, -163, -9, 246, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 851, -33, 105, 41, -2, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 749, -34, 84, -7, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 375, -3, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimShieldDrop_joint6[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 57, 3, -190, 9, 162, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 157, 49, 336, 8, 105, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 704, 15, -80, -17, 92, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 446, -5, 0, 2, 0, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimShieldDrop_joint7[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2823, -1, -1245, 2, 2004, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -3326, -124, -1059, -9, 2628, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3454, -125, -1077, -32, 2774, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -3714, -18, -1240, -17, 3093, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3733, -15, -1258, -13, 3115, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -3789, -1, -1314, 0, 3176, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3789, 0, -1311, 2, 3175, -1,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimShieldDrop_joint8[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -665, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -364, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -238, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimShieldDrop_joint10[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -714,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 25), -893,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimShieldDrop_joint11[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1331, 0, -2008, -2, 531, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1974, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 1087, -58, 291, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1044, -44, 258, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 580, -4, -39, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1968, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -1906, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 578, -1, -1901, 4, -39, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimShieldDrop_joint12[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -80, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -105, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 48,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 8,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimShieldDrop_joint13[38] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 893, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 353, 81, 893, -2, 0, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 981, 280, 863, 39, 650, 303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1475, -75, 1051, 3, 1212, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, -6, 905, 0, 0, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimShieldDrop_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1072, 1608, 0, 0, 156, 0,
	ftAnimBlock(0, 25),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimShieldDrop_joint15[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -217, -7, 0, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -259, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 7), -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -223, 34, 0, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 357, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimShieldDrop_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -177, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -285, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 268, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimShieldDrop_joint18[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 25, -11, -373, 4, 6, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -275, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -110, 18, 27, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -91, 20, -20, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 101, 1, -559, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -278, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), -249, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 101, 0, -249, 0, -562, -3,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimShieldDrop_joint20[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 625, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 435, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 470, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 740, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 739, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimShieldDrop_joint22[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1909, 2, -35, 0, -581, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), -1816, 0, 23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -66, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -60, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -253, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1816, 0, 23, 0, -255, -2,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimShieldDrop_joint23[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 74, -15, 251, 3, 2594, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 295, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -246, -1, 2413, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -246, 2, 2422, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), -71, 3, 2643, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -69, 1, 295, 0, 2645, 2,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimShieldDrop_joint25[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 800, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 879, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 869, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 741, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 739, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimShieldDrop_joint26[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1622, -43, 1, 4, -67, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -341, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 61, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1320, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1326, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1788, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -341, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -256, 1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 57, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 37, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1792, 3, 37, 0, -255, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
