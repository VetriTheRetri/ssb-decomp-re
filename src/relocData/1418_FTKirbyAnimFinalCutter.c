/* AnimJoint data for relocData file 1418 (FTKirbyAnimFinalCutter) */
/* 3984 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimFinalCutter_joint1[28];
extern u16 dFTKirbyAnimFinalCutter_joint2[88];
extern u16 dFTKirbyAnimFinalCutter_joint3[22];
extern u16 dFTKirbyAnimFinalCutter_joint4[72];
extern u16 dFTKirbyAnimFinalCutter_joint6[118];
extern u16 dFTKirbyAnimFinalCutter_joint7[256];
extern u16 dFTKirbyAnimFinalCutter_joint8[14];
extern u16 dFTKirbyAnimFinalCutter_joint10[132];
extern u16 dFTKirbyAnimFinalCutter_joint11[258];
extern u16 dFTKirbyAnimFinalCutter_joint12[30];
extern u16 dFTKirbyAnimFinalCutter_joint14[110];
extern u16 dFTKirbyAnimFinalCutter_joint15[188];
extern u16 dFTKirbyAnimFinalCutter_joint17[14];
extern u16 dFTKirbyAnimFinalCutter_joint19[192];
extern u16 dFTKirbyAnimFinalCutter_joint20[194];
extern u16 dFTKirbyAnimFinalCutter_joint22[8];
extern u16 dFTKirbyAnimFinalCutter_joint23[222];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimFinalCutter_joints[] = {
	(u32)dFTKirbyAnimFinalCutter_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimFinalCutter_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimFinalCutter_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimFinalCutter_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimFinalCutter_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimFinalCutter_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimFinalCutter_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimFinalCutter_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimFinalCutter_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimFinalCutter_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimFinalCutter_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimFinalCutter_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimFinalCutter_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimFinalCutter_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimFinalCutter_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimFinalCutter_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTKirbyAnimFinalCutter_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimFinalCutter_joint1[28] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 22), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 600, 4800,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 7200, 3670,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 7), 8400,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 7200, -3536,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 11), 0, -6080,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimFinalCutter_joint2[88] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 600, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 22), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 34), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 480, 4505, 3276, 4505,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 17), 480, 4505, 3276, 4505,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 600, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 840, 160,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 0, 3686, 4915, 3686,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 840, -112,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 446,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 16), 3216,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 4096, 4096, 4096,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 600, -128,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 15), 3216,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 20), 3216,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 11), 3216, 600,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimFinalCutter_joint3[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 17), -268, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 38), 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimFinalCutter_joint4[72] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -268, -13,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 20), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), 178, -268,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 268, 212,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 268, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -536, -67, 580, 26, -357, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -536, 47, 580, -34, -357, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 268, 72,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 402,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimFinalCutter_joint6[118] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -89, -4, -178, -8,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 22), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 47), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), -180, -60,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 19), -180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 17), -89, -178, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 0, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 2), -89, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -178, -7,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 12), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 0, -120, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 5, -178, 21,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 23), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 178, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 89, -120, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 6), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -76, 178, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), -60,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, -90, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 268, -446, -223, 0, -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 536, -446, -357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 536, -446, -357, 0, -90, -180,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimFinalCutter_joint7[256] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, -140, -1387, 141, 1608, -94,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2272, 94, -1245, 244, 1514, -516,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2602, 430, -899, 84, 575, -752,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3132, 274, -1076, -100, 9, -288,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 57), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3152, 16, -1101, -20, -1, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 3083, 37, -1086, 10, 54, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3127, 445, -1077, 59, 15, -138,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -759, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 4908, 573, -979, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 5120, 80, -994, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1012, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5070, -5, -697, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -884, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5109, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 5246, 9,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -882, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -827, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5246, -84, -712, 257,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 5029, 14, -15, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1015, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1195, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5107, 111, 48, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 5521, 415,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -132, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1197, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1365, -71,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 6083, 488,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 6498, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 6560, -35, -106, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -44, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 6427, -303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5952, -397,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5631, -82, -1444, 79, -2, 331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5788, 169, -1206, 173, 619, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5970, 90, -1097, 54, 310, -154,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 310, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1097, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5970, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 5970, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 314, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 311, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1097, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1097, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5970, 0, -1097, 0, 310, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTKirbyAnimFinalCutter_joint8[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 59), -6, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimFinalCutter_joint10[132] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -89, -4, -89, -4,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 22), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 48), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 120, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 17), -89, -89, 120, -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 180, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -89, 67, 89, 111,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 44, 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 134,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 60, -120, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 268, 111, 89, -111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -89, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 268,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 268, -21, -89, -5,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 20), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), 60, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -89, -20, -178, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 7), 120, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 6), 120, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 76, -178, 25,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), -60,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, -90, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 446, 223, 0, 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 536, 446, 357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 536, 446, 357, 0, -90, -180,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimFinalCutter_joint11[258] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 350, 1391, -266, 1608, 222,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1154, 903, 1124, 29, 1830, 470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2610, 786, 1449, 80, 2550, 464,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2767, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2728, 57, 1284, -82,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 57), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2726, -1, 1284, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 2725, 2, 1303, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2769, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 2743, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2728, -138, 1284, -195, 2759, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2447, -327, 913, -128, 2657, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2073, -903, 1028, 31, 2381, 550,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 640, -879, 976, 152, 3757, 391,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 314, -161, 1333, 198, 3163, -313,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 323, 4, 1389, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3131, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3127, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 3193, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 328, 4, 1391, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1278, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 337, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 361, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1032, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3226, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 3270, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1239, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1362, 72,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 912, -330, 3174, -94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 3166, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -76, -252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -133, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3, 305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 477, 399,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 802, 84, 1444, -77, 3214, 334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 645, -168, 1206, -172, 3836, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 466, -91, 1099, -54, 3531, -154,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3527, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1099, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 463, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 463, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3531, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 3527, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1097, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1096, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 463, 0, 1097, 0, 3527, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTKirbyAnimFinalCutter_joint12[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -499,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -499, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -420, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 55), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimFinalCutter_joint14[110] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, -1072,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 204, -120, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -804, 0, -1072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -804, 25, 0, 53, -1072, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -344, 290, 963, 731, -825, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -222, -734, 1462, -230, -896, -736,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1813, 452, 502, -502, -2298, 785,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 681, 457, 675,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 681, 457, 675,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -1787, -192, 576, 22, -2073, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1436, 732, 707, -111, -1839, 608,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -322, 588, 352, -353, -856, 531,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -259, -162, 0, -166, -777, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -647, -34, 18, 7, -774, -27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -328, 15, -832,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 15, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), -328, -836,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTKirbyAnimFinalCutter_joint15[188] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, 59, -302, -20, 237, -116,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 243, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -317, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 120, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -120, -181,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -233, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 243, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 242, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -231, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -233, -4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -317, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -324, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 243, -49, -237, 84,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -21, -82, 233, 189,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -302, 107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 16, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -20, 11, 315, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 255, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 92, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 36, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -205, -65,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 257, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 32, -61,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -263, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -407, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 119, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -172, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -34, -69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -447, -55,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -426, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -430, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -486, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -300, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -300, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -168, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -172, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -169, 2, -429, 1, -306, -5,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimFinalCutter_joint17[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 59), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimFinalCutter_joint19[192] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1298, -24, 1785, -2, -1704, 85,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 1204, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 1769, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1403, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1276, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1270, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1270, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1274, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1213, 29, -1272, -107,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1708, -123,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1505, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1748, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1785, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2063, 257, -1735, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2026, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 2336, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1597, 133, 2363, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2049, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 2077, -81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2222, -137,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1729, 75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1986, -104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1388, -51,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1669, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1446, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1349, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1473, 49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1999, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1825, 49,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1432, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -1470, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1870, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1765, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1517, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1482, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1767, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1771, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1481, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1483, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1485, 2, 1765, -5, -1470, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimFinalCutter_joint20[194] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1632, 61, 1305, -29, 1845, 83,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1213, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1925, -1, 2171, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1925, 0, 2170, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 1928, 0, 2170, 4,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1223, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1408, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1925, -69, 2171, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1629, -162, 1841, -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1464, -16, 1497, -209,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1427, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1596, 83, 1597, 110,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1671, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1631, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1560, -52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1430, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1376, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1671, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1399, -55,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1493, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1423, 52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1394, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1498, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1347, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1174, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1474, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1730, 58,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1398, -107,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1202, 92,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1171, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1177, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1777, 25, 1302, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1780, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1308, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1309, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1308, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1781, 0, 1179, 2, 1307, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimFinalCutter_joint22[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTKirbyAnimFinalCutter_joint23[222] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1298, 78, 1431, -26, 1512, 73,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1182, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1535, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1586, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1846, 192,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1966, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1256, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1309, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1536, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1541, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1969, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1969, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1306, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1256, 65,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1534, -90, 1966, -130,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1508, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1139, -21, 1359, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1298, -396, 1431, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1932, -538, 1805, 127, 1993, 487,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2375, -235, 1686, -84, 2482, 258,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1649, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2403, -19, 2510, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -2368, 28, 2483, -30,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1686, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1720, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2328, 76, 2442, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1342, 94, 1729, -72,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1585, -123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1332, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1288, 37, 1679, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1764, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1456, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1517, -26, 1345, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -1484, 0, 1447, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1750, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1746, 2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1483, 0, 1445, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1483, -1, 1445, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1485, -2, 1451, 5, 1750, 3,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
