/* AnimJoint data for relocData file 2084 (FTPikachuAnimExitPipe) */
/* 848 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimExitPipe_joint1[18];
extern u16 dFTPikachuAnimExitPipe_joint2[10];
extern u16 dFTPikachuAnimExitPipe_joint3[10];
extern u16 dFTPikachuAnimExitPipe_joint5[10];
extern u16 dFTPikachuAnimExitPipe_joint6[12];
extern u16 dFTPikachuAnimExitPipe_joint7[12];
extern u16 dFTPikachuAnimExitPipe_joint8[10];
extern u16 dFTPikachuAnimExitPipe_joint9[30];
extern u16 dFTPikachuAnimExitPipe_joint10[40];
extern u16 dFTPikachuAnimExitPipe_joint11[42];
extern u16 dFTPikachuAnimExitPipe_joint13[10];
extern u16 dFTPikachuAnimExitPipe_joint14[26];
extern u16 dFTPikachuAnimExitPipe_joint16[16];
extern u16 dFTPikachuAnimExitPipe_joint17[22];
extern u16 dFTPikachuAnimExitPipe_joint19[14];
extern u16 dFTPikachuAnimExitPipe_joint21[22];
extern u16 dFTPikachuAnimExitPipe_joint22[16];
extern u16 dFTPikachuAnimExitPipe_joint24[12];
extern u16 dFTPikachuAnimExitPipe_joint25[40];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimExitPipe_joints[] = {
	(u32)dFTPikachuAnimExitPipe_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimExitPipe_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimExitPipe_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimExitPipe_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimExitPipe_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimExitPipe_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimExitPipe_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimExitPipe_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimExitPipe_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimExitPipe_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimExitPipe_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimExitPipe_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimExitPipe_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimExitPipe_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimExitPipe_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimExitPipe_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimExitPipe_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimExitPipe_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimExitPipe_joint25, /* [24] joint 25 */
	0xFFFF00CA, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimExitPipe_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), -1080, 580,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -26, 33, -28, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 40), 675, 160,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 40), 108,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimExitPipe_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 23, 133, 32, 0, -209, -111,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimExitPipe_joint3[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -13, 0, -2, 4, 309, 12,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimExitPipe_joint5[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 324, -62, 313,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimExitPipe_joint6[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 236,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 804, 3014,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 39), 236,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 236,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimExitPipe_joint7[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 39), -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimExitPipe_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -2, -163, 20, -1, 194, 148,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimExitPipe_joint9[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -45, 2, -114, 1, 1719, -5,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 8, 32, 508,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -45, -114, 1719,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -45, 5, -114, 6, 1719, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 59, 5, 2401,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimExitPipe_joint10[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -4,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -7, 0, 0, -189, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -151, -3, 19, -1, 93, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -71, 7, -28, 0, -196, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimExitPipe_joint11[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0, 0, 4,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -7, 0, 0, 194, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -152, -3, -19, 0, -155, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -74, 7, 19, 0, 98, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPikachuAnimExitPipe_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1, 0, 0, -324, -62, 313,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimExitPipe_joint14[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, 1703, 0, 1311, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), 804, 0, 1703, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 39), 1311,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 804, 0, 1703, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1311,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimExitPipe_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimExitPipe_joint17[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, 0, -406,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 39), 58, -406,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, -406, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 58,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimExitPipe_joint19[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 946,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 39), 946,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimExitPipe_joint21[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, 127, -353,
	ftAnimSetValRateT(FT_ANIM_ROTX, 39), 6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), 127, -353,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 6, 0, 127, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -353,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimExitPipe_joint22[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 128, -57, -192,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), 128, -57, -192,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 128, -57, -192,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTPikachuAnimExitPipe_joint24[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 807,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 39), 807,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 807,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimExitPipe_joint25[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -6, -484,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 284,
	ftAnimSetValRateT(FT_ANIM_ROTX, 39), -6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 39), -484,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -484,
	ftAnimEnd(),
	0x400E, 0x0014, 0x0000, 0x00E1, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x380F, 0x0028, 0xFFF2, 0x0000, 0xFFFD, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
