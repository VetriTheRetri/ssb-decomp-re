/* AnimJoint data for relocData file 1105 (FTLuigiAnimRunBrake) */
/* 2768 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLuigiAnimRunBrake_joint1[46];
extern u16 dFTLuigiAnimRunBrake_joint2[28];
extern u16 dFTLuigiAnimRunBrake_joint4[58];
extern u16 dFTLuigiAnimRunBrake_joint5[162];
extern u16 dFTLuigiAnimRunBrake_joint6[74];
extern u16 dFTLuigiAnimRunBrake_joint7[16];
extern u16 dFTLuigiAnimRunBrake_joint8[44];
extern u16 dFTLuigiAnimRunBrake_joint10[40];
extern u16 dFTLuigiAnimRunBrake_joint11[140];
extern u16 dFTLuigiAnimRunBrake_joint12[64];
extern u16 dFTLuigiAnimRunBrake_joint13[14];
extern u16 dFTLuigiAnimRunBrake_joint15[10];
extern u16 dFTLuigiAnimRunBrake_joint16[140];
extern u16 dFTLuigiAnimRunBrake_joint18[56];
extern u16 dFTLuigiAnimRunBrake_joint20[128];
extern u16 dFTLuigiAnimRunBrake_joint21[142];
extern u16 dFTLuigiAnimRunBrake_joint23[60];
extern u16 dFTLuigiAnimRunBrake_joint24[114];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTLuigiAnimRunBrake_joints[] = {
	(AObjEvent32 *)dFTLuigiAnimRunBrake_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLuigiAnimRunBrake_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLuigiAnimRunBrake_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLuigiAnimRunBrake_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLuigiAnimRunBrake_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLuigiAnimRunBrake_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTLuigiAnimRunBrake_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTLuigiAnimRunBrake_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTLuigiAnimRunBrake_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLuigiAnimRunBrake_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLuigiAnimRunBrake_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLuigiAnimRunBrake_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTLuigiAnimRunBrake_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTLuigiAnimRunBrake_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTLuigiAnimRunBrake_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLuigiAnimRunBrake_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLuigiAnimRunBrake_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLuigiAnimRunBrake_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTLuigiAnimRunBrake_joint1[46] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 755,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAZ), 0, 21, -67, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 552, -161,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 223, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -59, 9,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -60, 63,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 540, -3, 0, 18,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 540, 54, 0, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 9), 223,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 12), 223,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLuigiAnimRunBrake_joint2[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -124, 1, -113, -32, 41, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -71, 1, -790, -21, -95, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -71, -1, -790, 21, -95, 4,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLuigiAnimRunBrake_joint4[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY), 407, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 234, 16, 78, 9,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 11), 258, 17, 110, 5, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 312, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 208, -12,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 21), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 104, 10, 622, 17, 192, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 377, 10, 538, -37, 341, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 208, 2, 258, -19, 110, -17,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLuigiAnimRunBrake_joint5[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1950, 32, -1305, 6, 1896, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1702, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1209, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1574, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1538, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1528, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1701, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1597, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1244, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1515, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1567, 61, 1493, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1190, 250, 1023, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -845, 434, 905, -105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 719, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -321, 393,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -58, 184,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 188, 238,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1528, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1294, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 705, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 245, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1148, 81, -44, -317,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -604, -181,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1149, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 489, 257,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1213, 180,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -753, -157,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1718, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1140, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1322, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1397, 165,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1758, 44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1912, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1741, -16, -1308, 14, -1880, 32,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLuigiAnimRunBrake_joint6[74] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -247, -29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -149, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -297, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -437, -366,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -732, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -497, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -564, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -343, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -79, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, -102,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLuigiAnimRunBrake_joint7[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -625, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 21), -625,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTLuigiAnimRunBrake_joint8[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 188, 0, -68, 2, -36, 5,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 201, -10, -4, -3, 176, 8, 0, 0, 288, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 0, 288, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -99, -158, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 201, 18, -4, 5, 176, -15,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLuigiAnimRunBrake_joint10[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -190, 0, -42, 0, 97, -9,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -221, 0, 139, 5, -209, -9, 0, 0, 54, 0, -17, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -221, 0, 139, -5, -209, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 0, 54, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTLuigiAnimRunBrake_joint11[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1389, 63, 1005, -18, 1048, 102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1143, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1368, -77, 1164, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1297, -34, 1096, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1759, 135, 1470, 93,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1105, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1057, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1898, 146, 1562, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 2509, 196, 2057, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2749, 149, 1002, 12, 2282, 128,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1246, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2897, 30, 2345, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2920, 16, 2341, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2552, -202,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1936, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1276, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1277, -24,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2335, -193,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2114, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1253, 41, 1827, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1791, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1377, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1335, -72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1120, -87,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2065, -31, 1707, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2052, -13, 1056, -64, 1674, -33,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLuigiAnimRunBrake_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -489, -38,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -374, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -248, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -755, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -814, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -341, 307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -380, -300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -609, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -847, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLuigiAnimRunBrake_joint13[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 804, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 625, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 21), 625,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTLuigiAnimRunBrake_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLuigiAnimRunBrake_joint16[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 122, -50, -109, 8, -386, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -92, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -16, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -173, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 134, 207,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 54, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -90, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -122, 27,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -89, -70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -540, 48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -97, 0, 41, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -633, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 87, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 241, 145,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 494, -186,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -490, 8, -683, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -429, 191,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -541, 61,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 257, -254,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -363, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -213, 184,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 152, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -471, 71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -222, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -385, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -225, 105,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 110, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -97, 128, -215, 7, 41, -69,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLuigiAnimRunBrake_joint18[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 112, 131,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 293, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 432, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 428, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 570, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 589, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1119, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1122, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 331, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, 69,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLuigiAnimRunBrake_joint20[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -200, 25, -299, 21, 246, -158,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -327, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -21, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -65, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -363, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -375, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -98, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 21, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -331, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -346, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 104, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -48, 76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 447, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -365, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -460, 98,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 105, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -331, -78,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 428, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 117, -57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -352, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -138, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -361, 85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -198, -9,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 50, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -213, -15, -48, -99, -156, -17,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLuigiAnimRunBrake_joint21[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -43, -46, 174, -2, 752, -97,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -392, -18, -45, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 103, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -57, -178,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -328, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -366, 88, -128, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 176, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 95, 79,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -203, 128,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 120, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 192, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -10, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 166, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 406, -33,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 14, 81, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 281, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -368, -102,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 360, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -181, -125,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 304, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 176, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -463, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -380, 70,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -271, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 134, 84,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 229, 13, -260, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 204, -28, -73, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 166, 32, 172, -31, 30, 103,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLuigiAnimRunBrake_joint23[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 284, 164,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 449, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 748, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1252, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1295, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 308, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 188, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 58, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 163, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 742, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 919, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 984, -307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 640, -272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -202,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTLuigiAnimRunBrake_joint24[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 54, 59, 126, -1, -150, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 519, 27, 41, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -199, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -300, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -151, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 506, -109, -2, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 140, -101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -148, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -100, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 97, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -98, -10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -81, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -375, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -104, 10, -370, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 164, 125, -421, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -144, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -92, 25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 265, 10, -469, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 78, -1, -256, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 91, 13, -59, 32, -212, 44,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
