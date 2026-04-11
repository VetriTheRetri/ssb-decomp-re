/* AnimJoint data for relocData file 1938 (FTYoshiAnimAttackAirD) */
/* 4848 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimAttackAirD_joint1[22];
extern u16 dFTYoshiAnimAttackAirD_joint2[84];
extern u16 dFTYoshiAnimAttackAirD_joint3[48];
extern u16 dFTYoshiAnimAttackAirD_joint4[68];
extern u16 dFTYoshiAnimAttackAirD_joint6[16];
extern u16 dFTYoshiAnimAttackAirD_joint7[154];
extern u16 dFTYoshiAnimAttackAirD_joint8[64];
extern u16 dFTYoshiAnimAttackAirD_joint10[8];
extern u16 dFTYoshiAnimAttackAirD_joint11[196];
extern u16 dFTYoshiAnimAttackAirD_joint12[72];
extern u16 dFTYoshiAnimAttackAirD_joint13[8];
extern u16 dFTYoshiAnimAttackAirD_joint14[10];
extern u16 dFTYoshiAnimAttackAirD_joint15[16];
extern u16 dFTYoshiAnimAttackAirD_joint17[16];
extern u16 dFTYoshiAnimAttackAirD_joint18[336];
extern u16 dFTYoshiAnimAttackAirD_joint20[184];
extern u16 dFTYoshiAnimAttackAirD_joint22[282];
extern u16 dFTYoshiAnimAttackAirD_joint23[354];
extern u16 dFTYoshiAnimAttackAirD_joint25[434];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimAttackAirD_joints[] = {
	(u32)dFTYoshiAnimAttackAirD_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimAttackAirD_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimAttackAirD_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimAttackAirD_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimAttackAirD_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimAttackAirD_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimAttackAirD_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimAttackAirD_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimAttackAirD_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimAttackAirD_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimAttackAirD_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimAttackAirD_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimAttackAirD_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimAttackAirD_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimAttackAirD_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimAttackAirD_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimAttackAirD_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimAttackAirD_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimAttackAirD_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF0432, /* [25] END */
};

