/* AnimJoint data for relocData file 593 (FTMarioAnimItemDrop) */
/* 2304 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimItemDrop_joint1[48];
extern u16 dFTMarioAnimItemDrop_joint2[18];
extern u16 dFTMarioAnimItemDrop_joint4[50];
extern u16 dFTMarioAnimItemDrop_joint5[130];
extern u16 dFTMarioAnimItemDrop_joint6[60];
extern u16 dFTMarioAnimItemDrop_joint7[10];
extern u16 dFTMarioAnimItemDrop_joint8[58];
extern u16 dFTMarioAnimItemDrop_joint10[20];
extern u16 dFTMarioAnimItemDrop_joint11[182];
extern u16 dFTMarioAnimItemDrop_joint12[88];
extern u16 dFTMarioAnimItemDrop_joint13[14];
extern u16 dFTMarioAnimItemDrop_joint15[10];
extern u16 dFTMarioAnimItemDrop_joint16[96];
extern u16 dFTMarioAnimItemDrop_joint18[54];
extern u16 dFTMarioAnimItemDrop_joint20[58];
extern u16 dFTMarioAnimItemDrop_joint21[88];
extern u16 dFTMarioAnimItemDrop_joint23[56];
extern u16 dFTMarioAnimItemDrop_joint24[64];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimItemDrop_joints[] = {
	(u32)dFTMarioAnimItemDrop_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimItemDrop_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimItemDrop_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimItemDrop_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimItemDrop_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimItemDrop_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimItemDrop_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimItemDrop_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimItemDrop_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimItemDrop_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimItemDrop_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimItemDrop_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimItemDrop_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimItemDrop_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimItemDrop_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimItemDrop_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimItemDrop_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimItemDrop_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimItemDrop_joint1[48] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 223, -5, 0, 0, 0, 0, 540, 102, 0, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 223, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, 585, 39, -1, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 585, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 585, -23, -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 0, 0, 540, -1, 0, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimItemDrop_joint2[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, -790, -95,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), -71, 0, -790, 1, -95, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimItemDrop_joint4[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, -86, 258, 17, 110, -60,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 92, -36, 306, 6, -54, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -80, -43, 313, 1, -80, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -80, 313, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -80, 19, 313, -3, -80, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 208, 3, 258, -2, 110, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimItemDrop_joint5[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1741, -20, -1308, -19, -1880, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1664, -61, -1318, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1868, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1767, 112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1346, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1598, -66, -1307, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1288, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1432, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1436, 8, -1356, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1379, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1454, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1275, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1274, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1384, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1477, -11, -1268, -7, -1420, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1295, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1431, -25, -1340, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1380, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1426, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1731, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1294, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1294, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1427, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1857, -34,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1303, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1741, 10, -1308, -4, -1880, -23,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimItemDrop_joint6[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, 29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -152, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -248, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -346, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -169, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -215, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -318, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -242, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -198, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimItemDrop_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimItemDrop_joint8[58] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, 20, -4, 26, 176, 17,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 222, 0, 22, 12, 196, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 203, -4, 97, 18, 72, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 203, 97, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 203, 4, 97, -18, 72, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 222, 0, 22, -7, 196, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 201, 0, -4, 0, 176, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTMarioAnimItemDrop_joint10[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, -7, 139, 4, -209, -6,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), -221, -1, 139, 1, -209, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimItemDrop_joint11[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2052, -224, 1056, 110, 1674, -237,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1700, -57, 1231, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1166, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1361, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1713, 38, 1477, 137, 1066, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1776, 33, 1637, 151, 1046, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1780, 44, 1781, 41, 950, -170,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1909, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1720, -90, 704, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1599, -232, 518, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1795, -56, 1255, -171, 201, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1795, 0, 1255, 0, 201, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1795, 102, 1255, 145, 201, 258,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1812, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2001, 67, 719, 430,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1931, -26, 1062, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1948, 10, 1695, -66, 970, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1953, -11, 1680, -25, 1098, 106,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1849, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1643, -30, 1183, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1219, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1444, -79,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1773, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1682, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1206, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1651, 21, 1186, 86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1986, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1358, -96, 1380, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1132, -97, 1624, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2052, 65, 1056, -75, 1674, 49,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimItemDrop_joint12[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 91,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -720, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -372, 360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -273, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -273, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -273, -303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -881, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -789, 436,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -439, -368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -736, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -815, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimItemDrop_joint13[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 804,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 24), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 24), 625,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimItemDrop_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimItemDrop_joint16[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -135, -22, -230, 12, 45, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -231, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -166, 18, 213, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -143, 11, 262, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -143, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 261, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 258, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -230, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -138, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -143, -9, 262, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -199, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 183, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 157, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 48, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -207, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -230, -1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -135, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, 0, -230, 0, 45, -3,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimItemDrop_joint18[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, -67,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 160, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 98, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -45,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 82, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 355, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 372, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 395, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, 5,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimItemDrop_joint20[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1397, 3, 1661, 0, 1411, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 23), 1397, 0, 1663, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1546, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1593, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1595, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1604, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1596, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1595, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1520, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1498, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1414, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1397, 0, 1661, -2, 1411, -3,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimItemDrop_joint21[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, 13, 187, -12, 35, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 106, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 266, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 156, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 184, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 79, -13, 230, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 136, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 230, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 220, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 264, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 202, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 173, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 71, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 145, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 185, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 61, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 37, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, -1, 187, 1, 35, -1,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimItemDrop_joint23[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, -60,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 203, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 163, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 102, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 23, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 123, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 259, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 432, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimItemDrop_joint24[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -3, -1514, 8, -1821, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 23), 1696, 1, -1512, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1686, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1657, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1606, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1606, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1622, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1669, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1779, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1790, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1818, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1697, 1, -1514, -2, -1821, -2,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
