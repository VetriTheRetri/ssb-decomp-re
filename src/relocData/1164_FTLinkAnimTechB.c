/* AnimJoint data for relocData file 1164 (FTLinkAnimTechB) */
/* 3200 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimTechB_joint1[32];
extern u16 dFTLinkAnimTechB_joint2[82];
extern u16 dFTLinkAnimTechB_joint3[20];
extern u16 dFTLinkAnimTechB_joint5[46];
extern u16 dFTLinkAnimTechB_joint6[90];
extern u16 dFTLinkAnimTechB_joint7[40];
extern u16 dFTLinkAnimTechB_joint10[10];
extern u16 dFTLinkAnimTechB_joint11[112];
extern u16 dFTLinkAnimTechB_joint12[48];
extern u16 dFTLinkAnimTechB_joint13[10];
extern u16 dFTLinkAnimTechB_joint14[8];
extern u16 dFTLinkAnimTechB_joint17[36];
extern u16 dFTLinkAnimTechB_joint18[30];
extern u16 dFTLinkAnimTechB_joint19[14];
extern u16 dFTLinkAnimTechB_joint21[18];
extern u16 dFTLinkAnimTechB_joint22[172];
extern u16 dFTLinkAnimTechB_joint24[72];
extern u16 dFTLinkAnimTechB_joint26[200];
extern u16 dFTLinkAnimTechB_joint27[180];
extern u16 dFTLinkAnimTechB_joint29[318];

/* Joint pointer table (30 entries, 120 bytes) */
u32 dFTLinkAnimTechB_joints[] = {
	(u32)dFTLinkAnimTechB_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimTechB_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimTechB_joint3, /* [2] joint 3 */
	(u32)dFTLinkAnimTechB_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTLinkAnimTechB_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimTechB_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimTechB_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTLinkAnimTechB_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimTechB_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimTechB_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimTechB_joint14, /* [13] joint 14 */
	(u32)dFTLinkAnimTechB_joint17, /* [14] joint 17 */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	(u32)dFTLinkAnimTechB_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimTechB_joint19, /* [18] joint 19 */
	(u32)dFTLinkAnimTechB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTLinkAnimTechB_joint22, /* [21] joint 22 */
	(u32)dFTLinkAnimTechB_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTLinkAnimTechB_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTLinkAnimTechB_joint27, /* [26] joint 27 */
	(u32)dFTLinkAnimTechB_joint29, /* [27] joint 29 */
	0x00000000, /* [28] NULL */
	0xFFFF02AD, /* [29] END */
};

/* 4-byte alignment padding */
static u32 dFTLinkAnimTechB_pad[1] = { 0 };

