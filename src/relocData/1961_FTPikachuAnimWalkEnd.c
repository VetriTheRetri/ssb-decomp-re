/* AnimJoint data for relocData file 1961 (FTPikachuAnimWalkEnd) */
/* 944 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimWalkEnd_joint1[14];
extern u16 dFTPikachuAnimWalkEnd_joint2[14];
extern u16 dFTPikachuAnimWalkEnd_joint3[22];
extern u16 dFTPikachuAnimWalkEnd_joint5[14];
extern u16 dFTPikachuAnimWalkEnd_joint6[36];
extern u16 dFTPikachuAnimWalkEnd_joint7[14];
extern u16 dFTPikachuAnimWalkEnd_joint8[22];
extern u16 dFTPikachuAnimWalkEnd_joint9[10];
extern u16 dFTPikachuAnimWalkEnd_joint10[22];
extern u16 dFTPikachuAnimWalkEnd_joint11[22];
extern u16 dFTPikachuAnimWalkEnd_joint13[14];
extern u16 dFTPikachuAnimWalkEnd_joint14[34];
extern u16 dFTPikachuAnimWalkEnd_joint16[14];
extern u16 dFTPikachuAnimWalkEnd_joint17[30];
extern u16 dFTPikachuAnimWalkEnd_joint19[16];
extern u16 dFTPikachuAnimWalkEnd_joint21[30];
extern u16 dFTPikachuAnimWalkEnd_joint22[24];
extern u16 dFTPikachuAnimWalkEnd_joint24[16];
extern u16 dFTPikachuAnimWalkEnd_joint25[52];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimWalkEnd_joints[] = {
	(u32)dFTPikachuAnimWalkEnd_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimWalkEnd_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimWalkEnd_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimWalkEnd_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimWalkEnd_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimWalkEnd_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimWalkEnd_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimWalkEnd_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimWalkEnd_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimWalkEnd_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimWalkEnd_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimWalkEnd_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimWalkEnd_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimWalkEnd_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimWalkEnd_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimWalkEnd_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimWalkEnd_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimWalkEnd_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimWalkEnd_joint25, /* [24] joint 25 */
	0xFFFF00DE, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimWalkEnd_joint1[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 660, 51,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -26, 33, -28, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 675, 108,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimWalkEnd_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 340, -23, -13,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 23, 133, 32,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimWalkEnd_joint3[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 42, 4, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -13, -6, 0, 0, -2, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimWalkEnd_joint5[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 233, -20, 413,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimWalkEnd_joint6[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, 26, 13, -255, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 804, 0, 240, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -561, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -486, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -256, 84,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 236, -3, -202, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 804,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPikachuAnimWalkEnd_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -10,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimWalkEnd_joint8[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -49, 14, 54,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 110, 5, -73, -22, 38, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimWalkEnd_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimWalkEnd_joint10[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -194, 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 108, 24, 4, 0, 3, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimWalkEnd_joint11[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -148, 5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 93, 18, 3, 0, 2, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimWalkEnd_joint13[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -228, -53, 438,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimWalkEnd_joint14[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, 1702, 3, 1331, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 803, 0, 1688, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 952, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1030, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1259, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 0, 1707, 19, 1311, 52,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimWalkEnd_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimWalkEnd_joint17[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1624, -3, -1247, -6, 453, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -1573, 35, 1166, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1474, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1567, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1550, 23, -1609, -41, 1201, 35,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimWalkEnd_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1083, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 958, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimWalkEnd_joint21[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 176, -16, 177, 6, -9, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -23, 26, -340, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 200, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 148, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, 29, 127, -20, -353, -13,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimWalkEnd_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 283, -2, 137, -5, -453, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 143, -24, -40, -27, -202, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 128, -14, -57, -16, -192, 10,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimWalkEnd_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 871, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 810, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 807, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimWalkEnd_joint25[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, 4, -31, 11, -469, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 18, -28, 278, 22, -476, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6, -24, 284, 5, -484, -7,
	ftAnimEnd(),
	0x400E, 0xFE22, 0x01CF, 0xFE9A, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x200F, 0x0004, 0x0040, 0x0039, 0x012B, 0xFFC6, 0x0014, 0x002C, 0x200F, 0x0004, 0xFFF2, 0xFFFA, 0x0000, 0x0003, 0xFFFD, 0xFFFC, 0x0000, 0x0000, 0x0000, 0x0000,
};
