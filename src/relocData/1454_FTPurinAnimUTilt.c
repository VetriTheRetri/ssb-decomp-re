/* AnimJoint data for relocData file 1454 (FTPurinAnimUTilt) */
/* 2976 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimUTilt_joint1[38];
extern u16 dFTPurinAnimUTilt_joint2[30];
extern u16 dFTPurinAnimUTilt_joint3[90];
extern u16 dFTPurinAnimUTilt_joint5[36];
extern u16 dFTPurinAnimUTilt_joint6[224];
extern u16 dFTPurinAnimUTilt_joint7[56];
extern u16 dFTPurinAnimUTilt_joint9[36];
extern u16 dFTPurinAnimUTilt_joint10[216];
extern u16 dFTPurinAnimUTilt_joint11[32];
extern u16 dFTPurinAnimUTilt_joint13[10];
extern u16 dFTPurinAnimUTilt_joint14[78];
extern u16 dFTPurinAnimUTilt_joint16[30];
extern u16 dFTPurinAnimUTilt_joint18[166];
extern u16 dFTPurinAnimUTilt_joint19[160];
extern u16 dFTPurinAnimUTilt_joint21[30];
extern u16 dFTPurinAnimUTilt_joint22[212];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTPurinAnimUTilt_joints[] = {
	(u32)dFTPurinAnimUTilt_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimUTilt_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimUTilt_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimUTilt_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPurinAnimUTilt_joint6, /* [5] joint 6 */
	(u32)dFTPurinAnimUTilt_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimUTilt_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTPurinAnimUTilt_joint10, /* [9] joint 10 */
	(u32)dFTPurinAnimUTilt_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimUTilt_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPurinAnimUTilt_joint14, /* [13] joint 14 */
	(u32)dFTPurinAnimUTilt_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPurinAnimUTilt_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTPurinAnimUTilt_joint19, /* [18] joint 19 */
	(u32)dFTPurinAnimUTilt_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPurinAnimUTilt_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTPurinAnimUTilt_joint1[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 600,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 1020, 560,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 1020, -159,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 900, -160,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 900,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 900, -299,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPurinAnimUTilt_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 0, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 0, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPurinAnimUTilt_joint3[90] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 312, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 12), 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), -268, -44, 3686, -136, 4300, 68, 4300, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAZ, 4), -268, 223, 3686, 204, 4300, -204,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 4), 4300,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAZ, 2), 1072, 223, 4300, 204, 3686, -204,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 2), 4300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 1072, -89, 4300, -25, 4300, -25, 3686, 51,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 312, -71, 4198, -255, 3891, 153,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 4), 4198,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4300, -25, 3276, -25, 4300, 51,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 0, 312, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPurinAnimUTilt_joint5[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 178, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 178, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 268, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 268, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPurinAnimUTilt_joint6[224] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, -867, -1387, 169, 1608, 383,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX, 2), 2048, -682,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1671, -1165, -1218, 153, 1991, 697,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3134, -804, -1081, 53, 3003, 600,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 2048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3280, -102, -1111, -25, 3193, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3339, -16, -1133, -7, 3289, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1082, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3312, 105, 3258, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3129, -35, 2997, -68,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 2048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3383, -435, -1064, -48, 3120, 335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4000, -186, -1178, -41, 3668, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3756, 140, -1147, 14, 3357, -177,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1151, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3718, -32, 3314, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -4000, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3453, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1178, -10, 3668, 256,
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 2048, 511,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4241, -310, -1173, 32, 3967, 435,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4621, -333, -1114, 30, 4538, 548,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 5306, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4909, -245, -1111, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -5112, 41, -1041, 88,
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 4096, 512,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4827, 407, -935, 24, 5100, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4298, 380, -992, -194, 4843, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4065, 138, -1324, -188, 4779, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4021, 32, -1369, -43, 4825, 28,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4001, 8, -1411, -17, 4836, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -4014, -8, 4829, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1404, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1393, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4021, -6, -1391, 2, 4825, -4,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimUTilt_joint7[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPurinAnimUTilt_joint9[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -178, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -178, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -268, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -268, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPurinAnimUTilt_joint10[216] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 867, 1391, -172, 1608, 383,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX, 2), 2048, -682,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1671, 1162, 1218, -154, 1992, 693,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3128, 801, 1082, -53, 2996, 597,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 2048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3274, 105, 1111, 25, 3187, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3338, 20, 1133, 7, 3288, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3316, -102, 1126, -25, 3263, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3133, 33, 1081, -31, 3002, -71,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 2048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3383, 433, 1064, 48, 3120, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4000, 186, 1178, 40, 3668, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3755, -139, 1144, -16, 3357, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3721, 36, 1146, 3, 3317, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4000, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1152, 16, 3462, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1178, 5, 3668, 224,
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 2048, 511,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4194, 225, 1163, -57, 3911, 308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4451, 269, 1064, -98, 4284, 375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4732, 98, 966, -82, 4662, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4649, -237, 898, 9, 4626, -139,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1161, 171,
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 4096, 512,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4257, -260, 4384, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4128, -102, 4555, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4052, -53, 1328, 102, 4739, 134,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 4015, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1365, 42, 4825, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 4832, -9,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1412, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1393, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4021, 5, 1391, -2, 4825, -7,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimUTilt_joint11[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPurinAnimUTilt_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimUTilt_joint14[78] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -21, 30, -302, 63, 233, -57,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 16, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -188, 28, 133, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -181, 3, 127, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -214, 0, 150, -2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 17, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -11, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -213, 1, 149, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -256, -29, 187, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -287, -22, 217, 22,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -302, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -21, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, -302, 237,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimUTilt_joint16[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPurinAnimUTilt_joint18[166] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, 82, 1785, -53, -1708, 310,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1835, 93, 1731, -69, -1397, 344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1731, 58, 1646, -46, -1019, 215,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1723, -5, 1645, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -966, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -959, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1731, -3, 1652, 0, -984, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1729, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1646, -30, -1019, -88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1307, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1592, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1788, -39, 1538, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1788, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1529, -3, -1335, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1532, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1307, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1781, 10, -1297, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1759, -24, -1307, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1524, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1593, 72,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1804, -51, -1403, -121,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1664, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1918, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1682, 81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1785, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1708, -19,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 2), -1704,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1918, 0, 1785, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1918, 1785,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 2), -1704,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1918, 1785,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimUTilt_joint19[160] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1629, -30, 1305, 63, 1841, -57,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1699, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1589, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1419, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1431, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1419, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1697, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1586, -47, 1741, 355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1494, -43, 1371, 0, 2408, 670,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, 8, 1419, 33, 3083, 360,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1498, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1437, 10, 3130, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1368, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 3117, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3083, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1501, 13, 2992, -135,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1532, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2812, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2607, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1518, -12, 1372, -8, 2451, -145,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1541, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1303, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2317, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2129, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1613, 44, 1929, -144,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 3), 1629,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1305, 1, 1841, -43,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 3), 1305,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1841,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1841,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1629, 1841,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1629, 0, 1305, 0, 1841, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimUTilt_joint21[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPurinAnimUTilt_joint22[212] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1298, -82, -1785, 53, -1708, 310,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1380, -93, -1731, 69, -1397, 344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1485, -59, -1646, 47, -1019, 204,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1499, 2, -1638, -2,
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 4096, 1023,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -988, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1010, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1019, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1493, 6, -1642, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1490, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1646, 101,
	ftAnimSetValRateT(FT_ANIM_SCAX, 2), 7168, 682,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1439, 110, -846, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1556, -47, -1425, 0, -641, 128,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_SCAX, 4), -1631, -23, 6144, -767,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1441, -9, -590, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1424, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -486, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -420, 52,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1662, -37, -1403, 4, -380, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1461, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1705, 3, -326, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -368, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1656, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1602, 178, -1526, -199,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1299, 148, -1860, -275, -498, -360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1305, -57, -2077, -39, -1088, -511,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1415, 3, -1940, 146, -1520, -309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, 52, -1785, 87, -1708, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1310, -5, -1764, 9, -1723, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1302, 5, -1713, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1766, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1778, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, 3, -1785, -6, -1708, 4,
	ftAnimEnd(),
	0x0000, 0x0000,
};
