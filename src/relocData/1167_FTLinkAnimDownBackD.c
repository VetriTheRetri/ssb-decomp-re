/* AnimJoint data for relocData file 1167 (FTLinkAnimDownBackD) */
/* 2752 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimDownBackD_joint1[18];
extern u16 dFTLinkAnimDownBackD_joint2[106];
extern u16 dFTLinkAnimDownBackD_joint3[28];
extern u16 dFTLinkAnimDownBackD_joint5[40];
extern u16 dFTLinkAnimDownBackD_joint6[100];
extern u16 dFTLinkAnimDownBackD_joint7[40];
extern u16 dFTLinkAnimDownBackD_joint10[42];
extern u16 dFTLinkAnimDownBackD_joint11[108];
extern u16 dFTLinkAnimDownBackD_joint12[40];
extern u16 dFTLinkAnimDownBackD_joint13[20];
extern u16 dFTLinkAnimDownBackD_joint14[8];
extern u16 dFTLinkAnimDownBackD_joint17[14];
extern u16 dFTLinkAnimDownBackD_joint18[44];
extern u16 dFTLinkAnimDownBackD_joint19[14];
extern u16 dFTLinkAnimDownBackD_joint21[20];
extern u16 dFTLinkAnimDownBackD_joint22[138];
extern u16 dFTLinkAnimDownBackD_joint24[48];
extern u16 dFTLinkAnimDownBackD_joint26[154];
extern u16 dFTLinkAnimDownBackD_joint27[136];
extern u16 dFTLinkAnimDownBackD_joint29[48];
extern u16 dFTLinkAnimDownBackD_joint30[148];

/* Joint pointer table (30 entries, 120 bytes) */
u32 dFTLinkAnimDownBackD_joints[] = {
	(u32)dFTLinkAnimDownBackD_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimDownBackD_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimDownBackD_joint3, /* [2] joint 3 */
	(u32)dFTLinkAnimDownBackD_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTLinkAnimDownBackD_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimDownBackD_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimDownBackD_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTLinkAnimDownBackD_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimDownBackD_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimDownBackD_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimDownBackD_joint14, /* [13] joint 14 */
	(u32)dFTLinkAnimDownBackD_joint17, /* [14] joint 17 */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	(u32)dFTLinkAnimDownBackD_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimDownBackD_joint19, /* [18] joint 19 */
	(u32)dFTLinkAnimDownBackD_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTLinkAnimDownBackD_joint22, /* [21] joint 22 */
	(u32)dFTLinkAnimDownBackD_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTLinkAnimDownBackD_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTLinkAnimDownBackD_joint27, /* [26] joint 27 */
	(u32)dFTLinkAnimDownBackD_joint29, /* [27] joint 29 */
	0x00000000, /* [28] NULL */
	(u32)dFTLinkAnimDownBackD_joint30, /* [29] joint 30 */
};

/* 4-byte alignment padding */
static u32 dFTLinkAnimDownBackD_pad[1] = { 0 };

