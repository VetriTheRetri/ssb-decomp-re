/* AnimJoint data for relocData file 1290 (FTKirbyAnimDamageX2) */
/* 2496 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimDamageX2_joint1[130];
extern u16 dFTKirbyAnimDamageX2_joint2[10];
extern u16 dFTKirbyAnimDamageX2_joint3[50];
extern u16 dFTKirbyAnimDamageX2_joint5[66];
extern u16 dFTKirbyAnimDamageX2_joint6[158];
extern u16 dFTKirbyAnimDamageX2_joint7[16];
extern u16 dFTKirbyAnimDamageX2_joint9[68];
extern u16 dFTKirbyAnimDamageX2_joint10[148];
extern u16 dFTKirbyAnimDamageX2_joint11[16];
extern u16 dFTKirbyAnimDamageX2_joint13[10];
extern u16 dFTKirbyAnimDamageX2_joint14[100];
extern u16 dFTKirbyAnimDamageX2_joint16[16];
extern u16 dFTKirbyAnimDamageX2_joint18[116];
extern u16 dFTKirbyAnimDamageX2_joint19[116];
extern u16 dFTKirbyAnimDamageX2_joint21[50];
extern u16 dFTKirbyAnimDamageX2_joint22[134];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimDamageX2_joints[] = {
	(u32)dFTKirbyAnimDamageX2_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimDamageX2_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimDamageX2_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimDamageX2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimDamageX2_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimDamageX2_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimDamageX2_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimDamageX2_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimDamageX2_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimDamageX2_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimDamageX2_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimDamageX2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimDamageX2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimDamageX2_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimDamageX2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimDamageX2_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimDamageX2_joint1[130] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 660, 239, -360, -959,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 2), 4915, 4915,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 720, 106, -480, -128,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 1), 2048,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 6144,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 3276, 3276,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 780, -39,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 12), -600,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 3686,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 4300, 4300,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 4505,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 3891, 3891,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 6), 660,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 3891,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 4198, 4198,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 4300,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 3993, 3993,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 450, -60, -480, 600,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 4505,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 2), 4505, 3072,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 600, 0, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimDamageX2_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimDamageX2_joint3[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 0, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 0, 11, -178, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 44, 5, -268, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 89, 8, -357, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 12), -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 178, -11, -178, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimDamageX2_joint5[66] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -178, -44, -89, -22, -120, -239, -59, -119, -60, -119,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY, 3), -178, 5, -60, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), -89, -120, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 12), -89, 11, -89, 11, -60, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 12), -120, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 11, 89, 11, -120, 120, -60, 60, 30, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimDamageX2_joint6[158] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, -845, -1387, 849, -1608, 342,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1567, -357, -538, 417, -1265, 101,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 19), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1698, 127, -553, 5, -1404, -138,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1951, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1760, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -369, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -194, 69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -448, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1934, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1693, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1692, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1501, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -447, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -365, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1679, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1697, 89,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -356, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -389, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1525, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1853, 279, -1674, -255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2257, 333, -2036, -318,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2739, -307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2520, 192,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2992, 560,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3763, 500, -3082, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3993, 129, -263, 85, -3197, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4021, 27, -217, 45, -3216, -19,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimDamageX2_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimDamageX2_joint9[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 178, 44, 150, 299, -60, -119,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAZ, 1), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 178, -5, 0, -5, 150, -32, 0, -32,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), -60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 12), 89, -11, -89, -5, 90, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), -60, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -11, -89, 11, 120, -90, -60, 60, 0, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimDamageX2_joint10[148] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, 1216, 217, 1074, 0, 400,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3629, 445, 1292, 575, 400, 166,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 19), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3304, -107, 1369, 58, 332, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 352, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1301, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 3568, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3620, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3485, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 319, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 130, -48,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3517, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 3420, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1303, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1132, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 87, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 401, 75,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3482, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3787, 226,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1130, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1195, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 480, 213,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1301, 353,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4110, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4291, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4101, -135, 1334, 97, 1535, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4021, -80, 1391, 56, 1608, 73,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimDamageX2_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimDamageX2_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimDamageX2_joint14[100] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1584, 416, -1305, 82, -1371, -531,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2263, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1245, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1902, -299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1970, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2007, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2180, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1937, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2052, 115,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2347, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1245, -1, -2032, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -1145, 24, -2148, 119,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2444, 86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2089, -197,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1123, 5, -2002, 178,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1271, -55, -1421, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1883, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1607, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1584, -22, -1305, -34, -1371, 49,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimDamageX2_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimDamageX2_joint18[116] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -309, -360, -176, -7, -96, 562,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -924, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -189, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 466, 369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 641, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 504, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -832, 139,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -518, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -143, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -261, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 515, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 687, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -611, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -772, -56,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -256, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -186, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 720, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 397, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -836, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -671, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -562, 89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -339, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 229, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -63, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -309, 29, -176, 9, -96, -32,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimDamageX2_joint19[116] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, -160, 302, -127, 237, -392,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 36, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -136, 34, -155, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 92, 81, -142, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -282, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -161, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -164, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 0, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 24, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 40, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -33, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -93, -45,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -267, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -269, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -152, -36, -436, -115,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -230, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -170, 330,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 63, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 350, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -186, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 39, 104, 247, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -17, 302, -47, 233, -14,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimDamageX2_joint21[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 143,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 143, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 300, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 469, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 457, -312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimDamageX2_joint22[134] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, -115, 176, -66, -96, 143,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 34, 48, 209, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 110, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -85, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 161, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 117, 73, 228, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 109, -77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 315, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 162, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 70, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 26, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 40, -17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 92, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 86, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 26, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 132, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 199, -107,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 95, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 124, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 91, -108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -243, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 156, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 388, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -107, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, -79, 176, 52, -99, 7,
	ftAnimEnd(),
};
