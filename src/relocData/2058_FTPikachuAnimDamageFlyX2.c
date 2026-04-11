/* AnimJoint data for relocData file 2058 (FTPikachuAnimDamageFlyX2) */
/* 2128 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimDamageFlyX2_joint1[80];
extern u16 dFTPikachuAnimDamageFlyX2_joint2[38];
extern u16 dFTPikachuAnimDamageFlyX2_joint3[38];
extern u16 dFTPikachuAnimDamageFlyX2_joint5[38];
extern u16 dFTPikachuAnimDamageFlyX2_joint6[60];
extern u16 dFTPikachuAnimDamageFlyX2_joint7[18];
extern u16 dFTPikachuAnimDamageFlyX2_joint8[38];
extern u16 dFTPikachuAnimDamageFlyX2_joint9[42];
extern u16 dFTPikachuAnimDamageFlyX2_joint10[30];
extern u16 dFTPikachuAnimDamageFlyX2_joint11[30];
extern u16 dFTPikachuAnimDamageFlyX2_joint13[30];
extern u16 dFTPikachuAnimDamageFlyX2_joint14[66];
extern u16 dFTPikachuAnimDamageFlyX2_joint16[18];
extern u16 dFTPikachuAnimDamageFlyX2_joint17[92];
extern u16 dFTPikachuAnimDamageFlyX2_joint19[42];
extern u16 dFTPikachuAnimDamageFlyX2_joint21[78];
extern u16 dFTPikachuAnimDamageFlyX2_joint22[100];
extern u16 dFTPikachuAnimDamageFlyX2_joint24[42];
extern u16 dFTPikachuAnimDamageFlyX2_joint25[132];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimDamageFlyX2_joints[] = {
	(u32)dFTPikachuAnimDamageFlyX2_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimDamageFlyX2_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimDamageFlyX2_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimDamageFlyX2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimDamageFlyX2_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimDamageFlyX2_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimDamageFlyX2_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimDamageFlyX2_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimDamageFlyX2_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimDamageFlyX2_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimDamageFlyX2_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimDamageFlyX2_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimDamageFlyX2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimDamageFlyX2_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimDamageFlyX2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimDamageFlyX2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimDamageFlyX2_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimDamageFlyX2_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimDamageFlyX2_joint25, /* [24] joint 25 */
	0xFFFF01F4, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimDamageFlyX2_joint1[80] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), -26, 33, -28, 675, 108,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 679, 50, 107, -347,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), 0, -151,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 688, 79, 21, -17, 4915, -409, 4915, -409, 3276, 409,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 699, 43, 102, 49, 3686, -819, 3686, -819, 4505, 819,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 797, 74, 144, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 25), 4096, 4096, 4096,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 942, 11, 48, -215,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimDamageFlyX2_joint2[38] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 23, 133, 32, 0, -209, -111,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 0, -240, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -37, -34, 126, -4, 4, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -667, -26, 41, -2, -108, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -317, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -753, 54,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimDamageFlyX2_joint3[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 0, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 413, 12, 92, 1, -34, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 237, -22, 26, 0, -60, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -57, -34, 105, -18, -128, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -68, -140, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimDamageFlyX2_joint5[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 311, -107, 39, 120, 465, 341,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 256, -31, 12, -45, 526, 11,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 240, -33, -62, -20, 489, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 155, -47, 495,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimDamageFlyX2_joint6[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 794, 0, 236, -22, -202, -272,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 876, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 168, 9, -1020, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 294, 19, -645, 73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 196, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -532, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -507, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -526, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 242, -35, -753, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 885, 3, -16, -86, -714, 12,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 885, -16, -714,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPikachuAnimDamageFlyX2_joint7[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -10, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), -10,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimDamageFlyX2_joint8[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -163, 20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 59, 12, -128, 1, 36, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 218, -5, -129, -6, 44, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -55, -11, -281, -10, -186, -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 86, -241, -217,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimDamageFlyX2_joint9[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 40, -29, 2414,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 8, -3, 31, 53, 506, 5,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 3, -1, 105, -1, 515, -5,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 6, 0, 30, -34, 496, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 5, 29, 491,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimDamageFlyX2_joint10[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 14, -63, -2, 209, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 329, -18, -63, 4, 209, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -201, 52, 117,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimDamageFlyX2_joint11[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 464, 21, -91, -4, -225, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 464, -22, -91, -1, -225, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -166, -144, -146,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimDamageFlyX2_joint13[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -343, -12, -28, 10, 390, -27,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -355, -38, -35, -2, 243, -59,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -457, -36, 212,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimDamageFlyX2_joint14[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -6, 1679, -101, 1326, -249,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 597, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1375, -17, 579, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1575, 37, 875, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1585, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 935, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 936, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 833, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1564, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1496, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1141, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 508, -29, 1011, -43, 756, -25,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 508, 1011, 756,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTPikachuAnimDamageFlyX2_joint16[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), -10,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimDamageFlyX2_joint17[92] = {
	ftAnimSetValAfter(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1666, -127, -1609, 60, 1201, 89,
	ftAnimSetValBlock(FT_ANIM_SCAX), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1283, -72, 1469, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1423, -3,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 3), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1230, -10, 1450, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 5324,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1264, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1276, 34,
	ftAnimSetValT(FT_ANIM_SCAX, 23), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1452, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1462, 29,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1160, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1418, 26, -1354, 13, 915, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1436, 1, -1381, -10, 911, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1426, -3, -1415, -11, 966, 18,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1426, -1415, 966,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimDamageFlyX2_joint19[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 946, -313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 6, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 284, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 791, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 749, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 603, -48,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 603,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPikachuAnimDamageFlyX2_joint21[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 10, 107, 127, -22, -353, 335,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -37, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 332, 28, 652, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 179, -21, 724, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 729, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 302, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -19, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 13, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 691, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 31, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 222, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 71, -22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 60, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2, -22, -7, -7, 161, 33,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2, -7, 161,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPikachuAnimDamageFlyX2_joint22[100] = {
	ftAnimSetValAfter(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 130, 44, -55, 135, -191, -118,
	ftAnimSetValBlock(FT_ANIM_SCAX), 4095,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 351, 41, -546, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 476, 40,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 3), 4095,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 191, -24, -274, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 5324,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 2), 4095,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 212, 4, -365, -16,
	ftAnimSetValT(FT_ANIM_SCAX, 23), 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 509, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 586, -13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 230, 54, -417, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 469, -131, 541, 72, -694, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -204, -143, 667, 11, -1457, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -392, -31, 611, -11, -1571, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -392, 0, 595, -5, -1468, 34,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -392, 595, -1468,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimDamageFlyX2_joint24[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 807, -105,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 490, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -80,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 530, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 918, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 895, -7,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 895,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimDamageFlyX2_joint25[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1616, -85, 1323, 75, 1124, 348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1359, -17, 1549, 34, 2170, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1513, 13, 1530, 2, 2289, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1669, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1384, -10, 2321, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1376, 0, 2287, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1478, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1862, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1633, -13, 1848, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1562, 27, 1590, -14, 1871, 7,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1562, 1590, 1871,
	ftAnimEnd(),
	0x0000, 0x400E, 0xFFF2, 0x0000, 0xFFFD, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x200F, 0x0001, 0xFF15, 0xFEA3, 0x0041, 0xFF8E, 0x0014, 0xFF96, 0x200F, 0x0002, 0xFBD8, 0xFFA9, 0xFEAA, 0xFFE1, 0xFEBC, 0xFFFB, 0x200F, 0x000F, 0xF93E, 0xFFF3, 0xFE2F, 0xFFFC, 0xFFBD, 0x000A, 0x200F, 0x0004, 0xFADB, 0x0096, 0xFE59, 0x002F, 0xFF81, 0xFFDD, 0x200F, 0x0004, 0xFDF5, 0x00B5, 0xFFAB, 0x003D, 0xFEA2, 0x0008, 0x200F, 0x0002, 0xFF1C, 0x00AE, 0xFFCC, 0x0010, 0xFFB7, 0x0077, 0x380F, 0x0001, 0x0000, 0xFFDD, 0x0008, 0x0000, 0x0000, 0x0000,
};
