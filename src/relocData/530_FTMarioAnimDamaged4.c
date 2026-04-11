/* AnimJoint data for relocData file 530 (FTMarioAnimDamaged4) */
/* 2752 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimDamaged4_joint1[76];
extern u16 dFTMarioAnimDamaged4_joint2[90];
extern u16 dFTMarioAnimDamaged4_joint4[62];
extern u16 dFTMarioAnimDamaged4_joint5[112];
extern u16 dFTMarioAnimDamaged4_joint7[40];
extern u16 dFTMarioAnimDamaged4_joint8[54];
extern u16 dFTMarioAnimDamaged4_joint10[44];
extern u16 dFTMarioAnimDamaged4_joint11[122];
extern u16 dFTMarioAnimDamaged4_joint12[48];
extern u16 dFTMarioAnimDamaged4_joint13[42];
extern u16 dFTMarioAnimDamaged4_joint15[20];
extern u16 dFTMarioAnimDamaged4_joint16[114];
extern u16 dFTMarioAnimDamaged4_joint18[46];
extern u16 dFTMarioAnimDamaged4_joint20[112];
extern u16 dFTMarioAnimDamaged4_joint21[140];
extern u16 dFTMarioAnimDamaged4_joint23[206];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimDamaged4_joints[] = {
	(u32)dFTMarioAnimDamaged4_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimDamaged4_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimDamaged4_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimDamaged4_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimDamaged4_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTMarioAnimDamaged4_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimDamaged4_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimDamaged4_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimDamaged4_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimDamaged4_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimDamaged4_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimDamaged4_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimDamaged4_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimDamaged4_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimDamaged4_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimDamaged4_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF026D, /* [23] END */
};

