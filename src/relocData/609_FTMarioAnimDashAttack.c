/* AnimJoint data for relocData file 609 (FTMarioAnimDashAttack) */
/* 2816 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimDashAttack_joint1[10];
extern u16 dFTMarioAnimDashAttack_joint2[56];
extern u16 dFTMarioAnimDashAttack_joint3[28];
extern u16 dFTMarioAnimDashAttack_joint5[106];
extern u16 dFTMarioAnimDashAttack_joint6[156];
extern u16 dFTMarioAnimDashAttack_joint7[72];
extern u16 dFTMarioAnimDashAttack_joint8[12];
extern u16 dFTMarioAnimDashAttack_joint9[68];
extern u16 dFTMarioAnimDashAttack_joint11[28];
extern u16 dFTMarioAnimDashAttack_joint12[162];
extern u16 dFTMarioAnimDashAttack_joint13[80];
extern u16 dFTMarioAnimDashAttack_joint14[10];
extern u16 dFTMarioAnimDashAttack_joint16[10];
extern u16 dFTMarioAnimDashAttack_joint17[116];
extern u16 dFTMarioAnimDashAttack_joint19[64];
extern u16 dFTMarioAnimDashAttack_joint21[90];
extern u16 dFTMarioAnimDashAttack_joint22[124];
extern u16 dFTMarioAnimDashAttack_joint24[64];
extern u16 dFTMarioAnimDashAttack_joint25[102];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimDashAttack_joints[] = {
	(u32)dFTMarioAnimDashAttack_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimDashAttack_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimDashAttack_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimDashAttack_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimDashAttack_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimDashAttack_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimDashAttack_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimDashAttack_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimDashAttack_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimDashAttack_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimDashAttack_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimDashAttack_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimDashAttack_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimDashAttack_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimDashAttack_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimDashAttack_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimDashAttack_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimDashAttack_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTMarioAnimDashAttack_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTMarioAnimDashAttack_joint1[10] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), 0, 2116,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 38), 3600,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 2), 3600,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimDashAttack_joint2[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 755, -86, -67, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -650, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY, 10), 142, 2, 367, -92,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -59, 10,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -60, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAZ, 5), -187, 11, -67, -2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 0, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 142, 2, -187, 6, 367, -18, -67, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 223, 0, 540, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTMarioAnimDashAttack_joint3[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -124, 0, -113, 0, 41, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 40), -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 37, 0, -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 37, 0, -7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -790, -95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimDashAttack_joint5[106] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 407, 1, 234, 10, 78, -25,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 330, -17, -581, -21,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 96, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -176, -5, -136, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 312, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -107, -9, 58, 40, 11, 7, -136, -95,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -33,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 12), -351,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), -176, 7, -136, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 58, 11, -136,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 58, -19, 11, -3, -136, 46,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -107, 67,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 644, 47, 38, 64, -8, 36,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 208, 258, 110,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimDashAttack_joint6[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -342, -215, -303, -6, 288, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -557, -492, -309, -179, 450, 391,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1326, -733, -661, -51, 1070, 677,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2024, -318, -413, 77, 1805, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1963, 399, -506, -41, 1621, -555,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -350, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1226, 338, 693, -511,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1286, -167, 597, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1560, -145, -370, -4, 845, 107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -365, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1577, -10, 812, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -1693, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 793, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 793, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 793, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1682, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1619, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1586, 270, -381, 7, 792, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1078, 394, -350, -103, 600, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -797, 55, -588, -341, 608, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -967, -141, -1033, -269, 843, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1079, -190, -1126, -72, 991, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1347, -189, -1178, -84, 1277, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1458, -111, -1296, -117, 1335, 58,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimDashAttack_joint7[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -247, -426,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -673, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -513, 336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -248, -438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -876, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, 433,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -463, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -524, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -242, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -194, 48,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimDashAttack_joint8[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -804,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 40), -625, 19,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTMarioAnimDashAttack_joint9[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 188, -1, -68, 27, -36, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -32, -36, 277, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 377, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 293, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 39, 66, 473, -64, 270, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 461, 36, -185, -46, 120, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 631, 9, -271, -3, 71, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 627, 4, -242, 15, 69, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 694, -31, -66, 17, -36, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 201, -4, 176,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimDashAttack_joint11[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -190, 0, -42, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 97,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 40), -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 150, 5, 28, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 150, 0, 28, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 139, -209,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTMarioAnimDashAttack_joint12[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1389, 142, 1005, 14, 1048, 201,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1441, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1613, -71, 1550, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1518, -18, 1360, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1888, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1408, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1401, -63, 1423, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 999, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1604, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1523, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1237, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1836, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1605, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 971, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 955, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1608, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1652, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1231, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 1292, 6,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1641, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1664, 87,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 967, 21, 1289, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1181, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1837, 111, 1470, 116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1895, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1523, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1395, -163,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1745, -126, 1363, 132,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1854, 161, 1244, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1216, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1436, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1555, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2032, 177, 1070, -173, 1660, 104,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimDashAttack_joint13[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -489, -88,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -547, 330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -360, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -324, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -153, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -221, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -306, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -525, -404,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -809, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -818, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTMarioAnimDashAttack_joint14[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 804,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 40), 625,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimDashAttack_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimDashAttack_joint17[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1731, -129, 1718, -8, 1221, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1536, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1616, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1404, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1717, 221,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1152, -366,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1592, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1610, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1609, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 1569, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 747, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 486, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 486, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 487, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1610, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 1608, 4,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1569, 13, 487, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 959, 282,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1809, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1618, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1686, -55,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1242, 259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1607, -79, 1478, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1527, -79, 1820, 11, 1635, 156,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimDashAttack_joint19[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 112, 96,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 208, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 309, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 752, 340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1052, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 990, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 991, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 990, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 990, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1063, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 874, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 624, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 419, -204,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTMarioAnimDashAttack_joint21[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1808, 25, -1309, -42, -1361, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1640, 48, -1462, 28, -1782, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1614, -33, -1433, 14, -1930, -66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1708, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1454, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1782, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1722, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1676, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1708, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), -1758, -7,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1677, 0, -1454, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -1548, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -1659, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1678, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1881, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1844, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1822, 21, -1558, -10, -1764, -5,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimDashAttack_joint22[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -43, -24, 174, -13, 752, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 76, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -77, 30, 214, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -59, -27, 24, -306,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -123, 30, -773, -183,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 119, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 113, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -70, 41, -765, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -22, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -423, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -421, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -424, 1,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 113, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 114, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -22, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -32, 0,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -423, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -462, 129,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -20, 22, 135, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 127, 48, 193, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -287, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -98, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 163, 36, 174, -18, 20, 118,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimDashAttack_joint24[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 284, 125,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 410, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 690, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1171, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1293, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 489, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 88, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 84, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 81, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 91, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 88, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 563, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 678, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 556, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 448, -108,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTMarioAnimDashAttack_joint25[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 54, 0, 126, 3, -150, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 18, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 155, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -217, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -265, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 242, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -62, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -335, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -88, 207,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 93, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 164, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 166, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 242, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 242, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 93, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 88, 0,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 242, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -173, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 151, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -39, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 91, 2, -58, -19, -209, -36,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
