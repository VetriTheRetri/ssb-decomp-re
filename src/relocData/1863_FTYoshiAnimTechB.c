/* AnimJoint data for relocData file 1863 (FTYoshiAnimTechB) */
/* 3120 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimTechB_joint1[36];
extern u16 dFTYoshiAnimTechB_joint2[90];
extern u16 dFTYoshiAnimTechB_joint3[16];
extern u16 dFTYoshiAnimTechB_joint4[28];
extern u16 dFTYoshiAnimTechB_joint7[32];
extern u16 dFTYoshiAnimTechB_joint8[106];
extern u16 dFTYoshiAnimTechB_joint9[48];
extern u16 dFTYoshiAnimTechB_joint11[10];
extern u16 dFTYoshiAnimTechB_joint12[108];
extern u16 dFTYoshiAnimTechB_joint13[48];
extern u16 dFTYoshiAnimTechB_joint14[42];
extern u16 dFTYoshiAnimTechB_joint15[10];
extern u16 dFTYoshiAnimTechB_joint16[24];
extern u16 dFTYoshiAnimTechB_joint18[28];
extern u16 dFTYoshiAnimTechB_joint19[176];
extern u16 dFTYoshiAnimTechB_joint21[112];
extern u16 dFTYoshiAnimTechB_joint23[150];
extern u16 dFTYoshiAnimTechB_joint24[170];
extern u16 dFTYoshiAnimTechB_joint26[272];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTYoshiAnimTechB_joints[] = {
	(u32)dFTYoshiAnimTechB_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimTechB_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimTechB_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimTechB_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimTechB_joint7, /* [4] joint 7 */
	0x00000000, /* [5] NULL */
	0x00000000, /* [6] NULL */
	(u32)dFTYoshiAnimTechB_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimTechB_joint9, /* [8] joint 9 */
	(u32)dFTYoshiAnimTechB_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTYoshiAnimTechB_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimTechB_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimTechB_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimTechB_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimTechB_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimTechB_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTYoshiAnimTechB_joint19, /* [18] joint 19 */
	(u32)dFTYoshiAnimTechB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTYoshiAnimTechB_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTYoshiAnimTechB_joint24, /* [23] joint 24 */
	(u32)dFTYoshiAnimTechB_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	0xFFFF02C0, /* [26] END */
};

