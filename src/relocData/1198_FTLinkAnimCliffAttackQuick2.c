/* AnimJoint data for relocData file 1198 (FTLinkAnimCliffAttackQuick2) */
/* 3216 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimCliffAttackQuick2_joint1[30];
extern u16 dFTLinkAnimCliffAttackQuick2_joint2[60];
extern u16 dFTLinkAnimCliffAttackQuick2_joint3[60];
extern u16 dFTLinkAnimCliffAttackQuick2_joint5[80];
extern u16 dFTLinkAnimCliffAttackQuick2_joint6[154];
extern u16 dFTLinkAnimCliffAttackQuick2_joint7[50];
extern u16 dFTLinkAnimCliffAttackQuick2_joint10[70];
extern u16 dFTLinkAnimCliffAttackQuick2_joint11[124];
extern u16 dFTLinkAnimCliffAttackQuick2_joint12[56];
extern u16 dFTLinkAnimCliffAttackQuick2_joint13[36];
extern u16 dFTLinkAnimCliffAttackQuick2_joint14[36];
extern u16 dFTLinkAnimCliffAttackQuick2_joint17[38];
extern u16 dFTLinkAnimCliffAttackQuick2_joint18[54];
extern u16 dFTLinkAnimCliffAttackQuick2_joint19[54];
extern u16 dFTLinkAnimCliffAttackQuick2_joint21[54];
extern u16 dFTLinkAnimCliffAttackQuick2_joint22[110];
extern u16 dFTLinkAnimCliffAttackQuick2_joint24[64];
extern u16 dFTLinkAnimCliffAttackQuick2_joint26[106];
extern u16 dFTLinkAnimCliffAttackQuick2_joint27[138];
extern u16 dFTLinkAnimCliffAttackQuick2_joint29[64];
extern u16 dFTLinkAnimCliffAttackQuick2_joint30[110];

/* Joint pointer table (30 entries, 120 bytes) */
AObjEvent32 * dFTLinkAnimCliffAttackQuick2_joints[] = {
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick2_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick2_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick2_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick2_joint17, /* [14] joint 17 */
	NULL, /* [15] NULL */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick2_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick2_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick2_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick2_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick2_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick2_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick2_joint27, /* [26] joint 27 */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick2_joint29, /* [27] joint 29 */
	NULL, /* [28] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffAttackQuick2_joint30, /* [29] joint 30 */
};

