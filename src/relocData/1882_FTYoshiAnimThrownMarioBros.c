/* AnimJoint data for relocData file 1882 (FTYoshiAnimThrownMarioBros) */
/* 1248 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimThrownMarioBros_joint2[30];
extern u16 dFTYoshiAnimThrownMarioBros_joint3[18];
extern u16 dFTYoshiAnimThrownMarioBros_joint4[20];
extern u16 dFTYoshiAnimThrownMarioBros_joint5[18];
extern u16 dFTYoshiAnimThrownMarioBros_joint7[16];
extern u16 dFTYoshiAnimThrownMarioBros_joint8[76];
extern u16 dFTYoshiAnimThrownMarioBros_joint11[32];
extern u16 dFTYoshiAnimThrownMarioBros_joint12[76];
extern u16 dFTYoshiAnimThrownMarioBros_joint13[32];
extern u16 dFTYoshiAnimThrownMarioBros_joint14[12];
extern u16 dFTYoshiAnimThrownMarioBros_joint15[12];
extern u16 dFTYoshiAnimThrownMarioBros_joint16[30];
extern u16 dFTYoshiAnimThrownMarioBros_joint18[18];
extern u16 dFTYoshiAnimThrownMarioBros_joint19[34];
extern u16 dFTYoshiAnimThrownMarioBros_joint21[30];
extern u16 dFTYoshiAnimThrownMarioBros_joint23[26];
extern u16 dFTYoshiAnimThrownMarioBros_joint24[34];
extern u16 dFTYoshiAnimThrownMarioBros_joint26[56];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTYoshiAnimThrownMarioBros_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTYoshiAnimThrownMarioBros_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimThrownMarioBros_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimThrownMarioBros_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimThrownMarioBros_joint5, /* [4] joint 5 */
	(u32)dFTYoshiAnimThrownMarioBros_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTYoshiAnimThrownMarioBros_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimThrownMarioBros_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTYoshiAnimThrownMarioBros_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimThrownMarioBros_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimThrownMarioBros_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimThrownMarioBros_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimThrownMarioBros_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimThrownMarioBros_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTYoshiAnimThrownMarioBros_joint19, /* [18] joint 19 */
	(u32)dFTYoshiAnimThrownMarioBros_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTYoshiAnimThrownMarioBros_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTYoshiAnimThrownMarioBros_joint24, /* [23] joint 24 */
	(u32)dFTYoshiAnimThrownMarioBros_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	0xFFFF012A, /* [26] END */
};

/* Joint 2 */
u16 dFTYoshiAnimThrownMarioBros_joint2[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, -168, -121,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 12), 0, 0, 412, 357,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 3,
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), -240, 36,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 9), 55, 236,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 412, 55,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimThrownMarioBros_joint3[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 30, 20,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -223, -17, 0, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -223, 2, 0, 4,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimThrownMarioBros_joint4[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValRate(FT_ANIM_ROTX), -268, 56,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 520, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 74, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTYoshiAnimThrownMarioBros_joint5[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 329,
	ftAnimSetValRate(FT_ANIM_ROTX), -402, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -402, -9,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimThrownMarioBros_joint7[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 48, 120,
	ftAnimSetValRate(FT_ANIM_ROTX), 402, 30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 402, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTYoshiAnimThrownMarioBros_joint8[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, -177, -1055, 37, 2590, 187,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -962, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -253, -366, 2778, 361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -809, -523, 3313, 491,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1300, -306, -1104, -145, 3760, 262,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1095, 308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1423, -71, 3839, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1458, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 3770, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3862, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1391, -263, 3862, 317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1986, -145, -684, 271, 4498, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1683, 302, -552, 131, 4198, -299,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimThrownMarioBros_joint11[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -873, 64,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -540, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -350, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -221, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -479, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -867, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTYoshiAnimThrownMarioBros_joint12[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1688, 226, 556, 66, 983, 231,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 647, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1914, 415, 1214, 407,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2519, 494, 1798, 464,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2157, -72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2995, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 505, -141,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 297, 124,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2055, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2276, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3049, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3037, -253, 453, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2542, -674, 706, 51, 1824, -646,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1688, -854, 556, -149, 983, -841,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimThrownMarioBros_joint13[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -873, 93,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -255, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -388, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -687, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -848, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, -24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimThrownMarioBros_joint14[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 172, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 3,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimThrownMarioBros_joint15[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	_FT_ANIM_CMD(11, 0, 1), 3,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimThrownMarioBros_joint16[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -190, -3,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -223, -2,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -223, 0, 0, 7, 0, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimThrownMarioBros_joint18[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -153, -1, 0, 13, 0, -4,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTYoshiAnimThrownMarioBros_joint19[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0, 607, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 641, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 510, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 226, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0, 0, 245, 18,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimThrownMarioBros_joint21[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 352, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 450, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 574, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 546, -27,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimThrownMarioBros_joint23[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1542, -1, -83, 0, -263, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 1467, 3, -263, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 9), -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1472, 5, -83, 0, -263, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTYoshiAnimThrownMarioBros_joint24[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0, 607, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 541, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 431, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 291, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0, 0, 245, -46,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimThrownMarioBros_joint26[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 410, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 488, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 546, 58,
	ftAnimEnd(),
	0x0000, 0x200E, 0x05F7, 0x0001, 0xFFA7, 0x0000, 0xFF1C, 0x0000, 0x200F, 0x0009, 0x05A9, 0xFFF7, 0xFFA7, 0x0000, 0xFF1C, 0x0000, 0x200F, 0x0001, 0x05A0, 0xFFF8, 0xFFA7, 0x0000, 0xFF1C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
