/* AnimJoint data for relocData file 738 (FTFoxAnimItemDrop) */
/* 1824 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimItemDrop_joint1[16];
extern u16 dFTFoxAnimItemDrop_joint2[20];
extern u16 dFTFoxAnimItemDrop_joint4[20];
extern u16 dFTFoxAnimItemDrop_joint5[64];
extern u16 dFTFoxAnimItemDrop_joint6[24];
extern u16 dFTFoxAnimItemDrop_joint7[10];
extern u16 dFTFoxAnimItemDrop_joint8[20];
extern u16 dFTFoxAnimItemDrop_joint10[10];
extern u16 dFTFoxAnimItemDrop_joint11[158];
extern u16 dFTFoxAnimItemDrop_joint12[68];
extern u16 dFTFoxAnimItemDrop_joint13[94];
extern u16 dFTFoxAnimItemDrop_joint15[10];
extern u16 dFTFoxAnimItemDrop_joint16[66];
extern u16 dFTFoxAnimItemDrop_joint18[46];
extern u16 dFTFoxAnimItemDrop_joint20[76];
extern u16 dFTFoxAnimItemDrop_joint21[52];
extern u16 dFTFoxAnimItemDrop_joint23[24];
extern u16 dFTFoxAnimItemDrop_joint24[34];
extern u16 dFTFoxAnimItemDrop_joint25[20];
extern u16 dFTFoxAnimItemDrop_joint26[28];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimItemDrop_joints[] = {
	(AObjEvent32 *)dFTFoxAnimItemDrop_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimItemDrop_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimItemDrop_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimItemDrop_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimItemDrop_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimItemDrop_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimItemDrop_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimItemDrop_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimItemDrop_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimItemDrop_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimItemDrop_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimItemDrop_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimItemDrop_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimItemDrop_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimItemDrop_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimItemDrop_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimItemDrop_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimItemDrop_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimItemDrop_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimItemDrop_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimItemDrop_joint1[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, 912, -20,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 960, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 48, 912, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimItemDrop_joint2[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, -338, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -44, -223, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -141, -338, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimItemDrop_joint4[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -268, -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 309, 156, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimItemDrop_joint5[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1498, -1, 1774, 1, -1349, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1313, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1789, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1046, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -991, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1267, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1303, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1497, 1,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1780, -7, -1292, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1773, 1, -1348, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1498, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, 0, 1774, 0, -1349, -1,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimItemDrop_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -614, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -644, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -558, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimItemDrop_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimItemDrop_joint8[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 136, -72,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 89, 268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -113, 136, -72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimItemDrop_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimItemDrop_joint11[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 132, -196, 271, -269, 336, -947,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -120, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -63, -57, -610, -660,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 18, 129, -983, -264,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 264, -66, -1155, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -88, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -32, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 140, -452, 244, 221, -1235, -240,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 606, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -640, -531, -1637, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -922, -152, -1691, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -944, -2, -1673, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -927, -307, -1659, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1560, -110, 811, 145, -2263, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 970, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1149, 105, -1758, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1725, -283, -2117, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1914, -97, -2259, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1638, 321, -1918, 362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 967, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1019, 116,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1277, 228, -1511, 290,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1359, -85, -1207, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1170, 139,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1340, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1440, -58, -1247, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, -35, 1336, -4, -1271, -24,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimItemDrop_joint12[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, 587,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -267, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -485, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -434, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -707, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -768, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -766, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -869, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -760, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -646, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 51,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimItemDrop_joint13[94] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 68, 5, -69, -42, 37, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 20, 99, -169, -27, 100, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 464, 330, -178, 31, 156, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1340, 124, -44, 27, -196, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1211, -54, -15, 6, -185, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1011, -94, -5, -44, -166, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 831, -113, -192, -79, -178, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 557, -166, -324, -7, -82, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 164, -139, -221, 72, 87, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1, -41, -34, 55, 19, -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimItemDrop_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimItemDrop_joint16[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1202, -5, -1385, 0, 1581, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 997, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1547, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1489, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1488, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1419, 15,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1015, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1201, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1563, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1580, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1406, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1385, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1202, 1, -1385, 0, 1581, 1,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimItemDrop_joint18[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 190, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 190, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 233, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 351, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimItemDrop_joint20[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1655, 0, 1482, -9, 1552, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1812, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1219, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1698, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1833, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1857, -24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1832, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1661, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1233, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1480, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1833, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1554, -4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1658, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1655, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1655, 0, 1482, 2, 1552, -2,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimItemDrop_joint21[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1963, 3, -1746, 3, 1743, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1695, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 1701, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 2030, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2020, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1964, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1704, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1745, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1708, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1742, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1963, 0, -1746, 0, 1743, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimItemDrop_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 256, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 267, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 331, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimItemDrop_joint24[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1624, -4, 1711, -1, -1835, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 23), 1623, 2, 1710, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -1817, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1822, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1834, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1624, 1, 1711, 0, -1835, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimItemDrop_joint25[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 219, 0, 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -360, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 378, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimItemDrop_joint26[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -122, 0, 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 239, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -294, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -373, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 327, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -178,
	ftAnimEnd(),
};
