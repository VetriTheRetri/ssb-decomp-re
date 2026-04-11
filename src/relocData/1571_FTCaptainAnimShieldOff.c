/* AnimJoint data for relocData file 1571 (FTCaptainAnimShieldOff) */
/* 1520 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimShieldOff_joint2[28];
extern u16 dFTCaptainAnimShieldOff_joint3[12];
extern u16 dFTCaptainAnimShieldOff_joint5[26];
extern u16 dFTCaptainAnimShieldOff_joint6[104];
extern u16 dFTCaptainAnimShieldOff_joint7[56];
extern u16 dFTCaptainAnimShieldOff_joint8[22];
extern u16 dFTCaptainAnimShieldOff_joint9[26];
extern u16 dFTCaptainAnimShieldOff_joint11[26];
extern u16 dFTCaptainAnimShieldOff_joint12[98];
extern u16 dFTCaptainAnimShieldOff_joint13[48];
extern u16 dFTCaptainAnimShieldOff_joint14[34];
extern u16 dFTCaptainAnimShieldOff_joint15[12];
extern u16 dFTCaptainAnimShieldOff_joint17[18];
extern u16 dFTCaptainAnimShieldOff_joint18[24];
extern u16 dFTCaptainAnimShieldOff_joint20[16];
extern u16 dFTCaptainAnimShieldOff_joint22[24];
extern u16 dFTCaptainAnimShieldOff_joint23[46];
extern u16 dFTCaptainAnimShieldOff_joint25[24];
extern u16 dFTCaptainAnimShieldOff_joint26[62];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTCaptainAnimShieldOff_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTCaptainAnimShieldOff_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimShieldOff_joint3, /* [2] joint 3 */
	(u32)dFTCaptainAnimShieldOff_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTCaptainAnimShieldOff_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimShieldOff_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimShieldOff_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimShieldOff_joint9, /* [8] joint 9 */
	(u32)dFTCaptainAnimShieldOff_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTCaptainAnimShieldOff_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimShieldOff_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimShieldOff_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimShieldOff_joint15, /* [14] joint 15 */
	(u32)dFTCaptainAnimShieldOff_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTCaptainAnimShieldOff_joint18, /* [17] joint 18 */
	(u32)dFTCaptainAnimShieldOff_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTCaptainAnimShieldOff_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTCaptainAnimShieldOff_joint23, /* [22] joint 23 */
	(u32)dFTCaptainAnimShieldOff_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTCaptainAnimShieldOff_joint26, /* [25] joint 26 */
	0xFFFF0174, /* [26] END */
};

/* Joint 2 */
u16 dFTCaptainAnimShieldOff_joint2[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1473, -168, 241, 434,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1473, 84, 325, -160,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 1600, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 10), 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTCaptainAnimShieldOff_joint3[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 107, 0, 4, -76, 9,
	_FT_ANIM_CMD(11, 0, 1), 4,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimShieldOff_joint5[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -31, 47,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 187, 0, -90, -15, -7, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 187, 0, -90, 7, -7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 189, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTCaptainAnimShieldOff_joint6[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 374, 2, 241, 37, -471, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 199, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 376, -20, -508, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 334, -210, -494, 502,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -43, -165, -207, -247, 496, 382,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2, 31, -294, -56, 270, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18, -45, -321, -21, 230, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -323, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -88, -106, 375, 130,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -162, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 492, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -352, -14, 375, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 79, 198, -351, 80, -27, -359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 234, 84, -191, 152, -342, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 247, 2, -47, 98, -478, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, -7, 5, 52, -524, -46,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimShieldOff_joint7[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -887, 104,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -783, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -778, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1131, 386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 565,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -364, -400,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -800, -351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1067, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1146, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1033, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 76,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimShieldOff_joint8[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2860, 70, -32, 9, -344, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2860, -35, -32, -4, -344, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 2435, -89, -388,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTCaptainAnimShieldOff_joint9[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 0, 11,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 92, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -51, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimShieldOff_joint11[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 0, 8,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 66, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -48, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTCaptainAnimShieldOff_joint12[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 612, 109, -1370, -9, 866, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1488, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 721, 70, 824, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 752, 359, 879, 697,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1440, 495, -1915, -206, 2219, 539,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1743, 161, -1901, 13, 1958, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1763, 26, -1887, 27, 1950, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1657, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1796, 38, 1993, 96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1810, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2144, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2206, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2225, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1735, -91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1524, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1681, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1730, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1479, -45, -1752, -22, 2200, -24,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimShieldOff_joint13[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -909, 72,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -837, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1021, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -879, 508,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 439,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -109, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -489, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -700, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1011, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, -13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimShieldOff_joint14[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 652, 63, 311, 6, 1343, 213,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 652, -78, 311, -129, 1343, -351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 339, -38, -205, -3, -64, -128,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 270, 275, 62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTCaptainAnimShieldOff_joint15[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	_FT_ANIM_CMD(11, 0, 1), 4,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimShieldOff_joint17[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 18, 0, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), 0, 18, 0, -3,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTCaptainAnimShieldOff_joint18[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 187, -3, 108, 0, -580, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 190, 0, 71, -1, -475, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 0, 70, -1, -472, 2,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimShieldOff_joint20[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 636, 37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 452, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimShieldOff_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1752, 2, 1651, 0, -1605, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -1735, 0, 1650, 0, -1532, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1735, 0, 1650, 0, -1528, 3,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimShieldOff_joint23[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 323, 29, 169, -10, 85, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 91, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 110, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 323, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 289, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 161, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 61, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -73, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, -1, 110, 0, -76, -3,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimShieldOff_joint25[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 542, -45,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 472, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 485, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 541, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTCaptainAnimShieldOff_joint26[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 232, 16, 206, -19, -350, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 170, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -282, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 321, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 335, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 364, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 165, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 162, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, -1, 365, 1, -279, 2,
	ftAnimEnd(),
	0x40C0, 0x04B0, 0x01E0, 0x4820, 0x0000, 0x20C1, 0x0002, 0x04B0, 0x004F, 0x0258, 0xFF39, 0x38C1, 0x000A, 0x0528, 0x00B4, 0x0000,
};
