/* AnimJoint data for relocData file 1407 (FTKirbyAnimShootingChargeShot) */
/* 2224 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimShootingChargeShot_joint1[40];
extern u16 dFTKirbyAnimShootingChargeShot_joint2[16];
extern u16 dFTKirbyAnimShootingChargeShot_joint3[70];
extern u16 dFTKirbyAnimShootingChargeShot_joint5[98];
extern u16 dFTKirbyAnimShootingChargeShot_joint6[144];
extern u16 dFTKirbyAnimShootingChargeShot_joint7[14];
extern u16 dFTKirbyAnimShootingChargeShot_joint9[100];
extern u16 dFTKirbyAnimShootingChargeShot_joint10[162];
extern u16 dFTKirbyAnimShootingChargeShot_joint11[16];
extern u16 dFTKirbyAnimShootingChargeShot_joint13[10];
extern u16 dFTKirbyAnimShootingChargeShot_joint14[72];
extern u16 dFTKirbyAnimShootingChargeShot_joint16[14];
extern u16 dFTKirbyAnimShootingChargeShot_joint18[78];
extern u16 dFTKirbyAnimShootingChargeShot_joint19[92];
extern u16 dFTKirbyAnimShootingChargeShot_joint21[142];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimShootingChargeShot_joints[] = {
	(u32)dFTKirbyAnimShootingChargeShot_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimShootingChargeShot_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimShootingChargeShot_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimShootingChargeShot_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimShootingChargeShot_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimShootingChargeShot_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimShootingChargeShot_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimShootingChargeShot_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimShootingChargeShot_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimShootingChargeShot_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimShootingChargeShot_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimShootingChargeShot_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimShootingChargeShot_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimShootingChargeShot_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimShootingChargeShot_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF01ED, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimShootingChargeShot_joint1[40] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 600, -240,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 600, -600,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 600, 102, -240, 308,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), -60, 96,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 780,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 600, -102, 0, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 600, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimShootingChargeShot_joint2[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 0, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 24), -268,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimShootingChargeShot_joint3[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 89, 89, 312, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 89, -59, 89, -14,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 16), 312,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4505, 4505, 3072,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -268, -3, 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 3891, 20, 4505, -81, 3891, 20,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4300, 29, 3276, -58, 4300, 29,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 312, -57,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 312, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimShootingChargeShot_joint5[98] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, -60, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, -11, -268, -44, 0, 11, -60, 120, 0, -60, 0, -240,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -44, -22, 44, 44, 0, 60, -30, -120, -120, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), -446,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -89, -3, -268, 14, 178, 11, -60, -39, -60, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 2), -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -89, 3, -268, 11, 178, -7, 0, -48, -90, -32, -90, 32,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -120, -120, -120, 30, 0, 90,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), -120, 106, -60, 106,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimShootingChargeShot_joint6[144] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -587, 8, -1511, 14, 755, 8,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 585, -132,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -549, -50,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 24), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1354, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1252, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1287, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 451, -112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 194, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -602, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -375, 42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1296, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1279, 53,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 166, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -285, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -331, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 545, 241,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1227, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1065, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -383, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -887, -298,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 828, 351,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2053, 244,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1129, -92, -1234, -270,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1385, -8, -1599, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2233, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2395, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, 17, -1391, -5, -1608, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimShootingChargeShot_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimShootingChargeShot_joint9[100] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, 536, 178, -120,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY), 120, -48, -30, -24,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, 35, 536, -78, 178, -111, 60, -180, -60, -180,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 142, -33, 223, -78, -268, -134, 30, -120, -120, -120, -120, 120,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -134, -23, -357, -7, -120, 19, -60, 79,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX, 2), 223, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -134, 5, 223, -9, -357, 14, 30, 32, -90, -16, 0, 32,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 60, 30, -150, -30,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 9), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 60, -53, -120, 133,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimShootingChargeShot_joint10[162] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 310, 38, 1004, 7, 455, 86,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 592, 166,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 24), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1049, 85, 595, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1182, 66, 436, -195,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1193, 56, 104, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 749, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 569, -37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1295, 61, 48, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1437, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -521, -88,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 533, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 247, -23,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1452, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1265, -159,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 208, -94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -486, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1084, -160,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1117, 145,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -597, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -626, -459, -599, -343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1405, -584, -1284, -499,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1604, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1795, -240,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1887, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2031, -145,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2381, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1253, 109, -1611, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1376, 27, -1609, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, -31, 1391, 15, -1608, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimShootingChargeShot_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimShootingChargeShot_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimShootingChargeShot_joint14[72] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 123, 125, -328, 17, -4, -183,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -276, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 328, -48, -295, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 260, -74, -203, 103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 151, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 16, -4,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -269, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -303, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 160, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 239, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 12, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -24, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 3, -302, 0, 233, -5,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimShootingChargeShot_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimShootingChargeShot_joint18[78] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1970, -43, 1786, 1, -1536, 168,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1989, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 1775, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1207, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1246, -72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1547, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1970, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -1918, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1549, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -1573, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1602, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1707, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1782, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1785, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 0, 1785, 0, -1708, -1,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimShootingChargeShot_joint19[92] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -76, -113, 199, 42, 657, -35,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 252, -35, 625, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -189, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -387, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -118, 65,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 218, -26, 648, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 565, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 303, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -76, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 30, 7,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 535, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 238, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 35, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 22, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 241, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 234, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, 0, 302, -1, 233, -1,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimShootingChargeShot_joint21[142] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000, 0x280E, 0xFBF6, 0x009B, 0xF917, 0xFFC5, 0xFBEE, 0xFFFF, 0x4F00, 0x1000, 0x1000, 0x1000, 0x280D, 0x0003, 0xF8A4, 0x0021, 0xFC0F, 0xFFE6, 0x2003, 0x0001, 0xFC92, 0x00EF, 0x2003, 0x0001, 0xFDD6, 0x006A, 0x2803, 0x0002, 0xFCAD, 0xFF64, 0x0801, 0x0001, 0x200D, 0x0001, 0xF8D2, 0x002D, 0xFBF2, 0xFFED, 0x2805, 0x000C, 0xF950, 0xFFF4, 0x2809, 0x000E, 0xFC1A, 0xFFEB, 0x2003, 0x0001, 0xFC2E, 0xFFA5, 0x2003, 0x0006, 0xFB9C, 0xFFF5, 0x2003, 0x0001, 0xFB93, 0xFFFA, 0x2803, 0x0007, 0xFC4C, 0x003B, 0x0801, 0x0004, 0x2005, 0x0001, 0xF93C, 0xFFE0, 0x2805, 0x0005, 0xF811, 0x0030, 0x0801, 0x0001, 0x2009, 0x0001, 0xFBFB, 0xFFC7, 0x2809, 0x0005, 0xF96B, 0xFFDD, 0x2003, 0x0001, 0xFC7C, 0x0008, 0x2803, 0x0004, 0xFB14, 0xFFCE, 0x0801, 0x0002, 0x2005, 0x0001, 0xF868, 0x0057, 0x2805, 0x0006, 0xF907, 0x0000, 0x0801, 0x0001, 0x200B, 0x0001, 0xFAF4, 0xFFED, 0xF960, 0xFFF5, 0x200B, 0x0004, 0xFAEF, 0xFFFF, 0xF952, 0x0000, 0x200F, 0x0001, 0xFAEE, 0xFFFF, 0xF907, 0x0000, 0xF954, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
