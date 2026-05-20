/* AnimJoint data for relocData file 647 (FTFoxAnimDash) */
/* 2448 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDash_joint1[20];
extern u16 dFTFoxAnimDash_joint2[30];
extern u16 dFTFoxAnimDash_joint4[36];
extern u16 dFTFoxAnimDash_joint5[122];
extern u16 dFTFoxAnimDash_joint6[58];
extern u16 dFTFoxAnimDash_joint7[10];
extern u16 dFTFoxAnimDash_joint8[70];
extern u16 dFTFoxAnimDash_joint10[10];
extern u16 dFTFoxAnimDash_joint11[106];
extern u16 dFTFoxAnimDash_joint12[56];
extern u16 dFTFoxAnimDash_joint13[18];
extern u16 dFTFoxAnimDash_joint15[10];
extern u16 dFTFoxAnimDash_joint16[104];
extern u16 dFTFoxAnimDash_joint18[48];
extern u16 dFTFoxAnimDash_joint20[104];
extern u16 dFTFoxAnimDash_joint21[104];
extern u16 dFTFoxAnimDash_joint23[56];
extern u16 dFTFoxAnimDash_joint24[114];
extern u16 dFTFoxAnimDash_joint25[54];
extern u16 dFTFoxAnimDash_joint26[42];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimDash_joints[] = {
	(AObjEvent32 *)dFTFoxAnimDash_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimDash_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimDash_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimDash_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimDash_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimDash_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimDash_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimDash_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimDash_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimDash_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimDash_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimDash_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimDash_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimDash_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimDash_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimDash_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimDash_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimDash_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimDash_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimDash_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimDash_joint1[20] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, 912, -20,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 780, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 0, 780, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 48, 912, -20,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimDash_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, -338, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 357, 45,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -268, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 357, -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimDash_joint4[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 320, 201, -181,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 320, 201, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 309, -7, 211, -3, -170, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 260, 0, 171, -10, -100, 50,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 309, 156, 81,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimDash_joint5[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -109, -266, -165, 119, 258, 557,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -376, -85, -46, -59, 816, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -281, 53, -284, -119, 398, -228,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -286, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -270, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 360, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 334, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 378, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -284, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -282, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -276, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -417, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -284, 52, 398, 105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 179, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 710, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 817, 102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1042, -129,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -428, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -386, 138,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 120, -127,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -186, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 833, -302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -183, 138, 438, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, 73, -165, 20, 258, -179,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimDash_joint6[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -251,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -809, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -303, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -478, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1052, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1091, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1022, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -747, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 188,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimDash_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 22),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimDash_joint8[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 136, -72,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -332, -211, 85, -68, -81, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -536, -20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -536, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -268, 44, 22, 13, -2, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -223, 44, 93, 70, -14, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -178, 22, 162, 25, -8, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -155, 21, 169, -8, -41, -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, 136, -72,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimDash_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 22),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimDash_joint11[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 132, 289, 271, -192, 336, 502,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 422, 84, 79, -5, 839, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 302, -61, 261, 92, 440, -204,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 243, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 311, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 441, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 451, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 539, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 243, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 198, -44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 307, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 235, -39,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 172, -16, 579, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 445, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 244, 28,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 202, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 139, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 426, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 358, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, -7, 271, 27, 336, -21,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimDash_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, -370,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -964, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -73, 478,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -7, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -73, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -445, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -552, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -757, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -639, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimDash_joint13[18] = {
	ftAnimSetVal(FT_ANIM_ROTX), 0,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 272, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 446,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 9), 446,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 11), 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimDash_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 22),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimDash_joint16[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -405, 213, -223, -83, -26, -482,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -952, -225,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -56, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -306, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -214, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -203, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -960, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -933, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -69, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 25, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -204, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -281, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -952, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -890, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 43, -17, -808, 162,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -312, 180,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -353, -91,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -250, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -260, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -206, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -84, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -51, -223, 37, -26, 57,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimDash_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, 371,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 725, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 107, -362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 107, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 244, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 722, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 781, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 470, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -116,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimDash_joint20[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1655, -54, -1734, 60, -1664, -152,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1479, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1600, 11, -1816, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1679, 31, -1540, 174,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1454, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1662, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1464, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1550, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1452, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1593, -41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1668, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1532, -77,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1622, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1798, -69,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1455, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1618, 63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1556, -45, -1843, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1711, -46, -1725, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1655, 37, -1734, -22, -1664, 61,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimDash_joint21[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 355, -278, 137, -54, 134, -424,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -161, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 83, 43, -289, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 225, 91, 159, 295,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 277, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 271, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -107, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -152, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 272, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 154, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 268, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 167, -31,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -141, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 73, 175,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 148, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 98, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -52, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 94, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 273, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 341, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 14, 137, -29, 134, 40,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimDash_joint23[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, 409,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 741, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 305, -370,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 92, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 232, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 696, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 771, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 824, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 695, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 449, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -117,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimDash_joint24[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, 0, -102, 285, -226, -248,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -64, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 183, 103, -475, 271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 104, -55, 316, 481,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 495, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 43, -37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -46, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -170, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 501, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 362, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 316, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 89, -43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 5, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -6, 86,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -202, -54, 43, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -280, 173, 141, -18, -323, -255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 144, 203, -43, -109, -467, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 57, -54, -300, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -78, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -96, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, -41, -102, -5, -226, 74,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimDash_joint25[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 219, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 85, -73, 232, 8,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 11), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -442, -52, 268, 3, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -442, 31, 268, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 11), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -90, 242,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 40, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 0, 219,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTFoxAnimDash_joint26[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -178, -122,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -20, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -178, -51, 53, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -178, 29, 53, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -87, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 205,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -178, -122,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
