/* AnimJoint data for relocData file 765 (FTFoxAnimUSmash) */
/* 3632 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimUSmash_joint1[52];
extern u16 dFTFoxAnimUSmash_joint2[104];
extern u16 dFTFoxAnimUSmash_joint4[96];
extern u16 dFTFoxAnimUSmash_joint5[172];
extern u16 dFTFoxAnimUSmash_joint7[72];
extern u16 dFTFoxAnimUSmash_joint10[124];
extern u16 dFTFoxAnimUSmash_joint11[182];
extern u16 dFTFoxAnimUSmash_joint12[64];
extern u16 dFTFoxAnimUSmash_joint13[96];
extern u16 dFTFoxAnimUSmash_joint15[10];
extern u16 dFTFoxAnimUSmash_joint16[136];
extern u16 dFTFoxAnimUSmash_joint18[72];
extern u16 dFTFoxAnimUSmash_joint20[172];
extern u16 dFTFoxAnimUSmash_joint21[142];
extern u16 dFTFoxAnimUSmash_joint23[62];
extern u16 dFTFoxAnimUSmash_joint24[148];
extern u16 dFTFoxAnimUSmash_joint25[32];
extern u16 dFTFoxAnimUSmash_joint26[28];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimUSmash_joints[] = {
	(AObjEvent32 *)dFTFoxAnimUSmash_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimUSmash_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimUSmash_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimUSmash_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimUSmash_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTFoxAnimUSmash_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimUSmash_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimUSmash_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimUSmash_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimUSmash_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimUSmash_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimUSmash_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimUSmash_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimUSmash_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimUSmash_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimUSmash_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimUSmash_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimUSmash_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimUSmash_joint1[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY), 0, 55, 912, -1113,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 48, -20,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 835, 706,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -54, -100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -2480, -129,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 11), 1616, 1,
	ftAnimSetValRateT(FT_ANIM_TRAY, 14), 1268, -281,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -2925, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), -3217, -24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1028, -174,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 30), 912, 30,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimUSmash_joint2[104] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), -141, 11, -338, 30, -3, 0, 0, 598, 0, 193,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 199, 374,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 13), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 22, -502,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), -309, 16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 174, -220,
	ftAnimSetValRateT(FT_ANIM_TRAY, 18), -348, -25,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 62, -18,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 13), 33, -18,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 33), 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 32), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 32), 1, 0,
	ftAnimBlock(0, 11),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 37, 27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), -192, 161,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 31), 0, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_TRAY, 27), 0, 1,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -141, -11, -338, -27, -3, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimUSmash_joint4[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 56, 156, -15, 81, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 21, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 48, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 451, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 355, -268,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -99, -46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 11, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -153, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 2, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 34), 0, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 96, 15,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 1, 0,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 269, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 256, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 309, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 24, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 24, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 156, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 81, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimUSmash_joint5[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1718, -37, -1442, 7, 1867, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1535, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -1729, 50, 1151, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1687, 33, 987, -148,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 477, -99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1438, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1554, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1320, 50,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 360, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 731, 88,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1428, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1774, -68,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 829, 115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1555, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1852, -91, -1275, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2232, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1548, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1588, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1367, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2206, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1845, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1540, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1266, 17,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1356, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1241, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1829, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1630, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1252, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1432, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1253, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1787, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1643, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1721, 2,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1830, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1718, 2, -1442, -10, 1867, 37,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimUSmash_joint7[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -130,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -677, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -197, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -357, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -474, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -932, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -880, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -687, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -687, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -504, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -543, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -574, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimUSmash_joint10[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, -10, 136, -19, -72, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 52, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -251, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -56, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -30, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 5, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -372, -7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -24, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 8, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -359, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -25, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 3, 11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 23, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -15, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 164, 19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 10, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -20, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 136, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 3, -23,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -15, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -113, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 136, 27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -72, -3,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimUSmash_joint11[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1741, -9, 1336, 40, 1945, -110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1604, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 1100, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1476, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1418, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 703, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 604, -84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 131, -19,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1571, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1212, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 126, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1261, 310, 973, -98, 218, 351,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1014, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1833, 480, 828, 520,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2223, 223, 1260, 270,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2268, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1149, 119, 1370, 81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1273, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1075, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2228, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1904, 19,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1274, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1418, -18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1925, 17, 1125, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1755, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1253, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1397, -24, 1253, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1213, 14, 1834, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1729, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1771, -20,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1231, 21, 1852, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1318, 18, 1921, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1751, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1736, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1741, 4, 1336, 17, 1945, 24,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimUSmash_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, -20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -647, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -768, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -562, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -556, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -770, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -897, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -349, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -302, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -645, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -663, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -745, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -821, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -673, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 79,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimUSmash_joint13[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 1, 0, -3, 0, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -40, 3, 347, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 74, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 506, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 558, -39,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 60, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -472, -17,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 167, -23,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -65, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -252, 14,
	ftAnimBlock(0, 11),
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -8, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -65, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 211, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 365, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -52, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 0, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 0, -64,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 0, 20,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimUSmash_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimUSmash_joint16[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -405, 95, -223, -59, -26, -146,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -216, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -227, 115, -135, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -64, 125, 26, 185,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 499, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 9, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -196, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -9, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 510, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 510, -24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 5, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 36), -6, -8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -9, 0, 475, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 32), 12, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 181, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 125, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -510, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -711, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -702, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -518, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -838, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -832, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), -97, 71,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -17, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -236, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 6, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -363, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -42, -222, 13, -26, 70,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimUSmash_joint18[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, 230,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 654, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 430, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 693, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 752, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 870, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 887, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1011, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1102, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 581, -466,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 460, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 470, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 476, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 463, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 391, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 353, -37,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimUSmash_joint20[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 46, 19, 125, -14, -56, -132,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -258, 136,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -3, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 133, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 42, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 46, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -108, 155,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 134, 44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 32, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 202, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 484, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 405, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 261, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5, -1, 143, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 27, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 181, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 127, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 147, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 9, 15, 210, -79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 19, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -11, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -30, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 316, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 115, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 98, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -79, 0,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 9, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 95, 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 21, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 56, -7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -78, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -67, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 115, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 124, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, -9, 125, 1, -55, 11,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimUSmash_joint21[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 355, -89, 137, 10, 134, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 52, -29, 25, -96, -219, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 79, -63, -76, -70, -395, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -114, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -20, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -211, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -276, -86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -372, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -53, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -25, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -340, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -503, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -14, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -15, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -18, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 163, 42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -504, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -315, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -10, 28, -342, -150,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 168, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -588, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), 102, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 205, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 370, -15,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 157, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 129, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, -15, 137, 8, 134, 32,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimUSmash_joint23[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 331, 184,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 714, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 883, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 689, -438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -341,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 120, 395,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 797, 335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 790, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 779, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), 354, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 331, -22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimUSmash_joint24[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 44, -43, -102, -54, -226, -142,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -123, -105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 63, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -491, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -519, 152,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 286, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -254, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -108, 89, 191, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -15, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -75, 14, 358, 118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -88, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 588, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 510, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 554, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -12, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 49), -89, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 588, -101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 110, -90,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -99, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -41, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 169, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 235, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 276, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 66, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -48, -2, -27, -234,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 26, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -402, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), -237, 11,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 30, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 16, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, 0, -102, -12, -226, 10,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimUSmash_joint25[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 219, 0, 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 399, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -97, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 21), -117, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -876, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -676, 32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 19), 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimUSmash_joint26[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -122, 0, 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 210, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 30), 41, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -439, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 420, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), -178,
	ftAnimEnd(),
};
