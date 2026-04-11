/* AnimJoint data for relocData file 2037 (FTPikachuAnimCliffCatch) */
/* 960 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimCliffCatch_joint1[16];
extern u16 dFTPikachuAnimCliffCatch_joint2[22];
extern u16 dFTPikachuAnimCliffCatch_joint3[30];
extern u16 dFTPikachuAnimCliffCatch_joint4[26];
extern u16 dFTPikachuAnimCliffCatch_joint6[14];
extern u16 dFTPikachuAnimCliffCatch_joint7[22];
extern u16 dFTPikachuAnimCliffCatch_joint8[14];
extern u16 dFTPikachuAnimCliffCatch_joint9[26];
extern u16 dFTPikachuAnimCliffCatch_joint10[10];
extern u16 dFTPikachuAnimCliffCatch_joint11[22];
extern u16 dFTPikachuAnimCliffCatch_joint12[22];
extern u16 dFTPikachuAnimCliffCatch_joint14[14];
extern u16 dFTPikachuAnimCliffCatch_joint15[22];
extern u16 dFTPikachuAnimCliffCatch_joint17[14];
extern u16 dFTPikachuAnimCliffCatch_joint18[22];
extern u16 dFTPikachuAnimCliffCatch_joint20[14];
extern u16 dFTPikachuAnimCliffCatch_joint22[22];
extern u16 dFTPikachuAnimCliffCatch_joint23[22];
extern u16 dFTPikachuAnimCliffCatch_joint25[14];
extern u16 dFTPikachuAnimCliffCatch_joint26[58];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimCliffCatch_joints[] = {
	(u32)dFTPikachuAnimCliffCatch_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimCliffCatch_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimCliffCatch_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimCliffCatch_joint4, /* [3] joint 4 */
	(u32)dFTPikachuAnimCliffCatch_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPikachuAnimCliffCatch_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimCliffCatch_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimCliffCatch_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimCliffCatch_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimCliffCatch_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimCliffCatch_joint12, /* [11] joint 12 */
	(u32)dFTPikachuAnimCliffCatch_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPikachuAnimCliffCatch_joint15, /* [14] joint 15 */
	(u32)dFTPikachuAnimCliffCatch_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPikachuAnimCliffCatch_joint18, /* [17] joint 18 */
	(u32)dFTPikachuAnimCliffCatch_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTPikachuAnimCliffCatch_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPikachuAnimCliffCatch_joint23, /* [22] joint 23 */
	(u32)dFTPikachuAnimCliffCatch_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTPikachuAnimCliffCatch_joint26, /* [25] joint 26 */
	0xFFFF00DE, /* [26] END */
};

/* Joint 1 */
u16 dFTPikachuAnimCliffCatch_joint1[16] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -480, -600,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -1380, -62, -240, 34,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimCliffCatch_joint2[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 660, -84,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 159, 293, 832, 475, -188, 18,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 146, 897, -74,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimCliffCatch_joint3[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 195, 17, 36, 0, -209, -111,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -234, -248, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 236, -83, 32, -3, -112, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -136, -11, 4, 6, -280, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTPikachuAnimCliffCatch_joint4[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 57, 64, 48,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -207, -45, 43, -5, 25, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -123, 2, 42, 0, 39, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPikachuAnimCliffCatch_joint6[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 395, -143, 305,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 401, -121, 268,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimCliffCatch_joint7[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -172, -140, 27, -474, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 286, -172, -58, 27, -597, -40,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 286, -58, -597,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimCliffCatch_joint8[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -73, -24,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), -73,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimCliffCatch_joint9[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -177, -52, -67,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -214, 0, -52, 0, 73, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -211, -6, -49, 3, 69, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPikachuAnimCliffCatch_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimCliffCatch_joint11[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -20, 25, -12,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -20, -73, 25, -4, -12, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -312, 8, 1,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPikachuAnimCliffCatch_joint12[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -99, -31, 8,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -99, -60, -31, 0, 8, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -340, -33, 27,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimCliffCatch_joint14[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -348, 87, 354,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -449, -30, 326,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPikachuAnimCliffCatch_joint15[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 803, 0, 1625, -124, 636, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 803, 0, 1252, -124, 531, -35,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 803, 1252, 531,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimCliffCatch_joint17[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -173,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -519, -173,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), -519,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPikachuAnimCliffCatch_joint18[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1441, 5, -1343, 26, 1615, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1456, 5, -1262, 26, 1335, -93,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1456, -1262, 1335,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTPikachuAnimCliffCatch_joint20[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 537, 62,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 724, 62,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 724,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimCliffCatch_joint22[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1862, -55, -1876, 62, 1664, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1694, -55, -1688, 62, 1837, 57,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1694, -1688, 1837,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTPikachuAnimCliffCatch_joint23[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 213, 20, 415, -96, -315, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 274, 20, 124, -96, -203, 37,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 274, 124, -203,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimCliffCatch_joint25[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 714, -54,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 551, -54,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 551,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimCliffCatch_joint26[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1962, -18, -1433, -7, 1888, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2017, -18, -1455, -7, 2003, 38,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2017, -1455, 2003,
	ftAnimEnd(),
	0x0000, 0x400E, 0xFE15, 0x00F4, 0xFD0C, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x200F, 0x0002, 0xFEDF, 0x0013, 0x012A, 0x000D, 0xFDC2, 0x001C, 0x200F, 0x0001, 0xFE4E, 0xFFA3, 0x011D, 0xFEFE, 0xFD61, 0xFFA2, 0x200F, 0x0001, 0xFE23, 0x0002, 0xFF25, 0xFFF7, 0xFD05, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
