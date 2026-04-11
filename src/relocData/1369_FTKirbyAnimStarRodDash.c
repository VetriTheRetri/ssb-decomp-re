/* AnimJoint data for relocData file 1369 (FTKirbyAnimStarRodDash) */
/* 2720 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimStarRodDash_joint1[18];
extern u16 dFTKirbyAnimStarRodDash_joint2[90];
extern u16 dFTKirbyAnimStarRodDash_joint3[24];
extern u16 dFTKirbyAnimStarRodDash_joint4[48];
extern u16 dFTKirbyAnimStarRodDash_joint6[54];
extern u16 dFTKirbyAnimStarRodDash_joint7[130];
extern u16 dFTKirbyAnimStarRodDash_joint8[22];
extern u16 dFTKirbyAnimStarRodDash_joint10[64];
extern u16 dFTKirbyAnimStarRodDash_joint11[174];
extern u16 dFTKirbyAnimStarRodDash_joint12[14];
extern u16 dFTKirbyAnimStarRodDash_joint14[32];
extern u16 dFTKirbyAnimStarRodDash_joint15[130];
extern u16 dFTKirbyAnimStarRodDash_joint17[46];
extern u16 dFTKirbyAnimStarRodDash_joint19[128];
extern u16 dFTKirbyAnimStarRodDash_joint20[142];
extern u16 dFTKirbyAnimStarRodDash_joint22[198];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimStarRodDash_joints[] = {
	(u32)dFTKirbyAnimStarRodDash_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimStarRodDash_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimStarRodDash_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimStarRodDash_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimStarRodDash_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimStarRodDash_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimStarRodDash_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimStarRodDash_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimStarRodDash_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimStarRodDash_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimStarRodDash_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimStarRodDash_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimStarRodDash_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimStarRodDash_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimStarRodDash_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimStarRodDash_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF0253, /* [22] END */
};