/* Joint 1 */
u16 dFTMarioAnimDamaged4_joint1[76] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 223, 0, 540, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0, -44, -16, -25, 561, 121, -64, -234,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 251,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 402, 19, 616, 19, -146, 38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX, 4), 0, -16,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_TRAX, 15), 0, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 446, -1, 604, -63, 21, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 446, 0, 496, -571, 21, 208,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, -111, 0, 55, -16, 32, 390, 88, 99, -43,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 223, 0, 540, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimDamaged4_joint2[90] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 79, 0, -97, 0, -324,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, -790, -95,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -45, -1, -179, -93,
	ftAnimSetValRateT(FT_ANIM_TRAX, 10), 86, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 14, -418, 158, -103, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1, -1, 0, 39, 0, 5,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 14), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), 0, 0, 286, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), -7, 60,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 17), 0,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 14), 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 0, -13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -28, 286, -29, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -85, -17, 8, -269, 5, -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -71, -790, -95,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimDamaged4_joint4[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 258, 110,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 253, -34, -127, -1, -76, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 35, -28, 0, 23, 0, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -6, 5, 80, 18, -17, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 116, -6, 257, -18, -73, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -72, 5, -100, 0, -75, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 262, 70, -68, 89, -49, 46,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 208, 258, 110,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimDamaged4_joint5[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, 155, -300, -269, -272, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 289, 66, -570, -135, -545, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 265, -16, -570, 16, -488, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 123, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 14, -78, -402, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -59, -72, -419, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -788, -111,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -427, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 173, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 947, 8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -887, -83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1000, 108,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -422, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -466, 56, 929, -114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 422, -371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -800, 277, -308, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -34, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -390, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -374, 45, -24, -347,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, 168, -300, 73, -272, -247,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimDamaged4_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, 182,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -651, -393,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -795, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -519, 306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 336,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimDamaged4_joint8[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, -4, 176,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 49, 0, 240, 0, -121, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 199, 10, 0, -21, 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 243, 2, -141, -9, -59, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 243, 43, -141, 72, -59, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 374, -10, 77, 34, -48, 59,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 201, -4, 176,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimDamaged4_joint10[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 139, -209,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 52, 0, -27, 0, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 40, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 40, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 40, -52, 0, 27, 0, -41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -221, 139, -209,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimDamaged4_joint11[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2052, -443, 1056, -567, 1674, -574,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, -191, 488, -294, 1099, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1668, -39, 466, -22, 1124, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1409, 200, 469, 47, 974, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1805, 293, 517, 2, 1457, 356,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2050, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 424, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1824, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1874, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2345, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2044, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2165, 62,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 404, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 289, 51,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2240, 254, 2406, 188,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 3153, 330, 3143, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 394, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 434, 61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3335, 241, 3160, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3635, 162, 3344, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3660, 24, 551, 117, 3282, -61,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimDamaged4_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 363,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -447, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -389, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -597, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -159, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -598, -401,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -213,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimDamaged4_joint13[42] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 625,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -44, -17, 619, 179,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 95,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 56, -5, -85, -1, 895, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 49, 29, -62, 4, 823, -47,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 625, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimDamaged4_joint15[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 71, 0, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 893, -935, 681,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 1608, -804, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimDamaged4_joint16[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -135, -267, -230, -144, 45, -224,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -386, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -403, -80, -178, -314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -296, 6, -584, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -390, -44, -149, 174, -627, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 149, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -384, -2, -712, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -674, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -426, 12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 180, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 238, -6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -653, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -557, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -412, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -364, 23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 229, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -322, 110, -127, -269, -604, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -90, 4, -259, 262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -309, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -289, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, -44, -230, 58, 45, 304,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimDamaged4_joint18[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, 122,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 386, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 14), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 699, 480,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 960, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 746, -280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -346,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimDamaged4_joint20[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -212, 273, -11, -133, -156, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 352, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -138, 30, 95, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -84, 38, 451, 252,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 675, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 37, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 320, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 622, 18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 673, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 550, -29,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 638, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 639, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 55, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 208, 146,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 620, -253, 517, -135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -312, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 133, -300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 18, -103, 413, 152,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -175, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 514, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, -262, -302, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, -36, -11, -250, -156, 146,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimDamaged4_joint21[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, 285, 187, 64, 35, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 485, -143, 251, 177, 124, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -86, -190, 541, 165, -440, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 343, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 105, 147, 222, 436,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 208, 6, 432, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 108, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 338, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 318, -24, 306, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -42, -90, 545, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 118, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 390, 9,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -97, -40, 565, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -172, -12, 558, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 399, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 405, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 402, -106, -184, 236, 567, -93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 60, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 300, 279, 371, -420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 374, 8, -273, -295,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 245, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 75, 67, -219, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 195, 62, -90, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 4, 187, -58, 35, 126,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimDamaged4_joint23[206] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, -378,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 60, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 881, 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 774, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 670, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 765, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 759, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 507, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 366, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 76, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 379,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 766, 515,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1030, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 727, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -289,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0059, 0x0058, 0xFFA3, 0xFE4B, 0xFF2C, 0x0096, 0x200F, 0x0001, 0x00B2, 0x0000, 0xFDED, 0xFF81, 0xFFC2, 0x001F, 0x200F, 0x0001, 0x0059, 0xFFE1, 0xFEA3, 0x0036, 0xFF6A, 0xFFF6, 0x2803, 0x0004, 0x0034, 0xFFCF, 0x200D, 0x0001, 0xFE59, 0x0033, 0xFFAD, 0x0001, 0x200D, 0x0001, 0xFF09, 0x00C0, 0xFF6C, 0xFFCC, 0x2809, 0x0007, 0x0064, 0x004D, 0x2005, 0x0001, 0xFFDA, 0x0078, 0x2005, 0x0001, 0xFFFA, 0x0019, 0x2805, 0x000D, 0x001C, 0xFFF3, 0x2003, 0x0001, 0x0003, 0xFFCF, 0x2803, 0x000A, 0xFE8B, 0xFFF2, 0x0801, 0x0004, 0x2009, 0x0001, 0x00BA, 0x0079, 0x2009, 0x0004, 0x01FC, 0x0016, 0x2009, 0x0001, 0x020F, 0x000D, 0x200B, 0x0001, 0xFE7F, 0xFFF7, 0x0218, 0x0006, 0x200B, 0x0001, 0xFE78, 0x00DF, 0x021B, 0xFE83, 0x200F, 0x0001, 0x003C, 0x012C, 0x0003, 0x0023, 0xFF1F, 0xFDC3, 0x2803, 0x0003, 0x0065, 0xFFE9, 0x200D, 0x0001, 0x0062, 0xFFD2, 0xFDA2, 0xFF96, 0x200D, 0x0001, 0xFFA8, 0xFFC4, 0xFE49, 0x008E, 0x200D, 0x0001, 0xFFEB, 0xFFFE, 0xFEBE, 0x0071, 0x200F, 0x0001, 0x0059, 0xFFF4, 0xFFA3, 0xFFB8, 0xFF2C, 0x006D, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
