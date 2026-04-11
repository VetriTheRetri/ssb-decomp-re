/* AnimJoint data for relocData file 1893 (FTYoshiAnimCliffClimbSlow1) */
/* 1520 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimCliffClimbSlow1_joint1[34];
extern u16 dFTYoshiAnimCliffClimbSlow1_joint2[20];
extern u16 dFTYoshiAnimCliffClimbSlow1_joint3[42];
extern u16 dFTYoshiAnimCliffClimbSlow1_joint4[26];
extern u16 dFTYoshiAnimCliffClimbSlow1_joint5[48];
extern u16 dFTYoshiAnimCliffClimbSlow1_joint7[14];
extern u16 dFTYoshiAnimCliffClimbSlow1_joint8[88];
extern u16 dFTYoshiAnimCliffClimbSlow1_joint9[32];
extern u16 dFTYoshiAnimCliffClimbSlow1_joint11[14];
extern u16 dFTYoshiAnimCliffClimbSlow1_joint12[72];
extern u16 dFTYoshiAnimCliffClimbSlow1_joint13[28];
extern u16 dFTYoshiAnimCliffClimbSlow1_joint14[14];
extern u16 dFTYoshiAnimCliffClimbSlow1_joint15[24];
extern u16 dFTYoshiAnimCliffClimbSlow1_joint16[20];
extern u16 dFTYoshiAnimCliffClimbSlow1_joint18[20];
extern u16 dFTYoshiAnimCliffClimbSlow1_joint19[24];
extern u16 dFTYoshiAnimCliffClimbSlow1_joint21[16];
extern u16 dFTYoshiAnimCliffClimbSlow1_joint23[24];
extern u16 dFTYoshiAnimCliffClimbSlow1_joint24[66];
extern u16 dFTYoshiAnimCliffClimbSlow1_joint26[80];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTYoshiAnimCliffClimbSlow1_joints[] = {
	(u32)dFTYoshiAnimCliffClimbSlow1_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimCliffClimbSlow1_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimCliffClimbSlow1_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimCliffClimbSlow1_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimCliffClimbSlow1_joint5, /* [4] joint 5 */
	(u32)dFTYoshiAnimCliffClimbSlow1_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTYoshiAnimCliffClimbSlow1_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimCliffClimbSlow1_joint9, /* [8] joint 9 */
	(u32)dFTYoshiAnimCliffClimbSlow1_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTYoshiAnimCliffClimbSlow1_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimCliffClimbSlow1_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimCliffClimbSlow1_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimCliffClimbSlow1_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimCliffClimbSlow1_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimCliffClimbSlow1_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTYoshiAnimCliffClimbSlow1_joint19, /* [18] joint 19 */
	(u32)dFTYoshiAnimCliffClimbSlow1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTYoshiAnimCliffClimbSlow1_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTYoshiAnimCliffClimbSlow1_joint24, /* [23] joint 24 */
	(u32)dFTYoshiAnimCliffClimbSlow1_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	0xFFFF0164, /* [26] END */
};

/* Joint 1 */
u16 dFTYoshiAnimCliffClimbSlow1_joint1[34] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX), 13,
	ftAnimSetValRate(FT_ANIM_TRAZ), -214, -4,
	ftAnimSetValBlock(FT_ANIM_TRAY), -519,
	ftAnimSetValT(FT_ANIM_TRAY, 8), -519,
	ftAnimSetValRateT(FT_ANIM_TRAX, 8), 13, -9,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), -115, 90,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 0, 40,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 377,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, -4, 0, 188,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimCliffClimbSlow1_joint2[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 672, 0,
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), 268,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 22), 0,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimCliffClimbSlow1_joint3[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -914, 28, 0, -1, -194, 35, -455, -13, -133, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), -224, 30, -31, -2, -119, 51, 64, 41,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 67, 156,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), -240, -13,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 20), 0, -89, 0, 20,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimCliffClimbSlow1_joint4[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 962, -54, 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 745, -16, 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 829, -28, 5, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 22), 16, 0,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTYoshiAnimCliffClimbSlow1_joint5[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 478, 353,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 600, 329,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 82, -12, 1, 7, -18, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -367, 6, 103, 5, 0, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 600, 329,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 184, 20, 76, -4,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimCliffClimbSlow1_joint7[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 0, -5,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 60), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 30,
	ftAnimBlock(0, 11),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimCliffClimbSlow1_joint8[88] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 17, 59, 251, -9, -603, 126,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 353, 140, -13, -283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -227, 314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 152, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 480, 298, -367, -221, 334, -94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -233, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 949, -114, -37, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 251, -451, 491, 254,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -27, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 13, 153, 472, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 13, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -90, -26, 156, -263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -80, 31, -104, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -27, 52, 34, 20, -103, 1,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTYoshiAnimCliffClimbSlow1_joint9[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -943, -109,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1293, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1138, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -959, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -870, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimCliffClimbSlow1_joint11[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -804, 13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -1251, 26,
	ftAnimBlock(0, 11),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTYoshiAnimCliffClimbSlow1_joint12[72] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 103, 60, 347, -52, -605, 112,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 512, 181, 105, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -255, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 172,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 52, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 675, 117, -46, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 556, -47, 65, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 31, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -5, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 509, -59, 60, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 438, -45, 67, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 419, -19, 57, -10, -4, 1,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimCliffClimbSlow1_joint13[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -854, -60,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1061, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -899, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -674, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -596, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -625, -29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimCliffClimbSlow1_joint14[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -804, 36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -628, 26,
	ftAnimBlock(0, 11),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimCliffClimbSlow1_joint15[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -870, -57, -429, -15, 314, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -2315, 11, -1042, -15, 1550, -10,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -536, -893, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTYoshiAnimCliffClimbSlow1_joint16[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -354, -2, 56, -2, 10, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 31, 4, 7, -1, 1, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimBlock(0, 11),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimCliffClimbSlow1_joint18[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -589, 2, 122, -4, -12, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 186, 12, 16, -3, -1, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimBlock(0, 11),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTYoshiAnimCliffClimbSlow1_joint19[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 140, -8, 135, -8, 821, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -10, -18, -13, -24, 735, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -28, -17, -38, -25, 724, -10,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimCliffClimbSlow1_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimCliffClimbSlow1_joint23[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1692, 8, -236, 2, 335, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -1682, -13, -194, 5, 222, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1697, -14, -188, 5, 208, -14,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimCliffClimbSlow1_joint24[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -623, -92, 173, -271, -339, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -715, -221, -98, -309, -419, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1065, -291, -445, -60, -195, 146,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -953, 297, -446, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -218, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -90, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 149, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -622, 262, 333, 105, -288, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -165, 66, 237, -51, 73, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -131, 33, 200, -37, 92, 19,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimCliffClimbSlow1_joint26[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1239, 115,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1376, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1188, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1202, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1063, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 731, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 649, -82,
	ftAnimEnd(),
	0x0000, 0x200E, 0x06C5, 0x002A, 0xFFAB, 0x000E, 0x0169, 0xFFF3, 0x280D, 0x000A, 0x0109, 0x001E, 0xFFA1, 0xFF83, 0x2003, 0x0002, 0x077E, 0x006C, 0x2003, 0x0001, 0x07CA, 0xFFF1, 0x2003, 0x0002, 0x072A, 0x0012, 0x2003, 0x0001, 0x0785, 0x0062, 0x2003, 0x0004, 0x0825, 0xFFC9, 0x200F, 0x0001, 0x07E7, 0xFFC3, 0x011C, 0x0012, 0xFF21, 0xFF81, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
