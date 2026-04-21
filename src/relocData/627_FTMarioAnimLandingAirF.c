/* AnimJoint data for relocData file 627 (FTMarioAnimLandingAirF) */
/* 1712 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimLandingAirF_joint1[22];
extern u16 dFTMarioAnimLandingAirF_joint2[10];
extern u16 dFTMarioAnimLandingAirF_joint4[18];
extern u16 dFTMarioAnimLandingAirF_joint5[74];
extern u16 dFTMarioAnimLandingAirF_joint6[38];
extern u16 dFTMarioAnimLandingAirF_joint7[8];
extern u16 dFTMarioAnimLandingAirF_joint8[8];
extern u16 dFTMarioAnimLandingAirF_joint10[18];
extern u16 dFTMarioAnimLandingAirF_joint11[112];
extern u16 dFTMarioAnimLandingAirF_joint12[48];
extern u16 dFTMarioAnimLandingAirF_joint13[34];
extern u16 dFTMarioAnimLandingAirF_joint15[10];
extern u16 dFTMarioAnimLandingAirF_joint16[76];
extern u16 dFTMarioAnimLandingAirF_joint18[38];
extern u16 dFTMarioAnimLandingAirF_joint20[80];
extern u16 dFTMarioAnimLandingAirF_joint21[86];
extern u16 dFTMarioAnimLandingAirF_joint23[38];
extern u16 dFTMarioAnimLandingAirF_joint24[90];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimLandingAirF_joints[] = {
	(u32)dFTMarioAnimLandingAirF_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimLandingAirF_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimLandingAirF_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimLandingAirF_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimLandingAirF_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimLandingAirF_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimLandingAirF_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimLandingAirF_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimLandingAirF_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimLandingAirF_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimLandingAirF_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimLandingAirF_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimLandingAirF_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimLandingAirF_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimLandingAirF_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimLandingAirF_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimLandingAirF_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimLandingAirF_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimLandingAirF_joint1[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 193, 273,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 30), 223,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 201, 92, -287, -72,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 540, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimLandingAirF_joint2[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -71, -790, -95,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimLandingAirF_joint4[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -689, 51, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1, 29, -212, 6, 190, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 208, 258, 110,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimLandingAirF_joint5[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1356, -8, -355, -3, 1644, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -367, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -1786, -124, 2036, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1897, -102, 2142, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 2666, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -2319, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2635, -307, -348, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -292, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -3277, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3248, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -2870, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2894, -29, 2716, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -3017, -43, 2884, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3053, -35, -305, -12, 2942, 58,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimLandingAirF_joint6[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -343, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -88, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -95, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, -86,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimLandingAirF_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -625, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimLandingAirF_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, -4, 176,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTMarioAnimLandingAirF_joint10[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 260, -168, -263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 205, -16, -44, 10, -242, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -221, 139, -209,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimLandingAirF_joint11[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1191, -51, 526, 43, -1589, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 651, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1476, -403, -1905, -419,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2050, -428, -2491, -433,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2505, -66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2921, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 514, -138,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 327, 62,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2571, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2674, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 428, 44, -3014, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 428, 11, -3014, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 446, -31, -3029, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 303, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -3038, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2632, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -2767, -11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 316, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 547, 7,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3068, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -3144, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2773, -6, 551, 4, -3151, -7,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimLandingAirF_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -380, -74,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -640, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -378, 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -234, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -380, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -812, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimLandingAirF_joint13[34] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -21, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 697,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 7), -279,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), 804,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 12, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 15), 804,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 8), 625,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimLandingAirF_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimLandingAirF_joint16[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -147, 14, -121, -1, -1100, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 199, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -212, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1173, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1222, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -718, 51,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 206, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 279, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -245, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -234, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -663, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 38, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 267, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -129, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, -5, -230, 3, 45, 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimLandingAirF_joint18[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 163, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 424, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 382, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 518, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 505, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 405, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -5,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimLandingAirF_joint20[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 152, -9, 232, -11, 369, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -23, -18, 2, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 295, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 334, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 449, -44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -51, -32, -12, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -351, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -48, 21,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -152, -7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -319, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -215, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -29, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -16, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, 3, -11, 4, -156, -3,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimLandingAirF_joint21[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 44, 4, 82, -2, -741, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 106, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 292, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -738, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -867, -100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -862, 48,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 109, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 46, 45,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -806, 64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -92, 38,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 262, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 200, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 93, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 187, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -57, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 31, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 0, 187, 0, 35, 4,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimLandingAirF_joint23[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 902, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 942, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 448, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimLandingAirF_joint24[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1598, 3, -1540, 3, 1700, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1706, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1568, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1755, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1678, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1642, -42,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1758, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1662, 44,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1594, -22, 1593, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1256, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -1417, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1395, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1509, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1621, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1520, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1286, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1389, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1519, 1, -1514, -5, 1395, 6,
	ftAnimEnd(),
	0x0000, 0x0000,
};
