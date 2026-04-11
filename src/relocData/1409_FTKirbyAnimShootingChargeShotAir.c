/* AnimJoint data for relocData file 1409 (FTKirbyAnimShootingChargeShotAir) */
/* 2128 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimShootingChargeShotAir_joint1[26];
extern u16 dFTKirbyAnimShootingChargeShotAir_joint2[18];
extern u16 dFTKirbyAnimShootingChargeShotAir_joint3[66];
extern u16 dFTKirbyAnimShootingChargeShotAir_joint5[94];
extern u16 dFTKirbyAnimShootingChargeShotAir_joint6[130];
extern u16 dFTKirbyAnimShootingChargeShotAir_joint7[14];
extern u16 dFTKirbyAnimShootingChargeShotAir_joint9[90];
extern u16 dFTKirbyAnimShootingChargeShotAir_joint10[156];
extern u16 dFTKirbyAnimShootingChargeShotAir_joint11[16];
extern u16 dFTKirbyAnimShootingChargeShotAir_joint13[10];
extern u16 dFTKirbyAnimShootingChargeShotAir_joint14[92];
extern u16 dFTKirbyAnimShootingChargeShotAir_joint16[14];
extern u16 dFTKirbyAnimShootingChargeShotAir_joint18[114];
extern u16 dFTKirbyAnimShootingChargeShotAir_joint19[76];
extern u16 dFTKirbyAnimShootingChargeShotAir_joint21[104];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimShootingChargeShotAir_joints[] = {
	(u32)dFTKirbyAnimShootingChargeShotAir_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimShootingChargeShotAir_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimShootingChargeShotAir_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimShootingChargeShotAir_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimShootingChargeShotAir_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimShootingChargeShotAir_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimShootingChargeShotAir_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimShootingChargeShotAir_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimShootingChargeShotAir_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimShootingChargeShotAir_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimShootingChargeShotAir_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimShootingChargeShotAir_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimShootingChargeShotAir_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimShootingChargeShotAir_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimShootingChargeShotAir_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF01E7, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimShootingChargeShotAir_joint1[26] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, -480,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 600, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -600,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 0, 342,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 13), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimShootingChargeShotAir_joint2[18] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 0, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 23), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimShootingChargeShotAir_joint3[66] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 89, 26, 89, 8, 4096, 204, 4096, 204, 4096, -511,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 312, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 89, -59, 89, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4505, 4505, 3072,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -268, 6, 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 23), 268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 3891, 4505, 3891,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 81, 4096, -163, 4096, 81,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4300, 3686, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimShootingChargeShotAir_joint5[94] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -268, -26, 0, -35, -60, -39, 0, 159, 0, 39,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, -11, -268, -44, 0, 11, -60, 120, 0, -120, 0, -180,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -44, -22, 44, 44, 0, 120, -60, -120, -90, -180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), -446,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 2), -89, -3, -268, 14, 178, 11, -90, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, -60,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -89, 3, -268, 11, 0, -64, -60, -32, -120, 48,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 178,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, 0, 178,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -120, -73, -120, -36, 0, 73,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -120, -120, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimShootingChargeShotAir_joint6[130] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1024, 49, -120, 1, -866, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 948, -119,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1278, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -257, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -377, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -330, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 791, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 890, 40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -323, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -399, -65,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 930, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1275, 138,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1311, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1828, -226,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1466, 274,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2362, 135,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -451, -37, -2062, -200,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2142, 126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -606, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2442, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2624, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2655, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2646, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2006, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1903, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2648, 2, -612, -5, -1895, 7,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimShootingChargeShotAir_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 28), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimShootingChargeShotAir_joint9[90] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 536, 53, 178, 53, 30, -119, -30, 79, -150, -119,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 35, 536, -78, 178, -111, 30, -40, -30, -120, -150, 120,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -17, -120, -51, -60, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 142, -33, 223, -78, -268, -134,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -134, -23, -357, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -134, 5, 223, -9, -357, 7, 0, 32, -120, -16, -90, 32,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 60, 73, 0, 55,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, 0, -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), -150,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 120, -120, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimShootingChargeShotAir_joint10[156] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 416, -93, 1047, -22, 572, -30,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1162, 82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 380, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 385, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 714, 310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1007, 145, 1214, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1440, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1004, -85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 756, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 228, -109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -73, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 694, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 307, -95,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -107, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -613, -307,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1438, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 945, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 176, -211,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1177, -183,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -988, -300,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1235, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 922, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 889, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1287, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1310, 131, -1143, 263,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -287, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1024, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -756, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -813, -85, 951, 45, -206, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1004, -54, 996, 9, -262, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1036, -32, 998, 2, -283, -21,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimShootingChargeShotAir_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimShootingChargeShotAir_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimShootingChargeShotAir_joint14[92] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 123, 218, -328, 49, -4, -317,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 445, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -268, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -480, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -442, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 67, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 352, -110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 23, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -312, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -324, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 132, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 385, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 359, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 241, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -319, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -303, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 97, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 278, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 295, 16, -302, 0, 237, -3,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimShootingChargeShotAir_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 28), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimShootingChargeShotAir_joint18[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 1358, -69, 1388, -39, -864, 185, 4096, 37, 4096, 37, 4096, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1196, 49,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, -28, 4096, -28, 4096, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1434, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -655, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -656, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -888, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1264, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1512, -27,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 23), 3686, 3686, 3686,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -908, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1162, -35,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1447, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1686, 42,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1195, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1257, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1481, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1296, -19,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1726, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1756, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1286, -10, 1766, 10, -1255, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimShootingChargeShotAir_joint19[76] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -78, -82, 241, -37, -182, -192,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -20, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 230, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -457, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 261, -10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -267, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 221, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 298, 3,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 251, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 236, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -289, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -297, -7, 300, 1, 233, -2,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimShootingChargeShotAir_joint21[104] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x270E, 0xF9DD, 0x0001, 0xF9C0, 0xFFF9, 0xFB80, 0x0096, 0x1000, 0x0025, 0x1000, 0x0025, 0x1000, 0x0025, 0x2F01, 0x0006, 0x1000, 0xFFE4, 0x1000, 0xFFE4, 0x1000, 0xFFE4, 0x2803, 0x0019, 0xFAA8, 0x001F, 0x2805, 0x001B, 0xF92D, 0xFFF0, 0x2009, 0x0004, 0xFC16, 0xFFB9, 0x2009, 0x0001, 0xFBC1, 0xFFB5, 0x2809, 0x000C, 0xFB84, 0xFFFC, 0x0801, 0x0001, 0x4701, 0x0017, 0x0E66, 0x0E66, 0x0E66, 0x0801, 0x000B, 0x2009, 0x0001, 0xFB7D, 0xFFF6, 0x2809, 0x000A, 0xFB16, 0xFFFF, 0x0801, 0x0007, 0x2003, 0x0001, 0xFAC7, 0x001C, 0x2803, 0x0002, 0xFAF3, 0x000C, 0x0801, 0x0001, 0x2005, 0x0001, 0xF91F, 0xFFF7, 0x200F, 0x0001, 0xFAFA, 0x0006, 0xF91A, 0xFFFB, 0xFB15, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
