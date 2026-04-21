/* AnimJoint data for relocData file 851 (FTDonkeyAnimDownForwardU) */
/* 2400 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimDownForwardU_joint1[22];
extern u16 dFTDonkeyAnimDownForwardU_joint2[62];
extern u16 dFTDonkeyAnimDownForwardU_joint3[26];
extern u16 dFTDonkeyAnimDownForwardU_joint5[34];
extern u16 dFTDonkeyAnimDownForwardU_joint6[168];
extern u16 dFTDonkeyAnimDownForwardU_joint7[64];
extern u16 dFTDonkeyAnimDownForwardU_joint8[10];
extern u16 dFTDonkeyAnimDownForwardU_joint9[42];
extern u16 dFTDonkeyAnimDownForwardU_joint11[14];
extern u16 dFTDonkeyAnimDownForwardU_joint12[100];
extern u16 dFTDonkeyAnimDownForwardU_joint13[56];
extern u16 dFTDonkeyAnimDownForwardU_joint14[38];
extern u16 dFTDonkeyAnimDownForwardU_joint15[8];
extern u16 dFTDonkeyAnimDownForwardU_joint17[16];
extern u16 dFTDonkeyAnimDownForwardU_joint18[110];
extern u16 dFTDonkeyAnimDownForwardU_joint20[40];
extern u16 dFTDonkeyAnimDownForwardU_joint22[88];
extern u16 dFTDonkeyAnimDownForwardU_joint23[124];
extern u16 dFTDonkeyAnimDownForwardU_joint25[48];
extern u16 dFTDonkeyAnimDownForwardU_joint26[78];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimDownForwardU_joints[] = {
	(u32)dFTDonkeyAnimDownForwardU_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimDownForwardU_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimDownForwardU_joint3, /* [2] joint 3 */
	(u32)dFTDonkeyAnimDownForwardU_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTDonkeyAnimDownForwardU_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimDownForwardU_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimDownForwardU_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimDownForwardU_joint9, /* [8] joint 9 */
	(u32)dFTDonkeyAnimDownForwardU_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTDonkeyAnimDownForwardU_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimDownForwardU_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimDownForwardU_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimDownForwardU_joint15, /* [14] joint 15 */
	(u32)dFTDonkeyAnimDownForwardU_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTDonkeyAnimDownForwardU_joint18, /* [17] joint 18 */
	(u32)dFTDonkeyAnimDownForwardU_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTDonkeyAnimDownForwardU_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTDonkeyAnimDownForwardU_joint23, /* [22] joint 23 */
	(u32)dFTDonkeyAnimDownForwardU_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTDonkeyAnimDownForwardU_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTDonkeyAnimDownForwardU_joint1[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 480, 1200,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 2800,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 15), 3480, 1352,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 7), 4200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 9), 4200,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimDownForwardU_joint2[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, -80, 14, 384, -19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 160, 0, 3, 14, 8, 600, 652, -19, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), 3216, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 24, 17, 1200, -336, -21, -3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 36, 18, 180, -192, -23, -3,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), 58, -25, -28, -143,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 960, 324,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 16), 1031,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 11), 3216, 0, -29, -400,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTDonkeyAnimDownForwardU_joint3[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -214, -154,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), -214, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, -7, 0, -1, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -265, -41, -16,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimDownForwardU_joint5[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 53, -80, 156, 0, 319, -157,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 0, 319, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 268, 33, 0, 3, 0, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 893, 15, 0, 0, 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 750, 24, 41,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimDownForwardU_joint6[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 203, -538, -169, -1649, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 828, 27, -707, -393, -1798, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 680, 287, -1325, -298, -1464, 365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1403, 519, -1303, -17, -1066, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1718, 197, -1361, -79, -1479, -326,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1600, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1309, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1796, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1772, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1782, 114,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1588, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1856, -174,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1226, 98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1117, -110,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1931, 77, -2055, -118,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1843, -22, -2118, -57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1263, -130,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1341, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1829, -15, -2193, -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1756, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1572, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1485, -42, -1316, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1548, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1514, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1803, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2071, -20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1552, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1551, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1519, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1545, -6, -1523, -4, -2082, -11,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimDownForwardU_joint7[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -816, -206,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1023, -303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1424, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -348, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -244, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -808, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -939, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -627, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -410, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -425, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -636, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1118, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1081, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -443, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimDownForwardU_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 702, 15, 17,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTDonkeyAnimDownForwardU_joint9[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, -268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1354, 213,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 402, 33, 0, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 402, -37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -348, -14, 0, -4, 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 174, -67, -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimDownForwardU_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), -398, 70, 29,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimDownForwardU_joint12[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2083, 20, 1665, -45, -1736, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1734, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1395, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1718, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1750, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1562, -43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1692, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1808, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1383, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1483, 20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1624, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -2190, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1495, -15, -2239, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1281, -5, -1747, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1783, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1441, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1472, -35, 1280, 4, -1791, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -1718, -10, 1429, 11, -2077, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1724, -5, 1436, 7, -2087, -10,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimDownForwardU_joint13[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -569, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -502, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -343, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -800, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -911, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -605, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -393, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -417, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -625, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1085, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1057, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -452, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimDownForwardU_joint14[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 702, 18, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 646, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 711, -20, 0, 4, 0, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 229, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 98, 49,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 98, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTDonkeyAnimDownForwardU_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimDownForwardU_joint17[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 22), -404, -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -1136,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -404,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTDonkeyAnimDownForwardU_joint18[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1523, 147, -947, -16, -2339, -222,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2894, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1731, -12, -1093, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1645, -59, -1315, -187,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1615, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1396, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2905, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -3009, 14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1680, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1821, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1431, -29, -2963, 95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2131, 96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1302, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1764, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 1519, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2055, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -1936, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1299, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1223, 7,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1536, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1546, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1547, 0, -1215, 8, -1937, -1,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimDownForwardU_joint20[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 923, 63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1005, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 847, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1254, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1244, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 935, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 926, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1024, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimDownForwardU_joint22[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1409, -43, 1649, 5, 1852, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1565, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1479, 50, 1520, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1447, 9, 1504, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 1123, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -2062, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2073, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1845, 2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1577, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1594, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1066, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1198, 15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1843, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1769, 39,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1213, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1226, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1722, 47, 1593, -1, 1238, 11,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimDownForwardU_joint23[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 585, -96, 373, -13, -217, -203,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 100, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 9, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -421, -371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -960, -427,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1316, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 45, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -340, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 18, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 61, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1331, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -859, 197,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 46, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -93, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -653, 190,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -371, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -390, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -148, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -42, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 212, 5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -353, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -282, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -109, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 98, 7,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -288, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -296, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 104, 5, 217, 5, -295, 1,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimDownForwardU_joint25[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1083, 60,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1097, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 897, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1158, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1167, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 939, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 929, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 925, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 942, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 993, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTDonkeyAnimDownForwardU_joint26[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -191, -1, -12, 11, 29, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 19, 4, -210, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -170, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -188, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 372, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 439, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 268, -16,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 26, 15, -230, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 264, -15, -481, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 258, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 55, -43,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 246, -18, -475, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 110, -8, -389, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, -47, 103, -6, -387, 2,
	ftAnimEnd(),
};
