/* AnimJoint data for relocData file 524 (FTMarioAnimDamaged2) */
/* 2704 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimDamaged2_joint1[62];
extern u16 dFTMarioAnimDamaged2_joint2[54];
extern u16 dFTMarioAnimDamaged2_joint4[62];
extern u16 dFTMarioAnimDamaged2_joint5[138];
extern u16 dFTMarioAnimDamaged2_joint6[58];
extern u16 dFTMarioAnimDamaged2_joint7[54];
extern u16 dFTMarioAnimDamaged2_joint8[62];
extern u16 dFTMarioAnimDamaged2_joint10[10];
extern u16 dFTMarioAnimDamaged2_joint11[156];
extern u16 dFTMarioAnimDamaged2_joint12[64];
extern u16 dFTMarioAnimDamaged2_joint13[62];
extern u16 dFTMarioAnimDamaged2_joint15[10];
extern u16 dFTMarioAnimDamaged2_joint16[104];
extern u16 dFTMarioAnimDamaged2_joint18[46];
extern u16 dFTMarioAnimDamaged2_joint20[110];
extern u16 dFTMarioAnimDamaged2_joint21[96];
extern u16 dFTMarioAnimDamaged2_joint23[48];
extern u16 dFTMarioAnimDamaged2_joint24[108];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimDamaged2_joints[] = {
	(u32)dFTMarioAnimDamaged2_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimDamaged2_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimDamaged2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimDamaged2_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimDamaged2_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimDamaged2_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimDamaged2_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimDamaged2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimDamaged2_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimDamaged2_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimDamaged2_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimDamaged2_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimDamaged2_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimDamaged2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimDamaged2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimDamaged2_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimDamaged2_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimDamaged2_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimDamaged2_joint1[62] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -93, 223, -46,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 540, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, 223,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -84, 537, -202,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -514,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -84, 0, 579, 0, -336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), -84, 0, 516, -100, -336, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 472, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), -26, 67, -234, 866,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), -18, 42, -52, 138,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 540, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimDamaged2_joint2[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, -790, -95,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -67, 0, -355, 0, 155, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -62, 0, -355, 0, 149, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -74, 0, -188, 34, -4, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -54, 11, -39, -1, -64, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 327, 1, -286, -40, -110, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -71, -790, -95,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimDamaged2_joint4[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 258, 110,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -16, -101, 69, 0, 57, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -197, -6, -213, -19, 182, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -223, 0, -316, 0, 234, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -223, 0, -316, 0, 234, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -125, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 7, 138, 76, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 97, 0, -50, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 208, 258, 110,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimDamaged2_joint5[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1475, -533, -1308, 161, 1336, 513,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -992, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2008, -14, 1850, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1503, 442, 1304, -463,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1122, 207, -1066, -38, 922, -201,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1007, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1088, 10, 900, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1257, -298, 1052, 290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1700, -376, 1486, 365,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -2229, 20, 2025, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1090, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1323, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2197, 41, 2050, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2238, 107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2001, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1322, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1627, 73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2350, 78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1901, -322,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1993, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1614, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1506, 140,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1285, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1559, -282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, 139, -1308, -23, 1336, -223,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimDamaged2_joint6[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, -304,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -486, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -243, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 121,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -154, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -377, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -514, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -469, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -741, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -786, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -810, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -484, 314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 301,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimDamaged2_joint7[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -625, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -473, 0, 192, 0, -96, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 21, 0, 15, 0, 115, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 21, 0, 15, 0, 115, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 21, 0, 15, 0, 115, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -379, 0, 36, 0, -159, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -625, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimDamaged2_joint8[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, -4, 176,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 33, 0, 393, 0, -213, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -48, -34, -277, -30, 174, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -120, 0, -295, 24, 146, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -35, 45, -43, 106, 87, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 104, 48, 251, 0, -72, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 258, 0, 247, 0, 35, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 201, -4, 176,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimDamaged2_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -221, 139, -209, 0, 54, -17,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimDamaged2_joint11[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 443, 192, 551, -166, 65, 713,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 408, 343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 636, 68, 778, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 580, 261, 723, 259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1159, 179, 1071, 484, 1297, 165,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1373, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 939, -106, 1054, -115,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1003, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1084, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1355, -25, 1106, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1233, 101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1015, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1036, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1101, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1189, 268, 1392, 368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1637, 339, 930, -14, 1971, 489,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1045, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1868, 46, 2370, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1621, -12, 2277, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1705, -17, 1108, 165, 2180, -351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1586, -45, 1377, 125, 1573, -438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, 19, 1359, -35, 1303, -119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1830, 140,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1079, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1428, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1534, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1979, 110, 1630, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2052, 72, 1056, -23, 1674, 43,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimDamaged2_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 219,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -592, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -929, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -894, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -502, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -483, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -465, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -566, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -647, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -432, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -306, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -684, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -494, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -802, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimDamaged2_joint13[62] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 2,
	ftAnimSetValBlock(FT_ANIM_ROTX), 625,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -133, 0, 218, 127,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 28,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 483, 20, 420, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 104, 48, 158, -16, 175, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 172, -22, 42, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 404,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -170, -6, 201, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 625, 7, 0, 0, 0, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimDamaged2_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimDamaged2_joint16[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -135, -823, -230, 181, 45, -295,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 47, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -958, -321, -250, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -777, 161, -198, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -389, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -197, -120,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 43, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -153, -58,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -368, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -420, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -206, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -132, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -337, -139,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -609, 178,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -241, -109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -305, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -246, 128,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -184, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -363, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -86, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, 49, -230, 74, 45, 132,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimDamaged2_joint18[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, -400,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -200,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 257, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 567, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 694, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 513, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -112,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimDamaged2_joint20[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1820, -381, 1619, -1279, -1764, -262,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -2972, -29, -2657, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 340, -608,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 401, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 359, 17,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2989, -8, -2693, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2721, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -2551, 122,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 380, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 516, -39,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2670, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2592, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2460, 0, -2481, 84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3314, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 472, -27, -2422, -91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 277, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2664, -312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -3294, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3386, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3399, -57, 114, -144, -3396, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3429, -29, -11, -125, -3373, 23,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimDamaged2_joint21[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, 130, 187, 22, 35, -228,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -244, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 102, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 330, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 85, -201,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -137, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -197, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 112, -58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 137, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -60, 39,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -143, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -18, -32,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 46, -132,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -462, 51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -55, -14, -18, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 121, 92, 186, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -303, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -63, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 79, 187, 0, 35, 99,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimDamaged2_joint23[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 152,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 582, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 523, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 511, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 484, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 593, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 641, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 594, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 608, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 516, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -77,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimDamaged2_joint24[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, -247, -93, 111, -212, -131,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -199, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 217, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -344, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -266, 83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -220, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -154, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 162, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 206, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 401, 4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -218, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -292, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 150, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 199, 52,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 404, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 6, -99,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -247, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -321, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 249, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 116, -48,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -88, -50, -248, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, -26, -93, -5, -212, 35,
	ftAnimEnd(),
};
