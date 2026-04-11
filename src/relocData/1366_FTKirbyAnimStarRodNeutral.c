/* AnimJoint data for relocData file 1366 (FTKirbyAnimStarRodNeutral) */
/* 2096 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimStarRodNeutral_joint1[62];
extern u16 dFTKirbyAnimStarRodNeutral_joint2[10];
extern u16 dFTKirbyAnimStarRodNeutral_joint3[60];
extern u16 dFTKirbyAnimStarRodNeutral_joint5[70];
extern u16 dFTKirbyAnimStarRodNeutral_joint6[172];
extern u16 dFTKirbyAnimStarRodNeutral_joint7[14];
extern u16 dFTKirbyAnimStarRodNeutral_joint9[70];
extern u16 dFTKirbyAnimStarRodNeutral_joint10[154];
extern u16 dFTKirbyAnimStarRodNeutral_joint11[16];
extern u16 dFTKirbyAnimStarRodNeutral_joint13[96];
extern u16 dFTKirbyAnimStarRodNeutral_joint14[58];
extern u16 dFTKirbyAnimStarRodNeutral_joint16[12];
extern u16 dFTKirbyAnimStarRodNeutral_joint18[48];
extern u16 dFTKirbyAnimStarRodNeutral_joint19[80];
extern u16 dFTKirbyAnimStarRodNeutral_joint21[82];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimStarRodNeutral_joints[] = {
	(u32)dFTKirbyAnimStarRodNeutral_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimStarRodNeutral_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimStarRodNeutral_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimStarRodNeutral_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimStarRodNeutral_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimStarRodNeutral_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimStarRodNeutral_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimStarRodNeutral_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimStarRodNeutral_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimStarRodNeutral_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimStarRodNeutral_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimStarRodNeutral_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimStarRodNeutral_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimStarRodNeutral_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimStarRodNeutral_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF01EA, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimStarRodNeutral_joint1[62] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 600, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 600, -240, 0, 240, 4096, 102, 4096, -409, 4096, 102,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 480, -120, 120, 120, 4300, 51, 3276, -204, 4300, 51,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 480, 53, 120, -53, 4300, -22, 3276, 91, 4300, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 12), 600, 0, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimStarRodNeutral_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimStarRodNeutral_joint3[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -357, -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -357, 89, 0, 89, 0, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -89, 268, 268, 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 178, 38, 536, 38, 0, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 178, -9, 536, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimStarRodNeutral_joint5[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -357, -89, -357, -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -60, 60, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -357, 119, -357, 59,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -60, 60, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 0, 357,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -180, 0, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 357, 51, -357, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 357, -19, -357, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -180, 12, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimStarRodNeutral_joint6[172] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 1544, -1387, 564, 1608, 1368,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 740, 561, -822, 191, 2977, 887,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 319, -143, -1005, -82, 3383, 113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1005, -31,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 453, 0, 3203, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 319, 117, 3383, -312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 687, -25, -1050, 0, 2579, -257,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -995, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 269, -257, 2867, 192,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2925, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 130, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 135, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 185, -163,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2864, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3294, 276,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 12), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -62, -242,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -666, -405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -990, 28, 3527, 269,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1089, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3833, 403,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1111, -223, 4334, 369,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -990, 106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 4803, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1170, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1381, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -901, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -809, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4818, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4824, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 4, -1391, -9, 4825, 1,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimStarRodNeutral_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 23), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimStarRodNeutral_joint9[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -357, -89,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, 60, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 104, -357, 59,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 60, -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 120, -60, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 312, 268, -178, 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 536, 31, 357, 76,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 536, -29, 357, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 120, -60, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimStarRodNeutral_joint10[154] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 350, 217, 350, 0, -698,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -454, 14, 567, 157, -698, -740,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -775, -97, 533, -5, -1480, -337,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 536, -67,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -650, 0, -1372, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -775, -328, -1479, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1306, -318, 421, -62, -1843, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 532, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1412, -102, -1404, 165,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1412, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1512, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 510, -21, -1554, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 462, 63, -1295, 153,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 12), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1264, 199,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -344, 349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 538, 49, -1096, 247,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 232, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -379, 466,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -6, 103, 131, 294,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 41, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -398, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -582, -149,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -794, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, -9, 217, -14, 0, 2,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimStarRodNeutral_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimStarRodNeutral_joint13[96] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, -1072,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 204, -120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -982, -44, -268, -67, -982, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -982, 219, -268, -6, -982, 55,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -103, -294, -762,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -103, -294, -762,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -138, -41, -294, -2, -776, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -187, -52, -298, -8, -809, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -244, -97, -312, -45, -849, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -382, -198, -388, -57, -948, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -641, -194, -427, 12, -967, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -770, -34, -364, 55, -989, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -779, -5, -207, 60, -1053, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -804, 0, -1072,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimStarRodNeutral_joint14[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, -302, 237,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -270, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -41, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 314, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 325, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 234, -2,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -277, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -301, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -35, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -22, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 1, -302, 0, 233, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTKirbyAnimStarRodNeutral_joint16[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 23), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimStarRodNeutral_joint18[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, 1785, -1704,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -1912, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 1784, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1792, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1796, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -1709, 2,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1915, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1917, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 0, 1785, 0, -1708, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimStarRodNeutral_joint19[80] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, -2, 302, 0, 237, -4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 21, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 252, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 205, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 233, 115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 534, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 134, 80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 187, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 212, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 301, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 548, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 261, -27,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 181, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 25, -8,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 240, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -4, 302, 1, 233, -7,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimStarRodNeutral_joint21[82] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 23), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x0000, 0x280E, 0xFAEE, 0x0000, 0xF907, 0x0000, 0xF958, 0xFFFD, 0x4F00, 0x1000, 0x1000, 0x1000, 0x2805, 0x0012, 0xF8FD, 0x0005, 0x2803, 0x0017, 0xFAED, 0x0002, 0x2009, 0x0004, 0xF954, 0xFFE0, 0x2009, 0x0001, 0xF929, 0x0026, 0x2009, 0x0002, 0xF9CE, 0x001F, 0x2009, 0x0001, 0xF9E0, 0x0008, 0x2809, 0x000C, 0xF930, 0x000C, 0x0801, 0x000A, 0x2005, 0x0001, 0xF902, 0x0003, 0x2805, 0x0004, 0xF907, 0x0000, 0x0801, 0x0001, 0x2009, 0x0001, 0xF93C, 0x000B, 0x2009, 0x0002, 0xF950, 0x0007, 0x200F, 0x0001, 0xFAEE, 0x0001, 0xF907, 0x0000, 0xF954, 0x0003, 0x0000,
};
