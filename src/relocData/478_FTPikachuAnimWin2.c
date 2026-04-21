/* AnimJoint data for relocData file 478 (FTPikachuAnimWin2) */
/* 1408 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimWin2_joint1[76];
extern u16 dFTPikachuAnimWin2_joint2[32];
extern u16 dFTPikachuAnimWin2_joint3[10];
extern u16 dFTPikachuAnimWin2_joint5[10];
extern u16 dFTPikachuAnimWin2_joint6[24];
extern u16 dFTPikachuAnimWin2_joint7[16];
extern u16 dFTPikachuAnimWin2_joint8[66];
extern u16 dFTPikachuAnimWin2_joint9[10];
extern u16 dFTPikachuAnimWin2_joint10[52];
extern u16 dFTPikachuAnimWin2_joint11[54];
extern u16 dFTPikachuAnimWin2_joint13[10];
extern u16 dFTPikachuAnimWin2_joint14[26];
extern u16 dFTPikachuAnimWin2_joint16[16];
extern u16 dFTPikachuAnimWin2_joint17[26];
extern u16 dFTPikachuAnimWin2_joint19[14];
extern u16 dFTPikachuAnimWin2_joint21[56];
extern u16 dFTPikachuAnimWin2_joint22[24];
extern u16 dFTPikachuAnimWin2_joint24[16];
extern u16 dFTPikachuAnimWin2_joint25[26];
extern u16 dFTPikachuAnimWin2_joint26[88];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimWin2_joints[] = {
	(u32)dFTPikachuAnimWin2_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimWin2_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimWin2_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimWin2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimWin2_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimWin2_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimWin2_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimWin2_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimWin2_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimWin2_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimWin2_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimWin2_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimWin2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimWin2_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimWin2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimWin2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimWin2_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimWin2_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimWin2_joint25, /* [24] joint 25 */
	(u32)dFTPikachuAnimWin2_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimWin2_joint1[76] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), -40, -27, 0, -116,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 749, 4302, 4302, 4302,
	ftAnimSetValBlock(FT_ANIM_ROTY), -263,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 776, 10, 4423, 12, 4423, 12, 4423, 12,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 1), -263,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 121), -263,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 776, -14, 4423, -16, 4423, -16, 4423, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 703, 4096, 4096, 4095,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 776, 14, 4423, 16, 4423, 16, 4423, 16,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 776, -14, 4423, -16, 4423, -16, 4423, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 703, 4096, 4096, 4095,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimWin2_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, -450, 923,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 3, 0, -448, 0, 938, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 7, -454, 880,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 3, -448, 938,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 7, -454, 880,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimWin2_joint3[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 151, 164, -91, 4, 309, 12,
	ftAnimBlock(0, 120),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimWin2_joint5[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -74, -113, 465,
	ftAnimBlock(0, 120),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimWin2_joint6[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 880, 0, 251, 0, -562, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 117), 880, 0, 251, 0, -562, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 880, 0, 251, 0, -562, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimWin2_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 117), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimWin2_joint8[66] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 75, 216, 163, 3967, 3967, 3967,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 104, 51, -501,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 75, -3, 216, 0, 163, 1, 3891, -7, 3891, -7, 3891, -7,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 110), 25, 221, 191,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 3891, 10, 3891, 10, 3891, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 4095, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 3891, -10, 3891, -10, 3891, -10,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 3891, 10, 3891, 10, 3891, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 4095, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPikachuAnimWin2_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 120),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimWin2_joint10[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -526, 0, -76,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 200, 287, -33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), -526, 0, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -526, 8, 0, 2, -76, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -240, 40, 93, 13, 379, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -240, -31, 93, -10, 379, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -526, -8, 0, -2, -76, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), -526, 0, -76,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPikachuAnimWin2_joint11[54] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -297, -76, 407,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -243, 248, 2,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), -297, -76, 407,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -297, -76, 407,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 9, -7, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 17, 45, -337, -37, -174, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 17, -35, -337, 28, -174, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -297, -9, -76, 7, 407, 17,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 27), -297, -76,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 27), 407,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimWin2_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -292, 21, 345,
	ftAnimBlock(0, 120),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimWin2_joint14[26] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -48, 0, -615, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -826,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 117), -48, 0, -615, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 117), -826,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -48, 0, -615, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -826,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimWin2_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 117), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimWin2_joint17[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 858, 0, -2057, 0, 1050, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 117), 859, 0, 1051, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 117), -2061,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 859, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2061, 1051,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTPikachuAnimWin2_joint19[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 117), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimWin2_joint21[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 533, 0, 176, 0, 323, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 84), 547, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 117), 194, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 51), 253, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 257, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 54), 287, -4,
	ftAnimBlock(0, 30),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 547, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 505, 0,
	ftAnimBlock(0, 21),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 274, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 255, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 504, 0, 194, 0, 252, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimWin2_joint22[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 782, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 1624, 1725,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 117), 782, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 117), 1624, 1725,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1624, 0, 1725, 0, 782, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTPikachuAnimWin2_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 540, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 117), 540, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 540, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimWin2_joint25[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, 0, 29, 0, 590, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 117), 6, 0, 29, 0, 590, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 6, 0, 29, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 590,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTPikachuAnimWin2_joint26[88] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 1245, -520, -2723, 3891, 3891, 3891,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -259, -196, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 1263, 1, -517, 0, -2738, 0, 3686, 8, 3686, 8, 3686, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 1311, 1, -541, 0, -2749, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 4095, 4095, 4095,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 3686, -20, 3686, -20, 3686, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1311, -1, -541, 0, -2749, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 1263, -1, -517, 0, -2738, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 1263, 1, -517, 0, -2738, 0, 3686, 20, 3686, 20, 3686, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 1311, -541, -2749, 4095, 4095, 4095,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
