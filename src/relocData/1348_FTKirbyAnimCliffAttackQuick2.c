/* AnimJoint data for relocData file 1348 (FTKirbyAnimCliffAttackQuick2) */
/* 3648 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimCliffAttackQuick2_joint1[24];
extern u16 dFTKirbyAnimCliffAttackQuick2_joint2[192];
extern u16 dFTKirbyAnimCliffAttackQuick2_joint3[22];
extern u16 dFTKirbyAnimCliffAttackQuick2_joint4[66];
extern u16 dFTKirbyAnimCliffAttackQuick2_joint6[94];
extern u16 dFTKirbyAnimCliffAttackQuick2_joint7[258];
extern u16 dFTKirbyAnimCliffAttackQuick2_joint8[14];
extern u16 dFTKirbyAnimCliffAttackQuick2_joint10[94];
extern u16 dFTKirbyAnimCliffAttackQuick2_joint11[260];
extern u16 dFTKirbyAnimCliffAttackQuick2_joint12[22];
extern u16 dFTKirbyAnimCliffAttackQuick2_joint14[12];
extern u16 dFTKirbyAnimCliffAttackQuick2_joint15[104];
extern u16 dFTKirbyAnimCliffAttackQuick2_joint17[14];
extern u16 dFTKirbyAnimCliffAttackQuick2_joint19[216];
extern u16 dFTKirbyAnimCliffAttackQuick2_joint20[138];
extern u16 dFTKirbyAnimCliffAttackQuick2_joint22[248];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimCliffAttackQuick2_joints[] = {
	(u32)dFTKirbyAnimCliffAttackQuick2_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimCliffAttackQuick2_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimCliffAttackQuick2_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimCliffAttackQuick2_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimCliffAttackQuick2_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimCliffAttackQuick2_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimCliffAttackQuick2_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimCliffAttackQuick2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimCliffAttackQuick2_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimCliffAttackQuick2_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimCliffAttackQuick2_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimCliffAttackQuick2_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimCliffAttackQuick2_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimCliffAttackQuick2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimCliffAttackQuick2_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimCliffAttackQuick2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF031B, /* [22] END */
};

