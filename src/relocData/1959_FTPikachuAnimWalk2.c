/* AnimJoint data for relocData file 1959 (FTPikachuAnimWalk2) */
/* 1776 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimWalk2_joint1[26];
extern u16 dFTPikachuAnimWalk2_joint2[42];
extern u16 dFTPikachuAnimWalk2_joint3[32];
extern u16 dFTPikachuAnimWalk2_joint5[12];
extern u16 dFTPikachuAnimWalk2_joint6[56];
extern u16 dFTPikachuAnimWalk2_joint7[16];
extern u16 dFTPikachuAnimWalk2_joint8[20];
extern u16 dFTPikachuAnimWalk2_joint9[12];
extern u16 dFTPikachuAnimWalk2_joint10[40];
extern u16 dFTPikachuAnimWalk2_joint11[40];
extern u16 dFTPikachuAnimWalk2_joint13[12];
extern u16 dFTPikachuAnimWalk2_joint14[44];
extern u16 dFTPikachuAnimWalk2_joint16[16];
extern u16 dFTPikachuAnimWalk2_joint17[94];
extern u16 dFTPikachuAnimWalk2_joint19[32];
extern u16 dFTPikachuAnimWalk2_joint21[86];
extern u16 dFTPikachuAnimWalk2_joint22[86];
extern u16 dFTPikachuAnimWalk2_joint24[40];
extern u16 dFTPikachuAnimWalk2_joint25[130];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimWalk2_joints[] = {
	(u32)dFTPikachuAnimWalk2_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimWalk2_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimWalk2_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimWalk2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimWalk2_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimWalk2_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimWalk2_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimWalk2_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimWalk2_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimWalk2_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimWalk2_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimWalk2_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimWalk2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimWalk2_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimWalk2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimWalk2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimWalk2_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimWalk2_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimWalk2_joint25, /* [24] joint 25 */
	0xFFFF01A7, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimWalk2_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 660, 51,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -26, 33, -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 764, 73, 64, 10,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 797, -37, 71, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 660, 51,
	ftAnimLoop(0x6800, -50),
};

/* Joint 2 */
u16 dFTPikachuAnimWalk2_joint2[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 340, -23, -13,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 247, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -27, 0, -13, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -27, 0, -13, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 248, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 340, 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -23, -13,
	ftAnimLoop(0x6800, -82),
};

/* Joint 3 */
u16 dFTPikachuAnimWalk2_joint3[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 42, 4, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -39, 0, -2, 0, -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 48, 4, 4, 0, -3, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 42, 4, -3,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimWalk2_joint5[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 233, -20, 413,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimWalk2_joint6[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, 26, -8, -255, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -522, -44,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 29), 804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), -189, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -180, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -117, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -561, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -273, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -66, 47, -269, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 11, 22, -259, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 0, 21, 10, -256, 3,
	ftAnimLoop(0x6800, -110),
};

/* Joint 7 */
u16 dFTPikachuAnimWalk2_joint7[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -10,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimWalk2_joint8[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -49, 14, 54,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -167, 18, 54,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -49, 14, 54,
	ftAnimLoop(0x6800, -38),
};

/* Joint 9 */
u16 dFTPikachuAnimWalk2_joint9[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimWalk2_joint10[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -194, 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -191, 0, -35, -9, -92, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -191, 0, -35, 9, -92, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -194, 0, 7, 1, 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -194, 7, 0,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimWalk2_joint11[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -148, 5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -139, 2, 63, 12, 126, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -139, -2, 63, -12, 126, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -148, 0, 5, -2, 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -148, 5, 0,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimWalk2_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1, 0, 0, -228, -53, 438,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimWalk2_joint14[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, 1702, 0, 1331, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 29), 804, 0, 1698, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 947, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 975, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1420, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1436, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1334, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 0, 1698, 0, 1331, -3,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimWalk2_joint16[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimWalk2_joint17[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1624, -4, -1247, -4, 453, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1919, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1217, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1272, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1331, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1307, -171,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1906, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1339, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1179, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1336, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1104, -206,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 529, -40,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1330, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1594, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 490, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 436, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1333, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1253, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1622, -27, -1247, 6, 452, 16,
	ftAnimLoop(0x6800, -184),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimWalk2_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1083, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 780, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 791, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1052, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1011, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1079, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1083, 4,
	ftAnimLoop(0x6800, -62),
};

/* Joint 21 */
u16 dFTPikachuAnimWalk2_joint21[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 176, -10, 177, -1, -9, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 200, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 135, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -333, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -306, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -142, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 238, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 162, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 154, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 36, 41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -144, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 82, 44, -1, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 160, 24, -7, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 171, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 176, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 175, 15, 177, 1, -9, -1,
	ftAnimLoop(0x6800, -168),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimWalk2_joint22[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 283, -1, 137, -5, -453, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 183, 56, -256, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 237, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 197, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -39, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 238, 40, -438, -193,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 311, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -929, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2, 53, -933, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 408, -10, -682, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 308, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 144, -9,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 387, -24, -665, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 290, -11, -481, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 283, -6, 137, -6, -454, 27,
	ftAnimLoop(0x6800, -168),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimWalk2_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 871, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 690, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 715, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1043, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 910, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 919, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 887, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 872, -14,
	ftAnimLoop(0x6800, -78),
};

/* Joint 25 */
u16 dFTPikachuAnimWalk2_joint25[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, -1, -31, 3, -469, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -171, -14, 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -253, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -206, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -206, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -114, 88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -163, -48,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -189, -21, 1, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -112, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -107, 48,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -222, -66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -459, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -109, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -51, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -60, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -26, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -10, 16, -32, 18, -469, -9,
	ftAnimLoop(0x6800, -172),
	ftAnimEnd(),
	0x400E, 0xFE22, 0x01CF, 0xFE9A, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x200F, 0x000A, 0xFE28, 0x0005, 0x0175, 0x0002, 0xFE3A, 0x0002, 0x380F, 0x000E, 0xFEA1, 0x0207, 0xFEDC, 0x200F, 0x0005, 0xFE2B, 0xFFEB, 0x01DF, 0xFFF7, 0xFEAB, 0xFFF5, 0x200F, 0x0001, 0xFE22, 0x0003, 0x01CF, 0x0001, 0xFE9A, 0x0001, 0x6800, 0xFFB4, 0x0000, 0x0000, 0x0000,
};
