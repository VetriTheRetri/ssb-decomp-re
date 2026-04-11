/* AnimJoint data for relocData file 1480 (FTPurinAnimPass) */
/* 2448 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimPass_joint1[46];
extern u16 dFTPurinAnimPass_joint2[22];
extern u16 dFTPurinAnimPass_joint3[10];
extern u16 dFTPurinAnimPass_joint4[26];
extern u16 dFTPurinAnimPass_joint6[70];
extern u16 dFTPurinAnimPass_joint7[184];
extern u16 dFTPurinAnimPass_joint8[38];
extern u16 dFTPurinAnimPass_joint10[70];
extern u16 dFTPurinAnimPass_joint11[168];
extern u16 dFTPurinAnimPass_joint12[36];
extern u16 dFTPurinAnimPass_joint14[70];
extern u16 dFTPurinAnimPass_joint15[72];
extern u16 dFTPurinAnimPass_joint17[8];
extern u16 dFTPurinAnimPass_joint19[136];
extern u16 dFTPurinAnimPass_joint20[72];
extern u16 dFTPurinAnimPass_joint22[150];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTPurinAnimPass_joints[] = {
	(u32)dFTPurinAnimPass_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimPass_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimPass_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimPass_joint4, /* [3] joint 4 */
	(u32)dFTPurinAnimPass_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPurinAnimPass_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimPass_joint8, /* [7] joint 8 */
	(u32)dFTPurinAnimPass_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTPurinAnimPass_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimPass_joint12, /* [11] joint 12 */
	(u32)dFTPurinAnimPass_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPurinAnimPass_joint15, /* [14] joint 15 */
	(u32)dFTPurinAnimPass_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPurinAnimPass_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPurinAnimPass_joint20, /* [19] joint 20 */
	(u32)dFTPurinAnimPass_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF0220, /* [22] END */
};

