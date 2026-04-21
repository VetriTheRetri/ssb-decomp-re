/* AnimJoint data for relocData file 1296 (FTKirbyAnimDamageAir) */
/* 1968 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimDamageAir_joint1[94];
extern u16 dFTKirbyAnimDamageAir_joint2[16];
extern u16 dFTKirbyAnimDamageAir_joint3[42];
extern u16 dFTKirbyAnimDamageAir_joint5[28];
extern u16 dFTKirbyAnimDamageAir_joint6[136];
extern u16 dFTKirbyAnimDamageAir_joint7[14];
extern u16 dFTKirbyAnimDamageAir_joint9[24];
extern u16 dFTKirbyAnimDamageAir_joint10[142];
extern u16 dFTKirbyAnimDamageAir_joint11[8];
extern u16 dFTKirbyAnimDamageAir_joint13[10];
extern u16 dFTKirbyAnimDamageAir_joint14[90];
extern u16 dFTKirbyAnimDamageAir_joint16[8];
extern u16 dFTKirbyAnimDamageAir_joint18[128];
extern u16 dFTKirbyAnimDamageAir_joint19[80];
extern u16 dFTKirbyAnimDamageAir_joint21[14];
extern u16 dFTKirbyAnimDamageAir_joint22[106];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimDamageAir_joints[] = {
	(u32)dFTKirbyAnimDamageAir_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimDamageAir_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimDamageAir_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimDamageAir_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimDamageAir_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimDamageAir_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimDamageAir_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimDamageAir_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimDamageAir_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimDamageAir_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimDamageAir_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimDamageAir_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimDamageAir_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimDamageAir_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimDamageAir_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimDamageAir_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimDamageAir_joint1[94] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, 600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 2), 4915, 4915,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 1), 2048,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 6144,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 3276, 3276,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 3276,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 4505, 4505,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 4915,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 3686, 3686,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 3686,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 4300, 4300,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 4505,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 3891, 3891,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 4), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimDamageAir_joint2[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 2412, 134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 16), 3216,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimDamageAir_joint3[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -156, 536, 89, 89, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -357, -23, 357, -11, -178, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -357, 31, 357, -17, -178, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 268, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimDamageAir_joint5[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -120, -120, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -89, -5, -89, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -89, 4, -89, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 178,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimDamageAir_joint6[136] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1039, -1358, 2221, -205, -287, 512,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 708, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -318, -751, 2015, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -463, -71, 2170, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -460, 111, 2007, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -241, 100, 1943, -19, 602, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -356, -4, 740, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1967, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1891, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1992, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -269, 25, 645, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -344, 32, 675, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1970, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1958, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -297, 15, 630, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 569, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -335, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -261, 86, 1958, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 796, 185, 2166, 55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 470, -105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -218, -107,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 966, 119, 2208, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1036, 69, 2217, 9, -282, -64,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimDamageAir_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimDamageAir_joint9[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 120, -120, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -268, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -268, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), -178,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimDamageAir_joint10[142] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1040, -14, 995, 49, -287, -514,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1054, 108, 1045, -9, -802, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -823, 231, 977, 42, -658, 224,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -343, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1235, 15, -119, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1161, -11, -43, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1245, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -477, -11, -120, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -366, 36, -103, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -69, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -404, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -302, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1264, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1071, -45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -12, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -138, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -355, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -700, -176,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -153, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -486, 44,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -898, -171, 1027, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1050, 17, 987, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -402, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -317, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1039, 11, 996, 8, -286, 30,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimDamageAir_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimDamageAir_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimDamageAir_joint14[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 295, 598, -302, -65, 237, -279,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -463, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 893, 270, -42, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 835, -53, -51, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 43, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 703, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 788, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 744, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 40, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 162, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 759, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 496, -77,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -460, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -308, 11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 419, -70, 193, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 311, -29, 231, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 295, -16, -302, 6, 237, 5,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimDamageAir_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimDamageAir_joint18[128] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1286, -648, 1766, 218, -1255, 74,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1004, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 637, -386, 1985, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 512, -48, 1834, -96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1794, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 657, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -807, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -869, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1756, 14, -839, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -843, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 603, -52, 1824, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 522, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1776, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1806, 17,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -836, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1049, -85,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 501, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1112, 113,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1832, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1780, -22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1135, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1242, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1210, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1267, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1286, 18, 1766, -13, -1255, -13,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimDamageAir_joint19[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -297, -696, 300, 77, 233, -328,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 290, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -993, -293, -95, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -884, 231, -7, 122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 248, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -289, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -286, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -218, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 257, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 233, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 287, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -275, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -276, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -284, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -297, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -297, 0, 300, 0, 233, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimDamageAir_joint21[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimDamageAir_joint22[106] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1930, 767, -1766, 362, -1259, 615,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2697, 282, -1404, 133, -643, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2494, -292, -1500, -91, -687, -107,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1097, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2112, -254, -1587, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1986, -96, -1474, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1902, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1539, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1469, 42, -996, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1035, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1483, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1449, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1756, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1895, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1944, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -999, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1249, -18,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1934, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1930, -4, -1766, -10, -1259, -10,
	ftAnimEnd(),
};
