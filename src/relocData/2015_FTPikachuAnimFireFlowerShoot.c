/* AnimJoint data for relocData file 2015 (FTPikachuAnimFireFlowerShoot) */
/* 3488 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimFireFlowerShoot_joint1[52];
extern u16 dFTPikachuAnimFireFlowerShoot_joint2[74];
extern u16 dFTPikachuAnimFireFlowerShoot_joint3[72];
extern u16 dFTPikachuAnimFireFlowerShoot_joint5[40];
extern u16 dFTPikachuAnimFireFlowerShoot_joint6[130];
extern u16 dFTPikachuAnimFireFlowerShoot_joint7[22];
extern u16 dFTPikachuAnimFireFlowerShoot_joint8[86];
extern u16 dFTPikachuAnimFireFlowerShoot_joint9[126];
extern u16 dFTPikachuAnimFireFlowerShoot_joint10[60];
extern u16 dFTPikachuAnimFireFlowerShoot_joint11[60];
extern u16 dFTPikachuAnimFireFlowerShoot_joint13[40];
extern u16 dFTPikachuAnimFireFlowerShoot_joint14[140];
extern u16 dFTPikachuAnimFireFlowerShoot_joint16[24];
extern u16 dFTPikachuAnimFireFlowerShoot_joint17[144];
extern u16 dFTPikachuAnimFireFlowerShoot_joint19[64];
extern u16 dFTPikachuAnimFireFlowerShoot_joint21[132];
extern u16 dFTPikachuAnimFireFlowerShoot_joint22[150];
extern u16 dFTPikachuAnimFireFlowerShoot_joint24[68];
extern u16 dFTPikachuAnimFireFlowerShoot_joint25[208];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimFireFlowerShoot_joints[] = {
	(u32)dFTPikachuAnimFireFlowerShoot_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimFireFlowerShoot_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimFireFlowerShoot_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimFireFlowerShoot_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimFireFlowerShoot_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimFireFlowerShoot_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimFireFlowerShoot_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimFireFlowerShoot_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimFireFlowerShoot_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimFireFlowerShoot_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimFireFlowerShoot_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimFireFlowerShoot_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimFireFlowerShoot_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimFireFlowerShoot_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimFireFlowerShoot_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimFireFlowerShoot_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimFireFlowerShoot_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimFireFlowerShoot_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimFireFlowerShoot_joint25, /* [24] joint 25 */
	0xFFFF034C, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimFireFlowerShoot_joint1[52] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 675, 108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -26, 33, -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 631, -35, 224, 80,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -7,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 219, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 631,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -567,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 11), 631,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -273, -1066,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -180, 158,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 8), -75, 56,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 631, 39, -102, 162,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 675, 108,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimFireFlowerShoot_joint2[74] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 133, 32,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -116, -12, 119, -1, 19, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -116, 0, 119, 0, 19, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -29, 11, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -116, 0, 119, 0, 19, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -29, 11, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -349, -23, 207, 8, 109, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -349, 31, 207, 3, 109, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -7, 41, 248, -8, 69, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 23, 133, 32,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimFireFlowerShoot_joint3[72] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 0, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 116, 11, -43, -3, 5, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -43, 0, 5, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 117,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -55, 7, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 153, -147, -43, 20, 5, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -326, -47, 18, 6, 58, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -326, 43, 18, -7, 58, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 154, 34, -59, -2, -14, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -13, 0, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPikachuAnimFireFlowerShoot_joint5[40] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 232, -72, -89, -21, 419, 84,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 232, -89, 419,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 232, -89, 419,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 232, 80, -89, 23, 419, -94,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimFireFlowerShoot_joint6[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -65, 236, 13, 3014, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2651, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 574, -44, 367, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 556, 110, 442, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 469, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 795, 206, 2432, -156,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2432, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 968, 94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 795, -22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 469, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 2432, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 477, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 795,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 774, -22, 2442, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 751, 10, 2453, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2301, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 795, 101, 469, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 353, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 953, 87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 911, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2188, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2236, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 760, -75, 377, -22, 2542, 317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 761, 22, 309, -70, 2871, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 42, 236, -72, 3014, 143,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPikachuAnimFireFlowerShoot_joint7[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 25), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimFireFlowerShoot_joint8[86] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -163, 20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 177, 7, -132, 12, 39, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 37, -17, -98, 4, -2, -5,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 36, 0, -98, 0, -2, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 107, 0, -98, 2, -2, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 34, -7, -92, 0, 65, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 34, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -92, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 8, -18, -92, -6, 65, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -74, -1, -133, -11, 39, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimFireFlowerShoot_joint9[126] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -40, -39, -363, -288, 508, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 27, -15, -27, -2, 3045, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -19, -5, -8, 2, 3213, 20,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 5), -8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -19, 1, 3213, -1,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -40, -363, 508,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -9, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -91, -25, -8, -4, 3213, -21,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -40, -363, 508,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -95, 0, -20, -1, 3147, -6,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -29, -292, 506,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 8, 57, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -95, -20, 3147, -29, -292, 506,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -95, 11, -20, 5, 3147, 11, -29, -33, -292, 119, 506, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -26, 25, 12, 4, 3216, -124, -54, 51, -203, 432, 541, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 59, 5, 2401, 8, 32, 508,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimFireFlowerShoot_joint10[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -433, -43, 155, 15, 143, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -433, 155, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -433, 228, 155, -74, 143, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 251, -6, -68, -15, 143, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -496, -62, 0, 20, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -433, 55,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 155, 143,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPikachuAnimFireFlowerShoot_joint11[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -464, -46, -102, -10, -114, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -464, -102, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -464, 231, -102, 76, -114, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 230, -2, 127, 10, -242, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -491, -63, 0, -20, 0, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -464, 54, -102, 0, -114, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPikachuAnimFireFlowerShoot_joint13[40] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -266, 45, -90, -22, 414, 80,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -266, -90, 414,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -266, -90, 414,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -266, -50, -90, 24, 414, -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimFireFlowerShoot_joint14[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 65, 1703, 6, 1311, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 960, 22, 1712, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1245, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 978, -318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 913, -63, 1694, 50, 609, -182,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1953, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 752, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 775, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1977, 11, 795, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1953, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 774, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 761, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 782, -1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1949, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1962, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 774, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 786, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 776, -28, 1949, -30, 774, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 751, 59, 1707, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 657, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 488, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 556, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 826, 32, 1717, 2, 1010, 340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 816, -11, 1711, -7, 1237, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -12, 1703, -8, 1311, 74,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimFireFlowerShoot_joint16[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimFireFlowerShoot_joint17[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1666, 20, -1609, 11, 1201, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1683, -51, -1394, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1555, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1726, 149,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1850, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1621, -43, -1345, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1553, -11, -1297, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1541, 24, -1289, -36, 1842, -455,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1601, -33, -1369, -45, 938, -329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1474, -68, -1380, -24, 1183, 252,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1477, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1355, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1444, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1507, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1759, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1485, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1603, 64,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1735, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1514, -291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1654, 18, -1418, -41, 1153, -287,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1105, 75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1604, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1671, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1678, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1669, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1173, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1666, -2, -1609, -4, 1201, 28,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimFireFlowerShoot_joint19[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 946, -12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 781, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 644, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 535, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 544, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 977, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 878, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 765, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 746, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 821, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 948, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1002, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 982, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 958, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, -11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimFireFlowerShoot_joint21[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1602, -20, -1736, 4, 1255, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1919, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1824, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1074, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1080, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1061, -6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1944, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1969, 205, -1840, -67, 1055, 309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1533, 310, -1960, -73, 1681, 348,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1238, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1987, -45, 1753, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -2090, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1667, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1233, -6, 1627, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1609, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1241, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1269, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1519, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2066, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1749, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1566, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1642, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1475, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1264, -19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1627, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1609, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, 7, -1736, 13, 1255, -9,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimFireFlowerShoot_joint22[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 128, 10, -57, 47, -192, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 76, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -444, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 248, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 347, 71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 393, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 31, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 21, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -494, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -464, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 27, 132, 390, -95, -454, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 285, 126, 203, -53, -349, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 281, -166, 284, 108, -199, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -46, -187, 419, 68, -370, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -93, -37, 421, 0, -374, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -205, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 344, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -418, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -450, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -826, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -225, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 28, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 303, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 92, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -761, 122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -247, 96,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 119, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 134, 4, -16, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 128, -5, -57, -41, -192, 55,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimFireFlowerShoot_joint24[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 807, 33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 979, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 975, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 978, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 978, -489,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -489,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 503, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 555, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 730, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 720, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 735, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 868, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 955, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 856, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 807, -49,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimFireFlowerShoot_joint25[208] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1601, 28, 1323, 56, 1124, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1648, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1459, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1527, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1715, 173,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1972, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1603, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1560, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1446, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1427, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1555, -128, 1965, -99, 1419, 486,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1304, -79, 1774, -67, 2399, 483,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1396, 185, 1829, 52, 2386, -176,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1895, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1675, 169, 2045, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1734, 48, 1995, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1850, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1718, 8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1898, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1662, -110,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1863, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1373, -164,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1717, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1617, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1543, -116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1351, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1226, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1147, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1601, -15, 1323, -27, 1124, -23,
	ftAnimEnd(),
	0x400E, 0xFFF2, 0x0000, 0xFFFD, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x200F, 0x0005, 0xFF5A, 0xFFF1, 0x01BB, 0x002C, 0xFE58, 0xFFD6, 0x200F, 0x0005, 0xFF5A, 0x002C, 0x01BB, 0xFFCB, 0xFE58, 0x005E, 0x200F, 0x0001, 0x0062, 0x004B, 0x007C, 0xFF81, 0x008E, 0x00DA, 0x200F, 0x0002, 0x003D, 0xFFF0, 0x003B, 0x0001, 0x00E7, 0xFFF7, 0x200F, 0x0008, 0xFFC1, 0xFFFC, 0x008F, 0xFFFD, 0x002A, 0xFFF3, 0x380F, 0x0009, 0xFFF2, 0x0000, 0xFFFD, 0x0000, 0x0000, 0x0000,
};