/* Joint 1 */
u16 dFTKirbyAnimCliffAttackQuick2_joint1[24] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 1152,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), 960,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 15), 960,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 960, -319,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 12), 360,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), 360,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimCliffAttackQuick2_joint2[192] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 1608, 189,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4096, 4096,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 3,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 9), 3216,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 3,
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), -67, -183,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -31, 293,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 1,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), 1346, 129,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1230, -1007,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -1007,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 225,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 706, -761,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -761,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 628, -1626,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -1626,
	ftAnimSetValRateT(FT_ANIM_TRAY, 1), 300, -1282,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4915, 2048, 4915,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -1282,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 15), 3216,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 308, 124,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 124,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 35), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), 591, 124,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 600,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), 600,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 723,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1072, -214,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 780, 1305,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 1305,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 1200, 504,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 480,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 1320, -477,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 3891, 4505, 3891,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -477,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 1076, -752,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -752,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 884, -862,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -777,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4915, 2048, 4915,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 345, -724,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -642,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 331, 182,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 0, 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 225,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 568, 225,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 232,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimCliffAttackQuick2_joint3[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 27), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 3,
	ftAnimBlock(0, 24),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 12), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), -268,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimCliffAttackQuick2_joint4[66] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 4096, 4096, 4096,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ), -268, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 9), 0, 29, 0, 68,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_TRAZ, 1), 3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 268, 22,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 120, 106,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 3), 268, -74, 120, -106,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), 0, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -178, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -357, -39,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -536, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 268, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 6), 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimCliffAttackQuick2_joint6[94] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -26, -357, 36, 178, 31, 0, -56, -120, -56, -120, 84,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 9), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 178, 12, 178, -12, -120, -34, -120, 68, 0, 68,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 3,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 36), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -178, 0, -60, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 10), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 31), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 7), -178, 0, -60,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 9), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), -120,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 18), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 6), 268, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, -22, -120, 80, 0, 80,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimCliffAttackQuick2_joint7[258] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 39), 3072,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX, 1), 3,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 938, -33, -1303, 13, 72, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 666, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1202, 51, 4, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1136, -6, -41, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -28, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1214, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 642, 65, -1141, 109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -857, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 797, 706, -123, -614,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2056, 791, -1257, -773,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2339, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1014, -113, -1670, -253,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1775, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -980, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2332, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2497, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1799, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1909, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -978, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -907, 45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2435, -124, -1848, 118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2482, 721,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1584, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -863, 2, -1865, -678,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1084, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3600, 653, -2940, -647,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3790, 108, -3160, -139,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2697, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3818, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3723, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1116, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1058, 160,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3705, -38, -2601, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2576, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 3507, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3319, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3284, 568, -874, 96, -2708, -702,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1095, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4457, 668, -3982, -741,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4622, 434, -4190, -381,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5326, 449, -4746, -344,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 5535, 5,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4880, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -4838, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1172, -79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1369, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5531, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 5605, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5629, 23, -1387, -18, -4825, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTKirbyAnimCliffAttackQuick2_joint8[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 41), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimCliffAttackQuick2_joint10[94] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -26, 357, -36, -178, -31, 0, 56, -120, -56, -120, 90,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 9), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -178, -12, -178, 12, 120, 34, -120, 68, 0, 68,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 3,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 36), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 178, 0, 60, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 10), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 31), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 7), 178, 0, 60,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 120,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 9), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), -120,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 18), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 6), -268, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, 22, 120, -80, 0, 80,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimCliffAttackQuick2_joint11[260] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 39), 3072,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX, 1), 3,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2546, 33, 301, 16, -1535, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2274, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 405, 51, -1604, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 468, -6, -1651, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 464, 109, -1638, -65,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2252, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2405, -715, 611, 141, -1731, -623,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3684, -791, 748, -8, -2885, -773,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3948, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 594, -114, -3278, -244,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3407, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 628, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3940, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -4105, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3436, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3456, 117,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 630, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 701, 48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4044, 122,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -4095, -727,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3283, 131,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3478, -684,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 748, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 524, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5221, -651, -4561, -645,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5398, -102, -4768, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5426, 6, -4828, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -5334, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -4212, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 491, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 550, 160,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5315, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -4932, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4153, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -4191, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4869, -568, 738, 96, -4294, -702,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 513, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -6069, -675, -5595, -746,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -6219, -432, -5787, -379,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -6934, -454, -6354, -350,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -7129, -104, -6488, -85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -7167, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -6447, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 436, -78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 238, -35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -7214, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -7238, -23, 217, -21, -6433, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTKirbyAnimCliffAttackQuick2_joint12[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 37), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimCliffAttackQuick2_joint14[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	_FT_ANIM_CMD(11, 0, 1), 3,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimCliffAttackQuick2_joint15[104] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -92, 26, -72, 2, 291, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 53, 5, -79, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 344, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 343, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 244, -16,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 65, 22, -92, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 213, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -298, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 237, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 103, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 173, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 162, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -309, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -306, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 14, -118, 226, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -31, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 232, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 237, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 236, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 7, -302, 3, 237, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimCliffAttackQuick2_joint17[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 41), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimCliffAttackQuick2_joint19[216] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX), 6144,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 7), 6144,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX, 1), 1,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1587, -33, -1686, 21, -1187, -132,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1730, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1477, 123, -1743, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1336, 75, -1875, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1222, 43, -1878, 4,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 9), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1729, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1837, -26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1175, 50, -1873, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -964, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1733, -4,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 27), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1850, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1834, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -962, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -953, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1735, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1740, 175,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1829, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2172, -173, -1139, -101, -1386, 196,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1334, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1150, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2176, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1899, -52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1416, -84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1647, 147,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1153, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1427, -128,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1961, -30, -1444, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1960, 60, -1545, -3, -1339, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1840, 22, -1434, 42, -1657, -204,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1936, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1694, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1459, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1437, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1949, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1925, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1704, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1714, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 7, -1431, 6, -1704, 10,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimCliffAttackQuick2_joint20[138] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1492, 14, 1352, 66, 1348, -121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1518, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1426, -142, 855, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1231, 52, 791, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1532, 148, 1207, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1528, -2, 1201, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 1476, -25, 1175, -16,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 1518,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1501, -35,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1459, -6, 1173, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1483, 168,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1357, 30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1449, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1305, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1661, 155,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1766, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1388, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1382, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1402, 98, 1711, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1680, 54, 1871, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1688, 5, 1836, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1642, -13, 1849, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1302, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1629, -12, 1305, 3, 1841, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimCliffAttackQuick2_joint22[248] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 41), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x3F00, 0x1000, 0x1000, 0x1000, 0x4101, 0x0004, 0x1800, 0x5901, 0x0003, 0x4601, 0x0008, 0x1000, 0x1000, 0x5E01, 0x0003, 0x200E, 0x00F0, 0xFFE7, 0x0006, 0x0004, 0x011D, 0x0024, 0x280B, 0x0004, 0x00E4, 0x0087, 0x024A, 0x005A, 0x2805, 0x0008, 0xFFFB, 0xFFF3, 0x0801, 0x0001, 0x4101, 0x000E, 0x1800, 0x0801, 0x0003, 0x200B, 0x0001, 0x019D, 0xFFD0, 0x0298, 0xFF29, 0x280B, 0x0001, 0x0082, 0xFF7C, 0x009B, 0xFF50, 0x3E01, 0x0001, 0x1333, 0x1333, 0x4601, 0x0009, 0x1333, 0x1333, 0x200B, 0x0001, 0x0093, 0x000B, 0x0137, 0x008A, 0x2809, 0x0006, 0x01A2, 0x0003, 0x2803, 0x000D, 0x008C, 0x0009, 0x0801, 0x0001, 0x2005, 0x0001, 0xFFFB, 0x0000, 0x2805, 0x000B, 0x0004, 0x0008, 0x0801, 0x0004, 0x2009, 0x0001, 0x01A9, 0x0008, 0x2809, 0x0006, 0x01B2, 0x0000, 0x0801, 0x0001, 0x4701, 0x0006, 0x1000, 0x1000, 0x1000, 0x0801, 0x0005, 0x200F, 0x0001, 0x0095, 0x0059, 0x000D, 0xFFDB, 0x01B2, 0x010A, 0x2805, 0x0002, 0xFFB8, 0x0003, 0x4701, 0x0015, 0x1000, 0x1000, 0x1000, 0x200B, 0x0001, 0x013E, 0x001A, 0x03C8, 0x0106, 0x200B, 0x0001, 0x00CA, 0xFFB8, 0x03BF, 0xFFF0, 0x2809, 0x0003, 0x023F, 0xFEE6, 0x2803, 0x0004, 0x016E, 0xFFFB, 0x2005, 0x0001, 0xFFBF, 0x0009, 0x2805, 0x0007, 0x0164, 0xFFA4, 0x0801, 0x0002, 0x2009, 0x0001, 0x0112, 0xFEF8, 0x2809, 0x0004, 0xFFE4, 0x0098, 0x2003, 0x0001, 0x0144, 0xFFD1, 0x2003, 0x0003, 0x012C, 0x003E, 0x200F, 0x0001, 0x0173, 0x0027, 0x00DF, 0xFF7E, 0x00AF, 0x0098, 0x200F, 0x0001, 0x017B, 0xFFBF, 0x005F, 0xFFF2, 0x0113, 0xFF99, 0x200F, 0x0001, 0x00EF, 0xFFDD, 0x00C2, 0x001C, 0xFFE1, 0xFF33, 0x280D, 0x0003, 0x0070, 0x0003, 0xFFA7, 0xFFFC, 0x2003, 0x0002, 0x0148, 0x0010, 0x2003, 0x0001, 0x0155, 0x0006, 0x2803, 0x0004, 0x013D, 0xFFFA, 0x200D, 0x0001, 0x0078, 0x000B, 0xFFA1, 0xFFFD, 0x200D, 0x0003, 0x00AA, 0x000B, 0xFF9A, 0xFFFE, 0x200F, 0x0001, 0x0135, 0xFFF9, 0x00B0, 0x0006, 0xFF9D, 0x0002, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
