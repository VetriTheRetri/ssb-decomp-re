/* AnimJoint data for relocData file 1603 (FTCaptainAnimItemThrowSmashU) */
/* 2000 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimItemThrowSmashU_joint1[36];
extern u16 dFTCaptainAnimItemThrowSmashU_joint2[44];
extern u16 dFTCaptainAnimItemThrowSmashU_joint4[44];
extern u16 dFTCaptainAnimItemThrowSmashU_joint5[102];
extern u16 dFTCaptainAnimItemThrowSmashU_joint6[40];
extern u16 dFTCaptainAnimItemThrowSmashU_joint7[48];
extern u16 dFTCaptainAnimItemThrowSmashU_joint8[34];
extern u16 dFTCaptainAnimItemThrowSmashU_joint10[8];
extern u16 dFTCaptainAnimItemThrowSmashU_joint11[132];
extern u16 dFTCaptainAnimItemThrowSmashU_joint12[56];
extern u16 dFTCaptainAnimItemThrowSmashU_joint13[26];
extern u16 dFTCaptainAnimItemThrowSmashU_joint16[10];
extern u16 dFTCaptainAnimItemThrowSmashU_joint17[72];
extern u16 dFTCaptainAnimItemThrowSmashU_joint19[32];
extern u16 dFTCaptainAnimItemThrowSmashU_joint21[72];
extern u16 dFTCaptainAnimItemThrowSmashU_joint22[82];
extern u16 dFTCaptainAnimItemThrowSmashU_joint24[32];
extern u16 dFTCaptainAnimItemThrowSmashU_joint25[80];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimItemThrowSmashU_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashU_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashU_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashU_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashU_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashU_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashU_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashU_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashU_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashU_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashU_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashU_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashU_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashU_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashU_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashU_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashU_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashU_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimItemThrowSmashU_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimItemThrowSmashU_joint1[36] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1348, 137, -133, -131,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 6), -7,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1737, 111, -131, 59,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), 4,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 1600, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 16), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimItemThrowSmashU_joint2[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 107, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -344, 20, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 4, 268, 67, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 264, -10, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, 0, 107, -3, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimItemThrowSmashU_joint4[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 189, 0, 0, 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -102, -37, -40, 13, 155, -28, 33, -80, 10, 31, -38, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -113, 16, 107, 2, -225, -8, -80, -14, 0, -19, -29, 38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 189, 0, 0, 0, -31, 47,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimItemThrowSmashU_joint5[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1888, 9, -1652, 15, -2161, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1357, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2078, 169, -2456, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2284, 173, -2659, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2426, 98, -2797, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2480, -342, -1290, 178, -2856, 397,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1742, -597, -1000, 95, -2002, 699,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1286, -205, -1100, -70, -1458, 274,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1353, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1331, 49, -1453, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1385, 56, -1465, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1889, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -2123, -40,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1405, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1645, -17,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1887, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1888, 1, -1652, -7, -2161, -38,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimItemThrowSmashU_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -719, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -627, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -655, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1045, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -976, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -934, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -911, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -732, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -719, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimItemThrowSmashU_joint7[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -781, -89, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -701, 29, 0, -26, 0, 96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -544, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -246, 5, 187, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 11, 185, 302, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 124, -7, -154, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -130, -14, -48, -13, -209, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -781, -89, -388,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimItemThrowSmashU_joint8[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -209, -39, 282, -18, 53, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -313, 15, -144, -15, 35, -8,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 16), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -72, 19, -19, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimItemThrowSmashU_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimItemThrowSmashU_joint11[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3042, 60, 129, -14, 632, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3863, 422,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 4, -90, 871, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -89, 74, 759, -232,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 966, 489,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4325, 288, 405, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4441, -331, 318, -320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3663, -228, -235, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3984, 165, 1455, 259, 196, 246,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1381, -81, 308, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3995, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 4092, 114,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1322, -47, 368, 74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 993, 87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1462, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4230, 130,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 4638, 20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1080, 103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1853, 245,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1445, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1462, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2082, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2206, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4651, 12, 1479, 16, 2241, 34,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimItemThrowSmashU_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1009, -26,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -977, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -783, 488,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 391,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -281, -232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -464, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -686, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -642, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1078, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1153, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1047, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1009, 38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimItemThrowSmashU_joint13[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 573, 6, 13, -21, 75, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 361, -25, -43, 21, 185, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 270, 275, 62,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimItemThrowSmashU_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 83, 49, 38,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimItemThrowSmashU_joint17[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -29, 70, -23, -472, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -86, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -517, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -377, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -420, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 115, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -112, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 254, 196, -365, 86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -337, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 280, 21, 127, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), 190, 0, 72, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -350, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -471, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 0, 70, -2, -472, -1,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimItemThrowSmashU_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, 44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 847, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 865, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 318, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 268, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 441, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimItemThrowSmashU_joint21[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1735, 14, 1650, -3, -1528, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1563, 39, 1525, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1782, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1793, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1436, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1507, -85, 1438, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1734, -115, 1579, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1738, -4, 1560, -11, -1408, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), -1733, -1, -1525, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), 1627, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1637, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1644, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1735, -1, 1650, 5, -1528, -2,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimItemThrowSmashU_joint22[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 160, -44, 110, 0, -76, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -233, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -246, -108, -47, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -359, 59, -165, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 202, 183, 67, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -72, 90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -33, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 239, 23, 55, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 177, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 107, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -33, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -74, -2,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 171, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 162, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, -2, 110, 2, -76, -1,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimItemThrowSmashU_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, 36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 882, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 898, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 451, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 419, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 538, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimItemThrowSmashU_joint25[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 161, 0, 365, -10, -279, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 83, -38, 103, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -427, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -180, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 24, -8, 209, 94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 134, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 423, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -169, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -278, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 138, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 160, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 414, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 370, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, 0, 365, -5, -279, -1,
	ftAnimEnd(),
	0x0000, 0x0000,
};
