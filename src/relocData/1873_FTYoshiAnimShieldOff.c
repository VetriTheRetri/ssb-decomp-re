/* AnimJoint data for relocData file 1873 (FTYoshiAnimShieldOff) */
/* 2080 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimShieldOff_joint2[24];
extern u16 dFTYoshiAnimShieldOff_joint3[72];
extern u16 dFTYoshiAnimShieldOff_joint4[52];
extern u16 dFTYoshiAnimShieldOff_joint5[28];
extern u16 dFTYoshiAnimShieldOff_joint7[22];
extern u16 dFTYoshiAnimShieldOff_joint8[134];
extern u16 dFTYoshiAnimShieldOff_joint9[54];
extern u16 dFTYoshiAnimShieldOff_joint11[14];
extern u16 dFTYoshiAnimShieldOff_joint12[126];
extern u16 dFTYoshiAnimShieldOff_joint13[62];
extern u16 dFTYoshiAnimShieldOff_joint14[18];
extern u16 dFTYoshiAnimShieldOff_joint15[14];
extern u16 dFTYoshiAnimShieldOff_joint16[20];
extern u16 dFTYoshiAnimShieldOff_joint18[16];
extern u16 dFTYoshiAnimShieldOff_joint19[66];
extern u16 dFTYoshiAnimShieldOff_joint21[48];
extern u16 dFTYoshiAnimShieldOff_joint23[50];
extern u16 dFTYoshiAnimShieldOff_joint24[66];
extern u16 dFTYoshiAnimShieldOff_joint26[46];
extern u16 dFTYoshiAnimShieldOff_joint27[52];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTYoshiAnimShieldOff_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTYoshiAnimShieldOff_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimShieldOff_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimShieldOff_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimShieldOff_joint5, /* [4] joint 5 */
	(u32)dFTYoshiAnimShieldOff_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTYoshiAnimShieldOff_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimShieldOff_joint9, /* [8] joint 9 */
	(u32)dFTYoshiAnimShieldOff_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTYoshiAnimShieldOff_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimShieldOff_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimShieldOff_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimShieldOff_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimShieldOff_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimShieldOff_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTYoshiAnimShieldOff_joint19, /* [18] joint 19 */
	(u32)dFTYoshiAnimShieldOff_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTYoshiAnimShieldOff_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTYoshiAnimShieldOff_joint24, /* [23] joint 24 */
	(u32)dFTYoshiAnimShieldOff_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTYoshiAnimShieldOff_joint27, /* [26] joint 27 */
};

/* 4-byte alignment padding */
static u32 dFTYoshiAnimShieldOff_pad[1] = { 0 };

/* Joint 2 */
u16 dFTYoshiAnimShieldOff_joint2[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY), 672,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 914, 164,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 914, -203,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), 672,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimShieldOff_joint3[72] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), -965, -80, 0, 9, -359, 38, 53, 2,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -734, 17, 0, -2, 0, -2, 73, 52, 23, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -848, -41, -13, -4,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 8), -4,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -272, -32, 44, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -848, 88, 0, -9, -13, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 21, -89, 2, 0, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 2, 30, 53, 20, 13,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimShieldOff_joint4[52] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1251, 28, 0, 4, 0, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 279, -136,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 44, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 368, 32, 0, -16, 0, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 368, -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 562, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 16, -90,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTYoshiAnimShieldOff_joint5[28] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 382, 253,
	ftAnimSetValRate(FT_ANIM_ROTX), 305, -41,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 600, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -360, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -360, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 78, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimShieldOff_joint7[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 48, 120,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 58,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 609, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 609, -63,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimShieldOff_joint8[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 29, 0, 390, 3141, -596,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 128, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 390, 168, 2544, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 336, -92, 2704, 173,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 20, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 182, -132, 2890, 338,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -546, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3381, 181,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3097, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -95, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -534, -225, -427, -448,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -997, -156, -992, -408, 3487, 118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1187, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -846, -22, 3333, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1311, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3472, 201,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3873, -172,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1427, 188, -1182, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1271, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -935, 421, 3391, -353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -584, 98, 3166, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -737, -527, -1159, -13, 3254, 499,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1639, -490, -1299, -158, 4164, 609,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1718, -79, -1476, -176, 4473, 308,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTYoshiAnimShieldOff_joint9[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1188, 1179,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 589,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -729, -437,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -875, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -753, 280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -8, 152,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -779, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimShieldOff_joint11[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -68,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -625,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTYoshiAnimShieldOff_joint12[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -100, 0, -298, -75, -461,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -165, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -298, -121, -537, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, 124, -390, 250,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 178, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -192, 185, -50, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 204, 407, -38, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 622, 513, 58, 488, 67, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1232, 88, 938, 529, 508, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 798, -233, 1117, 113, 84, -224,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1169, 235, 402, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1166, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1160, 108,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1385, -46, 614, -83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -181, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1077, -491, 1340, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 402, -453, 1288, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 169, -218, 1466, 874, -255, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -35, -157, 3038, 823, -611, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -145, -109, 3113, 75, -219, 391,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimShieldOff_joint13[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1188, 1179,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 594,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -403, -307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -615, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -691, 303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 341,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -515, -348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -697, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1006, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 4,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimShieldOff_joint14[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 172, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -68,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -625,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimShieldOff_joint15[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 156, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 804, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), -536, -893,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimShieldOff_joint16[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -713, 51,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 350, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 350, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -190, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimShieldOff_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -527, 55,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 654, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -153, -99,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTYoshiAnimShieldOff_joint19[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -1, 0, -1, 647, 163,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -5, 0, 3, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 810, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1033, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 855, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 801, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 937, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 915, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 757, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 670, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 208, -342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -13, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -107, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 0, 5, 1, -3, 103,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimShieldOff_joint21[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 742, -261,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 480, -367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 636, 426,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 859, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 556, -285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -294,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimShieldOff_joint23[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1608, 5, 0, 7, -429, 129,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -1608, 7, -83, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -300, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -20, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 308, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 252, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -186, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -491, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -410, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, 6, -83, 0, -263, 146,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimShieldOff_joint24[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -1, 0, -1, 647, 172,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 1, -1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 819, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1042, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 856, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 800, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 933, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 914, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 733, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 637, -304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 125, -391,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -144, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -241, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -1, 0, 0, -154, 87,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimShieldOff_joint26[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 742, -266,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 475, -371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -237,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 672, 460,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 920, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 628, -261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -249,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTYoshiAnimShieldOff_joint27[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1608, 4, 0, 8, -429, 124,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -1614, 8, -89, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -304, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -22, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 315, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -151, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -449, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -349, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1607, 6, -89, 0, -228, 120,
	ftAnimEnd(),
	0x0000, 0x0000,
};
