/* AnimJoint data for relocData file 1200 (FTLinkAnimCliffAttackSlow2) */
/* 3088 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimCliffAttackSlow2_joint1[42];
extern u16 dFTLinkAnimCliffAttackSlow2_joint2[58];
extern u16 dFTLinkAnimCliffAttackSlow2_joint3[38];
extern u16 dFTLinkAnimCliffAttackSlow2_joint5[54];
extern u16 dFTLinkAnimCliffAttackSlow2_joint6[212];
extern u16 dFTLinkAnimCliffAttackSlow2_joint7[88];
extern u16 dFTLinkAnimCliffAttackSlow2_joint10[78];
extern u16 dFTLinkAnimCliffAttackSlow2_joint11[80];
extern u16 dFTLinkAnimCliffAttackSlow2_joint12[48];
extern u16 dFTLinkAnimCliffAttackSlow2_joint13[22];
extern u16 dFTLinkAnimCliffAttackSlow2_joint14[22];
extern u16 dFTLinkAnimCliffAttackSlow2_joint17[22];
extern u16 dFTLinkAnimCliffAttackSlow2_joint18[46];
extern u16 dFTLinkAnimCliffAttackSlow2_joint19[54];
extern u16 dFTLinkAnimCliffAttackSlow2_joint21[30];
extern u16 dFTLinkAnimCliffAttackSlow2_joint22[164];
extern u16 dFTLinkAnimCliffAttackSlow2_joint24[56];
extern u16 dFTLinkAnimCliffAttackSlow2_joint26[74];
extern u16 dFTLinkAnimCliffAttackSlow2_joint27[138];
extern u16 dFTLinkAnimCliffAttackSlow2_joint29[48];
extern u16 dFTLinkAnimCliffAttackSlow2_joint30[110];

/* Joint pointer table (30 entries, 120 bytes) */
AObjEvent32 * dFTLinkAnimCliffAttackSlow2_joints[] = {
	(AObjEvent32 *)dFTLinkAnimCliffAttackSlow2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackSlow2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackSlow2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackSlow2_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffAttackSlow2_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackSlow2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackSlow2_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffAttackSlow2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackSlow2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackSlow2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackSlow2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackSlow2_joint17, /* [14] joint 17 */
	NULL, /* [15] NULL */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffAttackSlow2_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackSlow2_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackSlow2_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffAttackSlow2_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackSlow2_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffAttackSlow2_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffAttackSlow2_joint27, /* [26] joint 27 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackSlow2_joint29, /* [27] joint 29 */
	NULL, /* [28] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffAttackSlow2_joint30, /* [29] joint 30 */
};

