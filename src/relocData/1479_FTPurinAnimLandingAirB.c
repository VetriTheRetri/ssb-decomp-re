/* AnimJoint data for relocData file 1479 (FTPurinAnimLandingAirB) */
/* 3136 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimLandingAirB_joint1[82];
extern u16 dFTPurinAnimLandingAirB_joint2[38];
extern u16 dFTPurinAnimLandingAirB_joint3[32];
extern u16 dFTPurinAnimLandingAirB_joint5[54];
extern u16 dFTPurinAnimLandingAirB_joint6[154];
extern u16 dFTPurinAnimLandingAirB_joint7[30];
extern u16 dFTPurinAnimLandingAirB_joint9[54];
extern u16 dFTPurinAnimLandingAirB_joint10[162];
extern u16 dFTPurinAnimLandingAirB_joint11[30];
extern u16 dFTPurinAnimLandingAirB_joint13[44];
extern u16 dFTPurinAnimLandingAirB_joint14[184];
extern u16 dFTPurinAnimLandingAirB_joint16[62];
extern u16 dFTPurinAnimLandingAirB_joint18[216];
extern u16 dFTPurinAnimLandingAirB_joint19[162];
extern u16 dFTPurinAnimLandingAirB_joint21[30];
extern u16 dFTPurinAnimLandingAirB_joint22[190];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTPurinAnimLandingAirB_joints[] = {
	(u32)dFTPurinAnimLandingAirB_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimLandingAirB_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimLandingAirB_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimLandingAirB_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPurinAnimLandingAirB_joint6, /* [5] joint 6 */
	(u32)dFTPurinAnimLandingAirB_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimLandingAirB_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTPurinAnimLandingAirB_joint10, /* [9] joint 10 */
	(u32)dFTPurinAnimLandingAirB_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimLandingAirB_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPurinAnimLandingAirB_joint14, /* [13] joint 14 */
	(u32)dFTPurinAnimLandingAirB_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPurinAnimLandingAirB_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTPurinAnimLandingAirB_joint19, /* [18] joint 19 */
	(u32)dFTPurinAnimLandingAirB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPurinAnimLandingAirB_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTPurinAnimLandingAirB_joint1[82] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAZ), 0, 0, 4096,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY), -804, 0, 600, -212, 4096, 1, 4096, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 20), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), -714, 40, 480, -3, 4505, 1, 3072, 0, 4505, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 0, 38,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 1200, 3891, 4505, 3891,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 600, -1600,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4096, 4096,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 300, 4915, 2048, 4915,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 4096, -2, 4096, -1, 4096, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 0, 590, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPurinAnimLandingAirB_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, 268, -178,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -178, 0, 402, 0, -89, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 18), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 18), -268,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -46, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -268, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPurinAnimLandingAirB_joint3[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAZ), 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 268, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -178, 0,
	ftAnimBlock(0, 15),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 7), 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPurinAnimLandingAirB_joint5[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 178, -144, -737, 238,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 178, 0, -144, 0, -737, -7, 238, 4,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), -527, 416,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 178, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 7), -9, 350,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -120, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -160, -86, -76, 0, 99, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPurinAnimLandingAirB_joint6[154] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 75, -18, 348, 15, -446, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 466, -18,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 23), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -365, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -345, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -323, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 39, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 391, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 440, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 92, -102,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -347, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -337, 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 461, 64, -18, -122,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 658, 41, -635, -73,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -304, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -249, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 701, 41, -696, -45, -135, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -570, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 741, 52, -88, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 806, 28, -243, -94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 643, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -276, 62,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 7), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -118, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -11, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 577, -68, -484, 74, 14, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 398, -26, -369, 9, -35, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 386, -12, -367, 2, -44, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPurinAnimLandingAirB_joint7[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPurinAnimLandingAirB_joint9[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -178, 69, -722, 238,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, -178, 0, 69, 0, -722, -1, 238, 2,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -408, 400, 208, -136,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -178, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 7), -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 120, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 151, 39, -96, 1, 120, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPurinAnimLandingAirB_joint10[162] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -223, -9, -185, 11, -424, 7,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -293, -4,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 23), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -86, 9, -313, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -80, 12, -292, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 36, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -100, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -299, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -298, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 120, 84,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 317, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -285, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -450, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -128, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -76, 101,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 364, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 715, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -480, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -655, -93,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 47, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 39, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -764, -71, 706, -10, -164, -158,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 613, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -798, 7, -277, -5,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 7), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -749, 59, -175, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -680, 51, -40, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -646, 24, 529, -78, 14, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -624, -1, 374, -17, -47, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -626, -1, 366, -7, -62, -14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPurinAnimLandingAirB_joint11[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPurinAnimLandingAirB_joint13[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -501, 264, -1427, 106, -21, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -501, 0, 264, 0, -1427, 0, 106, 1, -21, -1, 16, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -804, 0, 0, -21, -1072, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 204, -120, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -501, -271, -1055, 106, -21, 16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPurinAnimLandingAirB_joint14[184] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1717, -1, -1517, 8, 2316, 21,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2397, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1779, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1440, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1403, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1349, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2408, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2674, 85,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1805, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1916, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1317, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1288, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1994, 131, -1252, 125, 2751, -183,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1218, 320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1036, 102, 2306, -468,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1048, -84, 1814, -383,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1367, -115, 1413, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1013, 116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1037, -66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1436, -22, 1342, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1369, 79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1257, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1119, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1211, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1324, -180, 1483, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1572, -142, 1794, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1609, -34, -1304, -23, 1829, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1845, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1692, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1305, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1305, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1847, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1867, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1681, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1647, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1645, 2, -1300, 0, 1868, 1,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimLandingAirB_joint16[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 635, 441,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 890, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 944, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 786, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 352, -291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPurinAnimLandingAirB_joint18[216] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 167, 12, -157, 8, -125, -14, 3686, 0, 3686, 0, 3686, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -173, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 179, -13, 3686, 0, 3686, 0, 3686, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -87, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -47, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -37, 13, -207, -3,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 57, 56, 57,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 18), 4096, 0, 4096, 0, 4096, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 163, -41, -19, 0, -179, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -28, -174,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -68, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -197, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -236, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -251, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -543, -229, -64, 8, -255, -144,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 17, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -709, -114, -526, -162,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -470, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -580, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -261, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -160, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 39, 17, -74, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -439, 57, 52, -49, 19, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -284, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -59, -108, 23, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -164, -28, -91, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -305, -37, -116, 59, -62, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -358, -15, -44, 1, -40, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -336, -9, -114, 15, -92, 8,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -377, -17, -13, 40, -22, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -370, 8, -34, -24, -33, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -332, 5, -142, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -44, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -76, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -329, 3, -150, -7, -80, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTPurinAnimLandingAirB_joint19[162] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1924, 35, 1155, -10, -1262, 31,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1145, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1889, 61, -1230, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1800, 93, -1157, 74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -964, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1610, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1569, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1525, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1149, 12, -945, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1226, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -970, -65,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1519, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1585, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1205, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1160, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1047, -86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1319, -71,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1616, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1649, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1181, 46, -1380, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1305, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1601, 30, -1353, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1570, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1352, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1367, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1305, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1538, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1571, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1362, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1354, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1571, 0, 1300, 0, -1348, 5,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimLandingAirB_joint21[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPurinAnimLandingAirB_joint22[190] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1110, -2, -1714, -1, 2511, -3,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4494, 4588, 4284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), -1129, 15, -1740, -8, 2487, 0, 4494, 0, 4588, 0, 4284, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 18), 4096, 0, 4096, 0, 4096, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1103, 45, -1752, -22, 2487, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2233, -116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1989, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -794, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -667, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -610, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -656, -72, 2105, -127,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -840, -73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1817, -43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1935, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1708, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -903, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -999, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1792, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1784, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1043, -95, -1653, -14, 1782, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1300, -50, -1815, -3, 1514, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1289, 6, -1744, 97, 1540, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1271, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1620, 10, 1617, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1723, 27, 1511, 21,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1294, -6, -1565, 62, 1659, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1275, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1598, -38, 1630, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1749, -16, 1529, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1276, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1278, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1279, 0, -1758, -9, 1527, -1,
	ftAnimEnd(),
	0x0000,
};
