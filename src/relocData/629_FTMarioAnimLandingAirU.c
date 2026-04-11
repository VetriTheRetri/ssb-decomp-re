/* AnimJoint data for relocData file 629 (FTMarioAnimLandingAirU) */
/* 3536 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimLandingAirU_joint1[74];
extern u16 dFTMarioAnimLandingAirU_joint2[86];
extern u16 dFTMarioAnimLandingAirU_joint4[68];
extern u16 dFTMarioAnimLandingAirU_joint5[130];
extern u16 dFTMarioAnimLandingAirU_joint6[38];
extern u16 dFTMarioAnimLandingAirU_joint7[18];
extern u16 dFTMarioAnimLandingAirU_joint8[54];
extern u16 dFTMarioAnimLandingAirU_joint10[46];
extern u16 dFTMarioAnimLandingAirU_joint11[158];
extern u16 dFTMarioAnimLandingAirU_joint12[64];
extern u16 dFTMarioAnimLandingAirU_joint13[10];
extern u16 dFTMarioAnimLandingAirU_joint15[8];
extern u16 dFTMarioAnimLandingAirU_joint16[222];
extern u16 dFTMarioAnimLandingAirU_joint18[94];
extern u16 dFTMarioAnimLandingAirU_joint20[222];
extern u16 dFTMarioAnimLandingAirU_joint21[168];
extern u16 dFTMarioAnimLandingAirU_joint23[260];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimLandingAirU_joints[] = {
	(u32)dFTMarioAnimLandingAirU_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimLandingAirU_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimLandingAirU_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimLandingAirU_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimLandingAirU_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimLandingAirU_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimLandingAirU_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimLandingAirU_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimLandingAirU_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimLandingAirU_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimLandingAirU_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimLandingAirU_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimLandingAirU_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimLandingAirU_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimLandingAirU_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimLandingAirU_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimLandingAirU_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF0317, /* [23] END */
};

