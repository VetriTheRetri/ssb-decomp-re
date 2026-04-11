/* AnimJoint data for relocData file 1972 (FTPikachuAnimFallAerial) */
/* 1056 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimFallAerial_joint1[12];
extern u16 dFTPikachuAnimFallAerial_joint2[32];
extern u16 dFTPikachuAnimFallAerial_joint3[32];
extern u16 dFTPikachuAnimFallAerial_joint5[12];
extern u16 dFTPikachuAnimFallAerial_joint6[30];
extern u16 dFTPikachuAnimFallAerial_joint7[20];
extern u16 dFTPikachuAnimFallAerial_joint8[32];
extern u16 dFTPikachuAnimFallAerial_joint9[12];
extern u16 dFTPikachuAnimFallAerial_joint10[20];
extern u16 dFTPikachuAnimFallAerial_joint11[20];
extern u16 dFTPikachuAnimFallAerial_joint13[12];
extern u16 dFTPikachuAnimFallAerial_joint14[30];
extern u16 dFTPikachuAnimFallAerial_joint16[20];
extern u16 dFTPikachuAnimFallAerial_joint17[30];
extern u16 dFTPikachuAnimFallAerial_joint19[20];
extern u16 dFTPikachuAnimFallAerial_joint21[30];
extern u16 dFTPikachuAnimFallAerial_joint22[30];
extern u16 dFTPikachuAnimFallAerial_joint24[20];
extern u16 dFTPikachuAnimFallAerial_joint25[62];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimFallAerial_joints[] = {
	(u32)dFTPikachuAnimFallAerial_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimFallAerial_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimFallAerial_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimFallAerial_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimFallAerial_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimFallAerial_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimFallAerial_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimFallAerial_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimFallAerial_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimFallAerial_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimFallAerial_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimFallAerial_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimFallAerial_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimFallAerial_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimFallAerial_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimFallAerial_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimFallAerial_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimFallAerial_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimFallAerial_joint25, /* [24] joint 25 */
	0xFFFF00F8, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimFallAerial_joint1[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -26, 33, -28, 0, 1114, -108,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimFallAerial_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 999, -124, 300,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1033, -8, -143, 5, 294, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 948, -5, -94, 3, 307, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 999, -124, 300,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimFallAerial_joint3[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -173, 58, -73,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -223, 10, 45, 1, -110, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -108, 8, 68, 2, -25, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -173, 58, -73,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimFallAerial_joint5[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 199, -70, 479,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimFallAerial_joint6[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 11, 3, -56, 16, -811, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 22, 2, -6, 15, -767, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 28, 2, 38, 15, -847, -26,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 28, 38, -847,
	ftAnimLoop(0x6800, -58),
};

/* Joint 7 */
u16 dFTPikachuAnimFallAerial_joint7[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -758, 22,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -691, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -500, 63,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), -500,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimFallAerial_joint8[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -478, -335, -28,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -484, 5, -335, 0, -18, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -436, 1, -332, 0, -30, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -478, -335, -28,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimFallAerial_joint9[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1598, -1559, 4035, 39, 48, 495,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimFallAerial_joint10[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -132, 170, 229,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -198, 196, 201,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -132, 170, 229,
	ftAnimLoop(0x6800, -38),
};

/* Joint 11 */
u16 dFTPikachuAnimFallAerial_joint11[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, -171, -270,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -103, -225, -240,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -3, -171, -270,
	ftAnimLoop(0x6800, -38),
};

/* Joint 13 */
u16 dFTPikachuAnimFallAerial_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1, 0, 0, -469, 245, 91,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimFallAerial_joint14[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 803, 0, 1481, 0, 724, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 803, 0, 1483, 0, 742, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 803, 0, 1476, -2, 707, -11,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 803, 1476, 707,
	ftAnimLoop(0x6800, -58),
};

/* Joint 16 */
u16 dFTPikachuAnimFallAerial_joint16[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), -10,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimFallAerial_joint17[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1606, -10, -1367, -8, 629, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1574, 0, -1391, 4, 658, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1606, 10, -1342, 16, 674, 5,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1606, -1342, 674,
	ftAnimLoop(0x6800, -58),
};

/* Joint 19 */
u16 dFTPikachuAnimFallAerial_joint19[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 932, -15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 885, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 916, 10,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 916,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPikachuAnimFallAerial_joint21[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1839, 11, 1568, -27, 2194, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1874, 8, 1485, -15, 2115, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1893, 6, 1473, -3, 2115, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1893, 1473, 2115,
	ftAnimLoop(0x6800, -58),
};

/* Joint 22 */
u16 dFTPikachuAnimFallAerial_joint22[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 203, -12, 533, -1, -780, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 167, 19, 529, -4, -844, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 320, 51, 508, -6, -619, 74,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 320, 508, -619,
	ftAnimLoop(0x6800, -58),
};

/* Joint 24 */
u16 dFTPikachuAnimFallAerial_joint24[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 595, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 583, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 539, -14,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 539,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimFallAerial_joint25[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1350, -7, 1682, -11, 1886, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1328, -3, 1649, -4, 1959, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1327, 0, 1658, 3, 1960, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1327, 1658, 1960,
	ftAnimLoop(0x6800, -58),
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -543, -164, -504,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -580, 9, -170, 0, -511, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -497, 5, -161, 0, -432, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -543, -164, -504,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};
