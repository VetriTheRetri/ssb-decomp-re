/* AnimJoint data for relocData file 542 (FTMarioAnimCeilingBonk) */
/* 1328 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimCeilingBonk_joint2[30];
extern u16 dFTMarioAnimCeilingBonk_joint4[22];
extern u16 dFTMarioAnimCeilingBonk_joint5[62];
extern u16 dFTMarioAnimCeilingBonk_joint6[30];
extern u16 dFTMarioAnimCeilingBonk_joint7[12];
extern u16 dFTMarioAnimCeilingBonk_joint10[42];
extern u16 dFTMarioAnimCeilingBonk_joint11[60];
extern u16 dFTMarioAnimCeilingBonk_joint12[30];
extern u16 dFTMarioAnimCeilingBonk_joint13[16];
extern u16 dFTMarioAnimCeilingBonk_joint15[10];
extern u16 dFTMarioAnimCeilingBonk_joint16[50];
extern u16 dFTMarioAnimCeilingBonk_joint18[34];
extern u16 dFTMarioAnimCeilingBonk_joint20[60];
extern u16 dFTMarioAnimCeilingBonk_joint21[58];
extern u16 dFTMarioAnimCeilingBonk_joint23[36];
extern u16 dFTMarioAnimCeilingBonk_joint24[64];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimCeilingBonk_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTMarioAnimCeilingBonk_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimCeilingBonk_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimCeilingBonk_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimCeilingBonk_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimCeilingBonk_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimCeilingBonk_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimCeilingBonk_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimCeilingBonk_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimCeilingBonk_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimCeilingBonk_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimCeilingBonk_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimCeilingBonk_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimCeilingBonk_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimCeilingBonk_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimCeilingBonk_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimCeilingBonk_joint24, /* [23] joint 24 */
};

/* Joint 2 */
u16 dFTMarioAnimCeilingBonk_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAY), 0, 0, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAZ), 0, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAY, 3), 0, 0, 534, 854, 2662, -573,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAY, 2), 0, 0, 534, -854, 2662, 573,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAY, 3), 0, 0, 4096,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimCeilingBonk_joint4[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 134, 11, 0, 4, 0, -4,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -14, -92,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 4, 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 134,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimCeilingBonk_joint5[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2969, 82, -474, 138, -88, -173,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -490, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2887, -16, -261, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3002, -73, -207, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3003, -27, -152, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3089, 33, -765, -264, 11, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -998, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2936, 331, -103, -291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2425, -16, -572, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2969, -544, -474, 524, -88, 484,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimCeilingBonk_joint6[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, 384,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 187,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -685, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 301,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimCeilingBonk_joint7[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -625,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimCeilingBonk_joint10[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 127, 27, 0, -16, 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 551, 84, -15, -3, 7, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 551, -4, -15, 1, 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 537, -141, -9, 5, 4, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 127, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimCeilingBonk_joint11[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1407, -164, 1146, 69, 1530, -215,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 939, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1243, -32, 1314, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1342, 63, 1372, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1333, 15, 1450, 42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 683, -209,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 617, 313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1369, -167, 1508, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 999, 18, 1179, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1407, 408, 1146, 528, 1530, 350,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimCeilingBonk_joint12[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, 375,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -523, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 139,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimCeilingBonk_joint13[16] = {
	ftAnimSetVal(FT_ANIM_ROTX), 625,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), 268,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 268,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 625,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimCeilingBonk_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimCeilingBonk_joint16[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -87, 31, -50, -71, -248, -248,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -74, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -110, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -497, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -472, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -400, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -286, 96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -155, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -44, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -95, 14, -51, -7, -247, -91,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimCeilingBonk_joint18[34] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 229, 190,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 420, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 229, 222,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimCeilingBonk_joint20[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1520, -41, -1679, 37, 2045, -328,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1499, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1479, 73, 1717, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1668, 121, 1662, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1887, 193,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1538, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1542, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1668, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2092, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1535, -5, 2152, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1527, -7, -1683, -14, 2046, -106,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimCeilingBonk_joint21[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1542, -111, 1445, -8, 1262, -255,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1412, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1765, 7, 852, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1639, 113, 1133, 200,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1381, 116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1515, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1442, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1458, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1487, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1317, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1542, -27, 1445, -12, 1262, -55,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimCeilingBonk_joint23[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 716, 114,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 598, -415,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 513, 354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, 203,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimCeilingBonk_joint24[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 57, 4, -134, -50, 164, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 62, -61, -184, 48, 30, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -65, -80, -37, 85, -205, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -181, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 93, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 8, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -14, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 99, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 352, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -147, 23, 245, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 57, -35, -134, 13, 164, -80,
	ftAnimEnd(),
	0x0000, 0x0000,
};