/* Joint 1 */
u16 dFTPurinAnimPass_joint1[46] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 2457, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, -409, 2457, 737, 4096, -409,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 2048, -409, 6144, 737, 2048, -409,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 2048, 573, 6144, -819, 2048, 573,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4915, 0, 2048, 1, 4915, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPurinAnimPass_joint2[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 600,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 15), 600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPurinAnimPass_joint3[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 25),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPurinAnimPass_joint4[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 268,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPurinAnimPass_joint6[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -215, -344, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, -343, -2, -10, -42,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), -215,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -92, 741, -428, -236, -67, -250,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 170, -2, -476, -2, -152, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 268, 0, 170, 2, -476, -2, -152, 1,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 8, -282, -640, -286, -71, 420,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 179,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 178, -144, -737, 238,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimPass_joint7[184] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 845, -92, -756, -87, 3173, 91,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -902, -3,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 753, -37, 3264, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 769, 11, 3247, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 755, 48, 3259, -48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -875, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 873, -38, -738, 0, 3141, 52,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 20), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 678, -79, -876, -113, 3364, 106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1074, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 714, 15, 3355, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3508, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 708, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1013, 298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1304, 169, -1091, -2, 3530, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1087, -4, 3544, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1351, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1287, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1257, 44, -1084, 34, 3529, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1375, -70, -1017, 69, 3556, 388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1117, -219, -944, -158, 4306, 537,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 4651, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 937, -79, -1334, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 959, 41, -1411, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1283, 404, -1440, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4616, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 4232, -70,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1829, 464, -1501, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2212, 250, -1551, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2329, 116, -1571, -20, 4195, -37,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPurinAnimPass_joint8[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -121, -168,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -289, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -319, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -321, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -88, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPurinAnimPass_joint10[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 231, -220, -12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 223, -85, -288, -395, -19, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 101, -808, -408, -435, -58, -183,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -179, -3, -455, -5, -107, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -268, 0, -179, 1, -455, 0, -107, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -72, 240, -665, -213, -10, 297,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -179,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -178, 69, -722, 238,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPurinAnimPass_joint11[168] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2441, -1, 973, -7, -1642, -1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 948, -70,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2442, -2, -1643, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2446, -123, -1648, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2690, -66, 824, -53, -1894, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 940, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2580, 109, -1785, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2471, -620, -1676, -603,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 20), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3820, -730, 856, 8, -2992, -703,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3933, -58, 957, 75, -3084, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3937, -152, 1006, 51, -3003, 70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2898, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1094, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -4544, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4597, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -4384, 69,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2889, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2656, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1116, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1437, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4305, 96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -4206, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2400, 190,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2257, -25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4454, -445, 1513, 81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1684, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5097, -515,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5485, -256, -2289, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5611, -125, 1721, 36, -2305, -15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTPurinAnimPass_joint12[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -226, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -184, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimPass_joint14[70] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY), 204, -2, -120, -2,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), -804, 0, -1072, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -804, 0, 0, -1, -1072, 0, 204, 0, -120, 0, 0, 5,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), -33, 31,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 106, -21, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -299, 0, 1635, 0, -1130, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1635, 0, -1130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -299, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -299, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -156,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 264, 0, -1427, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -501, 1,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPurinAnimPass_joint15[72] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 1845,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 1542, -2, -1305, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -1292, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 1754, 118, 1702, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1886, 132, 1640, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1845, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 1922, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1723, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1608, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1677, 68, 1897, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1761, 2, 1964, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1286, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1312, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1763, 2, -1321, -8, 1961, -3,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPurinAnimPass_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 25),
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTPurinAnimPass_joint19[136] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -313, 0, -135, 2, -93, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -135, -24, -93, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -280, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -176, -13, -62, 115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 580, 175,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -101, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -286, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -275, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -203, 34, 722, 103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 756, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -519, 20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -112, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -89, 73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 679, -91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 283, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -465, 81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -195, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 16, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 90, 4,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -252, -51, 25, -65, 243, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -261, 22, -115, -22, 148, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -246, 15, -128, -13, 137, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTPurinAnimPass_joint20[72] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1671, 2, 1305, 0, 1841, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1290, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 1462, -116, 1702, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1330, -132, 1640, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1841, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 1297, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1494, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1606, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1528, -78, 1890, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1405, -11, 1941, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1276, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1287, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1399, -6, 1293, 5, 1936, -4,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPurinAnimPass_joint22[150] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x280E, 0xFAF1, 0x0000, 0x05C1, 0x0002, 0xF957, 0x0000, 0x3F00, 0x1000, 0x1000, 0x1000, 0x280D, 0x0005, 0x05C1, 0xFFE8, 0xF957, 0x000F, 0x2803, 0x0006, 0xFAD0, 0xFFF3, 0x3F01, 0x0005, 0x1000, 0x1000, 0x1000, 0x4701, 0x000F, 0x0E66, 0x0E66, 0x0E66, 0x200D, 0x0001, 0x0598, 0xFFF3, 0xF976, 0x0073, 0x2809, 0x0003, 0xFBFD, 0x00AF, 0x2805, 0x0007, 0x05E3, 0xFFF8, 0x2003, 0x0001, 0xFAD6, 0x000A, 0x2003, 0x0002, 0xFACC, 0xFFCF, 0x200B, 0x0001, 0xFA83, 0xFFDE, 0xFC8B, 0x0067, 0x2809, 0x0005, 0xFCA9, 0xFFC5, 0x2803, 0x0007, 0xFB89, 0xFFAD, 0x0801, 0x0003, 0x2005, 0x0001, 0x05D7, 0xFFF8, 0x2805, 0x0004, 0x05EB, 0x004A, 0x0801, 0x0001, 0x2009, 0x0001, 0xFC5C, 0xFFA6, 0x2809, 0x0004, 0xFAD0, 0xFFCF, 0x0801, 0x0001, 0x2003, 0x0001, 0xFB1A, 0xFF8E, 0x2803, 0x0002, 0xFA7B, 0x000C, 0x2005, 0x0001, 0x0657, 0x005B, 0x2005, 0x0001, 0x06A2, 0x0008, 0x4701, 0x0005, 0x0E66, 0x0E66, 0x0E66, 0x200F, 0x0001, 0xFABD, 0x003E, 0x0668, 0xFFCB, 0xFAAC, 0xFFE5, 0x200F, 0x0003, 0xFAF5, 0xFFF5, 0x0603, 0xFFED, 0xFA7B, 0xFFF5, 0x200F, 0x0001, 0xFAEC, 0xFFF8, 0x05F5, 0xFFF3, 0xFA75, 0xFFFB, 0x0000, 0x0000,
};
