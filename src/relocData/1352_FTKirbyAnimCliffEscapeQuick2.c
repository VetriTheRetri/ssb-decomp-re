/* AnimJoint data for relocData file 1352 (FTKirbyAnimCliffEscapeQuick2) */
/* 2560 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimCliffEscapeQuick2_joint1[24];
extern u16 dFTKirbyAnimCliffEscapeQuick2_joint2[50];
extern u16 dFTKirbyAnimCliffEscapeQuick2_joint3[68];
extern u16 dFTKirbyAnimCliffEscapeQuick2_joint4[24];
extern u16 dFTKirbyAnimCliffEscapeQuick2_joint5[26];
extern u16 dFTKirbyAnimCliffEscapeQuick2_joint7[58];
extern u16 dFTKirbyAnimCliffEscapeQuick2_joint8[168];
extern u16 dFTKirbyAnimCliffEscapeQuick2_joint9[14];
extern u16 dFTKirbyAnimCliffEscapeQuick2_joint11[58];
extern u16 dFTKirbyAnimCliffEscapeQuick2_joint12[166];
extern u16 dFTKirbyAnimCliffEscapeQuick2_joint13[16];
extern u16 dFTKirbyAnimCliffEscapeQuick2_joint15[42];
extern u16 dFTKirbyAnimCliffEscapeQuick2_joint16[120];
extern u16 dFTKirbyAnimCliffEscapeQuick2_joint18[14];
extern u16 dFTKirbyAnimCliffEscapeQuick2_joint20[120];
extern u16 dFTKirbyAnimCliffEscapeQuick2_joint21[124];
extern u16 dFTKirbyAnimCliffEscapeQuick2_joint23[140];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTKirbyAnimCliffEscapeQuick2_joints[] = {
	(u32)dFTKirbyAnimCliffEscapeQuick2_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimCliffEscapeQuick2_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimCliffEscapeQuick2_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimCliffEscapeQuick2_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimCliffEscapeQuick2_joint5, /* [4] joint 5 */
	(u32)dFTKirbyAnimCliffEscapeQuick2_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTKirbyAnimCliffEscapeQuick2_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimCliffEscapeQuick2_joint9, /* [8] joint 9 */
	(u32)dFTKirbyAnimCliffEscapeQuick2_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTKirbyAnimCliffEscapeQuick2_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimCliffEscapeQuick2_joint13, /* [12] joint 13 */
	(u32)dFTKirbyAnimCliffEscapeQuick2_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTKirbyAnimCliffEscapeQuick2_joint16, /* [15] joint 16 */
	(u32)dFTKirbyAnimCliffEscapeQuick2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimCliffEscapeQuick2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTKirbyAnimCliffEscapeQuick2_joint21, /* [20] joint 21 */
	(u32)dFTKirbyAnimCliffEscapeQuick2_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF0242, /* [23] END */
};

