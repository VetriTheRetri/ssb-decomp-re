/* AnimJoint data for relocData file 1997 (FTPikachuAnimTaunt) */
/* 4288 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimTaunt_joint1[54];
extern u16 dFTPikachuAnimTaunt_joint2[66];
extern u16 dFTPikachuAnimTaunt_joint3[114];
extern u16 dFTPikachuAnimTaunt_joint5[118];
extern u16 dFTPikachuAnimTaunt_joint6[200];
extern u16 dFTPikachuAnimTaunt_joint7[18];
extern u16 dFTPikachuAnimTaunt_joint8[130];
extern u16 dFTPikachuAnimTaunt_joint9[10];
extern u16 dFTPikachuAnimTaunt_joint10[128];
extern u16 dFTPikachuAnimTaunt_joint11[128];
extern u16 dFTPikachuAnimTaunt_joint13[98];
extern u16 dFTPikachuAnimTaunt_joint14[202];
extern u16 dFTPikachuAnimTaunt_joint16[18];
extern u16 dFTPikachuAnimTaunt_joint17[154];
extern u16 dFTPikachuAnimTaunt_joint19[90];
extern u16 dFTPikachuAnimTaunt_joint21[144];
extern u16 dFTPikachuAnimTaunt_joint22[124];
extern u16 dFTPikachuAnimTaunt_joint24[74];
extern u16 dFTPikachuAnimTaunt_joint25[222];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimTaunt_joints[] = {
	(u32)dFTPikachuAnimTaunt_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimTaunt_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimTaunt_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimTaunt_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimTaunt_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimTaunt_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimTaunt_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimTaunt_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimTaunt_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimTaunt_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimTaunt_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimTaunt_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimTaunt_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimTaunt_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimTaunt_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimTaunt_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimTaunt_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimTaunt_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimTaunt_joint25, /* [24] joint 25 */
	0xFFFF0413, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimTaunt_joint1[54] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 675, 108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, 33, -28,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -34, 95, 675, 91, 126, 3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 238, 66, 903, 54, 117, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 29), 939, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 29), 288, 121,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 238, -123, 868, -100, 117, -13,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -34, -127, 675, -100, 85, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 675, 108,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimTaunt_joint2[66] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 133, 32,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 23, 17, 133, 41, 32, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 284, 5, 762, 13, 313, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 248, -13,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 762, 313,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 77, -3, 761, 0, 311, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), 77, -1, 761, -14, 311, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 23, -3, 133, -41, 32, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 23, 133, 32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimTaunt_joint3[114] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 0, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -13, 12, 0, 3, -2, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 116, -12, 33, 1, -51, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -140, -19, 14, -1, -5, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -173, -1, 7, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -173, 0, 7, 4, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -173, 0, 79, 7, 36, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -173, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 79, 36,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -11, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -161, 0, -90, -11, -51, -5,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -161, -90, -51,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2, 13, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -140, 18, 14, 31, -5, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -17, 10, 162, -1, -21, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -13, 0, 0, -13, -2, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimTaunt_joint5[118] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 324, 114, -62, -25, 313, 32,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 467, 138, -94, 43, 354, -23,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 462, -24, -19, 27, 289, -103,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 436, -63, -59, 72, 224, -12,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 382, -5, 71, 21, 274, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 430, -33, 252,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 382, 71, 274,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 430, -33, 252,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 382, -45, 71, 80, 274, 11,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 373, -3, 67, -206, 267, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 378, 9, -186, 27, 275, 25,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 385, 14, 101, 206, 299, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 396, -48, 71, -131, 274, 10,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 324, -38, -62, -71, 313, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 324, -62, 313,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPikachuAnimTaunt_joint6[200] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, -50, -1845, 56, -1810, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2261, 4, -1676, 96, -1912, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2442, 32, -1264, 87, -2172, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 2451, 30, -2211, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1151, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1106, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2639, 42, -1324, -23, -2446, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 2466, -24, -3037, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1248, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -1104, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2440, -23, -542, 2, -3005, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 2297, 88, -2849, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1091, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1293, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2856, 151, -506, 134, -3266, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 3207, 141, -486, 54, -3599, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 3705, 64, -177, 60, -4299, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 3597, -32, -120, -16, -4231, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 3510, -30, -277, -101, -4130, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 3413, 130, -731, -56, -3957, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 4293, 105, -614, 86, -4715, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 4045, -77, -211, 15, -4568, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 3827, -106, -521, -53, -4466, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 3408, -9, -532, 40, -4034, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 3768, 84, -278, 9, -3865, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 3912, -11, -475, 0, -3710, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 3697, -15, -276, 104, -3395, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 3822, 41, 148, 141, -3414, -6,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 3822, 148, -3414,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPikachuAnimTaunt_joint7[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 75), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -3,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), -10,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimTaunt_joint8[130] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -163, 20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 249, 15, 507, 10, 47, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 232, -8, -1, -49, 22, -9,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -34, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 177, -16, -28, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 149, -4, -7, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 148, 0, 7, 2, 13, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 148, 4, 7, 30, 13, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 214, 5, 433, 35, 370, 29,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 214, 433, 370,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, -39, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 280, 15, -35, -100, -22, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 336, 4, -367, -27, -425, -33,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 336, -367, -425,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -20, 26, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 71, -27, -22, 67, 22, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 118, 3, 172, -2, -13, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 97, -13, -41, -37, 2, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimTaunt_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 80),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimTaunt_joint10[128] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -129, 1, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 7, 0, 1, 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 34, -2, 30, 7, -88, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -55, -29, 156, 42, -162, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -55, 32, 156, -35, -162, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 42, 7, 51, -5, -150, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 46, 7, 83, -11, -245, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 138, 30, -96, -59, -148, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 138, -36, -96, 51, -148, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 30, -19, 58, 13, -157, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -3, 0, -9, 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1, -3, -19, 0, -122, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -18, 0, -3, 2, 12, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 23, 0, 0, 0, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 168, -4, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimTaunt_joint11[128] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 279, -9, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -14, 0, 0, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -32, 0, -5, 6, 60, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 9, 14, 128, 44, 7, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 9, -10, 128, -46, 7, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -22, 0, -11, -11, 105, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 15, 0, -22, -10, 192, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -35, -17, -150, -42, 234, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -35, 16, -150, 43, 234, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 13, 5, -18, 21, 128, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -3, 0, 5, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -17, -1, 22, 0, 145, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -6, 2, 1, -3, -9, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 8, 0, 0, 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 61, -1, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimTaunt_joint13[98] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -324, -30, -136, -4, 424, 19,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -381, -77, -71, 63, 349, -145,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -421, -3, -57, 86, 242, -52,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -385, 36, 283,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -421, -57, 242,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -385, 36, 283,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -421, -57, 242,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -385, 29, 36, 74, 283, 33,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -385, -24, 36, -111, 283, -71,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -415, 0, -103, 3, 194, 3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -385, 15, 40, 36, 287, 171,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -395, 24, -57, -41, 409, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimTaunt_joint14[202] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, 18, -94, 1, 2919, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 2545, -55, -13, 59, 2617, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2248, -75, 274, 66, 2258, -99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 476, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2093, 0, 2020, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2251, 37, 2053, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1730, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 2316, -11, 536, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 2179, -12, 264, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 2240, 57, 441, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2522, 25, 1024, 4, 1967, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 2389, 82, 1870, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 470, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 309, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2889, 152, 1010, 119, 2324, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 3302, 160, 1029, 53, 2752, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 3849, 104, 1332, 54, 3381, 115,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 3960, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1356, -19, 3442, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1216, -119, 3449, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 4093, 139, 640, -53, 3553, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 4800, 19, 893, 114, 4219, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 4212, -35, 1329, 70, 3608, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 4590, 10, 1314, -47, 3670, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 4276, 18, 1042, -15, 3615, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 4698, -76, 1220, 108, 3937, 100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 4418, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 3817, -142, 1694, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 3844, 27, 1819, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 3979, 45, 1750, -22, 4511, 31,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 3979, 1750, 4511,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTPikachuAnimTaunt_joint16[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 75), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 3,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimTaunt_joint17[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, -36, 0, -2, -406, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 120, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -114, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -279, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -34, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 91, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 189, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -106, 6, 132, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -90, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -98, -32, 15, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -63, 1, 313, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -86, -10, 363, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -209, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 343, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 493, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 317, -15,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -78, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -60, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -233, -6, 273, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -27, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 239, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 241, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -118, 1, 511, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -41, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 495, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 118, 25, 117, -99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 28, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -121, -5, -103, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -74, 25, -235, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 31, 35, -5, -11, -368, -44,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 31, -5, -368,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTPikachuAnimTaunt_joint19[90] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 946, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 791, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 600, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 425, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 446, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 158, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 200, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 304, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 487, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 484, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 519, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 741, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 895, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 948, 17,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 948,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimTaunt_joint21[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, -25, 127, -94, -353, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -175, 9, -522, 22, -513, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -115, 6, -316, 86, -328, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -170, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -6, 58, -251, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 37, 16, 45, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), 195, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 174, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -50, 24, 285, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 221, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -32, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -39, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -172, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 214, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 164, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 203, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 103, -39,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -279, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -142, 26, 207, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -118, 23, -31, -46, 73, -98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 21, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -268, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -386, -99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -487, 24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -53, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -16, 12, 25, 98, -379, 36,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -16, 25, -379,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPikachuAnimTaunt_joint22[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1479, 5, 1665, 3, -1800, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1607, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1404, 17, -1848, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1356, -32, -2039, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1599, -25, 1502, -11, -2169, 82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1556, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1510, 17, -1541, 145,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1652, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1252, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1567, 6, -1199, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), 1620, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1253, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1215, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), -1078, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1663, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), -1631, 5,
	ftAnimBlock(0, 27),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1602, 1, -1102, -126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1695, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1613, 31, -1834, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1442, 29, -2001, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1438, -5, -1859, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1474, -11, 1675, -6, -1798, 20,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1474, 1675, -1798,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTPikachuAnimTaunt_joint24[74] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 807, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 905, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 974, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 380, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 23, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 260, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 260, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 6, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 900, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 954, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 844, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 804, -13,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 804,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimTaunt_joint25[222] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -6, 0, 284, 8, -484, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -129, -75, -394, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 310, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 36, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -458, 10, -279, -39, -103, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -237, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -63, 93, -199, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 100, 19, -42, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 55, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -104, -6, 58, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 200, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 202, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 170, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 21, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -28, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 52, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 224, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 340, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 214, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 206, -12,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 97, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 206, 14, 311, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 51, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 185, 6, 138, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 259, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 222, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 456, 10, -294, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -495, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -130, -62, 285, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -115, 16, 257, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -30, 28, 287, 9, -500, -1,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -30, 287, -500,
	ftAnimEnd(),
	0x0000, 0x400E, 0xFFF2, 0x0000, 0xFFFD, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x200F, 0x0007, 0xFFF2, 0xFFF6, 0x0000, 0x0003, 0xFFFD, 0xFFF1, 0x200F, 0x000D, 0xFF1A, 0xFFFE, 0x004B, 0x0004, 0xFECA, 0xFFF7, 0x200F, 0x0023, 0xFF64, 0x0004, 0x00D6, 0x0002, 0xFE41, 0x0001, 0x200F, 0x000A, 0xFFFA, 0xFFFC, 0x00D2, 0xFFF7, 0xFF09, 0x0009, 0x200F, 0x0005, 0xFF1A, 0x0000, 0x004B, 0xFFF2, 0xFECA, 0x0010, 0x380F, 0x000A, 0xFFF2, 0x0000, 0xFFFD, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
