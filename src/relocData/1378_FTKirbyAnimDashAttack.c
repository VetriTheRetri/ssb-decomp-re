/* AnimJoint data for relocData file 1378 (FTKirbyAnimDashAttack) */
/* 2720 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimDashAttack_joint1[20];
extern u16 dFTKirbyAnimDashAttack_joint2[98];
extern u16 dFTKirbyAnimDashAttack_joint3[18];
extern u16 dFTKirbyAnimDashAttack_joint4[90];
extern u16 dFTKirbyAnimDashAttack_joint6[42];
extern u16 dFTKirbyAnimDashAttack_joint7[170];
extern u16 dFTKirbyAnimDashAttack_joint8[16];
extern u16 dFTKirbyAnimDashAttack_joint10[46];
extern u16 dFTKirbyAnimDashAttack_joint11[164];
extern u16 dFTKirbyAnimDashAttack_joint12[16];
extern u16 dFTKirbyAnimDashAttack_joint14[52];
extern u16 dFTKirbyAnimDashAttack_joint15[134];
extern u16 dFTKirbyAnimDashAttack_joint17[16];
extern u16 dFTKirbyAnimDashAttack_joint19[160];
extern u16 dFTKirbyAnimDashAttack_joint20[104];
extern u16 dFTKirbyAnimDashAttack_joint22[168];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimDashAttack_joints[] = {
	(u32)dFTKirbyAnimDashAttack_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimDashAttack_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimDashAttack_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimDashAttack_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimDashAttack_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimDashAttack_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimDashAttack_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimDashAttack_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimDashAttack_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimDashAttack_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimDashAttack_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimDashAttack_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimDashAttack_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimDashAttack_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimDashAttack_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimDashAttack_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF025F, /* [22] END */
};

