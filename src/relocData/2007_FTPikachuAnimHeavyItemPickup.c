/* AnimJoint data for relocData file 2007 (FTPikachuAnimHeavyItemPickup) */
/* 2192 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimHeavyItemPickup_joint1[52];
extern u16 dFTPikachuAnimHeavyItemPickup_joint2[40];
extern u16 dFTPikachuAnimHeavyItemPickup_joint3[32];
extern u16 dFTPikachuAnimHeavyItemPickup_joint5[36];
extern u16 dFTPikachuAnimHeavyItemPickup_joint6[88];
extern u16 dFTPikachuAnimHeavyItemPickup_joint7[18];
extern u16 dFTPikachuAnimHeavyItemPickup_joint8[32];
extern u16 dFTPikachuAnimHeavyItemPickup_joint9[10];
extern u16 dFTPikachuAnimHeavyItemPickup_joint10[24];
extern u16 dFTPikachuAnimHeavyItemPickup_joint11[24];
extern u16 dFTPikachuAnimHeavyItemPickup_joint13[36];
extern u16 dFTPikachuAnimHeavyItemPickup_joint14[82];
extern u16 dFTPikachuAnimHeavyItemPickup_joint16[20];
extern u16 dFTPikachuAnimHeavyItemPickup_joint17[94];
extern u16 dFTPikachuAnimHeavyItemPickup_joint19[36];
extern u16 dFTPikachuAnimHeavyItemPickup_joint21[106];
extern u16 dFTPikachuAnimHeavyItemPickup_joint22[94];
extern u16 dFTPikachuAnimHeavyItemPickup_joint24[40];
extern u16 dFTPikachuAnimHeavyItemPickup_joint25[88];
extern u16 dFTPikachuAnimHeavyItemPickup_joint26[34];
extern u16 dFTPikachuAnimHeavyItemPickup_joint27[56];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimHeavyItemPickup_joints[] = {
	(u32)dFTPikachuAnimHeavyItemPickup_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimHeavyItemPickup_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimHeavyItemPickup_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimHeavyItemPickup_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimHeavyItemPickup_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimHeavyItemPickup_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimHeavyItemPickup_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimHeavyItemPickup_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimHeavyItemPickup_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimHeavyItemPickup_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimHeavyItemPickup_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimHeavyItemPickup_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimHeavyItemPickup_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimHeavyItemPickup_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimHeavyItemPickup_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimHeavyItemPickup_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimHeavyItemPickup_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimHeavyItemPickup_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimHeavyItemPickup_joint25, /* [24] joint 25 */
	(u32)dFTPikachuAnimHeavyItemPickup_joint26, /* [25] joint 26 */
	(u32)dFTPikachuAnimHeavyItemPickup_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTPikachuAnimHeavyItemPickup_joint1[52] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 675, 108,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 13), 0,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 37), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 608, -41, 368, 25,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), 150, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), 608,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, 2, 608, -98, 126, -2,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 6, 17, 272, -616, 142, 39,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 5324, 1433, 5324,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimHeavyItemPickup_joint2[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 133, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 640, 47, -38, -13, 24, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 24, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 640, -38,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), -407, -133, -35, 0, 24, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -35, 24,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), -560,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimHeavyItemPickup_joint3[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -368, -27, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -368, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 24), -327, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), -358,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimHeavyItemPickup_joint5[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 324, -62, 313,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 304, -12, -75, -8, 407, 57,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 304, -75, 407,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -3, 6, 9,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 288, -4, -51, 7, 446, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 288, -51, 446,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPikachuAnimHeavyItemPickup_joint6[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -147, 236, 0, -202, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 345, 20, 120, -75, -483, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 406, 27, 37, -41, -624, -70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 37, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 406, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -624, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -624,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), -823, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 37, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 53, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 416, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 788, 4,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 53, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 125, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -829, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -887, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 796, 7, 176, 51, -1041, -153,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPikachuAnimHeavyItemPickup_joint7[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimHeavyItemPickup_joint8[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -163, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -527, -40, 0, 12, 0, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -527, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 24), -194, 12,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), -194,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimHeavyItemPickup_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimHeavyItemPickup_joint10[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -224, -12, 220, 5, 291, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), -450, 220, 291,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -450, 220, 291,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPikachuAnimHeavyItemPickup_joint11[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -200, -15, -171, -4, -344, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), -564, -171, -344,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -564, -171, -344,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPikachuAnimHeavyItemPickup_joint13[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -324, -62, 313,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -320, 2, -70, -4, 419, 65,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -320, -70, 419,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 6, 5, 9,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), -295, 7, -50, 5, 458, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -295, -50, 458,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPikachuAnimHeavyItemPickup_joint14[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 59, 1703, 1, 1311, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1588, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1189, 23, 1104, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1172, -1, 986, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 989, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 850, -14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1588, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 1597, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 989, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), 792, -4,
	ftAnimBlock(0, 25),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 836, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 834, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1589, -13, 790, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1570, -22, 737, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 841, 6, 1544, -26, 584, -152,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimHeavyItemPickup_joint16[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 21), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 17), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimHeavyItemPickup_joint17[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, -33, 0, -30, -406, -131,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -188, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -157, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -848, -324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1188, -284,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1478, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -191, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -425, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -161, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), -201, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1469, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -1070, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -444, -15, -977, 100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -280, 86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 124, 104,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -208, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -125, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -190, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -96, 28, -158, 31, 199, 75,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimHeavyItemPickup_joint19[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 946, 44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 933, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 824, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 763, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 784, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 934, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 884, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 917, 33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimHeavyItemPickup_joint21[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, 0, 127, 31, -353, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 233, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 182, -67, 31, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 106, -52, 198, 132,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 376, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 76, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 231, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 413, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 367, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -29, -44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 79, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 341, 22,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 403, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 129, -64,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 360, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 216, -57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -70, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -248, -75,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 75, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 92, 17, 179, -36, -321, -73,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimHeavyItemPickup_joint22[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 128, 21, -57, 13, -192, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 134, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 266, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -405, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -435, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -851, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 148, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 203, -17,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -859, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 183, 131,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 272, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 256, -4,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 186, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 56, -50,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 319, 70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 313, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 239, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 208, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 206, -2, 16, -40, 252, -61,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimHeavyItemPickup_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 807, 12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 899, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 978, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 1124, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1111, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 822, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 761, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 783, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 905, 122,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimHeavyItemPickup_joint25[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -6, -23, 284, -44, -484, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -492, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -232, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -93, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -96, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -104, 11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -475, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -458, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -260, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -257, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -215, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -114, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -95, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 73, 156,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -456, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -309, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -154, -31, -316, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -177, -22, 250, 176, -278, 37,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimHeavyItemPickup_joint26[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -887, -67, -122, -9, -495, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -887, 21, -122, 3, -495, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), -184, 32, 0, 4, 0, 18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 5, 0, 0,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTPikachuAnimHeavyItemPickup_joint27[56] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 25, -96, -32, 973,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), -34, 27,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 25, -98, 51, 717,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 8), -98, 15,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 25, 49, 712,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -6, -33, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), -778, -95, -36, 25, 638, 18, -434, -1446,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAX, 3), -778, -10,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 85, -383,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
