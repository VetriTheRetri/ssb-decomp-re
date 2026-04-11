/* AnimJoint data for relocData file 1059 (FTSamusAnimStarRodDash) */
/* 2336 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimStarRodDash_joint1[8];
extern u16 dFTSamusAnimStarRodDash_joint2[56];
extern u16 dFTSamusAnimStarRodDash_joint3[30];
extern u16 dFTSamusAnimStarRodDash_joint5[38];
extern u16 dFTSamusAnimStarRodDash_joint6[144];
extern u16 dFTSamusAnimStarRodDash_joint7[56];
extern u16 dFTSamusAnimStarRodDash_joint8[94];
extern u16 dFTSamusAnimStarRodDash_joint9[10];
extern u16 dFTSamusAnimStarRodDash_joint12[26];
extern u16 dFTSamusAnimStarRodDash_joint13[66];
extern u16 dFTSamusAnimStarRodDash_joint15[24];
extern u16 dFTSamusAnimStarRodDash_joint16[156];
extern u16 dFTSamusAnimStarRodDash_joint18[56];
extern u16 dFTSamusAnimStarRodDash_joint20[124];
extern u16 dFTSamusAnimStarRodDash_joint21[94];
extern u16 dFTSamusAnimStarRodDash_joint23[138];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTSamusAnimStarRodDash_joints[] = {
	(u32)dFTSamusAnimStarRodDash_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimStarRodDash_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimStarRodDash_joint3, /* [2] joint 3 */
	(u32)dFTSamusAnimStarRodDash_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTSamusAnimStarRodDash_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimStarRodDash_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimStarRodDash_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimStarRodDash_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimStarRodDash_joint12, /* [9] joint 12 */
	0x00000000, /* [10] NULL */
	0x00000000, /* [11] NULL */
	(u32)dFTSamusAnimStarRodDash_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimStarRodDash_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTSamusAnimStarRodDash_joint16, /* [15] joint 16 */
	(u32)dFTSamusAnimStarRodDash_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTSamusAnimStarRodDash_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTSamusAnimStarRodDash_joint21, /* [20] joint 21 */
	(u32)dFTSamusAnimStarRodDash_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF021B, /* [23] END */
};

