/* AnimJoint data for relocData file 670 (FTFoxAnimDamageX2) */
/* 2592 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDamageX2_joint1[68];
extern u16 dFTFoxAnimDamageX2_joint2[60];
extern u16 dFTFoxAnimDamageX2_joint4[54];
extern u16 dFTFoxAnimDamageX2_joint5[110];
extern u16 dFTFoxAnimDamageX2_joint6[56];
extern u16 dFTFoxAnimDamageX2_joint7[10];
extern u16 dFTFoxAnimDamageX2_joint8[68];
extern u16 dFTFoxAnimDamageX2_joint10[10];
extern u16 dFTFoxAnimDamageX2_joint11[118];
extern u16 dFTFoxAnimDamageX2_joint12[56];
extern u16 dFTFoxAnimDamageX2_joint13[10];
extern u16 dFTFoxAnimDamageX2_joint15[10];
extern u16 dFTFoxAnimDamageX2_joint16[104];
extern u16 dFTFoxAnimDamageX2_joint18[40];
extern u16 dFTFoxAnimDamageX2_joint20[94];
extern u16 dFTFoxAnimDamageX2_joint21[100];
extern u16 dFTFoxAnimDamageX2_joint23[48];
extern u16 dFTFoxAnimDamageX2_joint24[100];
extern u16 dFTFoxAnimDamageX2_joint25[76];
extern u16 dFTFoxAnimDamageX2_joint26[52];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimDamageX2_joints[] = {
	(u32)dFTFoxAnimDamageX2_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimDamageX2_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimDamageX2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimDamageX2_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimDamageX2_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimDamageX2_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimDamageX2_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimDamageX2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimDamageX2_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimDamageX2_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimDamageX2_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimDamageX2_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimDamageX2_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimDamageX2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimDamageX2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimDamageX2_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimDamageX2_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimDamageX2_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimDamageX2_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimDamageX2_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimDamageX2_joint1[68] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, 0, 912, 2, -20, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 48, 0, 855, -247, -361, -2686,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 48, 0, 851, 45, -692, -1236,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 866, -80, -670, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), 48,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 727, -81, -719, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 11), 48,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 48, 0, 723, 118, -598, 900,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 48, 0, 826, 219, 33, 667,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 48, 912, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimDamageX2_joint2[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -141, -338,
	ftAnimSetValRate(FT_ANIM_ROTZ), -3, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 73, 258, 173, 46, 74, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 376, 184, -245, -144, -127, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 442, 4,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, 53,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 442, -16, -115, -4, 53, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 153, -74, -358, -28, 49, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -141, -338, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimDamageX2_joint4[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 221, -135, 90, -20, -59, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 38, -81, 116, -250, 100, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 59, -8, -411, -47, 76, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -67, 16, -466, 27, 87, -5,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 336, 38, -11, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 309, 81,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimDamageX2_joint5[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1498, -544, -1442, 1118, -1349, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 954, -143, -324, 475, -1210, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1212, 118, -491, -60, -1409, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1191, -126, -445, -389, -1511, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 960, 165, -1270, -598, -1351, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1643, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1523, 296, -1442, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1552, 24, -1475, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 1517, -9, -1918, -95,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1640, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -1419, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1513, -40, -1369, 19, -2009, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1421, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1420, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1765, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1458, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1470, 38, -1347, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, 28, -1442, -22, -1349, -2,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimDamageX2_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 60,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -418, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -952, -479,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -967, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -950, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -938, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -700, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -542, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -640, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -733, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -651, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 92,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimDamageX2_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimDamageX2_joint8[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -72,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -113, 0, 136, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 32, -62, 132, 19, 88, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -239, 191, 175, -7, -98, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 607, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 117, 8, -49, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 192, 9, 190, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 488, -52, 240, 3, 200, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -287, -68, 253, -11, -280, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -72, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -113, 136,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimDamageX2_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimDamageX2_joint11[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1475, 999, 1336, -385, -1271, 564,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -476, 140, 950, -375, -707, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1194, -639, 586, 221, -1353, -674,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1755, -136, 1393, 502, -2055, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1468, 136, 1590, 95, -1231, 428,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1505, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1577, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1198, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1173, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1287, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1497, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1434, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1601, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1618, -66,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1319, -66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1514, 120,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1464, -28, 1554, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1468, 0, 1341, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1362, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1281, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, -7, 1336, -4, -1271, 9,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimDamageX2_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, -38,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -633, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -443, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -234, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -840, -298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -832, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -822, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -860, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -854, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -760, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -745, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -659, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 64,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimDamageX2_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimDamageX2_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimDamageX2_joint16[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -405, 388, -223, 398, -26, -334,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -824, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -17, 158, 174, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -89, -158, -259, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -334, -118, -21, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -325, 9, -22, 0, -845, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -40, -14, -917, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -67, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -45, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -213, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -69, -37, -873, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -250, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -750, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -722, 74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -79, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -237, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -391, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -244, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -234, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -14, -223, 11, -26, 52,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimDamageX2_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, -348,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 606, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 650, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 442, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -88,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimDamageX2_joint20[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 46, 83, 125, 10, -56, 449,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 129, -20, 136, -57, 393, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4, 82, 10, 31, 321, -66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 320, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 294, 144, 198, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 293, 0, 192, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), 219, 11, -29, -24,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 320, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 235, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 238, -12, -53, 8, 178, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -16, 13, 108, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 301, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 117, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -220, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -125, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, 63, 125, 17, -56, 69,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimDamageX2_joint21[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 355, 45, 137, -31, 134, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 401, -238, 106, -175, 79, -351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -120, -38, -213, 53, -567, -367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 323, 208, 212, 211, -655, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 297, -26, 210, -2, -680, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 21, -24, 86, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -891, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -848, 71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -283, 310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -18, -41, 84, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 351, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -37, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 157, 155, 78, 280,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 225, 58, 180, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 283, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 182, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 129, 137, -45, 134, -46,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimDamageX2_joint23[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, 66,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 584, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 611, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 870, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 905, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 670, -292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 273, -332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 141, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 302, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimDamageX2_joint24[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1592, 27, -1505, -150, 1381, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1564, -42, -1656, -180, 1204, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1677, -32, -1867, 109, 1363, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1641, -12, 1314, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1436, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1465, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1782, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1654, -12, 1303, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1114, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -1674, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1629, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1302, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1742, 62, 1075, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1543, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1460, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1337, -51, 1416, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1404, -127, -1566, 18, 1376, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1592, -187, -1505, 60, 1381, 4,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimDamageX2_joint25[76] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 219, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 208, -60, -93, 54, -139, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -121, -195, 329, 86, -104, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -182, -14, 80, -80, -23, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -180, 13, 7, -16, 4, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -67, 8, -57, -6, 147, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -93, -7, -53, 30, -38, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -134, 11, 198, 34, -8, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 219, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTFoxAnimDamageX2_joint26[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, -122, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, 11, 0, 8, -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -5, 11, 0, -1, -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 192, -37, -30, -15, -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -293, -61, -118, -15, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -178, -122, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
