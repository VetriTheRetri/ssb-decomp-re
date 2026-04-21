/* AnimJoint data for relocData file 2042 (FTPikachuAnimCliffSlow) */
/* 2000 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimCliffSlow_joint1[14];
extern u16 dFTPikachuAnimCliffSlow_joint2[42];
extern u16 dFTPikachuAnimCliffSlow_joint3[60];
extern u16 dFTPikachuAnimCliffSlow_joint4[56];
extern u16 dFTPikachuAnimCliffSlow_joint6[42];
extern u16 dFTPikachuAnimCliffSlow_joint7[110];
extern u16 dFTPikachuAnimCliffSlow_joint8[40];
extern u16 dFTPikachuAnimCliffSlow_joint9[44];
extern u16 dFTPikachuAnimCliffSlow_joint10[10];
extern u16 dFTPikachuAnimCliffSlow_joint11[26];
extern u16 dFTPikachuAnimCliffSlow_joint12[26];
extern u16 dFTPikachuAnimCliffSlow_joint14[50];
extern u16 dFTPikachuAnimCliffSlow_joint15[70];
extern u16 dFTPikachuAnimCliffSlow_joint17[50];
extern u16 dFTPikachuAnimCliffSlow_joint18[30];
extern u16 dFTPikachuAnimCliffSlow_joint20[18];
extern u16 dFTPikachuAnimCliffSlow_joint22[76];
extern u16 dFTPikachuAnimCliffSlow_joint23[40];
extern u16 dFTPikachuAnimCliffSlow_joint25[26];
extern u16 dFTPikachuAnimCliffSlow_joint26[72];
extern u16 dFTPikachuAnimCliffSlow_joint27[44];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimCliffSlow_joints[] = {
	(u32)dFTPikachuAnimCliffSlow_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimCliffSlow_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimCliffSlow_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimCliffSlow_joint4, /* [3] joint 4 */
	(u32)dFTPikachuAnimCliffSlow_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPikachuAnimCliffSlow_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimCliffSlow_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimCliffSlow_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimCliffSlow_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimCliffSlow_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimCliffSlow_joint12, /* [11] joint 12 */
	(u32)dFTPikachuAnimCliffSlow_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPikachuAnimCliffSlow_joint15, /* [14] joint 15 */
	(u32)dFTPikachuAnimCliffSlow_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPikachuAnimCliffSlow_joint18, /* [17] joint 18 */
	(u32)dFTPikachuAnimCliffSlow_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTPikachuAnimCliffSlow_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPikachuAnimCliffSlow_joint23, /* [22] joint 23 */
	(u32)dFTPikachuAnimCliffSlow_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTPikachuAnimCliffSlow_joint26, /* [25] joint 26 */
	(u32)dFTPikachuAnimCliffSlow_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTPikachuAnimCliffSlow_joint1[14] = {
	ftAnimSetVal(FT_ANIM_TRAY | FT_ANIM_TRAZ), -1380, -240,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), -720, -240,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimCliffSlow_joint2[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 156, 897, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), -16, 0, 20, 0, -18, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 229, 17, 995, 28, -74, 5,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), 1024, 31, -50, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 25), 230,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 229, 0, 1114, -283, -12, -54,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimCliffSlow_joint3[60] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -136, 0, 4, 0, -280, -1,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -234, -248, -111,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), -101, 28, -226, 4, -111, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -40, 5, 3, -2, 61, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -50, -4, -27, 4, 226, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -107, -2, 72, 2, -189, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -106, 6, 20, -3, 33, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -4, 16, 13, -1, 29, 8,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPikachuAnimCliffSlow_joint4[56] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -123, 0, 42, 0, 39, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -131, 0, 86, 0, -87, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -136, 0, 18, -2, 89, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -123, 2, 42, 0, 39, -2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 53, 30, 12, -1, 54, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 180, 10, 26, 0, -5, -2,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimCliffSlow_joint6[42] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 401, -121, 268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 314, -34, -54, 9, 295, 45,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 292, -23, -91, -40, 411, 51,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 251, 4, -165, -31, 437, 16,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 301, 28, -150, 23, 441, -21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPikachuAnimCliffSlow_joint7[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 232, 140, -95, -18, -501, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -390, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1002, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 654, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 838, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 950, 11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -410, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -359, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 970, -24, -1019, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -495, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 805, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 453, -85, -107, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 403, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 80, 10, -360, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -42, -56, -106, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 977, 87, -257, -12, -221, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 606, -67, -208, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -116, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -124, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 521, -28, -195, -23, -366, -52,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 521, -195, -366,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimCliffSlow_joint8[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -462, 154,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 77,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -407, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -391, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 65,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPikachuAnimCliffSlow_joint9[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -211, 0, -49, 0, 69, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 30, 7, -83, 0, 13, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -1, 5, -71, -3, 99, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 108, 15, -140, 1, 31, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 149, 5, -61, 14, 0, -4,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimCliffSlow_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimCliffSlow_joint11[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -312, 8, 1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 33), -312, 1, 8, 0, 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -239, 13, 8, 0, 2, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTPikachuAnimCliffSlow_joint12[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -340, -33, 27,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 33), -340, 2, -33, 0, 27, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -256, 15, -26, 1, 25, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPikachuAnimCliffSlow_joint14[50] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -449, -30, 326,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -349, 73, 13, 20, 282, 12,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -302, -54, 11, -100, 352, 10,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -450, -10, -175, -117, 302, -6,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -321, 66, -194, 36, 340, 41,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -325, -1, -106, 45, 380, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTPikachuAnimCliffSlow_joint15[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 803, 0, 1340, -25, 617, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 746, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), 783, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 1531, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1816, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1969, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1667, -82, 1006, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1409, 8, 1560, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 798, -5, 1504, 15, 1634, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 701, -9, 1444, 12, 1221, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 696, -1, 1577, 44, 1216, -1,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 696, 1577, 1216,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimCliffSlow_joint17[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -118,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -516, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -306, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -277, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -802, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -716, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -516, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 66,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPikachuAnimCliffSlow_joint18[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1347, 0, -1360, 0, 1339, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 1486, 9, -1457, -5, 1307, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1523, 12, -1469, -3, 1268, -13,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1523, -1469, 1268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTPikachuAnimCliffSlow_joint20[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 510, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), 569, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 629, 19,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 629,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimCliffSlow_joint22[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1730, 2, -1633, 13, 1880, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -1587, -53, 2079, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), 1696, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1681, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1924, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1779, -50, 2250, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1811, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2360, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1733, -53, 2157, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1579, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1636, 32, 1874, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1618, -7, 1762, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1519, -19, -1682, -21, 1614, -49,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1519, -1682, 1614,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTPikachuAnimCliffSlow_joint23[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 281, 0, -45, 0, -49, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 36), 182, 0, -41, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 17, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 9, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -71, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 183, 0, -22, 6, -160, -29,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 183, -22, -160,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimCliffSlow_joint25[26] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 291, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 503, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 527, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 608, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 666, 19,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 666,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimCliffSlow_joint26[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2010, -2, -1462, 9, 2032, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -2077, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 1915, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), -1275, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1332, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1896, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1970, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1723, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1819, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1737, -34,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1819, -32, -1739, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1900, 15, -1580, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1826, 24, -1697, -39, 1593, -48,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1826, -1697, 1593,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTPikachuAnimCliffSlow_joint27[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -477, 5, -219, -2, -763, 13,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -499, 0, -222, 0, -898, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -464, -2, -206, 2, -675, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -568, -4, -150, 2, -998, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -546, 2, -161, -1, -782, 21,
	ftAnimEnd(),
};
