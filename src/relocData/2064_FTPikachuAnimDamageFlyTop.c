/* AnimJoint data for relocData file 2064 (FTPikachuAnimDamageFlyTop) */
/* 832 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimDamageFlyTop_joint1[12];
extern u16 dFTPikachuAnimDamageFlyTop_joint2[18];
extern u16 dFTPikachuAnimDamageFlyTop_joint3[12];
extern u16 dFTPikachuAnimDamageFlyTop_joint5[12];
extern u16 dFTPikachuAnimDamageFlyTop_joint6[30];
extern u16 dFTPikachuAnimDamageFlyTop_joint7[20];
extern u16 dFTPikachuAnimDamageFlyTop_joint8[12];
extern u16 dFTPikachuAnimDamageFlyTop_joint9[12];
extern u16 dFTPikachuAnimDamageFlyTop_joint10[12];
extern u16 dFTPikachuAnimDamageFlyTop_joint11[12];
extern u16 dFTPikachuAnimDamageFlyTop_joint13[12];
extern u16 dFTPikachuAnimDamageFlyTop_joint14[28];
extern u16 dFTPikachuAnimDamageFlyTop_joint16[18];
extern u16 dFTPikachuAnimDamageFlyTop_joint17[30];
extern u16 dFTPikachuAnimDamageFlyTop_joint19[20];
extern u16 dFTPikachuAnimDamageFlyTop_joint21[32];
extern u16 dFTPikachuAnimDamageFlyTop_joint22[18];
extern u16 dFTPikachuAnimDamageFlyTop_joint24[8];
extern u16 dFTPikachuAnimDamageFlyTop_joint25[46];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimDamageFlyTop_joints[] = {
	(u32)dFTPikachuAnimDamageFlyTop_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimDamageFlyTop_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimDamageFlyTop_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimDamageFlyTop_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimDamageFlyTop_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimDamageFlyTop_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimDamageFlyTop_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimDamageFlyTop_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimDamageFlyTop_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimDamageFlyTop_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimDamageFlyTop_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimDamageFlyTop_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimDamageFlyTop_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimDamageFlyTop_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimDamageFlyTop_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimDamageFlyTop_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimDamageFlyTop_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimDamageFlyTop_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimDamageFlyTop_joint25, /* [24] joint 25 */
	0xFFFF00C8, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimDamageFlyTop_joint1[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -26, 33, -28, 0, 675, 108,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimDamageFlyTop_joint2[18] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -83, 54,
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), -83, 54,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 16), 3215,
	ftAnimLoop(0x6800, -34),
};

/* Joint 3 */
u16 dFTPikachuAnimDamageFlyTop_joint3[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -73, 334, 65, 4, 309, 12,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimDamageFlyTop_joint5[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 370, -44, 322,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimDamageFlyTop_joint6[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 793, 0, -285, 0, -391, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 793, 0, -285, 0, -391, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 793, 0, -285, 0, -391, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 793, -285, -391,
	ftAnimLoop(0x6800, -58),
};

/* Joint 7 */
u16 dFTPikachuAnimDamageFlyTop_joint7[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -10, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimDamageFlyTop_joint8[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -229, 313, -80, -1, 194, 148,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimDamageFlyTop_joint9[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimDamageFlyTop_joint10[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -149, -341, -10, 254, 357, 37,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimDamageFlyTop_joint11[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -325, 33, 70, -255, 357, 37,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimDamageFlyTop_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1, 0, 0, -402, -121, 249,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimDamageFlyTop_joint14[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 1337, 1522,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 804, 0, 1337, 0, 1522, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 804, 0, 1337, 0, 1522, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 1337, 1522,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimDamageFlyTop_joint16[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimLoop(0x6800, -34),
};

/* Joint 17 */
u16 dFTPikachuAnimDamageFlyTop_joint17[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1589, 0, -1648, 0, 1787, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 1589, 0, -1648, 0, 1787, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1589, 0, -1648, 0, 1787, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1589, -1648, 1787,
	ftAnimLoop(0x6800, -58),
};

/* Joint 19 */
u16 dFTPikachuAnimDamageFlyTop_joint19[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 6, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 6,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPikachuAnimDamageFlyTop_joint21[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 331, 0, 194, 0, 367, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 331, 0, 194, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 331, 0, 194, 0, 367, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 331, 194, 367,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimDamageFlyTop_joint22[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 1620, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 1684, 1950,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 1620, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 1620,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 1620,
	ftAnimLoop(0x6800, -34),
};

/* Joint 24 */
u16 dFTPikachuAnimDamageFlyTop_joint24[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 25 */
u16 dFTPikachuAnimDamageFlyTop_joint25[46] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 1443, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 1639, 1985,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 1443, 0, 1639, 0, 1985, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1443, 0, 1985, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 1639,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1443, 1639, 1985,
	ftAnimLoop(0x6800, -58),
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 58, 20, -1415, -1, -180, -354,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
