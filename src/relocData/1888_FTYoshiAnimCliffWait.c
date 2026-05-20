/* AnimJoint data for relocData file 1888 (FTYoshiAnimCliffWait) */
/* 1744 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimCliffWait_joint1[8];
extern u16 dFTYoshiAnimCliffWait_joint2[62];
extern u16 dFTYoshiAnimCliffWait_joint3[50];
extern u16 dFTYoshiAnimCliffWait_joint4[36];
extern u16 dFTYoshiAnimCliffWait_joint7[26];
extern u16 dFTYoshiAnimCliffWait_joint8[116];
extern u16 dFTYoshiAnimCliffWait_joint9[16];
extern u16 dFTYoshiAnimCliffWait_joint11[8];
extern u16 dFTYoshiAnimCliffWait_joint12[86];
extern u16 dFTYoshiAnimCliffWait_joint14[24];
extern u16 dFTYoshiAnimCliffWait_joint15[12];
extern u16 dFTYoshiAnimCliffWait_joint16[28];
extern u16 dFTYoshiAnimCliffWait_joint18[28];
extern u16 dFTYoshiAnimCliffWait_joint19[68];
extern u16 dFTYoshiAnimCliffWait_joint21[16];
extern u16 dFTYoshiAnimCliffWait_joint23[36];
extern u16 dFTYoshiAnimCliffWait_joint24[82];
extern u16 dFTYoshiAnimCliffWait_joint26[24];
extern u16 dFTYoshiAnimCliffWait_joint27[92];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTYoshiAnimCliffWait_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimCliffWait_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimCliffWait_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimCliffWait_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimCliffWait_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimCliffWait_joint7, /* [4] joint 7 */
	NULL, /* [5] NULL */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffWait_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTYoshiAnimCliffWait_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTYoshiAnimCliffWait_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffWait_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimCliffWait_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffWait_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimCliffWait_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTYoshiAnimCliffWait_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffWait_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTYoshiAnimCliffWait_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffWait_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffWait_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTYoshiAnimCliffWait_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffWait_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTYoshiAnimCliffWait_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 11, -1756, -220,
	ftAnimBlock(0, 75),
	ftAnimLoop(0x6800, -14),
};

/* Joint 2 */
u16 dFTYoshiAnimCliffWait_joint2[62] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAX), -893, 9, 0, -202,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 672, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), -714, -1, 840, 0, 0, -21,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 38), -444, 454,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 19), -480,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX, 19), -943, -9, 0, 205,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 671, -103,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), -1072, 1, 840, 0, 0, 22,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 37), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 18), 480,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX, 19), -893, 9, 0, -202,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 672, 0,
	ftAnimLoop(0x6800, -122),
};

/* Joint 3 */
u16 dFTYoshiAnimCliffWait_joint3[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -446, -14, -49, -20, 83, -2, 168, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), -98, 7, 78, 0, 152, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 19), -714,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 37), 0, 7, 89, 0, 185, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), -446, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 18), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), -446, -14, -49, -20, 83, -2, 168, -6,
	ftAnimLoop(0x6800, -98),
};

/* Joint 4 */
u16 dFTYoshiAnimCliffWait_joint4[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -114, 2, -33, 1, 604, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 72, -47, 701,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -114, -2, -33, -1, 604, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -38, -121, 440,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -114, 2, -33, 1, 604, 6,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimCliffWait_joint7[26] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -965, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 22), -566,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 19), -965, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 18), -446,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), -965, -3,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimCliffWait_joint8[116] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -136, -9, -630, 10, 2645, 11,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 6144, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), -594, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 35), 2517, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 30), -202, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -179, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 959, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -602, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 34), -699, -18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2459, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 1469, -8,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 990, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 822, -108,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1465, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1971, 187,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 693, -147, -716, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -28, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -643, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2181, 179,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2627, 31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -78, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -119, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -136, -16, -630, 12, 2645, 18,
	ftAnimLoop(0x6800, -228),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTYoshiAnimCliffWait_joint9[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 74), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 11 */
u16 dFTYoshiAnimCliffWait_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -625,
	ftAnimBlock(0, 75),
	ftAnimLoop(0x6800, -14),
};

/* Joint 12 */
u16 dFTYoshiAnimCliffWait_joint12[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 390, -3, -2041, -3, -250, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 34), 2, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 50), -1923, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 31), 641, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 654, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 505, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 10, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), -208, -14,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1914, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -1990, -16,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 493, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 395, -7,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2005, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -2035, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -222, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -243, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 390, -4, -2041, -5, -250, -6,
	ftAnimLoop(0x6800, -168),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimCliffWait_joint14[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 57), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 15 */
u16 dFTYoshiAnimCliffWait_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimBlock(0, 75),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimCliffWait_joint16[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 94, 166, 30,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 37), -536, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 14,
	ftAnimBlock(0, 23),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 38), 94, 166, 30,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 37), -536, 0, 0,
	ftAnimBlock(0, 14),
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimCliffWait_joint18[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -56, 296, -31,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 38), -446, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 10,
	ftAnimBlock(0, 28),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 37), -56, 296, -31,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 38), -446, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTYoshiAnimCliffWait_joint19[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 64, 0, 168, 2, 594, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 32), 3, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 36), 216, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 266, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 268, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 594, 3,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 15, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 41), 66, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 206, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 37), 165, 2,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 598, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), 602, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 64, -1, 168, 2, 594, -8,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimCliffWait_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 74), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 6,
	ftAnimLoop(0x6800, -30),
};

/* Joint 23 */
u16 dFTYoshiAnimCliffWait_joint23[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1348, 1, -225, 0, 323, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 74), -225,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 74), 323, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 36), 1388, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1379, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 37), 1349, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1348, -1, -225, 0, 323, 0,
	ftAnimLoop(0x6800, -70),
};

/* Joint 24 */
u16 dFTYoshiAnimCliffWait_joint24[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -7, 1, -39, 14, 493, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), -5, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), 1, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), 730, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 715, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 179, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -246, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 138, 15,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 154, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 468, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -256, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -55, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 153, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), -7, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -7, 0, -39, 16, 493, 25,
	ftAnimLoop(0x6800, -160),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimCliffWait_joint26[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTYoshiAnimCliffWait_joint27[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1610, 18, -48, -3, 345, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 1681, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), -99, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 725, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 695, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 321, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1679, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 1114, -34,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -88, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 42), -46, -2,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 317, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), 339, 5,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1080, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 1386, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1442, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1566, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1593, 26, -48, -2, 345, 5,
	ftAnimLoop(0x6800, -168),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
