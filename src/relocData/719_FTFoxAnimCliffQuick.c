/* AnimJoint data for relocData file 719 (FTFoxAnimCliffQuick) */
/* 2400 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimCliffQuick_joint1[52];
extern u16 dFTFoxAnimCliffQuick_joint2[78];
extern u16 dFTFoxAnimCliffQuick_joint3[50];
extern u16 dFTFoxAnimCliffQuick_joint5[46];
extern u16 dFTFoxAnimCliffQuick_joint6[84];
extern u16 dFTFoxAnimCliffQuick_joint7[40];
extern u16 dFTFoxAnimCliffQuick_joint8[10];
extern u16 dFTFoxAnimCliffQuick_joint9[22];
extern u16 dFTFoxAnimCliffQuick_joint11[10];
extern u16 dFTFoxAnimCliffQuick_joint12[128];
extern u16 dFTFoxAnimCliffQuick_joint13[68];
extern u16 dFTFoxAnimCliffQuick_joint14[28];
extern u16 dFTFoxAnimCliffQuick_joint16[10];
extern u16 dFTFoxAnimCliffQuick_joint17[92];
extern u16 dFTFoxAnimCliffQuick_joint19[48];
extern u16 dFTFoxAnimCliffQuick_joint21[106];
extern u16 dFTFoxAnimCliffQuick_joint22[76];
extern u16 dFTFoxAnimCliffQuick_joint24[40];
extern u16 dFTFoxAnimCliffQuick_joint25[80];
extern u16 dFTFoxAnimCliffQuick_joint26[42];
extern u16 dFTFoxAnimCliffQuick_joint27[36];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimCliffQuick_joints[] = {
	(u32)dFTFoxAnimCliffQuick_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimCliffQuick_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimCliffQuick_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimCliffQuick_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimCliffQuick_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimCliffQuick_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimCliffQuick_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimCliffQuick_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimCliffQuick_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimCliffQuick_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimCliffQuick_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimCliffQuick_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimCliffQuick_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimCliffQuick_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimCliffQuick_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimCliffQuick_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimCliffQuick_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimCliffQuick_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimCliffQuick_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimCliffQuick_joint26, /* [25] joint 26 */
	(u32)dFTFoxAnimCliffQuick_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimCliffQuick_joint1[52] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -1800, -240,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), -1800, -240,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 8), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -120,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -120,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 3), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -120,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -1620, 959, -359, -383,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), -1200, 1823,
	ftAnimSetValT(FT_ANIM_TRAX, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), -480,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), -480, 2133,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -480,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimCliffQuick_joint2[78] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY), 60, 13, 912, 3,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 9), 257, -8,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 963, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 9), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), 7, -34,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -8,
	ftAnimSetValRateT(FT_ANIM_TRAX, 5), -102, -741,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -18,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 916, -58,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -58, -34,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -5, 21,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 912,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), -741, 21,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 894, -80,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), -532, 111, 0, -80,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 111, -80,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), -420, 440, -24, 126,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -80,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 912, 343,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTFoxAnimCliffQuick_joint3[50] = {
	ftAnimSetValAfter(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -625, -804,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 804, -625,
	ftAnimSetValT(FT_ANIM_TRAX, 30), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -268, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -268, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 804, -50, -625, -22, -804, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 402, -114, -804, 31, -1206, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -89, -402, 178, -1206, -89,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimCliffQuick_joint5[46] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -213, -21, 167, 16, 500, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -213, 42, 167, -33, 500, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 0, 76,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 536,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 402, 57, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 402, -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimCliffQuick_joint6[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1936, 2, -428, 0, -1658, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -327, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 2065, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -2061, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2048, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1802, -71,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -345, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -341, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1991, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2073, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, 157, -1899, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -25, 4, -1935, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2055, 0, -126, 23, -1836, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2017, -23, 215, 23, -2109, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2025, 8, 68, -147, -1868, 240,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimCliffQuick_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -583, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -486, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -207, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -358, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 351,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimCliffQuick_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimCliffQuick_joint9[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 446,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), 0, 446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 178, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 178, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimCliffQuick_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimCliffQuick_joint12[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2117, -28, 1289, 15, 2371, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2069, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1360, 114, 2334, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1555, 65, 2499, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1343, -99, 2266, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2041, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1905, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1292, -51, 2197, -65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1226, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2136, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1995, 75, 2243, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2329, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2057, -54,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1265, 82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1340, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2420, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2364, -47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2011, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2079, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2096, 298, 1053, -363, 2281, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2677, -24, 612, 25, 2823, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2047, -162, 1104, 368, 2242, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2353, 305, 1349, 244, 2549, 306,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimCliffQuick_joint13[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -915, 58,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -627, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -636, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -225, 314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -135, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -261, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -614, -269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -801, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -915, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -864, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -765, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -630, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -243, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -763, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -888, -124,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTFoxAnimCliffQuick_joint14[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 272, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 89, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 178, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 268, -39,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTFoxAnimCliffQuick_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimCliffQuick_joint17[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1510, 0, 1739, 1, -1556, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1623, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1808, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1523, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1648, -84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1609, -48,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1622, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1576, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1720, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1609, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1577, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1649, -87,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1544, -77, 1760, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1314, 36, 1602, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1717, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1669, 30,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1380, 7, 1644, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1328, -51, 1576, -68, -1631, 37,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimCliffQuick_joint19[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 5, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 845, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 857, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 522, -426,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimCliffQuick_joint21[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 136, 21, -105, 7, 433, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 178, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -39, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 344, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 101, -204,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -399, -52,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 149, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 151, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -426, 182,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 415, 219,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 70, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 267, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 403, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 389, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -48, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 150, -23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 432, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 408, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 351, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 308, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 112, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 373, 64, 143, 30, 430, 22,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimCliffQuick_joint22[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1451, 1, -1597, 4, 1167, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1464, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1406, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1655, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1607, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1666, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1477, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1569, -47,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1449, -54, 1571, -79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1601, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1548, 30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1602, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1562, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1560, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1624, -61, -1627, -67, 1584, 36,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimCliffQuick_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 821, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 785, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 744, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 724, -288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 166, -359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimCliffQuick_joint25[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1538, -8, 1644, 4, 1463, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1475, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1553, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1305, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1306, 236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1778, 384,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2074, 144,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2049, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1472, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1724, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2021, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2022, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1542, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1568, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1728, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1671, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1783, 112, 1523, -44, 2014, -7,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimCliffQuick_joint26[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -714, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -992, 14, 32, 3, -186, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -587, 106,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 32, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -142, 7, 32, 22, -186, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -504, -46, 279, 22, -421, -14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTFoxAnimCliffQuick_joint27[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -134, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 64, -450,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -507, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -343, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 137, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 372, 24, 0, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 329, -9, -270, -45,
	ftAnimEnd(),
};
