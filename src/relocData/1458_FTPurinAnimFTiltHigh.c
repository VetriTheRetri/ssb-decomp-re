/* AnimJoint data for relocData file 1458 (FTPurinAnimFTiltHigh) */
/* 2576 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimFTiltHigh_joint1[44];
extern u16 dFTPurinAnimFTiltHigh_joint2[32];
extern u16 dFTPurinAnimFTiltHigh_joint3[80];
extern u16 dFTPurinAnimFTiltHigh_joint5[80];
extern u16 dFTPurinAnimFTiltHigh_joint6[180];
extern u16 dFTPurinAnimFTiltHigh_joint7[22];
extern u16 dFTPurinAnimFTiltHigh_joint9[58];
extern u16 dFTPurinAnimFTiltHigh_joint10[186];
extern u16 dFTPurinAnimFTiltHigh_joint11[16];
extern u16 dFTPurinAnimFTiltHigh_joint13[20];
extern u16 dFTPurinAnimFTiltHigh_joint14[148];
extern u16 dFTPurinAnimFTiltHigh_joint16[8];
extern u16 dFTPurinAnimFTiltHigh_joint18[168];
extern u16 dFTPurinAnimFTiltHigh_joint19[90];
extern u16 dFTPurinAnimFTiltHigh_joint21[112];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTPurinAnimFTiltHigh_joints[] = {
	(u32)dFTPurinAnimFTiltHigh_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimFTiltHigh_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimFTiltHigh_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimFTiltHigh_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPurinAnimFTiltHigh_joint6, /* [5] joint 6 */
	(u32)dFTPurinAnimFTiltHigh_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimFTiltHigh_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTPurinAnimFTiltHigh_joint10, /* [9] joint 10 */
	(u32)dFTPurinAnimFTiltHigh_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimFTiltHigh_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPurinAnimFTiltHigh_joint14, /* [13] joint 14 */
	(u32)dFTPurinAnimFTiltHigh_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPurinAnimFTiltHigh_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTPurinAnimFTiltHigh_joint19, /* [18] joint 19 */
	(u32)dFTPurinAnimFTiltHigh_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF0253, /* [21] END */
};

