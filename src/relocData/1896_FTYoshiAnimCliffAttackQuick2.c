/* AnimJoint data for relocData file 1896 (FTYoshiAnimCliffAttackQuick2) */
/* 2816 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimCliffAttackQuick2_joint1[28];
extern u16 dFTYoshiAnimCliffAttackQuick2_joint2[56];
extern u16 dFTYoshiAnimCliffAttackQuick2_joint3[68];
extern u16 dFTYoshiAnimCliffAttackQuick2_joint4[52];
extern u16 dFTYoshiAnimCliffAttackQuick2_joint5[50];
extern u16 dFTYoshiAnimCliffAttackQuick2_joint7[20];
extern u16 dFTYoshiAnimCliffAttackQuick2_joint8[200];
extern u16 dFTYoshiAnimCliffAttackQuick2_joint9[80];
extern u16 dFTYoshiAnimCliffAttackQuick2_joint11[22];
extern u16 dFTYoshiAnimCliffAttackQuick2_joint12[112];
extern u16 dFTYoshiAnimCliffAttackQuick2_joint13[54];
extern u16 dFTYoshiAnimCliffAttackQuick2_joint14[10];
extern u16 dFTYoshiAnimCliffAttackQuick2_joint15[60];
extern u16 dFTYoshiAnimCliffAttackQuick2_joint16[48];
extern u16 dFTYoshiAnimCliffAttackQuick2_joint18[30];
extern u16 dFTYoshiAnimCliffAttackQuick2_joint19[80];
extern u16 dFTYoshiAnimCliffAttackQuick2_joint21[48];
extern u16 dFTYoshiAnimCliffAttackQuick2_joint23[66];
extern u16 dFTYoshiAnimCliffAttackQuick2_joint24[122];
extern u16 dFTYoshiAnimCliffAttackQuick2_joint26[64];
extern u16 dFTYoshiAnimCliffAttackQuick2_joint27[84];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTYoshiAnimCliffAttackQuick2_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimCliffAttackQuick2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackQuick2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackQuick2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackQuick2_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackQuick2_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackQuick2_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackQuick2_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackQuick2_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackQuick2_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackQuick2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackQuick2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackQuick2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackQuick2_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackQuick2_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackQuick2_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackQuick2_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackQuick2_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackQuick2_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackQuick2_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackQuick2_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffAttackQuick2_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTYoshiAnimCliffAttackQuick2_joint1[28] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -10, 0, -20, 0, 284,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 1), 0, 128,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 34), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 14), 240, 56,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 20), 240,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimCliffAttackQuick2_joint2[56] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1688, -123, 0, -402, 459, 180, 108, -89,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 672, 130, 0, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -3216, -43,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 8), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 672, -134,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 27), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 8), 453,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 22), 0,
	ftAnimBlock(0, 2),
	ftAnimSetValT(FT_ANIM_ROTY, 20), -3216,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 672, 124,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 672,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimCliffAttackQuick2_joint3[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -472, -7, 0, -5, 0, -44, -49, 32, 83, -35, 168, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -21, -11,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 30, 30, -33, 20, -91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 0, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 33), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -89, -6,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 30, -118,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), -89, 0, 20,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 15), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 22), -89, 0, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 11), -207,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 30, 172,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 7), 0, 30,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimCliffAttackQuick2_joint4[52] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 482, -17, 74, -2, 66, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -312, -29, 0, -4, 0, -4,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3,
	ftAnimBlock(0, 8),
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 16, 28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 87, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 313, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 16, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTYoshiAnimCliffAttackQuick2_joint5[50] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -5, 544, 331,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 1,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -75, 34, 284, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 625, 8, 0, -15, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimBlock(0, 8),
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 78, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 13), 528,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 78, -50,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 78,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimCliffAttackQuick2_joint7[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 460,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 0, -12,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 23,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 22), 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimCliffAttackQuick2_joint8[200] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX), 6144,
	ftAnimSetValRateT(FT_ANIM_SCAX, 9), 4096, -292,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX, 1), 1,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1793, 239, 84, -1352, -122, 475,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2032, 92, -1267, -684, 353, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1978, -113, -1284, -2, 390, 119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1284, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1805, -234, 593, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1509, -162, 1057, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1479, 143, -1142, 118, 1054, -186,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1075, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1796, 27, 683, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1293, -67, 1408, 233,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1371, -206,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1381, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1400, 121, 1443, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1356, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1097, 156,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 22), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1365, -42, 1335, 226,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1590, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1623, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1227, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1428, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1477, 27, -1589, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 1480, 15, -1470, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1624, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1431, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1283, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1490, -2, -1469, -37, 1261, 94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1580, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1382, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1472, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1720, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1730, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1566, -51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1544, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1382, 0, -1527, 17, 1533, -32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTYoshiAnimCliffAttackQuick2_joint9[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1018, 1010,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 509,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -7, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -328, -432,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -872, -342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -911, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -872, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1055, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1008, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -843, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -959, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1107, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1009, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -545, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -650, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1175, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1186, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimCliffAttackQuick2_joint11[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTZ), -625, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 0, 27,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 10,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 22), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTYoshiAnimCliffAttackQuick2_joint12[112] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1294, -52, 483, 7, -1954, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1639, -155,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 240, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2150, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2357, -189,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2916, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1777, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -2023, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2112, -253, 100, -195, -3058, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2531, -593, -150, -63, -3089, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3298, -415, -26, 23, -3281, -173,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -124, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -3533, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3361, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3364, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -3361, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -138, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -104, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3531, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -3436, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -104, 0, -3436, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -3361,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimCliffAttackQuick2_joint13[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -8, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -167, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -622, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -737, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1031, -326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1391, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1002, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -933, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), -1002,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1002, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimCliffAttackQuick2_joint14[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 23,
	ftAnimBlock(0, 35),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimCliffAttackQuick2_joint15[60] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -893, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1611, -893, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimBlock(0, 2),
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -2045, -1177, 968,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2045, -1177, 968,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2045, -1177, 968,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 716, -1203, -1675,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 675, -1215, -1300,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 480, -1322, -1307,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 740, -1249, -1372,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -536, -893, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -536, -893, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTYoshiAnimCliffAttackQuick2_joint16[48] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAZ), 8192,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 339, -27, 0, -11, 0, -10,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY), 0, 215, -240, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -310, -18,
	ftAnimSetValRateBlockT(FT_ANIM_SCAZ, 4), 4096, -431,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 15), 4096,
	ftAnimSetValT(FT_ANIM_SCAZ, 16), 4096,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -190, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), -190,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimCliffAttackQuick2_joint18[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 104, -29, 0, -12, 0, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -271, -9, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -153, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -153, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTYoshiAnimCliffAttackQuick2_joint19[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 66, 4, 167, -22, 598, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 5, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 21, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 672, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 610, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 302, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3, -249,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -384, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -3, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 5, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 19, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -5, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -385, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -3, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 106, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 7, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 0, 5, 0, -3, -11,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimCliffAttackQuick2_joint21[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 470, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 630, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 715, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 484, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 240, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, 21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimCliffAttackQuick2_joint23[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1453, -8, -165, 12, -492, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1597, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -69, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -381, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -472, -97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -763, 99,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1598, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1607, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, 115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -260, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -75, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -83, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, 0, -83, 0, -263, -3,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimCliffAttackQuick2_joint24[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 106, 25, -38, 6, 489, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 47, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 219, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 315, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -321,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -879, -112,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 62, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 183, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -897, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -474, 202,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 148, -21, 172, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 53, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 140, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -262, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -432, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 18, -34, -501, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -241, 107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 169, -1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 106, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 71, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -142, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -134, -13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 166, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 160, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 159, -1, 74, 2, -142, -7,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimCliffAttackQuick2_joint26[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 294, 355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 977, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1111, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 757, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 731, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 378, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 452, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1202, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1099, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 229, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 237, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 364, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, 14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTYoshiAnimCliffAttackQuick2_joint27[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1547, 35, -38, 0, -465, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -346, -81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -70, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1594, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1636, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1495, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1491, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1487, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -438, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -746, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -613, 115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -225, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -73, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -89, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1497, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1501, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1501, 0, -89, 0, -228, -3,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
