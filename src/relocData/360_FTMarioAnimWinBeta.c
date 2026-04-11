/* AnimJoint data for relocData file 360 (FTMarioAnimWinBeta) */
/* 2080 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimWinBeta_joint1[16];
extern u16 dFTMarioAnimWinBeta_joint2[78];
extern u16 dFTMarioAnimWinBeta_joint4[10];
extern u16 dFTMarioAnimWinBeta_joint5[108];
extern u16 dFTMarioAnimWinBeta_joint7[52];
extern u16 dFTMarioAnimWinBeta_joint10[36];
extern u16 dFTMarioAnimWinBeta_joint11[104];
extern u16 dFTMarioAnimWinBeta_joint12[48];
extern u16 dFTMarioAnimWinBeta_joint13[18];
extern u16 dFTMarioAnimWinBeta_joint15[18];
extern u16 dFTMarioAnimWinBeta_joint16[132];
extern u16 dFTMarioAnimWinBeta_joint18[46];
extern u16 dFTMarioAnimWinBeta_joint20[90];
extern u16 dFTMarioAnimWinBeta_joint21[88];
extern u16 dFTMarioAnimWinBeta_joint23[148];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimWinBeta_joints[] = {
	(u32)dFTMarioAnimWinBeta_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimWinBeta_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimWinBeta_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimWinBeta_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimWinBeta_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTMarioAnimWinBeta_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimWinBeta_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimWinBeta_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimWinBeta_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimWinBeta_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimWinBeta_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimWinBeta_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimWinBeta_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimWinBeta_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimWinBeta_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF01D8, /* [23] END */
};

/* Joint 1 */
u16 dFTMarioAnimWinBeta_joint1[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 223, 0, 0, 540, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 65), 0, 223, 0, 0, 540, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimWinBeta_joint2[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -81, 185, -790, 3, -95, -130, 0, -15, 0, -50, 0, 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 17), -960,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 1486, 0, -22, 0, -89, 0, 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -697, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -569, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValT(FT_ANIM_ROTZ, 38), -956,
	ftAnimBlock(0, 7),
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 32), -569, -22, -89, 1,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 31), 1490,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -196, -177, -92, 99,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -117, -93, 250, 337, -25, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -689, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -338, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimWinBeta_joint4[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 258, 110,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 65), 208, 258, 110,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimWinBeta_joint5[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1474, -29, -1308, 9, -1881, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -1393, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -1426, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -2124, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2133, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 35), -2141, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1392, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 34), -1391, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1426, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 26), -1427, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1391, -21, -1426, 48, -2140, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1434, -172, -1330, 113, -1996, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1735, -351, -1198, -58, -1536, 494,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2137, -268, -1447, -169, -1007, 303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2272, -91, -1537, -20, -929, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1921, 126, -983, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1323, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1290, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1795, 126, -1261, 29, -1072, -88,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimWinBeta_joint7[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -181, -135,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 65), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -682, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -676, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -653, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -657, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1185, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1181, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -723, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -546, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -375, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -337, 37,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTMarioAnimWinBeta_joint10[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, 4, -4, -23, 176, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 247, 0, -273, 0, 123, 0,
	ftAnimSetValT(FT_ANIM_ROTY, 37), -274,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 31), 247, 123,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 2, -32, 252, -23,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -327, -35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimWinBeta_joint11[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 443, 9, 551, -55, 65, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), 194, 0, 82, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), 172, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 171, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), 173, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 194, 0, 82, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 174, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 85, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 172, 15, 85, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 369, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 755, 257,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 164, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 344, 167,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 430, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1080, 578, 536, 67, 702, 594,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 381, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1913, 400, 1619, 464,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1880, -30, 1631, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1851, -29, 318, -62, 1642, 10,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimWinBeta_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, -26,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 65), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -267, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), -273, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -274, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -898, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 444,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimWinBeta_joint13[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 625, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 65), 625, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 56), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimWinBeta_joint15[18] = {
	ftAnimSetValAfter(FT_ANIM_ROTY), -804,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 1608, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTY, 65), -804,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 55), 1608, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 1948, 340,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimWinBeta_joint16[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -135, -61, -229, -48, 58, -79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -656, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), -529, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -265, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -206, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 192, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -730, -69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -1103, 0,
	ftAnimBlock(0, 21),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -529, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -557, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1103, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -1106, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 192, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 214, 2,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1108, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -623, 290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 197, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -433, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -540, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -283, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -322, 301,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 72, 61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -326, 130, -289, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -101, 16, -252, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 101, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 123, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -139, -37, -130, 122, 191, 67,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimWinBeta_joint18[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 397, 50,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 65), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 755, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 756, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), 761, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 744, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 381, -279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -190,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimWinBeta_joint20[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1391, 2, 1621, -81, -1764, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), -1854, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 56), 1363, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 1333, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1358, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 43), 1560, 0,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1854, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), -1853, 4,
	ftAnimBlock(0, 25),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1559, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1449, 68,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1367, 8, -1844, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1621, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1724, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1558, 117,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1271, 115,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1514, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1511, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1787, 165, 1512, 0, -1165, 105,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimWinBeta_joint21[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 197, 19, 185, 15, 48, -74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -19, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 43), -721, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), 299, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 301, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), 306, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -20, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), -25, -2,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -721, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -721, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 297, -15, -703, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -403, 208,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -93, -81,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -29, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -20, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -136, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 305, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -153, -59, 22, 42, 460, 155,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimWinBeta_joint23[148] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 435, 37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 65), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 371, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 370, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), 364, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 364, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 293, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000, 0x200E, 0x005C, 0xFFFF, 0xFFA6, 0xFFE8, 0xFF2B, 0xFFF5, 0x2809, 0x001A, 0xFFBA, 0x0000, 0x2803, 0x003C, 0x0031, 0xFFFF, 0x2005, 0x0012, 0xFF3E, 0xFFFC, 0x2005, 0x0001, 0xFF3A, 0xFFFE, 0x2805, 0x0023, 0xFF34, 0x0000, 0x0801, 0x0007, 0x2009, 0x0001, 0xFFBA, 0x0000, 0x2809, 0x001C, 0xFFBD, 0xFFF9, 0x0801, 0x001B, 0x2005, 0x0001, 0xFF35, 0x0008, 0x2805, 0x0009, 0x005E, 0xFFED, 0x2009, 0x0001, 0xFFAE, 0xFFED, 0x2009, 0x0003, 0xFF8E, 0x003B, 0x2009, 0x0001, 0xFFFC, 0x0043, 0x2809, 0x0002, 0x006F, 0x008B, 0x2003, 0x0001, 0x002F, 0x0012, 0x2803, 0x0003, 0x018E, 0x007E, 0x0801, 0x0001, 0x2009, 0x0001, 0x012B, 0x00A0, 0x2009, 0x0001, 0x01B0, 0x0041, 0x200F, 0x0001, 0x01DC, 0x004E, 0x005E, 0x0000, 0x01AF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
