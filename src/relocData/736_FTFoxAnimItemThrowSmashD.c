/* AnimJoint data for relocData file 736 (FTFoxAnimItemThrowSmashD) */
/* 1744 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimItemThrowSmashD_joint1[26];
extern u16 dFTFoxAnimItemThrowSmashD_joint2[20];
extern u16 dFTFoxAnimItemThrowSmashD_joint4[30];
extern u16 dFTFoxAnimItemThrowSmashD_joint5[114];
extern u16 dFTFoxAnimItemThrowSmashD_joint6[56];
extern u16 dFTFoxAnimItemThrowSmashD_joint7[10];
extern u16 dFTFoxAnimItemThrowSmashD_joint8[30];
extern u16 dFTFoxAnimItemThrowSmashD_joint10[10];
extern u16 dFTFoxAnimItemThrowSmashD_joint11[124];
extern u16 dFTFoxAnimItemThrowSmashD_joint12[58];
extern u16 dFTFoxAnimItemThrowSmashD_joint13[70];
extern u16 dFTFoxAnimItemThrowSmashD_joint15[10];
extern u16 dFTFoxAnimItemThrowSmashD_joint16[56];
extern u16 dFTFoxAnimItemThrowSmashD_joint18[24];
extern u16 dFTFoxAnimItemThrowSmashD_joint20[54];
extern u16 dFTFoxAnimItemThrowSmashD_joint21[56];
extern u16 dFTFoxAnimItemThrowSmashD_joint23[24];
extern u16 dFTFoxAnimItemThrowSmashD_joint24[48];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTFoxAnimItemThrowSmashD_joints[] = {
	(u32)dFTFoxAnimItemThrowSmashD_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimItemThrowSmashD_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimItemThrowSmashD_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimItemThrowSmashD_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimItemThrowSmashD_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimItemThrowSmashD_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimItemThrowSmashD_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimItemThrowSmashD_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimItemThrowSmashD_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimItemThrowSmashD_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimItemThrowSmashD_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimItemThrowSmashD_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimItemThrowSmashD_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimItemThrowSmashD_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimItemThrowSmashD_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimItemThrowSmashD_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimItemThrowSmashD_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimItemThrowSmashD_joint24, /* [23] joint 24 */
	0xFFFF01AF, /* [24] END */
};

/* 4-byte alignment padding */
static u32 dFTFoxAnimItemThrowSmashD_pad[1] = { 0 };

/* Joint 1 */
u16 dFTFoxAnimItemThrowSmashD_joint1[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, 912, -20,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 120, -32, 840, -8, 120, 13,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, -35, 900, 36, 0, -70,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 48, 912, -20,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimItemThrowSmashD_joint2[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, -338, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 357, -268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -141, -338, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimItemThrowSmashD_joint4[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 714, 7, 536, 13, 268, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 402, -25, 312, -23, -89, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 309, 156, 81,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimItemThrowSmashD_joint5[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1498, 30, 1774, -132, -1349, 139,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1609, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1615, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1209, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1247, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1724, 83, -905, 246,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1577, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1514, -36, -754, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1582, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -813, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -804, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -741, 59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1566, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1498, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1558, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1618, 66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -679, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1306, -68,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1679, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1760, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1335, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1345, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, 0, 1774, 13, -1349, -4,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimItemThrowSmashD_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -101,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -659, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -461, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -761, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -606, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -518, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -468, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -550, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -748, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -772, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -565, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -534, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimItemThrowSmashD_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimItemThrowSmashD_joint8[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 136, -72,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 268, 24, -446, 11, 0, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 178, -23, 268, 36, 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -113, 136, -72,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimItemThrowSmashD_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimItemThrowSmashD_joint11[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 132, 1134, 271, -135, 336, 695,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 129, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1267, 402, 1032, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 938, -159, 875, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 948, -320, 564, 483, 1015, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 298, -289, 1095, 302, 431, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 370, 69, 1169, 86, 514, 75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1452, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 437, 57, 582, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 710, 83, 953, 88,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1651, 141,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1490, -124,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 827, 184, 1075, 180,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1528, 143, 1709, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1376, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1374, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1641, 95, 1821, 100,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1746, 10, 1944, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1352, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1741, -4, 1336, -16, 1945, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimItemThrowSmashD_joint12[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, 587,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -562, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -280, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 140,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -159, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -79, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -321, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -772, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -660, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 65,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimItemThrowSmashD_joint13[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 467, 262, -138, -63, -181, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 524, -69, -126, 7, -150, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 327, -107, -123, 44, -293, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, -22, -37, -7, -150, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 214, -20, -160, -8, 285, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 142, -22, -107, 11, 178, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 35, -17, -71, 13, 411, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimItemThrowSmashD_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimItemThrowSmashD_joint16[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1202, -35, -1385, 22, 1581, -105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1362, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1250, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 960, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 958, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1574, 14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1357, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1384, -2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1232, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1206, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1202, -3, -1385, -1, 1581, 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimItemThrowSmashD_joint18[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, 84,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 608, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 601, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 356, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimItemThrowSmashD_joint20[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1655, 21, 1482, -45, 1552, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1503, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 1550, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1745, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1725, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1641, 11,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1496, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1484, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1651, 6, 1552, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1655, 3, 1482, -1, 1552, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimItemThrowSmashD_joint21[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1963, 2, -1746, -41, 1743, -103,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 1901, 20, -1861, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1427, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1225, -145,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1236, 44,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1923, 21, -1845, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), 1964, -2, -1746, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1284, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1736, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1963, -1, -1746, 0, 1743, 6,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimItemThrowSmashD_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, 75,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 551, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 552, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 335, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimItemThrowSmashD_joint24[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1624, 19, 1711, 2, -1835, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -1838, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 1698, -21, 1640, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1674, -22, 1655, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), 1626, -2, 1711, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1624, -1, 1711, 0, -1835, 3,
	ftAnimEnd(),
	0x50EE, 0x0000, 0x00DB, 0x0000, 0x0000, 0xFF82, 0xFFA0, 0x0801, 0x0014, 0x0000,
};
