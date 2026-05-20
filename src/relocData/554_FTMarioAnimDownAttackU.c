/* AnimJoint data for relocData file 554 (FTMarioAnimDownAttackU) */
/* 3408 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimDownAttackU_joint1[166];
extern u16 dFTMarioAnimDownAttackU_joint2[56];
extern u16 dFTMarioAnimDownAttackU_joint4[46];
extern u16 dFTMarioAnimDownAttackU_joint5[92];
extern u16 dFTMarioAnimDownAttackU_joint7[36];
extern u16 dFTMarioAnimDownAttackU_joint8[22];
extern u16 dFTMarioAnimDownAttackU_joint10[16];
extern u16 dFTMarioAnimDownAttackU_joint11[272];
extern u16 dFTMarioAnimDownAttackU_joint12[46];
extern u16 dFTMarioAnimDownAttackU_joint13[58];
extern u16 dFTMarioAnimDownAttackU_joint15[10];
extern u16 dFTMarioAnimDownAttackU_joint16[220];
extern u16 dFTMarioAnimDownAttackU_joint18[64];
extern u16 dFTMarioAnimDownAttackU_joint20[112];
extern u16 dFTMarioAnimDownAttackU_joint21[212];
extern u16 dFTMarioAnimDownAttackU_joint23[70];
extern u16 dFTMarioAnimDownAttackU_joint24[158];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTMarioAnimDownAttackU_joints[] = {
	(AObjEvent32 *)dFTMarioAnimDownAttackU_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimDownAttackU_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimDownAttackU_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTMarioAnimDownAttackU_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTMarioAnimDownAttackU_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTMarioAnimDownAttackU_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTMarioAnimDownAttackU_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTMarioAnimDownAttackU_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTMarioAnimDownAttackU_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimDownAttackU_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimDownAttackU_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTMarioAnimDownAttackU_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTMarioAnimDownAttackU_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTMarioAnimDownAttackU_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTMarioAnimDownAttackU_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTMarioAnimDownAttackU_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTMarioAnimDownAttackU_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimDownAttackU_joint1[166] = {
	ftAnimSetValRate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -513, 5, 5, 5, 245, 34, -8, 12,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -804, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 294, 257, 7, 28,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 7), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 0, 25,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 24), -804,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 4), 29,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 5, -243, 470, 133, 16, 386,
	ftAnimSetValT(FT_ANIM_TRAY, 6), 444,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 6), -244, -337, 442, 146,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 13), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 0, -123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1608, -229,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -34,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -331, -1096, 435, -33, 163, -1350,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -655, -301, 431, -34, -64, -2088,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -406, 1021, 426, -47, -358, -1664,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -145, 1832, 407, 84, -896, 590,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -3216, -241,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 30), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 738, 227, 479, 410, 10, 3485,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -31, -2285, 612, 37, 846, 752,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -804, 30, -4021, 8,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -690, -386, 502, -322, 480, -1106,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -321, 1104, 370, -188, 16, -769,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), 0, -2993,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 567, 385, 315, 0, -26,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 567, 69,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 33, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 540, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimDownAttackU_joint2[56] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 402, 5, -268, -39, 0, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -786, -39, 79, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 89, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -22, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 48, -12, -940, -31, 104, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -87, -4, -944, 61, 105, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, -268, 6, 0, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -71, -790, -95,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimDownAttackU_joint4[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, 82, -457, -55, 156, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 908, 0, -766, 22, -713, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, -57, 0, 44, 0, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -122, 58, 32, 7, 36, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 877, 13, 110, 9, 32, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 208, 258, 110,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimDownAttackU_joint5[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1475, 16, -556, -1, -2159, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -599, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 1748, 52, -2312, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1813, 102, -2351, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2201, 74, -2661, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -585, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -382, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2265, 59, -2684, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -2815, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 3102, 33,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -393, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -301, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2852, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -3486, -5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3135, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 3349, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3350, 1, -300, 1, -3489, -3,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimDownAttackU_joint7[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -369, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -444, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), -201, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -187, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimDownAttackU_joint8[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -134, -35, 0, 10,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 6, 0, 0, 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 43), 201, -4, 176,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTMarioAnimDownAttackU_joint10[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 139, -209,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 43), -221, 139, -209,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimDownAttackU_joint11[272] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -30, -94, 1295, -137, -428, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 656, -269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -124, -51, -456, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -133, -255, -378, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -634, -140, -847, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -414, 227, 404, -235, -665, 191,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -361, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 480, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -109, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -98, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -88, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -338, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -317, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -153, -4, 590, 56, -403, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 98, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 290, 642, 67, 589,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1187, 464, 830, 356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1219, 169, 781, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1525, 230, 1047, 298,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1813, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1657, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, 30, 1722, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 253, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1683, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1940, 32, 1741, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1878, 47, 1676, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2035, -1, 211, -43, 1861, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 116, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1756, -87, 1610, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1699, -67, 1448, -251,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 285, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1620, -14, 112, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 65, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1671, 696,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3014, 739,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3151, 95, 17, -201,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 38, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 3557, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 259, 163,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 325, -22,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 67, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 195, 88,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 305, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 305, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3582, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 3824, -78,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 333, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 145, -93, 345, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 133, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 147, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 518, 68,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3722, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3660, -62, 551, 33, 65, -67,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimDownAttackU_joint12[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -55, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 33), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -591, -416,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -833, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -847, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 36,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimDownAttackU_joint13[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, -1072, 714,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 17, 0, 67, -178, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 25, -16, 73, 0, -240, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -267, -51, -5, -9, -173, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -382, 81, 0, 28, -164, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 380, 74, 225, 1, 0, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 959, 13, 28, -12, -19, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 625, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimDownAttackU_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimDownAttackU_joint16[220] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 381, 1, -90, 90, -397, -80,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 339, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -922, -52,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 18), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 91, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -21, -94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -428, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 325, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -35, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -982, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1209, -72,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -449, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 202, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -53, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 202, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1298, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1291, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1176, 389,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -19, -139, -511, 417,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 6144, 6144, 6144,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -104, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 176, -19, -342, 108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -268, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 110, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, -1365, 4096, -1365, 4096, -1365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -110, -7, 4096, 2048, 4096, 2048, 4096, 2048,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -260, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -152, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 6144, 6144, 6144,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -202, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 21), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 104, 38, -181, -91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 294, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -385, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -483, -66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -284, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -148, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -232, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 287, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -129, -10,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -242, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 38, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, -5, -230, 2, 45, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTMarioAnimDownAttackU_joint18[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 294, 125,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 682, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 660, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 794, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 744, -397,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, 337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 675, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 933, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 907, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 413, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimDownAttackU_joint20[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -132, 29, -207, 8, 575, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 10, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 71, 139, 253, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 207, 103, 100, -129,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -82, -44, 361, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -72, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 226, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 272, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 316, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 113, -207, -121, -33, 400, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -168, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 34), -154, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -176, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -147, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -194, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -202, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -555, -22,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -158, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -12, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -570, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -220, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -214, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, 2, -11, 1, -156, -1,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimDownAttackU_joint21[212] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 38, 114, 659, 16, -1076, 125,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 337, -85,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 18), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 495, -67, -445, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 400, -122, -467, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 128, -13, -545, 143,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 234, -108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -21, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 123, -6, -333, 258,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -32, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 771, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 761, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 721, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -7, -29, 406, -377,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 6144, 6144, 6144,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -234, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 36, 35, -32, -275,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 109, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -145, -63,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, -1365, 4096, -1365, 4096, -1365,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -165, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -258, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -251, 7,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 2048, 4096, 2048, 4096, 2048,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 6144, 6144, 6144,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -159, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -202, -108,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 124, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 13, 11,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 21), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -322, -80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -290, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 29, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 189, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -241, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 195, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -266, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 29, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 5, 187, -2, 35, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTMarioAnimDownAttackU_joint23[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 570, -13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 588, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 623, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1137, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1021, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 321, -381,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -157,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 608, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 787, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 907, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 864, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 451, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimDownAttackU_joint24[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -52, 12, -54, 3, -101, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 305, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 9, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -13, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -81, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -280, -331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -744, -342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -965, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -748, 337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -290, 319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -109, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -260, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -325, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -233, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 323, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 422, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 30, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 12, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -214, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 15, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 460, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 294, 58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 22, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 97, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 425, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 186, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 163, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -217, -2,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 7, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -19, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 97, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 103, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 104, 0, -20, 0, -218, -1,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