/* Joint 1 */
u16 dFTLinkAnimCliffAttackQuick2_joint1[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 20), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 17,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), 0, 1,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 33), 0,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 590,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 480, 512,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 25), 480,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimCliffAttackQuick2_joint2[60] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 374, 952, -401, 590,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 872, 1598, -151, 878,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 974, 448, -72, 1115,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 984, -913, 126, 920,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 745, -433, 157, -511,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 767, -339, -129, -92,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 534, -155, 99, 152,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 534, 0, 99, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 163, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 901, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTLinkAnimCliffAttackQuick2_joint3[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -117, 178, -48, 4, 0, -6,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 5), -61,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 1055, 322, 0, 32,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 3109, 95, 276, 18, 0, 4,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 3412, 25, -10, -23, -55, -4,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 3442, -12, -10, 12, -55, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 3109, 276, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimCliffAttackQuick2_joint5[80] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 513, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 532, 12, 0, 5, 0, 1,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 600, -151, 39, 11, 13, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -225, -158, 58, -102, -210, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -35, 507, -368, -284, 79, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 790, 75, -510, -12, -590, -60,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 790, 0, -510, 0, -590, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -29, 37, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 781, -39, -388, 50, -587, 48,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 259, 166, 56,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimCliffAttackQuick2_joint6[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -16, 0, 7, -21, -694, -113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1432, -467,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -95, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 74, 782,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1562, 785, -1982, -579,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1645, 101, -2591, -434,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2101, 499,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -159, -12, -2852, -293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -120, -79, -3178, -317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2764, 594, -317, -50, -3487, -515,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3290, 521, -222, -384, -4208, -318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3807, 273, -1086, -444, -4125, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -4207, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3837, 29, -1111, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3865, 28, -1128, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 4291, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1069, 27,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4216, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -4181, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4131, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -4458, -134,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4358, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 5075, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1043, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1210, -67,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4592, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -4851, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5105, 30, -1281, -70, -4911, -60,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimCliffAttackQuick2_joint7[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -370, -526,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1053, -367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1106, 325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -403, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -771, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -746, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -698, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -613, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 113,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimCliffAttackQuick2_joint10[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 690, -9, -126, 1, -32, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 590, -68, -109, 13, -316, 10,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 4, -101, 7, 12, 76, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -19, -306, -32, 193, 368, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -608, -53, 393, 38, 566, 18,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -645, 6, 253, -23, 504, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -528, 50, 85, -18, 341, -32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 4, 7, 76,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTLinkAnimCliffAttackQuick2_joint11[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 169, 352, 487, -90, -248, 98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 469, 131,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 722, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -150, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -256, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -269, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 659, 105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 339, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 572, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 336, -102, -313, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 368, 3, -186, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 385, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -217, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -136, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 275, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 236, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 427, 23, -24, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 423, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -6, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -12, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -52, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 231, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 109, 15,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 421, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 415, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, 1, 123, 13, -50, 1,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimCliffAttackQuick2_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1057, 164,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -576, 376,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -139, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -255, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -286, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -486, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -664, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -661, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -467, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -449, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -558, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, -29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimCliffAttackQuick2_joint13[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -261, 49, 311,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -261, 26, 49, -25, 311, -31,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 37, -209, -37, 0, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -209, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 0, -209, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTLinkAnimCliffAttackQuick2_joint14[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 804, 13, -804, 0, 804, -13,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 937, 19, -804, 0, 670, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 937, -804, 670,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 937, -804, 670,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimCliffAttackQuick2_joint17[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1569, 72, -22, -6, -1296, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 2291, 12, -90, -51, -1120, 95,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1697, -84, -536, -63, -339, 111,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1697, -536, -339,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 1697, -536, -339,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimCliffAttackQuick2_joint18[54] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 18, 0, -16, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 184, 29, -163, 46, 0, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 204, 1, 322, 40, 222, 18,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 204, 0, 322, 0, 222, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -11, -27, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, -163, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTLinkAnimCliffAttackQuick2_joint19[54] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 6, 0, -2, 0, 1,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 63, -60, -26, 53, 18, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -421, -40, 374, 33, -301, -26,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -421, 0, 374, 0, -301, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, -31, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimCliffAttackQuick2_joint21[54] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 0, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -26, 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -215, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 113, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 240, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 240, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 13), 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTLinkAnimCliffAttackQuick2_joint22[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1469, -173, -1351, 11, -2422, 332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1694, -2, -1457, -106, -1823, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1646, 16, -1554, -34, -1646, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1279, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1655, 71, -2175, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1518, 44, -2137, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1567, -111, -1736, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1742, -17, -1292, 3, -1727, -91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -1355, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1601, 72, -1919, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1596, -14, -1857, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1632, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1899, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1898, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1557, 42,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1648, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1841, -13,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1520, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1850, -9, -1364, -8, -1499, 20,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimCliffAttackQuick2_joint24[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1030, -143,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 632, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 351, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 551, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 662, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 949, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 841, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 694, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 823, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 912, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 913, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 478, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 406, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 280, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -30,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimCliffAttackQuick2_joint26[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 420, 496, -62, 35, -55, 240,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 334, -87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -146, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1035, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 531, -290,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 487, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 204, -156,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -195, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 438, -143, -232, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -266, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 199, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 303, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 324, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -203, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -35, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 396, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 650, 19,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -261, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -162, 1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 660, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 337, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, -8, -161, 0, -34, 1,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimCliffAttackQuick2_joint27[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -85, 77, 81, 40, -869, 265,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 199, 126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 183, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -81, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -102, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -336, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 338, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 35, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 288, 71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 360, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 101, 30, -409, -202,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -964, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 96, -129, 373, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -158, -123, -73, -217,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -135, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -61, 16, -971, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -65, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -774, 86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -123, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -62, 65,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -34, 77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 274, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 265, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 291, 12, -684, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 273, -5, -141, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 5, 269, -3, -125, 16,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimCliffAttackQuick2_joint29[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 934, -26,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 710, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 412, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 417, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 638, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 756, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 646, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 910, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1090, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1082, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1078, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 871, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 811, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 442, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 30 */
u16 dFTLinkAnimCliffAttackQuick2_joint30[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2846, -128, 150, -27, -42, 223,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 131, -153,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -39, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 2562, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2489, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2783, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -36, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -147, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2806, 26, -77, 7, -52, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2933, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 19, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -276, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -282, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -199, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2933, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 2775, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 17, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -73, -1,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2732, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 2773, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -184, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -73, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2789, 15, -74, -1, -69, 3,
	ftAnimEnd(),
	0x0000, 0x0000,
};
