/* AnimJoint data for relocData file 558 (FTMarioAnimShieldOff) */
/* 1712 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimShieldOff_joint2[14];
extern u16 dFTMarioAnimShieldOff_joint3[44];
extern u16 dFTMarioAnimShieldOff_joint5[30];
extern u16 dFTMarioAnimShieldOff_joint6[82];
extern u16 dFTMarioAnimShieldOff_joint7[42];
extern u16 dFTMarioAnimShieldOff_joint8[18];
extern u16 dFTMarioAnimShieldOff_joint9[42];
extern u16 dFTMarioAnimShieldOff_joint11[22];
extern u16 dFTMarioAnimShieldOff_joint12[92];
extern u16 dFTMarioAnimShieldOff_joint13[30];
extern u16 dFTMarioAnimShieldOff_joint14[28];
extern u16 dFTMarioAnimShieldOff_joint16[10];
extern u16 dFTMarioAnimShieldOff_joint17[70];
extern u16 dFTMarioAnimShieldOff_joint19[46];
extern u16 dFTMarioAnimShieldOff_joint21[56];
extern u16 dFTMarioAnimShieldOff_joint22[74];
extern u16 dFTMarioAnimShieldOff_joint24[40];
extern u16 dFTMarioAnimShieldOff_joint25[64];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimShieldOff_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTMarioAnimShieldOff_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimShieldOff_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimShieldOff_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimShieldOff_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimShieldOff_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimShieldOff_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimShieldOff_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimShieldOff_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimShieldOff_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimShieldOff_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimShieldOff_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimShieldOff_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimShieldOff_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimShieldOff_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimShieldOff_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimShieldOff_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimShieldOff_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTMarioAnimShieldOff_joint25, /* [24] joint 25 */
};

/* 4-byte alignment padding */
static u32 dFTMarioAnimShieldOff_pad[1] = { 0 };

/* Joint 2 */
u16 dFTMarioAnimShieldOff_joint2[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 540, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 12), 223,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTMarioAnimShieldOff_joint3[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 8, -455, -1, 0, 11, 60, 0, 0, 89, 0, 119,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), -804, -58, 0, -79, 90, -119,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 4), 0, 0, 120,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, -804, 0, 0, -90, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -71, -790, -95, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimShieldOff_joint5[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 107, -26, 0, 1, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 58, 268, 44, 107, 17,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 455, 268, 107,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 208, 258, 110,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimShieldOff_joint6[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2044, 133, -1137, -23, -2455, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2501, 139, -1285, -41, -2840, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2625, 431, -1301, 116, -2913, -400,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4228, 512,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1052, -84, -3640, -597,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1470, -183, -4109, -392,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4390, 59, -1418, 0, -4424, -178,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4379, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1468, -22, -4465, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1334, 47, -4882, -208,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4543, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4791, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4958, 167, -1308, 26, -5097, -215,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimShieldOff_joint7[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -683, -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -723, 337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -221, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 38,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimShieldOff_joint8[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), -402, 27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -402, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -625,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTMarioAnimShieldOff_joint9[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, -18, 402, 13, -107, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 53, 4, 107, -49, 160, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -80, 53, 107, -13, -26, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 268, 46, 53, -18, -134, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 201, -4, 176,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimShieldOff_joint11[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -221, -18, 139, 11, -209, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -221, 139, -209,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimShieldOff_joint12[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -341, -238, -175, -57, -520, -335,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1122, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -16, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -580, -280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -901, -199,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1056, -84,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1152, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -852, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 79, 126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 569, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1175, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1333, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1247, 144, -597, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1043, 374, 558, -2, -544, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 616, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -498, 626, -601, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 209, 471, -132, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 443, 233, 551, -64, 65, 198,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimShieldOff_joint13[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -349, 340,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 174,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -498, -405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -313,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTMarioAnimShieldOff_joint14[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 536, 90,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1170, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1340, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 625, -4, 0, -1, 0, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimShieldOff_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimShieldOff_joint17[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1256, -72, -1319, -30, 1347, 84,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1074, 167, 1629, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1504, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1524, 127,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1066, 77,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1331, 117, 1402, -94,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1297, -4, 1477, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1095, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1295, -74,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1299, 12, 1515, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1376, 75, 1597, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1473, 96, -1377, -82, 1653, 55,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimShieldOff_joint19[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 458, -110,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 348, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -170,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 414, 337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 674, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 615, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 576, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 472, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -71,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimShieldOff_joint21[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -68, -36, -21, 6, -17, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -251, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 94, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 148, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -46, -116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -119, -23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -234, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -217, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -145, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, -52, -163, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, 5, -11, -100, -156, 7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimShieldOff_joint22[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1531, -75, 1442, 22, 1418, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1534, 122,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1834, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1626, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1597, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1403, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1661, 46, 1206, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1333, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1499, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1799, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1526, 107,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1399, 69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1552, 86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1454, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1408, 118, 1421, -33, 1644, 91,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimShieldOff_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 441, -177,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 264, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 800, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 756, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 518, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -80,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTMarioAnimShieldOff_joint25[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1729, 23, -1723, -60, 1464, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1784, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1686, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1753, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1767, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1307, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1307, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1365, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1748, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1613, 88,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1690, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1697, 7, -1514, 98, 1395, 30,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
