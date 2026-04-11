/* AnimJoint data for relocData file 2048 (FTPikachuAnimCliffAttackSlow2) */
/* 2800 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimCliffAttackSlow2_joint1[24];
extern u16 dFTPikachuAnimCliffAttackSlow2_joint2[100];
extern u16 dFTPikachuAnimCliffAttackSlow2_joint3[54];
extern u16 dFTPikachuAnimCliffAttackSlow2_joint4[62];
extern u16 dFTPikachuAnimCliffAttackSlow2_joint6[26];
extern u16 dFTPikachuAnimCliffAttackSlow2_joint7[76];
extern u16 dFTPikachuAnimCliffAttackSlow2_joint8[8];
extern u16 dFTPikachuAnimCliffAttackSlow2_joint9[80];
extern u16 dFTPikachuAnimCliffAttackSlow2_joint10[10];
extern u16 dFTPikachuAnimCliffAttackSlow2_joint11[74];
extern u16 dFTPikachuAnimCliffAttackSlow2_joint12[74];
extern u16 dFTPikachuAnimCliffAttackSlow2_joint14[26];
extern u16 dFTPikachuAnimCliffAttackSlow2_joint15[92];
extern u16 dFTPikachuAnimCliffAttackSlow2_joint17[18];
extern u16 dFTPikachuAnimCliffAttackSlow2_joint18[100];
extern u16 dFTPikachuAnimCliffAttackSlow2_joint20[50];
extern u16 dFTPikachuAnimCliffAttackSlow2_joint22[96];
extern u16 dFTPikachuAnimCliffAttackSlow2_joint23[92];
extern u16 dFTPikachuAnimCliffAttackSlow2_joint25[46];
extern u16 dFTPikachuAnimCliffAttackSlow2_joint26[238];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimCliffAttackSlow2_joints[] = {
	(u32)dFTPikachuAnimCliffAttackSlow2_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimCliffAttackSlow2_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimCliffAttackSlow2_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimCliffAttackSlow2_joint4, /* [3] joint 4 */
	(u32)dFTPikachuAnimCliffAttackSlow2_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPikachuAnimCliffAttackSlow2_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimCliffAttackSlow2_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimCliffAttackSlow2_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimCliffAttackSlow2_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimCliffAttackSlow2_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimCliffAttackSlow2_joint12, /* [11] joint 12 */
	(u32)dFTPikachuAnimCliffAttackSlow2_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPikachuAnimCliffAttackSlow2_joint15, /* [14] joint 15 */
	(u32)dFTPikachuAnimCliffAttackSlow2_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPikachuAnimCliffAttackSlow2_joint18, /* [17] joint 18 */
	(u32)dFTPikachuAnimCliffAttackSlow2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTPikachuAnimCliffAttackSlow2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPikachuAnimCliffAttackSlow2_joint23, /* [22] joint 23 */
	(u32)dFTPikachuAnimCliffAttackSlow2_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTPikachuAnimCliffAttackSlow2_joint26, /* [25] joint 26 */
	0xFFFF027B, /* [26] END */
};

