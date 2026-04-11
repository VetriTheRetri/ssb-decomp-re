/* AnimJoint data for relocData file 2097 (FTPikachuAnimFireFlowerShootAir) */
/* 3728 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimFireFlowerShootAir_joint1[52];
extern u16 dFTPikachuAnimFireFlowerShootAir_joint2[74];
extern u16 dFTPikachuAnimFireFlowerShootAir_joint3[70];
extern u16 dFTPikachuAnimFireFlowerShootAir_joint5[40];
extern u16 dFTPikachuAnimFireFlowerShootAir_joint6[128];
extern u16 dFTPikachuAnimFireFlowerShootAir_joint7[38];
extern u16 dFTPikachuAnimFireFlowerShootAir_joint8[86];
extern u16 dFTPikachuAnimFireFlowerShootAir_joint9[126];
extern u16 dFTPikachuAnimFireFlowerShootAir_joint10[60];
extern u16 dFTPikachuAnimFireFlowerShootAir_joint11[60];
extern u16 dFTPikachuAnimFireFlowerShootAir_joint13[40];
extern u16 dFTPikachuAnimFireFlowerShootAir_joint14[88];
extern u16 dFTPikachuAnimFireFlowerShootAir_joint16[22];
extern u16 dFTPikachuAnimFireFlowerShootAir_joint17[170];
extern u16 dFTPikachuAnimFireFlowerShootAir_joint19[80];
extern u16 dFTPikachuAnimFireFlowerShootAir_joint21[196];
extern u16 dFTPikachuAnimFireFlowerShootAir_joint22[170];
extern u16 dFTPikachuAnimFireFlowerShootAir_joint24[72];
extern u16 dFTPikachuAnimFireFlowerShootAir_joint25[240];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimFireFlowerShootAir_joints[] = {
	(u32)dFTPikachuAnimFireFlowerShootAir_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimFireFlowerShootAir_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimFireFlowerShootAir_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimFireFlowerShootAir_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimFireFlowerShootAir_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimFireFlowerShootAir_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimFireFlowerShootAir_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimFireFlowerShootAir_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimFireFlowerShootAir_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimFireFlowerShootAir_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimFireFlowerShootAir_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimFireFlowerShootAir_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimFireFlowerShootAir_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimFireFlowerShootAir_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimFireFlowerShootAir_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimFireFlowerShootAir_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimFireFlowerShootAir_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimFireFlowerShootAir_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimFireFlowerShootAir_joint25, /* [24] joint 25 */
	0xFFFF0388, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimFireFlowerShootAir_joint1[52] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1114, -108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -26, 33, -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 631, -386, 224, 80,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -7,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 224, 80,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 631,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -7,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 11), 631,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -464, -1208,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -228, 188,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 8), -228, 91,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 631, 429, -102, 106,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1114, -108,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimFireFlowerShootAir_joint2[74] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 999, -124, 300,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -116, -12, 119, -1, 19, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -116, -12, 119, -1, 19, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -116, 0, 119, 0, 19, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -29, 11, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -349, -23, 207, 8, 109, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -349, 31, 207, 3, 109, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -7, 149, 248, -36, 69, 21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 999, -124, 300,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimFireFlowerShootAir_joint3[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -173, 58, -73,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 116, 11, -43, -3, 5, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 116, 11, -43, -3, 5, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 153, -147, -43, 20, 5, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -326, -47, 18, 6, 58, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -326, 43, 18, -7, 58, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 154, 17, -59, 4, -14, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -173, 58, -73,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimFireFlowerShootAir_joint5[40] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 199, -70, 479,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 232, 27, -89, -15, 419, -47,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 232, -89, 419,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 232, -89, 419,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 232, -30, -89, 16, 419, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 199, -70, 479,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimFireFlowerShootAir_joint6[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 11, 53, -56, 82, 2405, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 172, 93, 207, 177, 2393, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 252, 153, 379, 118, 2335, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 972, 99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 479, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2432, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2441, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 2442, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 995, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 795, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 480, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 474, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 795, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 795, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 795, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 795, -184,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2451, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2181, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 473, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 353, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 536, -262,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 10, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 272, -129, 2152, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 44, 0, 95, -164, 2306, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 11, -32, -56, -151, 2405, 99,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimFireFlowerShootAir_joint7[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -758, 37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -721, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -353, 355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 23), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -449, -374,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -758, -309,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimFireFlowerShootAir_joint8[86] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -478, -335, -28,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 177, 103, -132, 47, 39, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 37, -17, -98, 4, -2, -5,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 37, -17, -98, 4, -2, -5,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 107, 0, -98, 2, -2, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 34, -7, -92, 0, 65, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 34, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -92, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 8, -18, -92, -6, 65, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -74, -81, -133, -40, 39, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -478, -335, -28,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimFireFlowerShootAir_joint9[126] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -40, -39, -363, -288, 508, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 27, -15, -27, -2, 3045, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -19, -5, -8, 2, 3213, 20,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 5), -8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -19, -5, 3213, 20,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -40, -363, 508,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 1,
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
u16 dFTPikachuAnimFireFlowerShootAir_joint10[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -132, 170, 229,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -433, -30, 155, -1, 143, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -433, 155, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -433, 228, 155, -74, 143, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 251, 68, -68, -22, 143, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 251, -62, -68, 20, 143, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -433, -42, 155, 26, 143, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -132, 170, 229,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPikachuAnimFireFlowerShootAir_joint11[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, -171, -270,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -464, -46, -102, 6, -114, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -464, -102, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -464, 231, -102, 76, -114, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 230, 69, 127, 23, -242, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 230, -63, 127, -20, -242, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -464, -25, -102, -33, -114, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -3, -171, -270,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPikachuAnimFireFlowerShootAir_joint13[40] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -469, 245, 91,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -266, 162, -90, -268, 414, 258,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -266, -90, 414,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -266, -90, 414,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -266, -180, -90, 298, 414, -287,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -469, 245, 91,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimFireFlowerShootAir_joint14[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 803, 56, 1485, 37, 717, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1975, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 762, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 902, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 776, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 776, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1978, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1959, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 776, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 765, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 776, 20, 1949, -15, 774, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 804, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1786, -125, 890, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1633, -133, 817, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 801, 0, 1520, -74, 744, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 803, 2, 1485, -35, 717, -26,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimFireFlowerShootAir_joint16[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 14), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimFireFlowerShootAir_joint17[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1606, -9, -1367, 43, -2587, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1477, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1215, 64, -2293, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1194, -41, -1982, 304,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1468, -40, -1325, 68,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1462, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1426, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1471, 2, -1331, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1431, 37, -1369, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1462, -243, -1389, -107, -1468, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 938, -216, -1647, -167, -1926, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1030, 112, -1724, -58, -1836, 123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1785, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1163, 70, -1680, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1170, 3, -1664, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1668, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1163, 26,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1781, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1764, 119,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1680, -91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2054, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1206, 148, -1535, 218,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1150, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1459, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1647, 129, -2140, -108,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1613, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2416, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1261, -95, -2486, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1340, -53, -2557, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1606, -6, -1367, -26, -2587, -30,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimFireFlowerShootAir_joint19[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 932, 28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 845, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 605, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 316, -302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 121, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 316, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 485, 443,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 893, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 949, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 980, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 950, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, -18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimFireFlowerShootAir_joint21[196] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 230, -58, 39, -32, 585, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 358, -218,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 3, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 172, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -153, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -273, -49, 96, -149,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 347, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -252, 190, 185, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 106, 200, 338, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 148, 20, 346, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -22, -81, 333, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 386, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 317, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -82, 321, 338, -173, 203, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 621, 373, -14, -130, 845, 311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 663, 10, 76, 107, 825, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 727, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 595, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 201, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 222, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 424, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 712, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 692, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 589, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 573, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 676, -97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 356, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 600, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 498, -54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 539, -24, 336, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 546, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 448, -229, 374, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 39, -257, 51, -205,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 24, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -66, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 145, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 222, 42, 574, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 230, 8, 39, 14, 585, 11,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimFireFlowerShootAir_joint22[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 203, -57, 533, 32, -780, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 579, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -676, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 145, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 30, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 161, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 483, -100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 302, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -482, 151,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -342, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 178, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 189, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -333, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -372, -54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 161, 63, 324, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 317, 83, 190, -22, -448, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -281, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 328, -76, 279, 92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 369, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 164, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 119, -30, -278, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 190, -12, -277, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 167, -201, 375, -1, -276, -170,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 381, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -213, -232, -619, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -298, 5, -711, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -202, 81, -700, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -134, 80, 443, 66, -756, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 177, 40, 542, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -777, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -785, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 203, 26, 533, -9, -780, 5,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimFireFlowerShootAir_joint24[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 595, 123,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 719, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 911, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 845, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 650, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 557, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 650, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 506, 423,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 846, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1063, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1060, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 669, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 595, -73,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimFireFlowerShootAir_joint25[240] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1350, -89, 1682, 25, 1886, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1716, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1842, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1261, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1047, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1559, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1638, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1560, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1901, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1960, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1555, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1548, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1563, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1559, -47, 1580, -7, 1901, 233,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1377, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1548, 35, 2428, 239,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1838, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2381, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1618, 157, 2215, -119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1633, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1878, 25, 2143, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2228, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1850, 21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1589, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1618, 100,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2218, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1776, 62, 1962, -210,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1280, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1798, -116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1774, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1867, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1698, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1018, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 989, 76, 1773, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1857, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1171, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1308, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1350, 42, 1682, -15, 1886, 28,
	ftAnimEnd(),
	0x400E, 0xFDE1, 0xFF5C, 0xFE08, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x200F, 0x0005, 0xFF5A, 0x0025, 0x01BB, 0x003C, 0xFE58, 0x0007, 0x200F, 0x0005, 0xFF5A, 0x002C, 0x01BB, 0xFFCB, 0xFE58, 0x005E, 0x200F, 0x0001, 0x0062, 0x004B, 0x007C, 0xFF81, 0x008E, 0x00DA, 0x200F, 0x0002, 0x003D, 0xFFFD, 0x003B, 0xFFFA, 0x00E7, 0x0008, 0x200F, 0x0008, 0x003D, 0xFFDD, 0x003B, 0xFFF3, 0x00E7, 0xFFD5, 0x380F, 0x0009, 0xFDE1, 0xFF5C, 0xFE08, 0x0000, 0x0000, 0x0000,
};
