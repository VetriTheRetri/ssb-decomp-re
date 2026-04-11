/* AnimJoint data for relocData file 546 (FTMarioAnimStunStartU) */
/* 1872 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimStunStartU_joint1[30];
extern u16 dFTMarioAnimStunStartU_joint2[14];
extern u16 dFTMarioAnimStunStartU_joint4[34];
extern u16 dFTMarioAnimStunStartU_joint5[136];
extern u16 dFTMarioAnimStunStartU_joint6[46];
extern u16 dFTMarioAnimStunStartU_joint7[12];
extern u16 dFTMarioAnimStunStartU_joint8[34];
extern u16 dFTMarioAnimStunStartU_joint10[16];
extern u16 dFTMarioAnimStunStartU_joint11[128];
extern u16 dFTMarioAnimStunStartU_joint12[46];
extern u16 dFTMarioAnimStunStartU_joint13[26];
extern u16 dFTMarioAnimStunStartU_joint15[10];
extern u16 dFTMarioAnimStunStartU_joint16[70];
extern u16 dFTMarioAnimStunStartU_joint18[28];
extern u16 dFTMarioAnimStunStartU_joint20[80];
extern u16 dFTMarioAnimStunStartU_joint21[82];
extern u16 dFTMarioAnimStunStartU_joint23[96];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimStunStartU_joints[] = {
	(u32)dFTMarioAnimStunStartU_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimStunStartU_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimStunStartU_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimStunStartU_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimStunStartU_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimStunStartU_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimStunStartU_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimStunStartU_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimStunStartU_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimStunStartU_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimStunStartU_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimStunStartU_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimStunStartU_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimStunStartU_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimStunStartU_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimStunStartU_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimStunStartU_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF01B4, /* [23] END */
};

/* Joint 1 */
u16 dFTMarioAnimStunStartU_joint1[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -513, 5, 245, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 26, 0, 7, 0, 17, 4, -1, 360, 78, -5, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 223, 0, 0, 540, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimStunStartU_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -71, -790, -95,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimStunStartU_joint4[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 6, -457, 156, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 30), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 268, 42, 0, 30, 0, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 643, -2, 0, 12, 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 208, 258, 110,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimStunStartU_joint5[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1475, 59, -556, 0, -2159, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -277, 85, -2854, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1702, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1937, 782,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3266, 773,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3483, 113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3425, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -205, 51, -2917, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3069, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -427, -35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3393, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3214, -87,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3060, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2954, -59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3153, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 3413, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3056, -135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3711, -82,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -446, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -299, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3399, -19, -3766, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 3321, 20, -3489, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -301, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -302, 2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3341, 14, -3487, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3350, 8, -300, 2, -3489, -1,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimStunStartU_joint6[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -147, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -543, -283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -358, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -297, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -278, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -239, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -200, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 17,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimStunStartU_joint7[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 30), -625,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimStunStartU_joint8[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -134, 0, 0, 0, 288, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -214, 23,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 0, 288, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 375, 27, 0, 0, 0, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 201, -4, 176,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimStunStartU_joint10[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 54, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), -221, 139, -209, 0, 54, -17,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimStunStartU_joint11[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1638, -14, 312, 7, -2037, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 283, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -2097, -372, -2448, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2570, -428, -2720, -232,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3101, -104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3153, -69,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 228, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -25, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3161, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -3292, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3226, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -3253, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3369, -127,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -3913, 51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -48, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 400, 91,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3855, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -3364, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3308, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2999, 126,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 480, 63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 551, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2878, 99, -3248, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2800, 52, -3175, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2773, 26, 551, 0, -3151, 24,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimStunStartU_joint12[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -493, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -615, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -183, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -110, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -539, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -660, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -819, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 8,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimStunStartU_joint13[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, -1072, 714,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -666, 44, -794, 53, 529, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 625, 64, 0, 39, 0, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 625, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimStunStartU_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimStunStartU_joint16[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 381, -40, -90, -2, -397, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -305, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -821, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 34, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 38, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -23, -27,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -312, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -242, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -799, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 39, 12,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -49, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -132, -5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -233, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, -2, -230, 2, 45, 6,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimStunStartU_joint18[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 294, 25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 934, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 916, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 426, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimStunStartU_joint20[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -132, 28, -207, 8, 575, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 134, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 82, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 161, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 273, 96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 243, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 55, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -217, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -11, -83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -226, -6,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 209, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -10, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -231, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -158, 4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -215, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -212, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, 0, -11, -1, -156, 2,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimStunStartU_joint21[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1646, -63, 948, 0, 532, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1491, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1018, -23, 535, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 987, 1, 878, 379,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1533, 176,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1218, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1821, 251,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2009, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1648, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1513, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1226, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1421, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2008, -1, 1498, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 1811, -5, 1642, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1808, -2, 1421, 0, 1644, 1,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimStunStartU_joint23[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 570, 34,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1087, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1023, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 759, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 723, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 441, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -2,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFFCC, 0xFFFD, 0xFFCA, 0x0000, 0xFF9B, 0xFFF8, 0x2809, 0x000C, 0xFDFE, 0x0015, 0x2805, 0x0010, 0xFF8A, 0xFFF3, 0x2003, 0x0007, 0x0083, 0x0049, 0x2003, 0x0001, 0x00CA, 0x0037, 0x2803, 0x0007, 0x007B, 0xFFFC, 0x0801, 0x0004, 0x2009, 0x0001, 0xFE13, 0x0016, 0x2809, 0x0010, 0xFF2A, 0x0003, 0x0801, 0x0002, 0x2003, 0x0001, 0x0079, 0x0000, 0x2803, 0x000D, 0x005A, 0xFFFE, 0x2005, 0x0001, 0xFF7E, 0xFFF6, 0x2005, 0x000C, 0xFFA1, 0x0002, 0x200F, 0x0001, 0x0059, 0xFFFF, 0xFFA3, 0x0001, 0xFF2C, 0x0001, 0x0000,
};
