/* AnimJoint data for relocData file 2074 (FTPikachuAnimTechF) */
/* 4336 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimTechF_joint1[24];
extern u16 dFTPikachuAnimTechF_joint2[100];
extern u16 dFTPikachuAnimTechF_joint3[72];
extern u16 dFTPikachuAnimTechF_joint4[70];
extern u16 dFTPikachuAnimTechF_joint6[54];
extern u16 dFTPikachuAnimTechF_joint7[148];
extern u16 dFTPikachuAnimTechF_joint8[54];
extern u16 dFTPikachuAnimTechF_joint9[70];
extern u16 dFTPikachuAnimTechF_joint10[10];
extern u16 dFTPikachuAnimTechF_joint11[18];
extern u16 dFTPikachuAnimTechF_joint12[18];
extern u16 dFTPikachuAnimTechF_joint14[70];
extern u16 dFTPikachuAnimTechF_joint15[174];
extern u16 dFTPikachuAnimTechF_joint17[78];
extern u16 dFTPikachuAnimTechF_joint18[222];
extern u16 dFTPikachuAnimTechF_joint20[96];
extern u16 dFTPikachuAnimTechF_joint22[210];
extern u16 dFTPikachuAnimTechF_joint23[230];
extern u16 dFTPikachuAnimTechF_joint25[108];
extern u16 dFTPikachuAnimTechF_joint26[228];
extern u16 dFTPikachuAnimTechF_joint27[60];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTPikachuAnimTechF_joints[] = {
	(AObjEvent32 *)dFTPikachuAnimTechF_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPikachuAnimTechF_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPikachuAnimTechF_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPikachuAnimTechF_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTPikachuAnimTechF_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTPikachuAnimTechF_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPikachuAnimTechF_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTPikachuAnimTechF_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTPikachuAnimTechF_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPikachuAnimTechF_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPikachuAnimTechF_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTPikachuAnimTechF_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTPikachuAnimTechF_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTPikachuAnimTechF_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTPikachuAnimTechF_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTPikachuAnimTechF_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTPikachuAnimTechF_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTPikachuAnimTechF_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTPikachuAnimTechF_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTPikachuAnimTechF_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTPikachuAnimTechF_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTPikachuAnimTechF_joint1[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 0, 1066,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 1200, 1333,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 13), 3000, 929,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 18), 4800,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimTechF_joint2[100] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 725, -86,
	ftAnimSetValBlock(FT_ANIM_ROTX), -1876,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 725, -161, -258, -110,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 13), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), -2037,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -1072, 291, 543, -48, -211, 211,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 3216, 178,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 683, 125, -73, 578,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 606, -331, 77, 377,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, -7, 517, -7, 114, 108,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -5, -76, 601, 164, 159, 74,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -67, 3, 661, -31, 180, 11,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 3216, -1, 0, 1, 0, -1, 0, 29, 546, 6, 180, -32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 3190, 33, -28, 0, 675, 108,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimTechF_joint3[72] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -209, -111,
	ftAnimSetValBlock(FT_ANIM_ROTY), 223,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -209, -58, -111, -52,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 9), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 22), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 4), 223,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, -14, -275, -35, -171, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 20, -275, 17, -171, 15,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 271, 27,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), -209, -111,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 3), 358,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 378, -13, 358, -12, 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 23, 133, 32,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPikachuAnimTechF_joint4[70] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -236, 355, -158,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -236, 355, -158,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 35, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 261, 11, 0, -23, 0, 10,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 261, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 185, -4,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -59, 35,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 195, 2, -59, 1, 35, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 225, -29, -32, 8, 18, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimTechF_joint6[54] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 290, -39, 406,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 290, -19, -39, -52, 406, 31,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 268, -11, -99, -31, 441, 18,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 268, 141, -99, 113, 441, -127,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 498, 131, 86, 105, 235, -118,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 498, -77, 86, -66, 235, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimTechF_joint7[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1015, -6, 1554, 7, 768, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 899, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -880, 32, 1261, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -854, 21, 1113, -128,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 959, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -838, -63,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 903, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 870, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 962, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 981, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1004, 311, 869, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 2187, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -923, -524, 982, 360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1887, -208, 1589, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1339, 279, 2271, 50, 877, -366,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 2306, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1328, 33, 856, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 632, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1271, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1100, -200,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2298, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1946, -232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1352, -227, 890, 245,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1401, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1587, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1430, 179, 1703, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -870, 113, 1400, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 66, 1367, -33, 1406, 4,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimTechF_joint8[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -798, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -488, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -223, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -537,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1084, -385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -782, 542,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 391,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPikachuAnimTechF_joint9[70] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -458, -322, -255,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -458, -322, -255,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 74, 35, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 209, 21, 0, 21, 0, 17,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 209, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -349, -39,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -168, 125,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -12, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -349, 29, -168, 0, 125, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 67, 49, -166, 0, 78, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimTechF_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimTechF_joint11[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -268, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 36), 0, 51,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTPikachuAnimTechF_joint12[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -268, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 36), 0, 82,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPikachuAnimTechF_joint14[70] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAZ), 1, 0, 0, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -368, 280, 54,
	ftAnimSetValBlock(FT_ANIM_SCAY), 5324,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -368, 60, 280, -324, 54, 301,
	ftAnimSetValBlockT(FT_ANIM_SCAY, 4), 5324,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -300, 36, -84, -194, 393, 180,
	ftAnimSetValBlockT(FT_ANIM_SCAY, 1), 4096,
	ftAnimSetValT(FT_ANIM_SCAY, 35), 4096,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -300, -73, -84, 40, 393, -81,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -419, -67, -18, 37, 260, -75,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -419, 42, -18, -19, 260, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -324, -62, 313,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTPikachuAnimTechF_joint15[174] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 841, 0, 1242, -3, 557, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 709, 96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 745, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1242, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1164, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1196, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1475, 286, 812, 103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1038, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 2110, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 735, -7, 2126, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 765, 4, 2105, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 767, -35, 2012, -254, 987, -148,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1192, -159, 418, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 694, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 487, -93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 481, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1278, 31, 488, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1244, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 306, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 445, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 403, 79,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1253, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1281, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 297, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 730, 266,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 509, 188,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1130, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1336, 103,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1660, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1023, 224,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1307, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1183, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 839, -67,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1690, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1703, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -35, 1707, 3, 1313, 5,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimTechF_joint17[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -816, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -864, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -176, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -176, -401,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -812, -265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -706, 401,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPikachuAnimTechF_joint18[222] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1409, 5, -1591, 17, 1642, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -1466, -34, -1553, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1773, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1550, -170,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1484, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1485, -4, -1465, 115,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1238, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1572, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1334, -138,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1063, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1233, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1232, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1579, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1402, -32, 971, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1644, -64, 1231, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1532, 42, 1016, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1559, 57, -1232, -30, 1001, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1287, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1417, 5, 888, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1548, -9, 1057, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1435, -42, 1088, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1632, 123, -1254, -92, 1333, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1187, 351, -1471, -46, 752, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -930, -30, -1347, 143, 838, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1156, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1248, -273, 744, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1024, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1476, -213,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1778, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1175, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1356, -76,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1700, 89, 861, -164,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 350, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1272, -100,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1435, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1592, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 393, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1049, 137,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1384, -103,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1533, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1160, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1550, -17, -1609, -16, 1201, 40,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPikachuAnimTechF_joint20[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 582, -59,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 561, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 874, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 905, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1042, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 778, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 866, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 808, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 908, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 742, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 827, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 563, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 951, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 869, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 122, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 313, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1001, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1049, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 967, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, -21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPikachuAnimTechF_joint22[210] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1586, -4, -1614, 10, -1538, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1544, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1753, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1498, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1637, -146,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1819, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1539, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1594, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1855, -78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1927, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1535, -7, -1690, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1711, -104, -1955, -187,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1898, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1817, 30, -1656, 62, -2170, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1650, 125, -1774, -119, -1623, 307,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1949, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1566, 71, -1555, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1607, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1508, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1649, -98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1780, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1877, 67, -1689, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1527, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1681, 147,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1732, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1951, -255, -1621, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2243, 36, -1525, 3, -1603, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1877, 250, -1675, -102, -1353, 172,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1161, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1743, 109, -1730, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1895, -113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1887, 43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1092, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1333, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1403, -79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1969, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2010, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1637, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1847, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1732, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, 35, -1736, -3, -1961, 7,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPikachuAnimTechF_joint23[230] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 315, 11, 106, -103, -119, 143,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 304, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -61, -15, 112, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -82, 140, 181, -181,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -658, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 243, -193, 219, 190,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -382, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 297, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 313, 89, -441, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -235, 132, 476, 57, -209, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 414, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -12, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -308, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -487, -108,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 404, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 330, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -149, 57, -589, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 102, 80, -349, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 11, -31, -599, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 39, -47, -649, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -84, 36, -778, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 111, 45, -515, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 7, 86, -592, 130,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 501, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -253, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 350, 86, -361, -211,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 599, 41, -1067, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 502, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 256, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 256, 0, 587, -12, -1097, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -218, -74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 572, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1340, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1418, -77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1630, -25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -292, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -346, 59, -1618, 187,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -750, 399,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -174, 204, 570, -139,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 133, 37, 85, -157,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -456, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 137, -2, -22, -71, -265, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 128, -8, -57, -34, -192, 73,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimTechF_joint25[108] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 412, -260,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 6, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 384,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 775, 632,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1371, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1161, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 878, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1016, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 778, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 906, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 906, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1039, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 849, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 660, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 512, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 600, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 546, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 257, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 316, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 829, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1000, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 993, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 865, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 807, -58,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTPikachuAnimTechF_joint26[228] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, -3, -50, 5, 414, 117,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -179, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -53, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 679, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 659, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -177, 646, 369, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1113, 677, -77, -155, 434, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 224, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1177, -2, -364, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1108, -551, -418, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -261, 326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 74, -383, 186, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 340, -636, -485, -627,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1198, -1155, 269, 359, -1068, -826,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1970, -182, 457, 817, -2138, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1563, 161, 1904, 724, -1624, 289,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1734, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1907, -6, -1559, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1890, 4, -1463, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1763, -76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1913, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1635, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1704, -174,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1788, 108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1329, 161,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1914, -189, 1860, -98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1615, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2112, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1223, 113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1078, -81,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1609, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1720, 40,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2098, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2054, 13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1181, -133,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2017, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2032, 91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1631, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1755, -90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1391, -100,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1603, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1612, -5, 1338, -33, -2079, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1615, -2, 1323, -14, -2092, -13,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTPikachuAnimTechF_joint27[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -523, -381, -862,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -523, 56, -381, 30, -862, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -14, 33, -110, 18, -382, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -14, -14, -110, 17, -382, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -200, -13, 121, 16, -165, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -200, 10, 121, -6, -165, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -14, 0, -3,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
