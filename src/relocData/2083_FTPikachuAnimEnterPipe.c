/* AnimJoint data for relocData file 2083 (FTPikachuAnimEnterPipe) */
/* 768 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimEnterPipe_joint1[18];
extern u16 dFTPikachuAnimEnterPipe_joint2[10];
extern u16 dFTPikachuAnimEnterPipe_joint3[10];
extern u16 dFTPikachuAnimEnterPipe_joint5[10];
extern u16 dFTPikachuAnimEnterPipe_joint6[14];
extern u16 dFTPikachuAnimEnterPipe_joint7[14];
extern u16 dFTPikachuAnimEnterPipe_joint8[10];
extern u16 dFTPikachuAnimEnterPipe_joint9[30];
extern u16 dFTPikachuAnimEnterPipe_joint10[10];
extern u16 dFTPikachuAnimEnterPipe_joint11[10];
extern u16 dFTPikachuAnimEnterPipe_joint13[10];
extern u16 dFTPikachuAnimEnterPipe_joint14[26];
extern u16 dFTPikachuAnimEnterPipe_joint16[14];
extern u16 dFTPikachuAnimEnterPipe_joint17[26];
extern u16 dFTPikachuAnimEnterPipe_joint19[14];
extern u16 dFTPikachuAnimEnterPipe_joint21[26];
extern u16 dFTPikachuAnimEnterPipe_joint22[22];
extern u16 dFTPikachuAnimEnterPipe_joint24[14];
extern u16 dFTPikachuAnimEnterPipe_joint25[24];
extern u16 dFTPikachuAnimEnterPipe_joint26[20];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimEnterPipe_joints[] = {
	(u32)dFTPikachuAnimEnterPipe_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimEnterPipe_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimEnterPipe_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimEnterPipe_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimEnterPipe_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimEnterPipe_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimEnterPipe_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimEnterPipe_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimEnterPipe_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimEnterPipe_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimEnterPipe_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimEnterPipe_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimEnterPipe_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimEnterPipe_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimEnterPipe_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimEnterPipe_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimEnterPipe_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimEnterPipe_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimEnterPipe_joint25, /* [24] joint 25 */
	(u32)dFTPikachuAnimEnterPipe_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimEnterPipe_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 108,
	ftAnimSetValRate(FT_ANIM_TRAY), 675, -377,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -26, 33, -28, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 32), -1080, -337,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 32), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimEnterPipe_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 23, 133, 32, 0, -209, -111,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimEnterPipe_joint3[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -13, 0, -2, 4, 309, 12,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimEnterPipe_joint5[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 324, -62, 313,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimEnterPipe_joint6[14] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 236, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 804, 3014,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 31), 236,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 236,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPikachuAnimEnterPipe_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 31), -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimEnterPipe_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -2, -163, 20, -1, 194, 148,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimEnterPipe_joint9[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 59, 5, 2401,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 8, 32, 508,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -45, -11, -114, -13, 1719, -75,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -45, -114, 1719,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), -45, -2, -114, -1, 1719, 4,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimEnterPipe_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 254, 357, 37,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimEnterPipe_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -255, 357, 37,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimEnterPipe_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1, 0, 0, -324, -62, 313,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimEnterPipe_joint14[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 804, 0, 1703, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 1311,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 31), 804, 0, 1311, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 31), 1707,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 804, 0, 1311, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 1707,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimEnterPipe_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 31), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimEnterPipe_joint17[26] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -406, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 31), 58, 0, 0, 0, -406, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, -406, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 58,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTPikachuAnimEnterPipe_joint19[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 946, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 31), 946,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPikachuAnimEnterPipe_joint21[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 6, 0, -353, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 31), 6, 0, 127, 0, -353, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 6, 0, -353, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 127,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPikachuAnimEnterPipe_joint22[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 128, -57, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 31), 128, 0, -57, 0, -192, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 128, 0, -57, 0, -192, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTPikachuAnimEnterPipe_joint24[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 807,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 807, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 807, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimEnterPipe_joint25[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -6, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 284, -484,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 31), -6, 0, 284, 0, -484, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -6, 0, -484, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 284,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimEnterPipe_joint26[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), 20, 0, 225,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
