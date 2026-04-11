/* AnimJoint data for relocData file 1368 (FTKirbyAnimStarRodSmash) */
/* 3984 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimStarRodSmash_joint1[22];
extern u16 dFTKirbyAnimStarRodSmash_joint2[120];
extern u16 dFTKirbyAnimStarRodSmash_joint3[28];
extern u16 dFTKirbyAnimStarRodSmash_joint4[64];
extern u16 dFTKirbyAnimStarRodSmash_joint6[142];
extern u16 dFTKirbyAnimStarRodSmash_joint7[292];
extern u16 dFTKirbyAnimStarRodSmash_joint8[8];
extern u16 dFTKirbyAnimStarRodSmash_joint10[146];
extern u16 dFTKirbyAnimStarRodSmash_joint11[302];
extern u16 dFTKirbyAnimStarRodSmash_joint12[22];
extern u16 dFTKirbyAnimStarRodSmash_joint14[78];
extern u16 dFTKirbyAnimStarRodSmash_joint15[154];
extern u16 dFTKirbyAnimStarRodSmash_joint17[8];
extern u16 dFTKirbyAnimStarRodSmash_joint19[200];
extern u16 dFTKirbyAnimStarRodSmash_joint20[140];
extern u16 dFTKirbyAnimStarRodSmash_joint22[220];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimStarRodSmash_joints[] = {
	(u32)dFTKirbyAnimStarRodSmash_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimStarRodSmash_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimStarRodSmash_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimStarRodSmash_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimStarRodSmash_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimStarRodSmash_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimStarRodSmash_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimStarRodSmash_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimStarRodSmash_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimStarRodSmash_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimStarRodSmash_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimStarRodSmash_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimStarRodSmash_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimStarRodSmash_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimStarRodSmash_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimStarRodSmash_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF037D, /* [22] END */
};

