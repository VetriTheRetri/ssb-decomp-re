/* AnimJoint data for relocData file 2089 (FTPikachuAnimUpSpecialAirEnd) */
/* 3248 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimUpSpecialAirEnd_joint1[112];
extern u16 dFTPikachuAnimUpSpecialAirEnd_joint2[126];
extern u16 dFTPikachuAnimUpSpecialAirEnd_joint3[54];
extern u16 dFTPikachuAnimUpSpecialAirEnd_joint4[58];
extern u16 dFTPikachuAnimUpSpecialAirEnd_joint6[36];
extern u16 dFTPikachuAnimUpSpecialAirEnd_joint7[92];
extern u16 dFTPikachuAnimUpSpecialAirEnd_joint8[58];
extern u16 dFTPikachuAnimUpSpecialAirEnd_joint9[58];
extern u16 dFTPikachuAnimUpSpecialAirEnd_joint10[38];
extern u16 dFTPikachuAnimUpSpecialAirEnd_joint11[52];
extern u16 dFTPikachuAnimUpSpecialAirEnd_joint12[52];
extern u16 dFTPikachuAnimUpSpecialAirEnd_joint14[36];
extern u16 dFTPikachuAnimUpSpecialAirEnd_joint15[82];
extern u16 dFTPikachuAnimUpSpecialAirEnd_joint17[26];
extern u16 dFTPikachuAnimUpSpecialAirEnd_joint18[118];
extern u16 dFTPikachuAnimUpSpecialAirEnd_joint20[66];
extern u16 dFTPikachuAnimUpSpecialAirEnd_joint22[98];
extern u16 dFTPikachuAnimUpSpecialAirEnd_joint23[126];
extern u16 dFTPikachuAnimUpSpecialAirEnd_joint25[58];
extern u16 dFTPikachuAnimUpSpecialAirEnd_joint26[224];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimUpSpecialAirEnd_joints[] = {
	(u32)dFTPikachuAnimUpSpecialAirEnd_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimUpSpecialAirEnd_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimUpSpecialAirEnd_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimUpSpecialAirEnd_joint4, /* [3] joint 4 */
	(u32)dFTPikachuAnimUpSpecialAirEnd_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPikachuAnimUpSpecialAirEnd_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimUpSpecialAirEnd_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimUpSpecialAirEnd_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimUpSpecialAirEnd_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimUpSpecialAirEnd_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimUpSpecialAirEnd_joint12, /* [11] joint 12 */
	(u32)dFTPikachuAnimUpSpecialAirEnd_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPikachuAnimUpSpecialAirEnd_joint15, /* [14] joint 15 */
	(u32)dFTPikachuAnimUpSpecialAirEnd_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPikachuAnimUpSpecialAirEnd_joint18, /* [17] joint 18 */
	(u32)dFTPikachuAnimUpSpecialAirEnd_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTPikachuAnimUpSpecialAirEnd_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPikachuAnimUpSpecialAirEnd_joint23, /* [22] joint 23 */
	(u32)dFTPikachuAnimUpSpecialAirEnd_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTPikachuAnimUpSpecialAirEnd_joint26, /* [25] joint 26 */
	0xFFFF02F7, /* [26] END */
};

