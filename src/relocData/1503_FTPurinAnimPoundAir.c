/* AnimJoint data for relocData file 1503 (FTPurinAnimPoundAir) */
/* 3296 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimPoundAir_joint1[84];
extern u16 dFTPurinAnimPoundAir_joint2[46];
extern u16 dFTPurinAnimPoundAir_joint3[102];
extern u16 dFTPurinAnimPoundAir_joint5[50];
extern u16 dFTPurinAnimPoundAir_joint6[170];
extern u16 dFTPurinAnimPoundAir_joint7[22];
extern u16 dFTPurinAnimPoundAir_joint9[154];
extern u16 dFTPurinAnimPoundAir_joint10[204];
extern u16 dFTPurinAnimPoundAir_joint11[24];
extern u16 dFTPurinAnimPoundAir_joint13[94];
extern u16 dFTPurinAnimPoundAir_joint14[130];
extern u16 dFTPurinAnimPoundAir_joint16[24];
extern u16 dFTPurinAnimPoundAir_joint18[168];
extern u16 dFTPurinAnimPoundAir_joint19[134];
extern u16 dFTPurinAnimPoundAir_joint21[198];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTPurinAnimPoundAir_joints[] = {
	(u32)dFTPurinAnimPoundAir_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimPoundAir_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimPoundAir_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimPoundAir_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPurinAnimPoundAir_joint6, /* [5] joint 6 */
	(u32)dFTPurinAnimPoundAir_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimPoundAir_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTPurinAnimPoundAir_joint10, /* [9] joint 10 */
	(u32)dFTPurinAnimPoundAir_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimPoundAir_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPurinAnimPoundAir_joint14, /* [13] joint 14 */
	(u32)dFTPurinAnimPoundAir_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPurinAnimPoundAir_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTPurinAnimPoundAir_joint19, /* [18] joint 19 */
	(u32)dFTPurinAnimPoundAir_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF02DC, /* [21] END */
};

