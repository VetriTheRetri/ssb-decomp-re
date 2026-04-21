/* AnimJoint data for relocData file 1287 (FTKirbyAnimDamaged2) */
/* 2320 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimDamaged2_joint1[122];
extern u16 dFTKirbyAnimDamaged2_joint2[10];
extern u16 dFTKirbyAnimDamaged2_joint3[42];
extern u16 dFTKirbyAnimDamaged2_joint5[34];
extern u16 dFTKirbyAnimDamaged2_joint6[170];
extern u16 dFTKirbyAnimDamaged2_joint7[16];
extern u16 dFTKirbyAnimDamaged2_joint9[54];
extern u16 dFTKirbyAnimDamaged2_joint10[136];
extern u16 dFTKirbyAnimDamaged2_joint11[14];
extern u16 dFTKirbyAnimDamaged2_joint13[10];
extern u16 dFTKirbyAnimDamaged2_joint14[88];
extern u16 dFTKirbyAnimDamaged2_joint16[14];
extern u16 dFTKirbyAnimDamaged2_joint18[120];
extern u16 dFTKirbyAnimDamaged2_joint19[114];
extern u16 dFTKirbyAnimDamaged2_joint21[44];
extern u16 dFTKirbyAnimDamaged2_joint22[128];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimDamaged2_joints[] = {
	(u32)dFTKirbyAnimDamaged2_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimDamaged2_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimDamaged2_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimDamaged2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimDamaged2_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimDamaged2_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimDamaged2_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimDamaged2_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimDamaged2_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimDamaged2_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimDamaged2_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimDamaged2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimDamaged2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimDamaged2_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimDamaged2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimDamaged2_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimDamaged2_joint1[122] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 660, 240, -240, -299,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 2), 4915, 4915,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 9), 780,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 15), -600, -101,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 1), 2048,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 6144,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 3276, 3276,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 3686,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 4300, 4300,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 4505,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 3891, 3891,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 720, -264,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 3891,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 4198, 4198,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 4300,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 3993, 3993,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 450, -120, -480, 600,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 4505,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 2), 4505, 3072,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 600, 0, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimDamaged2_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimDamaged2_joint3[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -268, -44, 536, 33, -178, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -714, 22, 536, -13, -357, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 164, 89, 275, -67, -88, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimDamaged2_joint5[34] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), -60, -89, -120, -29,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 15), -180, -25, -60, 25,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), -120, 180, -60, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimDamaged2_joint6[170] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2412, 137, -217, -302, 0, -614,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2274, 166, -614, -305,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -688, -63,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 19), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2080, -14, -611, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -789, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2303, -149, -646, 86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -519, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2379, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2278, 53,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -616, -89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -593, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -900, -75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1012, -140,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2211, 126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1753, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1221, -201,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1561, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1715, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1529, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -567, 41, -1558, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -307, 65, -2013, -139,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1262, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1091, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1010, 235, -282, -119, -2110, -190,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -620, 826, -545, -74, -2393, -533,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 642, 697, -430, 131, -3177, -403,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 774, 81, -283, 105, -3200, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 29, -220, 62, -3216, -16,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimDamaged2_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimDamaged2_joint9[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 11, 178, 11, 150, 44, 0, -14, 60, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 178, -7, 90, -37, -30, -37, -60, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), 178,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 60, -90, -90, 30, 0, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimDamaged2_joint10[136] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, -633, 217, 203, 0, -1152,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1437, -273, 421, 97, -1152, -517,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 19), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1351, 11, 413, -1, -1035, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1716, 43, 327, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1393, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1369, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1149, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1628, 80, 396, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1438, 62, 546, 31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1146, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1044, -114,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1376, 51, 573, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 501, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1385, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1423, 17, -1168, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1180, 285, -1180, 270,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -778, 283, 471, -97, -699, 451,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 231, -44, -72, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -612, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -736, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, -67, 217, -14, 0, 72,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimDamaged2_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimDamaged2_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimDamaged2_joint14[88] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, -582, -302, -190, 237, -69,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 109, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -893, -103, -525, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -814, 130, -554, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -428, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -519, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -639, -119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -608, 76,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 54, -97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -661, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -505, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 77, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -14, -101, -527, 156,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -39, 20, 206, 60,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -339, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 15, -302, 37, 237, 30,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimDamaged2_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimDamaged2_joint18[120] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -309, 150, -176, 395, -96, 325,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 429, 59, 373, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -159, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 57, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -217, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 337, -133, 346, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 29, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 455, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -228, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -57, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 94, 63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 56, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -116, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -175, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 467, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 178, -127,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 64, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -172, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -212, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -341, 43,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 38, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -60, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -309, 31, -176, -4, -96, -35,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimDamaged2_joint19[114] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, -94, 302, -65, 233, -198,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 104, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -73, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 39, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -171, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -31, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -270, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -176, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -100, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -117, -6, 93, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -101, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 12, -16,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -299, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -164, -35, -529, -123,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -249, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 25, 23, -545, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 262, 102, -223, 333,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -222, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, 122, 322, 19, 213, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, 4, 302, -19, 233, 19,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimDamaged2_joint21[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 426, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 521, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 577, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 553, -340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimDamaged2_joint22[128] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, -89, 176, -30, -99, 85,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 202, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 239, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 146, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 12, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 177, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 247, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 135, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 173, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 86, 16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 264, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 317, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 145, 0, 100, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 108, 36, 88, 13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 339, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 157, 26, 100, 0, 170, -127,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 244, 72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 149, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 84, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -182, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 317, 38, -291, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 321, -3, -109, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, -11, 176, 27, -99, 9,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
