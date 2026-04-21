/* AnimJoint data for relocData file 621 (FTMarioAnimDSmash) */
/* 3776 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimDSmash_joint1[136];
extern u16 dFTMarioAnimDSmash_joint2[80];
extern u16 dFTMarioAnimDSmash_joint4[62];
extern u16 dFTMarioAnimDSmash_joint5[244];
extern u16 dFTMarioAnimDSmash_joint6[26];
extern u16 dFTMarioAnimDSmash_joint7[16];
extern u16 dFTMarioAnimDSmash_joint8[10];
extern u16 dFTMarioAnimDSmash_joint10[22];
extern u16 dFTMarioAnimDSmash_joint11[274];
extern u16 dFTMarioAnimDSmash_joint12[68];
extern u16 dFTMarioAnimDSmash_joint13[26];
extern u16 dFTMarioAnimDSmash_joint15[10];
extern u16 dFTMarioAnimDSmash_joint16[148];
extern u16 dFTMarioAnimDSmash_joint18[140];
extern u16 dFTMarioAnimDSmash_joint20[148];
extern u16 dFTMarioAnimDSmash_joint21[154];
extern u16 dFTMarioAnimDSmash_joint23[132];
extern u16 dFTMarioAnimDSmash_joint24[144];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimDSmash_joints[] = {
	(u32)dFTMarioAnimDSmash_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimDSmash_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimDSmash_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimDSmash_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimDSmash_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimDSmash_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimDSmash_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimDSmash_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimDSmash_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimDSmash_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimDSmash_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimDSmash_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimDSmash_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimDSmash_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimDSmash_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimDSmash_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimDSmash_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimDSmash_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimDSmash_joint1[136] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 540,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, -493,
	ftAnimSetValBlock(FT_ANIM_ROTY), 223,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 10), 471,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), -344, 37, 563, -101,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 12), 0,
	ftAnimSetValT(FT_ANIM_ROTY, 19), -2747,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateT(FT_ANIM_TRAX, 6), 74, 26,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 14), -300, 7,
	ftAnimSetValRateT(FT_ANIM_TRAY, 27), 540, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 0, 25, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_TRAX, 6), 102, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 175, 27, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 276, 11, 0, -20,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 3), -3216,
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 5), 82, -35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 13), 0, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 303, -27, -221, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 18), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 3), -388,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 0, -25, 0, 18,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 7), -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 540, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 5), 223,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 540, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 3), 223,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimDSmash_joint2[80] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, -790, -95,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 4, 0, 121, 235, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -41, 38, 489, 108,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 383, 4, 0, -5, 1320, 181,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 0, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 3216, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 0, -3, 0, -39,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlock(FT_ANIM_ROTZ), 0, -30707,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -95, -4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -71, -4, -790, -52,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -71, -790, -95,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -71, -790, -95,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimDSmash_joint4[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 258, 110,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 544, 27, 0, -21, 0, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 544, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 677, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 544, -3, 0, 12, 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 613, -22, 258, 17, 110, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 208, -50,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 258, 110,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 208, 258, 110,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimDSmash_joint5[244] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3083, 554, -300, -149, 2944, -398,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2221, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2529, 530, -449, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2022, 146, -363, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -522, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2235, -268, 2349, 178,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 3309, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2558, -349,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3183, -163,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -452, 81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -232, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3260, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3512, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3340, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 3977, -32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -353, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3719, -123, -386, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3799, -314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -225, 86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -464, -361,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3921, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4323, -132, -938, -425, 4384, 92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1847, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4063, 310, 4106, -204,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3702, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3701, 453,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3157, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3197, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3443, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1776, 98, 3629, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 3635, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1654, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3456, -16, -1654, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3654, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1569, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1325, 261, 3674, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3873, -369, -1046, 129, 3907, 415,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4393, -289, -1067, -23, 4504, 332,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1352, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4452, -49, 4573, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -4773, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4605, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 4650, -8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4797, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -4654, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1335, 9, 4622, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1339, 20, 4467, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4692, -37, -1308, 31, 4553, 85,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimDSmash_joint6[26] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, 182,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 86,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 41), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, -182,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimDSmash_joint7[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 37), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -625,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimDSmash_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 201, -4, 176, 0, 288, 0,
	ftAnimBlock(0, 45),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimDSmash_joint10[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -221,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 139, -209, 0, 54, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -221, -54,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -648,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 21), -221,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimDSmash_joint11[274] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 443, -503, 551, -358, 65, -548,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -802, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -59, -348, 193, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -252, -66, 259, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -105, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 136, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -750, 78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -435, 86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -62, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -6, 213,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 265, 114, -364, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 384, 440, 365, -4, 95, 387,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1210, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 256, -104, 411, 200,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 132, 31, 526, 43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1328, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1258, -130, 219, 4, 583, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -71, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -163, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1068, -735,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -211, -597,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -127, 106,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 118, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 85, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 384, 103, -169, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -341, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 293, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 328, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 15, -171,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -447, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -690, -311,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1071, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -485, -30, 216, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -493, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -34, -208,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1072, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1037, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -459, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -33, 510,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 560, 281, -252, -184,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -309, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 529, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 466, -67, -988, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -24, -39, -610, 44,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -262, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 291, 243,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -62, 44, -568, 183,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 51, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 64, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 430, 158, 558, 129,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 551, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 380, -8, 5, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 413, 31, 37, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 443, 30, 551, 0, 65, 28,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimDSmash_joint12[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 519,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -551, -402,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -805, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -459, 348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 229,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -607, -391,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -791, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -798, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -12,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimDSmash_joint13[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 23), 759, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 752, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 37, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 625, 36,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 625,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimDSmash_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 45),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimDSmash_joint16[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -135, 208, -230, -22, 45, -312,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 320, 143, -462, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -253, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -91, 96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -183, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 360, 34, -450, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 346, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -258, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -250, -8, -175, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -172, -62, -299, 135,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 338, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 154, -110, -325, -74, 19, 169,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 73, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -300, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 117, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -244, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 115, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 524, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -286, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -137, -6,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -240, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -135, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -142, -4, 489, -34,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 12), -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 413, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 245, -126,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 45, 0,
	ftAnimBlock(0, 9),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 2), -230,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -135, 0, 45, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimDSmash_joint18[140] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, 462,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1150, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1100, -66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 533, -213,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 819, 4096, 327, 4096, 327,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 316, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 486, -212,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 6144, 4915, 4915,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, -819, 4096, -327, 4096, -327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 0, -3,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 1638, 4096, 819, 4096, 819,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 8192, 6144, 6144,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, -1638, 4096, -819, 4096, -819,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4096, 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 244, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 324, 62,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 400,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 400,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimDSmash_joint20[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -212, 67, -11, 46, -156, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 154, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 618, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -298, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -300, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -338, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -234, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -174, 2, 138, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 109, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -230, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -55, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 603, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 542, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -25, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 92, -29,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 544, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 485, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 35, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -82, 31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 118, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -11, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -40, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -322, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 434, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -178, 13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -306, 19,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 11), -212,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -163, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -156, 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -11,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 2), -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -212, 0, -156, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTMarioAnimDSmash_joint21[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, 68, 187, -285, 35, 475,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -179, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 264, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 511, 303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 643, 64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 442, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -177, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 35, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 271, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 245, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 416, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 499, 15,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 38, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 31, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 244, -28, 30, 64, 517, -124,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 179, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 203, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 236, 70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 545, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 137, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 179, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 235, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 200, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 519, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 181, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 132, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 35, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 183, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 187, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 204, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 200, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 0, 187, 0, 35, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimDSmash_joint23[132] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, -431,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 7, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 1638, 4096, 819, 4096, 819,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 8192, 6144, 6144,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, -1638, 4096, -819, 4096, -819,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 1638, 4096, 819, 4096, 819,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 8192, 6144, 6144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 448, 251,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, -1638, 4096, -819, 4096, -819,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 510, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, -156,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 364, 58,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4096, 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 406, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 438, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimDSmash_joint24[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1712, -138, -1588, 235, 1389, 403,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1321, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1574, -251, 1793, 472,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1210, -144, 2334, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1286, 98, -1370, -48, 2348, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1543, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1407, 141, 2347, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2288, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1629, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1422, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1189, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1228, 57, 2258, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 2041, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1472, -4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1508, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -1476, -62,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2035, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1447, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1475, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1324, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1384, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1514, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1650, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1584, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1621, 41,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 11), 1712,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1538, -56,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 8), -1588,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1389, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 1389,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1712, -1588, 1389,
	ftAnimEnd(),
};
