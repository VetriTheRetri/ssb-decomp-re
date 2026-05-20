/* AnimJoint data for relocData file 1867 (FTYoshiAnimDownBackU) */
/* 2272 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimDownBackU_joint1[16];
extern u16 dFTYoshiAnimDownBackU_joint2[74];
extern u16 dFTYoshiAnimDownBackU_joint3[20];
extern u16 dFTYoshiAnimDownBackU_joint4[26];
extern u16 dFTYoshiAnimDownBackU_joint5[32];
extern u16 dFTYoshiAnimDownBackU_joint7[10];
extern u16 dFTYoshiAnimDownBackU_joint8[96];
extern u16 dFTYoshiAnimDownBackU_joint9[32];
extern u16 dFTYoshiAnimDownBackU_joint11[10];
extern u16 dFTYoshiAnimDownBackU_joint12[92];
extern u16 dFTYoshiAnimDownBackU_joint13[32];
extern u16 dFTYoshiAnimDownBackU_joint14[42];
extern u16 dFTYoshiAnimDownBackU_joint15[10];
extern u16 dFTYoshiAnimDownBackU_joint16[16];
extern u16 dFTYoshiAnimDownBackU_joint18[16];
extern u16 dFTYoshiAnimDownBackU_joint19[92];
extern u16 dFTYoshiAnimDownBackU_joint21[64];
extern u16 dFTYoshiAnimDownBackU_joint23[100];
extern u16 dFTYoshiAnimDownBackU_joint24[132];
extern u16 dFTYoshiAnimDownBackU_joint26[70];
extern u16 dFTYoshiAnimDownBackU_joint27[100];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTYoshiAnimDownBackU_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimDownBackU_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimDownBackU_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimDownBackU_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimDownBackU_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimDownBackU_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTYoshiAnimDownBackU_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTYoshiAnimDownBackU_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTYoshiAnimDownBackU_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTYoshiAnimDownBackU_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTYoshiAnimDownBackU_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimDownBackU_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimDownBackU_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimDownBackU_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimDownBackU_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTYoshiAnimDownBackU_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTYoshiAnimDownBackU_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTYoshiAnimDownBackU_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTYoshiAnimDownBackU_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTYoshiAnimDownBackU_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTYoshiAnimDownBackU_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTYoshiAnimDownBackU_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTYoshiAnimDownBackU_joint1[16] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, -141,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), -141, -350,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 31), -4200, 736,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimDownBackU_joint2[74] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1422, -182, 273, -287, 0, 134,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), 38, -294,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), 0, 55,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 338, 673,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 1185, 510,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), -7, 45,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), -132, -772,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 1222, -430,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 576, -169,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), -236, 394,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_TRAY, 11), 672, 163,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), 60, 43,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 0, -300,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimDownBackU_joint3[20] = {
	ftAnimSetVal(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 144, -190,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 30, 20,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 30), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 6), -89,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimDownBackU_joint4[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 841, 144,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1495, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 1493, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 724, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 16, -88,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTYoshiAnimDownBackU_joint5[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 249, 18, -524, 91, -379, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 395, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 376, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 78, 12,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimDownBackU_joint7[10] = {
	ftAnimSetVal(FT_ANIM_ROTX), 0,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 36), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTYoshiAnimDownBackU_joint8[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -128, 22, -1374, 27, -464, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -791, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -33, -25, -452, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -76, 354, -402, -349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 675, 92, -1151, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 109, -298, -736, 53, -587, 295,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -158, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 78, -15, -561, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 78, 8, -570, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -428, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -53, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -98, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -132, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -352, 70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -276, -61,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -136, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -124, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -110, 22, -131, -7, -352, -75,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTYoshiAnimDownBackU_joint9[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -630, -79,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -776, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -759, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -901, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -955, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -846, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimDownBackU_joint11[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -278, 124, -401,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimDownBackU_joint12[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, -30, 1299, -13, -590, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 793, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -182, -13, -689, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -206, 308, -711, 307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 434, 79, -73, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -46, -247, 725, -64, -561, -255,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 270, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -60, -5, -585, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -57, 5, -591, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), 65, 9, -466, 51,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 247, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -60, -40,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 69, 0, -414, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -85, -56, -227, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -145, -59, -103, -42, -219, 8,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimDownBackU_joint13[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -436, -123,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -881, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -864, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -845, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -892, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1020, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimDownBackU_joint14[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 224, -7, -131, 1, -289, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -107, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 26), 45, -6, 87, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 49, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 0, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -91, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 0, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 23,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimDownBackU_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimDownBackU_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 141, -61,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 21), -288, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -190, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimDownBackU_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -56, -42,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 22), -303, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -153, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTYoshiAnimDownBackU_joint19[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 172, 28, -124, 15, 484, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -158, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -32, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 587, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 742, 100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 747, 15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -163, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 3, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -15, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 6, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 769, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 476, 79,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -9, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 563, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -24, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -49, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -51, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 4, 5, 2, -3, 47,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimDownBackU_joint21[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 416, 16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 194, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 366, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 455, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 604, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 607, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 498, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 395, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 536, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 500, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 354, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, -92,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimDownBackU_joint23[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1505, -19, -110, -107, 15, -101,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1447, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 9, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -56, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 85, 104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -115, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1469, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1570, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 30, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 23, -5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -124, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -27, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 89, 88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -367, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1579, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1609, 2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -376, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -254, -8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 9, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -65, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, 4, -83, -18, -263, -9,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimDownBackU_joint24[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1425, -165, 1429, 178, 2354, -366,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1253, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1603, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1987, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1899, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2105, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1324, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1591, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1526, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1489, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2399, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2461, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2538, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2417, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1575, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1593, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2418, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2363, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1492, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 1606, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2394, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2114, 57,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1605, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1607, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2173, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1501, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1466, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1434, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, 0, 1608, 2, 1454, 19,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimDownBackU_joint26[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 616, 321,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 938, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 849, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 404, -321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -198,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 232, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 356, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 578, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 580, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 471, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 399, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 494, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 547, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 443, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -64,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTYoshiAnimDownBackU_joint27[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 86, 148, 1677, 29, 2051, -105,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 329, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1588, -156, 1885, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1395, -89, 1734, -96,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1475, 27, 1796, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 263, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 48, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, 20, 1763, -72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 1682, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1489, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1492, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1593, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1686, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1257, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 43, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 0, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1236, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1388, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 1, 1697, 15, 1379, -8,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
