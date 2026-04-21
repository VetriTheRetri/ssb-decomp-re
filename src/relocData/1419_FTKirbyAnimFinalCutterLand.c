/* AnimJoint data for relocData file 1419 (FTKirbyAnimFinalCutterLand) */
/* 1872 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimFinalCutterLand_joint1[8];
extern u16 dFTKirbyAnimFinalCutterLand_joint2[48];
extern u16 dFTKirbyAnimFinalCutterLand_joint3[24];
extern u16 dFTKirbyAnimFinalCutterLand_joint4[34];
extern u16 dFTKirbyAnimFinalCutterLand_joint6[60];
extern u16 dFTKirbyAnimFinalCutterLand_joint7[134];
extern u16 dFTKirbyAnimFinalCutterLand_joint8[14];
extern u16 dFTKirbyAnimFinalCutterLand_joint10[60];
extern u16 dFTKirbyAnimFinalCutterLand_joint11[140];
extern u16 dFTKirbyAnimFinalCutterLand_joint12[16];
extern u16 dFTKirbyAnimFinalCutterLand_joint14[42];
extern u16 dFTKirbyAnimFinalCutterLand_joint15[52];
extern u16 dFTKirbyAnimFinalCutterLand_joint17[14];
extern u16 dFTKirbyAnimFinalCutterLand_joint19[66];
extern u16 dFTKirbyAnimFinalCutterLand_joint20[70];
extern u16 dFTKirbyAnimFinalCutterLand_joint22[14];
extern u16 dFTKirbyAnimFinalCutterLand_joint23[94];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimFinalCutterLand_joints[] = {
	(u32)dFTKirbyAnimFinalCutterLand_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimFinalCutterLand_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimFinalCutterLand_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimFinalCutterLand_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimFinalCutterLand_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimFinalCutterLand_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimFinalCutterLand_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimFinalCutterLand_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimFinalCutterLand_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimFinalCutterLand_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimFinalCutterLand_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimFinalCutterLand_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimFinalCutterLand_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimFinalCutterLand_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimFinalCutterLand_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimFinalCutterLand_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTKirbyAnimFinalCutterLand_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimFinalCutterLand_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 35),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimFinalCutterLand_joint2[48] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 3216, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 300, 4915, 2048, 4915,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 600, 70, 4096, -48, 4096, 120, 4096, -48,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 31), 600, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 28), 0, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimFinalCutterLand_joint3[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -268, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 28), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTKirbyAnimFinalCutterLand_joint4[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 268, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -268, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 357,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), -268, 50,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 28), 357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimFinalCutterLand_joint6[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 536, -446, -357, 0, -90, -180,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 536, -134, -446, 89, -357, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -90, -180,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -17, -89, 11, -178, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -180, -60, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), -89, 2, -178, 5,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 31), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 28), 0, -180, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimFinalCutterLand_joint7[134] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -463, -309, -1097, 33, 310, 385,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1178, -2,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 32), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -773, 23, 695, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -415, 355, 366, -349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -62, 228, -2, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 40, 58, -1109, 46, -67, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -367, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -1115, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 195, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 250, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 371, -56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -419, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -465, 65,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1108, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1108, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 306, -75, -390, 88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -59, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 134, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 35, -206,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -278, 361, -1097, 343, 272, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 758, 541, -420, 440, -303, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 45, -217, 203, 0, 303,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTKirbyAnimFinalCutterLand_joint8[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimFinalCutterLand_joint10[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 536, 446, 357, 0, -90, -180,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 536, -134, 446, -134, 357, -111,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -90, -180,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -17, -89, -17, -89, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 120, -120, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), -89, 2, -89, 2,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 31), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 28), 0, 120, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimFinalCutterLand_joint11[140] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 463, 309, 1096, -33, 310, 385,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 32), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 772, -70, 1063, -73, 695, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 322, -360, 950, -10, 235, -264,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1061, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 52, -453, 165, -350,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -584, -308, -465, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -564, 29, 1014, -44, -428, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 1083, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -525, 52, -376, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 133, 6, 379, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 133, -8, 398, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -206, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 13, -62,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1078, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1055, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -244, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -584, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -48, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -463, -96,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -690, -736, 1126, -11, -538, -489,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2058, -861, 1032, 132, -1441, -534,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, -354, 1391, 358, -1608, -167,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTKirbyAnimFinalCutterLand_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimFinalCutterLand_joint14[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -328, -19, 15, 1, -836, 2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 204, -120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -622, -51, 31, -3, -800, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -536, 2, 0, -1, -1072, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), -536, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 0, -1072,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -804, 0, -1072,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTKirbyAnimFinalCutterLand_joint15[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -302, -237,
	ftAnimSetValRate(FT_ANIM_ROTX), 286, -89,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 31), -240, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 34), -308, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 281, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 278, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 24), 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 288, -65, -240, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 29, -90, 142, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, -53, -302, 6, 237, 94,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTKirbyAnimFinalCutterLand_joint17[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 34), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimFinalCutterLand_joint19[66] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1186, 57, 1803, -70, -1263, -17,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -1239, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 1178, -3, 1812, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1175, -2, 1816, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 1186, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 1787, -6,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1236, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -1263, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1186, 37, -1265, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1290, 18, -1650, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1298, 7, 1785, -1, -1704, -53,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimFinalCutterLand_joint20[70] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1879, 106, 1233, 0, 2171, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), 2165, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 32), 1235, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1864, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1856, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 1874, 2,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2168, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2114, -112,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1879, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1698, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1244, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1274, 30, 1949, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1629, -68, 1305, 31, 1841, -107,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimFinalCutterLand_joint22[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 34), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTKirbyAnimFinalCutterLand_joint23[94] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1177, -189, 1500, 80, 1972, -9,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1499, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 1980, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1366, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1318, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1188, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1498, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 1497, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1191, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1175, 20,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1982, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1973, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, -30, 1976, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1394, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1143, -21, 1877, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1219, -77, 1593, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, -79, 1431, 37, 1508, -84,
	ftAnimEnd(),
	0x0000, 0x0000,
};
