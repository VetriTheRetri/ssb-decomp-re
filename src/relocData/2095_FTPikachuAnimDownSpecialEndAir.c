/* AnimJoint data for relocData file 2095 (FTPikachuAnimDownSpecialEndAir) */
/* 3136 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimDownSpecialEndAir_joint1[40];
extern u16 dFTPikachuAnimDownSpecialEndAir_joint2[42];
extern u16 dFTPikachuAnimDownSpecialEndAir_joint3[58];
extern u16 dFTPikachuAnimDownSpecialEndAir_joint5[58];
extern u16 dFTPikachuAnimDownSpecialEndAir_joint6[150];
extern u16 dFTPikachuAnimDownSpecialEndAir_joint7[64];
extern u16 dFTPikachuAnimDownSpecialEndAir_joint8[52];
extern u16 dFTPikachuAnimDownSpecialEndAir_joint9[12];
extern u16 dFTPikachuAnimDownSpecialEndAir_joint10[50];
extern u16 dFTPikachuAnimDownSpecialEndAir_joint11[50];
extern u16 dFTPikachuAnimDownSpecialEndAir_joint13[50];
extern u16 dFTPikachuAnimDownSpecialEndAir_joint14[106];
extern u16 dFTPikachuAnimDownSpecialEndAir_joint16[24];
extern u16 dFTPikachuAnimDownSpecialEndAir_joint17[140];
extern u16 dFTPikachuAnimDownSpecialEndAir_joint19[72];
extern u16 dFTPikachuAnimDownSpecialEndAir_joint21[120];
extern u16 dFTPikachuAnimDownSpecialEndAir_joint22[150];
extern u16 dFTPikachuAnimDownSpecialEndAir_joint24[56];
extern u16 dFTPikachuAnimDownSpecialEndAir_joint25[222];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimDownSpecialEndAir_joints[] = {
	(u32)dFTPikachuAnimDownSpecialEndAir_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimDownSpecialEndAir_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimDownSpecialEndAir_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimDownSpecialEndAir_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimDownSpecialEndAir_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimDownSpecialEndAir_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimDownSpecialEndAir_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimDownSpecialEndAir_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimDownSpecialEndAir_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimDownSpecialEndAir_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimDownSpecialEndAir_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimDownSpecialEndAir_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimDownSpecialEndAir_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimDownSpecialEndAir_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimDownSpecialEndAir_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimDownSpecialEndAir_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimDownSpecialEndAir_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimDownSpecialEndAir_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimDownSpecialEndAir_joint25, /* [24] joint 25 */
	0xFFFF02E6, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimDownSpecialEndAir_joint1[40] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, 33, -28,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1084, 36, 106, 12,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), -69, -84,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 977, 144,
	ftAnimSetValRateT(FT_ANIM_TRAY, 16), 999, -174,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), -69, 77,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 924, 46, 85, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 1114, -108,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimDownSpecialEndAir_joint2[42] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, 17, 245, -5, 43, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 212, 11, 181, -3, 36, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 212, -10, 181, 4, 36, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 47, 39, 245, -15, 43, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 999, -124, 300,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimDownSpecialEndAir_joint3[58] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -122, -39, 0, 11, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -517, -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -517, 48,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 255, 22, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 252, 0, 0, 0, -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 252, -26, 0, 5, -1, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -173, 58, -73,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPikachuAnimDownSpecialEndAir_joint5[58] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 518, -41, 78, -12, 175, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 456, -27, 59, -8, 178, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 456, 28, 59, -65, 178, 19,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 513, -100, -70, -91, 216, 72,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 330, -331, -54, 77, 268, 144,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 223, -105, -3, -12, 342, 168,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 199, -70, 479,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPikachuAnimDownSpecialEndAir_joint6[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2775, 15, -1290, 2, 511, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1153, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 3113, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 112, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 95, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 131, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1154, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1169, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3117, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 2735, -163,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 202, 101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 783, 51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2563, -166, -1216, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2325, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1342, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1442, -18, 822, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 822, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2487, 139, -1379, -88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2672, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1619, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1874, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1796, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1817, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2641, -93, 855, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1747, -119,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 643, 75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1795, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1593, 64,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1676, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1642, -28, 783, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1620, -21, -1551, 41, 797, 14,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimDownSpecialEndAir_joint7[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -87, 77,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -625, -372,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -457, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -361, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -156, -317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -645, -301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -758, -113,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimDownSpecialEndAir_joint8[52] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRate(FT_ANIM_ROTX), -35, -30,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -404, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -404, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 112, 63, 0, -9, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 229, 16, -94, -13, 11, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 229, -70, -94, -24, 11, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -478, -335, -28,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimDownSpecialEndAir_joint9[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1598, -1559, 4035, 39, 48, 495,
	_FT_ANIM_CMD(11, 0, 1), 32,
	ftAnimBlock(0, 38),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimDownSpecialEndAir_joint10[50] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 67, -26, -177, 31, 306, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -256, -17, 200, 21, 202, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -256, 20, 200, -23, 202, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 67, -3, -177, -14, 306, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -318, -14, -37, 24, 64, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -132, 170, 229,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPikachuAnimDownSpecialEndAir_joint11[50] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 59, -27, 211, -31, -316, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -267, -18, -168, -21, -261, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -267, 20, -168, 23, -261, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 59, -15, 211, 13, -316, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -511, -4, 44, -27, -66, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -3, -171, -270,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPikachuAnimDownSpecialEndAir_joint13[50] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -519, 25, 43, -12, 183, -9,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -481, 17, 24, -8, 168, -6,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -481, 8, 24, -76, 168, 22,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -463, 33, -128, -42, 213, 23,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -427, -3, -44, 213, 205, -70,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -469, 245, 91,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPikachuAnimDownSpecialEndAir_joint14[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 646, -40, 1224, 0, 475, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 294, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1177, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), 303, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 334, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1045, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 335, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 979, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1172, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1728, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1274, 179,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1475, -22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 944, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 806, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1425, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 873, -48,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1678, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1487, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 839, -26, 773, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 805, -3, 721, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 803, -1, 1481, -5, 717, -3,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimDownSpecialEndAir_joint16[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimDownSpecialEndAir_joint17[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1672, 144, 1977, 5, 1383, -203,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 2065, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1913, -16, 985, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1898, -15, 956, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 1905, 28, 890, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1932, 23, 871, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1633, -214, 1180, 278,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2039, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1847, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1376, -135, 1544, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1359, -10, 1528, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1342, -18, 1476, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1310, -126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1365, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1835, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1903, 57,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1118, -148,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 776, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1936, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1694, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1374, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1495, 78,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 664, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 608, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1748, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1575, 55, 1812, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1606, 31, 1849, 36, 629, 20,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimDownSpecialEndAir_joint19[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 307, 248,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 769, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 807, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 964, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 961, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 573, -362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 68, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 263, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 373, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 512, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 685, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 925, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimDownSpecialEndAir_joint21[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -176, -5, 211, 36, 461, -104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 163, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 315, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 351, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 346, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 464, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 178, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 5, -68,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 328, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 203, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -57, -45, 122, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 259, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 125, -40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 517, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 675, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 284, 23, 680, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 549, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 228, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 91, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 61, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -47, -60, 628, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2, 49, 602, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 188, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 208, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 230, 22, 39, 37, 585, -16,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimDownSpecialEndAir_joint22[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 229, -92, 372, 52, -79, -118,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -221, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 205, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 58, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 142, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 410, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -148, 70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 25, -42,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 216, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 356, -20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 379, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -115, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -25, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -663, -71,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 336, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 461, 128,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -126, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3, 153,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -572, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 618, 114,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 517, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 190, 100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 243, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -550, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -550, -85,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 301, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 223, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 528, 8, -654, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 533, 3, -744, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 202, -21, 535, 1, -780, -36,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimDownSpecialEndAir_joint24[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 486, 181,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 795, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 762, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 363, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 404, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 652, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 588, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 687, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 650, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 664, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 639, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 601, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimDownSpecialEndAir_joint25[222] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1538, 16, 1836, 19, -1220, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1550, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 1700, 0, -1139, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1703, 3, -1144, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1410, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1777, 2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1581, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1996, 113,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1458, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1260, -10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2125, 180, 1783, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2826, 518,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1930, 146,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1279, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1147, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3394, 468,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3906, 163,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2116, 134,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 2038, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4090, 310, -1205, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4527, 319, -1512, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4728, 104, 1846, -137, -1649, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1694, -15, -1374, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 4621, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4583, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4568, -15, 1685, -8, -1337, 37,
	ftAnimEnd(),
	0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x270E, 0xFF77, 0x0012, 0x0022, 0xFFF8, 0x0035, 0x001F, 0x1333, 0xFF4A, 0x1666, 0xFE94, 0x1333, 0xFF4A, 0x280F, 0x0008, 0xFF39, 0xFFFD, 0x006D, 0x0004, 0x00E0, 0x0009, 0x2701, 0x0001, 0x1000, 0xFFD5, 0x1000, 0xFFAA, 0x1000, 0xFFD5, 0x1A01, 0x0025, 0x1000, 0x4501, 0x0025, 0x1000, 0x1000, 0x0801, 0x0007, 0x200F, 0x000A, 0xFF39, 0x000E, 0x006D, 0xFFFC, 0x00E0, 0xFFF6, 0x200F, 0x0006, 0x001F, 0xFFDB, 0x0022, 0xFFF6, 0x0035, 0xFFEB, 0x200F, 0x0004, 0xFDC5, 0xFF80, 0x0008, 0xFFF3, 0x0007, 0xFFBD, 0x200F, 0x0003, 0xFC9D, 0x0002, 0xFFC8, 0xFFEF, 0xFE5E, 0xFFCD, 0x380F, 0x0007, 0xFDE1, 0xFF5C, 0xFE08, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