/* Joint 1 */
u16 dFTPikachuAnimUpSpecialAirEnd_joint1[112] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 878, 0,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 0, 24, 0, -1,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 0, 878, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 48, 20, -2, 0, 27, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 40, 5, -1, 0, 20, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, -20, -1, 0, 24, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -8, 0, 0, 0, -32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 33, 0, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -5, 0, 0, 0, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, 0, 878, -77, 0, 28,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), 0, 3, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), -1, 561, 116,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 17), 3210,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 81, 0, 3216,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimUpSpecialAirEnd_joint2[126] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, 33, -28,
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 235, -108,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, 226,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), 39, -149,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 1228, 12288, 819,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 819, 20480, 409,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 235, -711, -202, -1936,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 1228, 12287, 819,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 2), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -129, -65, -928, 358,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 1638, 819, 11253,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 409, 409, 18432,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 203, 486, -23, 1093,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 6), 0,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 1638, 819, 10791,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 235, 20, -108, -52,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, 0, 235, -59, -108, 25,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, -8, -2,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 24), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimUpSpecialAirEnd_joint3[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 999, -124, 300,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1060, -9, -46, 29, 119, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 970, 25, -37, 1, 73, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1216, 2, -37, -8, -10, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 999, -14, -124, -5, 300, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 999, -24, -124, 2, 300, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 199, -34, 51,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPikachuAnimUpSpecialAirEnd_joint4[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -173, 58, -73, 4, 309, 12,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 4, 309, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -348, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -173, 8, 58, 2, -73, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -173, -13, 58, 7, -73, -10, 4, -2, 309, 3, 12, -2,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), -5, 324, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -366, 6, 165, 4, -214, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -15, 161, -14,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimUpSpecialAirEnd_joint6[36] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 199, -70, 479,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 387, -49, 268,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 199, -71, -70, -7, 479, 80,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 199, -7, -70, -2, 479, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 167, -81, 457,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPikachuAnimUpSpecialAirEnd_joint7[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 10, -85, -65, 66, 2404, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -246, -5, 135, 260, 2620, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -20, 38, 1497, 468, 2319, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 9, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2945, 269, 2604, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 3116, 37, 2436, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 3119, 16, 2342, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 4, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 343, 61,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 3224, 30, 2404, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 3350, 0, 2620, 1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 539, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 884, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 912, 9, 3351, 0, 2623, 1,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 912, 3351, 2623,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimUpSpecialAirEnd_joint8[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -753, 247,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -839, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -782, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -801, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -809, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -291, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -10, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -10, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimUpSpecialAirEnd_joint9[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -478, -335, -28, -1, 194, 148,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), -1, 194, 148,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -515, -40, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -478, 1, -335, -14, -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -478, 0, -335, 39, -28, 14, -1, 0, 194, 3, 148, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, 210, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -474, 27, 222, 6, 176, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 175, -172, -13,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimUpSpecialAirEnd_joint10[38] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1598, -1559, 4035, 39, 48, 495,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), -1598, -1559, 4035, 39, 48, 495,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -1598, 49, -1559, 46, 4035, -49, 39, -8, 48, -4, 495, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 40, -29, 2414, 5, 29, 491,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimUpSpecialAirEnd_joint11[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -132, 170, 229,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 482, 334, 374,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -132, -29, 170, -7, 229, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -132, -6, 170, 9, 229, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -219, -5, 308, 8, 351, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -219, 0, 308, -13, 351, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -201, 52, 117,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTPikachuAnimUpSpecialAirEnd_joint12[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, -171, -270,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 261, -303, -346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -3, -12, -171, 6, -270, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -3, -18, -171, -7, -270, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -267, -15, -282, -6, -334, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -267, 5, -282, 7, -334, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -166, -144, -146,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPikachuAnimUpSpecialAirEnd_joint14[36] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -469, 245, 91,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -429, 30, 231,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), -469, -15, 245, 81, 91, -53,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -469, 15, 245, -73, 91, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), -405, -57, 231,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTPikachuAnimUpSpecialAirEnd_joint15[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 44, 123, -15, 2333, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -671, 65, 77, 33, 2564, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -412, -2, 324, 4, 1935, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -688, -61, 103, -33, 2285, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -781, -22, 120, 3, 2326, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -842, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), 125, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 2383, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2469, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 2731, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -855, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -832, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -827, 1, 124, 0, 2742, 3,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -827, 124, 2742,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimUpSpecialAirEnd_joint17[26] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 536,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1608, 316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1899, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 3216, 219,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 3216,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 34), 3216,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPikachuAnimUpSpecialAirEnd_joint18[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1610, -33, -1365, -100, 629, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1711, -1, -1665, 33, 655, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1621, 15, -1164, 52, 433, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1556, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1352, -33, 627, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1363, -1, 629, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 595, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1464, -64,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1576, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1813, -112, 867, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2253, -96, -1741, -41, 1215, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2473, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1205, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1180, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1128, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -2557, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2637, 114, 1113, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1871, 160, -1217, -13, 630, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1673, 66, -1285, -22, 544, -28,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1673, -1285, 544,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTPikachuAnimUpSpecialAirEnd_joint20[66] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 933, 225,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1608, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1278, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 935, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 932, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 972, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 958, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 671, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 139, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 441, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 544, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 554, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 532, -7,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 532,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimUpSpecialAirEnd_joint22[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1361, 107, 1567, -79, 2194, -507,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1038, 172, 1329, 3, 672, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -323, -46, 1589, 25, 2075, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1319, -171, 1481, -4, 2102, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1354, -8, 1559, 15, 2185, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1560, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), -1330, 25, 2287, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1243, 18, 2367, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1210, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 2283, -93,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1566, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1486, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1062, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1497, -91, 1901, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1611, -38, 1483, 0, 1798, -34,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1611, 1483, 1798,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTPikachuAnimUpSpecialAirEnd_joint23[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 205, -98, 535, -146, 2438, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -195, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 96, 11, 2258, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 605, 71, 1852, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 171, 66, 523, -11, 2421, 97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 194, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 533, 3, 2435, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 548, -32, 2400, 51,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 160, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 174, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 379, -20, 363, -101, 2692, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 49, -91, -59, -69, 2987, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -171, -47, -52, -13, 2944, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -314, -33, -178, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2637, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2455, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -435, 46, -178, 70, 2354, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -38, 78, 242, 84, 2077, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 36, 24, 326, 27, 2047, -10,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 36, 326, 2047,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimUpSpecialAirEnd_joint25[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 593, 338,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1608, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1270, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 600, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 595, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 587, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 524, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 461, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 660, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 672, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 608, -21,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 608,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimUpSpecialAirEnd_joint26[224] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -264, -368, -79, 32, -2936, 167,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -39, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1371, -146, -2434, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1145, 178, -2853, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -2938, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -299, 145, -164, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -73, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -273, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -196, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -74, 0, -2945, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2873, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -42, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -222, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -671, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -324, 115, -2575, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 384, -4, -2292, -52,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -42, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -124, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 276, -136, -2574, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -434, -57, -2955, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -67, 122, -121, 0, -3028, -24,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -67, -121, -3028,
	ftAnimEnd(),
	0x0000, 0x54E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x1000, 0x400E, 0xFDE1, 0xFF5C, 0xFE08, 0x1300, 0x1000, 0x1000, 0x280F, 0x0001, 0xFDB5, 0xFFFC, 0xFFC9, 0x000A, 0xFCFF, 0xFFE6, 0x1301, 0x0001, 0x1000, 0x1000, 0x280F, 0x0009, 0xFDB5, 0x0003, 0xFFC9, 0xFFF7, 0xFCFF, 0x0016, 0x1301, 0x0002, 0x1000, 0x0684, 0x1301, 0x0002, 0x1000, 0x0FF3, 0x1301, 0x0002, 0x0800, 0x1000, 0x1301, 0x0002, 0x1000, 0x1000, 0x1901, 0x0004, 0x1000, 0x2A01, 0x0004, 0x1000, 0x0007, 0x0801, 0x0001, 0x200F, 0x0003, 0xFDE1, 0x0003, 0xFF5C, 0xFFF7, 0xFE08, 0x0016, 0x280F, 0x0009, 0xFDE1, 0x004E, 0xFF5C, 0x000B, 0xFE08, 0xFFF4, 0x1301, 0x0009, 0x1000, 0x1000, 0x1B01, 0x0018, 0x1000, 0x1000, 0x200F, 0x0007, 0x02CE, 0x0075, 0x001A, 0x001A, 0xFD3F, 0xFFE5, 0x200F, 0x0005, 0x0363, 0xFFC8, 0x0099, 0x0022, 0xFCBB, 0x0016, 0x380F, 0x000C, 0xFF0A, 0x0260, 0xFEBC, 0x0000, 0x0000, 0x0000, 0x0000,
};
