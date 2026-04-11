/* AnimJoint data for relocData file 847 (FTDonkeyAnimStunStartU) */
/* 2208 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimStunStartU_joint1[28];
extern u16 dFTDonkeyAnimStunStartU_joint2[16];
extern u16 dFTDonkeyAnimStunStartU_joint4[34];
extern u16 dFTDonkeyAnimStunStartU_joint5[132];
extern u16 dFTDonkeyAnimStunStartU_joint6[64];
extern u16 dFTDonkeyAnimStunStartU_joint7[16];
extern u16 dFTDonkeyAnimStunStartU_joint8[32];
extern u16 dFTDonkeyAnimStunStartU_joint10[14];
extern u16 dFTDonkeyAnimStunStartU_joint11[152];
extern u16 dFTDonkeyAnimStunStartU_joint12[56];
extern u16 dFTDonkeyAnimStunStartU_joint13[34];
extern u16 dFTDonkeyAnimStunStartU_joint14[8];
extern u16 dFTDonkeyAnimStunStartU_joint16[20];
extern u16 dFTDonkeyAnimStunStartU_joint17[108];
extern u16 dFTDonkeyAnimStunStartU_joint19[32];
extern u16 dFTDonkeyAnimStunStartU_joint21[74];
extern u16 dFTDonkeyAnimStunStartU_joint22[104];
extern u16 dFTDonkeyAnimStunStartU_joint24[130];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimStunStartU_joints[] = {
	(u32)dFTDonkeyAnimStunStartU_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimStunStartU_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimStunStartU_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimStunStartU_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimStunStartU_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimStunStartU_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimStunStartU_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimStunStartU_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimStunStartU_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimStunStartU_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimStunStartU_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimStunStartU_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimStunStartU_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimStunStartU_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimStunStartU_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimStunStartU_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimStunStartU_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimStunStartU_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF01F7, /* [24] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimStunStartU_joint1[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, -80, 14, 384, -19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 268, 26, 0, 2, 3, -11, 720, 172, -118, -101,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 0, -29, 1031, -400,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimStunStartU_joint2[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -214, -154,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), -265, -41, -16, -214, -154,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimStunStartU_joint4[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 53, -80, 156, 0, 319, -157,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 0, 319, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 482, 46, 0, 5, 0, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 750, 13, 0, 1, 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 750, 24, 41,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimStunStartU_joint5[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -982, -554, -1070, -77, -40, 728,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1537, -329, -1148, 56, 688, 714,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1641, 76, -957, -31, 1389, 928,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1442, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1385, 128, 2545, 470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1384, 3, 2329, -203,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1837, -273,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1423, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1510, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1592, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1592, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1494, 57, 1752, 135,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1312, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1529, -93, 1864, 97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1979, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1928, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1790, -130,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 1139, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2008, 24, -1116, 96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1717, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1191, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1248, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1522, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1687, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -1670, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1671, 0, -1523, -1, 1134, -4,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimStunStartU_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -816, -271,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1265, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1077, 299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -666, 332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -413, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -208, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -396, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -648, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1267, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1191, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -640, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -573, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -421, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimStunStartU_joint7[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 702, 15, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -491,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 25), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimStunStartU_joint8[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, -268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1354, 213,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -723, 18, 0, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 134, 59, 0, -4, 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 174, -67, -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimStunStartU_joint10[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -398, 70, 29,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimStunStartU_joint11[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1133, 81, 1665, -236, 1480, 189,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1264, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1215, 209, 1670, 327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1553, 177, 2136, 360,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1520, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2010, -341,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1447, 129,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1503, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1503, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1429, 26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1542, -12, 1625, -94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1480, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1527, 88, 1822, 149,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1883, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1924, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1920, -162,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1484, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1256, -173,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1916, -27, 1711, -224,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1386, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1648, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1074, -78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1189, 47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1318, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1141, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1618, -26, 1236, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 1494, -3, 1434, 4,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1132, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1492, -1, 1436, 2, 1129, -3,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimStunStartU_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -569, -333,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1081, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -869, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -420, 309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -435, -336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -677, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1278, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1183, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -780, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -712, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -430, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimStunStartU_joint13[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 746, 264,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 73, 351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 891, -31, 0, 0, 0, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 306, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 60, 267,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 98, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimStunStartU_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimStunStartU_joint16[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 1046, 573,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -404, -73,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -1356,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 17), -404,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimStunStartU_joint17[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1523, 91, -947, -1, 877, -102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1248, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 98, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 2050, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2070, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1795, -147,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1263, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1058, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 308, 232,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 778, 110,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1641, -102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1395, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 783, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1004, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1025, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1211, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1388, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1546, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1024, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1274, 9,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1547, 0, -1214, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1547, 0, -1215, 0, 1279, 4,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimStunStartU_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 923, 33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1332, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1276, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 1033, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1030, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1026, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimStunStartU_joint21[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1409, 66, -1567, -15, 1852, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1634, -8, 1803, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1156, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1010, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1746, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1659, -57, 1730, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1884, -19, 1072, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1722, 23, -1911, -22, 1100, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -1625, 4, 1238, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -1713, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1724, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1724, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1722, 1, -1623, 2, 1238, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimStunStartU_joint22[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2193, -20, 1235, -9, 1390, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1232, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1568, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 834, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 592, -203,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 746, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1236, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 998, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1537, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1862, 65,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 901, 93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1066, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 993, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1388, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1923, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1727, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1100, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1281, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1719, -6, 1297, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1714, -3, 1308, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1712, -1, 1391, 3, 1312, 3,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimStunStartU_joint24[130] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1083, 27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1348, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1261, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1031, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1024, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 995, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, 0,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFF41, 0xFFE0, 0xFFF4, 0x000A, 0x001D, 0xFFF9, 0x2809, 0x0007, 0xFECF, 0xFF76, 0x2805, 0x0008, 0xFFF1, 0xFF9A, 0x2003, 0x0002, 0xFEAF, 0xFF74, 0x2003, 0x0001, 0xFE08, 0xFFCA, 0x2003, 0x0002, 0xFE86, 0x0037, 0x2003, 0x0001, 0xFEB3, 0x0035, 0x2803, 0x0004, 0x009B, 0x0019, 0x0801, 0x0001, 0x2009, 0x0001, 0xFE3A, 0xFF99, 0x2809, 0x0006, 0xFE3B, 0x000F, 0x2005, 0x0001, 0xFF8A, 0xFFA4, 0x2805, 0x0007, 0xFF20, 0x000B, 0x0801, 0x0001, 0x2003, 0x0001, 0x0087, 0xFFEC, 0x2803, 0x0012, 0x0008, 0x0000, 0x0801, 0x0003, 0x2009, 0x0001, 0xFE49, 0x000D, 0x2809, 0x000E, 0xFE7D, 0x0000, 0x0801, 0x0001, 0x2005, 0x0001, 0xFF2F, 0x0012, 0x2005, 0x000C, 0x0065, 0x0004, 0x200F, 0x0001, 0x0007, 0x0000, 0x0067, 0x0002, 0xFE7D, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
