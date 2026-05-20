/* AnimJoint data for relocData file 1890 (FTYoshiAnimCliffClimbQuick1) */
/* 992 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimCliffClimbQuick1_joint1[24];
extern u16 dFTYoshiAnimCliffClimbQuick1_joint2[18];
extern u16 dFTYoshiAnimCliffClimbQuick1_joint3[26];
extern u16 dFTYoshiAnimCliffClimbQuick1_joint4[24];
extern u16 dFTYoshiAnimCliffClimbQuick1_joint5[36];
extern u16 dFTYoshiAnimCliffClimbQuick1_joint7[14];
extern u16 dFTYoshiAnimCliffClimbQuick1_joint8[32];
extern u16 dFTYoshiAnimCliffClimbQuick1_joint9[16];
extern u16 dFTYoshiAnimCliffClimbQuick1_joint11[16];
extern u16 dFTYoshiAnimCliffClimbQuick1_joint12[28];
extern u16 dFTYoshiAnimCliffClimbQuick1_joint13[14];
extern u16 dFTYoshiAnimCliffClimbQuick1_joint14[10];
extern u16 dFTYoshiAnimCliffClimbQuick1_joint15[20];
extern u16 dFTYoshiAnimCliffClimbQuick1_joint16[18];
extern u16 dFTYoshiAnimCliffClimbQuick1_joint18[18];
extern u16 dFTYoshiAnimCliffClimbQuick1_joint19[24];
extern u16 dFTYoshiAnimCliffClimbQuick1_joint21[16];
extern u16 dFTYoshiAnimCliffClimbQuick1_joint23[24];
extern u16 dFTYoshiAnimCliffClimbQuick1_joint24[24];
extern u16 dFTYoshiAnimCliffClimbQuick1_joint26[16];
extern u16 dFTYoshiAnimCliffClimbQuick1_joint27[24];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTYoshiAnimCliffClimbQuick1_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimCliffClimbQuick1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbQuick1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbQuick1_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbQuick1_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbQuick1_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbQuick1_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbQuick1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbQuick1_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbQuick1_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbQuick1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbQuick1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbQuick1_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbQuick1_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbQuick1_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbQuick1_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbQuick1_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbQuick1_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbQuick1_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbQuick1_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbQuick1_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbQuick1_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTYoshiAnimCliffClimbQuick1_joint1[24] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 11, -7, -2016, 1171, -220, 147,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 7), 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 5,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 2106, 0, 154,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 5,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimCliffClimbQuick1_joint2[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 672, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -893,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -893, -116,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 5,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimCliffClimbQuick1_joint3[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -446, 0, -49, 83, 168,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -446, 24, 0, -4, -49, 21, 83, -23, 168, -65,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 5,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimCliffClimbQuick1_joint4[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -114, 8, -33, 2, 604, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, 35, 0, -40, 0, -67,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTYoshiAnimCliffClimbQuick1_joint5[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 329,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), -6, 531, 332,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 18,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -965, 141, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -3, 59, 1012, 34, 0, -1,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimCliffClimbQuick1_joint7[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 460,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 0, -12,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 18,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimCliffClimbQuick1_joint8[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX), -15, -5, -1688, 35, -813, -126, 4096, -386,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 13), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -20, 32, -1653, 66, -940, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 48, 69, -1555, 97, -1094, -154,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTYoshiAnimCliffClimbQuick1_joint9[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimCliffClimbQuick1_joint11[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTZ), -625, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 0, 27,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 5,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTYoshiAnimCliffClimbQuick1_joint12[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1201, 0, 513, 35, -1870, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1201, -235, 549, 72, -1880, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1673, -472, 659, 109, -2387, -507,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimCliffClimbQuick1_joint13[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -336, -336,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimCliffClimbQuick1_joint14[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 18,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimCliffClimbQuick1_joint15[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -9, -893, -1, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -694, 11, -913, -1, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimCliffClimbQuick1_joint16[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -108, 112, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -108, -4, 112, -6, 20, -1,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimCliffClimbQuick1_joint18[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -123, 245, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -123, -1, 245, -13, -25, 1,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTYoshiAnimCliffClimbQuick1_joint19[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 63, 0, 177, 1, 583, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 63, 0, 178, 0, 582, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 63, 0, 178, 0, 581, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimCliffClimbQuick1_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimCliffClimbQuick1_joint23[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1879, -1, -226, 0, 344, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1880, 0, -226, 0, 347, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1880, 0, -226, 0, 347, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimCliffClimbQuick1_joint24[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -8, 0, -38, 0, 510, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -8, 0, -38, 0, 513, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -8, 0, -38, 0, 517, 4,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimCliffClimbQuick1_joint26[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTYoshiAnimCliffClimbQuick1_joint27[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1088, -7, -45, 0, 364, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1080, 3, -45, 0, 367, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1095, 14, -45, 0, 368, 0,
	ftAnimEnd(),
};