/* Joint 1 */
u16 dFTLinkAnimTechB_joint1[32] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 492,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), -328, -1434,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), -1239, -4635,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), -2166, -3852,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), -3423, -3280,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), -4492, -904,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), -4800, 107,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimTechB_joint2[82] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY), 1474, 127, 901, -510,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 576, -467,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 832, 630,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 165, -2178,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -8655, -260,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 841,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 706, 3452,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -239,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 409, -2402,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 204, -117,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 2423,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 734, 1558,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -461,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 404, -1883,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 165, -524,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 203,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 825, 805,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -9650, -3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 743, -466,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), 901, 489,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTLinkAnimTechB_joint3[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 31), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -107, -13, 276, 28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimTechB_joint5[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), -240, -144,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 31), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -224, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 782, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 704, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 389, -27,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 166, 20, 56, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 259, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTLinkAnimTechB_joint6[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1329, -93, -1375, 35, 653, 172,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1439, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1431, 71, 841, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1343, 66, 706, -104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 962, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1522, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1557, -32, -1447, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1438, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -1641, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1022, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1566, 64,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1435, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1311, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1628, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1590, -62,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1608, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1407, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1328, 79, -1281, 30, 1522, -68,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimTechB_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -536, -207,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -801, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -666, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -507, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -1012, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1017, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -515, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimTechB_joint10[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -264, 34, 125,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 4, 7, 76,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimTechB_joint11[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1326, 100, 1401, -42, 618, 181,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1422, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1492, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 839, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 706, -103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 972, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1412, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1664, 19,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1495, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 1534, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1020, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1455, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1683, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1721, -34,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1493, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1336, 45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1686, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1993, 36,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1532, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1500, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1384, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1536, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2024, 31, 1484, -15, 1557, 21,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimTechB_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -458, -242,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -778, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -633, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -477, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -560, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -1037, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1060, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -695, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -725, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -672, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 84,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimTechB_joint13[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 289, -132, 33,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 0, -209, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTLinkAnimTechB_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimTechB_joint17[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1912, -22, -536, 22, -339, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 1628, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -143, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -38, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -339, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 1697, 10,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), -536, -20,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimTechB_joint18[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_ROTX), -389, 30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 31), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), 119, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -60, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 0, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -163, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTLinkAnimTechB_joint19[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 31), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -199, -25,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimTechB_joint21[18] = {
	ftAnimSetVal(FT_ANIM_ROTX), 153,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 74,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), -166,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 26), 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTLinkAnimTechB_joint22[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, 33, -232, -23, 142, -88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 167, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -260, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -424, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -495, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -592, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 228, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 57, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -251, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -335, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -474, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -420, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 66, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 193, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -435, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -507, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 108, -25, -407, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 103, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -446, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -353, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -382, 45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 95, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 39, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -275, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -328, 12, -348, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -314, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -139, -65, -185, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -172, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -91, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -124, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -85, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -105, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -41, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -63, 5, -81, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -171, -64, -12, 92,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -293, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -71, -244, 49, 108, 121,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimTechB_joint24[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 495, 109,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1124, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1182, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1012, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1087, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1141, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1056, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1042, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1027, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 950, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 677, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 759, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 704, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 659, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 709, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 477, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 250, -227,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimTechB_joint26[200] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 618, -4, 279, -3, 3201, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 600, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 154, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 3104, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3075, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 523, -12, 2957, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 574, -11, 3050, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 500, -8, 2950, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 557, -49, 3062, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 402, -68, 2855, -88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 524, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2885, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2922, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 152, 2, 2979, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2926, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 34, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 498, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 493, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3034, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2968, 27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 494, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 540, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3019, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 416, -9, 2844, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 520, 51, 37, -38, 2993, 111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3100, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -77, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 520, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 558, -88,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3123, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 391, -74, 2946, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 404, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2930, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 3063, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -61, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -154, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 335, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 327, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -154, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 1, -162, -7, 3182, 119,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimTechB_joint27[180] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 102, -36, 185, 24, 91, -106,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -128, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 264, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -341, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -426, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -434, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -222, -44, -563, -109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -84, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 256, 25, -652, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 360, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -483, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -527, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -93, 20, -449, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -559, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -43, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -139, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -127, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -476, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -572, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -477, 64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -519, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -105, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -62, 84,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -497, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -539, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 101, 98, -394, 117,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -406, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 101, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 235, 120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 226, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 370, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 321, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -371, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -532, 46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 162, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 219, 45,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -467, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -258, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 50, 269, -51, -125, 133,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimTechB_joint29[318] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 410, 165,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 867, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 945, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1087, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1182, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1059, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1080, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1023, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1131, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1138, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1120, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1087, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1088, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 829, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 895, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 655, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 714, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 925, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 884, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 588, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 425, -162,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0439, 0xFFCB, 0xFA02, 0x000B, 0xF972, 0xFFDD, 0x2809, 0x0006, 0xF8CC, 0xFFEE, 0x2805, 0x000D, 0xFAAD, 0x000A, 0x2003, 0x0004, 0x041E, 0x002B, 0x2003, 0x0001, 0x043B, 0x000C, 0x2803, 0x0002, 0x042B, 0xFFBE, 0x0801, 0x0001, 0x2009, 0x0001, 0xF8BB, 0x0024, 0x200B, 0x0001, 0x03B2, 0x0041, 0xF915, 0xFFD9, 0x200B, 0x0001, 0x04AF, 0x0076, 0xF86D, 0xFFA0, 0x2809, 0x0003, 0xF873, 0xFFE3, 0x2003, 0x0001, 0x049F, 0x0012, 0x2803, 0x0003, 0x0520, 0xFFE4, 0x0801, 0x0002, 0x2009, 0x0001, 0xF80B, 0x000E, 0x200F, 0x0001, 0x04B1, 0xFFAF, 0xFAC7, 0x0019, 0xF890, 0x0031, 0x2803, 0x0002, 0x046A, 0xFFCD, 0x2805, 0x000C, 0xFB0A, 0x0007, 0x2009, 0x0001, 0xF86D, 0x0010, 0x2809, 0x0002, 0xF8D7, 0xFFCA, 0x0801, 0x0001, 0x2003, 0x0001, 0x0416, 0x0049, 0x200B, 0x0001, 0x04FD, 0x0073, 0xF843, 0xFF96, 0x200B, 0x0001, 0x04FD, 0xFFB8, 0xF802, 0x0045, 0x2803, 0x0002, 0x042B, 0x004C, 0x2009, 0x0001, 0xF8CF, 0x004B, 0x2809, 0x0002, 0xF7F5, 0x0013, 0x0801, 0x0001, 0x2003, 0x0001, 0x0504, 0x000D, 0x200B, 0x0001, 0x0447, 0xFFDF, 0xF8C1, 0x0031, 0x200B, 0x0001, 0x04C1, 0xFFAB, 0xF857, 0x003F, 0x200B, 0x0001, 0x039B, 0xFFDC, 0xF940, 0x0037, 0x200B, 0x0001, 0x0478, 0x0033, 0xF8C7, 0xFFE4, 0x2803, 0x0002, 0x03C4, 0x0067, 0x200D, 0x0001, 0xFB0B, 0xFFFE, 0xF906, 0x001A, 0x2805, 0x0005, 0xFB3F, 0xFFD3, 0x2009, 0x0001, 0xF8FC, 0xFFA9, 0x200B, 0x0001, 0x04D1, 0x0065, 0xF858, 0xFFD6, 0x200B, 0x0001, 0x048F, 0xFFF1, 0xF8A7, 0x0014, 0x200B, 0x0001, 0x04B2, 0x0032, 0xF881, 0xFFBC, 0x2809, 0x0003, 0xF85A, 0x0041, 0x2803, 0x0006, 0x046E, 0x0015, 0x0801, 0x0001, 0x2005, 0x0001, 0xFB1E, 0xFFE6, 0x2805, 0x0006, 0xFA28, 0xFFD6, 0x0801, 0x0001, 0x2009, 0x0001, 0xF89F, 0x003C, 0x2809, 0x0004, 0xF93E, 0x002D, 0x0801, 0x0002, 0x2003, 0x0001, 0x0489, 0x0019, 0x2003, 0x0001, 0x04A0, 0x0009, 0x200F, 0x0001, 0x049C, 0xFFFC, 0xFA02, 0xFFDB, 0xF972, 0x0034, 0x0000,
};