/* Joint 1 */
u16 dFTPurinAnimFTiltHigh_joint1[44] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 600, 239, -120, 239,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 840, 53, 240, 360,
	ftAnimSetValRateT(FT_ANIM_TRAY, 14), 720, -120,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 240, -137,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), 0, -160,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 600, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPurinAnimFTiltHigh_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 0, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -804, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1072, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -3485, -201,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), -3485,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -3485,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPurinAnimFTiltHigh_joint3[80] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 8), 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 0, -5, 178, 67, 3891, 51, 4505, -102, 3891, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 536, 33, 4300, 22, 3686, -45, 4300, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -44,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 14), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAY, 14), 312, -35, 4096, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, 3, 446, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 0, -37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 0, 240, 4300, 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 0, 312, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPurinAnimFTiltHigh_joint5[80] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -178, 11,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -248, -389, -104, -273, 2, 17,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -194, 206, -136, -366, 8, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 89, 33, -119, 74, -333, -197, -21, -30,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -119, -34, -333, 118, -21, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 89, -7, -180, 79, -127, 222, 20, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, -14, 0, 240, 0, 169, 0, -27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPurinAnimFTiltHigh_joint6[180] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, -4, -1391, 203, 1608, 8,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -808, -127, -1187, 238, 1617, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1060, -382, -914, 124, 1956, 505,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1573, -344, -939, -20, 2629, 436,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1748, -550, -955, 10, 2829, 375,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -956, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2674, -719, 3379, 399,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3188, -650, 3627, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3976, -236, -1051, -68, 3287, -98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1123, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3661, 299, 3430, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -3117, 2, 3551, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3171, -42, 3662, 92,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -3073, 103, 3691, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1130, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -876, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2953, 108, 3587, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2868, -116, 3539, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3088, -251, -878, -9, 3783, 274,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 4702, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -3672, -301, -929, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3973, -174, -1147, -218,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -4022, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1365, -130, 4825, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 4838, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1409, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1399, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4023, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4023, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4021, 1, -1391, 8, 4825, -13,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimFTiltHigh_joint7[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPurinAnimFTiltHigh_joint9[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 6, 7, 165,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -178, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 17, -296, 191,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -178, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 33, -307, 171,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 19, -361, 161,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 48, -396, 160,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 0, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 198, -205, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 187, -142, 124,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 6, 7, 165,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPurinAnimFTiltHigh_joint10[186] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 857, 34, 1391, -158, 1728, 83,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1169, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1232, -180, 1811, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1029, -130, 1978, 124,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1026, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2145, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1270, 137, 2151, -119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1708, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1906, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 966, -37, 1878, 90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 884, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1891, 67, 2087, 146,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1867, 298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2171, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2365, 430,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2440, 397, 874, 13, 3031, 457,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2719, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 895, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 3329, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3384, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3663, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2781, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2938, 228, 873, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1042, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3238, 245, 3996, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 3414, -14, 4361, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3412, 250, 4390, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3915, 329, 1046, 100, 4770, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4070, 70, 1244, 145, 4957, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4058, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1337, 68, 4929, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1391, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4930, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4067, 7, 4939, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4074, 6, 1391, 0, 4945, 5,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimFTiltHigh_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPurinAnimFTiltHigh_joint13[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, -1072,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 88, -30, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -987, 130, -2261,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -804, 0, -1072,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPurinAnimFTiltHigh_joint14[148] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1629, -48, -1305, -7, 1841, 88,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1274, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1893, -91, 2270, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2013, -176, 2330, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2246, -341, -1111, 151, 2468, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2695, -392, -971, 71, 2877, 374,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3031, -203, -968, 5, 3216, 207,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -648, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3102, -63, 3292, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -3253, -30, 3448, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3268, 60, 3463, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3131, -309, 3326, 308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3886, -246, 4081, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3624, 155, 3822, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3575, 46, 3782, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 3689, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3393, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -583, 66,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 8), -302,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3662, -79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3450, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3293, 77,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 4), -3238,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 3450,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), 3450,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 2), -302,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -3238,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimFTiltHigh_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 7,
	ftAnimBlock(0, 28),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPurinAnimFTiltHigh_joint18[168] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, -44, -1431, 120, -1708, 45,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 4096, 511,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1963, -145, -1311, 115, -1663, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2208, -35, -1199, -119, -1275, 330,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1772, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1549, -249, -1002, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1698, -19, -941, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1479, 38, -988, 25,
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 6144, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1703, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1693, -63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1511, -29, -907, 75,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1675, -41, -704, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1769, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -2182, -128,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 4), 5120, -409,
	ftAnimSetValRateT(FT_ANIM_SCAX, 6), 4096, -204,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1714, -31, -683, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1386, 83, -944, -85,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2325, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2575, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2591, 193, -1311, 56, -1044, -254,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2188, 336, -1272, -60, -1453, -332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 135, -1431, -79, -1708, -127,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 2), -1431,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1918, -1708,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1918, -1708,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), -1431,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTPurinAnimFTiltHigh_joint19[90] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 10, 302, -17, 237, 22,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -14, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 169, 23, 311, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 26, 246, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 137, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 262, 12,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -15, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -100, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 124, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 24, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 274, 12,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), 302,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -104, 29, 19, 50,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 3), 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 233, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 233,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 21, 233,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 302,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimFTiltHigh_joint21[112] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 23), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 7,
	ftAnimEnd(),
	0x0000, 0x280E, 0xFAEE, 0x0003, 0xF907, 0xFFDE, 0xF958, 0xFFF3, 0x4F00, 0x1000, 0x1000, 0x1000, 0x200F, 0x0005, 0xFB00, 0x000B, 0xF861, 0x0053, 0xF995, 0x0062, 0x200F, 0x0001, 0xFAFF, 0xFFEE, 0xF8D1, 0x006C, 0xF9FE, 0x005D, 0x2809, 0x0007, 0xFA71, 0xFFFA, 0x2805, 0x0008, 0xF97F, 0x0011, 0x2003, 0x0005, 0xFAC0, 0x0000, 0x2003, 0x0001, 0xFAC1, 0xFFFF, 0x2803, 0x0009, 0xFA71, 0x0004, 0x0801, 0x0001, 0x2009, 0x0001, 0xFA6A, 0xFFF8, 0x2809, 0x0007, 0xFA0D, 0xFFEF, 0x2005, 0x0001, 0xF994, 0x0017, 0x2005, 0x0006, 0xFA18, 0x0004, 0x200F, 0x0001, 0xFA79, 0x002A, 0xFA17, 0xFFBC, 0xF9FB, 0xFFCD, 0x200F, 0x0002, 0xFAEE, 0x0013, 0xF907, 0xFFBD, 0xF954, 0xFFD8, 0x380F, 0x0001, 0xFAEE, 0xF907, 0xF954, 0x380F, 0x0003, 0xFAEE, 0xF907, 0xF954, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
