/* AnimJoint data for relocData file 716 (FTFoxAnimTaunt) */
/* 2576 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimTaunt_joint1[20];
extern u16 dFTFoxAnimTaunt_joint2[24];
extern u16 dFTFoxAnimTaunt_joint4[28];
extern u16 dFTFoxAnimTaunt_joint5[194];
extern u16 dFTFoxAnimTaunt_joint6[76];
extern u16 dFTFoxAnimTaunt_joint7[52];
extern u16 dFTFoxAnimTaunt_joint8[44];
extern u16 dFTFoxAnimTaunt_joint10[10];
extern u16 dFTFoxAnimTaunt_joint11[196];
extern u16 dFTFoxAnimTaunt_joint12[76];
extern u16 dFTFoxAnimTaunt_joint13[50];
extern u16 dFTFoxAnimTaunt_joint15[10];
extern u16 dFTFoxAnimTaunt_joint16[58];
extern u16 dFTFoxAnimTaunt_joint18[46];
extern u16 dFTFoxAnimTaunt_joint20[80];
extern u16 dFTFoxAnimTaunt_joint21[46];
extern u16 dFTFoxAnimTaunt_joint23[42];
extern u16 dFTFoxAnimTaunt_joint24[66];
extern u16 dFTFoxAnimTaunt_joint25[118];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimTaunt_joints[] = {
	(u32)dFTFoxAnimTaunt_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimTaunt_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimTaunt_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimTaunt_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimTaunt_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimTaunt_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimTaunt_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimTaunt_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimTaunt_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimTaunt_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimTaunt_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimTaunt_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimTaunt_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimTaunt_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimTaunt_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimTaunt_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimTaunt_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimTaunt_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimTaunt_joint25, /* [24] joint 25 */
	0xFFFF0264, /* [25] END */
};

/* Joint 1 */
u16 dFTFoxAnimTaunt_joint1[20] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, 912, -20,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, 948, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 34), 0, 948, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 48, 912, -20,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimTaunt_joint2[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, -338, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, -178, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 34), 0, -178, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimTaunt_joint4[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 446, 2, 178, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 16), 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 34), 44, 446, 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 309, 156, 81,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimTaunt_joint5[194] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1718, 0, -1442, 62, 1867, 1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1686, 157, -1204, 151, 1774, -255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1403, 283, -1076, -14, 1357, -430,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1367, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1119, 153, 913, -299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1096, 0, 759, -95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 645, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1362, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1371, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1630, -39,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4915,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 589, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1164, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1677, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1995, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1337, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1106, 8,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 34), 4915,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1166, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 34), 1163, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1098, 7, -1995, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 31), -1115, 0, -1995, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1115, -16, -1995, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1363, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1274, 151,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1153, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1131, 156,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1387, -103,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1798, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1147, 42, 1404, 325,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1396, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1781, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1789, 34, 1927, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1729, 35, 1904, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1718, 10, -1442, -46, 1867, -37,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimTaunt_joint6[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -71,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -507, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -165, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -111, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -168, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -56, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -303, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -403, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -435, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -429, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -455, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -455, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -539, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -495, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -758, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -640, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimTaunt_joint7[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 269, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 625, 12, 402, 8, 402, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 34), 625, -14, 402, -9, 402, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 34), 3686, 3686, 3686,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 0, 0, 0, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimTaunt_joint8[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 136, -72,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -134, 1, 178, 18, 0, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -89, 50, 357, 55, 0, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 268, 2, 625, 2, 268, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 34), 268, 625, 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -113, 136, -72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimTaunt_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimTaunt_joint11[196] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4095,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1741, 9, 1336, -9, 1945, 1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1551, -150,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1246, 9,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1828, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1506, -302,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 804, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1412, -91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1238, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1239, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1336, 132,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1192, -7, 708, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 828, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1313, -72,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4915,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1499, 159,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1966, 49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 941, 126,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1236, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1214, -104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1010, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1994, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1960, 1,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 34), 4915,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1235, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 31), 1237, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1008, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 1048, 8,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1961, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), 1993, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1994, -42, 1237, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1362, -65, 1251, -71,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1065, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1414, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1397, 12, 1343, -22, 1170, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1753, 8, 1342, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1884, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1964, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1741, -12, 1336, -5, 1945, -19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTFoxAnimTaunt_joint12[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, -101,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -747, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -611, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -480, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -410, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -536, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -511, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -520, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -519, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -511, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -511, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -916, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -768, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -602, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -664, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -862, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -712, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 117,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimTaunt_joint13[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 536, 10, 0, 0, 536, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTY, 34), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 34), 536, 536, 3686, 3686, 3686,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 0, 0, 0, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimTaunt_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimTaunt_joint16[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2014, 0, -1385, 0, 1581, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 52), -2024, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -1496, -15, 1755, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1492, 2, 1756, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 37), -1491, -2, 1757, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1495, 23, 1752, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1385, 1, 1582, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2011, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -2013, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2014, 0, -1385, 0, 1581, -1,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimTaunt_joint18[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 116, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -58,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 263, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 316, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 356, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimTaunt_joint20[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 46, -1, 125, 0, -56, -3,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), -156,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 42), 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -66, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 31,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 10), 1,
	ftAnimBlock(0, 7),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -156,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), -151, 9,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 0, -5,
	ftAnimBlock(0, 18),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 125, 1,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -138, 19, -9, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 41, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -81, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -63, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, 4, 125, 0, -56, 7,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimTaunt_joint21[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1253, 0, -1746, 0, 1743, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 51), 1787, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 59), -1254, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 23), -1615,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1615,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 27), -1616, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1634, -23, 1776, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1744, -3, 1742, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1253, 1, -1746, -1, 1743, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimTaunt_joint23[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 28, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 21), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 268, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 296, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 327, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimTaunt_joint24[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1624, -1, 1711, -2, -1835, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 21), 1511,
	ftAnimSetValRateT(FT_ANIM_ROTX, 51), 1669, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -1697, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1697, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 35), -1697, 0,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 1511,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 1517, 9,
	ftAnimBlock(0, 28),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1697, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1834, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1661, -10, 1531, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 1622, 3, 1705, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1624, 2, 1711, 6, -1835, -1,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimTaunt_joint25[118] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 219,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -178, -22, -89, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -178, 5, 0, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -134, -44, 357, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -536, -10, 178, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 34), -536, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 178, 107, 268, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 0, -22, 223, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 0, 219,
	ftAnimEnd(),
	0x0000, 0x4006, 0xFF4E, 0xFF86, 0x48E8, 0x0000, 0x0000, 0x0040, 0xFE3E, 0x2007, 0x0004, 0x010C, 0xFFF5, 0x010C, 0xFFEE, 0x3807, 0x0004, 0xFEF4, 0xFEF4, 0x2007, 0x0004, 0x010C, 0x004E, 0x010C, 0x0037, 0x2007, 0x0004, 0x0165, 0xFFF0, 0x00B2, 0xFFF0, 0x2007, 0x000C, 0x0000, 0xFFF6, 0x0000, 0xFFFB, 0x3807, 0x0016, 0x0000, 0x0000, 0x2007, 0x0002, 0xFE9B, 0x0035, 0xFE9B, 0x0035, 0x2007, 0x0003, 0x010C, 0x0016, 0x010C, 0x001D, 0x3807, 0x0005, 0xFF4E, 0xFF86, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