/* Joint 1 */
u16 dFTKirbyAnimCliffEscapeQuick2_joint1[24] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 533,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 120, 432,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 960, 1120,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), 4800, 2080,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 1280,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 4800,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimCliffEscapeQuick2_joint2[50] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 600, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 300, 4915, 2048, 4915,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, -204, 4096, 512, 4096, -204,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 600, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 480, 4300, 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 600, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimCliffEscapeQuick2_joint3[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 1608, 189,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 3216, 241,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 8,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 785, -32, 7, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 757, -265, 0, -10,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -264,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 6), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 6433, 804,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 623, -436,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -393,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 376, -389,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -379,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 176, -1133,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -1120,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 16084, 223,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 16084,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimCliffEscapeQuick2_joint4[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 25), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 8,
	ftAnimSetValAfter(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimBlock(0, 17),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimCliffEscapeQuick2_joint5[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -268,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 0, 17,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 8,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimCliffEscapeQuick2_joint7[58] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ | FT_ANIM_TRAY), 178, -120,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, -26, -357, -5, 0, -28, -120, 84,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, -60, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 8,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -536, -11, -357, -35,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 16), -60,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -536, -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -536, 26, -357, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 10), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimCliffEscapeQuick2_joint8[168] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 15), 3072,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX, 1), 8,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1056, -209, -377, -2, -276, 180,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -410, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 846, -111, -95, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 834, -11, -94, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 848, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -115, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -361, -13, -68, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 744, -76, -437, 38, -239, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 696, 51, -285, -9, 23, -54,
	ftAnimSetValRateT(FT_ANIM_SCAX, 10), 3072, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 848, 72, -455, -45, -348, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 785, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -375, 52, -48, 135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -138, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -394, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 819, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 864, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -84, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -80, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -392, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -405, -12,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -92, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -53, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 890, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 809, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -413, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -226, 19,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -15, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -5, -217, 9, 0, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimCliffEscapeQuick2_joint9[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimCliffEscapeQuick2_joint11[58] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ | FT_ANIM_TRAY), -178, -120,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, -26, 357, 5, 0, 28, -120, 90,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, 60, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 8,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 536, 11, 357, 35,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 16), 60,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 536, 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 536, -26, 357, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 10), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimCliffEscapeQuick2_joint12[166] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 15), 3072,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX, 1), 8,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 551, 210, 1230, 1, 1331, 181,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1198, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 761, 111, 1513, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 774, 11, 1513, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 759, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1493, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1243, -13, 1539, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 863, 76, 1171, 39, 1369, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 912, -52, 1323, -10, 1632, -55,
	ftAnimSetValRateT(FT_ANIM_SCAX, 10), 3072, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 759, -72, 1149, -45, 1259, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 823, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1232, 54, 1560, 135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1469, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1220, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 788, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 743, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1523, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1527, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1217, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1209, -10,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1514, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1554, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 718, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 798, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1201, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1378, 18,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1593, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 5, 1387, 9, 1608, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimCliffEscapeQuick2_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTKirbyAnimCliffEscapeQuick2_joint15[42] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 204, -120, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -274, -7, 276, 36, -636, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -867, -59, 324, 4, -544, 9,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -867, 324, -544,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -867, 3, 324, -16, -544, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -804, 0, -1072,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimCliffEscapeQuick2_joint16[120] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 139, -18, -312, 9, -48, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 129, 98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -276, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 118, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 14, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 66, 2, 211, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 20, 69, -239, -11, 40, -79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -299, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 205, -7, 53, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 54, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 106, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 88, -6, -301, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 59, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -307, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 116, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -48, -26, 237, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 71, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 116, -92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 225, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 75, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -17, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, -5, -302, 5, 237, 12,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimCliffEscapeQuick2_joint18[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimCliffEscapeQuick2_joint20[120] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -406, 9, -80, -47, -2907, -70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -244, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -363, 14, -3219, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -352, 82, -3368, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -198, 62, -335, 28, -3416, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -228, -2, -187, -35, -3205, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -314, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -406, -14, -3375, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -215, 64, -3347, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -3392, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -278, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -275, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -245, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -316, 35, -152, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -199, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -233, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -187, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3403, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -3323, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -231, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -309, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -309, 0, -176, 10, -3313, 10,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimCliffEscapeQuick2_joint21[124] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, 20, 311, -8, -52, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 129, 98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 276, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -121, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -14, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -68, -2, 207, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -20, -68, 239, 11, 40, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -205, 7, 53, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 116, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -104, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -90, 3, 300, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 234, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -59, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 45, 26, 233, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -57, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 41, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 12, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 223, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -56, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 16, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 230, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 294, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, 4, 302, 7, 233, 9,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTKirbyAnimCliffEscapeQuick2_joint23[140] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000, 0x4F00, 0x1000, 0x1000, 0x1000, 0x200E, 0xFB4E, 0xFFF7, 0x05F7, 0xFFD1, 0xFAEA, 0xFFBE, 0x2805, 0x0005, 0x0553, 0xFFD5, 0x200B, 0x0004, 0xFB24, 0xFFF2, 0xF9B2, 0xFF8E, 0x200B, 0x0001, 0xFB19, 0xFFAE, 0xF921, 0xFF9E, 0x200F, 0x0001, 0xFA7F, 0xFFC2, 0x04F8, 0x001C, 0xF8ED, 0x0051, 0x200F, 0x0001, 0xFA9C, 0x0002, 0x058D, 0xFFDD, 0xF9C3, 0x0016, 0x2803, 0x0009, 0xFAF2, 0x001E, 0x200D, 0x0001, 0x04B2, 0xFFF2, 0xF91A, 0xFFBA, 0x200D, 0x0001, 0x0570, 0x0040, 0xF936, 0x0009, 0x2809, 0x000A, 0xF923, 0xFFFA, 0x2005, 0x0001, 0x0532, 0xFFD0, 0x2005, 0x0005, 0x0534, 0x0012, 0x2005, 0x0001, 0x0552, 0x003D, 0x2007, 0x0001, 0xFAF4, 0xFFDB, 0x05AF, 0x0007, 0x2803, 0x0005, 0xFA5E, 0x0018, 0x2005, 0x0001, 0x0561, 0xFFC2, 0x2805, 0x0008, 0x0591, 0x000A, 0x0801, 0x0001, 0x2009, 0x0001, 0xF927, 0x0004, 0x2809, 0x0006, 0xF957, 0x0000, 0x0801, 0x0002, 0x2003, 0x0001, 0xFA7D, 0x0021, 0x2003, 0x0003, 0xFAE2, 0x0013, 0x200F, 0x0001, 0xFAEE, 0x000B, 0x0597, 0x0006, 0xF954, 0xFFFE, 0x0000, 0x0000, 0x0000,
};