/* Joint 1 */
u16 dFTKirbyAnimStarRodDash_joint1[18] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 2400,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 1200, 1920,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 26), 3600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 16), 3600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimStarRodDash_joint2[90] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 720, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 68, 4096, -273, 4096, 68,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 600, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 26), 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 480, 4300, 3276, 4300,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 600, 40, 4096, -17, 4096, 68, 4096, -17,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4096, -21, 4096, 86, 4096, -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 15), 600,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 780, -120, -120, -240, 3891, 51, 4915, -204, 3891, 51,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 480, -120, 0, 120, 4300, 34, 3276, -136, 4300, 34,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 600, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimStarRodDash_joint3[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 26), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -134, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTKirbyAnimStarRodDash_joint4[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 89, 89, 4300, 3686, 4300,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 178, 5, 357, 11, 4096, -13, 4096, 27, 4096, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 26), 268, 446, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 89, -27,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimStarRodDash_joint6[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -89, -134, 178, -180, -180,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 4), 0, 2, 178, 10, 0, -5, -60, 32,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 4), -180,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 26), -180, 28, -60, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 0, 178, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY, 8), 178, -11, -60, 90, 0, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY, 8), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimStarRodDash_joint7[130] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 824, -32, -1172, -12, -126, -10,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1153, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -83, -9,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 38), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 514, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 507, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 484, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1148, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -1033, -6,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -93, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -154, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -141, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 409, 251,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 512, -12, -1050, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1298, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -10, -140,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 629, 181,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1333, 95,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1289, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1380, -20,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -154, -154,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -796, -17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1428, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1596, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, -7, -1391, -10, 1608, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTKirbyAnimStarRodDash_joint8[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimStarRodDash_joint10[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -89, -134, -178, 180, -180, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 2, 357, 16, 178, 11, 120, -16, -60, 32, -120, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 357, -5, 178, -5, 120, -14, -60, 14, -120, 28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 26), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 16), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 178, -22, 0, -11, 60, -60, 0, 30, 0, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimStarRodDash_joint11[174] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -793, 186, 1134, 54, -114, 92,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -229, 413,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1141, -67,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -22, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 320, 197,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 210, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 220, 249,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 217, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1091, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1157, 4,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 26), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 160, -53, 154, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 25), -25, -9, 21, 7,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1161, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), 1130, -15,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1102, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 874, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -41, -55, 25, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -136, -493, -26, -435,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1027, -602, -844, -525,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1396, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -990, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1052, 168,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1258, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1442, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2376, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1007, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1568, -41,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4096,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1304, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1376, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2408, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2413, -2, -1598, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, 0, 1391, 14, -1608, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTKirbyAnimStarRodDash_joint12[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 45), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimStarRodDash_joint14[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, -1072,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 204, -120, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -17, -15, -785,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 16, 134, -822,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -804, -51, 0, -8, -1072, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -804, 0, -1072,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimStarRodDash_joint15[130] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, 53, -260, -24, 609, -157,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -199, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 114, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 127, -317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -183, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -334, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -332, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -252, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -203, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -258, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 115, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 126, 8,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -238, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -344, 17,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 135, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -149, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -292, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -73, 122,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -276, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -302, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 63, 126,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 238, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -174, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -29, 15,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 233, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 8, -302, 0, 233, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimStarRodDash_joint17[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 244, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 272, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 200, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimStarRodDash_joint19[128] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1496, -125, -1789, 133, -1030, -291,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1513, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1428, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1321, -304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1638, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1611, -51, -1413, 195,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1632, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1248, 83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1245, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1425, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 1348, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1244, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -1516, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1640, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), -1537, 22,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1538, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1522, 121,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1350, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1298, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1367, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1702, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1711, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1708, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1513, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1439, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1298, 0, -1431, 7, -1708, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimStarRodDash_joint20[142] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -12, 76, 243, 37, -531, 76,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 198, 259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, 104, -454, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 453, -11, -306, 413,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 581, 195, 258, -129, 373, 390,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 588, 18, 194, -30, 474, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 490, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 176, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 617, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 576, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 495, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 565, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 169, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 202, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 577, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 632, 15,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 547, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 365, 21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 203, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 299, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 404, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 248, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 644, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 202, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 105, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 44, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 23, -21, 302, 3, 237, -11,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimStarRodDash_joint22[198] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 357, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 41), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x280E, 0xFA81, 0x002C, 0xF972, 0xFFC2, 0xFAB4, 0xFF94, 0x4F00, 0x1000, 0x1000, 0x1000, 0x2803, 0x0002, 0xFAB6, 0x0064, 0x200D, 0x0001, 0xF933, 0xFF5D, 0xFA48, 0xFF41, 0x200D, 0x0001, 0xF82C, 0xFFAF, 0xF936, 0x00AD, 0x2805, 0x0002, 0xF8FF, 0x003D, 0x200B, 0x0001, 0xFB77, 0x0063, 0xFBA3, 0x0156, 0x2803, 0x0003, 0xFB00, 0xFFE2, 0x2009, 0x0001, 0xFBE3, 0x0019, 0x2809, 0x0007, 0xFBE0, 0x0006, 0x2005, 0x0001, 0xF90C, 0x000D, 0x2805, 0x0014, 0xF94C, 0x0003, 0x0801, 0x0001, 0x2003, 0x0001, 0xFAFC, 0x0000, 0x2803, 0x000E, 0xFB8F, 0x0000, 0x0801, 0x0004, 0x2009, 0x0001, 0xFBE8, 0x0004, 0x2809, 0x0014, 0xFBF6, 0xFFF3, 0x0801, 0x0009, 0x2003, 0x0001, 0xFB8F, 0x0000, 0x2803, 0x0009, 0xFBAC, 0x0006, 0x0801, 0x0003, 0x2005, 0x0001, 0xF950, 0x0002, 0x2805, 0x0007, 0xF8D4, 0xFFD3, 0x0801, 0x0005, 0x2003, 0x0001, 0xFBAD, 0xFFEA, 0x2803, 0x0006, 0xFB18, 0x0021, 0x2009, 0x0001, 0xFBE0, 0xFFE8, 0x2809, 0x0006, 0xFBCA, 0xFFE7, 0x2005, 0x0001, 0xF8B5, 0xFFF8, 0x2805, 0x0006, 0xF903, 0xFFF2, 0x0801, 0x0004, 0x2003, 0x0001, 0xFB48, 0x0036, 0x2803, 0x0004, 0xFB63, 0xFFBF, 0x2009, 0x0001, 0xFBA0, 0xFFB5, 0x2809, 0x0004, 0xF97A, 0xFFCB, 0x2005, 0x0001, 0xF8F4, 0xFFFB, 0x2805, 0x0004, 0xF909, 0xFFFE, 0x0801, 0x0002, 0x2003, 0x0001, 0xFB23, 0xFFCC, 0x200B, 0x0001, 0xFAFB, 0xFFE6, 0xF95E, 0xFFEF, 0x200F, 0x0001, 0xFAEE, 0xFFF3, 0xF907, 0xFFFF, 0xF958, 0xFFFA, 0x0000,
};
