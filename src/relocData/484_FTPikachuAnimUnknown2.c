/* AnimJoint data for relocData file 484 (FTPikachuAnimUnknown2) */
/* 5008 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimUnknown2_joint1[26];
extern u16 dFTPikachuAnimUnknown2_joint2[114];
extern u16 dFTPikachuAnimUnknown2_joint3[40];
extern u16 dFTPikachuAnimUnknown2_joint5[32];
extern u16 dFTPikachuAnimUnknown2_joint6[172];
extern u16 dFTPikachuAnimUnknown2_joint7[62];
extern u16 dFTPikachuAnimUnknown2_joint8[40];
extern u16 dFTPikachuAnimUnknown2_joint9[10];
extern u16 dFTPikachuAnimUnknown2_joint10[314];
extern u16 dFTPikachuAnimUnknown2_joint11[264];
extern u16 dFTPikachuAnimUnknown2_joint13[32];
extern u16 dFTPikachuAnimUnknown2_joint14[128];
extern u16 dFTPikachuAnimUnknown2_joint16[56];
extern u16 dFTPikachuAnimUnknown2_joint17[224];
extern u16 dFTPikachuAnimUnknown2_joint19[120];
extern u16 dFTPikachuAnimUnknown2_joint21[204];
extern u16 dFTPikachuAnimUnknown2_joint22[144];
extern u16 dFTPikachuAnimUnknown2_joint24[48];
extern u16 dFTPikachuAnimUnknown2_joint25[422];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimUnknown2_joints[] = {
	(u32)dFTPikachuAnimUnknown2_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimUnknown2_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimUnknown2_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimUnknown2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimUnknown2_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimUnknown2_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimUnknown2_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimUnknown2_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimUnknown2_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimUnknown2_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimUnknown2_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimUnknown2_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimUnknown2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimUnknown2_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimUnknown2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimUnknown2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimUnknown2_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimUnknown2_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimUnknown2_joint25, /* [24] joint 25 */
	0xFFFF0449, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimUnknown2_joint1[26] = {
	ftAnimSetVal(FT_ANIM_TRAY | FT_ANIM_TRAZ), -3600, 6360,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -104, 1649, 419, 3600,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 60), -3600, 6360,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 600, -839,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 60,
	ftAnimSetValRateT(FT_ANIM_TRAY, 85), -1253, -375,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 85), -3900,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimUnknown2_joint2[114] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAZ), 0, -209, -111, 4096,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 999, -124, 300,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY), 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY, 65), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), 999, 0, -124, 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 498, -609, 55, 251, 202, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -219, -421, 378, 264, 26, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -343, -15, 584, 1, -100, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 107), -343, 584, -100,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY), 33, -10,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 5), 5222, 231, 3735, 69,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 5), 3967, 4318,
	ftAnimSetValRateT(FT_ANIM_SCAY, 5), 3961, -141,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 5), 4626,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 5), 3977, 4240,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 5), 4323, 3990,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 5), 3977, 4182,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 5), 4159, 4033,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 5), 3977, 4129,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 5), 4159, 4043,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 5), 4044, 4110,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 5), 4097, 4091,
	ftAnimSetVal0RateT(FT_ANIM_SCAY, 40), 4091,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 40), 4097,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimUnknown2_joint3[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -173, 58, -73,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), -173, 0, 58, 0, -73, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 277, 122, 16, -19, -20, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 194, 0, 0, 0, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 107), 194, 0, 0,
	ftAnimBlock(0, 97),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimUnknown2_joint5[32] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 199, -70, 479,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 60), 199, 0, -70, 0, 479, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 484, 20, -17, 3, 116, -26,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 107), 484, -17, 116,
	ftAnimBlock(0, 97),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimUnknown2_joint6[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 11, 0, -56, 0, -811, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 59), 11, 0, -56, 0, -811, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 11, -14, -56, 40, -811, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -17, 274, 23, 25, -748, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 560, 60, -5, -495, -824, 414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 102, -228, -967, -480, 81, 453,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 102, 0, -966, 0, 81, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 110, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 87, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -970, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -979, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -972, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 109, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 77, 1,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 89, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 106, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -968, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 62), -966, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 79, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 97, 7,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 105, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 84, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 97, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 83, -7,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 101, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 99, 8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 83, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 101, -8,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 99, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 81, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 85, -16, -965, 0, 98, 17,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimUnknown2_joint7[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -758, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 59), -758, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -759, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -479, 379,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -13, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -12, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 38), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -12, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -13, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -13, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 13,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimUnknown2_joint8[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -478, -335, -28,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), -478, 0, -335, 0, -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 202, 228, -206, 59, -40, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 206, 0, -157, 0, -45, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 107), 206, -157, -45,
	ftAnimBlock(0, 97),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimUnknown2_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1598, -1559, 4035, 39, 48, 495,
	ftAnimBlock(0, 160),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimUnknown2_joint10[314] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -353, 95, 225,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 65), -353, 95, 225,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -363, 104, 210,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -305, 46, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -316, -18, 55, 14, 280, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -363, 104, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -316, 18, 55, -14, 280, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -305, -7, 46, 5, 294, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -363, 104, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -305, 7, 46, -5, 294, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -316, -18, 55, 14, 280, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -363, 104, 210,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -305, 46, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -316, -18, 55, 14, 280, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -363, 104, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -322, 13, 55, -10, 280, 18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -305, 46, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -316, -18, 55, 14, 280, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -363, 104, 210,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -305, 46, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -316, -18, 55, 14, 280, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -363, 104, 210,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -305, 46, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -316, -18, 55, 14, 280, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -363, 104, 210,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -305, 46, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -316, -18, 55, 14, 280, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -363, 104, 210,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -305, 46, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -316, -18, 55, 14, 280, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -363, 104, 210,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -305, 46, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -316, -18, 55, 14, 280, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -363, 104, 210,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -305, 46, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -316, -18, 55, 14, 280, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -363, 104, 210,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -305, 46, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -316, -18, 55, 14, 280, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -363, 104, 210,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -305, 46, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -316, -18, 55, 14, 280, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -363, 104, 210,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -305, 46, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -316, -18, 55, 14, 280, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -363, 104, 210,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -305, 46, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -316, -18, 55, 14, 280, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -363, 104, 210,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -305, 46, 294,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -316, 55, 280,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPikachuAnimUnknown2_joint11[264] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -68, -254, -257,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 65), -68, -254, -257,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, -261, -281,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -58, -241, -221,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -65, -12, -248, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -75, -261,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -65, 12, -248, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -58, -5, -241, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -75, -261, -281,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -58, 5, -241, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -221,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -65, -12, -248, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -75, -261,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -58, -241, -221,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -65, -12, -248, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -75, -261,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -59, 5, -233, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -222,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -65, -12, -248, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -75, -261,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -58, -241, -221,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -65, -12, -248, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -75, -261,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -58, -241, -221,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -65, -12, -248, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -75, -261,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -58, -241, -221,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -65, -12, -248, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -75, -261,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -58, -241, -221,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -65, -12, -248, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -75, -261,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -58, -241, -221,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -65, -12, -248, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -75, -261,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -58, -241, -221,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -65, -12, -248, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -75, -261,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -58, -241, -221,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -65, -12, -248, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -75, -261,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -58, -241, -221,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 19), -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -65, -12, -248, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 18), -65, -248,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPikachuAnimUnknown2_joint13[32] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -469, 245, 91,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 60), -469, 0, 245, 0, 91, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -460, 0, 37, -15, 105, 1,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 107), -460, 37, 105,
	ftAnimBlock(0, 97),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimUnknown2_joint14[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, 0, 128, 0, 2326, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 59), 2412, 0, 128, 2, 2326, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, 179, 128, 120, 2326, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2770, -59, 368, -40, 2462, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2292, -601, 46, 144, 2702, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1566, -365, 657, 305, 1913, -396,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1562, -3, 657, 0, 1909, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 95), 657, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 1396, 50, 1730, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1456, 60, 1801, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 1459, 28, 1797, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1491, 29, 1835, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 1505, 16, 1850, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1520, 11, 1869, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1531, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1873, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1878, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 54), 1909, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1527, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 53), 1562, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1563, 0, 657, 0, 1909, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimUnknown2_joint16[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -13, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -12, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -12, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -13, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -248, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -251, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -269, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -254, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -274, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -267, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 74), -251, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -250, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimUnknown2_joint17[224] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1606, 0, -1367, 0, 629, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 59), 1606, 0, -1367, 0, 629, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1606, 8, -1367, 77, 629, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1013, 314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1623, 163, -1212, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1934, -225, -1016, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1173, -377, -1640, -330, 1356, 188,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1391, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1179, 2, -1678, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1624, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1185, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1363, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1430, 99,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1710, -92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1748, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1227, 7, 1543, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1353, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1155, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1681, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1714, -47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1322, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1431, 51,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1171, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1191, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1755, -7, 1476, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1633, -13, 1344, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1653, -23, 1364, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1389, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1662, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1198, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 64), 1178, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1372, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1386, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1656, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -1674, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1662, 8, 1373, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1677, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 1389, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1389, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 35), 1390, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1677, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 34), -1677, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1178, 0, -1677, 0, 1390, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimUnknown2_joint19[120] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 932, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 59), 932, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1123, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 819, -345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 432, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 366, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 760, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 669, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 274, -255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 168, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 351, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 416, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 263, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 223, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 334, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 356, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 266, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 415, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 380, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 330, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 377, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 341, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), 369, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 369, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 370, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 370, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimUnknown2_joint21[204] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1377, 0, -1648, 0, 2194, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 59), -1377, 0, -1648, 0, 2194, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1377, 49, -1648, -92, 2194, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1278, -394, -1833, -20, 1841, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2166, -52, -1688, 162, 1803, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1483, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1950, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1384, 374,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1417, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1167, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1492, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 63), -1489, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -807, 253,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -652, -77,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1954, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2012, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -778, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1428, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1376, 84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -906, -73,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1996, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 2010, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1026, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1353, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1280, 84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1095, -55,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2006, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 69), 2027, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1173, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1301, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1251, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -1287, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1244, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -1277, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1266, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 34), -1251, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1489, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), -1489, 0,
	ftAnimBlock(0, 23),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1250, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1250, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1250, 0, -1489, 0, 2027, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimUnknown2_joint22[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 203, 0, 533, 0, -780, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 59), 203, 0, 533, 0, -780, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 203, -219, 533, -40, -780, -72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -393, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 453, -109, -925, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 314, 79, -1257, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 136, 252, 612, 161, -567, 342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 111, -15, 636, 7, -572, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 645, -3, -595, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 106, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 95, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 113, 12, 639, -7, -577, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 46), 627, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 123, -1, -570, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 108, -9, -585, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), 105, 1, -587, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 106, 7, -586, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 21), 118, 6, -573, 6,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 627, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), 627, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 118, -6, -573, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 23), 119, -6, -572, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 106, -13, 628, 1, -586, -13,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimUnknown2_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 595, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 59), 595, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 595, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1075, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1053, -533,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 8, -526,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 59), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 8, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimUnknown2_joint25[422] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1350, 0, -1534, 0, 1886, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 59), 1350, 0, -1534, 0, 1886, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1350, -114, -1534, 58, 1886, -113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1561, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1122, 34, -1416, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1420, 243, -1196, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1625, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1572, -188, 2041, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1574, 0, 2046, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 95), -1574, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2046, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2026, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1626, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 92), 1625, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2055, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 2040, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2055, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 2059, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2056, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 63), 2046, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1624, 0, -1574, 0, 2046, 0,
	ftAnimEnd(),
	0x180E, 0x0C96, 0xFFB9, 0xFDFD, 0x50E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x100F, 0x0041, 0x0C96, 0xFFB9, 0xFDFD, 0x380F, 0x0001, 0x0C97, 0xFFBA, 0xFE03, 0x380F, 0x0003, 0x0C93, 0xFFB6, 0xFDEC, 0x200F, 0x0001, 0x0C94, 0x0001, 0xFFB7, 0x0001, 0xFDF2, 0x000A, 0x380F, 0x0002, 0x0C97, 0xFFBA, 0xFE03, 0x200F, 0x0002, 0x0C94, 0xFFFF, 0xFFB7, 0xFFFF, 0xFDF2, 0xFFF6, 0x200F, 0x0001, 0x0C93, 0x0000, 0xFFB6, 0x0000, 0xFDEC, 0x0004, 0x380F, 0x0003, 0x0C97, 0xFFBA, 0xFE03, 0x200F, 0x0003, 0x0C93, 0x0000, 0xFFB6, 0x0000, 0xFDEC, 0xFFFC, 0x200F, 0x0001, 0x0C94, 0x0001, 0xFFB7, 0x0001, 0xFDF2, 0x000A, 0x380F, 0x0002, 0x0C97, 0xFFBA, 0xFE03, 0x380F, 0x0003, 0x0C93, 0xFFB6, 0xFDEC, 0x200F, 0x0001, 0x0C94, 0x0001, 0xFFB7, 0x0001, 0xFDF2, 0x000A, 0x380F, 0x0002, 0x0C97, 0xFFBA, 0xFE03, 0x380F, 0x0003, 0x0C93, 0xFFB6, 0xFDEC, 0x200F, 0x0001, 0x0C94, 0x0001, 0xFFB7, 0x0001, 0xFDF2, 0x000A, 0x380F, 0x0002, 0x0C97, 0xFFBA, 0xFE03, 0x380F, 0x0003, 0x0C93, 0xFFB6, 0xFDEC, 0x200F, 0x0001, 0x0C94, 0x0001, 0xFFB7, 0x0001, 0xFDF2, 0x000A, 0x380F, 0x0002, 0x0C97, 0xFFBA, 0xFE03, 0x380F, 0x0003, 0x0C93, 0xFFB6, 0xFDEC, 0x200F, 0x0001, 0x0C93, 0x0001, 0xFFB6, 0x0001, 0xFDF5, 0x0007, 0x380F, 0x0002, 0x0C97, 0xFFBA, 0xFE03, 0x380F, 0x0003, 0x0C93, 0xFFB6, 0xFDEC, 0x200F, 0x0001, 0x0C94, 0x0001, 0xFFB7, 0x0001, 0xFDF2, 0x000A, 0x380F, 0x0002, 0x0C97, 0xFFBA, 0xFE03, 0x380F, 0x0003, 0x0C93, 0xFFB6, 0xFDEC, 0x200F, 0x0001, 0x0C94, 0x0001, 0xFFB7, 0x0001, 0xFDF2, 0x000A, 0x380F, 0x0002, 0x0C97, 0xFFBA, 0xFE03, 0x380F, 0x0003, 0x0C93, 0xFFB6, 0xFDEC, 0x200F, 0x0001, 0x0C94, 0x0001, 0xFFB7, 0x0001, 0xFDF2, 0x000A, 0x380F, 0x0002, 0x0C97, 0xFFBA, 0xFE03, 0x380F, 0x0003, 0x0C93, 0xFFB6, 0xFDEC, 0x200F, 0x0001, 0x0C94, 0x0001, 0xFFB7, 0x0001, 0xFDF2, 0x000A, 0x380F, 0x0002, 0x0C97, 0xFFBA, 0xFE03, 0x380F, 0x0003, 0x0C93, 0xFFB6, 0xFDEC, 0x200F, 0x0001, 0x0C94, 0x0001, 0xFFB7, 0x0001, 0xFDF2, 0x000A, 0x380F, 0x0002, 0x0C97, 0xFFBA, 0xFE03, 0x380F, 0x0003, 0x0C93, 0xFFB6, 0xFDEC, 0x200F, 0x0001, 0x0C94, 0x0001, 0xFFB7, 0x0001, 0xFDF2, 0x000A, 0x380F, 0x0002, 0x0C97, 0xFFBA, 0xFE03, 0x380F, 0x0003, 0x0C93, 0xFFB6, 0xFDEC, 0x200F, 0x0001, 0x0C94, 0x0001, 0xFFB7, 0x0001, 0xFDF2, 0x000A, 0x380F, 0x0002, 0x0C97, 0xFFBA, 0xFE03, 0x380F, 0x0003, 0x0C93, 0xFFB6, 0xFDEC, 0x200F, 0x0001, 0x0C94, 0x0001, 0xFFB7, 0x0001, 0xFDF2, 0x000A, 0x380F, 0x0002, 0x0C97, 0xFFBA, 0xFE03, 0x380F, 0x0003, 0x0C93, 0xFFB6, 0xFDEC, 0x380F, 0x0001, 0x0C94, 0xFFB7, 0xFDF2, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
