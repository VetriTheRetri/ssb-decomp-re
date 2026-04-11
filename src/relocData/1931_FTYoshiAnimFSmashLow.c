/* AnimJoint data for relocData file 1931 (FTYoshiAnimFSmashLow) */
/* 3168 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimFSmashLow_joint1[30];
extern u16 dFTYoshiAnimFSmashLow_joint2[74];
extern u16 dFTYoshiAnimFSmashLow_joint3[132];
extern u16 dFTYoshiAnimFSmashLow_joint4[96];
extern u16 dFTYoshiAnimFSmashLow_joint6[10];
extern u16 dFTYoshiAnimFSmashLow_joint7[78];
extern u16 dFTYoshiAnimFSmashLow_joint10[40];
extern u16 dFTYoshiAnimFSmashLow_joint11[92];
extern u16 dFTYoshiAnimFSmashLow_joint12[40];
extern u16 dFTYoshiAnimFSmashLow_joint13[10];
extern u16 dFTYoshiAnimFSmashLow_joint14[10];
extern u16 dFTYoshiAnimFSmashLow_joint15[40];
extern u16 dFTYoshiAnimFSmashLow_joint17[40];
extern u16 dFTYoshiAnimFSmashLow_joint18[126];
extern u16 dFTYoshiAnimFSmashLow_joint20[56];
extern u16 dFTYoshiAnimFSmashLow_joint22[154];
extern u16 dFTYoshiAnimFSmashLow_joint23[188];
extern u16 dFTYoshiAnimFSmashLow_joint25[316];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimFSmashLow_joints[] = {
	(u32)dFTYoshiAnimFSmashLow_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimFSmashLow_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimFSmashLow_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimFSmashLow_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimFSmashLow_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimFSmashLow_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimFSmashLow_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimFSmashLow_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimFSmashLow_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimFSmashLow_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimFSmashLow_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimFSmashLow_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimFSmashLow_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimFSmashLow_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimFSmashLow_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimFSmashLow_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimFSmashLow_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimFSmashLow_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF02B1, /* [25] END */
};

