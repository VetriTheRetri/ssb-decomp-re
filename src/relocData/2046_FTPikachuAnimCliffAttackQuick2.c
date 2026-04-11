/* AnimJoint data for relocData file 2046 (FTPikachuAnimCliffAttackQuick2) */
/* 2400 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimCliffAttackQuick2_joint1[40];
extern u16 dFTPikachuAnimCliffAttackQuick2_joint2[56];
extern u16 dFTPikachuAnimCliffAttackQuick2_joint3[64];
extern u16 dFTPikachuAnimCliffAttackQuick2_joint4[74];
extern u16 dFTPikachuAnimCliffAttackQuick2_joint6[18];
extern u16 dFTPikachuAnimCliffAttackQuick2_joint7[70];
extern u16 dFTPikachuAnimCliffAttackQuick2_joint8[8];
extern u16 dFTPikachuAnimCliffAttackQuick2_joint9[66];
extern u16 dFTPikachuAnimCliffAttackQuick2_joint10[10];
extern u16 dFTPikachuAnimCliffAttackQuick2_joint11[90];
extern u16 dFTPikachuAnimCliffAttackQuick2_joint12[90];
extern u16 dFTPikachuAnimCliffAttackQuick2_joint14[26];
extern u16 dFTPikachuAnimCliffAttackQuick2_joint15[72];
extern u16 dFTPikachuAnimCliffAttackQuick2_joint17[14];
extern u16 dFTPikachuAnimCliffAttackQuick2_joint18[76];
extern u16 dFTPikachuAnimCliffAttackQuick2_joint20[32];
extern u16 dFTPikachuAnimCliffAttackQuick2_joint22[72];
extern u16 dFTPikachuAnimCliffAttackQuick2_joint23[106];
extern u16 dFTPikachuAnimCliffAttackQuick2_joint25[38];
extern u16 dFTPikachuAnimCliffAttackQuick2_joint26[124];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimCliffAttackQuick2_joints[] = {
	(u32)dFTPikachuAnimCliffAttackQuick2_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimCliffAttackQuick2_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimCliffAttackQuick2_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimCliffAttackQuick2_joint4, /* [3] joint 4 */
	(u32)dFTPikachuAnimCliffAttackQuick2_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPikachuAnimCliffAttackQuick2_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimCliffAttackQuick2_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimCliffAttackQuick2_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimCliffAttackQuick2_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimCliffAttackQuick2_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimCliffAttackQuick2_joint12, /* [11] joint 12 */
	(u32)dFTPikachuAnimCliffAttackQuick2_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPikachuAnimCliffAttackQuick2_joint15, /* [14] joint 15 */
	(u32)dFTPikachuAnimCliffAttackQuick2_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPikachuAnimCliffAttackQuick2_joint18, /* [17] joint 18 */
	(u32)dFTPikachuAnimCliffAttackQuick2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTPikachuAnimCliffAttackQuick2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPikachuAnimCliffAttackQuick2_joint23, /* [22] joint 23 */
	(u32)dFTPikachuAnimCliffAttackQuick2_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTPikachuAnimCliffAttackQuick2_joint26, /* [25] joint 26 */
	0xFFFF0243, /* [26] END */
};

