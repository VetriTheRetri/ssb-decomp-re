/* AnimJoint data for relocData file 1069 (FTSamusAnimFTiltMidLow) */
/* 1984 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimFTiltMidLow_joint1[36];
extern u16 dFTSamusAnimFTiltMidLow_joint2[34];
extern u16 dFTSamusAnimFTiltMidLow_joint4[40];
extern u16 dFTSamusAnimFTiltMidLow_joint5[104];
extern u16 dFTSamusAnimFTiltMidLow_joint6[44];
extern u16 dFTSamusAnimFTiltMidLow_joint7[32];
extern u16 dFTSamusAnimFTiltMidLow_joint8[16];
extern u16 dFTSamusAnimFTiltMidLow_joint11[10];
extern u16 dFTSamusAnimFTiltMidLow_joint12[118];
extern u16 dFTSamusAnimFTiltMidLow_joint14[60];
extern u16 dFTSamusAnimFTiltMidLow_joint15[88];
extern u16 dFTSamusAnimFTiltMidLow_joint17[28];
extern u16 dFTSamusAnimFTiltMidLow_joint19[86];
extern u16 dFTSamusAnimFTiltMidLow_joint20[108];
extern u16 dFTSamusAnimFTiltMidLow_joint22[68];
extern u16 dFTSamusAnimFTiltMidLow_joint23[74];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimFTiltMidLow_joints[] = {
	(u32)dFTSamusAnimFTiltMidLow_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimFTiltMidLow_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimFTiltMidLow_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimFTiltMidLow_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimFTiltMidLow_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimFTiltMidLow_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimFTiltMidLow_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimFTiltMidLow_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimFTiltMidLow_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimFTiltMidLow_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimFTiltMidLow_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimFTiltMidLow_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimFTiltMidLow_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimFTiltMidLow_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimFTiltMidLow_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimFTiltMidLow_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimFTiltMidLow_joint1[36] = {
	ftAnimSetValAfter(FT_ANIM_TRAY), 1600,
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), 481, 140,
	ftAnimSetValAfterT(FT_ANIM_TRAY, 32), 1600,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1072, -273,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -2309, -150,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 24), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 17), -3401,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -3216, 56,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimFTiltMidLow_joint2[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterT(FT_ANIM_ROTY, 32), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 142, 1, -388, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 0, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -328, 16,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 62,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 18), 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimFTiltMidLow_joint4[40] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 223, -491, 0, -99, -38, 4,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 40, -580, 41, -76, 4, -6,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 19, -95, 42,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimFTiltMidLow_joint5[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 476, 62, 114, -21, -231, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 608, -227, -354, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 16, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -82, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -23, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 283, -302, 0, 285,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -127, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -118, -122,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -46, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -5, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -103, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 514, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -240, -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -775, 47,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 50, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 114, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 502, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 470, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -720, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -261, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 476, 5, 114, 0, -231, 29,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimFTiltMidLow_joint6[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, 25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 32), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -882, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1085, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1215, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1175, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -335, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -398, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -715, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimFTiltMidLow_joint7[32] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 253, -72, 130,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -324, -28, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -20, 0, 101, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 10, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 701, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimFTiltMidLow_joint8[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 32), 67, -17, -1474, 98, 60, -42,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimFTiltMidLow_joint11[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimFTiltMidLow_joint12[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 180, -92, -195, 42, -232, 219,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 27, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 91, 51, 438, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 158, 9, 656, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 370, -187,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -172, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 105, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 245, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 165, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -38, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -120, 58, 45, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 716, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 290, -54,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 214, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 13, -68,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 729, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -62, -79,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 231, -61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 132, 43,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -55, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -167, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -143, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 180, 48, -195, -28, -232, -88,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimFTiltMidLow_joint14[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -275,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 32), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1126, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1085, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1125, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1029, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1150, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1153, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -956, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -893, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1106, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1109, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -725, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 130,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimFTiltMidLow_joint15[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, -85, -27, -42, -389, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -280, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -240, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -161, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -140, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 208, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, -90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -593, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -308, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -196, 26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 199, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 222, -47,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -171, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -2, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -603, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -429, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 181, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 139, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, -52, -27, -24, -389, 39,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimFTiltMidLow_joint17[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 32,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 32), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), 415, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 432, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 465, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimFTiltMidLow_joint19[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1684, 64, 1637, 4, -1650, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 1603, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1641, -38, -1817, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1674, 15, -1815, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -1617, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1595, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1618, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1554, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1587, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1764, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1606, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1634, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1622, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1646, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1746, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1718, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1684, 34, 1637, 3, -1650, -3,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimFTiltMidLow_joint20[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 225, -68, 160, 20, -49, -98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 129, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -162, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -507, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -419, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 222, 65, -253, 233,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 108, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 55, 150, 48, 176,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 327, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 175, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 245, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 167, -86,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 348, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 476, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, 20, 103, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -49, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 161, -3,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 445, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 233, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -53, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -50, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 225, -7, 160, -1, -49, 1,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimFTiltMidLow_joint22[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 177,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 32), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 905, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1131, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 494, -426,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 234, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 363, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 533, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 516, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 447, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimFTiltMidLow_joint23[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 142, -35, 193, -7, -212, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 94, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 11, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -48, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -67, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 73, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -212, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 17, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 193, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -66, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -31, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -34, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 135, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, 6, 193, 0, -212, 0,
	ftAnimEnd(),
};
