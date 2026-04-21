/* AnimJoint data for relocData file 613 (FTMarioAnimUTilt) */
/* 2800 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimUTilt_joint1[30];
extern u16 dFTMarioAnimUTilt_joint2[70];
extern u16 dFTMarioAnimUTilt_joint3[10];
extern u16 dFTMarioAnimUTilt_joint5[68];
extern u16 dFTMarioAnimUTilt_joint6[140];
extern u16 dFTMarioAnimUTilt_joint7[52];
extern u16 dFTMarioAnimUTilt_joint8[10];
extern u16 dFTMarioAnimUTilt_joint9[32];
extern u16 dFTMarioAnimUTilt_joint11[38];
extern u16 dFTMarioAnimUTilt_joint12[232];
extern u16 dFTMarioAnimUTilt_joint13[90];
extern u16 dFTMarioAnimUTilt_joint14[16];
extern u16 dFTMarioAnimUTilt_joint16[8];
extern u16 dFTMarioAnimUTilt_joint17[116];
extern u16 dFTMarioAnimUTilt_joint19[64];
extern u16 dFTMarioAnimUTilt_joint21[104];
extern u16 dFTMarioAnimUTilt_joint22[108];
extern u16 dFTMarioAnimUTilt_joint24[56];
extern u16 dFTMarioAnimUTilt_joint25[106];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimUTilt_joints[] = {
	(u32)dFTMarioAnimUTilt_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimUTilt_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimUTilt_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimUTilt_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimUTilt_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimUTilt_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimUTilt_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimUTilt_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimUTilt_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimUTilt_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimUTilt_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimUTilt_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimUTilt_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimUTilt_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimUTilt_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimUTilt_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimUTilt_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimUTilt_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTMarioAnimUTilt_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTMarioAnimUTilt_joint1[30] = {
	ftAnimSetVal(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 2), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 959,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 480, 639,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 4), 480,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -274,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), 0, -288,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 22), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 2), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimUTilt_joint2[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 223, 0, 0, 540, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 302, 421, 422, 0, 136,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 7), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 910, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 3440, 27, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 119,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), 0, 0, 540, -271, 0, -43,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -273,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 0, 420,
	ftAnimSetValT(FT_ANIM_ROTY, 10), 3440,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), -8,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), 0, 16,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, 540,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTMarioAnimUTilt_joint3[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -71, -790, -95, 0, 0, 0,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimUTilt_joint5[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 258, 110,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 508, 211, -90, 85, -503, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 842, 169, 515, 40, 179, 588,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 847, -210, -8, 139, 674, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -22, 1072, 9, 0, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 208, 13, 258, -26, 110, 3,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 73,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 241, 112,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 359,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 208, -53,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 258, 110,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimUTilt_joint6[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, 0, -300, 1, -272, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -300, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 18), 117, 13, -269, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 133, 48, -272, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -334, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 198, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -323, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -681, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -298, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -351, -152,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 161, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 397, 154,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -693, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -749, 5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 540, 139, -492, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 677, 176, -737, -58, -627, -174,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -924, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 893, 93, -841, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 863, 50, -811, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 995, 225, -940, -19, -942, -228,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1268, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1568, 177, -1547, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1670, 74, -1699, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1716, 35, -1812, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1741, 25, -1308, -39, -1880, -68,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimUTilt_joint7[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -197, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -322, -246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -502, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -492, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -312, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 130,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimUTilt_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTMarioAnimUTilt_joint9[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, -4, 176,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -357, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 201, 2, -4, 10, 176, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 83, -4, 176,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 201, -4, 176,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimUTilt_joint11[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 139, -209,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 12, 27, 436, -66, -202, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -31, -7, -322, -9, -162, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -221, -5, 139, 13, -209, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -221, 139, -209,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimUTilt_joint12[232] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1164, 112, 1056, -56, -1542, 90,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1164, -302, -1542, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1000, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1056, 353,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 9420, 8192, 8192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1657, -331, 1707, 96, -1980, -382,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1827, -675, 1249, -283, -2307, -715,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3008, -622, 1139, 74, -3410, -542,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3072, -68, 1397, 112, -3393, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3144, -36, 1364, -16, -3560, -83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3593, -32,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 9420, 8192, 8192,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -3122, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1364, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1231, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3624, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -3536, 49,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 4096, 4096, 4096,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3082, 67, -3475, 104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2924, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3328, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3319, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3279, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 12), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2893, -57, 1206, -66, -3256, -87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3140, -109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 985, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3454, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3574, -121,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -4300, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3257, -135,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -4218, -118,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4495, -161,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -4797, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4313, -81, 1021, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -4387, 9, 1059, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4785, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -4763, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4381, 5, 1056, -3, -4759, 3,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimUTilt_joint13[90] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 76,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -735, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -258, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -520, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -637, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -373, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -373, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -555, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -524, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -265, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -338, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -722, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -808, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -810, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTMarioAnimUTilt_joint14[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 16), 893,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 625, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 625,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimUTilt_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTMarioAnimUTilt_joint17[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1473, 122, -1377, 31, -1563, -152,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1738, 99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1490, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1684, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1569, -129,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1273, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1609, 139,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1295, 81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1637, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1648, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1296, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -1359, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1272, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 1341, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1642, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 17), -1505, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1352, 24, -1492, 32, -1357, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1613, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1370, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1773, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1739, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1585, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1568, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1487, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1473, -14, -1377, -6, -1563, 22,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimUTilt_joint19[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, 257,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 836, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 784, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 378, -315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 400, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 542, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 623, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 527, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 440, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -39,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTMarioAnimUTilt_joint21[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -212, -42, -11, -35, -156, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -166, 109, -2, 79, -6, 309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -20, 133, 96, 67, 384, 307,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 140, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 112, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 651, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 639, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -136, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 140, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -70, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 91, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -267, -11,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -156, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -282, 36,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -274, 0, -80, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -216, 7, -16, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -241, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -168, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, 4, -11, 5, -156, 12,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimUTilt_joint22[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, -78, 187, 45, 35, -130,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 48, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 233, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -191, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -185, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 194, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 54, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 271, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 229, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 74, 0,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 238, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 144, -76,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 269, -13, 75, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 131, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 212, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 87, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -127, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -80, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 16, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 164, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 190, 17, 195, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 10, 187, -8, 35, 19,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimUTilt_joint24[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 250,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 873, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 865, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 285, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 213, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 212, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 577, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 705, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 477, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -39,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTMarioAnimUTilt_joint25[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1712, 21, -1588, -26, -1827, -90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1581, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1454, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1898, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1746, 158,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1427, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1523, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1620, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1455, 0, -1428, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -1827, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -1634, -1,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1631, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 1715, -4,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1865, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1915, 42,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1630, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1591, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1872, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1840, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1712, -2, -1588, 3, -1827, 12,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