/* Joint 1 */
u16 dFTKirbyAnimStarRodSmash_joint1[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 15), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 20), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimStarRodSmash_joint2[120] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 300, -299, 4915, 204, 2048, -511, 4915, 204,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 300, 342, 4915, -234, 2048, 585, 4915, -234,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, -292, 4096, 702, 4096, -292,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 600,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 5600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 1800, 3891, 4505, 3891,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 600, -5600, 4096, 292, 4096, -702, 4096, 292,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 300, -240, 4915, 163, 2048, -409, 4915, 163,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 300, 184, 4915, -126, 2048, 315, 4915, -126,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 600, 143, 4096, -122, 4096, 245, 4096, -122,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 480, -64, 4300, 27, 3276, -109, 4300, 27,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 480, 48, 4300, -20, 3276, 81, 4300, -20,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 600, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimStarRodSmash_joint3[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, -312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 20), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 20), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTKirbyAnimStarRodSmash_joint4[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 178, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 178, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -178, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -357, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -357, 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 536, 37, -268, -29, -178, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 536, -37, -268, 29, -178, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimStarRodSmash_joint6[142] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), -178, -22, -120, -119, 120, 119,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 8), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 12), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -178,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), -178, 25, -120, 137, 120, -137,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -268, 44, 0, 111, 0, 240, 0, -240, 0, -240,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 2), 0, 38, 268, 38, -120, -137,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 111, 0, -33, 268, -11, -120, 119, 0, -119,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 53, -120, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 893, -268, 178,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, -72, 0, -24, -120, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 893, -268, 178,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -180, -96, -60, -32, -60, 32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -180, 32, -60, 32, -60, 32,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -120, 143, 0, 47, 0, 47,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimStarRodSmash_joint7[292] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 42, -217, 5, 0, -90,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -329, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1033, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -245, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 3), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 47), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -328, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -302, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1037, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 946, -30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -245, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -342, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 959, -58, -355, -398,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 764, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -246, 52, -1098, -653,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -262, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1661, -303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 789, 7, -1704, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 880, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1674, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1760, -178,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -237, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -221, 45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1013, 19, -2025, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 919, -40, -1874, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 931, 7, -1756, 110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1635, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 919, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -176, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -254, -14,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1645, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1846, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -267, -52, -1874, 87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -517, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 907, -74, -1672, 450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 770, -200, -972, 594,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 507, -92, -570, -173, -483, 227,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1146, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 584, -64, -517, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 377, -71, -344, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 470, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1188, -32, -409, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1149, 54, -348, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 480, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 380, 16,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 421, 129, -1071, 102, -367, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -916, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 640, 474, -543, -420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1370, 551, -1208, -471,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2096, 154, -1561, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1007, -83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1363, -46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2238, 120, -1575, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2393, 37, -1603, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, 18, -1391, -27, -1608, -4,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimStarRodSmash_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimStarRodSmash_joint10[146] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 178, 22, 120, 119, 120, 119,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 8), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 12), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 178,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 178, -25, 120, -137, 120, -137,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 268, -44, 0, -111, 0, -240, 0, -240, 0, -240,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 2), 0, -38, -268, -38, -120, -137,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 111, 0, 33, -268, 11, -120, 119, 0, -119,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 53, -120, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 893, 268, -178,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 15), 0, 72, -120, 72,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 15), 893, 268, -178, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 25), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 0, -59, -178, -29, 178, 23, 180, 95, 60, 95,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), -178, 8, 178, -8, 180, -32, 60, -32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 120, -144, 0, -48,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimStarRodSmash_joint11[302] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, -42, 217, -2, 0, -91,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -331, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1033, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 248, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 3), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 47), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -328, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -303, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1037, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -947, 31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 245, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 342, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -959, 58, -355, -397,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -764, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 243, -52, -1098, -653,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 276, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1661, -303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -789, -7, -1704, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -880, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1674, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1760, -178,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 259, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 246, 29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1013, -19, -2025, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -919, 40, 265, -12, -1874, 134,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 155, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -931, -8, -1756, 109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1643, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -922, 4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 151, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 344, 65,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1655, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1874, -29,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -919, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1004, -279, -1904, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1478, -474, 399, -30, -2201, -115,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 233, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1952, -292, -2136, 104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1799, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2063, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2039, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 248, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 290, 61,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1800, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1918, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2038, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2290, -107,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 372, 97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 680, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1916, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2254, -495,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2407, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2748, -524,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3456, -477, -2944, -436,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3183, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3703, -214, 532, -151,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 264, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3885, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3992, -67, -3208, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4021, -28, 217, -46, -3216, -8,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimStarRodSmash_joint12[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 37), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimStarRodSmash_joint14[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, -1072,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 204, -120, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -804, 0, -1072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -804, 44, 0, 22, -1072, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -446, 178, -804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -536, 312, -848,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -446, 22, 178, -13, -804, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -312, 29, 178, -40, -804, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -272, 156, -61, -223, -1012, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 13, -268, 21, -1206, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -81, -34, 244, 11, -1208, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -804, 0, -1072,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTKirbyAnimStarRodSmash_joint15[154] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1305, 1845,
	ftAnimSetValRate(FT_ANIM_ROTX), -1632, -15,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1383, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -1665, 32, 1845, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1629, 7, 1841, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1958, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1669, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1392, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1212, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1950, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 1904, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1679, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1679, 25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1212, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1214, -17,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1904, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1371, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1641, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1359, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1244, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1234, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1345, 11, 1347, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1647, 84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1566, -42,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1227, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1299, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1726, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1840, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1599, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1629, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1632, -2, -1305, -6, 1845, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTKirbyAnimStarRodSmash_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimStarRodSmash_joint19[200] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1298, -5, -1431, -15, -1704, 1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1298, 13, -1453, 31, -1735, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1298, -56, -1431, -68, -1708, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1235, 184, -1696, -59, -1000, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1555, 178, -1709, -8, -973, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1447, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -916, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1583, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1526, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1324, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 936, -308,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 783, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1378, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1381, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -908, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -908, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 791, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 669, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1380, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1358, 16,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 653, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 806, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1327, 51, -913, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1258, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1284, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1083, 188,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1161, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1380, -92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1455, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1271, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -1479, -69,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1156, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1154, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1454, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1434, 5,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1165, 20, -1546, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1289, 16, -1699, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1298, 8, -1431, 3, -1704, -5,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimStarRodSmash_joint20[140] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 1305, -1371,
	ftAnimSetValRate(FT_ANIM_ROTX), 1632, 15,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1305, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 1685, -30, -1334, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1632, -139, -1371, -198,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1248, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1315, 40, -1732, -292,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1258, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1956, -124,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1956, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1226, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1271, 54,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1953, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -1929, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1317, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1225, -22,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 1260,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1241, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1208, 13, -1929, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1654, 27, -1375, 46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1251, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1305, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1667, 11, -1352, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1632, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 14), -1371,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1371, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1629, -2, 1305, 0, -1375, -4,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimStarRodSmash_joint22[220] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 59), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x280E, 0x077E, 0x0005, 0x0597, 0x000F, 0xF958, 0x0001, 0x4F00, 0x1000, 0x1000, 0x1000, 0x2803, 0x000B, 0x074B, 0xFFDF, 0x200D, 0x0009, 0x05CA, 0xFFE1, 0xF952, 0x0000, 0x200D, 0x0001, 0x0597, 0xFF97, 0xF958, 0x0030, 0x280D, 0x0003, 0x0476, 0xFFFE, 0xFA53, 0xFFFA, 0x0801, 0x0001, 0x2003, 0x0001, 0x073B, 0xFFF7, 0x2803, 0x0004, 0x0792, 0x0075, 0x0801, 0x0001, 0x200D, 0x0001, 0x0481, 0x0006, 0xFA35, 0xFFF8, 0x2805, 0x0004, 0x04F2, 0x005F, 0x2809, 0x0005, 0xFC31, 0x0028, 0x0801, 0x0002, 0x2003, 0x0001, 0x0823, 0x0084, 0x2803, 0x0004, 0x0873, 0xFFB6, 0x0801, 0x0001, 0x2005, 0x0001, 0x0556, 0x0049, 0x2805, 0x0009, 0x05AE, 0xFFFF, 0x2009, 0x0001, 0xFC3E, 0xFFFC, 0x2809, 0x000F, 0xFC3E, 0xFFFF, 0x0801, 0x0001, 0x2003, 0x0001, 0x082C, 0xFFD6, 0x2803, 0x0009, 0x0842, 0x001B, 0x0801, 0x0006, 0x2005, 0x0001, 0x05AC, 0xFFFF, 0x2805, 0x0008, 0x0519, 0xFFB0, 0x0801, 0x0002, 0x2003, 0x0001, 0x0864, 0x0024, 0x2803, 0x0007, 0x097E, 0x0032, 0x0801, 0x0003, 0x2009, 0x0001, 0xFC35, 0xFFE3, 0x2809, 0x0005, 0xFBB0, 0x000A, 0x0801, 0x0001, 0x2005, 0x0001, 0x04C4, 0xFFB9, 0x2805, 0x000A, 0x046D, 0x0002, 0x0801, 0x0001, 0x2003, 0x0001, 0x09A4, 0x0019, 0x2803, 0x000E, 0x087E, 0xFFA8, 0x0801, 0x0001, 0x2009, 0x0001, 0xFBBE, 0x000A, 0x2809, 0x000B, 0xFAD8, 0xFFA2, 0x0801, 0x0006, 0x2005, 0x0001, 0x046F, 0x0002, 0x2805, 0x0009, 0x0577, 0x001E, 0x0801, 0x0004, 0x2009, 0x0001, 0xFA76, 0xFFA3, 0x2809, 0x0005, 0xF95F, 0xFFF0, 0x2003, 0x0001, 0x0829, 0xFFB4, 0x2803, 0x0004, 0x0784, 0xFFF5, 0x0801, 0x0003, 0x2005, 0x0001, 0x058F, 0x000F, 0x200F, 0x0001, 0x077E, 0xFFFB, 0x0597, 0x0008, 0xF954, 0xFFF5, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
