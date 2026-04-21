/* AnimJoint data for relocData file 2075 (FTPikachuAnimTechB) */
/* 5120 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimTechB_joint1[24];
extern u16 dFTPikachuAnimTechB_joint2[70];
extern u16 dFTPikachuAnimTechB_joint3[60];
extern u16 dFTPikachuAnimTechB_joint4[72];
extern u16 dFTPikachuAnimTechB_joint6[46];
extern u16 dFTPikachuAnimTechB_joint7[252];
extern u16 dFTPikachuAnimTechB_joint8[120];
extern u16 dFTPikachuAnimTechB_joint9[72];
extern u16 dFTPikachuAnimTechB_joint10[10];
extern u16 dFTPikachuAnimTechB_joint11[18];
extern u16 dFTPikachuAnimTechB_joint12[18];
extern u16 dFTPikachuAnimTechB_joint14[70];
extern u16 dFTPikachuAnimTechB_joint15[200];
extern u16 dFTPikachuAnimTechB_joint17[120];
extern u16 dFTPikachuAnimTechB_joint18[266];
extern u16 dFTPikachuAnimTechB_joint20[120];
extern u16 dFTPikachuAnimTechB_joint22[248];
extern u16 dFTPikachuAnimTechB_joint23[276];
extern u16 dFTPikachuAnimTechB_joint25[128];
extern u16 dFTPikachuAnimTechB_joint26[252];
extern u16 dFTPikachuAnimTechB_joint27[64];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimTechB_joints[] = {
	(u32)dFTPikachuAnimTechB_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimTechB_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimTechB_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimTechB_joint4, /* [3] joint 4 */
	(u32)dFTPikachuAnimTechB_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPikachuAnimTechB_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimTechB_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimTechB_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimTechB_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimTechB_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimTechB_joint12, /* [11] joint 12 */
	(u32)dFTPikachuAnimTechB_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPikachuAnimTechB_joint15, /* [14] joint 15 */
	(u32)dFTPikachuAnimTechB_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPikachuAnimTechB_joint18, /* [17] joint 18 */
	(u32)dFTPikachuAnimTechB_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTPikachuAnimTechB_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPikachuAnimTechB_joint23, /* [22] joint 23 */
	(u32)dFTPikachuAnimTechB_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTPikachuAnimTechB_joint26, /* [25] joint 26 */
	(u32)dFTPikachuAnimTechB_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTPikachuAnimTechB_joint1[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 0, -1221,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 18), -3360, -1257,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 11), -4560, -640,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 7), -4800,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimTechB_joint2[70] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 725, -86,
	ftAnimSetValBlock(FT_ANIM_ROTX), -1876,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 751, -131, 141, 52,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), -1748,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -140,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 412, -24, 38, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -3142, -260,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -6433, -107,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 696, 95, 25, -7,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -6433, 2, 0, 1, 0, -1, 579, -9, 25, 36,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -6460, 33, -28, 675, 108,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimTechB_joint3[60] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 223,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, 223,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -14, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 0, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -133,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 0, 7,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 32, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 284, 26, 307, 21, 103, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 376, -14, 307, -9, 103, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 23, 133, 32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTPikachuAnimTechB_joint4[72] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -236, 0, 355, 0, -158, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -236, 0, 355, 0, -158, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 138, 22, 0, -50, 0, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 318, 9,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 11), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 234, -11, 0, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 189, 2, -148, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 266, 2, -148, 6, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 221, -39, -52, 21, -1, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimTechB_joint6[46] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 290, -39, 406,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 290, 6, -39, -11, 406, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 307, 82, -67, 25, 404, -87,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 475, 96, 16, 47, 209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 475, -67, 16, -35, 209, 46,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimTechB_joint7[252] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 593, 1, 53, -1, 2377, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 593, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 64, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2338, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2377, 74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2790, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 580, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 690, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 67, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 65, 44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2877, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2862, -36,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 710, 18, 126, 73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 340, 128,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 768, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2819, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2665, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 470, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 493, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 787, 17, 501, 8, 2626, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 811, 5, 508, -8, 2554, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 812, -51, 492, -261, 2523, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 707, -505, -14, -559, 2557, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -197, -83, -625, -335, 3189, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 540, 424, -684, -30, 2357, -468,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 652, 118, -686, -6, 2252, -107,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1050, 101, -692, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2013, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1905, -84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1784, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1127, 63, -676, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1102, -122,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -672, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1802, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1870, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 937, -280, 2008, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 540, -607, -684, 81, 2357, 572,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -277, -364, -509, 236, 3152, 373,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -188, 126, -210, 244, 3105, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 210, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -25, 194, 2957, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 199, 271, 2994, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 517, 268, 3009, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 736, 143, 3015, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 68, 236, 26, 3014, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimTechB_joint8[120] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -798, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -798, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -847, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -879, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -829, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -506, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -264, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -462,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -925, -497,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1004, 433,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -58, 502,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -58, -280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -506, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPikachuAnimTechB_joint9[72] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -458, -322, -255,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -458, -322, -255,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 61, 35, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 92, 106, 0, 49, 0, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 288, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 27, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 246, -56, 0, -10, 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -338, -46, -85, -6, 65, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -409, 30, -85, -3, 65, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 116, 58, -135, -11, 36, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2, -163, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPikachuAnimTechB_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimTechB_joint11[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -268, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 36), 0, 51,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTPikachuAnimTechB_joint12[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -268, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 36), 0, 82,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPikachuAnimTechB_joint14[70] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAZ), 1, 0, 0, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -368, 280, 54,
	ftAnimSetValBlock(FT_ANIM_SCAY), 5324,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -368, 32, 280, -310, 54, 271,
	ftAnimSetValBlockT(FT_ANIM_SCAY, 4), 5324,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -331, 23, -69, -199, 360, 193,
	ftAnimSetValBlockT(FT_ANIM_SCAY, 1), 4096,
	ftAnimSetValT(FT_ANIM_SCAY, 35), 4096,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -324, 7, -94, 65, 417, -35,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -318, 3, 36, 74, 303, -65,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -318, -2, 36, -44, 303, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -324, -62, 313,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTPikachuAnimTechB_joint15[200] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -766, -8, 365, 6, -1050, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -690, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 383, -9, -1076, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 361, 1, -1051, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 387, 19, -951, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -576, 45, 401, -81, -739, 169,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -665, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -530, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 224, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 9, -199,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -301, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -707, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -788, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -341, -41, -510, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -558, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -420, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -378, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -320, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -790, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -730, 35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -290, 133, -636, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -53, 266, -872, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -694, 14, 241, 79, -1033, -129,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -699, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 105, -55, -1130, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 131, 20, -1146, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 136, -7, -1267, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -700, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -800, -11,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 125, -13, -1219, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 110, 17, -1130, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, -62, -913, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -14, -110, -625, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -806, -3, -61, -32, -448, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -804, 0, -93, 0, -301, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 0, -94, -1, -294, 6,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimTechB_joint17[120] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -214, -316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -632, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -490, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -212, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -84, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -269, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -509, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -613, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -709, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -902, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -687, 451,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -243, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPikachuAnimTechB_joint18[266] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 199, 4, -16, -22, 34, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 203, -14, -39, -62, 99, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 170, -17, -142, -53, 371, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 176, -13, -100, 54, 244, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, -802, -38, -71, 13, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1427, -283, -244, -120, 138, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -425, 639, -278, 67, -476, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -147, 143, -110, 64, -187, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -138, 8, -148, -47, -23, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -130, -6, -205, -41, -120, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -150, -9, -230, -28, -153, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -150, -18, -262, -14, -274, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -188, 23, -259, -34, -236, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -102, -25, -330, -18, -623, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -238, -41, -297, 18, -585, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -300, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -186, 38, -595, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -161, 1, -636, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -194, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -283, 8, -534, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -284, -24, -367, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -148, 45, -331, -28, -358, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -102, 50, -341, -20, -468, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -47, 22, -371, -10, -484, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -359, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -57, -3, -510, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -768, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -54, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 262, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -361, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -284, 20,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -779, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -719, 63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 267, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 174, -53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -259, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -86, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -642, 82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -426, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 119, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 62, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -24, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, -4, 0, 24, -406, 19,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPikachuAnimTechB_joint20[120] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 582, -131,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 451, -291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 239, 561,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1130, 560,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1360, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 761, -342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 675, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 829, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 982, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 965, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1006, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 912, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1152, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 877, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 958, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1016, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1008, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 872, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 678, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 519, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 471, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 697, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 741, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 895, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 944, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 954, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPikachuAnimTechB_joint22[248] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1586, -5, 1602, 5, 1678, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1606, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1597, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1709, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1876, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1889, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1591, 39, 1668, -342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1528, 110, 1567, -684, 1205, -380,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1371, 71, 228, -249, 908, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1385, -76, 1069, 582, 1388, 180,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1414, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1524, -88, 1268, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1562, 13, 1107, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1496, 73, 1412, 20, 1252, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1415, 61, 1455, 23, 1501, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1372, 45, 1459, 7, 1568, 92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1709, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1323, 18, 1469, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1335, -37, 1573, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1426, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1315, -126, 1438, -155,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1424, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1319, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1290, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1407, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1451, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1403, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1358, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1533, -79, 1277, 15, 1422, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1611, -98, 1321, 34, 1566, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1730, -58, 1346, 14, 1610, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1375, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1491, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1728, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1733, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1833, 58,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1390, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1454, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1464, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1244, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1454, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1475, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1765, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1626, 43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1249, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, 24, 1480, 4, 1255, 5,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPikachuAnimTechB_joint23[276] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2901, 0, 106, 1, -119, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2935, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 107, -14, -122, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 77, -16, -67, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 75, 42, -54, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 162, 77, -193, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3012, -85, 229, 105, -320, -260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3106, 27, 373, 4, -714, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2958, 62, 238, -113, -361, 306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2982, -28, 146, -42, -101, 169,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 176, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3016, -23, -21, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2999, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -114, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 173, 2, -123, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 180, -4, -177, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 165, 27, -136, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3024, 17, 234, 17, -492, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2964, 15, 199, -16, -523, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 214, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2993, -17, -551, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2988, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -609, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 202, 12, -485, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2993, -85, 238, 65, -412, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3159, -201, 334, 42, -914, -494,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3396, -108, 324, 9, -1401, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3375, 17, 353, 27, -1178, 116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 423, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3361, 13, -1169, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3403, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1174, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1626, -56,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3431, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3511, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 420, -1, -1673, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 427, 16, -1640, 117,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3509, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3451, 131, 454, 17, -1455, 294,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -637, 325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3245, 197, 462, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3056, 105, 324, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3034, -5, 121, -169, -400, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3068, -26, -13, -89, -251, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3088, -19, -57, -43, -192, 59,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimTechB_joint25[128] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 412, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 413, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 383, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 429, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, 323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1077, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1190, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 832, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 754, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 975, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 937, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 942, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 874, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1139, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 883, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 970, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1011, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 934, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 999, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1316, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1134, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 867, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 766, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 801, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 864, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1101, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1175, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1109, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 980, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 859, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 807, -52,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTPikachuAnimTechB_joint26[252] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1761, 4, 1659, 3, -1193, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1687, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1693, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1352, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1509, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1712, 82, -1799, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1673, 1, 1853, 67, -2006, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1664, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1848, -17, -1811, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1818, -7, -1801, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1555, 2, 1833, -6, -2110, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1659, -45, 1804, -63, -1897, 259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1646, -23, 1705, -39, -1592, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1706, -34, 1725, 19, -1635, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1715, -24, 1745, 18, -1645, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1755, -19, 1763, 45, -1861, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1753, -3, 1837, 16, -1813, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1771, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1797, -26, -1818, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1784, -4, -1817, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1788, 9, -1762, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1768, -10, 1804, -50, -1778, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1792, -29, 1687, -90, -1767, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1828, 31, 1623, -39, -1460, 158,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1619, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1729, 39, -1450, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1365, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1748, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1988, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1627, 8, -1336, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1649, 1, -1324, -22,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2006, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1896, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1652, 9, -1352, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1696, 14, -1592, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1776, 114, 1698, -42, -1812, -199,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1359, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1667, 76, -1990, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1622, 26, -2067, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1615, 3, -2089, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1615, 0, 1323, -35, -2092, -3,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTPikachuAnimTechB_joint27[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -523, -381, -862,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -572, 25, -255, 33, -778, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -295, 74, -75, 27, -299, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -49, 28, -62, 3, -258, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -5, -17, -40, 11, -171, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -245, -16, 61, -2, -371, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -242, 12, -70, -3, -621, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -14, 0, -3,
	ftAnimEnd(),
	0x0000, 0x0000,
};