/* Joint 1 */
u16 dFTLinkAnimCliffAttackSlow2_joint1[42] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), 0, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 27), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 17), 876, 416,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 876,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimCliffAttackSlow2_joint2[58] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -314, 157, 81, -282, -214, 74,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 125, 370, 320, -29, 240,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 481, 227, 85, 183,
	ftAnimSetValRateT(FT_ANIM_TRAX, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 569, 351, 131, 324,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 701, 155, 288, -61,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 0, 901, 85, 0, -164,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 901, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTLinkAnimCliffAttackSlow2_joint3[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 37, 6, -32, 2, -336, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 117, -5, -9, 16, -304, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -50, -9, 210, 11, -69, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -107, -2, 276, 2, 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -107, 276, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimCliffAttackSlow2_joint5[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 679, -6, 209, 23, 307, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 284, -17, 605, -44, -328, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 445, 210, -368, -242, -236, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1338, 19, -607, 1, -1111, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 731, -61, -347, 70, -425, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 420, -39, 456, 42, 323, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 259, 166, 56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTLinkAnimCliffAttackSlow2_joint6[212] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -167, -2, -159, -10, -143, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -615, -260, 367, 320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -436, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -535, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -513, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -889, -207, 709, 274,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1360, 188,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1482, -243,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -557, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -578, -348, 1564, -333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1774, 53, -1254, -404, 693, -470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1375, 267, -1386, -133, 624, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 728, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1240, 58, -1520, -126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1508, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1358, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1404, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1617, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1481, 26, 724, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1345, 109, 651, -36,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1635, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1401, 764, -1177, 90, 602, -321,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1162, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -105, 716, 7, -331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 31, 109, -59, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 113, 308, -1129, -42, -147, -402,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 647, 462, -1248, -66, -863, -411,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1037, 242, -1263, -28, -970, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1208, 72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1262, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -983, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1299, -159,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1278, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1882, 35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1228, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1265, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1466, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1687, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1888, 5, -1281, -16, -1694, -7,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimCliffAttackSlow2_joint7[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1004, 23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -755, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -602, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -229, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -345, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -168, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -219, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -328, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -312, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -558, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -573, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -448, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -443, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -680, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -226, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -329, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -474, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -676, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -598, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -529, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimCliffAttackSlow2_joint10[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 590, -40, -109, -10, -316, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -243, -130, -94, 3, 327, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -713, 34, -72, 116, 23, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -3, -235, 718, 232, 640, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1421, -133, 624, -229, -725, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -270, 642, 260, -314, 360, 350,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -137, 14, -4, -17, -24, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -75, 9, 27, 0, 193, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 4, 6, 7, -1, 76, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 4, 7, 76,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTLinkAnimCliffAttackSlow2_joint11[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1404, 36, 1632, -26, 582, 86,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 1969, 7, 1364, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1277, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1265, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 2067, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1977, 8, 1341, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 2167, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 1483, 2,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2080, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1693, -76,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2116, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2030, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1623, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1575, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2024, -5, 1484, 1, 1557, -17,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimCliffAttackSlow2_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -528, -114,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -821, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -706, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -276, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -291, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -630, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -627, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -701, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -737, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -606, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimCliffAttackSlow2_joint13[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -261, 6, 49, -6, 311, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, 6, -209, -6, 0, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -209, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTLinkAnimCliffAttackSlow2_joint14[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 3, -804, 0, 804, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 937, 3, -804, 0, 670, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 937, -804, 670,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimCliffAttackSlow2_joint17[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1780, 3, -360, -12, -1330, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 1697, -2, -536, -4, -339, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1697, -536, -339,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimCliffAttackSlow2_joint18[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -78, 1, -15, -21, 68, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -48, -8, -438, 46, 59, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -212, -5, 676, 63, -200, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -125, 14, 506, -56, -158, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 8, -163, -44, 0, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -163, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTLinkAnimCliffAttackSlow2_joint19[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -122, 4, -137, 20, 95, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -51, 4, 188, 27, 4, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -77, 3, 140, -28, 254, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -24, -3, -68, -12, 49, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -131, 1, -44, -22, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 8, -404, -10, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -199, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimCliffAttackSlow2_joint21[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -179, -3, -260, 1, 55, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -260, 5, -233, 8, 114, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 0, 9, 0, 8, 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTLinkAnimCliffAttackSlow2_joint22[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1404, -13, -1430, 49, 1352, -93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1101, 343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1417, -45, 1258, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1496, -426, 1016, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2270, -360, -693, 245, 1477, 175,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -551, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2216, 2, 1367, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2021, 251,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2631, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -505, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 63, 113,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2236, 159,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2362, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2637, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2822, -146,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 133, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2988, -71, 37, -19, 2341, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2609, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2955, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 94, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -108, -37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2640, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 3252, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2975, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -3408, -50,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -145, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -244, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3459, -25, 3325, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -3459, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 3326, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3325, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3459, 0, -244, 0, 3325, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimCliffAttackSlow2_joint24[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 469, 150,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 961, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1019, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1095, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 952, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 762, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 739, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 349, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 249, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 249, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimCliffAttackSlow2_joint26[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 472, 0, 38, -5, 13, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), -42, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 32), -162, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 613, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 552, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 62, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 184, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 396, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 371, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 393, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 329, -32, -34, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 329, 0, -34, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -162, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -161, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 0, -161, 0, -34, 0,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimCliffAttackSlow2_joint27[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -460, 39, 67, -1, -830, -70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1153, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 212, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 268, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 318, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 286, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1108, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -521, 199,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 220, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 51, 68,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 302, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 258, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 165, 97, -255, 226,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -130, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 84, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 280, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 269, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -175, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -139, 22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 96, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 270, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -125, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -125, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 270, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 270, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 269, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 269, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 0, 269, 0, -125, 0,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimCliffAttackSlow2_joint29[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 971, 18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1172, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1159, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 932, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 781, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 979, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1011, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 489, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 424, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 30 */
u16 dFTLinkAnimCliffAttackSlow2_joint30[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -644, -25, -102, 8, 354, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -216, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -12, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -770, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -605, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -400, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -363, 32, -285, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -416, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -264, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -4, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 80, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 70, -10, -387, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -69, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -74, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -311, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -942, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -935, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -427, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -427, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -427, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -69, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -69, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -427, 0, -74, 0, -69, 0,
	ftAnimEnd(),
};