/* Joint 1 */
u16 dFTPikachuAnimCliffAttackQuick2_joint1[40] = {
	ftAnimSetVal(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 931, 960,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -60, -30, 960, 480,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 15), -60,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 15), 960,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 15), -60,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 9), 1200,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 128,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), 1200,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimCliffAttackQuick2_joint2[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -12, 0, 15, 0, -13, 0, 64, -61, 743, 1589, -643, -1253,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 33), -26, 33, -28,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 56, -100, 1122, 3718, -656, 623,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 39, -187, 1673, 4262, -487, 1913,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 23, -120, 1600, -1453, -364, 2126,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 9, 0, 735, -41, -38, 65,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 9, 735, 108,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimCliffAttackQuick2_joint3[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 602, 268, -37, -145, 476, 162, -127, 37, -230, 6, -111, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 33), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 983, 508, -525, -90, 482, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1821, 582, -75, 157, -78, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2745, 70, 97, 13, -113, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 2743, 23, 97, 1, -113, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 3293, 29, 132, 2, 58, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 3240, 133, 32,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPikachuAnimCliffAttackQuick2_joint4[74] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 11, 23, 33, 13, 12,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6, -4, 266, 44, 116, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -76, -158, 111, -2, 7, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 244, 208, 231, -50, 42, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 251, -3, 164, -8, 125, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 185, -2, 97, -6, 180, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 202, 3, 24, -10, 120, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 218, -26, -6, -3, 100, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -13, 0, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPikachuAnimCliffAttackQuick2_joint6[18] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 366, -12, -94, 9, 288, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 33), 324, -62, 313,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPikachuAnimCliffAttackQuick2_joint7[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1611, 350, -1816, 82, 1312, -199,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1327, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -558, 12, 715, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1539, -156, 1731, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1495, 19, -1347, -6, 1704, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1630, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1419, 31, 1615, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -818, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1005, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1635, -12, 961, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1702, -35, 1032, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -804, 4, -1849, -48, 1406, 124,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimCliffAttackQuick2_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 33),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPikachuAnimCliffAttackQuick2_joint9[66] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 53, 73, -91, -20, -5, -36,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 64, 83, -120, 100, -129, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 304, 44, 210, 170, 156, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 154, -16, 220, -23, 39, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 52, -13, -147, -22, 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -74, 4, -168, -1, -16, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 101, 6, -171, 0, 16, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2, -163, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPikachuAnimCliffAttackQuick2_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 33),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimCliffAttackQuick2_joint11[90] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -162, 18, 4, -8, 0, 29,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -73, 38, -64, -20, 243, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -47, 33, -55, 15, 210, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, 133, -58, -39, 184, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 360, 44, -166, -13, 437, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 220, -16, -127, 9, 212, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 191, -36, -68, 12, 200, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -181, 8, 12, 3, 130, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 283, 51, -32, -4, 9, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 283, -47, -32, 5, 9, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTPikachuAnimCliffAttackQuick2_joint12[90] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -177, 4, -17, 9, 14, -48,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -210, 4, 55, 22, -371, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -164, 70, 49, -12, -322, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -85, 145, 41, 26, -236, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 296, 49, 122, 0, 209, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 161, -15, 37, -7, -63, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 144, -41, 47, -7, -54, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -291, 3, -42, -3, -342, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 186, 53, 7, 5, -82, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 186, -31, 7, -1, -82, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPikachuAnimCliffAttackQuick2_joint14[26] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -318, 31, 85, -8, 340, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -386, -1, -46, -35, 319, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 32), -324, -62, 313,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTPikachuAnimCliffAttackQuick2_joint15[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 803, 0, 1584, 21, 598, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 803, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1649, -65, 659, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1194, -49, 433, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1354, 59, 831, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1550, 44, 1059, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 720, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1746, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1842, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1405, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1171, -1, 579, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1394, 87, 1034, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 804, 0, 1698, 101, 1312, 92,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimCliffAttackQuick2_joint17[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -3,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPikachuAnimCliffAttackQuick2_joint18[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1362, 55, -1484, 66, 1508, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1696, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1285, 16, 1500, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1383, -19, 1122, -72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1567, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1030, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1057, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1152, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1800, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1620, -6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1105, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1154, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1582, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1637, 7, -1599, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1663, 8, -1603, -1, 1204, 16,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPikachuAnimCliffAttackQuick2_joint20[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 337, 82,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 842, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 869, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1038, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1046, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 938, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 938, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPikachuAnimCliffAttackQuick2_joint22[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1517, -69, -1658, 36, 2085, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1725, -5, -1548, 7, 1670, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1552, 21, -1613, -10, 1623, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1632, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1656, -22, 1641, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1733, -28, 1954, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1829, -1, -1724, -20, 1561, -91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1769, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1739, 29, 1404, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -1594, 0, 1271, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1603, -3, -1736, 10, 1255, -5,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPikachuAnimCliffAttackQuick2_joint23[106] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1594, 54, 1444, 15, 1101, 47,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1760, -9, 1418, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), 1642, 7,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 819, 4096, 819, 4096, 819,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 5324, 2048, 5324, 2048, 5324, 2048,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 6144, -153, 6144, -153, 6144, -153,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4096, -141, 4096, -141, 4096, -141,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1697, -8, 1421, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1737, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1611, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1386, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1319, -13,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 14), 4096, 4096, 4096,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1288, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1741, 0, 1349, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1740, 0, 1663, 6, 1413, 21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimCliffAttackQuick2_joint25[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 765, -255,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -127,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 828, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 852, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 874, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 819, -18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTPikachuAnimCliffAttackQuick2_joint26[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, 18, 209, -84, 359, -157,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -169, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 42, -9, -112, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -69, -9, 261, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -14, -9, 94, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -123, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 187, -6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -69, 8, -66, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -241, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 37, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -8, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -44, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 157, -7, -357, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 186, 23, -465, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -12, 10, 284, 32, -484, -6,
	ftAnimEnd(),
	0x280E, 0xFC25, 0x002B, 0xFE8B, 0x000A, 0xFFAF, 0xFFED, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x200F, 0x0002, 0xFF94, 0x002E, 0xFE94, 0x0004, 0xFF3D, 0xFFF9, 0x200F, 0x0013, 0xFFF6, 0xFFFE, 0xFEF2, 0x0009, 0xFF09, 0x0001, 0x200F, 0x0006, 0xFF61, 0x0000, 0xFF75, 0x0016, 0xFF66, 0x0014, 0x380F, 0x0006, 0xFFF2, 0x0000, 0xFFFD, 0x0000, 0x0000,
};
