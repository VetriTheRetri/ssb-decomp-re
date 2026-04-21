/* AnimJoint data for relocData file 2057 (FTPikachuAnimDamageFlyX1) */
/* 1840 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimDamageFlyX1_joint1[88];
extern u16 dFTPikachuAnimDamageFlyX1_joint2[56];
extern u16 dFTPikachuAnimDamageFlyX1_joint3[38];
extern u16 dFTPikachuAnimDamageFlyX1_joint5[22];
extern u16 dFTPikachuAnimDamageFlyX1_joint6[76];
extern u16 dFTPikachuAnimDamageFlyX1_joint7[14];
extern u16 dFTPikachuAnimDamageFlyX1_joint8[46];
extern u16 dFTPikachuAnimDamageFlyX1_joint9[16];
extern u16 dFTPikachuAnimDamageFlyX1_joint10[30];
extern u16 dFTPikachuAnimDamageFlyX1_joint11[30];
extern u16 dFTPikachuAnimDamageFlyX1_joint13[30];
extern u16 dFTPikachuAnimDamageFlyX1_joint14[64];
extern u16 dFTPikachuAnimDamageFlyX1_joint16[18];
extern u16 dFTPikachuAnimDamageFlyX1_joint17[58];
extern u16 dFTPikachuAnimDamageFlyX1_joint19[30];
extern u16 dFTPikachuAnimDamageFlyX1_joint21[64];
extern u16 dFTPikachuAnimDamageFlyX1_joint22[60];
extern u16 dFTPikachuAnimDamageFlyX1_joint24[30];
extern u16 dFTPikachuAnimDamageFlyX1_joint25[52];
extern u16 dFTPikachuAnimDamageFlyX1_joint26[46];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimDamageFlyX1_joints[] = {
	(u32)dFTPikachuAnimDamageFlyX1_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimDamageFlyX1_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimDamageFlyX1_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimDamageFlyX1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimDamageFlyX1_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimDamageFlyX1_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimDamageFlyX1_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimDamageFlyX1_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimDamageFlyX1_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimDamageFlyX1_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimDamageFlyX1_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimDamageFlyX1_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimDamageFlyX1_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimDamageFlyX1_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimDamageFlyX1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimDamageFlyX1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimDamageFlyX1_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimDamageFlyX1_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimDamageFlyX1_joint25, /* [24] joint 25 */
	(u32)dFTPikachuAnimDamageFlyX1_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimDamageFlyX1_joint1[88] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -26, 33, -28, 675, 108, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -151, 0, -1, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 833, 100, 17, -33,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 819, 4096, 819, 4096, -819,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4915, -409, 4915, -409, 3276, 819,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 3686, -819, 3686, -819, 4915, 819,
	ftAnimSetValT(FT_ANIM_ROTX, 26), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 31, 4096, 31, 4096, -63,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 25), 4096, 4096, 4096,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 952, 87, 17, 24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 942, -12, 48, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 942, 48,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimDamageFlyX1_joint2[56] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 23, -101,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 133, 32, 0, -209, -111,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 0, -240, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -258, -67, -393, -71, -31, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -519, -30, -468, 9, 178, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -855, -12, -237, 29, 326, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -753, 11, 54, 32, -317, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -317, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -753, 54,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimDamageFlyX1_joint3[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 0, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -328, -15, -322, -15, 175, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -328, 11, -322, 8, 175, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -68, 32, -140, 22, 0, -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -68, -140, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimDamageFlyX1_joint5[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 325, -46, -114, 4, 385, 50,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 155, -47, 495,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimDamageFlyX1_joint6[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 794, -45, 236, -270, -202, -125,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -908, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 658, 6, -575, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 835, 34, -543, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 947, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -474, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -909, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -715, 16,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 959, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 919, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -409, 117, -675, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 229, 78, -523, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 905, -4, 59, -56, -594, -23,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 905, 59, -594,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPikachuAnimDamageFlyX1_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 24), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimDamageFlyX1_joint8[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -163, 20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -419, -73, -111, -13, 67, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -222, 14, -202, -3, 59, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -108, 8, -184, -2, -116, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -46, 27, -252, -8, -187, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 86, -241, -217,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimDamageFlyX1_joint9[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 40, -29, 2414, 5, 29, 491,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimDamageFlyX1_joint10[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 195, 7, 65, -16, 326, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 29, -14, -67, 0, -234, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -201, 52, 117,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimDamageFlyX1_joint11[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 243, 4, 0, 48, -116, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 18, -14, 193, -5, 215, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -166, -144, -146,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimDamageFlyX1_joint13[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -465, -61, 40, 55, 186, -64,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -478, 2, 77, -25, 151, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -457, -36, 212,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimDamageFlyX1_joint14[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -15, 1679, -123, -1890, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 715, -47, -2246, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1309, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1304, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1026, -6,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 534, -60, -2522, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2802, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 352, -90, 1010, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -7, 43, 757, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 610, 206, 896, 46, -2281, 173,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 610, 896, -2281,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTPikachuAnimDamageFlyX1_joint16[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -10, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 3,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimDamageFlyX1_joint17[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1666, 31, -1609, 34, 1201, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1311, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1762, 2, 1179, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1683, -21, 1312, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1506, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1191, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1307, -6, 1179, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1350, -15, 1171, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1467, -13, -1399, -16, 1018, -51,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1467, -1399, 1018,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTPikachuAnimDamageFlyX1_joint19[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 946, -86,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 581, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 570, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 588, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 698, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 684, -4,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 684,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPikachuAnimDamageFlyX1_joint21[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 10, -105, 127, -127, -353, 125,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 225, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -305, -62, -255, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -367, -4, -95, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 17, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 66, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 303, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 321, -23,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 178, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 478, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 206, -90, 7, -19, 229, -30,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 206, 7, 229,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPikachuAnimDamageFlyX1_joint22[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 113, -69, -76, 36, -196, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 83, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 515, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -93, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 132, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 465, -17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 85, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 102, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 355, 110, 616, 97, 14, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1130, 258, 1098, 160, 475, 153,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1130, 1098, 475,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTPikachuAnimDamageFlyX1_joint24[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 807, -105,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 189, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 227, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 561, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 736, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1000, 88,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 1000,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimDamageFlyX1_joint25[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1636, 85, 1323, 98, 1124, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1892, 28, 1620, 47, 1845, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1807, -30, 1609, 2, 1943, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 1663, -15, 2028, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 1623, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1879, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1863, -5, 1601, -20, 1923, -34,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1863, 1601, 1923,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTPikachuAnimDamageFlyX1_joint26[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1403, -149, 88, 13, 208, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1506, 14, 130, 9, 187, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -1201, 34, 217, 11, 89, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -994, 133, 296, -28, 433, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -35, 8,
	ftAnimEnd(),
};
