/* AnimJoint data for relocData file 2049 (FTPikachuAnimCliffEscapeQuick1) */
/* 1184 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimCliffEscapeQuick1_joint1[26];
extern u16 dFTPikachuAnimCliffEscapeQuick1_joint2[52];
extern u16 dFTPikachuAnimCliffEscapeQuick1_joint3[46];
extern u16 dFTPikachuAnimCliffEscapeQuick1_joint4[20];
extern u16 dFTPikachuAnimCliffEscapeQuick1_joint6[20];
extern u16 dFTPikachuAnimCliffEscapeQuick1_joint7[30];
extern u16 dFTPikachuAnimCliffEscapeQuick1_joint8[18];
extern u16 dFTPikachuAnimCliffEscapeQuick1_joint9[28];
extern u16 dFTPikachuAnimCliffEscapeQuick1_joint10[10];
extern u16 dFTPikachuAnimCliffEscapeQuick1_joint11[20];
extern u16 dFTPikachuAnimCliffEscapeQuick1_joint12[20];
extern u16 dFTPikachuAnimCliffEscapeQuick1_joint14[28];
extern u16 dFTPikachuAnimCliffEscapeQuick1_joint15[30];
extern u16 dFTPikachuAnimCliffEscapeQuick1_joint17[8];
extern u16 dFTPikachuAnimCliffEscapeQuick1_joint18[30];
extern u16 dFTPikachuAnimCliffEscapeQuick1_joint20[18];
extern u16 dFTPikachuAnimCliffEscapeQuick1_joint22[30];
extern u16 dFTPikachuAnimCliffEscapeQuick1_joint23[30];
extern u16 dFTPikachuAnimCliffEscapeQuick1_joint25[18];
extern u16 dFTPikachuAnimCliffEscapeQuick1_joint26[30];
extern u16 dFTPikachuAnimCliffEscapeQuick1_joint27[26];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTPikachuAnimCliffEscapeQuick1_joints[] = {
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeQuick1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeQuick1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeQuick1_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeQuick1_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeQuick1_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeQuick1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeQuick1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeQuick1_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeQuick1_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeQuick1_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeQuick1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeQuick1_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeQuick1_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeQuick1_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeQuick1_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeQuick1_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeQuick1_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeQuick1_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeQuick1_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeQuick1_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTPikachuAnimCliffEscapeQuick1_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTPikachuAnimCliffEscapeQuick1_joint1[26] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), -240,
	ftAnimSetValBlock(FT_ANIM_TRAY), -840,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), -240, 12,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 5), -840,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 960,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 1344, 0, 384,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimCliffEscapeQuick1_joint2[52] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAY), 897, -437,
	ftAnimSetValRateT(FT_ANIM_TRAY, 15), 526, 53,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 10,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), -5, 0, 6, 0, -5, 0, 115, -47, -146, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -12, -1, 15, 1, -13, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 79, -246, -186, -483,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -69, -1198, 1005, 1317, -509, -225,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -220, 344, 856, -926, -242, 1839,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimCliffEscapeQuick1_joint3[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -145, 4, 71, 3, -292, 7, -187, 50, -240, 8, -111, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -127, 37, -230, 6, -111, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -69, 115, 54, 53, -166, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 549, 565, 393, 87, 99, 393,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1062, 139, 230, -201, 621, 233,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPikachuAnimCliffEscapeQuick1_joint4[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -101, 3, 1, -1, 12, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -66, 10, 23, 29, 13, 11,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimCliffEscapeQuick1_joint6[20] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 386, -16, -110, 12, 277, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 366, -12, -94, 9, 288, 7,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimCliffEscapeQuick1_joint7[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1561, 0, 1387, -14, -1892, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1560, 3, 1344, -7, -1869, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1581, 6, 1343, 0, -1864, 1,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1581, 1343, -1864,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimCliffEscapeQuick1_joint8[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -199, -63,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), -199,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimCliffEscapeQuick1_joint9[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -195, -6, -27, 2, 24, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -304, 26, -16, -12, 50, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -8, 64, -115, 63, 104, 30,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimCliffEscapeQuick1_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 7),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimCliffEscapeQuick1_joint11[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -244, 30, 14, 0, -25, 16,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 201, 52, -4, -2, 289, 38,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPikachuAnimCliffEscapeQuick1_joint12[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -252, 25, -33, 0, 63, -27,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 99, 25, -25, -1, -438, -39,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimCliffEscapeQuick1_joint14[28] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -430, 27, -56, -6, 320, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -394, 127, -44, 162, 320, 23,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -318, 31, 85, -8, 340, -3,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPikachuAnimCliffEscapeQuick1_joint15[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 803, 0, 1504, 69, 907, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 803, 0, 1713, -19, 881, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 803, 0, 1386, -108, 842, -12,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 803, 1386, 842,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimCliffEscapeQuick1_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 7),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPikachuAnimCliffEscapeQuick1_joint18[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1449, -7, -1212, 2, 628, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1426, 0, -1204, -21, 639, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1452, 8, -1340, -45, 949, 103,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1452, -1340, 949,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTPikachuAnimCliffEscapeQuick1_joint20[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 808, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 808, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 813, 1,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 813,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimCliffEscapeQuick1_joint22[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1857, -4, -1866, -12, 1513, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1870, 72, -1903, 47, 1450, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1422, 149, -1578, 108, 1899, 149,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1422, -1578, 1899,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTPikachuAnimCliffEscapeQuick1_joint23[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 219, -29, -2, 64, 57, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 129, -34, 190, 32, -565, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 14, -38, 189, 0, -744, -59,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 14, 189, -744,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimCliffEscapeQuick1_joint25[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 321, 183,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 871, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 828, -14,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 828,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimCliffEscapeQuick1_joint26[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1710, 113, -1523, -43, 1916, -285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1370, -18, -1653, -33, 1059, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1819, -149, -1726, -24, 1939, 293,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1819, -1726, 1939,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTPikachuAnimCliffEscapeQuick1_joint27[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -501, -45, -461, 10, -24, 47,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1256, -116, -33, 58, 41, -24,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