/* Joint 1 */
u16 dFTYoshiAnimFSmashLow_joint1[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 672, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 314, 29, -269, 453,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 738, 105, 1020, 79,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 23), 672, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 672, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimFSmashLow_joint2[74] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -12, -89, -17, 0, 0, 30, 9, 20, 7,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 11, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 43, -19, 25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), -705, 12, -1008, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 223, 185, 28, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 223, -13, 28, 0, 11, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 65, -6, 37, -3, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 21), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 21), 0, 0, -89, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -81, -5, 24, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 30, 16, 20, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimFSmashLow_joint3[132] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, 0, 0, -13, 0, 11,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 45, 172, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 19), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 94, 20, -614, -21, 506, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 326, 95, -329, 153, 348, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 477, 9, 0, 24, 0, -25, 103, 223, 172, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 466, -3, 30, 1, -32, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 111, 172,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 57, 103, -94, 172, -309,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 52, -34, -20, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 36,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -52, 72, 14, 172, 279,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 63, -25, 189, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 2), -3,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 432, -3, 27, -1, -28, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 437, 0, 21, 0, -18, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 437, -35, 21, -1, -18, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 16, -10, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimFSmashLow_joint4[96] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX), 0, 600, 329, 4096,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 78, 6,
	ftAnimSetValBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAZ, 18), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 277, 4, 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_SCAY, 17), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_SCAY, 1), 8192, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 202, 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), -7, -29,
	ftAnimSetValRateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 8192, -3072, 4096, 409,
	ftAnimSetValRateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 2048, -3072, 4915, 409,
	ftAnimSetValRateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 2048, 1024, 4915, -409,
	ftAnimSetValRateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 1228, 4096, -327,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 312, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 5120, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 23), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_SCAY, 3), 4096, -512,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 1), 4096,
	ftAnimSetValT(FT_ANIM_SCAY, 19), 4096,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 78, -4, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimFSmashLow_joint6[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 48, 120,
	ftAnimBlock(0, 51),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimFSmashLow_joint7[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1498, -5, -1476, 0, 1256, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), 961, -20, -1616, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1725, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1716, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 1523, -30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 950, -4, -1609, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 1433, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 20), -1566, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1552, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1476, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1492, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1258, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1446, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1497, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, 0, -1476, 0, 1256, -2,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimFSmashLow_joint10[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -764, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -812, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -534, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -554, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -891, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -877, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -766, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimFSmashLow_joint11[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -145, -6, -103, 1, -219, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 154, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -697, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 145, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 162, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 52, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 120, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 99, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -775, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -746, 28,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 61, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 50, -21,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -715, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -146, 2,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 28, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -102, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 70, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -217, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -145, 1, -103, 0, -219, -2,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimFSmashLow_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1002, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -885, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -791, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -530, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -548, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -1083, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1074, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1003, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimFSmashLow_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 172, 0, 0,
	ftAnimBlock(0, 51),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimFSmashLow_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimBlock(0, 51),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimFSmashLow_joint15[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -190, 4, 0, 5, 0, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 349, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 282, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -49, 0, -18, 0, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -499, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -29, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -190, 21, 0, 1, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimFSmashLow_joint17[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, -14, 0, -12, 0, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -583, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -603, 568,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -133, 7, 0, 39, 0, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -463, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 63, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -153, 15, 0, -1, 0, 1,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimFSmashLow_joint18[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, 0, 5, 2, -3, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -72, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 54, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 647, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 888, 169,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1144, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -81, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 104, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 366, 186,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 98, 88, 1133, -97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 561, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 333, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 193, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -17, -106, 325, -93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 432, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1, -1, -19, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 31), -5, 0, 5, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 446, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 267, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 228, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 200, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -20, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -259, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -260, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -39, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 0, 5, 0, -3, 35,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimFSmashLow_joint20[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 262, -30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 309, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 225, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 331, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 456, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 699, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 679, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 324, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimFSmashLow_joint22[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1602, -2, -83, -27, -263, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -728, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -1681, -66, -340, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1776, -169, -240, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2021, -421, 59, 439,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2619, -534, -738, 20, 637, 511,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1488, 84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3625, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -534, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -272, 185,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -352, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1540, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3637, -178, 1795, 412,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3983, 164, -660, -534, 2365, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3308, 361, -1421, -483, 1963, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3260, 24, -1627, -103, 1976, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1629, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1784, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3260, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), -3210, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1630, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -1527, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1759, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1379, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1373, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1224, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1211, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1270, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1317, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3210, 0, -1524, 2, 1344, 27,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimFSmashLow_joint23[188] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, 8, 1608, 9, 1454, 169,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1737, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1373, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1623, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1960, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 2321, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1760, -43, 2326, -115,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1493, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1884, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1767, -94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1627, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1477, -12, 1413, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1405, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1456, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1431, 136, 1625, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1729, 164, 1154, 186, 2164, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1760, 422, 1779, 325, 1624, -510,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3331, 392,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1805, -107, 1143, -302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1564, -120, 1019, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1209, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3360, 50, 1563, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1612, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 3603, 311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4055, 428,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4459, 275, 1251, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4606, 102, 1285, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 4754, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1163, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 919, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4761, 10, 865, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 4830, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1110, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1612, -1, 1067, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1610, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 1291, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1383, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4825, -4, 1608, -1, 1454, 70,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimFSmashLow_joint25[316] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 378, 72,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 450, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 241, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -117,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 343, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 595, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 824, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 762, -408,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -159,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 443,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 274, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 387, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 753, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 819, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 526, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 550, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 665, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 560, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 454, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -76,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0000, 0x000C, 0x06A1, 0xFF2B, 0xF8D3, 0xFF81, 0x2805, 0x0004, 0x03F4, 0x001D, 0x200B, 0x0002, 0x00C5, 0x00B3, 0xF884, 0x00A6, 0x200B, 0x0001, 0x0174, 0x00B4, 0xF9A2, 0x0108, 0x200B, 0x0001, 0x022E, 0x001F, 0xFA95, 0x0021, 0x200F, 0x0001, 0x01B4, 0xFFAE, 0x044C, 0x0068, 0xF9E4, 0xFF77, 0x2803, 0x0003, 0x0132, 0xFFC3, 0x2805, 0x0008, 0x0732, 0x001D, 0x2009, 0x0002, 0xF949, 0xFF9D, 0x2009, 0x0001, 0xF8BA, 0xFF96, 0x2809, 0x0005, 0xF8C0, 0x0021, 0x2003, 0x0001, 0x00FB, 0xFFE4, 0x2003, 0x0004, 0x00A6, 0x000E, 0x200F, 0x0001, 0x00CD, 0x008A, 0x0746, 0xFFD0, 0xF8DF, 0x0090, 0x200F, 0x0001, 0x01BA, 0xFF4C, 0x06D1, 0xFFBC, 0xF9E1, 0xFFB0, 0x200F, 0x0001, 0xFF65, 0x003D, 0x06BE, 0x023D, 0xF83E, 0xFED6, 0x200F, 0x0001, 0x0234, 0x0037, 0x0B4C, 0x0311, 0xF78B, 0x0034, 0x200F, 0x0001, 0xFFD4, 0xFECD, 0x0CE2, 0x00DA, 0xF8A7, 0x0073, 0x280D, 0x0002, 0x0D37, 0x005F, 0xF832, 0xFFD9, 0x2003, 0x0001, 0xFFCD, 0xFFE5, 0x2003, 0x0001, 0xFF9C, 0xFFB0, 0x200F, 0x0001, 0xFF2D, 0xFE9B, 0x0DBE, 0x00AE, 0xF822, 0xFF1A, 0x2809, 0x0002, 0xF4B6, 0xFF06, 0x2007, 0x0001, 0xFCD2, 0xFDC5, 0x0E94, 0x0008, 0x2007, 0x0001, 0xFAB5, 0xFEBF, 0x0DD0, 0xFF66, 0x2805, 0x0006, 0x0CEB, 0xFFF8, 0x200B, 0x0001, 0xFA4F, 0xFFBB, 0xF46E, 0xFFA0, 0x2803, 0x0009, 0xF9F6, 0xFFEB, 0x2809, 0x000A, 0xF36C, 0xFFEC, 0x0801, 0x0005, 0x2005, 0x0001, 0x0CE2, 0xFFF8, 0x2805, 0x0014, 0x0C35, 0x0001, 0x0801, 0x0003, 0x2003, 0x0001, 0xF9E3, 0xFFF1, 0x2803, 0x0010, 0xF9B5, 0x0003, 0x2009, 0x0001, 0xF359, 0x0000, 0x2009, 0x0008, 0xF2FA, 0xFFD9, 0x2009, 0x0001, 0xF2D3, 0xFFDA, 0x2009, 0x0006, 0xF288, 0x0007, 0x200F, 0x0001, 0xF9B9, 0x0003, 0x0C37, 0x0001, 0xF28B, 0x0002, 0x0000,
};
