/* AnimJoint data for relocData file 1343 (FTKirbyAnimCliffClimbQuick2) */
/* 1776 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimCliffClimbQuick2_joint1[18];
extern u16 dFTKirbyAnimCliffClimbQuick2_joint2[116];
extern u16 dFTKirbyAnimCliffClimbQuick2_joint3[20];
extern u16 dFTKirbyAnimCliffClimbQuick2_joint4[24];
extern u16 dFTKirbyAnimCliffClimbQuick2_joint6[64];
extern u16 dFTKirbyAnimCliffClimbQuick2_joint7[98];
extern u16 dFTKirbyAnimCliffClimbQuick2_joint8[16];
extern u16 dFTKirbyAnimCliffClimbQuick2_joint10[64];
extern u16 dFTKirbyAnimCliffClimbQuick2_joint11[106];
extern u16 dFTKirbyAnimCliffClimbQuick2_joint12[16];
extern u16 dFTKirbyAnimCliffClimbQuick2_joint14[32];
extern u16 dFTKirbyAnimCliffClimbQuick2_joint15[50];
extern u16 dFTKirbyAnimCliffClimbQuick2_joint17[8];
extern u16 dFTKirbyAnimCliffClimbQuick2_joint19[70];
extern u16 dFTKirbyAnimCliffClimbQuick2_joint20[50];
extern u16 dFTKirbyAnimCliffClimbQuick2_joint22[90];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimCliffClimbQuick2_joints[] = {
	(u32)dFTKirbyAnimCliffClimbQuick2_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimCliffClimbQuick2_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimCliffClimbQuick2_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimCliffClimbQuick2_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimCliffClimbQuick2_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimCliffClimbQuick2_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimCliffClimbQuick2_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimCliffClimbQuick2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimCliffClimbQuick2_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimCliffClimbQuick2_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimCliffClimbQuick2_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimCliffClimbQuick2_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimCliffClimbQuick2_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimCliffClimbQuick2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimCliffClimbQuick2_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimCliffClimbQuick2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF0196, /* [22] END */
};

/* Joint 1 */
u16 dFTKirbyAnimCliffClimbQuick2_joint1[18] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 599,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 120, 256,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 9), 360,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), 360,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimCliffClimbQuick2_joint2[116] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 1608, 178,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 2859, 94,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 4,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 12), 4096, 4096, 4096,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4,
	ftAnimSetValRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1456, 90, -107, -172,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1410, -465, -107, 168,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -465,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 168,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), 0, 49,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 1179, -585,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -585,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 987, -547,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 49,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 4), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 3216, 21,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -547,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 769, -676,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -676,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4915, 2048, 4915,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 13), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 337, -521,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -521,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 331, 225,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 3216, 4096, 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 225,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 568, 225,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 225,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 600, 67,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimCliffClimbQuick2_joint3[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 17), -268,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 4,
	ftAnimBlock(0, 13),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTKirbyAnimCliffClimbQuick2_joint4[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -268, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 178, 10,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 4,
	ftAnimBlock(0, 13),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimCliffClimbQuick2_joint6[64] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY), -120,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, -27, -357, 8, 178, 8, 0, -57, -120, 57,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -268, 21, -178, -10,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 17), -180,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 4,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 0, 38, 0, 38,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 4,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 17), 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 20, 0, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimCliffClimbQuick2_joint7[98] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 17), 3072,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX, 1), 4,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -447, -50, 40, 51, 1463, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -23, -92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1814, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -508, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -490, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -911, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -107, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -448, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1825, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2169, 215,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -962, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1264, -275,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1598, -311, -426, 49, 2420, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -2399, -39, -219, 0, 3178, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, -12, -220, -1, 3216, 38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTKirbyAnimCliffClimbQuick2_joint8[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimCliffClimbQuick2_joint10[64] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY), -120,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, -27, 357, -8, -178, -8, 0, 57, -120, 61,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 268, -21, 178, 10,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 17), 180,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 4,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 0, 38, 0, 38,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 4,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 17), 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -20, 0, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimCliffClimbQuick2_joint11[106] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 17), 3072,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX, 1), 4,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2056, 50, 1648, 52, -145, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1588, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 212, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 2118, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2098, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2519, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1507, -69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1199, -55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 221, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 557, 214,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2569, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2872, 275,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1157, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1382, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3207, 311, 810, 244,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 4008, 39, 1569, 66,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1385, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4021, 12, 1387, 2, 1608, 38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTKirbyAnimCliffClimbQuick2_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimCliffClimbQuick2_joint14[32] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 204, -120, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, -1072,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -804, 10, 0, 15, -1072, 5,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -625, 268, -982,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -804, 0, -1072,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTKirbyAnimCliffClimbQuick2_joint15[50] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 68, -38, -336, 16, -1, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -11, -48, 173, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -375, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -363, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -302, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -57, -34, 222, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -25, 1, 235, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 1, -302, 0, 237, 1,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimCliffClimbQuick2_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 21),
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimCliffClimbQuick2_joint19[70] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -209, 9, 159, -24, -2666, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -397, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 101, 6, -2863, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 102, -34, -2941, -107,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3279, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -114, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -394, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -309, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3313, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -3314, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -136, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -176, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -309, 0, -176, 0, -3313, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimCliffClimbQuick2_joint20[50] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1536, 36, 1270, 12, 1602, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 1622, 48, 1788, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 1222, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1229, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1307, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1669, 35, 1834, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 1630, 0, 1839, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1632, 1, 1305, -1, 1845, 6,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimCliffClimbQuick2_joint22[90] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 20), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x4F00, 0x1000, 0x1000, 0x1000, 0x200E, 0x00D2, 0xFFFA, 0xFF60, 0x0017, 0x0222, 0xFFDD, 0x200F, 0x0007, 0x015E, 0x003A, 0xFF9F, 0xFFFD, 0x0160, 0xFFC8, 0x200F, 0x0001, 0x01A0, 0x0021, 0xFFA0, 0x0025, 0x0113, 0xFF94, 0x2805, 0x0005, 0x0072, 0x0016, 0x2803, 0x0006, 0x014D, 0xFFFD, 0x2009, 0x0004, 0xFFC2, 0xFFDE, 0x2009, 0x0001, 0xFFA0, 0xFFE6, 0x2809, 0x0007, 0xFF9C, 0xFFFE, 0x2005, 0x0001, 0x0086, 0x0011, 0x2805, 0x0006, 0x00AF, 0x0002, 0x2003, 0x0001, 0x0149, 0xFFFB, 0x2003, 0x0005, 0x0134, 0x0004, 0x200F, 0x0001, 0x0135, 0x0001, 0x00B0, 0x0001, 0xFFA0, 0x0004, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