/* Joint 1 */
u16 dFTYoshiAnimTechB_joint1[36] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, -704,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -109, -255,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), -228, -847,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), -618, -788,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -1394, -5405,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), -2856, -769,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), -4151, -1664,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 13), -4800, 301,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimTechB_joint2[90] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY), 721, 29, 850, -842,
	ftAnimSetValBlock(FT_ANIM_TRAZ), -356,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 5), 837,
	ftAnimSetValT(FT_ANIM_TRAZ, 40), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 655, -379,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 659, -440,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2652, -372,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 300, -960,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 1342, 664,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -6603, -56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 644, -1396,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 404, -223,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 332, -214,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 556, 3121,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 1622, 398,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 708, -1392,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -6433, 119,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 672, 494,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimTechB_joint3[16] = {
	ftAnimSetVal(FT_ANIM_ROTY), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 30, 20,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 33), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -89, -17,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimTechB_joint4[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -183, -65,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -355, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 75, 379,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1325, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 1341, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 16, -149,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimTechB_joint7[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -3, -19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -66, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 5, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 329, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 390, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 298, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 78, -26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTYoshiAnimTechB_joint8[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1714, 16, -1419, 19, 1162, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -1721, -31, -1374, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1060, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1057, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1206, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1752, 3, -1390, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1220, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1565, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1099, -112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 633, -44,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1200, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -1364, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1525, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1390, -28,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 590, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 1201, 56,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1420, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1710, -10,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1378, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1455, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1718, -8, -1476, -20, 1256, 54,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTYoshiAnimTechB_joint9[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -506, -23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -597, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -519, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -427, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -545, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -525, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -443, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -493, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -752, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimTechB_joint11[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, -188, -632,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimTechB_joint12[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1512, -13, -1778, -17, 1163, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -1481, 31, -1808, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1087, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1102, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1279, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1451, -2, -1785, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1942, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1615, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1156, -129,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 686, -46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1968, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -1912, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1651, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1814, 26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 641, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 1319, 72,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1786, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1684, -65,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1883, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1539, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1753, -69, -1505, 33, 1389, 69,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimTechB_joint13[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -507, -35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -667, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -615, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -565, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -676, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -681, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -659, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -865, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -930, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1022, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimTechB_joint14[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -54, -22, -60, 19, -668, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), 52, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -72, -4, -42, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), -36, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), 29, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 22), 22, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -6, 0, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 0, 15,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimTechB_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimTechB_joint16[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 198, -45,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -325, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -249, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 145, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -190, -78,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimTechB_joint18[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 158, -54,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -377, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -265, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 38, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 63, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -153, -61,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTYoshiAnimTechB_joint19[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1554, -30, -1571, 9, -958, 246,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1557, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1520, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -711, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -661, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -626, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -615, -97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1173, -419,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1577, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1474, 12, -1701, -28, -1660, -156,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1277, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1535, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1634, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1578, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1350, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1394, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1203, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1511, 5, -1364, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1576, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1286, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1287, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1575, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -1617, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1228, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1063, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1297, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1231, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1233, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1485, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1582, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1621, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1505, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1575, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1546, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1704, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1718, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1676, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1614, 7, -1613, 3, -1612, 64,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimTechB_joint21[112] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 313, -306,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1221, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 890, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 835, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 750, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 539, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 839, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 735, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 740, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 771, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 776, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 573, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 320, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 642, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 577, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 525, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 552, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 422, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 452, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 386, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 624, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 486, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, -224,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimTechB_joint23[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1578, 2, -50, 0, 389, 96,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 1527, -43, -65, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 514, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 420, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -116, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1466, -6, -29, -8, 119, 130,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -123, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1523, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 144, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -113, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 211, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -76, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -106, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1485, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1571, 20, -40, -144,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -118, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1526, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1531, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -101, -3, -124, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -60, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -299, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -167, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -52, 51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1535, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1617, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 183, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 158, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -285, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -325, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -317, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, -2, -83, -22, -263, 53,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimTechB_joint24[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1652, 24, 1578, -8, -957, 252,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1560, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1697, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -704, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -661, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -608, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -621, -104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1193, -393,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1581, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1638, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1740, -13, -1605, -150,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1276, 98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1717, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1588, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1566, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1297, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1408, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1302, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1351, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1704, 6, -1280, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1257, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1666, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1560, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1604, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1294, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1049, -58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1641, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1619, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1304, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1198, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1237, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1596, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1598, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1775, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1818, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1803, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, 10, 1608, 4, -1762, 41,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimTechB_joint26[272] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 333, -326,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1197, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 914, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 871, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 871, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 719, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 815, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 707, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 756, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 698, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 785, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 547, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 343, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 649, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 514, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 436, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 539, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 512, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 465, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 440, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 681, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 694, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 583, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -204,
	ftAnimEnd(),
	0x0000, 0x200E, 0xF9C2, 0xFFFD, 0x001A, 0x0001, 0x017B, 0x0070, 0x2803, 0x0008, 0xF9E6, 0x002B, 0x2805, 0x000B, 0x0011, 0x0000, 0x2009, 0x0005, 0x01D1, 0xFFCB, 0x2009, 0x0001, 0x01B7, 0xFF4A, 0x2009, 0x0002, 0xFF73, 0xFFDA, 0x200B, 0x0001, 0xFA1C, 0x000E, 0x0018, 0x0088, 0x2803, 0x0005, 0xF9F0, 0x0000, 0x2009, 0x0001, 0x0083, 0xFFBA, 0x2009, 0x0001, 0xFF8B, 0xFFB2, 0x2809, 0x0002, 0x003F, 0xFFEB, 0x2005, 0x0001, 0x0003, 0xFFF1, 0x2805, 0x000E, 0xFFF7, 0xFFFA, 0x0801, 0x0001, 0x2009, 0x0001, 0xFFBE, 0xFFB6, 0x2809, 0x0002, 0xFFAF, 0xFFDF, 0x2003, 0x0001, 0xF9FA, 0x0001, 0x2803, 0x0013, 0xF9B0, 0xFFFC, 0x0801, 0x0001, 0x2009, 0x0001, 0xFF68, 0xFFDC, 0x2009, 0x0002, 0xFF23, 0xFF9C, 0x2009, 0x0001, 0xFE9C, 0xFFD4, 0x2009, 0x0003, 0xFF64, 0x002E, 0x2009, 0x0001, 0xFF8E, 0x0039, 0x2809, 0x0009, 0x00BB, 0x000F, 0x0801, 0x0002, 0x2005, 0x0001, 0xFFF0, 0xFFF9, 0x2805, 0x000C, 0xFFC1, 0xFFEA, 0x0801, 0x0006, 0x2009, 0x0001, 0x00BD, 0xFFAC, 0x2809, 0x0003, 0xFEF1, 0xFFBF, 0x2003, 0x0001, 0xF9B2, 0x0004, 0x2803, 0x0004, 0xF9BA, 0xFFFF, 0x0801, 0x0002, 0x2009, 0x0001, 0xFED4, 0xFFF9, 0x2009, 0x0001, 0xFEE2, 0x0023, 0x200F, 0x0001, 0xF9B9, 0xFFFF, 0xFFA7, 0xFFE6, 0xFF1C, 0x0039, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