/* Joint 1 */
u16 dFTLinkAnimDownBackD_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 8), -327, -928,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 21), -4058, -1571,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), -4200, 582,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimDownBackD_joint2[106] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAZ), 945, 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 162, 225,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -28, -282,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 14), 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 407, 602,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 522, 81,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 260, -461,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -3178, -128,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 309, 1628,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 47, 204,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 644, 519,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 702, -762,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 17, -704,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), -208, 455,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 613, 201,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 53, 136,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 901, 245,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -3216, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 37, -348,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 0, -32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTLinkAnimDownBackD_joint3[28] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -138, 4, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValT(FT_ANIM_ROTZ, 36), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 29), -3, 4, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -107, -45, 276, 76,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimDownBackD_joint5[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 74, 37,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 514, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 805, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 569, -113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 259, 24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 166, 28, 56, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTLinkAnimDownBackD_joint6[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -612, 53, -379, -23, -279, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -441, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -143, 196, -589, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 41, 127, -778, -138,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -11, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -677, 58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -368, 73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -386, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -15, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 19, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -617, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 127, 3,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -386, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -346, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 40, 19, 129, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 206, 65, 10, -85,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -343, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, 73, -326, 16, -86, -97,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimDownBackD_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -377, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -308, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -753, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -796, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -709, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -669, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -561, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 60,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimDownBackD_joint10[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 122, -22, -128, 2,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -210, -9,
	ftAnimSetValT(FT_ANIM_ROTZ, 36), 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -46, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 28, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -259, -1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 7, -1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 4, 42,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTLinkAnimDownBackD_joint11[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 795, -75, 225, 10, -151, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 316, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 265, -101, -491, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 181, -48, -641, -143,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 116, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -724, 103,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 252, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 185, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 92, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 197, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -611, 109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 55, 5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 163, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 11, 16,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 192, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 355, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 60, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -27, -22,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 34, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 390, 30, 71, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, 25, 123, 52, -50, -23,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimDownBackD_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -575, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -443, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -391, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -426, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -548, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -986, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -972, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -684, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 96,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimDownBackD_joint13[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -107, 12,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), 76, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), 0, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTLinkAnimDownBackD_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimDownBackD_joint17[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -208,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 1697, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 25), -227, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -536, -32,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimDownBackD_joint18[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -332, 20, 291, -39,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 23, 27,
	ftAnimSetValT(FT_ANIM_ROTZ, 36), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 19), 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 76, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -184, -7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -163, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 0, 42,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTLinkAnimDownBackD_joint19[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 29), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -199, -34,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimDownBackD_joint21[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -40, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 29), -122, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 95, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, -58,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTLinkAnimDownBackD_joint22[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1867, 88, -1222, 43, 1349, -151,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1333, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 340, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1271, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1364, -79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1366, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1327, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1527, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 394, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 712, 40,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1362, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1271, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 782, 71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 952, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1528, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1494, 51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 925, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1009, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1448, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1820, -26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1274, -16, 1241, 217,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1684, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1328, -25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1830, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1814, -31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1640, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1614, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1850, -36, -1364, -35, 1717, 102,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimDownBackD_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 706, 133,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1161, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1145, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1025, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1023, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1148, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1204, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 650, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 657, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 446, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 250, -196,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimDownBackD_joint26[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 924, -79, 319, -16, 254, -138,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 449, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 120, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -95, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -36, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -272, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 425, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 565, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 152, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 208, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -253, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -204, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -107, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -263, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 587, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 571, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -195, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 16, 138,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 592, 40, 174, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 550, -110,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -251, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 172, 87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -343, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 423, -97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 264, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -232, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -207, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -307, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -123, 66,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 266, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 285, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 44, -162, 45, -34, 88,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimDownBackD_joint27[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 672, -260, 663, 38, -193, -294,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 425, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 412, -335, -487, -364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1, -291, -922, -315,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1274, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -246, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 324, -87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 235, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1310, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1048, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -247, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -171, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -198, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -487, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 240, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 251, 18,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -43, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -452, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -462, 51,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -30, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 246, 28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -408, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -229, 86,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 267, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 23, 269, 2, -125, 104,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimDownBackD_joint29[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 825, 79,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1052, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1017, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1057, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1025, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 774, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 754, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 940, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 850, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 459, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 425, -34,
	ftAnimEnd(),
	0x0000,
};

/* Joint 30 */
u16 dFTLinkAnimDownBackD_joint30[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -854, 71, -79, 21, 30, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 23, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -124, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -443, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -418, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -315, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 34, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 79, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -47, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -131, 20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 21, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -87, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -82, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -221, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -313, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -538, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -113, 113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -52, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -73, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 81, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -497, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -363, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -127, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -391, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -322, 26, 96, 9, -549, -104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -491, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -111, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -47, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -19, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -20, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -462, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -428, 34, -74, 37, -69, -49,
	ftAnimEnd(),
	0x0000, 0x0000,
};
