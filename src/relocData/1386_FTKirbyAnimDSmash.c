/* AnimJoint data for relocData file 1386 (FTKirbyAnimDSmash) */
/* 3056 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimDSmash_joint1[56];
extern u16 dFTKirbyAnimDSmash_joint2[36];
extern u16 dFTKirbyAnimDSmash_joint3[36];
extern u16 dFTKirbyAnimDSmash_joint4[74];
extern u16 dFTKirbyAnimDSmash_joint6[46];
extern u16 dFTKirbyAnimDSmash_joint7[204];
extern u16 dFTKirbyAnimDSmash_joint8[24];
extern u16 dFTKirbyAnimDSmash_joint10[46];
extern u16 dFTKirbyAnimDSmash_joint11[198];
extern u16 dFTKirbyAnimDSmash_joint12[22];
extern u16 dFTKirbyAnimDSmash_joint14[10];
extern u16 dFTKirbyAnimDSmash_joint15[158];
extern u16 dFTKirbyAnimDSmash_joint17[44];
extern u16 dFTKirbyAnimDSmash_joint19[172];
extern u16 dFTKirbyAnimDSmash_joint20[162];
extern u16 dFTKirbyAnimDSmash_joint22[194];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimDSmash_joints[] = {
	(u32)dFTKirbyAnimDSmash_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimDSmash_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimDSmash_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimDSmash_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimDSmash_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimDSmash_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimDSmash_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimDSmash_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimDSmash_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimDSmash_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimDSmash_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimDSmash_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimDSmash_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimDSmash_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimDSmash_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimDSmash_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF02B1, /* [22] END */
};

