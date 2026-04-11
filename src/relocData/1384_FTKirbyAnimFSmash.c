/* AnimJoint data for relocData file 1384 (FTKirbyAnimFSmash) */
/* 2592 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimFSmash_joint1[20];
extern u16 dFTKirbyAnimFSmash_joint2[38];
extern u16 dFTKirbyAnimFSmash_joint3[26];
extern u16 dFTKirbyAnimFSmash_joint4[80];
extern u16 dFTKirbyAnimFSmash_joint6[26];
extern u16 dFTKirbyAnimFSmash_joint7[170];
extern u16 dFTKirbyAnimFSmash_joint8[14];
extern u16 dFTKirbyAnimFSmash_joint10[30];
extern u16 dFTKirbyAnimFSmash_joint11[202];
extern u16 dFTKirbyAnimFSmash_joint12[14];
extern u16 dFTKirbyAnimFSmash_joint14[10];
extern u16 dFTKirbyAnimFSmash_joint15[150];
extern u16 dFTKirbyAnimFSmash_joint17[16];
extern u16 dFTKirbyAnimFSmash_joint19[184];
extern u16 dFTKirbyAnimFSmash_joint20[118];
extern u16 dFTKirbyAnimFSmash_joint22[152];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimFSmash_joints[] = {
	(u32)dFTKirbyAnimFSmash_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimFSmash_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimFSmash_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimFSmash_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimFSmash_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimFSmash_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimFSmash_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimFSmash_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimFSmash_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimFSmash_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimFSmash_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimFSmash_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimFSmash_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimFSmash_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimFSmash_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimFSmash_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF0243, /* [22] END */
};

