/* AnimJoint data for relocData file 1298 (FTKirbyAnimDamageFlyX1) */
/* 2096 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimDamageFlyX1_joint1[116];
extern u16 dFTKirbyAnimDamageFlyX1_joint2[18];
extern u16 dFTKirbyAnimDamageFlyX1_joint3[14];
extern u16 dFTKirbyAnimDamageFlyX1_joint5[32];
extern u16 dFTKirbyAnimDamageFlyX1_joint6[138];
extern u16 dFTKirbyAnimDamageFlyX1_joint7[14];
extern u16 dFTKirbyAnimDamageFlyX1_joint9[36];
extern u16 dFTKirbyAnimDamageFlyX1_joint10[122];
extern u16 dFTKirbyAnimDamageFlyX1_joint11[14];
extern u16 dFTKirbyAnimDamageFlyX1_joint13[10];
extern u16 dFTKirbyAnimDamageFlyX1_joint14[96];
extern u16 dFTKirbyAnimDamageFlyX1_joint16[14];
extern u16 dFTKirbyAnimDamageFlyX1_joint18[128];
extern u16 dFTKirbyAnimDamageFlyX1_joint19[98];
extern u16 dFTKirbyAnimDamageFlyX1_joint21[14];
extern u16 dFTKirbyAnimDamageFlyX1_joint22[140];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimDamageFlyX1_joints[] = {
	(u32)dFTKirbyAnimDamageFlyX1_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimDamageFlyX1_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimDamageFlyX1_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimDamageFlyX1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimDamageFlyX1_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimDamageFlyX1_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimDamageFlyX1_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimDamageFlyX1_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimDamageFlyX1_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimDamageFlyX1_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimDamageFlyX1_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimDamageFlyX1_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimDamageFlyX1_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimDamageFlyX1_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimDamageFlyX1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimDamageFlyX1_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimDamageFlyX1_joint1[116] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -178, -100, 89, 44, -178, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 2), 4915, 4915,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -402, -12, 178, -3, -178, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 1), 2048,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 6144,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 3276, 3276,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), -536, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 2867,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 4505, 4505,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 5324,
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
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 8), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 7), 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimDamageFlyX1_joint2[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 26), 804,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimDamageFlyX1_joint3[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimDamageFlyX1_joint5[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 89, -120, -60,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 19), 89, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), -180,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 16), -180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 178, -210, -150,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimDamageFlyX1_joint6[138] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -570, -217, -398, 0, 354,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 233, -196, 354, 135,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -696, 62,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 29), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 411, -222, 271, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, -426, -491, 92, 881, 395,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -542, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -440, -201, 1062, 146,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1117, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -652, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -514, 144, -508, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -353, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -513, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1020, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1191, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -456, -110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -496, 89,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1110, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1133, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -412, 47, -492, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -550, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -509, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -494, 10, 1118, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -796, -14, 1595, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, -7, -545, 4, 1608, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimDamageFlyX1_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimDamageFlyX1_joint9[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 20), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 1), -89, 120, -60,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 19), -89, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 180,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 16), 180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -178, 210, -150, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimDamageFlyX1_joint10[122] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, -504, 217, 551, 0, -593,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 769, 383, -593, -353,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1458, 104,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 29), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 985, 136, -707, 114,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1093, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1099, 310, -364, 259,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -815, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -188, 111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -199, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -906, -40, 1089, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -820, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1069, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -199, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -216, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -838, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -804, 1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -217, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -5, 10,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1063, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1060, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 0, 1059, 0, 0, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimDamageFlyX1_joint11[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimDamageFlyX1_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimDamageFlyX1_joint14[96] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1584, 401, -1305, -44, -1371, -596,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2156, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -1410, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1967, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1889, 100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1713, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1873, -217,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1750, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1713, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -1550, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1737, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 1610, -30,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1411, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1218, 9,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1579, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1531, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1514, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1496, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1520, -11, -1214, 4, -1483, 13,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimDamageFlyX1_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimDamageFlyX1_joint18[128] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -309, 213, -176, -295, -96, 159,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -668, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -34, -54,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 63, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -30, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -71, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -412, 198,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -300, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -76, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 9, -26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -285, 8, -73, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -292, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -104, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -30, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -20, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -25, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -149, -48,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 3686, 3686, 3686,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -302, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -475, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -101, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 56, 37,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -196, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -217, -20, -481, -6, 82, 26,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimDamageFlyX1_joint19[98] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, -86, 302, -88, 233, -195,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 136, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -65, 22, 37, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 66, 30, 80, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 186, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 10, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 45, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 3, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 136, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 308, 36,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 186, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 122, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 28, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 76, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 81, 3, 343, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 84, 0, 388, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 84, 0, 394, 6, 120, -2,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimDamageFlyX1_joint21[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimDamageFlyX1_joint22[140] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 8, 176, -190, -99, 553,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 257, -110,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -100, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, 385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 670, 164,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 818, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 101, -101,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 156, -36,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -102, 0, 813, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -109, 10, 812, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 106, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 114, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 117, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 10, -60,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 3686, 3686, 3686,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -50, 9, -88, 47, 795, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 390, -204,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 452, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 29, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 351, 172,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 231, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 200, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 476, 14, 105, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 217, -13, 481, 5, 79, -26,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