/* Joint 1 */
u16 dFTKirbyAnimDSmash_joint1[56] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 3891, -68, 4915, 273, 3891, -68,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 3891, 204, 4915, -614, 3891, 204,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4505, 3072, 4505,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4505, 3072, 4505,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 18), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4300, 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimDSmash_joint2[36] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 600,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 960, 480,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 960, -639,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 480,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 22), 480,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 960, 95,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 16), 600,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimDSmash_joint3[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 0, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 0, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1072, -536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -3216, -417,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 18), -6433, -52,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -6702,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 16), -6702,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTKirbyAnimDSmash_joint4[74] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 312, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY, 8), 312, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 30), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -178, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -178, 74,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 268,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY, 22), 312, -17, 4096, -15, 4096, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 22), 268,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 10), 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), -89, -26, 3891, 40, 4505, -163, 4096, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY, 5), 0, 4, 4300, 19, 3276, -39,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 5), 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 0, 312, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimDSmash_joint6[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 268, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -89, 268, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -536, -22, -536, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -536, 16, -536, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimDSmash_joint7[204] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2412, -14, -217, -388, 0, 44,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 2048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2426, 105, -605, -634, 44, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2202, 112, -1486, -405, -113, -87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2179, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -158, 18,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 28), 2048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1416, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1297, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2167, -11, -1267, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2201, -525, -1483, -140, -114, 344,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1233, 365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3218, -770, -1548, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3742, -263, -1146, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3745, -2, -1113, 32, 1262, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1377, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -3792, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1081, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -1120, -11,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1334, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1129, 15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3786, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -3898, -79,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1180, 104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1584, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1137, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1416, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3974, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -4026, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1615, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1642, 12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1369, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1389, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 16), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4030, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -4021, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1652, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1609, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4021, 0, -1387, 2, 1608, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTKirbyAnimDSmash_joint8[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 38), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimDSmash_joint10[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -268, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 89, -268, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 536, 22, 536, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 536, -16, 536, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimDSmash_joint11[198] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 14, 1391, -388, 1608, 44,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 2048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 818, -105, 1002, -634, 1653, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 593, -113, 121, -427, 1495, -83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 573, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1460, 9,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 28), 2048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 146, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 177, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 124, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 556, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 593, 541, 1493, 362,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2840, 340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1639, 769, 5, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2132, 247, 462, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2133, 1, 498, 33, 2866, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 2193, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 485, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 2984, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2942, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2735, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2183, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2288, 78,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2790, 104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3193, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 475, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 192, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2365, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 2417, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3224, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 3250, 12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 242, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 221, -2,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 16), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2421, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 2413, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3260, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 3218, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, 0, 220, -1, 3216, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTKirbyAnimDSmash_joint12[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -6,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimDSmash_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 56),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimDSmash_joint15[158] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, 72, -302, 20, 237, -122,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 25, 10, 12, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -227, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -242, -87,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 6144,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -575, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 84, 168, 17, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 362, 138, -221, -119,
	ftAnimSetValRateT(FT_ANIM_SCAX, 22), 4096, -409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 362, -1, -575, 0, -220, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -539, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 258, -59, -93, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 186, -32, -7, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 230, 1, -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 231, 0, -6, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 76, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 211, 33,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -535, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -267, -6,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 31, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -24, 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 21), 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -279, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -302, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 233, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 237, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 2, -302, 0, 233, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTKirbyAnimDSmash_joint17[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 289, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 288, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 107, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 31), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimDSmash_joint19[172] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1298, 86, 1785, -184, -1704, 236,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1403, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1734, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1248, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1191, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1235, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1362, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1737, -45, 1351, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1643, -284, 1399, 282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1168, -453, 1916, 230, -1264, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 735, -216, 1860, -27, -1071, 96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1857, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 735, 0, -1071, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 665, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -931, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -854, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -825, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1855, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1788, -26,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -823, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -969, -64,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 702, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1294, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1028, -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1490, -164,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1769, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 1785, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1299, -1, -1643, -108,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1298, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1703, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1707, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1704, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1298, 0, 1785, 0, -1708, -3,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimDSmash_joint20[162] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, -6, 302, -104, 233, 1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 125, -32, 221, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 54, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 104, 155,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 6144,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 575, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 54, -243, 183, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -362, -208, -221, -202,
	ftAnimSetValRateT(FT_ANIM_SCAX, 22), 4096, -409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -362, 1, 575, 0, -220, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 541, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -258, 59, -93, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -187, 32, -8, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -223, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 215, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -225, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -73, 51,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 534, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 267, 6,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -31, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 21, 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 21), 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 279, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 302, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 233, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 233, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, 0, 302, 0, 233, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimDSmash_joint22[194] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 289, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 288, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 107, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 32), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x280E, 0xFAEE, 0x0012, 0xF907, 0xFFFC, 0xF954, 0x00F9, 0x4F00, 0x1000, 0x1000, 0x1000, 0x2807, 0x0005, 0xFB17, 0xFFB8, 0xF915, 0x0023, 0x2009, 0x0002, 0xFB27, 0x007E, 0x2009, 0x0001, 0xFB4A, 0x001A, 0x2809, 0x0004, 0xFB46, 0x005E, 0x0801, 0x0002, 0x2007, 0x0001, 0xFAB1, 0x0064, 0xF94D, 0xFF93, 0x2803, 0x0002, 0xFD21, 0x00A0, 0x2005, 0x0001, 0xF839, 0xFFB8, 0x200D, 0x0001, 0xF8BC, 0x0041, 0xFBD1, 0x0045, 0x280D, 0x0004, 0xF8BE, 0x0000, 0xFBE0, 0x0009, 0x2003, 0x0001, 0xFD21, 0x0000, 0x2803, 0x0015, 0xFD67, 0xFFEE, 0x0801, 0x0003, 0x200D, 0x0001, 0xF8BE, 0x0000, 0xFBED, 0x0010, 0x2805, 0x0013, 0xF8A3, 0x000A, 0x2009, 0x0006, 0xFCB1, 0x0005, 0x2009, 0x0001, 0xFCB8, 0x0003, 0x2009, 0x000A, 0xFCD1, 0xFFF6, 0x200B, 0x0001, 0xFD43, 0xFFBF, 0xFCB8, 0xFFD8, 0x280B, 0x0007, 0xFAF2, 0xFFE9, 0xFA2E, 0xFF60, 0x0801, 0x0001, 0x2005, 0x0001, 0xF8B9, 0x001F, 0x2805, 0x0016, 0xF907, 0x0000, 0x0801, 0x0005, 0x200B, 0x0001, 0xFAED, 0x0001, 0xF999, 0xFF94, 0x2803, 0x0010, 0xFAEE, 0x0000, 0x2009, 0x0005, 0xF955, 0x0000, 0x2009, 0x0001, 0xF955, 0x0000, 0x2009, 0x000A, 0xF954, 0x0000, 0x200F, 0x0001, 0xFAEE, 0x0000, 0xF907, 0x0000, 0xF954, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
