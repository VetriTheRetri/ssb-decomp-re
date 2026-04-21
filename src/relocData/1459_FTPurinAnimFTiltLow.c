/* AnimJoint data for relocData file 1459 (FTPurinAnimFTiltLow) */
/* 2464 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimFTiltLow_joint1[44];
extern u16 dFTPurinAnimFTiltLow_joint2[32];
extern u16 dFTPurinAnimFTiltLow_joint3[80];
extern u16 dFTPurinAnimFTiltLow_joint5[80];
extern u16 dFTPurinAnimFTiltLow_joint6[172];
extern u16 dFTPurinAnimFTiltLow_joint7[20];
extern u16 dFTPurinAnimFTiltLow_joint9[58];
extern u16 dFTPurinAnimFTiltLow_joint10[184];
extern u16 dFTPurinAnimFTiltLow_joint11[16];
extern u16 dFTPurinAnimFTiltLow_joint13[20];
extern u16 dFTPurinAnimFTiltLow_joint14[104];
extern u16 dFTPurinAnimFTiltLow_joint16[12];
extern u16 dFTPurinAnimFTiltLow_joint18[166];
extern u16 dFTPurinAnimFTiltLow_joint19[90];
extern u16 dFTPurinAnimFTiltLow_joint21[14];
extern u16 dFTPurinAnimFTiltLow_joint22[96];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTPurinAnimFTiltLow_joints[] = {
	(u32)dFTPurinAnimFTiltLow_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimFTiltLow_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimFTiltLow_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimFTiltLow_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPurinAnimFTiltLow_joint6, /* [5] joint 6 */
	(u32)dFTPurinAnimFTiltLow_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimFTiltLow_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTPurinAnimFTiltLow_joint10, /* [9] joint 10 */
	(u32)dFTPurinAnimFTiltLow_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimFTiltLow_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPurinAnimFTiltLow_joint14, /* [13] joint 14 */
	(u32)dFTPurinAnimFTiltLow_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPurinAnimFTiltLow_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTPurinAnimFTiltLow_joint19, /* [18] joint 19 */
	(u32)dFTPurinAnimFTiltLow_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPurinAnimFTiltLow_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTPurinAnimFTiltLow_joint1[44] = {
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
u16 dFTPurinAnimFTiltLow_joint2[32] = {
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
u16 dFTPurinAnimFTiltLow_joint3[80] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 8), 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 0, 5, 178, 67, 3891, 51, 4505, -102, 3891, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 536, 33, 4300, 22, 3686, -45, 4300, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 44,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 14), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAY, 14), 312, -35, 4096, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, -3, 446, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 0, -37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 0, 240, 4300, 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 0, 312, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPurinAnimFTiltLow_joint5[80] = {
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
u16 dFTPurinAnimFTiltLow_joint6[172] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, -4, -1391, 202, 1608, 9,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -808, -126, -1188, 238, 1618, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1057, -377, -914, 124, 1953, 498,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1563, -345, -938, -20, 2615, 438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1748, -529, -955, 6, 2829, 363,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -959, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2622, -677, 3342, 355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3102, -805, 3541, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4233, -292, -1041, -58, 3209, -91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1123, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3687, 462, 3358, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -3105, -20, 3539, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3171, -51, 3662, 102,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -2968, 112, 3603, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1130, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -876, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2859, 39, 3511, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -3680, -292, 4414, 298,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -878, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -931, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3973, -170, -1144, -217, 4701, 205,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -4022, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 4838, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1365, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1409, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1399, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4023, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4023, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4021, 1, -1391, 8, 4825, -13,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimFTiltLow_joint7[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 20), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPurinAnimFTiltLow_joint9[58] = {
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
u16 dFTPurinAnimFTiltLow_joint10[184] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 857, 34, 1391, -158, 1728, 84,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1169, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1232, -179, 1812, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1031, -131, 1975, 124,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1034, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2145, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1258, 146, 2141, -114,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1930, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1916, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 978, -28, 1910, 86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 897, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2089, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1865, -34, 2164, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1861, 271, 2350, 417,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2408, 400, 873, 6, 2998, 465,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2731, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 892, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 3329, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3396, 88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3706, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2811, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2980, 233, 871, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1042, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3278, 228, 4038, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 3421, -19, 4369, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3412, 246, 4390, 200,
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
u16 dFTPurinAnimFTiltLow_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPurinAnimFTiltLow_joint13[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, -1072,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 88, -30, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -987, 130, -2261,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -804, 0, -1072,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPurinAnimFTiltLow_joint14[104] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, -55, -302, 2, 237, 97,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -319, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -190, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 505, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 625, 78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 441, -225,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -430, -90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -507, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 28, 177, 160, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 234, 11, -77, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, -3, -512, -6, -81, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -179, -4, 440, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -425, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -396, 23,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 5), -302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -176, 47, 445, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -21, 31, 233, -45,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -21, 233,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -21, 233,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), -302,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimFTiltLow_joint16[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 27), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPurinAnimFTiltLow_joint18[166] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, -56, -1431, 111, -1704, 43,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 4096, 511,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1974, -142, -1320, 95, -1661, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2203, -23, -1241, -116, -1306, 323,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1772, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1553, -228, -1014, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1698, -39, -941, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1537, 75, -976, 54,
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 6144, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1740, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2057, -51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1480, 41, -878, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -667, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1368, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 4), 5120, -409,
	ftAnimSetValRateT(FT_ANIM_SCAX, 6), 4096, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -620, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -902, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2108, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2522, -78,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2588, -34, -1337, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1280, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2591, 196, -1044, -275,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2195, 336, -1452, -332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 138, -1431, -75, -1708, -128,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 2), -1431,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1918, -1708,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1918, -1708,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), -1431,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTPurinAnimFTiltLow_joint19[90] = {
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
u16 dFTPurinAnimFTiltLow_joint21[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 23), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPurinAnimFTiltLow_joint22[96] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1298, 3, -1785, -34, -1704, -13,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1280, 11, -1951, 83, -1643, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1281, -18, -1839, 108, -1538, 93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1423, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1665, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1344, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1343, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1423, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1430, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1523, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1644, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1512, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1415, 42, -1513, -68, -1541, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1298, 19, -1785, -67, -1708, -40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, -1785, -1708,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1298, -1785, -1708,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
