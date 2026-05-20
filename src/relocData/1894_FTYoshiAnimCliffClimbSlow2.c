/* AnimJoint data for relocData file 1894 (FTYoshiAnimCliffClimbSlow2) */
/* 1536 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimCliffClimbSlow2_joint1[10];
extern u16 dFTYoshiAnimCliffClimbSlow2_joint2[18];
extern u16 dFTYoshiAnimCliffClimbSlow2_joint3[26];
extern u16 dFTYoshiAnimCliffClimbSlow2_joint4[16];
extern u16 dFTYoshiAnimCliffClimbSlow2_joint5[32];
extern u16 dFTYoshiAnimCliffClimbSlow2_joint7[14];
extern u16 dFTYoshiAnimCliffClimbSlow2_joint8[82];
extern u16 dFTYoshiAnimCliffClimbSlow2_joint9[34];
extern u16 dFTYoshiAnimCliffClimbSlow2_joint11[18];
extern u16 dFTYoshiAnimCliffClimbSlow2_joint12[56];
extern u16 dFTYoshiAnimCliffClimbSlow2_joint13[32];
extern u16 dFTYoshiAnimCliffClimbSlow2_joint14[18];
extern u16 dFTYoshiAnimCliffClimbSlow2_joint15[18];
extern u16 dFTYoshiAnimCliffClimbSlow2_joint16[26];
extern u16 dFTYoshiAnimCliffClimbSlow2_joint18[26];
extern u16 dFTYoshiAnimCliffClimbSlow2_joint19[78];
extern u16 dFTYoshiAnimCliffClimbSlow2_joint21[46];
extern u16 dFTYoshiAnimCliffClimbSlow2_joint23[54];
extern u16 dFTYoshiAnimCliffClimbSlow2_joint24[34];
extern u16 dFTYoshiAnimCliffClimbSlow2_joint26[24];
extern u16 dFTYoshiAnimCliffClimbSlow2_joint27[52];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTYoshiAnimCliffClimbSlow2_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimCliffClimbSlow2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbSlow2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbSlow2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbSlow2_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbSlow2_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbSlow2_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbSlow2_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbSlow2_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbSlow2_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbSlow2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbSlow2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbSlow2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbSlow2_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbSlow2_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbSlow2_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbSlow2_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbSlow2_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbSlow2_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbSlow2_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbSlow2_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffClimbSlow2_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTYoshiAnimCliffClimbSlow2_joint1[10] = {
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimCliffClimbSlow2_joint2[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 672,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 268,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 22), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 3,
	ftAnimBlock(0, 19),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimCliffClimbSlow2_joint3[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ), -224, 30, -31, -2, -119, 51, 64, 41,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 20), 0, -89, 0, 20,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 1,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), -240, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 19), 30,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimCliffClimbSlow2_joint4[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 829, -28, 5, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 22), 16, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3,
	ftAnimBlock(0, 19),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTYoshiAnimCliffClimbSlow2_joint5[32] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 329,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -367, 6, 103, 5, 0, 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 7), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 184, 20, 76, -4,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 78, 0, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimCliffClimbSlow2_joint7[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 0, -5,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 60), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 41,
	ftAnimBlock(0, 19),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimCliffClimbSlow2_joint8[82] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -27, 98, 34, 32, -103, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 64, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 427, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 226, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 251, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, -175, 91, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 85, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -99, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 29, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 239, -176,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -138, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -75, -142,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -339, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -17, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -93, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -138, 0, -104, -10, -359, -19,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTYoshiAnimCliffClimbSlow2_joint9[34] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -533, -410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -821, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -872, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -794, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 29,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimCliffClimbSlow2_joint11[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTZ), -804, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -1251, 26,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 11,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 14), 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimCliffClimbSlow2_joint12[56] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 419, -11, 57, 7, -4, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 381, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -2, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -20, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 17, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -130, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 375, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -124, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -21, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -103, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -125, 0, -134, -30, -210, -80,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimCliffClimbSlow2_joint13[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -625, -15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -632, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -890, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -948, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -994, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimCliffClimbSlow2_joint14[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTZ), -804, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -628, 26,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 11,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 13), 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimCliffClimbSlow2_joint15[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2315, 11, -1042, -15, 1550, -10,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -536, -893, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 19),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTYoshiAnimCliffClimbSlow2_joint16[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -354, -2, 56, -2, 10, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 31, 4, 7, -1, 1, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16,
	ftAnimBlock(0, 9),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -190, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimCliffClimbSlow2_joint18[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -589, 2, 122, -4, -12, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 186, 12, 16, -3, -1, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16,
	ftAnimBlock(0, 9),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -153, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTYoshiAnimCliffClimbSlow2_joint19[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -28, -16, -38, -27, 724, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 347, 54, -117, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 708, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 516, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -104, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -261, -142,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -287, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 380, 2, -11, 79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -42, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 16, -21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -117, 139,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 6, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -18, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 0, -11, 0, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, -6, 5, 6, -3, -10,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimCliffClimbSlow2_joint21[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 282, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 622, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 664, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 975, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 968, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 185, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 171, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 230, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, 32,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimCliffClimbSlow2_joint23[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1697, -20, -188, 6, 208, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -141, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -83, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1934, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1950, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1811, 112,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -193, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -268, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1700, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1604, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, -3, -83, 0, -263, 4,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimCliffClimbSlow2_joint24[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -131, -19, 200, -19, 92, -60,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 18), -7, 8, 3, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -228, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -205, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -165, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 7, 0, -3, -154, 10,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimCliffClimbSlow2_joint26[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 649, 41,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 492, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 450, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 388, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTYoshiAnimCliffClimbSlow2_joint27[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2023, 7, 284, -11, -223, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1618, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -88, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -266, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -258, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -229, 1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1612, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1607, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1603, -3, -89, -1, -228, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
