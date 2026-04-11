/* AnimJoint data for relocData file 805 (FTDonkeyAnimDash) */
/* 2816 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimDash_joint1[38];
extern u16 dFTDonkeyAnimDash_joint2[54];
extern u16 dFTDonkeyAnimDash_joint4[48];
extern u16 dFTDonkeyAnimDash_joint5[134];
extern u16 dFTDonkeyAnimDash_joint7[88];
extern u16 dFTDonkeyAnimDash_joint8[60];
extern u16 dFTDonkeyAnimDash_joint10[56];
extern u16 dFTDonkeyAnimDash_joint11[148];
extern u16 dFTDonkeyAnimDash_joint12[64];
extern u16 dFTDonkeyAnimDash_joint13[18];
extern u16 dFTDonkeyAnimDash_joint14[10];
extern u16 dFTDonkeyAnimDash_joint16[20];
extern u16 dFTDonkeyAnimDash_joint17[136];
extern u16 dFTDonkeyAnimDash_joint19[48];
extern u16 dFTDonkeyAnimDash_joint21[148];
extern u16 dFTDonkeyAnimDash_joint22[114];
extern u16 dFTDonkeyAnimDash_joint24[174];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimDash_joints[] = {
	(u32)dFTDonkeyAnimDash_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimDash_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimDash_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimDash_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimDash_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTDonkeyAnimDash_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimDash_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimDash_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimDash_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimDash_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimDash_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimDash_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimDash_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimDash_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimDash_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimDash_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimDash_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF027D, /* [24] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimDash_joint1[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -24, 1032, -402,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 2, 42, 805, 196, -394, 90,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 65, 30, 1450, 63, -209, -2,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 1032, -402,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 9), 94, -69,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -69,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), -24,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimDash_joint2[54] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -41, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -133, 3, 13, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 10,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 3,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -88, -5, -77, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 573, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 317, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -96, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 14), -265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -77, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 12), -16,
	ftAnimBlock(0, 4),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), -41,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimDash_joint4[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 750, 24, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 735, -12, 20, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), -39,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, -5, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 23, -18, -34, 6, 29, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 457, 36, 58, 8, -5, -4,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 14), 750,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 69, -2, -18, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 24, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimDash_joint5[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1545, 69, -1523, -21, 1134, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1671, -73, -1521, 136, 1383, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1468, 119, -1272, 189, 943, -546,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1199, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1911, 229, 291, -358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1928, -10, 226, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 736, 131,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1769, 82,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1192, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1217, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1231, -117, 865, 236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1452, -127, 1209, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1844, 51, -1486, -49, 1199, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1667, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1759, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1049, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1083, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1075, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1670, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1526, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1753, -11, 1182, 80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1549, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1158, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1141, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1545, -3, -1523, 3, 1134, -6,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimDash_joint7[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -340,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -748, -342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1093, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -987, 346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -399, 338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -344, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -457, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -842, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -926, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -725, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -557, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -362, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -4, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -262, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -491, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -452, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -420, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimDash_joint8[60] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 17), -67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 130, -32,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -69, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 71, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 151, 6,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -17, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 23, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 14), -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 154, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 12), 174,
	ftAnimBlock(0, 10),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimDash_joint10[56] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -328, 15, 35,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 3,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -1, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -269, 3, 151, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 97, 4,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 8, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 163, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -33, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -269, -9,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 12), -398,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 11), 70,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 29,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimDash_joint11[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1492, 51, 1436, -59, 1129, 280,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1344, 88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1907, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1409, 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1754, 197,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1503, -412,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1554, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2120, -22, 1418, -237,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1580, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1079, -78, 980, -512,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1260, 147, 478, -306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1587, 21, 1373, 88, 367, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1421, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 662, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1522, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1392, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1250, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1404, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1621, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 696, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 703, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1226, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1485, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1632, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1580, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 727, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 900, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1542, -34, 961, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1439, -6, 1124, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1492, 6, 1436, -3, 1129, 4,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimDash_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -270,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1194, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1285, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -765, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -521, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -449, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -370, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -162, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -189, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -415, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimDash_joint13[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 98,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 748, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 357, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 14), 98,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimDash_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 31),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimDash_joint16[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 1046, 573,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -358, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -783, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), -404,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimDash_joint17[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1521, -22, -1214, -49, 1303, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1468, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1456, 13, 1418, 361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1526, 11, 1982, 430,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1509, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2279, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1474, -4, 2150, -148,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1311, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 697, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1515, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1476, 16,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1283, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1325, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 700, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1491, -116, -1354, 103, 732, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1243, -146, -1118, 115, 938, 140,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1245, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1198, -32, -1123, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 1323, 31, -1254, 9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1288, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1315, -16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1359, 43, -1243, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1504, 29, -1216, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1521, 17, -1214, 1, 1303, -12,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimDash_joint19[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1004, 117,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1225, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1015, -290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 644, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 699, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1190, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1156, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 829, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 872, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 999, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1004, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimDash_joint21[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, 143, 24, -33, -377, -118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -111, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 80, 156, -495, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 249, -13, -709, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -348, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 53, -105, -215, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 37, -16, -80, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 50, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -78, 1, -349, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -143, 75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -182, -50,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 139, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 422, -130,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -71, 64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 27, -61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -228, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 250, -40, -256, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 340, 8, -79, 112, -97, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -322, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 31, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 267, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 15, -27,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -351, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -385, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 30, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 25, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -6, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -62, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 0, 24, -1, -377, 7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimDash_joint22[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 99, -85, 216, 31, -297, -241,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -109, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 309, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -538, -254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -806, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -715, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -109, -6, -676, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 57, 103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -655, 77,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 413, 85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 248, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 172, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 53, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -580, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -256, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 61, 15, -122, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -189, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 66, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 300, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 218, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -210, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -302, 7,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 89, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 99, 10, 216, -1, -297, 4,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimDash_joint24[174] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 993, 139,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1213, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1188, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 646, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 576, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 710, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 751, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 993, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, 0,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0649, 0xFFFB, 0xF94F, 0x0044, 0xF838, 0x0018, 0x2805, 0x0003, 0xF9F5, 0xFFF7, 0x2803, 0x0005, 0x072C, 0x003B, 0x2009, 0x0002, 0xF89B, 0xFFF0, 0x2009, 0x0001, 0xF830, 0xFFB1, 0x2809, 0x0009, 0xFB10, 0x0002, 0x2005, 0x0001, 0xF9E9, 0xFFF6, 0x2805, 0x000A, 0xFA74, 0x0000, 0x0801, 0x0001, 0x2003, 0x0001, 0x075C, 0x0019, 0x2003, 0x0003, 0x0653, 0xFF25, 0x2003, 0x0001, 0x0557, 0xFF25, 0x2003, 0x0002, 0x0494, 0x004A, 0x200B, 0x0001, 0x0530, 0x009E, 0xFAFA, 0xFFEE, 0x2803, 0x0003, 0x067B, 0xFFFC, 0x2809, 0x0004, 0xFAA0, 0xFFB8, 0x0801, 0x0001, 0x2005, 0x0001, 0xFA79, 0x0008, 0x2805, 0x0006, 0xFACB, 0xFFDB, 0x0801, 0x0001, 0x2003, 0x0001, 0x0631, 0xFFCF, 0x2803, 0x0008, 0x06F8, 0x002F, 0x2009, 0x0001, 0xFA66, 0xFFB7, 0x2809, 0x000B, 0xF85C, 0xFFE1, 0x0801, 0x0003, 0x2005, 0x0001, 0xFAA1, 0xFFD3, 0x2805, 0x0008, 0xF950, 0xFFFC, 0x0801, 0x0003, 0x2003, 0x0001, 0x071B, 0x000F, 0x2803, 0x0004, 0x0667, 0xFFD1, 0x0801, 0x0003, 0x2009, 0x0001, 0xF842, 0xFFEF, 0x200F, 0x0001, 0x0649, 0xFFE2, 0xF94F, 0xFFFF, 0xF838, 0xFFF7, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
