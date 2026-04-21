/* AnimJoint data for relocData file 477 (FTPikachuAnimWin1) */
/* 2336 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimWin1_joint1[42];
extern u16 dFTPikachuAnimWin1_joint2[42];
extern u16 dFTPikachuAnimWin1_joint3[80];
extern u16 dFTPikachuAnimWin1_joint5[40];
extern u16 dFTPikachuAnimWin1_joint6[92];
extern u16 dFTPikachuAnimWin1_joint7[8];
extern u16 dFTPikachuAnimWin1_joint8[100];
extern u16 dFTPikachuAnimWin1_joint9[10];
extern u16 dFTPikachuAnimWin1_joint10[98];
extern u16 dFTPikachuAnimWin1_joint11[148];
extern u16 dFTPikachuAnimWin1_joint13[52];
extern u16 dFTPikachuAnimWin1_joint14[148];
extern u16 dFTPikachuAnimWin1_joint16[8];
extern u16 dFTPikachuAnimWin1_joint17[20];
extern u16 dFTPikachuAnimWin1_joint19[14];
extern u16 dFTPikachuAnimWin1_joint21[64];
extern u16 dFTPikachuAnimWin1_joint22[24];
extern u16 dFTPikachuAnimWin1_joint24[14];
extern u16 dFTPikachuAnimWin1_joint25[64];
extern u16 dFTPikachuAnimWin1_joint26[48];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimWin1_joints[] = {
	(u32)dFTPikachuAnimWin1_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimWin1_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimWin1_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimWin1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimWin1_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimWin1_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimWin1_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimWin1_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimWin1_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimWin1_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimWin1_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimWin1_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimWin1_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimWin1_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimWin1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimWin1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimWin1_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimWin1_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimWin1_joint25, /* [24] joint 25 */
	(u32)dFTPikachuAnimWin1_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimWin1_joint1[42] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 675, -15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -35, 31, -26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 675, 31, -15, 5,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 734, 15, -6, 2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), 734, -15, -6, -2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 675, -47, -15, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 675, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 70), 675, -15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimWin1_joint2[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 24, -39, 22,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 25, 0, -91, -1, 19, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 25), 25, 0, 19, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 25), -91,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 24, 0, -39, 0, 22, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 75), 24, -39, 22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimWin1_joint3[80] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 7, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -13, -9, 7, -1, -13, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -154, -5, -132, -5, -58, -1,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -154, -132, -58,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 5, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -13, 4, 7, 4, -2, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -13, 7, 7, 4, -2, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 206, 7, 139, 4, 108, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 206, -7, 139, -4, 108, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -13, -8, 7, -5, -2, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -13, 7, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPikachuAnimWin1_joint5[40] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 303, -92, 375,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 45), 303, -92, 375,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 303, -39, -92, 20, 375, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 157, -13, 435,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 303, 26, -92, -13, 375, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 303, -92, 375,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimWin1_joint6[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, 1361, 3, -2039, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 33), -2094, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 117), -804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 27), 1522, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1513, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1495, -23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2104, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -2165, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1417, -21, -2102, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -2217, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 18), 1247, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1109, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1241, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2329, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -2133, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2102, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -2038, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1282, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 21), 1364, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -804, 0, 1361, 0, -2039, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimWin1_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 120),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimWin1_joint8[100] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2, -7, 8,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 2, -4, -7, -15, 8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -85, -3, -326, -12, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -85, -326,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -2, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 2, 2, -7, 10, 8, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 2, -7, 8,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, 4, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 148, 4, 113, 4, 229, 7,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 148, 113, 229,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, -5, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 2, -10, -7, -17, 8, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -3, -1, -119, 0, -17, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -9, 0, 128, 0, 2, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 2, -7, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPikachuAnimWin1_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 120),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimWin1_joint10[98] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 20, 0, -1, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 162, -14, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -7, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, -4, 0, 1, 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -98, 32, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 3, 0, -1, 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 31), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 4, -4, -2, 0, 25, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -33, -1, -5, 0, 165, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -7, 5, 0, 0, -15, -27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimWin1_joint11[148] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, -2, -8, -2, -6, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -48, 0, -48, -1, -137, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1, 2, -18, 0, -15, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 3, 0, -38, 2, -30, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 20, 0, 43, -1, -3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 4, 0, -46, -1, -37, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, -1, 0, 16, 0, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -31, 29, 332, 38, 266, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 299, 384, 441,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -31, -17, 332, 0, 266, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 159, 0, 385, 8, 376, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -38, -15, 398, -4, 319, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -31, 2, 332, -30, 266, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 1, 0, -36, 0, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -21, -4, -31, -3, -163, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -42, 1, -31, 3, 19, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -8, 7, -7, 5, -100, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPikachuAnimWin1_joint13[52] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -291, -99, 370,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -348, -10, -117, -3, 355, -2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), -348, 9, -117, 2, 355, 2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), -291, -28, -99, 42, 370, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -457, 43, 311,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), -291, 29, -99, -25, 370, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -291, -99, 370,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPikachuAnimWin1_joint14[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 784, 0, 1922, -12, 1242, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 33), 1257, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 42), 872, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 18), 1414, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1402, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 1693, 36,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1234, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 999, 30,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 894, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 860, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1805, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1919, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1122, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1263, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1221, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1890, -49, 1038, -117,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1428, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 990, 21, 515, -138,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 981, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 209, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1611, 22, 430, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1441, 13, 175, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 987, -5, 1642, 55, 537, 95,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 1922, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), 1245, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 21), 780, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 779, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 783, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1922, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1922, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 784, 0, 1922, 0, 1242, -1,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimWin1_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 120),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimWin1_joint17[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 1653, 0, -1601, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 1256,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 117), 1653, -1601,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1653, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -1601,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTPikachuAnimWin1_joint19[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 926, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 117), 926,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 926,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimWin1_joint21[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1782, 0, -1367, 0, 1305, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 45), -1775, 9, -1363, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1357, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1430, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 1457, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1449, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1282, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1771, 0, -1361, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 69), -1782, 0, -1367, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1292, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 66), 1305, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1782, 0, -1367, 0, 1305, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimWin1_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -30, 0, 8, 0, -369, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 117), -30, 0, 8, 0, -369, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -30, 0, 8, 0, -369, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimWin1_joint24[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 923, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 117), 923,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 923,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimWin1_joint25[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1784, -1, -1862, 0, 1342, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 45), 1778, -8, -1866, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1396, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1469, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 1481, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1472, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1320, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1773, 0, -1868, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 69), 1784, 0, -1862, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1329, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 66), 1342, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1784, 0, -1862, 0, 1342, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimWin1_joint26[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -14, 0, 0, 0, -3, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -16, 0, 0, 0, -254, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -16, 0, 0, 0, -254, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -14, 0, 0, 0, -3, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), -14, 0, -3,
	ftAnimEnd(),
	0x0000, 0x0000,
};