/* Joint 1 */
u16 dFTKirbyAnimFSmash_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 600, 2400,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 22), 3240, 360,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 10), 3600,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimFSmash_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 25), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), 780,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 13), 720,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 300, 4915, 2048, 4915,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 600, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimFSmash_joint3[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -268,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 744,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 2948, 67,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), 2948,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 20), 2948,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimFSmash_joint4[80] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 536, 22, 4300, -68, 3276, 136, 4300, -68,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY, 4), 0, 0, 240,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -22, 178, -89, 0, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 312, 3891, 4505, 3891,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4300, 17, 3276, -34, 4300, 17,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 34), 312,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -178, -178, 178,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 18), 4096, -14, 4096, 58, 4096, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -178, -178, 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 0, 0, 0, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimFSmash_joint6[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 0, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 18), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimFSmash_joint7[170] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, -1387, -4, 1608, 14,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -846, -63, -1383, 77, 1727, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 2048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -938, -187, -1249, 110, 1761, 130,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2915, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1542, -328, -1263, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1879, -507, -1396, -107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1450, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2557, -476,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2831, -140,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2826, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2942, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 2903, 24,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 23), 2048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2828, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -2708, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1451, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1433, -2,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2736, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2413, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2938, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2281, -318,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1436, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -945, 13,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2141, 301,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1464, 388,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -964, -54, 1942, -275,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1327, -102, 1615, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1033, 310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -842, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 38, -1391, -63, 1608, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTKirbyAnimFSmash_joint8[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimFSmash_joint10[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -14, 0, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -178, -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -178, -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimFSmash_joint11[202] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -13, 1391, 1, 1608, -17,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 762, 23, 1489, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1251, -134,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 2048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 801, -17, 1506, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 410, -399, 926, -501,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1110, -106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1189, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -71, -251, 337, -319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -91, -40, 287, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -151, -74, 210, -108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -11, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -331, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1177, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1128, -1,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 23), 2048,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -11, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 10, 16,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -337, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -265, 87,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1131, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1153, -136,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -166, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -56, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -76, 51, 37, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, 415, 966, -142, 178, 387,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 988, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 754, 626, 812, 550,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1299, 368, 1280, 307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1491, 151, 1427, 123,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1348, -345,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1610, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1068, 101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1324, 99,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 916, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -112, 1391, 67, 1608, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTKirbyAnimFSmash_joint12[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimFSmash_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimFSmash_joint15[150] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1587, -11, -1305, -19, 1841, 23,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1520, -30, -1381, 130, 1918, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1502, 124, -1192, 152, 1749, -297,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1295, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1958, 106, 1039, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1984, 5, 949, -70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 856, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1869, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1577, -145, -1308, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1348, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1579, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1579, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1463, -20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 856, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1110, 10,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1450, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1564, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1343, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1302, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1122, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1206, 8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1561, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1721, 97,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1293, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1285, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1817, 25, 1238, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1598, -36, 1793, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1584, -13, -1305, -20, 1845, 52,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimFSmash_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimFSmash_joint19[184] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -309, -2, -176, -32, -99, -2,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 52, 167,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -315, 32, -313, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -238, 156, -106, 199,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 162, 121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 140, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 254, 181,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 12), 733,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 7168, 3276, 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 240, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 358, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 89, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 101, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 638, 139,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 7168, 3276, 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 638, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 638, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 622, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 101, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 57, -28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 733, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 600, 17,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4096, 4096,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 583, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 271, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 628, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 567, -3,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 12), 4096, 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 219, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -218, -153,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 25, -37, 567, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -164, -22, -63, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -371, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -337, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -309, 27, -176, -12, -96, -33,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimFSmash_joint20[118] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1629, -14, -1911, -17, -1375, -26,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1642, 111,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1793, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1572, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1550, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1063, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1767, 100,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 7), 1865,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1701, 67,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 7), -1658,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1067, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -1137, -11,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 1865,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1998, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1658, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -1821, -38,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2062, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1651, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1142, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1363, -12,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1858, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1904, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1637, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1632, -5, -1911, -6, -1371, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimFSmash_joint22[152] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000, 0x280E, 0x077E, 0xFFFD, 0x0597, 0x001F, 0x05E4, 0x0001, 0x4F00, 0x1000, 0x1000, 0x1000, 0x2803, 0x0008, 0x07EA, 0x0034, 0x2809, 0x0009, 0x0641, 0x0015, 0x2005, 0x0006, 0x0639, 0xFFE7, 0x2005, 0x0001, 0x061B, 0xFFE3, 0x2805, 0x0012, 0x05D7, 0xFFEA, 0x0801, 0x0001, 0x2003, 0x0001, 0x080F, 0xFF5F, 0x200B, 0x0001, 0x06A7, 0xFF26, 0x066F, 0x00AA, 0x200B, 0x0001, 0x065A, 0xFFE4, 0x0796, 0x00D8, 0x4003, 0x0007, 0x066E, 0x2009, 0x0001, 0x0820, 0x0043, 0x3809, 0x0004, 0x0820, 0x3809, 0x0001, 0x0820, 0x2809, 0x0008, 0x081C, 0xFFED, 0x0801, 0x0001, 0x3803, 0x0001, 0x066E, 0x2003, 0x0006, 0x0766, 0x0082, 0x200F, 0x0001, 0x07F7, 0x0045, 0x05AB, 0xFFD6, 0x07F5, 0xFF84, 0x280B, 0x0003, 0x07BB, 0x000D, 0x0590, 0xFFA0, 0x2005, 0x0002, 0x05F3, 0x0075, 0x2005, 0x0001, 0x066E, 0x005B, 0x2805, 0x0008, 0x05A4, 0xFFEF, 0x200B, 0x0001, 0x07CC, 0x0006, 0x055D, 0xFFE0, 0x2803, 0x0008, 0x0772, 0x0009, 0x2809, 0x0009, 0x05E2, 0x000B, 0x0801, 0x0007, 0x2005, 0x0001, 0x0599, 0xFFFA, 0x2007, 0x0001, 0x077B, 0x0005, 0x0597, 0xFFFF, 0x200F, 0x0001, 0x077E, 0x0003, 0x0597, 0x0000, 0x05E8, 0x0005, 0x0000, 0x0000, 0x0000,
};
