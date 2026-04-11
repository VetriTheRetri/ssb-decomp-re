/* AnimJoint data for relocData file 838 (FTDonkeyAnimDamage2) */
/* 1936 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimDamage2_joint1[26];
extern u16 dFTDonkeyAnimDamage2_joint2[26];
extern u16 dFTDonkeyAnimDamage2_joint4[42];
extern u16 dFTDonkeyAnimDamage2_joint5[124];
extern u16 dFTDonkeyAnimDamage2_joint7[40];
extern u16 dFTDonkeyAnimDamage2_joint10[18];
extern u16 dFTDonkeyAnimDamage2_joint11[86];
extern u16 dFTDonkeyAnimDamage2_joint12[32];
extern u16 dFTDonkeyAnimDamage2_joint13[12];
extern u16 dFTDonkeyAnimDamage2_joint14[8];
extern u16 dFTDonkeyAnimDamage2_joint16[12];
extern u16 dFTDonkeyAnimDamage2_joint17[108];
extern u16 dFTDonkeyAnimDamage2_joint19[24];
extern u16 dFTDonkeyAnimDamage2_joint21[80];
extern u16 dFTDonkeyAnimDamage2_joint22[124];
extern u16 dFTDonkeyAnimDamage2_joint24[156];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimDamage2_joints[] = {
	(u32)dFTDonkeyAnimDamage2_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimDamage2_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimDamage2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimDamage2_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimDamage2_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTDonkeyAnimDamage2_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimDamage2_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimDamage2_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimDamage2_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimDamage2_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimDamage2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimDamage2_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimDamage2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimDamage2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimDamage2_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimDamage2_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF01AA, /* [24] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimDamage2_joint1[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAZ), 0, 241, -400, -585,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, -29, 1031,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 29), 2234, -6, -19, 14, 240,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 15), 1680, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 14), 1061,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimDamage2_joint2[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), -265, -41, -16, -214, -154,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), -245, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -819, 9, 317, 0, -407, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 0, -66, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimDamage2_joint4[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 750, 24, 41, 0, 319, -157,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 0, 368, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 735, -35, 73, 28, 335, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 467, -20, 250, 1, -202, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 338, 14, 92, -11, -105, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 765, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimDamage2_joint5[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1545, 4, -1523, -112, 1134, 494,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1516, -1, -1768, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1629, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1740, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1849, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1536, -255, -1971, 137, 2005, -305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1006, -254, -1494, 383, 1238, -475,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1026, 114, -1203, 156, 1054, -229,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 669, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1226, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1235, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1321, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1319, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 664, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1156, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1237, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1464, 1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1327, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1462, 3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1163, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1167, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1462, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1459, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1463, 1, -1459, 0, 1167, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimDamage2_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -725,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1133, -444,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1297, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1600, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1499, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -1261, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1244, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1049, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1046, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimDamage2_joint10[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 235, 5, -336, 8, -81, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 340, 188, -72,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimDamage2_joint11[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1492, 831, 1436, -167, 1129, 615,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1039, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2323, 557, 1744, 361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2606, 190, 1851, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2601, -259, 1700, -328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2185, -321, 1011, 36, 1210, -389,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1906, 3, 857, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1241, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1268, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 1475, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1910, 3, 887, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1649, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 1225, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1217, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1198, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1647, -1, 1475, 0, 1196, -1,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimDamage2_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -950,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1367, -452,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1321, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1141, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1146, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -784, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -779, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimDamage2_joint13[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 98,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 17), 98,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimDamage2_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimDamage2_joint16[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 13), -1070,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 16), -404,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimDamage2_joint17[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3156, 47, -392, -8, -329, -214,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3153, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -876, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -584, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -608, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3205, -64, -680, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3024, -75, -499, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -548, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3054, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 3519, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -883, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -902, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -568, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1321, -170,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3659, 156,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 4378, 43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1492, -155,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1918, -8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4414, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4451, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -907, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4456, 4, -909, -1, -1922, -4,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimDamage2_joint19[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1026, 64,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 1128, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1118, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1074, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1073, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimDamage2_joint21[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 26, 14, -14, -369, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -214, 72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 119, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -216, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -181, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 690, 37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -134, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 139, -26,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 119, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 155, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 718, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 407, -81,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 111, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 6, -12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 332, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 302, -30, 155, 0, 0, -7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimDamage2_joint22[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1504, 64, 1391, 76, 1312, -320,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -1251, 180, 1115, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 992, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 967, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 996, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1016, 12, 1000, -37, 1214, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1484, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1521, -198, 913, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1623, -65, 946, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1618, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1469, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1551, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1528, -12,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1600, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1191, 89,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1515, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1226, -61,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1451, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1403, -131,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1118, 8, 1182, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1337, -116, 1343, 121,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1230, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1407, -69, 1448, 105, 1160, -69,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimDamage2_joint24[156] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 994, -248,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 746, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 737, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1025, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1031, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 714, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 724, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1069, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1078, 9,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0650, 0xFF7B, 0x05E0, 0xFFD4, 0x04C5, 0x0104, 0x2805, 0x0003, 0x068B, 0x00BA, 0x2803, 0x0004, 0x0502, 0xFF57, 0x2009, 0x0001, 0x05C9, 0x00A9, 0x2009, 0x0001, 0x0617, 0x0052, 0x2809, 0x0005, 0x0760, 0xFFD7, 0x0801, 0x0001, 0x2005, 0x0001, 0x076D, 0x00C9, 0x2805, 0x0006, 0x07D3, 0xFFD2, 0x2003, 0x0001, 0x0421, 0xFF35, 0x2003, 0x0002, 0x03CD, 0x00B8, 0x200B, 0x0001, 0x04DD, 0x00D8, 0x0733, 0xFFD2, 0x2803, 0x0005, 0x0603, 0x000B, 0x2809, 0x0014, 0x05DA, 0x0000, 0x0801, 0x0002, 0x2005, 0x0001, 0x07A2, 0xFFCE, 0x2805, 0x0011, 0x05FE, 0xFFFF, 0x0801, 0x0002, 0x2003, 0x0001, 0x060C, 0x0005, 0x2003, 0x0002, 0x065E, 0x0034, 0x2003, 0x0001, 0x0676, 0xFF82, 0x2003, 0x0001, 0x0562, 0xFF82, 0x2003, 0x0001, 0x0579, 0x0026, 0x2003, 0x0007, 0x0513, 0xFFE2, 0x2003, 0x0001, 0x04FD, 0x0009, 0x2003, 0x0001, 0x0525, 0x002B, 0x200F, 0x0001, 0x0554, 0x002F, 0x05FD, 0x0000, 0x05DA, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
