/* AnimJoint data for relocData file 1346 (FTKirbyAnimCliffClimbSlow2) */
/* 2352 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimCliffClimbSlow2_joint1[18];
extern u16 dFTKirbyAnimCliffClimbSlow2_joint2[50];
extern u16 dFTKirbyAnimCliffClimbSlow2_joint3[20];
extern u16 dFTKirbyAnimCliffClimbSlow2_joint4[44];
extern u16 dFTKirbyAnimCliffClimbSlow2_joint6[66];
extern u16 dFTKirbyAnimCliffClimbSlow2_joint7[154];
extern u16 dFTKirbyAnimCliffClimbSlow2_joint8[14];
extern u16 dFTKirbyAnimCliffClimbSlow2_joint10[66];
extern u16 dFTKirbyAnimCliffClimbSlow2_joint11[126];
extern u16 dFTKirbyAnimCliffClimbSlow2_joint12[14];
extern u16 dFTKirbyAnimCliffClimbSlow2_joint14[106];
extern u16 dFTKirbyAnimCliffClimbSlow2_joint15[68];
extern u16 dFTKirbyAnimCliffClimbSlow2_joint17[14];
extern u16 dFTKirbyAnimCliffClimbSlow2_joint19[108];
extern u16 dFTKirbyAnimCliffClimbSlow2_joint20[114];
extern u16 dFTKirbyAnimCliffClimbSlow2_joint22[42];
extern u16 dFTKirbyAnimCliffClimbSlow2_joint23[106];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimCliffClimbSlow2_joints[] = {
	(u32)dFTKirbyAnimCliffClimbSlow2_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimCliffClimbSlow2_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimCliffClimbSlow2_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimCliffClimbSlow2_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimCliffClimbSlow2_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimCliffClimbSlow2_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimCliffClimbSlow2_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimCliffClimbSlow2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimCliffClimbSlow2_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimCliffClimbSlow2_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimCliffClimbSlow2_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimCliffClimbSlow2_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimCliffClimbSlow2_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimCliffClimbSlow2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimCliffClimbSlow2_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimCliffClimbSlow2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTKirbyAnimCliffClimbSlow2_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimCliffClimbSlow2_joint1[18] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 151,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 14), 120, 110,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 12), 360, 106,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), 360,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimCliffClimbSlow2_joint2[50] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 600,
	ftAnimSetValRate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 21, 4096, -86, 4096, 21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 14), 4300, 3276, 4300,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 630, -68,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 480, 18,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 660, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 480, -43,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4300, 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 600, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimCliffClimbSlow2_joint3[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), -268, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 12), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTKirbyAnimCliffClimbSlow2_joint4[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 178, 54, 0, 34,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 446, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 178, -6, 268, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 178, -3, 89, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 134, -16, 0, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimCliffClimbSlow2_joint6[66] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 60, -60,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 178, 20, -268, -37, -536, 13, -180, 25,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -357, 6, -357, 19,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), -120, 18, 0, -18, -60, 18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 178, -14, -178, 14, -268, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 12), 89, -9, -89, 9, -89, 14, -120, 53, 0, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 12), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimCliffClimbSlow2_joint7[154] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2946, 44, -1351, 107, 1526, -99,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1139, 15,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 26), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2901, 114, 1426, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2717, 40, 1023, -374,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2975, -91, 572, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1211, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1085, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3002, -10, 542, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -3111, -74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 743, 85,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1073, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1156, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3196, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3341, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 830, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 730, 21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3295, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -3569, -153,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1171, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1196, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 757, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1589, 35,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3728, -158,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -4078, 24,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1272, -69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1372, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4040, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4021, 19, -1391, -18, 1608, 19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTKirbyAnimCliffClimbSlow2_joint8[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 31), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimCliffClimbSlow2_joint10[66] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 60,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 178, 20, 268, 37, 536, -13, 180, -25, -60, -50,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 357, 6, 357, -25,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 120, -18, 0, -18, -180, 18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 268, -12, 268, -12, 178, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 12), 134, -14, 134, -14, 134, -9, 120, -53, 0, 79,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 12), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimCliffClimbSlow2_joint11[126] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2946, -16, 1351, -25, 1526, -45,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 960, -6,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 26), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 2832, 33, 780, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2866, -4, 524, -245,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 2623, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 471, 119,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 953, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1055, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2695, 85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 3350, 70,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 587, 99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1254, 117,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3416, 74, 1055, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 3990, 101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1280, 66,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1369, 104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1589, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4064, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4038, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1339, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1375, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4021, -17, 1391, 15, 1608, 19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTKirbyAnimCliffClimbSlow2_joint12[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimCliffClimbSlow2_joint14[106] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 88, 23, -42, -83, -27, 94,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 204, -120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, -730, 36, 692, -15, -734,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1372, -687, 1343, 608, -1495, -692,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1286, 105, 1253, -130, -1400, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1161, -886, 1082, -282, -1234, -859,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3058, 250, 687, -230, -3119, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -659, 1166, 621, -113, -688, 1143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -725, -59, 460, -107, -833, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -898, -11, 190, -50, -1197, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -804, 13, 107, 0, -1072, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 188, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -793, -1053,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -804, 0, 0, -13, -1072, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -804, 0, -1072,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTKirbyAnimCliffClimbSlow2_joint15[68] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -47, -7, -329, 0, 174, 9,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -115, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -239, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 461, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 511, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 241, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -121, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -26, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -284, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -301, -1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 248, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 239, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 2, -302, 0, 237, -1,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimCliffClimbSlow2_joint17[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 31), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimCliffClimbSlow2_joint19[108] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -41, 8, 222, 4, -2507, 11,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -267, -32, 82, -44, -2690, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -311, -77, 23, -80, -2673, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -284, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2573, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -759, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -817, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -685, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -306, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -361, 54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2648, -159,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3214, -210,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -406, 184, -236, 104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -306, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -174, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3311, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -3315, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -306, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -309, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -309, 0, -176, -1, -3313, 1,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimCliffClimbSlow2_joint20[114] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 50, 5, 329, 21, 178, 15,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 563, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -28, -82, 144, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -118, -78, 35, -98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -152, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -207, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 530, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 310, -81,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -126, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -265, -4, -261, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -41, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 260, -36, -236, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 262, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -40, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 88, 74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 163, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -39, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 24, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 273, 11, 181, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 303, 0, 234, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -2, 302, 0, 233, -1,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimCliffClimbSlow2_joint22[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 337, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 422, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 209, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -104,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTKirbyAnimCliffClimbSlow2_joint23[106] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1566, 10, -1386, 0, -895, 23,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -774, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -920, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1612, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1734, -102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1744, 45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -802, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1163, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -913, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1332, -46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1552, -287,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1668, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1712, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1775, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1359, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1297, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1671, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1709, 1,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1780, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1783, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, -1, -1785, -1, -1708, 0,
	ftAnimEnd(),
};
