/* AnimJoint data for relocData file 1982 (FTPikachuAnimDamaged2) */
/* 2112 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimDamaged2_joint1[10];
extern u16 dFTPikachuAnimDamaged2_joint2[58];
extern u16 dFTPikachuAnimDamaged2_joint3[52];
extern u16 dFTPikachuAnimDamaged2_joint5[54];
extern u16 dFTPikachuAnimDamaged2_joint6[60];
extern u16 dFTPikachuAnimDamaged2_joint7[16];
extern u16 dFTPikachuAnimDamaged2_joint8[52];
extern u16 dFTPikachuAnimDamaged2_joint9[10];
extern u16 dFTPikachuAnimDamaged2_joint10[84];
extern u16 dFTPikachuAnimDamaged2_joint11[70];
extern u16 dFTPikachuAnimDamaged2_joint13[54];
extern u16 dFTPikachuAnimDamaged2_joint14[62];
extern u16 dFTPikachuAnimDamaged2_joint16[16];
extern u16 dFTPikachuAnimDamaged2_joint17[58];
extern u16 dFTPikachuAnimDamaged2_joint19[32];
extern u16 dFTPikachuAnimDamaged2_joint21[66];
extern u16 dFTPikachuAnimDamaged2_joint22[62];
extern u16 dFTPikachuAnimDamaged2_joint24[24];
extern u16 dFTPikachuAnimDamaged2_joint25[60];
extern u16 dFTPikachuAnimDamaged2_joint26[104];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimDamaged2_joints[] = {
	(u32)dFTPikachuAnimDamaged2_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimDamaged2_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimDamaged2_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimDamaged2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimDamaged2_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimDamaged2_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimDamaged2_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimDamaged2_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimDamaged2_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimDamaged2_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimDamaged2_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimDamaged2_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimDamaged2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimDamaged2_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimDamaged2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimDamaged2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimDamaged2_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimDamaged2_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimDamaged2_joint25, /* [24] joint 25 */
	(u32)dFTPikachuAnimDamaged2_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimDamaged2_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -26, 33, -28, 0, 675, 108,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimDamaged2_joint2[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 20, 133, 32,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -229, -319, -203, -56, -18, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -734, -42, -147, 4, 127, 12,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -734, 15,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -147, 127,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 175, 20, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 20, 73, 133, 37, 32, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 20, 133, 32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 20, 133, 32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimDamaged2_joint3[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 0, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -66, -48, -12, -5, 12, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -181, -8, -27, -1, 43, 2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -181, 7,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -27, 43,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 24, 2, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 157, 18, 13, 3, 11, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimDamaged2_joint5[54] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 324, 62, -62, 3, 313, 82,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 378, 24, -59, -135, 385, 34,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 354, -16, -231, -53, 356, 30,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 361, -32, -113, 177, 416, -45,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 324, -33, -62, 45, 313, -91,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimDamaged2_joint6[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 769, 0, 236, -173, -202, -124,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -814, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 775, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -284, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -258, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -25, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -657, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -342, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -716, -69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -620, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 15, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 100, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 769, -1, 236, 45, -202, 139,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimDamaged2_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -10, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimDamaged2_joint8[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -163, 20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, -82, -164, 58, 18, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -289, -10, 127, 18, 64, 2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -289, 7,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 127, 64,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 22, -16, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 84, 39, -140, -40, 30, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimDamaged2_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimDamaged2_joint10[84] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 47, 0, -3, 0, 9,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 143, -11, 27,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 5324, 819, 6144, 1228, 4915, 409,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4915, -819, 5324, -1365, 4505, -546,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -8, 0, 0, 0, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 19), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 14, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 245, -4, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPikachuAnimDamaged2_joint11[70] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, 12, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 5324, 819, 6144, 1228, 4915, 409,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4915, -819, 5324, -1365, 4505, -546,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 19), 4096, 4096, 4096,
	ftAnimBlock(0, 15),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 271, -4, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPikachuAnimDamaged2_joint13[54] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -324, 23, -62, 32, 313, 129,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -303, 7, -34, 24, 426, 90,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -314, 19, -32, -211, 426, -25,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -284, -9, -245, -32, 400, -118,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -324, -35, -62, 162, 313, -77,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimDamaged2_joint14[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -823, -27, -99, 120, -297, -160,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -911, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 262, 35, -777, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 111, -31, -864, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 145, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -951, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -801, 8, -196, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -868, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 84, -21, -486, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 16, -29, -545, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -823, 15, -94, -37, -297, 82,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimDamaged2_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimDamaged2_joint17[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1666, -14, -1608, 12, 1205, 203,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 1568, -6, -1645, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1814, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1987, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2015, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2007, -70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1120, -78,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1570, 12, -1602, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1643, 16, -1614, -1, 1118, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1666, 7, -1608, 1, 1205, 28,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimDamaged2_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 945, -95,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 448, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 449, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 707, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 930, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 970, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 945, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimDamaged2_joint21[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, -97, 128, -81, -353, 105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 103, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -285, -16, -117, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -91, 31, -100, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -90, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -30, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 93, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -294, -30,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -29, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 129, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 138, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 7, 6, 128, -3, -353, -19,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimDamaged2_joint22[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1480, -39, 1666, -30, 1419, 241,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1490, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1599, -7, 2144, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1527, 13, 2296, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1608, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 2257, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1609, 31, 1944, -117,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1662, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1522, 21, 1554, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1479, 6, 1407, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1480, 0, 1666, 1, 1419, 4,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimDamaged2_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 806, -67,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 604, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 609, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 816, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 806, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimDamaged2_joint25[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1603, -61, -1893, 124, 1124, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1418, -12, -1520, 67, 1306, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1527, 23, -1488, 6, 1263, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1194, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1587, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1513, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1702, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1906, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1134, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1123, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1603, 5, -1893, 4, 1124, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimDamaged2_joint26[104] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAZ), -1, -180, -354, 4096,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, 0, -3,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, -43, 269, -68, 29, 56,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 1), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -101, -27, -136, -226, 109, 48,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 1), 5324, 7372,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateT(FT_ANIM_SCAY, 2), 4096, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -67, 40, -184, 73, 127, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 20, 9, 83, 24, -4, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY, 20), 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 30, -2, 64, -7, 49, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -14, 6, -9, -8, 24, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 84, 0, -7, 1, 33, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -14, 0, -3,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
