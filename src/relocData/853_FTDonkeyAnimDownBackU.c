/* AnimJoint data for relocData file 853 (FTDonkeyAnimDownBackU) */
/* 2720 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimDownBackU_joint1[20];
extern u16 dFTDonkeyAnimDownBackU_joint2[56];
extern u16 dFTDonkeyAnimDownBackU_joint3[28];
extern u16 dFTDonkeyAnimDownBackU_joint5[38];
extern u16 dFTDonkeyAnimDownBackU_joint6[220];
extern u16 dFTDonkeyAnimDownBackU_joint7[84];
extern u16 dFTDonkeyAnimDownBackU_joint8[10];
extern u16 dFTDonkeyAnimDownBackU_joint9[40];
extern u16 dFTDonkeyAnimDownBackU_joint11[14];
extern u16 dFTDonkeyAnimDownBackU_joint12[144];
extern u16 dFTDonkeyAnimDownBackU_joint13[72];
extern u16 dFTDonkeyAnimDownBackU_joint14[30];
extern u16 dFTDonkeyAnimDownBackU_joint15[8];
extern u16 dFTDonkeyAnimDownBackU_joint17[20];
extern u16 dFTDonkeyAnimDownBackU_joint18[116];
extern u16 dFTDonkeyAnimDownBackU_joint20[48];
extern u16 dFTDonkeyAnimDownBackU_joint22[104];
extern u16 dFTDonkeyAnimDownBackU_joint23[118];
extern u16 dFTDonkeyAnimDownBackU_joint25[48];
extern u16 dFTDonkeyAnimDownBackU_joint26[90];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimDownBackU_joints[] = {
	(u32)dFTDonkeyAnimDownBackU_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimDownBackU_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimDownBackU_joint3, /* [2] joint 3 */
	(u32)dFTDonkeyAnimDownBackU_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTDonkeyAnimDownBackU_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimDownBackU_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimDownBackU_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimDownBackU_joint9, /* [8] joint 9 */
	(u32)dFTDonkeyAnimDownBackU_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTDonkeyAnimDownBackU_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimDownBackU_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimDownBackU_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimDownBackU_joint15, /* [14] joint 15 */
	(u32)dFTDonkeyAnimDownBackU_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTDonkeyAnimDownBackU_joint18, /* [17] joint 18 */
	(u32)dFTDonkeyAnimDownBackU_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTDonkeyAnimDownBackU_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTDonkeyAnimDownBackU_joint23, /* [22] joint 23 */
	(u32)dFTDonkeyAnimDownBackU_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTDonkeyAnimDownBackU_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTDonkeyAnimDownBackU_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), -120, -288,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), -360, -1632,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 15), -4200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 11), -4200,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimDownBackU_joint2[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, -80, 14, 384, -19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 420, 364,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 15), 14, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -3216, -67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 840, 960,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 1620,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), 14, -16, -19, -145,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 840, -734,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 701, 95,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -3216, 0, -29, 1031, -400,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTDonkeyAnimDownBackU_joint3[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -214, -154,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -265, -41, -16, -214, -154,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimDownBackU_joint5[38] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 53, -80, 156, 0, 319, -157,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 268, 32,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 0, 319, -157,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 536, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 536, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 750, 24, 41,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimDownBackU_joint6[220] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 231, -538, -83, -1649, -190,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -675, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 856, 491, -1839, -448,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1609, 614, -2545, -573,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3102, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2451, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -548, 126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -171, 152,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3102, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -29, 4, -2984, 267,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -385, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2779, 280, -2567, 233,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3211, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2517, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -383, -132, -2712, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3076, -462, -650, -155, -2504, 425,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2286, -260, -693, -60, -1862, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -993, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2556, -123, -2418, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2039, -219, -2132, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2116, -44, -1200, -103, -2367, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1832, -91, -1230, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2286, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2368, -102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1767, -45, -1265, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1524, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1713, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2490, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2330, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2254, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2274, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, -6, -2453, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1501, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2245, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2141, 96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1907, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1680, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1556, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1496, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1524, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1933, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2035, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1545, -10, -1523, 0, -2082, -46,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimDownBackU_joint7[84] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -816, -43,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -902, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -851, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -945, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -875, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -758, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -987, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -973, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -735, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -854, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -945, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -668, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -454, 330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -369, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -737, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -822, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -577, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -499, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 91,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimDownBackU_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 702, 15, 17,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTDonkeyAnimDownBackU_joint9[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, -268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1354, 213,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 723, 10,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 25), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 20), 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 53, -21,
	ftAnimBlock(0, 15),
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -67, -44,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 174,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimDownBackU_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), -398, 70, 29,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimDownBackU_joint12[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -474, 13, -56, 66, -127, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -191, 199, 209, 22, 236, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, 143, 184, -1, 338, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -79, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 382, 44, 450, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 422, 161, 468, 115,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 942, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 59, -176, 681, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -431, -155, 50, -372,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -250, -143, 894, -138, -63, -410,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 447, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -717, -201, -769, -397,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -354, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -654, 155,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 17, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 482, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 137, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -166, 164,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 73, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 124, 91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 59, -24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 134, -1, 41, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 169, 3, -468, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 36, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -107, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, -8, 172, 2, -479, -10,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimDownBackU_joint13[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -569, -76,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -763, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -668, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -706, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -713, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1106, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1114, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -985, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -746, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -864, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -962, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1049, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -952, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -469, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -457, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -421, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimDownBackU_joint14[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 702, 18, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 573, 28, 104, 2, 283, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 671, -15, 57, -3, 155, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 98, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTDonkeyAnimDownBackU_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimDownBackU_joint17[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 1046, 573,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -404, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -952,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -404,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTDonkeyAnimDownBackU_joint18[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -84, 137, -660, 50, -730, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 171, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -389, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -699, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -464, 238,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -101, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 98, -60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 164, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -370, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -178, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -155, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -688, -56,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 171, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -43, -47,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -163, 5, -733, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -282, 99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -352, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -91, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -52, -6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -191, 80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -323, -14,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -363, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -377, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, -8, -392, -15, -329, -6,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimDownBackU_joint20[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 923, 42,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1034, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1007, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1286, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1309, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 952, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 825, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 934, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 947, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1029, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimDownBackU_joint22[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 199, 0, -41, 15, 243, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 131, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -177, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 158, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 178, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -135, -21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 132, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -53, -52,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -240, -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -641, -23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -155, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -175, -55,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -104, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -38, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -224, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -123, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -655, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -378, 16,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -34, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 0, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, 9, 14, 14, -369, 9,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimDownBackU_joint23[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 585, -59, 373, 36, -217, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 401, -45, -277, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 311, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 71, -169,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -98, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 359, -22, -165, 88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -317, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 193, -29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -118, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 64, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -373, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -615, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 164, -3, -683, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 214, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -405, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -349, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -123, -40,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 208, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 207, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 68, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 93, 14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -168, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -292, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 104, 11, 217, 9, -295, -3,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimDownBackU_joint25[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1083, 33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1059, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1007, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1230, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1260, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 960, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 911, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1020, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1010, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 999, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTDonkeyAnimDownBackU_joint26[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -191, -7, -12, -18, 29, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -31, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -134, 25, 36, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -106, 28, -20, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -510, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 130, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 18, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 83, -6,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -533, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -448, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 75, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 98, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 69, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 17, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -417, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 115, -13, -395, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, -9, 103, -11, -387, 8,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
