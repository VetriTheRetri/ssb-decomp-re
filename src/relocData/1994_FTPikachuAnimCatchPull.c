/* AnimJoint data for relocData file 1994 (FTPikachuAnimCatchPull) */
/* 912 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimCatchPull_joint1[26];
extern u16 dFTPikachuAnimCatchPull_joint2[26];
extern u16 dFTPikachuAnimCatchPull_joint3[18];
extern u16 dFTPikachuAnimCatchPull_joint5[14];
extern u16 dFTPikachuAnimCatchPull_joint6[24];
extern u16 dFTPikachuAnimCatchPull_joint7[14];
extern u16 dFTPikachuAnimCatchPull_joint8[14];
extern u16 dFTPikachuAnimCatchPull_joint9[12];
extern u16 dFTPikachuAnimCatchPull_joint10[16];
extern u16 dFTPikachuAnimCatchPull_joint11[18];
extern u16 dFTPikachuAnimCatchPull_joint13[14];
extern u16 dFTPikachuAnimCatchPull_joint14[24];
extern u16 dFTPikachuAnimCatchPull_joint16[14];
extern u16 dFTPikachuAnimCatchPull_joint17[24];
extern u16 dFTPikachuAnimCatchPull_joint19[16];
extern u16 dFTPikachuAnimCatchPull_joint21[24];
extern u16 dFTPikachuAnimCatchPull_joint22[24];
extern u16 dFTPikachuAnimCatchPull_joint24[16];
extern u16 dFTPikachuAnimCatchPull_joint25[24];
extern u16 dFTPikachuAnimCatchPull_joint26[18];
extern u16 dFTPikachuAnimCatchPull_joint27[22];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimCatchPull_joints[] = {
	(u32)dFTPikachuAnimCatchPull_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimCatchPull_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimCatchPull_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimCatchPull_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimCatchPull_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimCatchPull_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimCatchPull_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimCatchPull_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimCatchPull_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimCatchPull_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimCatchPull_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimCatchPull_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimCatchPull_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimCatchPull_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimCatchPull_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimCatchPull_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimCatchPull_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimCatchPull_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimCatchPull_joint25, /* [24] joint 25 */
	(u32)dFTPikachuAnimCatchPull_joint26, /* [25] joint 26 */
	(u32)dFTPikachuAnimCatchPull_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTPikachuAnimCatchPull_joint1[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, 33, -28,
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 950, -950, 522, -565,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 950, 0,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimCatchPull_joint2[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 217, 18, -30, -2, 24, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -61, -194,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -31, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -171, -30, 24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimCatchPull_joint3[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRate(FT_ANIM_ROTX), -127, 95,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 131, 163,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 199,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimCatchPull_joint5[14] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 315, -227, -71, -34, 370, 337,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 263, -13, 429,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPikachuAnimCatchPull_joint6[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -359, -112, -1608, 21, 678, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -471, -131, -1586, 38, 775, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -622, -150, -1530, 56, 859, 84,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimCatchPull_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -10,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimCatchPull_joint8[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRate(FT_ANIM_ROTX), -51, -42,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 61,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimCatchPull_joint9[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	_FT_ANIM_CMD(11, 0, 1), 6,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimCatchPull_joint10[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRate(FT_ANIM_ROTZ), 513, 42,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -491, 172,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 343,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimCatchPull_joint11[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -220, 0, -220, -44,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -319,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, -353,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPikachuAnimCatchPull_joint13[14] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -341, 190, -39, -101, 383, 459,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -274, -25, 455,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPikachuAnimCatchPull_joint14[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 478, 86, 1789, 24, 702, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 565, 100, 1813, 21, 807, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 678, 113, 1832, 18, 883, 75,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimCatchPull_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimCatchPull_joint17[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1312, -1151, -1601, 1074, 2238, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, -766, -527, 717, 2366, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -219, -380, -166, 360, 2479, 113,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimCatchPull_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 860,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 860, 304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 609, -251,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimCatchPull_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1345, -400, 1528, -373, 2284, -840,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1745, -86, 1154, -96, 1443, -453,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1518, 226, 1335, 180, 1378, -65,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimCatchPull_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1395, -274, 1651, -551, -1082, -1313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1669, -16, 1099, -81, -2396, -614,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1427, 241, 1487, 387, -2311, 84,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimCatchPull_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, 898,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 904, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 518, -386,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimCatchPull_joint25[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1693, 330, 1577, 427, 2271, -857,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1362, 29, 2004, 155, 1413, -471,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1634, -272, 1887, -116, 1327, -85,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimCatchPull_joint26[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -363, -87, 427, -150, -244, -158,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -325, -636, -610,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTPikachuAnimCatchPull_joint27[22] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -36, 141, -21, 1048, 554, -1250,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -25, -1643, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 15, 12, 366,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
