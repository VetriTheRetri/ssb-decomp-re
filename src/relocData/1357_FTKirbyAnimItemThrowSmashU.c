/* AnimJoint data for relocData file 1357 (FTKirbyAnimItemThrowSmashU) */
/* 2384 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimItemThrowSmashU_joint1[64];
extern u16 dFTKirbyAnimItemThrowSmashU_joint2[32];
extern u16 dFTKirbyAnimItemThrowSmashU_joint3[90];
extern u16 dFTKirbyAnimItemThrowSmashU_joint5[82];
extern u16 dFTKirbyAnimItemThrowSmashU_joint6[180];
extern u16 dFTKirbyAnimItemThrowSmashU_joint7[16];
extern u16 dFTKirbyAnimItemThrowSmashU_joint9[76];
extern u16 dFTKirbyAnimItemThrowSmashU_joint10[200];
extern u16 dFTKirbyAnimItemThrowSmashU_joint11[14];
extern u16 dFTKirbyAnimItemThrowSmashU_joint13[10];
extern u16 dFTKirbyAnimItemThrowSmashU_joint14[96];
extern u16 dFTKirbyAnimItemThrowSmashU_joint16[14];
extern u16 dFTKirbyAnimItemThrowSmashU_joint18[106];
extern u16 dFTKirbyAnimItemThrowSmashU_joint19[74];
extern u16 dFTKirbyAnimItemThrowSmashU_joint21[16];
extern u16 dFTKirbyAnimItemThrowSmashU_joint22[78];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimItemThrowSmashU_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashU_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashU_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashU_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashU_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashU_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashU_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashU_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashU_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashU_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashU_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashU_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashU_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashU_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashU_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashU_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimItemThrowSmashU_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimItemThrowSmashU_joint1[64] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 480, -159, 4300, 68, 3276, -273, 4300, 68,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 480, 479, 4300, -51, 3276, 204, 4300, -51,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 960, 319, 4096, -34, 4096, 136, 4096, -34,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 960, -261,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 600, -480,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimItemThrowSmashU_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -268, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 0, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 0, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -268, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimItemThrowSmashU_joint3[90] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 312, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 178, 29, -268, -44, 178, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 178, 59, -268, 89, 178, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 536, -44, 268, 290, 357, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -53, 893, 62, 536, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 893, -81, 536, -48, 312, -52, 4096, 37, 4096, -148, 4096, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -148, 0, -89,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 240, 4300, 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 0, 0, 312, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimItemThrowSmashU_joint5[82] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -357, -59,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 8), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX, 2), 0, -180,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 22, -357, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 4), -180,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 178, 14, 0, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 2), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), -180, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 178, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), 0, -180, 60,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 3), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 0, -29,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), -60, 360,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), -90, -240,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), -120, 180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimItemThrowSmashU_joint6[180] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -437, -217, -361, 0, -109,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 106, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -579, -433, -109, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1085, -291, -41, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1181, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -156, 55,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 19), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 167, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 176, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1155, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -867, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 106, 141, -41, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 459, 261, -188, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 628, 239, -605, 106, -43, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -657, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 938, 630, -69, -381,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1889, 512, -806, -376,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1964, 63, -583, 66, -821, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -556, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2016, 47, -841, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 2062, -107, -935, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1889, -688, -657, 29, -806, 548,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -405, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 685, -724, 162, 499,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 440, -332, 193, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 19, -147, -450, 0, 633, 195,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -342, 92,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 145, 313, 584, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 646, 329, 182, -292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 157, -220, 121, 0, -182,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimItemThrowSmashU_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimItemThrowSmashU_joint9[76] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -178, -29, 357, 59,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 2), 180,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 6), 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -178, 61, 357, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 312, 40, 0, -29,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 60, -60, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 312, -28,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 11), 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, -60, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 0, -52,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimItemThrowSmashU_joint10[200] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 642, 1391, -298, 1608, 33,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 992, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1447, -224, 1642, -729,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 354, -582, 149, -755,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 19), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 282, -46, 1096, 78, 130, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1126, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 261, 8, 145, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 299, 43, 163, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 347, 502, 990, -89, 142, 346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1304, 313, 948, -150, 856, 309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 975, -65, 689, -269, 761, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1173, 390, 409, -101, 1265, 575,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1755, 286, 486, 104, 1912, 307,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 752, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1745, -67, 1880, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1621, -233, 1751, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1026, -61, 1148, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1155, 263, 746, -16, 1267, 255,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 486, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1553, 292, 1658, 295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1741, 100, 1857, 126,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1567, -232, 1784, -230,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 100, -93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 532, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1291, 400, 1451, 454,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2369, 585, 2693, 708,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2461, 46, 342, -127, 2867, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2462, -24, 277, -62, 3090, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, -49, 217, -59, 3216, 126,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimItemThrowSmashU_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimItemThrowSmashU_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimItemThrowSmashU_joint14[96] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1632, -9, -1305, -1, 1845, -2,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -1731, -26, -1393, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1870, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1845, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2188, 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1739, 0, -1446, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1471, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1736, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2201, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 2188, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1432, 59, 2135, -106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1841, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1305, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1692, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1638, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1865, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1857, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1632, 6, -1305, 0, 1845, -11,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimItemThrowSmashU_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimItemThrowSmashU_joint18[106] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2907, 0, -176, 11, -96, 4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 2944, 33, -143, -12, -109, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2966, -43, -177, -40, -88, 124,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2613, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -196, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 347, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 417, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 421, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2561, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 2612, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2684, 146, -213, -13, 347, -184,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -126, -76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -195, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2904, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2955, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2900, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -99, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -107, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -186, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2907, 6, -176, 9, -96, 11,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimItemThrowSmashU_joint19[74] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 7, 302, -1, 237, -6,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -38, -24, 105, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 258, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 246, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 302, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -55, -11, 72, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 21, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 72, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 121, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 232, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 24, 0, 322, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 21, -1, 312, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, 0, 302, -9, 233, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimItemThrowSmashU_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimItemThrowSmashU_joint22[78] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1298, 0, -1785, 11, -1704, 1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -1293, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -1681, 60, -1453, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1622, 43, -1302, 118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1587, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1141, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1158, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1346, -174,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1595, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1774, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1564, -180,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1718, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1779, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, -4, -1785, -5, -1708, 9,
	ftAnimEnd(),
};
