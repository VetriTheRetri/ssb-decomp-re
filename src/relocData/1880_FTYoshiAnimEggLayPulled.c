/* AnimJoint data for relocData file 1880 (FTYoshiAnimEggLayPulled) */
/* 896 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimEggLayPulled_joint1[8];
extern u16 dFTYoshiAnimEggLayPulled_joint2[14];
extern u16 dFTYoshiAnimEggLayPulled_joint3[26];
extern u16 dFTYoshiAnimEggLayPulled_joint4[14];
extern u16 dFTYoshiAnimEggLayPulled_joint5[14];
extern u16 dFTYoshiAnimEggLayPulled_joint7[14];
extern u16 dFTYoshiAnimEggLayPulled_joint8[32];
extern u16 dFTYoshiAnimEggLayPulled_joint9[16];
extern u16 dFTYoshiAnimEggLayPulled_joint11[8];
extern u16 dFTYoshiAnimEggLayPulled_joint12[32];
extern u16 dFTYoshiAnimEggLayPulled_joint13[20];
extern u16 dFTYoshiAnimEggLayPulled_joint14[10];
extern u16 dFTYoshiAnimEggLayPulled_joint15[10];
extern u16 dFTYoshiAnimEggLayPulled_joint16[14];
extern u16 dFTYoshiAnimEggLayPulled_joint18[14];
extern u16 dFTYoshiAnimEggLayPulled_joint19[30];
extern u16 dFTYoshiAnimEggLayPulled_joint21[16];
extern u16 dFTYoshiAnimEggLayPulled_joint23[26];
extern u16 dFTYoshiAnimEggLayPulled_joint24[30];
extern u16 dFTYoshiAnimEggLayPulled_joint26[16];
extern u16 dFTYoshiAnimEggLayPulled_joint27[30];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTYoshiAnimEggLayPulled_joints[] = {
	(u32)dFTYoshiAnimEggLayPulled_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimEggLayPulled_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimEggLayPulled_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimEggLayPulled_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimEggLayPulled_joint5, /* [4] joint 5 */
	(u32)dFTYoshiAnimEggLayPulled_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTYoshiAnimEggLayPulled_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimEggLayPulled_joint9, /* [8] joint 9 */
	(u32)dFTYoshiAnimEggLayPulled_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTYoshiAnimEggLayPulled_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimEggLayPulled_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimEggLayPulled_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimEggLayPulled_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimEggLayPulled_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimEggLayPulled_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTYoshiAnimEggLayPulled_joint19, /* [18] joint 19 */
	(u32)dFTYoshiAnimEggLayPulled_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTYoshiAnimEggLayPulled_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTYoshiAnimEggLayPulled_joint24, /* [23] joint 24 */
	(u32)dFTYoshiAnimEggLayPulled_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTYoshiAnimEggLayPulled_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTYoshiAnimEggLayPulled_joint1[8] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), -136,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 840,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), 307,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimEggLayPulled_joint2[14] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, -239,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, -168,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), -240,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimEggLayPulled_joint3[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -27, -89, 11, 30, -16, 20, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 20), 65, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 40), -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -223, 1, 0, 3,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimEggLayPulled_joint4[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 16, -35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -268, -4,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTYoshiAnimEggLayPulled_joint5[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 78, -60,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 600, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -402, -3,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimEggLayPulled_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 50,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 48, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 402,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTYoshiAnimEggLayPulled_joint8[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -109, -76, -132, -105, 2864, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -186, -211, -238, -305, 2865, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -533, 55, -744, -408, 3039, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 457, -1055, -311, 2590, -449,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTYoshiAnimEggLayPulled_joint9[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -764, -262,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1038, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, 165,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimEggLayPulled_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTYoshiAnimEggLayPulled_joint12[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1753, 123, 1711, -76, 1389, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1629, 37, 1635, -473, 1236, -282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1677, 50, 765, -539, 823, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1528, 149, 556, -209, 983, 159,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimEggLayPulled_joint13[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1002, -235,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1238, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1109, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, 235,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimEggLayPulled_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 172, 0, 0,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimEggLayPulled_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimEggLayPulled_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -190, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -223, 5,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimEggLayPulled_joint18[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -153, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -285, 3,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTYoshiAnimEggLayPulled_joint19[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, 1, 5, -1, -3, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 0, 1, 1, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 277, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0, -1, 607, 329,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimEggLayPulled_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 262, 217,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 391, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -384,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimEggLayPulled_joint23[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1614, -40, -83, 0, -263, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1526, -15, -263, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1542, 16, -83, 0, -263, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTYoshiAnimEggLayPulled_joint24[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0, -154, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -117, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 219, 364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0, 0, 611, 391,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimEggLayPulled_joint26[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 378, 212,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 468, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -468,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTYoshiAnimEggLayPulled_joint27[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1609, -46, -89, 0, -228, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1498, -16, -89, 0, -228, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1528, 30, -89, 0, -228, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
