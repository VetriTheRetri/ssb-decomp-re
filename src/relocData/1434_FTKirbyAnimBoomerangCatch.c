/* AnimJoint data for relocData file 1434 (FTKirbyAnimBoomerangCatch) */
/* 2144 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimBoomerangCatch_joint1[26];
extern u16 dFTKirbyAnimBoomerangCatch_joint2[18];
extern u16 dFTKirbyAnimBoomerangCatch_joint3[42];
extern u16 dFTKirbyAnimBoomerangCatch_joint5[62];
extern u16 dFTKirbyAnimBoomerangCatch_joint6[150];
extern u16 dFTKirbyAnimBoomerangCatch_joint7[16];
extern u16 dFTKirbyAnimBoomerangCatch_joint8[32];
extern u16 dFTKirbyAnimBoomerangCatch_joint10[48];
extern u16 dFTKirbyAnimBoomerangCatch_joint11[152];
extern u16 dFTKirbyAnimBoomerangCatch_joint12[14];
extern u16 dFTKirbyAnimBoomerangCatch_joint14[10];
extern u16 dFTKirbyAnimBoomerangCatch_joint15[96];
extern u16 dFTKirbyAnimBoomerangCatch_joint17[14];
extern u16 dFTKirbyAnimBoomerangCatch_joint19[120];
extern u16 dFTKirbyAnimBoomerangCatch_joint20[110];
extern u16 dFTKirbyAnimBoomerangCatch_joint22[116];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimBoomerangCatch_joints[] = {
	(u32)dFTKirbyAnimBoomerangCatch_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimBoomerangCatch_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimBoomerangCatch_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimBoomerangCatch_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimBoomerangCatch_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimBoomerangCatch_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimBoomerangCatch_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimBoomerangCatch_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimBoomerangCatch_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimBoomerangCatch_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimBoomerangCatch_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimBoomerangCatch_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimBoomerangCatch_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimBoomerangCatch_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimBoomerangCatch_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimBoomerangCatch_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF01E6, /* [22] END */
};

/* Joint 1 */
u16 dFTKirbyAnimBoomerangCatch_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 600, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 240,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), -240, -392,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), -300, 137,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimBoomerangCatch_joint2[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 11), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), -268,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimBoomerangCatch_joint3[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 0, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 0, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 357, 28, 536, 73, 178, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 312, -25, 536, -38, 178, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimBoomerangCatch_joint5[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -60, -160, -60, -80, -60, 160,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -268,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 268, 48, -120, -43, 120, 130,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), -60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 6), 268, -19, -120, 23, 120, -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), -60,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -90, 119, -60, 59, 90, -119,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimBoomerangCatch_joint6[150] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2412, 39, -217, -317, 0, -848,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2373, 139, -534, -150, -848, -617,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2134, 163, -519, 13, -1234, -328,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -468, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2001, 49, -1958, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1952, -3, -2104, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2036, 7,
	ftAnimSetValRateT(FT_ANIM_SCAX, 6), 3072, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2071, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2074, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2065, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2026, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2053, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -478, -63, -2040, 145,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -595, -11, -1773, 497,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2338, -100, -500, 127, -1044, 457,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -716, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2255, 1, -340, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2335, -160, -361, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -2694, 23, -399, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -455, 273,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -31, 84,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2528, 141, -280, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, 116, -220, 59, 0, 31,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimBoomerangCatch_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTKirbyAnimBoomerangCatch_joint8[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 804, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 536, 204, -120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 804, 74, 0, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 1251, 40, -357, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 1251, -31, -357, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 804, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimBoomerangCatch_joint10[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 0, 29, 0, 29, 0, 240, 0, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 178, 16, 178, 16, 180, 130, -30, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 6), 178, -12, 178, -12, 180, -102, -30, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimBoomerangCatch_joint11[152] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 157, 217, -11, 0, 380,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -646, 114, 380, 192,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 287, 143,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -575, 195, 384, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -255, 537, 494, 190, 426, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 498, 662, 668, 73, 846, 459,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1070, 315, 640, -31, 1346, 277,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 615, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1129, -3, 1400, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1057, 10,
	ftAnimSetValRateT(FT_ANIM_SCAX, 6), 3072, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1310, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1321, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1139, -252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1068, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 886, -255,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 614, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 400, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 564, -315, 834, -250,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -402, -299, 293, -196,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 424, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 263, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -659, -185, 106, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -773, -72, 21, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, -30, 217, -46, 0, -21,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimBoomerangCatch_joint12[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 19), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimBoomerangCatch_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimBoomerangCatch_joint15[96] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, -80, -302, 126, 237, 239,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -98, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -20, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 477, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 466, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 339, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -86, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -169, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -20, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -40, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 344, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 334, 26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -189, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -195, -63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 357, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 276, -47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -267, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 19, -302, -34, 233, -43,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimBoomerangCatch_joint17[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 19), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimBoomerangCatch_joint19[120] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -309, -839, 3040, -171, -96, 889,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 2848, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1149, -416, 792, 441,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1143, 14, 786, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -774, 197, 441, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2793, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 2518, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -573, 179, 242, -177,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -592, -143, 282, 173,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2528, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 2640, 27,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -735, -132, 463, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -857, -151, 600, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1037, -31, 2659, -2, 753, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 2774, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -920, 315, 602, -355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -405, 304, 43, -343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -311, 48, 2976, 132, -84, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -309, 1, 3040, 63, -99, -15,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimBoomerangCatch_joint20[110] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, -129, 302, -65, 233, -267,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -316, -95,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 321, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -34, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -76, -66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -406, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -406, -72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -498, 37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 322, 0, -417, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 358, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -414, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -431, 137, -342, 151,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -9, 130,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 292, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 385, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 200, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 37, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 27, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 242, 37, 291, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 296, 13, 244, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -5, 302, 6, 233, -11,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimBoomerangCatch_joint22[116] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000, 0x280E, 0x0135, 0xFFE6, 0x00B0, 0xFFE5, 0xFF9D, 0x0094, 0x4F00, 0x1000, 0x1000, 0x1000, 0x2803, 0x0007, 0x023F, 0x0010, 0x2805, 0x000A, 0x006A, 0xFFFF, 0x2009, 0x0003, 0x00DA, 0x007F, 0x2009, 0x0001, 0x015F, 0x0074, 0x2809, 0x0007, 0x0221, 0xFFFC, 0x0801, 0x0003, 0x2003, 0x0001, 0x024C, 0x000A, 0x2803, 0x0005, 0x0244, 0xFFF1, 0x0801, 0x0002, 0x2005, 0x0001, 0x006A, 0x0001, 0x2805, 0x0003, 0x00F1, 0x0069, 0x2009, 0x0001, 0x0216, 0xFFE9, 0x2809, 0x0002, 0x016C, 0xFF2D, 0x0801, 0x0001, 0x2003, 0x0001, 0x0228, 0xFFAB, 0x2803, 0x0002, 0x0124, 0xFFC6, 0x200D, 0x0001, 0x0163, 0x0035, 0x004C, 0xFF18, 0x280D, 0x0004, 0x00BC, 0xFFEA, 0xFF9A, 0x0001, 0x0801, 0x0001, 0x2003, 0x0001, 0x0124, 0x0003, 0x2003, 0x0002, 0x0132, 0x0004, 0x200F, 0x0001, 0x0135, 0x0002, 0x00B0, 0xFFF5, 0xFF9D, 0x0002, 0x0000,
};
