/* AnimJoint data for relocData file 1820 (FTYoshiAnimDash) */
/* 2944 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimDash_joint1[28];
extern u16 dFTYoshiAnimDash_joint2[92];
extern u16 dFTYoshiAnimDash_joint3[78];
extern u16 dFTYoshiAnimDash_joint6[50];
extern u16 dFTYoshiAnimDash_joint7[122];
extern u16 dFTYoshiAnimDash_joint10[74];
extern u16 dFTYoshiAnimDash_joint11[150];
extern u16 dFTYoshiAnimDash_joint12[64];
extern u16 dFTYoshiAnimDash_joint13[8];
extern u16 dFTYoshiAnimDash_joint14[50];
extern u16 dFTYoshiAnimDash_joint15[52];
extern u16 dFTYoshiAnimDash_joint17[40];
extern u16 dFTYoshiAnimDash_joint18[116];
extern u16 dFTYoshiAnimDash_joint20[62];
extern u16 dFTYoshiAnimDash_joint22[150];
extern u16 dFTYoshiAnimDash_joint23[128];
extern u16 dFTYoshiAnimDash_joint25[40];
extern u16 dFTYoshiAnimDash_joint26[116];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimDash_joints[] = {
	(u32)dFTYoshiAnimDash_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimDash_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimDash_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimDash_joint6, /* [3] joint 6 */
	0x00000000, /* [4] NULL */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimDash_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimDash_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimDash_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimDash_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimDash_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimDash_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimDash_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimDash_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimDash_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimDash_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimDash_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimDash_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimDash_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimDash_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimDash_joint1[28] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 672,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), 608, -34,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 608, 73,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 735, 106,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 735, -83,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 672,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimDash_joint2[92] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -89, 0, 0, 30, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 25, -120, 209, -239, -21,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 7), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -26, 86, 7, 213, 222, 1, 160,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 86, -5, 0, 3, 0, -17, 213, -186, 1, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), 43, 98,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), -195, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 6), 0, -2, 14, -7, 44, 4, -30, -10,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 4), -20,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 4), 14, -17, 44, -7, -12, 56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 120, -141,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, -89, 0, 0, 30, 21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimDash_joint3[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, 0, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 268, 61, 0, -10, 0, -9,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 172,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 16, 67, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 446, 14, -76, -6, -64, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 446, -16, -76, 5, -64, 4,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 223, -23, 0, 8, 0, 6,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 223, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 172,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 16, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimDash_joint6[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 78, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -406, -61, 0, 3, 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -352, 4, 22, 1, 26, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -352, 15, 22, -3, 26, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -135, 22, -28, -5, -35, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -135, -7, -28, 16, -35, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 78, 0, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimDash_joint7[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, 13, 1608, -47, 1145, -109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1458, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1465, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1036, -275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 595, -285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 464, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1445, 72, 462, 207,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1801, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 880, 376,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1215, 252,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1261, -56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1768, -31, 1519, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1530, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1616, -7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1210, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1104, -91,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1545, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1598, 26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 974, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 977, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1616, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1608, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 951, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 882, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, 0, 1608, 9, 1145, 263,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimDash_joint10[74] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -599, 68,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -530, 295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -647, -527,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1055, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1090, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1035, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -934, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -849, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -360, 290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -599, -599,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimDash_joint11[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1608, -68, -1608, 55, 1474, -124,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1580, 108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1467, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1349, -338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 797, -442,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 660, 325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1458, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1475, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1431, 76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1240, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1759, -213, 1112, 315,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1267, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1843, 70,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1230, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1453, -59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1196, -92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 757, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1755, 116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1516, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 766, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1162, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1537, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1700, 41,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1289, 101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1579, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1510, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1605, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1652, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1613, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1598, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1427, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, 4, -1608, -2, 1474, 47,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimDash_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1164, 136,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1028, 408,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -347, 509,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -224, -343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -686, -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -671, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -561, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -109, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -791, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -913, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -901, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1164, -262,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimDash_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 27),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimDash_joint14[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -893, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -2174, -30, -929, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 1034,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -806, 82, -893, 2, 0, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1188, -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -893, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1062, 36, -893, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -839, 86, -893, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -536, -893,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimDash_joint15[52] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -190, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 134, -7, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -241, -31, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -241, 21, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 62, 31, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 62, -41, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -190, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimDash_joint17[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -153, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 148, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -132, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -132, 6, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -46, 9, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -46, -17, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -153, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimDash_joint18[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, -62, 5, -107, -2, -395,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -63, -68, -238, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -398, -483,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -969, -396,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -969, 434,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -174, -25, -136, 132, -323, 636,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 26, 79, 303, 369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 22, -5, 415, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 466, 72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -44, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 15, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -32, 5,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 557, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 454, -304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -351,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -146, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -63, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -16, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -35, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -53, 33,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -240, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 47, 5, 22, -2, 238,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimDash_joint20[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 261, 368,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 860, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 887, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 957, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 647, -478,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 219, 366,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 740, 337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 838, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 749, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 621, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, -360,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTYoshiAnimDash_joint22[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1614, -60, -83, 80, -263, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1591, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 167, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -304, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -120, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1665, 0, -9, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1554, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -247, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -484, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -241, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1722, 96, 82, 195,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1755, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 148, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 104, -27,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1747, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1774, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 174, -16, 79, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 117, -230,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 113, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1756, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1597, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -238, -300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 105, -8, -484, -117,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 12, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -516, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1597, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1617, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -546, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -382, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, -2, -83, -96, -263, 119,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimDash_joint23[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1608, 111, 1608, -111, -1762, -286,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1568, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1319, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2049, -385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2534, -382,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2565, 44,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1572, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1684, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1398, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1472, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2549, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -2385, 127,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1514, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1394, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1657, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1422, -24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1403, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1625, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2249, 132,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1937, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1457, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1643, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1619, -6, -1916, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1604, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1774, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1946, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, 34, 1608, 4, -1762, 184,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimDash_joint25[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 378, 240,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 840, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 870, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 914, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 900, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 577, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 704, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 729, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -350,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimDash_joint26[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1609, 45, -89, -93, -229, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1510, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -141, 51, -120, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -80, 25, 18, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -129, 35, -270, -52,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1569, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1578, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -107, 15, -291, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -346, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -45, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 4, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -153, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -189, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 12, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -377, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -484, -80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1569, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1632, -10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -569, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 33, -14, -610, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -17, -61, -380, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1609, -23, -89, -72, -229, 151,
	ftAnimEnd(),
};
