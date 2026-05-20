/* AnimJoint data for relocData file 2045 (FTPikachuAnimCliffAttackQuick1) */
/* 1152 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimCliffAttackQuick1_joint1[26];
extern u16 dFTPikachuAnimCliffAttackQuick1_joint2[44];
extern u16 dFTPikachuAnimCliffAttackQuick1_joint3[38];
extern u16 dFTPikachuAnimCliffAttackQuick1_joint4[20];
extern u16 dFTPikachuAnimCliffAttackQuick1_joint6[20];
extern u16 dFTPikachuAnimCliffAttackQuick1_joint7[30];
extern u16 dFTPikachuAnimCliffAttackQuick1_joint8[8];
extern u16 dFTPikachuAnimCliffAttackQuick1_joint9[28];
extern u16 dFTPikachuAnimCliffAttackQuick1_joint10[18];
extern u16 dFTPikachuAnimCliffAttackQuick1_joint11[20];
extern u16 dFTPikachuAnimCliffAttackQuick1_joint12[20];
extern u16 dFTPikachuAnimCliffAttackQuick1_joint14[28];
extern u16 dFTPikachuAnimCliffAttackQuick1_joint15[30];
extern u16 dFTPikachuAnimCliffAttackQuick1_joint17[8];
extern u16 dFTPikachuAnimCliffAttackQuick1_joint18[30];
extern u16 dFTPikachuAnimCliffAttackQuick1_joint20[18];
extern u16 dFTPikachuAnimCliffAttackQuick1_joint22[30];
extern u16 dFTPikachuAnimCliffAttackQuick1_joint23[34];
extern u16 dFTPikachuAnimCliffAttackQuick1_joint25[18];
extern u16 dFTPikachuAnimCliffAttackQuick1_joint26[30];
extern u16 dFTPikachuAnimCliffAttackQuick1_joint27[24];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTPikachuAnimCliffAttackQuick1_joints[] = {
	(AObjEvent32 *)dFTPikachuAnimCliffAttackQuick1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPikachuAnimCliffAttackQuick1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPikachuAnimCliffAttackQuick1_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPikachuAnimCliffAttackQuick1_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTPikachuAnimCliffAttackQuick1_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTPikachuAnimCliffAttackQuick1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPikachuAnimCliffAttackQuick1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTPikachuAnimCliffAttackQuick1_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTPikachuAnimCliffAttackQuick1_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPikachuAnimCliffAttackQuick1_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPikachuAnimCliffAttackQuick1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTPikachuAnimCliffAttackQuick1_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTPikachuAnimCliffAttackQuick1_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTPikachuAnimCliffAttackQuick1_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTPikachuAnimCliffAttackQuick1_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTPikachuAnimCliffAttackQuick1_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTPikachuAnimCliffAttackQuick1_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTPikachuAnimCliffAttackQuick1_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTPikachuAnimCliffAttackQuick1_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTPikachuAnimCliffAttackQuick1_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTPikachuAnimCliffAttackQuick1_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTPikachuAnimCliffAttackQuick1_joint1[26] = {
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
u16 dFTPikachuAnimCliffAttackQuick1_joint2[44] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAY), 897, -437,
	ftAnimSetValRateT(FT_ANIM_TRAY, 15), 526, -72,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 10,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), -5, 0, 6, 0, -5, 0, 115, -47, -146, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -12, 0, 15, 0, -13, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 79, -58, -186, -568,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 64, -61, 743, 1589, -643, -1253,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimCliffAttackQuick1_joint3[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -145, 4, 71, 3, -292, 7, -187, 50, -240, 8, -111, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -127, 37, -230, 6, -111, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -69, 106, 54, -15, -166, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 602, 210, -37, -116, 476, 129,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPikachuAnimCliffAttackQuick1_joint4[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -101, 3, 1, -1, 12, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -66, 10, 23, 29, 13, 11,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimCliffAttackQuick1_joint6[20] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 386, -16, -110, 12, 277, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 366, -12, -94, 9, 288, 7,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimCliffAttackQuick1_joint7[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -48, 9, 220, 6, -288, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -20, 7, 240, 1, -232, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2, 5, 230, -3, -247, -5,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, 230, -247,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimCliffAttackQuick1_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 7),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPikachuAnimCliffAttackQuick1_joint9[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -195, -6, -27, 2, 24, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -304, 35, -16, -9, 50, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 53, 61, -91, -17, -5, -30,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimCliffAttackQuick1_joint10[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 59, 5, 2401,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 8, 32, 508,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 59, -1, 5, 0, 2401, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPikachuAnimCliffAttackQuick1_joint11[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -244, 8, 14, 0, -25, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -162, 14, 4, -6, 0, 22,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPikachuAnimCliffAttackQuick1_joint12[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -252, 9, -33, 0, 63, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -177, 3, -17, 7, 14, -36,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimCliffAttackQuick1_joint14[28] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -430, 27, -56, -6, 320, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -394, 127, -44, 162, 320, 23,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -318, 31, 85, -8, 340, -3,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPikachuAnimCliffAttackQuick1_joint15[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 803, 0, 1530, 24, 953, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 803, 0, 1605, 87, 885, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 803, 0, 2057, 150, 660, -75,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 803, 2057, 660,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimCliffAttackQuick1_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 7),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPikachuAnimCliffAttackQuick1_joint18[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1413, -8, -1182, 2, 644, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1389, 9, -1175, -24, 657, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1471, 27, -1326, -50, 938, 93,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1471, -1326, 938,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTPikachuAnimCliffAttackQuick1_joint20[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 808, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 808, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 823, 4,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 823,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimCliffAttackQuick1_joint22[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1864, -4, -1866, -12, 1513, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1877, 67, -1903, 47, 1450, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1460, 138, -1578, 108, 1899, 149,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1460, -1578, 1899,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTPikachuAnimCliffAttackQuick1_joint23[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1833, -27, 1613, -67, 1668, -207,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1750, -33, 1409, -33, 1047, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1634, -38, 1410, 0, 864, -60,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1634, 1410, 864,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimCliffAttackQuick1_joint25[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 319, 184,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 871, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 830, -13,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 830,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimCliffAttackQuick1_joint26[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -87, 104, -84, 43, 308, -285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 225, -20, 44, 33, -548, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -213, -146, 118, 24, 331, 293,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -213, 118, 331,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTPikachuAnimCliffAttackQuick1_joint27[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -501, -29, -461, -9, -24, 40,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -987, 45, -373, 34, -81, -2,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
