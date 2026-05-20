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
extern u16 dFTLinkAnimTechB_joint29[88];
extern u16 dFTLinkAnimTechB_joint30[230];

/* Joint pointer table (30 entries, 120 bytes) */
AObjEvent32 * dFTLinkAnimTechB_joints[] = {
	(AObjEvent32 *)dFTLinkAnimTechB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimTechB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimTechB_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTLinkAnimTechB_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTLinkAnimTechB_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimTechB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTLinkAnimTechB_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTLinkAnimTechB_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimTechB_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimTechB_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimTechB_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTLinkAnimTechB_joint17, /* [14] joint 17 */
	NULL, /* [15] NULL */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTLinkAnimTechB_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimTechB_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTLinkAnimTechB_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTLinkAnimTechB_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTLinkAnimTechB_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTLinkAnimTechB_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTLinkAnimTechB_joint27, /* [26] joint 27 */
	(AObjEvent32 *)dFTLinkAnimTechB_joint29, /* [27] joint 29 */
	NULL, /* [28] NULL */
	(AObjEvent32 *)dFTLinkAnimTechB_joint30, /* [29] joint 30 */
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
u16 dFTLinkAnimTechB_joint29[88] = {
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
	0x0000,
};

/* Joint 30 */
u16 dFTLinkAnimTechB_joint30[230] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1081, -53, -1534, 11, -1678, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1844, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1363, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1054, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1083, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1067, -66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1861, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 946, 65, -1771, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1199, 118, -1939, -96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1933, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1183, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1312, -28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2037, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1201, -81, -1337, 25, -1904, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1130, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1270, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1939, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1833, -54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1046, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1277, 115, -1981, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1277, -72, -2046, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1067, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1841, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2059, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1284, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1095, -33, -1855, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1217, -85, -1961, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 923, -36, -1728, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1144, 51, -1849, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 964, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1269, -2, -1786, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1217, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1796, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1233, 101, -1960, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1167, -15, -1881, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1202, 50, -1919, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1958, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1134, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1250, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1496, -42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1889, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1730, 45,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1161, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1184, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1180, -4, -1534, -37, -1678, 52,
	ftAnimEnd(),
};