/* Joint 1 */
u16 dFTSamusAnimStarRodDash_joint1[8] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), 0, 2334,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 46), 4547,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimStarRodDash_joint2[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 1503, 18,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 4), -136, 0, 327, 0, 76, 0, 1041, 2,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), -2, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), -136, 0, 327, 0, 76, 0, 1041, 5, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 21), -2,
	ftAnimSetValT(FT_ANIM_TRAX, 21), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 21), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 12), 1312, 634,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 9), 1600,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTSamusAnimStarRodDash_joint3[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 242, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 46), 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 237, 0, 2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 21), 237, 0, 2, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 21), 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimStarRodDash_joint5[38] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 92, 230, -11, 35, -5, 24,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 46), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 211, 111, 217,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 799, -719, -631,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 799, -719, -631,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 166, -198, -36,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimStarRodDash_joint6[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -128, -111, -307, 139, 570, -236,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -208, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -167, 8, 334, -305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -290, -93, -40, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -185, 139, -354, -463, -120, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 71, 127, -1216, -430, 455, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 68, 0, -1215, 0, 458, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 71, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1215, 0, 455, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 455, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -1168, 2,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 71, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -138, -299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 473, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 974, 234,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -571, -469,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1077, -398,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1368, -220,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1461, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1184, -23, 1211, 195,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1620, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1717, -10,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1436, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1140, 15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1600, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1389, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1132, 7, -1722, -4, 1377, -11,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimStarRodDash_joint7[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1000, 306,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -693, 497,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -487, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -567, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -681, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -721, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -739, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimStarRodDash_joint8[94] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -30, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 115, 111, 260, 238, -85, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 75, 476, 191, -362, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 266, -33, 644, 466, -228, 662,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 124, -1, 1409, 0, 961, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 124, 2, 1409, 0, 961, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 487, 314, 1103, -81, 1137, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1382, -259, 1082, -239, 1887, -350,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -31, -382, 624, -202, 436, -387,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -148, -8, 272, -114, 337, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -82, 65, -62, -20, 123, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 701, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTSamusAnimStarRodDash_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1335, -671, -2814, 98, 60, -42,
	ftAnimBlock(0, 46),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimStarRodDash_joint12[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 479, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 302, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 302, -1, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTSamusAnimStarRodDash_joint13[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 145, -1, 315, 5, -623, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 135, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 32), 118, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -593, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -564, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -175, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 129, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 52, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 78, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -124, -4,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -185, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -212, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 6, -128, -3, -215, -2,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimStarRodDash_joint15[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1113, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -1170, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1179, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -603, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimStarRodDash_joint16[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1576, -208, 1689, 161, 672, 271,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1584, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1919, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1835, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1677, 138,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1551, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1572, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 1688, 34,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1920, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1907, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1550, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1593, 8,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1725, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1384, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1565, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1543, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1885, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1552, -116,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1232, -195,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 723, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1443, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1486, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1618, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1498, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 735, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1075, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1508, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1613, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1491, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1496, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1103, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1145, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1505, -9, 1620, 6, 1146, 1,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimStarRodDash_joint18[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 905, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 786, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 649, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 700, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 709, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 543, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 497, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1219, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1137, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 616, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 598, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 582, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 580, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimStarRodDash_joint20[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1579, 139, -1610, -251, -1586, -331,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1924, 68, -2135, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1718, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1578, -85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1436, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1724, 232, -1977, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1460, 141, -1786, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1441, 16, -1772, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -1768, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -1464, -10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1432, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 1663, 55,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1786, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2270, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1481, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1546, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1726, 74, -2254, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1641, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1812, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1735, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1530, -6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1630, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1665, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1524, -6, -1546, 0, -1668, -3,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimStarRodDash_joint21[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, 230, 53, 152, 7, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 155, -306, 403, 79, -250, -492,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -140, 365, -21, -965, -307,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 370, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -125, 143, -864, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -118, 5, -852, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -564, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 80, 31,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 371, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 242, -15,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -510, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -93, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 111, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 206, -22,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 227, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 190, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 181, -24, 177, -13, -98, -5,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimStarRodDash_joint23[138] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 640, 58,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 699, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1130, 320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1340, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1078, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1088, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1092, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 1072, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1047, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 554, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 554, 0,
	ftAnimEnd(),
	0x0000, 0x200E, 0x001C, 0xFEDF, 0x0006, 0x001E, 0x0135, 0xFF70, 0x2809, 0x0004, 0xFEFF, 0xFFE2, 0x2805, 0x001C, 0x009A, 0x000B, 0x2003, 0x0002, 0xFED8, 0x0090, 0x2003, 0x0001, 0x001C, 0x00B0, 0x2803, 0x0002, 0x003A, 0x0001, 0x0801, 0x0001, 0x2009, 0x0001, 0xFEF2, 0xFFF4, 0x2809, 0x0019, 0xFDCB, 0xFFDE, 0x2003, 0x0001, 0x003B, 0x0001, 0x2803, 0x001C, 0x00B9, 0x0007, 0x0801, 0x0016, 0x2005, 0x0001, 0x00A5, 0x000B, 0x2805, 0x0010, 0x011D, 0x0000, 0x0801, 0x0001, 0x2009, 0x0001, 0xFDAB, 0xFFEE, 0x2809, 0x000D, 0xFEF2, 0x000C, 0x0801, 0x0003, 0x2003, 0x0001, 0x00BF, 0x0004, 0x2803, 0x000A, 0x00BB, 0x0000, 0x0801, 0x0009, 0x2009, 0x0001, 0xFEFB, 0x0006, 0x200F, 0x0001, 0x00B9, 0xFFFF, 0x011D, 0x0000, 0xFEFF, 0x0003, 0x0000,
};
