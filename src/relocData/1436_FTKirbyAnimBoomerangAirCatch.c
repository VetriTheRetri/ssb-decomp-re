/* AnimJoint data for relocData file 1436 (FTKirbyAnimBoomerangAirCatch) */
/* 1984 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimBoomerangAirCatch_joint1[26];
extern u16 dFTKirbyAnimBoomerangAirCatch_joint2[18];
extern u16 dFTKirbyAnimBoomerangAirCatch_joint3[42];
extern u16 dFTKirbyAnimBoomerangAirCatch_joint5[68];
extern u16 dFTKirbyAnimBoomerangAirCatch_joint6[124];
extern u16 dFTKirbyAnimBoomerangAirCatch_joint7[16];
extern u16 dFTKirbyAnimBoomerangAirCatch_joint8[32];
extern u16 dFTKirbyAnimBoomerangAirCatch_joint10[56];
extern u16 dFTKirbyAnimBoomerangAirCatch_joint11[102];
extern u16 dFTKirbyAnimBoomerangAirCatch_joint12[16];
extern u16 dFTKirbyAnimBoomerangAirCatch_joint14[10];
extern u16 dFTKirbyAnimBoomerangAirCatch_joint15[84];
extern u16 dFTKirbyAnimBoomerangAirCatch_joint17[14];
extern u16 dFTKirbyAnimBoomerangAirCatch_joint19[114];
extern u16 dFTKirbyAnimBoomerangAirCatch_joint20[88];
extern u16 dFTKirbyAnimBoomerangAirCatch_joint22[14];
extern u16 dFTKirbyAnimBoomerangAirCatch_joint23[122];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTKirbyAnimBoomerangAirCatch_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimBoomerangAirCatch_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimBoomerangAirCatch_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimBoomerangAirCatch_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimBoomerangAirCatch_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimBoomerangAirCatch_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimBoomerangAirCatch_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimBoomerangAirCatch_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTKirbyAnimBoomerangAirCatch_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTKirbyAnimBoomerangAirCatch_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimBoomerangAirCatch_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTKirbyAnimBoomerangAirCatch_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTKirbyAnimBoomerangAirCatch_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTKirbyAnimBoomerangAirCatch_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTKirbyAnimBoomerangAirCatch_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTKirbyAnimBoomerangAirCatch_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTKirbyAnimBoomerangAirCatch_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTKirbyAnimBoomerangAirCatch_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimBoomerangAirCatch_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 600, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 240,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), -240, -392,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), -300, 137,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimBoomerangAirCatch_joint2[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 11), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), -268,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimBoomerangAirCatch_joint3[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 0, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 0, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 357, 28, 536, 73, 178, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 312, -6, 536, -38, 178, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 268, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimBoomerangAirCatch_joint5[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 178, -120, -120, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -60, -40, -30, 40, -60, 160,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -268, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 268, 48, -150, -65, -90, -43, 120, 130,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 6), 268, -19, 0, 12, -150, 23, 120, -71,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), -90,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 178,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -120, 29, -90, -29, 30, -119,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -120, -120, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimBoomerangAirCatch_joint6[124] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2648, -235, -612, -460, -1895, -517,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, -99, -1073, -219, -2412, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2449, 108, -1052, -1, -2604, -289,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1152, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2629, 108, -2991, -311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2665, 51, -3228, -238,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2813, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -3663, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3679, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -3607, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2788, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2896, 156,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1121, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -838, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3533, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3096, 52, -3317, 282,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3028, 343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2969, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2888, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3689, 481, -844, -33, -3446, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 4181, 130, -964, -46, -3529, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4253, 71, -998, -34, -3500, 29,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimBoomerangAirCatch_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTKirbyAnimBoomerangAirCatch_joint8[32] = {
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
u16 dFTKirbyAnimBoomerangAirCatch_joint10[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -178, 120, -120, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 29, 0, 59, 30, 80, -120, 120, 0, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 178, 16, 178, 16, 180, 109, -30, 65, -60, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 178, -12, 178, -25, 180, -34, -30, -51, -60, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, -178, 120, -120, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimBoomerangAirCatch_joint11[102] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2180, -1201, 999, 370, -283, -895,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 979, -557, 1369, 144, -1178, -431,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1064, 235, 1289, -132, -1146, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 989, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1450, 579, -1048, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2223, 594, -643, 372,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2846, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -199, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1002, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1022, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2872, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2631, -85,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -213, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -304, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2529, -116, 1018, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 2178, -10, 994, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2177, -1, 996, 1, -286, 17,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimBoomerangAirCatch_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimBoomerangAirCatch_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimBoomerangAirCatch_joint15[84] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 295, -399, -302, 126, 237, 239,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -98, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -104, -200, 477, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -106, 6, 466, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 334, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -35, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -86, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -218, -49,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 344, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 243, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -33, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 270, 43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -262, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -302, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 297, 26, -300, 1, 233, -9,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimBoomerangAirCatch_joint17[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimBoomerangAirCatch_joint19[114] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -322, -826, -158, -190, -2864, 440,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -1149, -383, -348, -79, -2424, 203, 4096, 136, 4096, 136, 4096, 136,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1089, 103, -318, 58, -2456, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2564, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -429, 34, 31, 28,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, -58, 4096, -58, 4096, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -421, -1, 43, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -399, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 71, 16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2564, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -2864, -4,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 3686, 3686, 3686,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -364, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -320, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 77, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -136, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -322, -1, -158, -21, -2867, -3,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimBoomerangAirCatch_joint20[88] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -297, 187, 300, -64, 233, -271,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -121, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 321, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -38, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -76, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -406, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -187, -83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -484, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 322, 0, -418, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -140, 134,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 302, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -479, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -616, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -589, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -317, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 207, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -297, 20, 300, -2, 233, 26,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimBoomerangAirCatch_joint22[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 19), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTKirbyAnimBoomerangAirCatch_joint23[122] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 322, 11, 158, -146, 349, -66,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 37, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 453, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 547, -2,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 136, 4096, 136, 4096, 136,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 84, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 261, -7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, -58, 4096, -58, 4096, -58,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 454, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 395, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 545, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 677, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 254, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 219, -54,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 3686, 3686, 3686,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 641, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 338, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 355, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 173, -30, 348, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 322, -16, 158, -15, 349, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
