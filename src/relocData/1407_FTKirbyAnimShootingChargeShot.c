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
extern u16 dFTKirbyAnimShootingChargeShot_joint21[16];
extern u16 dFTKirbyAnimShootingChargeShot_joint22[126];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimShootingChargeShot_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimShootingChargeShot_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimShootingChargeShot_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimShootingChargeShot_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimShootingChargeShot_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimShootingChargeShot_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimShootingChargeShot_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimShootingChargeShot_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimShootingChargeShot_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimShootingChargeShot_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimShootingChargeShot_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimShootingChargeShot_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimShootingChargeShot_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimShootingChargeShot_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimShootingChargeShot_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimShootingChargeShot_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimShootingChargeShot_joint22, /* [21] joint 22 */
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
u16 dFTKirbyAnimShootingChargeShot_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimShootingChargeShot_joint22[126] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1034, 155, -1769, -59, -1042, -1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1884, 33, -1009, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -878, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -554, 106,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -851, -156,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1838, 45, -1038, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1712, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -998, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -978, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1124, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1133, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -948, 59,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1732, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -2031, 48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1029, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1685, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -900, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1260, -50,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1944, 87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1785, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1292, -19, -1696, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1297, -1, -1710, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, -1, -1785, 0, -1708, 1,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