/* Joint 1 */
u16 dFTPurinAnimPoundAir_joint1[84] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -209, -10, 10, 1, -4, -3, 554, -94, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -209, 15, 10, 0, -4, 2, 554, 98, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 200, 5, 8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, -1, 593, 9, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -5, -1, 547, -59, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), 200, -3, 8, 0, -5, 1, 547, 38, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 0, 600, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 130, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPurinAnimPoundAir_joint2[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, -641, -37, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, -641, 35, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 648, 8, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0, 648, -10, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, -268, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPurinAnimPoundAir_joint3[102] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -35, 309, -1,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 10), 3940, -33, 3946, -20,
	ftAnimSetValRateBlockT(FT_ANIM_SCAY, 4), 4613, 131,
	ftAnimSetValRateT(FT_ANIM_SCAY, 10), 4570, -151,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, -1, 312, -5, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 4), 4015, 110, 4020, 83,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4901, 418, 3242, 1, 4906, 358,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 9), 3857,
	ftAnimSetValRateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 4412, 2, 3857, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -37, 299, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 8, 312, 2, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4106, 8, 4100, -49, 4090, 15,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 23), 4096, 4096, 4096,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 312, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPurinAnimPoundAir_joint5[50] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -421, -470, 325,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -131, 210, -325, 105, 126, -144,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -131, -12, -325, -14, 126, -10,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -151, -5, -348, -6, 109, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), -151, -53, -348, -24, 109, 43,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -421, -470, 325,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPurinAnimPoundAir_joint6[170] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -911, -27, -163, -156, -585, -171,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -966, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1054, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -549, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -586, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -549, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -968, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -928, -54,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1045, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1013, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -568, -76, -1016, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -702, -18, -1257, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -605, 54, -1111, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1480, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -658, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -958, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -798, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -795, -2, -1471, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -921, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -1402, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -656, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -715, -12,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -917, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -895, -24,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1412, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1427, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -935, -74, -1369, 116,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1133, 41, -785, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -725, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -177, 25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1077, 42, -702, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -913, 3, -590, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -911, 1, -163, 13, -585, 5,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimPoundAir_joint7[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 35), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -6, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPurinAnimPoundAir_joint9[154] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 416, -492, 287, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 14), 4096, 11, 4096, 12, 4096, 12,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 104, -249, -222, 215, 46, -193,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 104, 38, -222, -181, 46, -77,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 156, -31, -472, -130, -60, -113,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 88, 3667, -287, -1053, -10, 636,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 1073, 764, -736, -634, 98, -430, 10402, 826, 10402, 810, 10378, 786,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 6161, -137, 6121, -220, 6061, -213,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 470, -1136, -604, 283, -225, -542,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 504, -147, -594, 23, -172, -15,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 21), 4096, -425, 4096, -496, 4096, -471,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 433, -130, -599, 109, -229, 23,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 325, -143, -444, 118, -140, 75,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 75, -153, -303, 93, -40, 79,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 113, 22, -315, 53, -31, 169,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4089, 4055, 4123,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 14), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 103, 172, -236, -100, 170, 182,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 416, -492, 287,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPurinAnimPoundAir_joint10[204] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2336, 73, 162, 285, 2617, 203,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 677, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2262, -213, 2820, -480,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2764, -224, 1656, -598,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2710, 41, 630, -36, 1624, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 682, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2680, 21, 1617, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -2704, -16, 1648, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2722, -370, 1682, -269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3445, -454, 759, 160, 1109, 191,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1299, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3631, -197, 2065, 482,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2117, 693,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3841, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3926, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4187, -102, 1206, -29, 3462, 717,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1269, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4131, 45, 3553, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -4045, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3617, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 3668, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1208, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1066, 4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3672, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 3895, 37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4046, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -4038, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4023, 27, 1072, 16, 3943, 75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1312, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -3933, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 4405, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4447, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 4225, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1291, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1439, 18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3942, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3944, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3944, 0, 1446, 6, 4226, 1,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimPoundAir_joint11[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 41), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPurinAnimPoundAir_joint13[94] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1282, 75, -1679,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 106, -21, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1799, 51, 152, 7, -1668, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1799, -8, 152, 0, -1668, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1718, 997, 156, 3, -1688, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3794, 844, 159, -7, -1727, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3407, -313, 141, -66, -1805, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3167, -907, 26, -37, -2057, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1592, -60, 67, 1, -1651, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 1592, -22, 67, 0, -1651, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 789, -77, 70, 0, -1471, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 585, 98, 71, 1, -1456, -41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1282, 75, -1679,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimPoundAir_joint14[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1851, -230, -1177, -30, 1399, 262,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1486, -6, -1342, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1837, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1852, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1840, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1481, -3, -1343, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 1581, 55, -1330, -19,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1783, -88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1410, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1631, 3, -1378, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1539, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1533, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1412, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), 1411, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1538, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 1619, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1535, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 23), -1521, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1504, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1446, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1421, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1932, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1623, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1468, -4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1473, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1466, -1, -1484, -10, 1945, 12,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimPoundAir_joint16[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPurinAnimPoundAir_joint18[168] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -510, 209, -372, 107, -2827, -244,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -243, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -138, 36, -3229, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -98, 45, -3225, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 279, 55, -3230, -39,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -216, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 322, -117, -81, 220, -3287, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 45, -40, 225, 238, -3267, 343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 240, 169, 395, -49, -2600, 442,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2404, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 399, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 126, -161,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 74, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2415, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -2398, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 74, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 72, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 399, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 395, -11,
	ftAnimBlock(0, 21),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 92, 32, -2400, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 175, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -3043, -41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 377, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 78, -61,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 106, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -173, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3078, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3180, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 7, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -248, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -279, -31, -180, -6, -3188, -7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimPoundAir_joint19[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1362, 19, 1179, 13, 1394, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 1308, 132, 1151, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1306, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1358, 115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1658, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1503, 166, 1206, 100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1410, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1628, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1621, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1687, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1333, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1246, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1631, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 1596, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1691, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 1658, -15,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1245, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 1429, 17,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1642, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1673, 41,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1604, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1679, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1442, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1350, -19,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1717, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1743, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1685, 5, 1339, -10, 1759, 15,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimPoundAir_joint21[198] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 54), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x280E, 0x01FE, 0x003B, 0x0174, 0xFF87, 0x0182, 0x0080, 0x4F00, 0x0E66, 0x0E66, 0x0E66, 0x2803, 0x0005, 0x01F7, 0x0004, 0x2805, 0x0009, 0x00B4, 0x0004, 0x2009, 0x0002, 0x01E3, 0xFFEC, 0x2009, 0x0001, 0x01DA, 0xFFF9, 0x2809, 0x0007, 0x01E8, 0x001F, 0x0801, 0x0002, 0x2003, 0x0001, 0x01FC, 0x0004, 0x2803, 0x0005, 0x0287, 0x00B1, 0x0801, 0x0003, 0x2005, 0x0001, 0x00B9, 0x001C, 0x2805, 0x0003, 0x00B6, 0xFF4E, 0x2009, 0x0001, 0x0221, 0x008A, 0x2809, 0x0002, 0x0406, 0x009B, 0x2003, 0x0001, 0x035F, 0x00AF, 0x2003, 0x0001, 0x03E5, 0xFF99, 0x200F, 0x0001, 0x0291, 0xFE66, 0xFFD2, 0xFF5E, 0x0435, 0x0007, 0x2805, 0x0004, 0xFF5D, 0xFFFB, 0x2809, 0x0009, 0x03F7, 0x0000, 0x2003, 0x0001, 0x00B0, 0xFF0D, 0x2003, 0x0001, 0x00A9, 0xFFFA, 0x2803, 0x0019, 0x00BE, 0x0012, 0x0801, 0x0002, 0x2005, 0x0001, 0xFF58, 0xFFFB, 0x2805, 0x0015, 0xFF72, 0x000C, 0x0801, 0x0004, 0x2009, 0x0001, 0x03FA, 0x0000, 0x2809, 0x0014, 0x0430, 0xFFFA, 0x0801, 0x0010, 0x2005, 0x0001, 0xFF84, 0x001A, 0x2805, 0x000A, 0x0112, 0xFFAF, 0x2003, 0x0001, 0x00D6, 0x001F, 0x2803, 0x0006, 0x0168, 0xFFB9, 0x0801, 0x0002, 0x2009, 0x0001, 0x0421, 0xFFE4, 0x2809, 0x0008, 0x00EF, 0xFFD0, 0x0801, 0x0003, 0x2003, 0x0001, 0x010E, 0xFFA9, 0x2803, 0x0005, 0x0049, 0xFFAF, 0x0801, 0x0002, 0x2005, 0x0001, 0x00B4, 0xFFA2, 0x2805, 0x0002, 0x000E, 0xFFCF, 0x0801, 0x0001, 0x2009, 0x0001, 0x00C7, 0xFFE8, 0x200F, 0x0001, 0xFFF1, 0xFFA7, 0xFFF3, 0xFFE4, 0x00BE, 0xFFF7, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
