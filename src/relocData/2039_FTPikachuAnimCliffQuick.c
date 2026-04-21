/* AnimJoint data for relocData file 2039 (FTPikachuAnimCliffQuick) */
/* 1040 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimCliffQuick_joint1[14];
extern u16 dFTPikachuAnimCliffQuick_joint2[34];
extern u16 dFTPikachuAnimCliffQuick_joint3[26];
extern u16 dFTPikachuAnimCliffQuick_joint4[20];
extern u16 dFTPikachuAnimCliffQuick_joint6[18];
extern u16 dFTPikachuAnimCliffQuick_joint7[30];
extern u16 dFTPikachuAnimCliffQuick_joint8[18];
extern u16 dFTPikachuAnimCliffQuick_joint9[20];
extern u16 dFTPikachuAnimCliffQuick_joint10[10];
extern u16 dFTPikachuAnimCliffQuick_joint11[18];
extern u16 dFTPikachuAnimCliffQuick_joint12[18];
extern u16 dFTPikachuAnimCliffQuick_joint14[18];
extern u16 dFTPikachuAnimCliffQuick_joint15[30];
extern u16 dFTPikachuAnimCliffQuick_joint17[8];
extern u16 dFTPikachuAnimCliffQuick_joint18[30];
extern u16 dFTPikachuAnimCliffQuick_joint20[18];
extern u16 dFTPikachuAnimCliffQuick_joint22[36];
extern u16 dFTPikachuAnimCliffQuick_joint23[30];
extern u16 dFTPikachuAnimCliffQuick_joint25[18];
extern u16 dFTPikachuAnimCliffQuick_joint26[30];
extern u16 dFTPikachuAnimCliffQuick_joint27[22];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimCliffQuick_joints[] = {
	(u32)dFTPikachuAnimCliffQuick_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimCliffQuick_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimCliffQuick_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimCliffQuick_joint4, /* [3] joint 4 */
	(u32)dFTPikachuAnimCliffQuick_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPikachuAnimCliffQuick_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimCliffQuick_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimCliffQuick_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimCliffQuick_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimCliffQuick_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimCliffQuick_joint12, /* [11] joint 12 */
	(u32)dFTPikachuAnimCliffQuick_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPikachuAnimCliffQuick_joint15, /* [14] joint 15 */
	(u32)dFTPikachuAnimCliffQuick_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPikachuAnimCliffQuick_joint18, /* [17] joint 18 */
	(u32)dFTPikachuAnimCliffQuick_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTPikachuAnimCliffQuick_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPikachuAnimCliffQuick_joint23, /* [22] joint 23 */
	(u32)dFTPikachuAnimCliffQuick_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTPikachuAnimCliffQuick_joint26, /* [25] joint 26 */
	(u32)dFTPikachuAnimCliffQuick_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTPikachuAnimCliffQuick_joint1[14] = {
	ftAnimSetVal(FT_ANIM_TRAY | FT_ANIM_TRAZ), -1380, -240,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -840, -240,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimCliffQuick_joint2[34] = {
	ftAnimSetValRate(FT_ANIM_TRAY), 897, -437,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 156, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -5, 0, 6, 0, -5, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 15), 526, -72,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 150, -33, -85, -57,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 7), 115, -47, -146, -67,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimCliffQuick_joint3[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -136, 0, 4, 0, -280, -1,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -234, -248, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -145, 4, 71, 3, -292, 7, -187, 50, -240, 8, -111, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPikachuAnimCliffQuick_joint4[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -123, 0, 42, 0, 39, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -101, 3, 1, -1, 12, -1,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimCliffQuick_joint6[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 401, -121, 268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 386, -16, -110, 12, 277, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPikachuAnimCliffQuick_joint7[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 232, -67, -95, 50, -501, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -70, -14, 166, 26, -401, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -54, 5, 214, 16, -302, 32,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -54, 214, -302,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimCliffQuick_joint8[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -462, 69,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 42,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPikachuAnimCliffQuick_joint9[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -211, 0, -49, 0, 69, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -195, -6, -27, 2, 24, -1,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimCliffQuick_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimCliffQuick_joint11[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -312, 8, 1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -244, 8, 14, 0, -25, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTPikachuAnimCliffQuick_joint12[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -340, -33, 27,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -252, 9, -33, 0, 63, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPikachuAnimCliffQuick_joint14[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -449, -30, 326,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -430, 27, -56, -6, 320, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTPikachuAnimCliffQuick_joint15[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 803, 0, 1340, -6, 617, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 803, 0, 1342, 21, 840, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 803, 0, 1451, 36, 949, 36,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 803, 1451, 949,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimCliffQuick_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPikachuAnimCliffQuick_joint18[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1343, -2, -1364, -4, 1348, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1492, 53, -1275, 16, 1168, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1660, 55, -1278, 0, 679, -163,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1660, -1278, 679,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTPikachuAnimCliffQuick_joint20[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 496, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 653, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 847, 64,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 847,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimCliffQuick_joint22[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1486, 7, -1633, 3, 1880, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1591, -88, -1687, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1860, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1924, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1997, -135, -1683, 1, 1519, -134,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1997, -1683, 1519,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTPikachuAnimCliffQuick_joint23[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 280, 0, -45, 2, -49, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 261, -8, -23, 4, -36, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 232, -9, -11, 4, 41, 25,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 232, -11, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimCliffQuick_joint25[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 291, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 348, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 321, -8,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 321,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimCliffQuick_joint26[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2014, -6, -1462, 0, 2032, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1960, 44, -1493, -9, 1975, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1765, 65, -1518, -8, 1930, -15,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1765, -1518, 1930,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTPikachuAnimCliffQuick_joint27[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -477, 5, -219, -2, -763, 13,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -501, -29, -461, -9, -24, 40,
	ftAnimEnd(),
	0x0000, 0x0000,
};
