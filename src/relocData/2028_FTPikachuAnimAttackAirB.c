/* AnimJoint data for relocData file 2028 (FTPikachuAnimAttackAirB) */
/* 4320 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimAttackAirB_joint1[38];
extern u16 dFTPikachuAnimAttackAirB_joint2[44];
extern u16 dFTPikachuAnimAttackAirB_joint3[70];
extern u16 dFTPikachuAnimAttackAirB_joint5[62];
extern u16 dFTPikachuAnimAttackAirB_joint6[186];
extern u16 dFTPikachuAnimAttackAirB_joint7[72];
extern u16 dFTPikachuAnimAttackAirB_joint8[54];
extern u16 dFTPikachuAnimAttackAirB_joint9[10];
extern u16 dFTPikachuAnimAttackAirB_joint10[70];
extern u16 dFTPikachuAnimAttackAirB_joint11[70];
extern u16 dFTPikachuAnimAttackAirB_joint13[62];
extern u16 dFTPikachuAnimAttackAirB_joint14[178];
extern u16 dFTPikachuAnimAttackAirB_joint16[70];
extern u16 dFTPikachuAnimAttackAirB_joint17[236];
extern u16 dFTPikachuAnimAttackAirB_joint19[72];
extern u16 dFTPikachuAnimAttackAirB_joint21[230];
extern u16 dFTPikachuAnimAttackAirB_joint22[242];
extern u16 dFTPikachuAnimAttackAirB_joint24[88];
extern u16 dFTPikachuAnimAttackAirB_joint25[200];
extern u16 dFTPikachuAnimAttackAirB_joint26[54];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimAttackAirB_joints[] = {
	(u32)dFTPikachuAnimAttackAirB_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimAttackAirB_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimAttackAirB_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimAttackAirB_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimAttackAirB_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimAttackAirB_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimAttackAirB_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimAttackAirB_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimAttackAirB_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimAttackAirB_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimAttackAirB_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimAttackAirB_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimAttackAirB_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimAttackAirB_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimAttackAirB_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimAttackAirB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimAttackAirB_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimAttackAirB_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimAttackAirB_joint25, /* [24] joint 25 */
	(u32)dFTPikachuAnimAttackAirB_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimAttackAirB_joint1[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1114, -108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -26, 33, -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 824, -330, 76, 211,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 824, 225, 76, -582,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1021, 157, -432, -220,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 1061, 23, -254, 81,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 23), 1114, -108,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimAttackAirB_joint2[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 999, -124, 300,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 358, -91, -26, 14, 20, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 358, 44, -26, 3, 20, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 671, 26, 0, 2, 135, 9,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 671, 0, 135,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 999, -124, 3517,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimAttackAirB_joint3[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -173, 58, -73,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 302, 67, 0, -8, 0, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 302, -24, 0, 53, 0, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 134, -14, 371, 30, 118, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 134, -10, 371, -51, 118, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -18, -22, -407, -64, 91, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -115, -13, -338, 65, 137, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -167, -4, 312, 33, -189, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -173, 58, -73,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimAttackAirB_joint5[62] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 199, -70, 479,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 295, 109, -77, -7, 362, -134,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 295, -3, -77, -181, 362, 37,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 292, 59, -213, -376, 389, -141,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 317, 19, -218, -4, 309, -64,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 317, 29, -218, 12, 309, -47,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 372, -41, -194, 51, 219, 59,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 199, -70, 479,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimAttackAirB_joint6[186] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 11, 5, -56, -52, -811, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -188, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 129, 175, -778, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 369, 154, -874, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -874, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 327, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -203, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -188, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -34, 127, -903, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 67, -67, -809, 528,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 422, 50, -168, -116, 154, 491,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -163, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 424, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 173, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 184, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 102, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -160, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -404, -89,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 423, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 373, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 258, -289, 30, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -204, -258, 271, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -257, 78, -489, -68, 46, -286,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -235, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 129, 143, -562, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 238, 88, -756, -191,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 137, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -946, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -942, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -948, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -208, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -66, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 111, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 11, -6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -983, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -818, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 11, 0, -56, 9, -811, 7,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimAttackAirB_joint7[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -758, 78,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -680, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -373,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -746, -425,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -860, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -395, 314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -663, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -758, -95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimAttackAirB_joint8[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -478, -335, -28,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 336, 116, 309, 92, 128, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 336, -12, 309, -10, 128, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 246, -7, 233, -6, -326, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 246, -1, 233, -6, -326, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 220, -31, 129, -24, -298, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -478, -335, -28,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimAttackAirB_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1598, -1559, 4035, 39, 48, 495,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimAttackAirB_joint10[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -132, 170, 229,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -737, -86, 8, -23, 202, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -737, 99, 8, 44, 202, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -43, 21, 322, 3, 292, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -526, -8, 47, 4, 23, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -165, 27, 390, 9, 342, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -175, 56, 174, -25, 420, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 454, 3, 112, 0, 207, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -132, 170, 229,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimAttackAirB_joint11[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, -171, -270,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -380, -53, -141, 4, -122, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -380, -9, -141, 19, -122, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -445, 28, -2, -9, 25, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -93, 5, -237, -2, -375, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -359, 3, -35, 0, 71, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -46, 85, -233, -12, -350, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 585, 3, -171, 5, -270, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -3, -171, -270,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimAttackAirB_joint13[62] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -469, 245, 91,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -363, 121, -31, -316, 357, 304,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -363, -125, -31, 298, 357, -348,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -457, -154, 192, 560, 95, -653,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -421, 10, 178, -22, 112, 40,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -437, 11, 146, -37, 176, -7,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -382, -15, 57, 46, 87, -40,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -469, 245, 91,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimAttackAirB_joint14[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, 3, 122, -19, -890, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -169, 39, -872, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2455, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2549, 304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 3651, 364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3794, 254, -111, 175, -897, -83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 444, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1428, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4159, 651,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5096, 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4784, -168, 314, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 276, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4759, -15, -1451, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1561, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 4947, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 278, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 421, 77,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1547, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1422, 267,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4939, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 5481, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 495, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 193, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1083, 286,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -712, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5539, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 5589, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 175, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 288, -17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -719, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -889, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 257, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 107, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 5598, 9, 109, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 5627, 3, 126, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5629, 1, 127, 0, -890, -1,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimAttackAirB_joint16[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -655, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -580, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -351, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -375, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -424, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -353, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -27, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimAttackAirB_joint17[236] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1, -49, -241, 65, -979, 55,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -809, 149,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -165, 38,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -176, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 41, 144,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 181, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -625, 122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -632, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -105, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -176, -244,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 173, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 83, -165, -705, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -533, -198, -156, -113, -564, 348,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -493, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -143, 125, -7, 361,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 94, 119,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 145, -8,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 6553, 5324, 5324,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 96, 0,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -464, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -342, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 96, 0, 137, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 299, 88,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 29), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 204, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 194, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -238, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -398, -82, 382, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -414, 188, 227, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -186, 246, 146, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 78, 165, -176, 85, -156, -210,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -40, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 144, 31, -275, -105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -492, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -415, -16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -105, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -387, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -633, -185,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -406, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -139, 136,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -416, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -7, 68, -357, 87, -838, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1, 6, -241, 116, -979, -141,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimAttackAirB_joint19[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 932, 132,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1039, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 819, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 747, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1041, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 948, -517,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 443, 330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 660, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 857, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 902, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 975, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, -42,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimAttackAirB_joint21[230] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 230, 175, 39, -27, 585, -32,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -138, -184, 366, -392,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 405, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 157, -105,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 402, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -356, -109, -230, -390,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -340, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -374, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 389, -16, -389, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 368, 186, -356, 226, -230, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 763, 386, 62, 260, 85, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1141, -457, 163, -111, -220, 205,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -151, -601, -160, -104, 496, 413,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 5324, 5324, 5324,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -61, 104, -46, 87, 607, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 569, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 58, 79, 15, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -111, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -51, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 29), 4096, 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 549, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 357, 30,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -101, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 230, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -66, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -75, -57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 394, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 408, 36,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 242, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 45, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -154, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 768, 215,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 444, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 584, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 963, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1311, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1367, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1234, -492, 42, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 383, -501, 40, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 230, -152, 39, 0, 585, 1,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimAttackAirB_joint22[242] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1812, -9, 1074, 25, 828, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1329, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1802, 37, 833, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1888, -16, 1018, 122,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1723, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1178, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1736, 259,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1813, -51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1713, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1723, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1187, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 926, -298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1754, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1456, -45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 528, -291,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 428, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1614, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1856, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1403, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1197, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 458, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 328, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1905, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1812, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1784, -337, 1209, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1138, -421, 1709, 273, 350, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 940, -86, 1756, -27, 540, 120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1137, 108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1370, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 591, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1001, 115,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1254, 113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1466, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1496, 140, 1069, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1600, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 781, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1322, -125, 797, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1291, 125, 821, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1466, 197, 1467, -133, 763, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 948, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1239, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1993, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1999, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1949, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 927, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 875, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1205, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1160, -61,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1914, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1812, -102, 1074, -86, 828, -47,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimAttackAirB_joint24[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 595, 148,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 831, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 741, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 964, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1166, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 707, -293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 580, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 659, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 720, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1113, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1102, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1052, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1086, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 780, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 828, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 711, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 544, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 557, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 547, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 547, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 595, 48,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimAttackAirB_joint25[200] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1350, -68, 1682, -35, -1330, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1478, -193, -1567, -314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1282, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1733, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1611, -69, 1260, -117, -1999, -289,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1257, 5, -2081, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1595, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1655, 35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1260, 1, -1999, 136,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1334, 93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1456, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1707, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1488, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1386, -93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1182, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1300, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1549, -125,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1457, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1791, 88,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1189, 344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1871, 450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2090, 94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1935, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1672, -106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1523, 60,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1892, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1775, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1899, 144,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2043, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1876, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1735, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1838, -248,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1113, -87,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1469, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1332, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1092, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1167, -30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1716, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1685, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1125, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1197, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1350, 153, 1682, -2, -1330, 1,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimAttackAirB_joint26[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -543, -164, -504,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -17, 24, 332, 15, 235, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -196, 7, 46, 0, -128, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 48, 20, 330, 13, 344, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 24, 1, 198, -51, 34, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 69, -33, -234, -21, -165, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -543, -164, -504,
	ftAnimEnd(),
};