/* Joint 1 */
u16 dFTYoshiAnimAttackAirD_joint1[22] = {
	ftAnimSetValRate(FT_ANIM_TRAY), 608, -55,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 601, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 26), 601, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 20), 608,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimAttackAirD_joint2[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, 1, 0, 23, 0, -27, 0, -13, 214, 340, 1, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -700, 134, -588, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 441, -2, 792, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -357, 25, 0, 0, 0, 21, 0, 0, 214, -283, 1, -44,
	ftAnimSetValRateT(FT_ANIM_TRAY, 26), 214, -77,
	ftAnimSetValT(FT_ANIM_ROTZ, 27), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 27), 0, -11, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 26), 0, 1,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 2), 198,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 20), 0, 1,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 19), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -893, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 18), 0, 214,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimAttackAirD_joint3[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 1161, 37,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 16, 67, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 853, -290, 0, 57, 0, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -30, 228, 8, -161, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), 0, 19, 228, -6, -161, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 631, 61, 26, -12, -158, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 1161, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimAttackAirD_joint4[68] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 562, 12, 0, 19, 0, -3,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 329,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 35, 11, 549, -16, 414, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 110, 54, 408, 132, -37, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 781, 41, 531, 5, 425, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 1016, -9, 531, -18, 425, -11, 35, -6, 549, 8, 414, -14,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), 0, 600, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 471, -18, -86, -21, 22, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 562, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimAttackAirD_joint6[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 0, 87,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 348,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 46), 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimAttackAirD_joint7[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1156, 261, -1428, 12, -224, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -238, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1203, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -894, 382,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -390, 432,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -28, 445, -261, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 499, 330, -1116, 26, -566, -213,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 733, 94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1169, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -688, -100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1171, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 822, 84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 1184, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1168, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), -1183, 32,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1166, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -1058, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1166, -42, -1048, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 459, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -727, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -556, 236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 178, -157, -1155, -24, -254, 156,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 119, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1357, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -244, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -232, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 102, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 57, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1379, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1431, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 56, 0, -1432, 0, -232, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimAttackAirD_joint8[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -321, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -483, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -638, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -632, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -792, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -796, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -414, 328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimAttackAirD_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -625,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimAttackAirD_joint11[196] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1140, 229, 1417, -5, -224, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1312, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1700, 532, -168, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2436, 673, 36, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3047, 390, 1017, -196, -197, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1031, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3218, 363, 12, 395,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3774, 460, 592, 478,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4139, 236, 969, 244,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 4307, 11, 1140, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1054, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 919, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4312, 0, 1145, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 4139, -121, 969, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3979, -222, 804, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 3218, -130, 12, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3131, -65, 950, 29, -85, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1018, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), 3047, -88, -197, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2928, -166, -316, -158,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2411, -15, -761, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1026, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1393, 130,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2466, 120, -752, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -588, 253,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3187, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1482, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1359, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1340, 10, -258, 173,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -235, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1418, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3224, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3253, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -235, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -233, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3254, 1, 1420, 1, -232, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimAttackAirD_joint12[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -109, -440,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -881, -384,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -877, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -718, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -742, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -829, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -831, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1123, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1189, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1069, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -563, 530,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimAttackAirD_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -625,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimAttackAirD_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -670, 1608, 0, 0, 156, 0,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimAttackAirD_joint15[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 536, -14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 215, -240,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 43), 536,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimAttackAirD_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 89, -24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 48, -264,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 13), -717,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 37), 89,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimAttackAirD_joint18[336] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1540, -105, 1727, -52, -1333, 543,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1598, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1609, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -790, 296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -740, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -671, -16,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 511, 511, 511,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 5120, 55, 5120, 55, 5120, 55,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 36), 5120, -55, 5120, -55, 5120, -55,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1600, 55, -714, -514,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1626, 5, 1710, 20, -1700, -745,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1666, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1641, -80, -2205, -503,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1504, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2706, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2755, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1540, -20, -2620, 76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1401, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2601, 175,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1758, 638,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1553, 77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1601, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1833, -11, -992, 501,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1575, 40, -671, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1608, -31, -721, -469,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1666, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1726, 27, -1610, -573,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1494, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1869, -448,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2507, -453,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2776, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1537, -15, -2632, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1400, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2609, 178,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1764, 639,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1554, 78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1602, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1833, -11, -995, 502,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1575, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -758, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -668, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1607, -34, -718, -447,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1542, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1739, 34, -1563, -541,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1498, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1801, -467,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2497, -493,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2788, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1544, 6, -2608, 97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1565, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2593, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1581, -31, -2395, 234,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1581, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1595, 10, -2123, 135,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1564, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2125, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -1867, 216, 4096, -204, 4096, -204, 4096, -204,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1691, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1426, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1437, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1369, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1609, -6, 1616, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1592, 46, 1748, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1540, 52, 1727, -21, -1333, 36,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimAttackAirD_joint20[184] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 687, -681,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 544,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1094, 624,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1248, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1285, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1029, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 710, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 870, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 832, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 368, -416,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 499,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1005, 532,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1071, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1305, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1110, -288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 728, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 881, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 839, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -416,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 488,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 976, 524,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1054, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1333, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1119, -320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 691, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 849, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 826, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 660, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 839, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 680, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 509, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 613, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 647, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 692, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimAttackAirD_joint22[282] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1433, -122, 119, 5, -316, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1600, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -83, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -34, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 79, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -273, -283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1674, -11, -487, -104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 39, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1647, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1669, 4, -170, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1661, 77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 71, 112,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -11, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -219, 121,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1548, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1699, -8, 151, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -87, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1565, 80, -3, 149,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1693, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 79, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -377, -340,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -364, 253,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1636, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1656, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -176, -51, -79, 202,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -95, -117,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 71, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1609, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1683, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1553, -1, -246, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1686, -6, 151, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -87, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1565, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1703, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 79, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -377, -340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -601, -104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 39, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1647, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1626, 44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -176, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -74, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1562, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1636, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -11, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -230, 58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 71, 91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 26, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1581, 54, -130, 100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -65, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1513, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1610, -79, 33, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1645, 118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 173, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -114, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -277, -41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1435, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1412, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1433, -20, 119, -53, -316, -39,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimAttackAirD_joint23[354] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1574, -98, 1457, -84, -1322, -421,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1337, -38,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2802, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1372, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1538, 173,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1724, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1399, 70,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 511, 511, 511,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1553, 105,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 5120, 55, 5120, 55, 5120, 55,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 36), 5120, -55, 5120, -55, 5120, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1656, -68, -2708, 127,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2374, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1545, 86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1713, 86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1770, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2427, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2068, 770,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1934, 0, 1664, 41, -885, 670,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1685, -6, 1616, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -671, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1756, 2, 1618, -49, -740, -426,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1570, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1517, -31, -1524, -640,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1554, 37, -2020, -499,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1470, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2524, -338,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2395, 85,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1798, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1779, 39, 1379, -60, -2412, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1878, 49, 1350, 113, -1994, 711,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1818, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1606, 140, -988, 635,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1615, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -724, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -671, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1858, -54, 1616, -49, -730, -331,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1618, -87, 1516, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1333, -523,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1778, -562,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1534, -43, 1582, 59, -2458, -483,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1537, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1598, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2745, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2573, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1667, 82, -2405, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1745, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2446, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2089, 781,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1680, 24, 1667, 15, -882, 680,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1615, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1795, 37, -727, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1755, -18, -671, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1671, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1615, -67, -732, -317,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1360, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1307, -525,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1782, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1625, -22, 1430, 62, -1805, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 1569, 6, 1462, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -1653, 84, 4096, -204, 4096, -204, 4096, -204,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1637, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1333, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1574, 4, 1457, -4, -1322, 10,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimAttackAirD_joint25[434] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 670, 368,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1281, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1297, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 954, -288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 629, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 470, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 927, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 940, -460,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -467,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 825, 544,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1094, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1216, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 533, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 951, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 961, -374,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 203, -480,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 646, 510,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1020, 326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1299, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1109, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 513, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 939, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, -469,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 607, 499,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1016, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 836, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 843, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 828, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 680, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 670, -9,
	ftAnimEnd(),
	0x200E, 0xFF64, 0x01F0, 0xFA59, 0xFFFA, 0xF877, 0x0009, 0x2805, 0x0005, 0xFA13, 0xFFDC, 0x2809, 0x0006, 0xF918, 0x0028, 0x2003, 0x0001, 0x0154, 0x00CA, 0x2003, 0x0001, 0x00F8, 0xFFCB, 0x2803, 0x0004, 0x0086, 0xFF7C, 0x0801, 0x0003, 0x2005, 0x0001, 0xF9E5, 0x0001, 0x2805, 0x0005, 0xFA49, 0x001D, 0x200B, 0x0001, 0xFFD3, 0xFF90, 0xF92D, 0xFFA6, 0x200B, 0x0001, 0xFFA7, 0xFFE6, 0xF862, 0xFF75, 0x200B, 0x0001, 0xFF9E, 0x00CA, 0xF816, 0xFFEF, 0x2809, 0x0002, 0xF8E0, 0x00B6, 0x2003, 0x0001, 0x013B, 0x0052, 0x2003, 0x0001, 0x0042, 0xFF5B, 0x2803, 0x0003, 0x0068, 0xFFE5, 0x200D, 0x0001, 0xFA5B, 0xFFE9, 0xF9AC, 0xFFE6, 0x2805, 0x0004, 0xF9D6, 0xFFFF, 0x2009, 0x0001, 0xF8AB, 0xFF31, 0x2009, 0x0001, 0xF80D, 0xFF9D, 0x2809, 0x0003, 0xF826, 0x0096, 0x2003, 0x0001, 0x0014, 0xFFE5, 0x2803, 0x0003, 0x005C, 0xFF6B, 0x0801, 0x0001, 0x2005, 0x0001, 0xF9D6, 0x0007, 0x2805, 0x0004, 0xFA10, 0x0005, 0x2009, 0x0001, 0xF918, 0x0083, 0x2809, 0x0003, 0xF816, 0xFFEF, 0x2003, 0x0001, 0xFF57, 0xFF89, 0x2003, 0x0002, 0xFFDC, 0x00CA, 0x200F, 0x0001, 0x0101, 0x003C, 0xFA1F, 0x001C, 0xF83E, 0x0065, 0x2805, 0x0003, 0xFA19, 0xFFC7, 0x200B, 0x0001, 0x0053, 0xFF87, 0xF8E0, 0x00B6, 0x200B, 0x0001, 0x000E, 0x0015, 0xF9AC, 0xFFE6, 0x2803, 0x0002, 0x0097, 0xFFEB, 0x2009, 0x0001, 0xF8AB, 0xFF31, 0x200D, 0x0001, 0xF9E8, 0xFFE1, 0xF80D, 0xFF9D, 0x2809, 0x0003, 0xF826, 0x0096, 0x2805, 0x0007, 0xFA10, 0x0005, 0x2003, 0x0001, 0x0052, 0xFFD9, 0x2803, 0x0003, 0x009D, 0xFFBF, 0x0801, 0x0002, 0x2009, 0x0001, 0xF918, 0x0083, 0x2809, 0x0003, 0xF816, 0xFFEF, 0x2003, 0x0001, 0x000F, 0xFF92, 0x2003, 0x0002, 0xFF90, 0x001D, 0x200F, 0x0001, 0xFFFD, 0x005F, 0xFA1F, 0x001C, 0xF83E, 0x0065, 0x2805, 0x0003, 0xFA16, 0xFFC5, 0x200B, 0x0001, 0x004D, 0x0001, 0xF8E0, 0x00B6, 0x200B, 0x0001, 0x0000, 0xFFFF, 0xF9AC, 0xFFE5, 0x2803, 0x0002, 0x00E8, 0x004C, 0x2009, 0x0001, 0xF8AA, 0xFF2F, 0x200D, 0x0001, 0xF9E3, 0xFFE3, 0xF809, 0xFF9E, 0x2809, 0x0004, 0xF7F3, 0x000A, 0x2805, 0x000B, 0xFA55, 0x0007, 0x2003, 0x0001, 0x00E3, 0xFFE1, 0x2803, 0x000A, 0xFF6E, 0xFFEA, 0x0801, 0x0003, 0x2009, 0x0001, 0xF7FF, 0x000D, 0x2009, 0x0006, 0xF871, 0x000A, 0x200F, 0x0001, 0xFF64, 0xFFF7, 0xFA59, 0x0004, 0xF877, 0x0006, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
