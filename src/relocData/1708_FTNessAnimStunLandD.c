/* AnimJoint data for relocData file 1708 (FTNessAnimStunLandD) */
/* 2128 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimStunLandD_joint2[38];
extern u16 dFTNessAnimStunLandD_joint4[16];
extern u16 dFTNessAnimStunLandD_joint5[138];
extern u16 dFTNessAnimStunLandD_joint7[62];
extern u16 dFTNessAnimStunLandD_joint10[38];
extern u16 dFTNessAnimStunLandD_joint11[114];
extern u16 dFTNessAnimStunLandD_joint12[58];
extern u16 dFTNessAnimStunLandD_joint13[14];
extern u16 dFTNessAnimStunLandD_joint15[10];
extern u16 dFTNessAnimStunLandD_joint16[78];
extern u16 dFTNessAnimStunLandD_joint18[48];
extern u16 dFTNessAnimStunLandD_joint19[86];
extern u16 dFTNessAnimStunLandD_joint21[60];
extern u16 dFTNessAnimStunLandD_joint22[94];
extern u16 dFTNessAnimStunLandD_joint24[32];
extern u16 dFTNessAnimStunLandD_joint25[62];
extern u16 dFTNessAnimStunLandD_joint26[64];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimStunLandD_joints[] = {
	(u32)dFTNessAnimStunLandD_joint2, /* [0] joint 2 */
	0x00000000, /* [1] NULL */
	(u32)dFTNessAnimStunLandD_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimStunLandD_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimStunLandD_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTNessAnimStunLandD_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimStunLandD_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimStunLandD_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimStunLandD_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimStunLandD_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimStunLandD_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimStunLandD_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimStunLandD_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimStunLandD_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimStunLandD_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimStunLandD_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimStunLandD_joint25, /* [24] joint 25 */
	(u32)dFTNessAnimStunLandD_joint26, /* [25] joint 26 */
};

/* Joint 2 */
u16 dFTNessAnimStunLandD_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), 625, 0, 0, -45,
	ftAnimSetValRate(FT_ANIM_TRAY), 420, 1632,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 1161, 3, -402, 5, 723, 26,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 26), -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 1200,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 12), 298, -1340,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 4), 723, 134, 697, 293,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimStunLandD_joint4[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 284, 14, 12,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), -457, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -402, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 6,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimStunLandD_joint5[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1498, -74, -1428, 7, -1745, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1482, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1155, -335, -1495, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 752, -251, -1140, 267,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 647, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -761, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1580, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1516, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1292, 105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1315, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 645, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 508, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1326, -7, -764, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -946, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1423, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1266, 91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1209, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1005, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1259, -57,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1201, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1208, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 516, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 535, 216, -1320, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 949, 332, -1452, -132, -1832, -425,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1266, 39, -1467, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2171, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2320, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1279, 13, -1464, 2, -2356, -36,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimStunLandD_joint7[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1041, -77,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1208, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -941, 316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -575, 470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 287,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -173, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -323, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 161,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimStunLandD_joint10[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -402, -49, -268, -21, 0, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -810, -65, -464, -17, 486, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1538, 235, -567, -69, 605, -234,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 204, -764, -525,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimStunLandD_joint11[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -103, 3, 222, 1, -556, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 278, 121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 381, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -298, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -228, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 106, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 402, 121,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1243, 182,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 390, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 229, -45,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 192, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1460, 143, 418, 128,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1608, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 450, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 490, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 191, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 318, 133,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1609, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1386, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 522, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 382, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1229, -61, 480, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1264, 35, 612, 131, 474, 91,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimStunLandD_joint12[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -327, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -296, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -406, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -590, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -540, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -418, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -45, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -369, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -589, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -522, 66,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimStunLandD_joint13[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 616, -1528, -119,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), -268, -1072, 714,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimStunLandD_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 75, 68, 30,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimStunLandD_joint16[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -93, 21, -99, -8, -515, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 55, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -130, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -89, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 127, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 24, 14, 303, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 406, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 193, -89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -526, -12,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 472, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 945, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -107, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -297, -57,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -532, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -529, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 940, -5, -338, -41, -524, 5,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimStunLandD_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 548, 42,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 489, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 253, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 202, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 788, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 821, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 668, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 684, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 785, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 792, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimStunLandD_joint19[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 142, -46, -143, 0, -257, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 300, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 108, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -118, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -71, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 115, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 173, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -54, -16,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 304, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 301, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -68, -101, 128, 100, 292, -213,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -488, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -258, -204, 309, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -476, 98, 329, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, 293, 365, -13, -81, 323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 111, 171, 301, -64, 158, 239,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimStunLandD_joint21[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -186, -74, 67,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -102, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -205, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -200, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 198, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 186, -38, -107, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 6, -28, -229, 24, 88, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 187, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -130, -39, 206, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -470, -47, 106, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -511, 310, 180,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimStunLandD_joint22[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 52, -16, 37, 0, -759, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 20, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 290, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -582, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -530, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -285, 93,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 85, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 901, 54,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 326, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -100, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -184, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -34, 21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 944, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 922, -74,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -76, 41, 16, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -12, -17, 166, 46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 842, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 802, -39, -52, -39, 195, 29,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimStunLandD_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 667, 42,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 933, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 917, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 284, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 197, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 213, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 106, -107,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimStunLandD_joint25[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1436, 37, -1927, 1, -1723, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -1487, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -1166, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 2020, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2026, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 1305, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1284, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1316, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1460, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1355, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1134, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1035, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1311, -4, -1347, 8, -1010, 24,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimStunLandD_joint26[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -396, -104, 265,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -463, 25, -108, -21, 221, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -306, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -221, 32, 43, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -268, 4, 140, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -200, 11, -494, 3, 109, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -118, 21, -144, 23, 426, -3,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 4), -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 30, 76, 69, -20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 187, 265,
	ftAnimEnd(),
	0x0000, 0x0000,
};
