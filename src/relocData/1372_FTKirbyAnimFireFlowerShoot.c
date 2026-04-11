/* AnimJoint data for relocData file 1372 (FTKirbyAnimFireFlowerShoot) */
/* 2768 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimFireFlowerShoot_joint1[68];
extern u16 dFTKirbyAnimFireFlowerShoot_joint2[44];
extern u16 dFTKirbyAnimFireFlowerShoot_joint3[80];
extern u16 dFTKirbyAnimFireFlowerShoot_joint5[62];
extern u16 dFTKirbyAnimFireFlowerShoot_joint6[184];
extern u16 dFTKirbyAnimFireFlowerShoot_joint7[16];
extern u16 dFTKirbyAnimFireFlowerShoot_joint9[66];
extern u16 dFTKirbyAnimFireFlowerShoot_joint10[180];
extern u16 dFTKirbyAnimFireFlowerShoot_joint11[14];
extern u16 dFTKirbyAnimFireFlowerShoot_joint13[72];
extern u16 dFTKirbyAnimFireFlowerShoot_joint14[100];
extern u16 dFTKirbyAnimFireFlowerShoot_joint16[16];
extern u16 dFTKirbyAnimFireFlowerShoot_joint18[130];
extern u16 dFTKirbyAnimFireFlowerShoot_joint19[146];
extern u16 dFTKirbyAnimFireFlowerShoot_joint21[162];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimFireFlowerShoot_joints[] = {
	(u32)dFTKirbyAnimFireFlowerShoot_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimFireFlowerShoot_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimFireFlowerShoot_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimFireFlowerShoot_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimFireFlowerShoot_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimFireFlowerShoot_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimFireFlowerShoot_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimFireFlowerShoot_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimFireFlowerShoot_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimFireFlowerShoot_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimFireFlowerShoot_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimFireFlowerShoot_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimFireFlowerShoot_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimFireFlowerShoot_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimFireFlowerShoot_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF027A, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimFireFlowerShoot_joint1[68] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 480, 4300, 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 600, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 600,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 600, 120,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 660, 79, 4505, 136, 4505, 136, 3276, -273,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 660, -59, 4505, -102, 4505, -102, 3276, 204,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 600, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 600, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimFireFlowerShoot_joint2[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAZ), -268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, -312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 2), 0, 33, 240, 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 6), 0, 240,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 240,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 240, -1200,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -360, -799,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 4), 0, -16, -360, 180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 12), -268, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimFireFlowerShoot_joint3[80] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 89, 11, 89, 11,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 22), 312, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 357,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 8), 357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 89, 89,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 89, 89,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 178, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -357, -89, 0, -29, -89, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -446, 22, -134, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 240, 4300, 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 312, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimFireFlowerShoot_joint5[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 268, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -120, -60, 60,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -60, 60,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 20), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 268,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 6), 268,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -120, 120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 268, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -120, 120,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -60, 80, 60, -80,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimFireFlowerShoot_joint6[184] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, -1147, -1391, 421, 1608, 453,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1952, -530, -969, 507, 2061, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1865, 23, -375, 297, 1961, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2040, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1919, 9,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 24), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -374, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -376, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -407, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2040, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2032, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1908, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1903, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1903, -108, -407, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2120, -735, -595, -103, 2115, 615,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3373, -752, -615, 39, 3263, 706,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3624, -305, -516, 27, 3528, 326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3984, -246, -560, -24, 3916, 264,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -4219, -72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -648, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4058, 126,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 3880, -135,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4261, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3449, 177,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -673, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -200, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3758, -100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 3303, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3285, 173,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2428, 42,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -209, -9, 3241, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, 15, -220, -11, 3216, -24,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimFireFlowerShoot_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimFireFlowerShoot_joint9[66] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 10), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 18), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 2), 625, 357, -180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 8), 625, 357, -180,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -120, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 446, -111, -178, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 178, -44, -357, -29,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -120, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 178, -11, -357, 22,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 4), 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimFireFlowerShoot_joint10[180] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 642, 217, 516, 0, 243,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1157, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -161, 162, 243, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -478, -127, -86, -119,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 24), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -416, 37, 1140, -13, 4, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1145, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -403, -7, 28, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -517, 0, -113, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -517, 233, 1145, 96, -113, 105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1610, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -51, 355, 97, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 194, 137, -113, -202,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -523, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 223, 86, 1578, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 367, 93, 1377, -121,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 335, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1335, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1449, -114,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 288, -111, -519, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -137, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 112, -241, 1281, -159,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1349, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -194, -188,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 97, 349,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 230,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 699, 275,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 501, 305,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 840, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 873, 184,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1549, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -36, 1391, 41, 1608, 59,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimFireFlowerShoot_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimFireFlowerShoot_joint13[72] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, -1072,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 204, -120, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -753, 22, -838,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -753, 22, -838,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -786, -18, -11, -11, -809, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -790, 4, 0, 65, -806, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -776, 5, 120, 0, -766, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -778, 4, 0, -64, -832, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -764, 0, -74, -1, -874, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -774, -2, -4, 5, -864, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -804, 0, -1072,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimFireFlowerShoot_joint14[100] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, 18, -302, -5, 237, -254,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 11), -309,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -81, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -237, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -219, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -302, 37, -237, -116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -174, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -542, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -92, -9, -553, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -141, 121,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 44, -37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -182, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -321, 15,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -14, 117,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 221, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 9, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -21, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -307, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 0, -302, 5, 233, 12,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimFireFlowerShoot_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimFireFlowerShoot_joint18[130] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, -1, 1785, -139, -1704, 167,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1848, -10, 1539, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1537, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1307, 106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1331, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1855, -3, 1543, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1850, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1504, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1328, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1344, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1819, 89, -1304, 133,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -961, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1548, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1494, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1809, 93,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -949, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1523, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1535, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1659, 13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1893, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1788, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1647, -13, -1593, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1914, -9, -1683, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1918, -1, -1699, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 0, 1785, -3, -1708, -8,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimFireFlowerShoot_joint19[146] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, 323, 302, -98, 233, 142,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 66, -5, 489, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 344, 330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 681, 164,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 657, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 66, 0, 490, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 502, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 80, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 640, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 558, -20,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 508, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 539, -100, 119, 175, 372, -348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 356, -105, 432, 164, -188, -337,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -290, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 328, -7, 448, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 263, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 290, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -229, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 115, 115,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 214, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 77, -31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 221, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 234, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 50, -24, 297, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 28, -14, 301, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -7, 302, 0, 233, -1,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimFireFlowerShoot_joint21[162] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 698, 366,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 740, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 495, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 380, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, -85,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000, 0x280E, 0xFAEE, 0x0050, 0xF907, 0x0044, 0xF954, 0x006D, 0x4F00, 0x1000, 0x1000, 0x1000, 0x2805, 0x0003, 0xF9B1, 0xFFF4, 0x2803, 0x0006, 0xFB43, 0x000A, 0x2009, 0x0002, 0xFA71, 0x005B, 0x2009, 0x0001, 0xFA78, 0x0002, 0x2809, 0x0008, 0xFA83, 0xFFFA, 0x2005, 0x0001, 0xF9A3, 0xFFF1, 0x2805, 0x000A, 0xF981, 0x0009, 0x0801, 0x0002, 0x2003, 0x0001, 0xFB4B, 0x0005, 0x2003, 0x0004, 0xFB6D, 0x0020, 0x200B, 0x0001, 0xFB91, 0xFFEA, 0xFA65, 0xFFAD, 0x2809, 0x0002, 0xF906, 0xFFA1, 0x2003, 0x0001, 0xFB40, 0xFF61, 0x2003, 0x0001, 0xFA52, 0xFF66, 0x2803, 0x0004, 0xFA52, 0x001B, 0x200D, 0x0001, 0xF97B, 0xFFFD, 0xF91E, 0x000B, 0x2809, 0x0009, 0xF933, 0x003A, 0x2805, 0x000E, 0xF90C, 0xFFF7, 0x0801, 0x0003, 0x2003, 0x0001, 0xFA69, 0x0019, 0x2803, 0x000A, 0xFAF0, 0xFFFC, 0x0801, 0x0005, 0x2009, 0x0001, 0xF970, 0x0018, 0x2009, 0x0004, 0xF954, 0xFFFE, 0x200F, 0x0001, 0xFAEE, 0xFFFE, 0xF907, 0xFFFB, 0xF954, 0x0000, 0x0000, 0x0000, 0x0000,
};