/* Joint 1 */
u16 dFTPikachuAnimCliffAttackSlow2_joint1[24] = {
	ftAnimSetVal(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 27), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 7), 360,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -3,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 20), 360,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimCliffAttackSlow2_joint2[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -21, 0, 26, 0, -23, 0, 229, -16, 492, -156, -153, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -21, 0, 26, 71, -23, 2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 196, -131, 800, 124, 80, 315,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 20, -20, 694, -70, 360, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -15, 0, 1453, 158, 28, 5, -68, -3, 676, -9, -106, -253,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 675, 0, -178, 50,
	ftAnimSetValRateT(FT_ANIM_TRAX, 15), 9, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -15, 0, 1453, -71, 28, -2,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -26, 33, -28,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 675, 0, -11, 257,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), 78, 191,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 19, 675,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), 108, -311,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 9, 675,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimCliffAttackSlow2_joint3[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 137, 12, 5, -1, 163, 1, -57, 16, -219, 2, -111, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 159, 0, -4, 0, 50, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 137, -13, 5, 13, 67, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 23, -3, 133, 4, 32, -1,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 23, 133, 32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 23, 133, 32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTPikachuAnimCliffAttackSlow2_joint4[62] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 210, 0, 0, -2, 19, 1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 19, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 187, -9, -15, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 88, -15, -9, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 559, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 30, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 3, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -585, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), -13, -1, 0, 36,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -13, 0, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPikachuAnimCliffAttackSlow2_joint6[26] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 316, 7, -113, 30, 389, -44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 324, 1, -62, 10, 313, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 27), 324, -62, 313,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPikachuAnimCliffAttackSlow2_joint7[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 448, 44, 155, -2, -594, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -672, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 801, 6, -29, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 823, 21, -221, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 984, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 36, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -603, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -448, 1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 944, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 824, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 15, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 55, 34, -409, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 806, -6, 224, 56, -225, 61,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 806, 224, -225,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimCliffAttackSlow2_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPikachuAnimCliffAttackSlow2_joint9[80] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 136, -5, -33, -9, -7, 1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 62, -4, -166, -12, 18, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 62, -5, -230, -19, 18, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -487, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 40, -48, 39, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -84, -24, 154, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -525, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -81, 20, 149, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 104, 5, -64, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -356, 21,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -14, -8, 22, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -2, -163, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPikachuAnimCliffAttackSlow2_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimCliffAttackSlow2_joint11[74] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -80, 16, 7, 0, 6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 128, 10, 6, 0, 11, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 128, -20, 6, 28, 11, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -58, -16, 260, -18, -193, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 46, 15, -84, -49, 14, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 46, -4, -84, -27, 14, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 20, -4, -248, 1, 24, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 16, -2, -75, 27, 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTPikachuAnimCliffAttackSlow2_joint12[74] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -68, 19, -11, 1, 21, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 182, 11, 8, -5, 16, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 159, 6, -113, 45, 51, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 240, -13, 415, 32, -37, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 93, -21, 47, -52, -11, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 93, 14, 47, -41, -11, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 181, -6, -203, -2, -23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 46, -20, 30, 22, -8, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPikachuAnimCliffAttackSlow2_joint14[26] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -325, 0, -80, 15, 357, -23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), -324, 0, -62, 3, 313, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 27), -324, -62, 313,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTPikachuAnimCliffAttackSlow2_joint15[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 694, 7, 1517, 44, 878, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 984, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), 805, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1675, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1770, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1713, 55, 791, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2103, -87, 1228, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1189, -66, 977, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1702, 28, 1048, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1362, -85, 1010, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1307, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1189, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1199, 56,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1434, 79, 1303, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 804, 0, 1677, 80, 1313, 3,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 1677, 1313,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimCliffAttackSlow2_joint17[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -3,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPikachuAnimCliffAttackSlow2_joint18[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1684, -5, -1581, -2, 676, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1664, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1595, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 751, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1256, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1331, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1698, 1, 1457, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1630, 3, 1187, 52,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1609, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1690, 12, -1532, 0, 1612, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1735, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1604, -17, 1251, -98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1617, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1022, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1142, 19,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1746, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1702, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1667, -11, -1604, 4, 1196, 17,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1667, -1604, 1196,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTPikachuAnimCliffAttackSlow2_joint20[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1063, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1095, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 535, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 677, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 787, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 997, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 852, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1035, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1027, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1008, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 952, -18,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 952,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimCliffAttackSlow2_joint22[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1470, 25, -1791, 0, 1378, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 1672, 30, -1792, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1319, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1190, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1340, -17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1762, 0, -1838, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1671, 0, -1745, -3, 1163, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1760, -7, -1862, -25, 1268, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1556, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1897, 19, 1253, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1272, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1747, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1754, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1574, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1555, 5, 1106, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1608, 17, -1738, 5, 1237, 43,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, -1738, 1237,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTPikachuAnimCliffAttackSlow2_joint23[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 107, -5, -19, -1, -153, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -48, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 269, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -251, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -316, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 116, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -23, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -273, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 359, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 205, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 428, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 449, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 307, -10, -129, 36, -38, -113,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -70, 2, -221, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 141, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 92, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 103, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 125, 7, -60, 3, -195, 8,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 125, -60, -195,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimCliffAttackSlow2_joint25[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 425, 63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 853, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 857, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 576, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 649, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 833, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 822, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 808, -4,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 808,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimCliffAttackSlow2_joint26[238] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, 36, 237, 6, 234, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 276, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 200, -17, 52, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -9, -33, -340, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -41, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 296, -31, -357, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 88, -116, -401, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -360, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -236, -6, -404, -85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -125, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -77, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -29, -1, -266, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -87, 6, 59, 67, -458, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 318, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 7, 14, -457, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -3, 0, -479, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 307, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -4, 0, 286, -6, -483, -1,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, 286, -483,
	ftAnimEnd(),
	0x0000, 0x280E, 0xFE0F, 0x0004, 0xFF46, 0xFFFC, 0xFD15, 0xFFFF, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x200F, 0x0005, 0xFE23, 0x0002, 0xFF25, 0xFFF7, 0xFD05, 0x0000, 0x300E, 0x0005, 0xFFFE, 0x000D, 0x200F, 0x0008, 0xFF05, 0x002D, 0x0145, 0x001F, 0xFE11, 0x001C, 0x200F, 0x0003, 0x001C, 0x0058, 0x007E, 0xFFC9, 0xFE3F, 0x001B, 0x200F, 0x0001, 0x0067, 0xFFEA, 0x0065, 0x0000, 0xFE7F, 0xFFF9, 0x200F, 0x0001, 0xFFF0, 0xFC40, 0x0080, 0x02A9, 0xFE30, 0xFCC7, 0x200F, 0x0001, 0xF8E7, 0xFBA2, 0x05B9, 0x022B, 0xF80C, 0xFC59, 0x200F, 0x0001, 0xF732, 0xFE0F, 0x04D8, 0xFFC9, 0xF6E2, 0xFEDA, 0x200F, 0x0001, 0xF504, 0xFF26, 0x054A, 0xFFF2, 0xF5BF, 0xFFB8, 0x200F, 0x0001, 0xF57E, 0x03C3, 0x04BA, 0xFE0C, 0xF650, 0x0364, 0x200F, 0x0001, 0xFC8A, 0x03B3, 0x0161, 0xFE65, 0xFC89, 0x02E2, 0x200F, 0x0001, 0xFCE5, 0x0032, 0x0184, 0x0007, 0xFC16, 0x0027, 0x200F, 0x0008, 0xFE53, 0x0037, 0x01A3, 0xFFD3, 0xFDEF, 0x004D, 0x200F, 0x0003, 0xFF44, 0x0033, 0xFF8E, 0xFFCC, 0xFF66, 0x0041, 0x380F, 0x0005, 0xFFF2, 0x0000, 0xFFFD, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
