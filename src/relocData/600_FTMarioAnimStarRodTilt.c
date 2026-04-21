/* AnimJoint data for relocData file 600 (FTMarioAnimStarRodTilt) */
/* 4208 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimStarRodTilt_joint1[104];
extern u16 dFTMarioAnimStarRodTilt_joint2[46];
extern u16 dFTMarioAnimStarRodTilt_joint4[64];
extern u16 dFTMarioAnimStarRodTilt_joint5[210];
extern u16 dFTMarioAnimStarRodTilt_joint6[54];
extern u16 dFTMarioAnimStarRodTilt_joint7[46];
extern u16 dFTMarioAnimStarRodTilt_joint8[118];
extern u16 dFTMarioAnimStarRodTilt_joint10[30];
extern u16 dFTMarioAnimStarRodTilt_joint11[254];
extern u16 dFTMarioAnimStarRodTilt_joint12[86];
extern u16 dFTMarioAnimStarRodTilt_joint13[162];
extern u16 dFTMarioAnimStarRodTilt_joint15[34];
extern u16 dFTMarioAnimStarRodTilt_joint16[174];
extern u16 dFTMarioAnimStarRodTilt_joint18[72];
extern u16 dFTMarioAnimStarRodTilt_joint20[178];
extern u16 dFTMarioAnimStarRodTilt_joint21[172];
extern u16 dFTMarioAnimStarRodTilt_joint23[84];
extern u16 dFTMarioAnimStarRodTilt_joint24[168];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimStarRodTilt_joints[] = {
	(u32)dFTMarioAnimStarRodTilt_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimStarRodTilt_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimStarRodTilt_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimStarRodTilt_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimStarRodTilt_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimStarRodTilt_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimStarRodTilt_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimStarRodTilt_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimStarRodTilt_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimStarRodTilt_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimStarRodTilt_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimStarRodTilt_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimStarRodTilt_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimStarRodTilt_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimStarRodTilt_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimStarRodTilt_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimStarRodTilt_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimStarRodTilt_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimStarRodTilt_joint1[104] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 223, 0, 0, 540, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -88, -6, -23, 0, 45, 3, -17, -19, 499, 8, -16, -15,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), -15, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -91, 2, -23, 0, 45, -3, -17, 10, 499, 11,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 497, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX, 3), 0, 0, 0, 0, -6, 3,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 28), -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), 378, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 472, -302,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 20), -6, 1, 378, 3,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 32), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 426,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 472, 124,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 487, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 471,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 16), 472, 7,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, 540, 0,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 7), 223,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimStarRodTilt_joint2[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, -790, -95,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 207, -1, -765, 0, -202, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 207, 0, -765, 0, -202, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 27, 0, 335, 0, 43, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 27, 0, 335, 0, 43, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -71, -790, -95,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimStarRodTilt_joint4[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 208, 258, 110, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 11, -9, 25, -5, 9, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 40), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 110, 0, 199, -14, 97, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 149, 1, 183, 5, 128, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 198, 0, 104, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 115,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 107, 3, 83, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 11), 198,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 208, 258, 110,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimStarRodTilt_joint5[210] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, -36, -300, -145, -272, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -570, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 96, -190, -224, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -247, -206, 42, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -315, -36, -573, 4, 95, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -678, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -321, 10, 101, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -265, 25, 41, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -220, -236, 4, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -738, -66, -826, -103, 565, 105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -903, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -353, 207, 216, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -322, 28, 196, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -297, 32, 178, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -201, 18, 76, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -905, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -886, -6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -193, 6, 63, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -208, -8, 63, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -235, -45, 89, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -478, -145, 363, 180,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -897, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -645, -118, -954, -83, 577, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -716, -1, -1065, -16, 708, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -648, 9, -987, 10, 687, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1201, -133, 1149, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1044, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1192, -35,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1306, -81, 1228, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1455, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1343, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1221, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1304, -6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1466, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1473, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, -2, -1308, -3, 1336, -7,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimStarRodTilt_joint6[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, 173,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -479, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -542, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -525, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -492, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -208, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 25,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimStarRodTilt_joint7[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -625, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 0, 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -93, 0, -8, 0, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -749, -32, -69, -3, 50, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -749, 3, -69, 2, 50, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -625, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimStarRodTilt_joint8[118] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, -4, 176,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 71, -114, 177, 272, -11, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -27, -22, 540, 12, -19, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -64, -14, 251, -63, -62, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, 3, 157, -306, -65, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -56, 85, -361, -349, -11, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 55, 71, -542, -61, -24, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 157, 18, -546, -3, -23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 128, 0, -557, 0, -23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 70, -10, -559, -1, -28, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -33, -17, -579, -3, 62, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -34, 9, -578, 34, 68, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 6, 26, -442, 86, 37, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 71, 21, -231, 48, -35, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 201, -4, 176,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimStarRodTilt_joint10[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 139, -209,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 6, 0, -3, 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 33), 0, -5, 0, 3, 0, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -221, 139, -209,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimStarRodTilt_joint11[254] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 443, -582, 551, 388, 65, -494,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -138, -264, 940, 247, -428, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -84, 30, 1046, 52, -363, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -88, 5, -372, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1046, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1047, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -77, 4, 1046, 0, -361, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -78, 199, 1045, 91, -363, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1311, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 320, 237, -228, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 395, 313, -161, 675,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 948, 274, 1054, -124, 1123, 640,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 944, -42, 1062, -9, 1119, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 863, -27, 1036, -10, 992, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 909, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1046, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1032, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1062, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1065, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 906, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 910, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1046, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1046, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1066, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1061, 27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 908, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1299, 560,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1022, -42, 1119, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 962, 142, 1498, 612,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2077, 456, 1307, 224, 2345, 376,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2211, 114, 1410, 111, 2252, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2306, 44, 1531, 66, 2293, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2115, -137, 1461, -64, 2257, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1964, -64, 1389, -11, 2229, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1480, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2354, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2364, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2381, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2169, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1497, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1076, -47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2336, -53, 2056, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2118, -97, 1754, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2052, -66, 1056, -20, 1674, -79,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimStarRodTilt_joint12[86] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 623,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -188, 401,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -529, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 260,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -406, -306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -621, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -939, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -901, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -840, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimStarRodTilt_joint13[162] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 625,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 187, 147, 2619, 1323,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -2031,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -999,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1373, -5, 295, 3, 2646, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1373, -1, 295, -8, 2646, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2075, 1074, -169, -247, 2956, -1366,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 775, 1497, -199, -115, -86, -1631,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 919, -4, -399, -3, -307, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 919, -3, -399, 2, -307, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 506, -210, -434, -52, -181, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 77, -351, -611, -73, -349, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -197, -79, -581, 28, -200, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -161, 31, -525, 29, -296, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -101, 70, -493, 50, -371, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 26, -423, 93, -439, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -48, 57, -306, -36, -138, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 94, 102, -497, -84, -167, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 258, 225, -559, -23, 21, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 998, 245, -591, 104, -491, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 994, -186, -245, 295, -420, 245,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 625, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimStarRodTilt_joint15[34] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 75, 68, 30,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 893, -935, 681,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 33), -935, 0, 681, 1,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 33), 893,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -804, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), 1608,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimStarRodTilt_joint16[174] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -165, -187, -216, -18, 66, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -80, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -352, -108, -234, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -381, -7, -195, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -257, 55, -134, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -87, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -121, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -196, 96, -107, -20, -132, -119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 118, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -175, 88, -360, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 68, 21, -308, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 304, 91, -133, -120, 40, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 301, 0, -172, 0, 56, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -122, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 43, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 306, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 308, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -130, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -135, -4,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 304, -27, 40, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -81, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -177, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -137, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -210, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -82, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -85, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -191, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -246, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -201, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -163, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -36, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -230, 15, 17, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -165, -1, -216, 14, 66, 49,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimStarRodTilt_joint18[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 381, 74,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 505, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 499, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 502, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 502, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 922, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 779, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 836, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 773, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 773, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 773, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 782, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 779, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 778, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 703, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 493, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 381, -112,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimStarRodTilt_joint20[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1807, 118, 1644, 90, -1768, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1688, -2, 1734, 185, -1742, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1813, -72, 2014, 150, -1643, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1850, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1623, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2035, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2061, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 2142, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1873, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1918, -70, -1594, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2013, 92, 2193, -52, -1514, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1732, 179, 2038, -168, -1757, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1655, -20, 1856, -200, -2012, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1774, -69, 1636, -117, -1964, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1794, -1, 1621, 2, -2048, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1785, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1658, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1955, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1951, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1950, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1949, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1787, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1779, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1661, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), 1644, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1775, 15, 1635, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1625, -4, 1445, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1945, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1820, 46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1651, -36, 1510, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1800, -8, 1632, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1807, -6, 1644, 11, -1768, 52,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimStarRodTilt_joint21[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, -452, 187, -125, 35, -322,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 16, -23, -490, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -252, -314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -429, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -438, -11, 15, -2, -491, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 8, 5, -484, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -452, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -461, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -433, 212, 18, -29, -491, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -36, 264, -50, 112, -811, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 94, 53, 244, 209, -867, 134,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 392, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 69, -60, -542, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -26, 19, -692, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 107, 92, -534, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 158, 9, 389, 7, -481, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 375, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 126, -12, -535, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 133, 5, -534, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 66, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -548, 2,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 369, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 17, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 72, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 193, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 21, 27,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 190, 0, 45, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 202, 0, 176, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, -1, 187, 10, 35, 14,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimStarRodTilt_joint23[84] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 119,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 558, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 496, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 506, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 504, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 497, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 966, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 867, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 562, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 709, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 566, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 514, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 575, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 577, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 578, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 591, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 592, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 481, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 451, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimStarRodTilt_joint24[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1694, 16, -1506, -58, 1404, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1425, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1710, 104, -1565, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1902, 91, -1423, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1441, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1893, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1886, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1891, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1453, -5, 1424, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1423, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1421, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1906, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1672, -168, -1373, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1569, -13, -1555, -259, 1404, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1645, 37, -1891, -157, 1734, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1643, -13, -1871, 16, 1697, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1724, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1639, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1858, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -1900, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1705, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 1726, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1730, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1624, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1643, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1444, -62,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1906, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1507, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1559, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1400, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1393, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1674, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1694, 19, -1506, 0, 1404, 4,
	ftAnimEnd(),
};
