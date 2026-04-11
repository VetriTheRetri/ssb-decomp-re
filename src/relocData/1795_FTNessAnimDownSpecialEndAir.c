/* AnimJoint data for relocData file 1795 (FTNessAnimDownSpecialEndAir) */
/* 1488 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimDownSpecialEndAir_joint1[20];
extern u16 dFTNessAnimDownSpecialEndAir_joint2[20];
extern u16 dFTNessAnimDownSpecialEndAir_joint4[12];
extern u16 dFTNessAnimDownSpecialEndAir_joint5[66];
extern u16 dFTNessAnimDownSpecialEndAir_joint6[32];
extern u16 dFTNessAnimDownSpecialEndAir_joint7[12];
extern u16 dFTNessAnimDownSpecialEndAir_joint8[30];
extern u16 dFTNessAnimDownSpecialEndAir_joint10[12];
extern u16 dFTNessAnimDownSpecialEndAir_joint11[76];
extern u16 dFTNessAnimDownSpecialEndAir_joint12[32];
extern u16 dFTNessAnimDownSpecialEndAir_joint13[24];
extern u16 dFTNessAnimDownSpecialEndAir_joint15[12];
extern u16 dFTNessAnimDownSpecialEndAir_joint16[68];
extern u16 dFTNessAnimDownSpecialEndAir_joint18[24];
extern u16 dFTNessAnimDownSpecialEndAir_joint19[46];
extern u16 dFTNessAnimDownSpecialEndAir_joint21[42];
extern u16 dFTNessAnimDownSpecialEndAir_joint22[48];
extern u16 dFTNessAnimDownSpecialEndAir_joint24[32];
extern u16 dFTNessAnimDownSpecialEndAir_joint25[84];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimDownSpecialEndAir_joints[] = {
	(u32)dFTNessAnimDownSpecialEndAir_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimDownSpecialEndAir_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimDownSpecialEndAir_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimDownSpecialEndAir_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimDownSpecialEndAir_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimDownSpecialEndAir_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimDownSpecialEndAir_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimDownSpecialEndAir_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimDownSpecialEndAir_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimDownSpecialEndAir_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimDownSpecialEndAir_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimDownSpecialEndAir_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimDownSpecialEndAir_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimDownSpecialEndAir_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimDownSpecialEndAir_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimDownSpecialEndAir_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimDownSpecialEndAir_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimDownSpecialEndAir_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimDownSpecialEndAir_joint25, /* [24] joint 25 */
	0xFFFF0161, /* [25] END */
};

/* Joint 1 */
u16 dFTNessAnimDownSpecialEndAir_joint1[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 242,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 122,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 242, 106,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), 242,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimDownSpecialEndAir_joint2[20] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 569, -602, -595,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 569, -602, -595,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 15,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -209, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimDownSpecialEndAir_joint4[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 148, 0, 0, 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 27,
	ftAnimBlock(0, 11),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimDownSpecialEndAir_joint5[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 124, 211, -683, -30, 2728, -221,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -708, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 335, 281, 2507, -291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 688, -96, 2146, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 141, -256, 2711, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 174, 114, 2677, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 417, -399, 2423, 406,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -229, -365, -718, 13, 3080, 375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -252, 60, -663, 10, 3118, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -192, 59, -659, 3, 3060, -57,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimDownSpecialEndAir_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -596, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -627, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -543, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -479, 63,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimDownSpecialEndAir_joint7[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 268, 143, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 27,
	ftAnimBlock(0, 11),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimDownSpecialEndAir_joint8[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -466, 4, 688, 0, -403, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -440, 0, 688, 0, -403, 1,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 12,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 194, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimDownSpecialEndAir_joint10[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 27,
	ftAnimBlock(0, 11),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimDownSpecialEndAir_joint11[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -477, -317, 658, -172, -1103, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -908, 158, 447, 86, -1474, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -477, 369, 658, 118, -1103, 345,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 540, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -168, 336, -784, 359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 195, 257, -384, 299,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 447, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 67, 55,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 543, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 620, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 484, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 516, 22, 114, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 529, 13, 642, 21, 133, 19,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimDownSpecialEndAir_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -336, 327,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -336, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -501, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -531, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -465, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -454, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimDownSpecialEndAir_joint13[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -430, 58, -130,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -430, 58, -130,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 15,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -170, -63, 267,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNessAnimDownSpecialEndAir_joint15[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	_FT_ANIM_CMD(11, 0, 1), 27,
	ftAnimBlock(0, 11),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimDownSpecialEndAir_joint16[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1107, 31, -992, -23, 309, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1107, -15, -992, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 242, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 309, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 357, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1080, 36, -1013, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1276, -164, -1205, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 487, 160,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 857, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1458, -164, -1205, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1605, -100, -1232, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1660, -55, -1253, -20, 933, 76,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimDownSpecialEndAir_joint18[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1197, 27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 768, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 606, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 458, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 386, -71,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimDownSpecialEndAir_joint19[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1615, 1, 1634, 1, -1552, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1565, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1569, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1470, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1431, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1577, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1598, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1594, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1600, 23, 1573, 4, -1583, 11,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimDownSpecialEndAir_joint21[42] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -40, 0, 463, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 519,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 360, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -210, 492,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -40, -37, 463, 3, 519, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -397, -54, 375, -35, 471, -50,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -476, 178, 112,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTNessAnimDownSpecialEndAir_joint22[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 344, -2, 50, 19, -211, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 303, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 15, -9, -349, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 25, 46, -454, -99,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 412, 43, -772, -45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 238, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 3, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -45, -48, 433, 21, -797, -24,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimDownSpecialEndAir_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 511, 52,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 611, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 511, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 674, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 692, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 632, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 605, -27,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimDownSpecialEndAir_joint25[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 100, -18, 142, -16, -74, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -138, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -8, -93, 219, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -112, -87, 239, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -40, 51, -79, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -153, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -44, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, 30, -102, -22, -20, 23,
	ftAnimEnd(),
	0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x280C, 0xFE33, 0x0000, 0x00B4, 0xFFFF, 0x3802, 0xFF72, 0x380F, 0x0002, 0xFEF2, 0xFE40, 0x0104, 0x200F, 0x0001, 0xFF72, 0xFFD0, 0xFE33, 0x0044, 0x00B4, 0x0001, 0x200F, 0x0004, 0xFDFE, 0xFFE8, 0xFF97, 0x0019, 0x010B, 0xFFCF, 0x380F, 0x0004, 0xFEAD, 0xFF00, 0xFF2D, 0x0000,
};