/* Joint 1 */
u16 dFTKirbyAnimDashAttack_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 1200, 1524,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 13), 3240, 1200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 7), 4200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 16), 4200,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimDashAttack_joint2[98] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 720, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 804, 75,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 960, 640,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 960, -576,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 9), 982,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 390, 4915, 4915, 2048,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 600, 4096, 4096, 4096,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 4), 982,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 10), 600,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 18), 4096, 4096, 4096,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1161, 63,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 1429,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 780, 359,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 1429,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 960, -299,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 480, 4505, 3276, 4505,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 0, 600, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimDashAttack_joint3[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 28), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -268,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimDashAttack_joint4[90] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 89, 89, 4300, 3686, 4300,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 0, -3, 0, -3, 4300, -58, 4300, 117, 3891, -58,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4505, 117, 4505, -234, 3276, 117,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4505, -163, 3276, 81, 4505, 81,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 16), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 0, 14, 3686, -102, 4915, 204, 3686, -102,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), 178,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 102, 4096, -204, 4096, 102,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 0, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimDashAttack_joint6[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -89, -134, 178, -180, -180,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 28), 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 0, 0, -120, -120,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 36), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 24), -120, -120,
	ftAnimSetValRateT(FT_ANIM_TRAX, 8), -60, 79,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 8), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimDashAttack_joint7[170] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 824, -1, -1176, -1, -126, 13,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -111, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -1203, -7,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 24), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 850, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 842, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 990, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -143, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -113, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 940, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 902, 20,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -141, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -170, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 884, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 927, 81,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1206, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1106, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 4), 3072, 170,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1037, 145, -287, -157,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1508, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -621, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1109, 36, -670, -104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1095, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1784, 413, -831, -396,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2335, 330, -1462, -419,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1687, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2446, 65, -1322, -126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1375, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2419, -12,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1655, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1386, -6, -1623, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, -6, -1387, -1, -1608, 14,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimDashAttack_joint8[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimDashAttack_joint10[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -89, -134, -178, 180, -180, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ | FT_ANIM_TRAZ, 28), -178, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 0, 0, 120, -120,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 36), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 24), 120, -120,
	ftAnimSetValRateT(FT_ANIM_TRAX, 8), 60, -79,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimDashAttack_joint11[164] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2423, -5, 1134, 13, -114, 12,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 1200, 8,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 24), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 2380, 14, -99, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2391, -26, -90, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -126, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2255, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2306, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2329, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -103, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -93, 6,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2342, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 2340, -47,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1209, 3, -88, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1072, -38, -170, -41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 3072, 170,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2289, -43,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2254, 6, 1019, -95, -208, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 421, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2301, -68, -158, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2117, -35, -323, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -119, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2230, 109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2388, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 310, -92, -72, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 225, -9, -14, 23,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2405, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, 6, 217, -7, 0, 14,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimDashAttack_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimDashAttack_joint14[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, -1072,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 204, -120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -804, -21, 0, -42, -1072, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -714, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), -1161, -714,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -804, 32, -446, 32, -1072, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -357, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -804, -1072,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -804, -1072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 0, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimDashAttack_joint15[134] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -114, -12, -235, -27, 884, -23,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -292, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 7, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 698, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 392, -230,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 164, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -285, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -297, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 15, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 104, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 159, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 233, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 65, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -81, -34,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 233, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 334, 46,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -293, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -327, 34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -118, -20, 378, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 233, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -38, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -302, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -302, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 237, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -25, 8, 233, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 4, -302, 0, 233, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimDashAttack_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimDashAttack_joint19[160] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1364, -32, -1539, -14, -1803, 66,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1732, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1329, 96, -1468, 359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1524, 142, -1018, 333,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -728, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1603, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1677, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1677, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -720, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -622, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1594, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1736, 18,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1677, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1668, -15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -545, 69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -599, -129,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1751, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1603, -26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -736, -100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1190, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1677, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1455, 77,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1562, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1214, 28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1407, 12, -1429, -203,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1445, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1708, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1263, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1297, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1436, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1298, 1, -1431, 4, -1708, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimDashAttack_joint20[104] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1621, -23, -1851, -9, -2140, -8,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -1634, -16, -1937, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2006, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1942, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1942, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1644, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1698, -23, -1910, 13, -1375, 134,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1584, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -1912, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1375, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -1371, -9,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -1584,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1628, -2,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1390, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1375, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1879, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1911, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1619, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1582, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1587, -4, -1911, 0, -1375, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimDashAttack_joint22[168] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x280E, 0x00C9, 0x0001, 0x0046, 0xFFF3, 0x00FB, 0x0061, 0x4F00, 0x1000, 0x1000, 0x1000, 0x2805, 0x0005, 0xFF76, 0x0000, 0x200B, 0x0004, 0x001F, 0xFFFA, 0x02D8, 0x0011, 0x200B, 0x0001, 0x001C, 0xFFFD, 0x02DC, 0x0002, 0x2809, 0x000A, 0x0309, 0x0005, 0x2803, 0x0010, 0xFF95, 0xFFE8, 0x2005, 0x0001, 0xFF78, 0x0002, 0x2005, 0x0007, 0xFFB9, 0xFFFF, 0x2005, 0x0001, 0xFFB8, 0x0000, 0x2805, 0x000D, 0xFFC5, 0xFFF1, 0x0801, 0x0001, 0x2009, 0x0001, 0x0312, 0x000F, 0x2809, 0x000A, 0x03F4, 0xFF7D, 0x0801, 0x0005, 0x2003, 0x0001, 0xFF7F, 0xFFEF, 0x2803, 0x0007, 0x0007, 0x001A, 0x0801, 0x0004, 0x2009, 0x0001, 0x0367, 0xFF9A, 0x2809, 0x0004, 0x0259, 0xFF5A, 0x2005, 0x0001, 0xFFBC, 0xFFFF, 0x2805, 0x0006, 0x0062, 0x0036, 0x0801, 0x0001, 0x2003, 0x0001, 0x002D, 0x002F, 0x2803, 0x0008, 0x013B, 0xFFFD, 0x0801, 0x0001, 0x2009, 0x0001, 0x018A, 0xFF28, 0x2809, 0x0004, 0xFF9E, 0xFFF3, 0x0801, 0x0002, 0x2005, 0x0001, 0x008A, 0x0019, 0x2805, 0x0004, 0x00AC, 0x0007, 0x0801, 0x0001, 0x2009, 0x0001, 0xFF9E, 0x0000, 0x2809, 0x0002, 0xFF9D, 0x0000, 0x0801, 0x0001, 0x2003, 0x0001, 0x0137, 0xFFFE, 0x200F, 0x0001, 0x0135, 0xFFFF, 0x00B0, 0x0004, 0xFF9D, 0x0000, 0x0000, 0x0000, 0x0000,
};