/* Joint 1 */
u16 dFTMarioAnimLandingAirU_joint1[74] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY), 1608, 178, 456, -560,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 3), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), -1, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 1608,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 1608,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1608, -63, 0, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), 470, -45, 158, 6,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 442, 900,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 674, 174,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 551, -263,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 410, -94,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 456, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY, 8), 470, -24, 158, 3, 456, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY, 11), 0, 223, 540,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimLandingAirU_joint2[86] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -302, -17, 0, -629,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 5120, 1720, 5120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -302, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 39), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), -302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 1), 0, -2, 0, -31, 0, -3, -302, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 17), -50, -2, -559, -22, -67, -2, -258, 14,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, -56, 4096, 131, 4096, -56,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 4096, 4096, 4096,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 8), -50, -1, -559, -12, -67, -1, -258, 108,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 11), -71, -790, -95, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimLandingAirU_joint4[68] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 305, -23, -7, -97, -4,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 3), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -23, -97,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, -23, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 5, 0, 6, 0, 2, 0, 0, -23, -10, -97, 24,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 208, 258, 110,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 0, 0, -46, -7, -41, 17,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, -46, 19, -41, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimLandingAirU_joint5[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2361, -8, -1393, 26, -2148, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -2444, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -990, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 2382, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2463, 81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 2778, -5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2477, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2573, 9,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2771, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2821, 338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -986, 28, -2550, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -905, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2650, -356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3415, 469, -3264, -485,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 4184, 227, -4062, -234,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -930, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1310, -103,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4421, 210, -4307, -220,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 4801, 24, -4915, -39,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1401, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1319, 22,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4832, 38, -4956, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 4931, 39, -5066, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4958, 27, -1308, 10, -5097, -31,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimLandingAirU_joint6[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 21), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -530, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -643, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -600, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -508, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -224, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimLandingAirU_joint7[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -625, -7, 0, 1, 0, -2,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 48), -625, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimLandingAirU_joint8[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 127, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 288,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 127, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 127, 2, 0, 0, 0, 6, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 36), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 179, 2, -3, 0, 125, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 179, 1, -3, 0, 125, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 201, -4, 176,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTMarioAnimLandingAirU_joint10[46] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 346, 2,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 346,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 346, -15, 0, 3, 0, -5, 0, 0, 0, 11, 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), -221, 139, -209, 0, 54, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimLandingAirU_joint11[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 996, -5, 278, -1, 1088, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 650, -37, 713, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 362, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 469, 121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1390, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 662, -355, 701, -371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -60, -85, -29, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 491, 258, 563, 328,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 613, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 457, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 379, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 398, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1436, 39, 620, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1776, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 972, 28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 382, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 145, -536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -690, -523,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -902, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -984, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1655, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1773, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1470, -68,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1001, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1485, 73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1643, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1216, 82,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1387, -94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1087, -57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1560, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1636, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1164, 51, 1056, -31, 1674, 37,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimLandingAirU_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, -131,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -140, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -400, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -496, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -573, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -279, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -713, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -823, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -831, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimLandingAirU_joint13[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -279, 0,
	_FT_ANIM_CMD(11, 0, 1), 1,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimLandingAirU_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimLandingAirU_joint16[222] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1620, -22, -1589, 14, 2112, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1758, -167,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1605, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2042, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2183, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1753, -658,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1977, -135,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1872, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1604, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1371, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1630, 66, -1355, 9, 869, -430,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1422, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1740, -107, 892, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1845, -230, 1299, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2201, -424, -1348, 38, 876, -314,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1189, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2695, -203, 669, -103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 676, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2608, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2551, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2611, -498, 659, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3548, -551, -1225, -79, 821, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -3655, 73, -1355, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 811, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 504, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3568, 80, -1329, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1400, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -3630, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3800, -113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -3817, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 492, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 597, 86,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1391, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1268, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3815, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -4260, -189,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 709, 150,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1453, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1210, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1363, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4469, -193,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -4938, -42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1555, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1626, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4960, -22, -1377, -14, 1653, 27,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimLandingAirU_joint18[94] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 756, -102,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 654, -279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 197, -327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 417,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 834, 590,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1180, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 624, -504,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 171, -312,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 315, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 623, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 449, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 662, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 685, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 578, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 666, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 762, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 654, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 442, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimLandingAirU_joint20[222] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 70, 22, 21, 8, 318, 115,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 224, 122, 621, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 191, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 387, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 384, -131, 332, 67, 532, -410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 124, -126, 358, -80, -200, -244,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 259, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 171, -145, 43, 472,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 67, 49, 744, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 168, 266, 269, 19, 245, 114,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1365, 226, -63, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 972, 310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 867, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1114, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1245, -88, 79, 115,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 87, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1188, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1211, 390, 1190, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1968, 514, -379, -186, 669, -463,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2241, 125, -285, 66, 263, -271,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2196, 0, 41, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -246, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -132, 132,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2217, 60, 4, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2655, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 44, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 41, 123, -38, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 74, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -94, -57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2661, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 2587, 29,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 86, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -2, -42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -157, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -221, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2619, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2995, 17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -34, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -16, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -176, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3004, 9, -11, 5, -156, 19,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimLandingAirU_joint21[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1405, 11, -1684, 60, 1396, 105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1553, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1284, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1373, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1168, -94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1227, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1509, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1218, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1211, 153, 1201, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 932, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -764, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -755, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1149, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 981, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1103, -100,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1215, -65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1563, -53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1161, -21, 993, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1369, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 825, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1593, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1505, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1395, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1482, -46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 812, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1152, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1500, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1560, -74,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1530, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1423, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1264, 106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1627, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1639, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1787, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1408, 15, -1795, -8, 1644, 16,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimLandingAirU_joint23[260] = {
	ftAnimSetValRate(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 189, -189, 10240, -1536, 6144, -512, 6144, -512,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -94,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 7, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 36), 4096, 4096, 4096,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 649, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 817, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 828, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 872, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 847, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 860, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 459, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -21,
	ftAnimEnd(),
	0x200E, 0x0691, 0x0000, 0xFA8D, 0xFFEE, 0xFA11, 0xFFE9, 0x2803, 0x0005, 0x05A2, 0xFFB9, 0x2805, 0x0008, 0xFB5C, 0x002E, 0x2009, 0x0002, 0xF971, 0xFFA5, 0x2009, 0x0001, 0xF943, 0x0037, 0x2009, 0x0001, 0xF9E1, 0x0060, 0x2009, 0x0001, 0xFA03, 0x002A, 0x2809, 0x0003, 0xFAE1, 0x00D2, 0x2003, 0x0001, 0x0549, 0xFF85, 0x2003, 0x0001, 0x04AB, 0xFEE2, 0x2003, 0x0001, 0x030D, 0x00B4, 0x200F, 0x0001, 0x0615, 0x0092, 0xFB85, 0xFFF8, 0xFC1A, 0x00F6, 0x2805, 0x0002, 0xFB66, 0x0025, 0x2809, 0x0005, 0xFAB8, 0xFF5D, 0x2003, 0x0001, 0x0433, 0xFF06, 0x2803, 0x0002, 0x04A2, 0x00A4, 0x0801, 0x0001, 0x2005, 0x0001, 0xFB97, 0x001D, 0x2805, 0x0007, 0xFA4A, 0xFFD4, 0x2003, 0x0001, 0x0567, 0x00AD, 0x2803, 0x0003, 0x0641, 0xFFE7, 0x0801, 0x0001, 0x2009, 0x0001, 0xFA26, 0xFF46, 0x2809, 0x0003, 0xF8A1, 0x000D, 0x0801, 0x0001, 0x2003, 0x0001, 0x0620, 0xFFF1, 0x2803, 0x0004, 0x066E, 0x0050, 0x0801, 0x0001, 0x2009, 0x0001, 0xF8D4, 0x0031, 0x2809, 0x0006, 0xF8DE, 0x000B, 0x2005, 0x0001, 0xFA19, 0xFFD8, 0x2805, 0x000B, 0xF964, 0xFFE8, 0x0801, 0x0001, 0x2003, 0x0001, 0x06B6, 0x003B, 0x2803, 0x000F, 0x068B, 0x000A, 0x0801, 0x0003, 0x2009, 0x0001, 0xF8EB, 0x000B, 0x2809, 0x000B, 0xF8B4, 0x0015, 0x0801, 0x0005, 0x2005, 0x0001, 0xF950, 0xFFF2, 0x2805, 0x0007, 0xFA0C, 0x0013, 0x0801, 0x0005, 0x200B, 0x0001, 0x0696, 0x0009, 0xF8CA, 0x0013, 0x200B, 0x0001, 0x069E, 0x0005, 0xF8DC, 0x000C, 0x200F, 0x0001, 0x06A1, 0x0003, 0xFA16, 0x000A, 0xF8E3, 0x0007, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
