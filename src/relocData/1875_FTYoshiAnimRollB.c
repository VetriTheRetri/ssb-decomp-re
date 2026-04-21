/* AnimJoint data for relocData file 1875 (FTYoshiAnimRollB) */
/* 912 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimRollB_joint1[76];
extern u16 dFTYoshiAnimRollB_joint2[54];
extern u16 dFTYoshiAnimRollB_joint3[14];
extern u16 dFTYoshiAnimRollB_joint4[10];
extern u16 dFTYoshiAnimRollB_joint5[12];
extern u16 dFTYoshiAnimRollB_joint7[10];
extern u16 dFTYoshiAnimRollB_joint8[16];
extern u16 dFTYoshiAnimRollB_joint9[14];
extern u16 dFTYoshiAnimRollB_joint11[10];
extern u16 dFTYoshiAnimRollB_joint12[24];
extern u16 dFTYoshiAnimRollB_joint13[14];
extern u16 dFTYoshiAnimRollB_joint14[10];
extern u16 dFTYoshiAnimRollB_joint15[10];
extern u16 dFTYoshiAnimRollB_joint16[10];
extern u16 dFTYoshiAnimRollB_joint18[10];
extern u16 dFTYoshiAnimRollB_joint19[16];
extern u16 dFTYoshiAnimRollB_joint21[16];
extern u16 dFTYoshiAnimRollB_joint23[20];
extern u16 dFTYoshiAnimRollB_joint24[14];
extern u16 dFTYoshiAnimRollB_joint26[16];
extern u16 dFTYoshiAnimRollB_joint27[26];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTYoshiAnimRollB_joints[] = {
	(u32)dFTYoshiAnimRollB_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimRollB_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimRollB_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimRollB_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimRollB_joint5, /* [4] joint 5 */
	(u32)dFTYoshiAnimRollB_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTYoshiAnimRollB_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimRollB_joint9, /* [8] joint 9 */
	(u32)dFTYoshiAnimRollB_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTYoshiAnimRollB_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimRollB_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimRollB_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimRollB_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimRollB_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimRollB_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTYoshiAnimRollB_joint19, /* [18] joint 19 */
	(u32)dFTYoshiAnimRollB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTYoshiAnimRollB_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTYoshiAnimRollB_joint24, /* [23] joint 24 */
	(u32)dFTYoshiAnimRollB_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTYoshiAnimRollB_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTYoshiAnimRollB_joint1[76] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 80, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 360,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 0, -73,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 0, 258, -380, -900,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 240,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), 420, 0, -1463, -953,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 0, -28,
	ftAnimSetValT(FT_ANIM_TRAY, 7), 240,
	ftAnimBlock(0, 6),
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 19), 0, -168, -3600, -854,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 0, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 3), 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 0, -3600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimRollB_joint2[54] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 752, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 428, 282, -383, -432,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1104, 1143, -540, -474,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -858, -1099,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 1571,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1104, -1287, -1089, 545,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 444, -723, -381, 969,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 472, 928, -241, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 1488, 131, -381, 113,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 752, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimRollB_joint3[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -359, 53,
	ftAnimSetValRate(FT_ANIM_ROTX), -965, -134,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 38), -7399,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimRollB_joint4[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1251, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 10,
	ftAnimBlock(0, 38),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTYoshiAnimRollB_joint5[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 305, 0, 0, 0, 382, 253,
	_FT_ANIM_CMD(11, 0, 1), 10,
	ftAnimBlock(0, 38),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimRollB_joint7[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 10,
	ftAnimBlock(0, 38),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTYoshiAnimRollB_joint8[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1549, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 1608, -1608,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), 1549, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1549, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTYoshiAnimRollB_joint9[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -1152,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), -1152, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1152, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimRollB_joint11[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 10,
	ftAnimBlock(0, 38),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTYoshiAnimRollB_joint12[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0, -58, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 37), 0, 0, 0, 0, -58, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0, 0, -58, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimRollB_joint13[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -1152,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), -1152, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1152,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimRollB_joint14[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 10,
	ftAnimBlock(0, 38),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimRollB_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 804, 0, 0, 0, 156, 0,
	ftAnimBlock(0, 38),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimRollB_joint16[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -713, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 10,
	ftAnimBlock(0, 38),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimRollB_joint18[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -527, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 10,
	ftAnimBlock(0, 38),
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTYoshiAnimRollB_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -937, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 1608, 1608,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), -937, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -937, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTYoshiAnimRollB_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 699, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), 699, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 699, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimRollB_joint23[20] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -410, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), -1608,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 37), 0, 0, -410, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, -410, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimRollB_joint24[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -937,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 1608, 1608,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), -937, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -937, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimRollB_joint26[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 699, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), 699, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 699, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTYoshiAnimRollB_joint27[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -410,
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), -1608,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 37), 0, 0, -410, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, -410, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
