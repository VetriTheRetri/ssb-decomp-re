/* AnimJoint data for relocData file 1726 (FTNessAnimCatch) */
/* 1760 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimCatch_joint1[26];
extern u16 dFTNessAnimCatch_joint2[16];
extern u16 dFTNessAnimCatch_joint4[30];
extern u16 dFTNessAnimCatch_joint5[108];
extern u16 dFTNessAnimCatch_joint6[38];
extern u16 dFTNessAnimCatch_joint7[10];
extern u16 dFTNessAnimCatch_joint8[20];
extern u16 dFTNessAnimCatch_joint10[42];
extern u16 dFTNessAnimCatch_joint11[94];
extern u16 dFTNessAnimCatch_joint12[38];
extern u16 dFTNessAnimCatch_joint13[20];
extern u16 dFTNessAnimCatch_joint15[10];
extern u16 dFTNessAnimCatch_joint16[56];
extern u16 dFTNessAnimCatch_joint18[28];
extern u16 dFTNessAnimCatch_joint19[46];
extern u16 dFTNessAnimCatch_joint21[24];
extern u16 dFTNessAnimCatch_joint22[72];
extern u16 dFTNessAnimCatch_joint24[38];
extern u16 dFTNessAnimCatch_joint25[60];
extern u16 dFTNessAnimCatch_joint26[20];
extern u16 dFTNessAnimCatch_joint27[30];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimCatch_joints[] = {
	(u32)dFTNessAnimCatch_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimCatch_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimCatch_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimCatch_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimCatch_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimCatch_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimCatch_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimCatch_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimCatch_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimCatch_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimCatch_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimCatch_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimCatch_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimCatch_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimCatch_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimCatch_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimCatch_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimCatch_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimCatch_joint25, /* [24] joint 25 */
	(u32)dFTNessAnimCatch_joint26, /* [25] joint 26 */
	(u32)dFTNessAnimCatch_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTNessAnimCatch_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 537, -28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, -16,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 537, -9, 175, 201,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 223, -163,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 525,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 537, -28,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimCatch_joint2[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -360, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 28, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 386,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 28,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimCatch_joint4[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 66, 15, 0, 3, 0, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 150, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 33, -107,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimCatch_joint5[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2018, -76, -1347, 30, 2024, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1157, 280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2094, -90, 2023, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2200, -438, 1988, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2972, -102, -755, 241, 2681, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2404, 308, -674, 72, 2098, -317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2356, 20, -610, 46, 2046, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -398, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2363, -58, 2055, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2660, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2294, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -226, 125, 2306, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2804, 241,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -305, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2711, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -3010, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3153, -241, 3062, 358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3493, -237, 3521, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3627, -134, -261, 43, 3632, 111,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimCatch_joint6[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, -34,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -445, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 222,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -395, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -77,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimCatch_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimCatch_joint8[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, 364, -3, -32, 4,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -10, 0, 364, -3, -32, 4,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimCatch_joint10[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -15, -12, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -122, -1, -89, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 104, 45, -31, 20, -23, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNessAnimCatch_joint11[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -415, -130, 569, -24, -119, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -546, -174, 545, -158, -306, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -765, -153, 252, -249, -637, -232,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -972, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -152, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -872, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -892, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -563, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -990, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -798, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -194, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -72, 117,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -666, 100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -503, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -432, 111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -191, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 79, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 448, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -415, 87, 569, 121, -119, 72,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimCatch_joint12[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -556, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -173, 273,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -463, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -95,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimCatch_joint13[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 54, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 544, -293, 255,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 90, 54, 126,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNessAnimCatch_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimCatch_joint16[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -365, 1, -279, 0, -297, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -484, -31, -234, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -137, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -136, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -511, -36,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -507, -2, -262, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -364, 3, -289, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -526, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -335, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, -1, -279, 9, -297, 37,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimCatch_joint18[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 396, 20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 544, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 588, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 539, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 444, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -47,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimCatch_joint19[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, -4, 12, 0, 26, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 64, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 31, 44, -250, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 76, 37, -215, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 14, -16, 1, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 80, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 14, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, -9, 12, -2, 26, 24,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimCatch_joint21[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -66,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -133, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -257, 21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -66,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTNessAnimCatch_joint22[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -127, 4, 136, 11, -210, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -72, -72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 326, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 12, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 163, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -355, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -146, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -213, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 317, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 142, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -335, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -235, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -171, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -139, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, 12, 136, -5, -210, 24,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimCatch_joint24[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 407, -19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 182, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -91,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 36, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 245, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 416, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -8,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimCatch_joint25[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 76, 6, 25, -1, -202, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 180, 93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 155, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -59, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -48, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 70, -56,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 274, 69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 42, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 146, -8, -46, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 85, -15, -205, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, -9, 25, -16, -202, 2,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimCatch_joint26[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 56,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 179, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -128, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 56,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTNessAnimCatch_joint27[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 16, 326, 508,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -1608, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1, -7, 422, -335, 604, 49,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 6, 11, -92, -76, 570, -76,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 16, 326, 508,
	ftAnimEnd(),
};
