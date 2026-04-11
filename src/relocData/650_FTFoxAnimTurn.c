/* AnimJoint data for relocData file 650 (FTFoxAnimTurn) */
/* 1440 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimTurn_joint1[28];
extern u16 dFTFoxAnimTurn_joint2[10];
extern u16 dFTFoxAnimTurn_joint4[10];
extern u16 dFTFoxAnimTurn_joint5[62];
extern u16 dFTFoxAnimTurn_joint6[32];
extern u16 dFTFoxAnimTurn_joint7[10];
extern u16 dFTFoxAnimTurn_joint8[20];
extern u16 dFTFoxAnimTurn_joint10[10];
extern u16 dFTFoxAnimTurn_joint11[72];
extern u16 dFTFoxAnimTurn_joint12[28];
extern u16 dFTFoxAnimTurn_joint13[10];
extern u16 dFTFoxAnimTurn_joint15[10];
extern u16 dFTFoxAnimTurn_joint16[54];
extern u16 dFTFoxAnimTurn_joint18[24];
extern u16 dFTFoxAnimTurn_joint20[76];
extern u16 dFTFoxAnimTurn_joint21[68];
extern u16 dFTFoxAnimTurn_joint23[36];
extern u16 dFTFoxAnimTurn_joint24[62];
extern u16 dFTFoxAnimTurn_joint25[46];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimTurn_joints[] = {
	(u32)dFTFoxAnimTurn_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimTurn_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimTurn_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimTurn_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimTurn_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimTurn_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimTurn_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimTurn_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimTurn_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimTurn_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimTurn_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimTurn_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimTurn_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimTurn_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimTurn_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimTurn_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimTurn_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimTurn_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimTurn_joint25, /* [24] joint 25 */
	0xFFFF015E, /* [25] END */
};

/* Joint 1 */
u16 dFTFoxAnimTurn_joint1[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 48, -20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 0, 912,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 12), -1608,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 314, 15, -13, -206,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 64, -363, -227, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), -48, 20,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimTurn_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -141, -338, -3, 0, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimTurn_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 309, 156, 81, 0, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimTurn_joint5[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1498, 0, -1442, -62, -1349, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1717, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1494, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1539, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1586, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1276, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1636, 77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1468, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1508, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1490, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1281, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1320, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, 7, -1442, 25, -1349, -28,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimTurn_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -70,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -653, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -621, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -562, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -527, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -568, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimTurn_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimTurn_joint8[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 136, -72,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -248, -563, 183,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -113, 136, -72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimTurn_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimTurn_joint11[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 132, -3, 271, 12, 336, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 233, -172,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 37, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 196, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 88, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 384, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -18, -154,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 238, 34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 76, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 125, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 343, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 326, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 249, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 263, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, 7, 271, 8, 336, 10,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimTurn_joint12[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -723, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -777, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -668, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -627, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimTurn_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimTurn_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimTurn_joint16[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -405, -6, -223, 11, -26, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -91, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -29, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -378, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -235, 104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -127, -103,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -104, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -204, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -256, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -362, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -43, -223, -18, -26, 2,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimTurn_joint18[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, 15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 407, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 404, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 377, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimTurn_joint20[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1655, 13, 1482, 30, 1552, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1673, -80, 1772, 222, 1527, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1526, -54, 2050, 57, 1619, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1570, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1425, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1886, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1788, -124,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1437, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1595, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1647, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1413, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1515, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1525, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1494, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1655, 8, 1482, -11, 1552, 36,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimTurn_joint21[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 355, 5, 137, -54, 134, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -112, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 22, -14, 171, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 13, 34, 219, 75,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 162, 4, 272, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -228, -104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -241, 189,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 101, -15, 136, -115,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 161, 3, 50, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 59, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 295, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 59, 137, -23, 134, 83,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimTurn_joint23[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, -39,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 229, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 267, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 207, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 322, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 366, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -34,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimTurn_joint24[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1592, -8, -1505, -114, 1381, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1633, -36, -1853, 56, 1359, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1659, -4, -1796, 60, 1353, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1547, 122,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1538, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1442, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1371, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1409, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1405, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1606, -26, -1405, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1592, 13, -1505, -100, 1381, -27,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimTurn_joint25[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 219,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -104,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -96,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), -312,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 557,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 6), 219,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 0, 117,
	ftAnimEnd(),
	0x380E, 0xFF4E, 0xFF86, 0x0000, 0x380F, 0x0008, 0xFEE8, 0x01C2, 0xFEF3, 0x380F, 0x0004, 0xFF4E, 0xFF86, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
