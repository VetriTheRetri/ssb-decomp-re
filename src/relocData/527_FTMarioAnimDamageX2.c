/* AnimJoint data for relocData file 527 (FTMarioAnimDamageX2) */
/* 2960 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimDamageX2_joint1[80];
extern u16 dFTMarioAnimDamageX2_joint2[66];
extern u16 dFTMarioAnimDamageX2_joint4[66];
extern u16 dFTMarioAnimDamageX2_joint5[126];
extern u16 dFTMarioAnimDamageX2_joint6[56];
extern u16 dFTMarioAnimDamageX2_joint7[10];
extern u16 dFTMarioAnimDamageX2_joint8[60];
extern u16 dFTMarioAnimDamageX2_joint10[40];
extern u16 dFTMarioAnimDamageX2_joint11[140];
extern u16 dFTMarioAnimDamageX2_joint12[58];
extern u16 dFTMarioAnimDamageX2_joint13[66];
extern u16 dFTMarioAnimDamageX2_joint15[48];
extern u16 dFTMarioAnimDamageX2_joint16[142];
extern u16 dFTMarioAnimDamageX2_joint18[48];
extern u16 dFTMarioAnimDamageX2_joint20[114];
extern u16 dFTMarioAnimDamageX2_joint21[114];
extern u16 dFTMarioAnimDamageX2_joint23[62];
extern u16 dFTMarioAnimDamageX2_joint24[136];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimDamageX2_joints[] = {
	(u32)dFTMarioAnimDamageX2_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimDamageX2_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimDamageX2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimDamageX2_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimDamageX2_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimDamageX2_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimDamageX2_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimDamageX2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimDamageX2_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimDamageX2_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimDamageX2_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimDamageX2_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimDamageX2_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimDamageX2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimDamageX2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimDamageX2_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimDamageX2_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimDamageX2_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimDamageX2_joint1[80] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY), 223, 540,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 3, 2, 3, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 268, 223, -16, -52, 477, -84, -172, -868,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 893, 56, 509, 23, -322, -109,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 2), -16,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 509, -71, -322, 112,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 12), -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 9), 893,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 893, -33, 401, -83, -154, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 625, -76, -16, 17, 425, 124, -70, 140,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 4), 540,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 3, 2, 3, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 357, -100,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 223,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimDamageX2_joint2[66] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -790, 1,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -71, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -375, 23, 0, 263, 0, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, 13, 89, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 0, 13,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 17), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -56, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -56, 8, 89, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -3, 0, 0, 0, -46,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -790, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -71, -95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimDamageX2_joint4[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 0, 258, 0, 110, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 431, -27, 115, -75, 333, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 125, -27, 31, -7, 174, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 125, 15, 31, -20, 174, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 306, 22, -211, -30, 110, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 306, -2, -211, 11, 110, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 291, -28, -127, 117, 28, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 208, 0, 258, 0, 110, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimDamageX2_joint5[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1475, 661, -1308, 252, 1336, 81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -872, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -813, 40, 1417, 337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1393, -659, 2011, 671,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2132, -383, -952, -49, 2759, 384,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -972, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2160, -21, 2780, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -2310, -51, 2738, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2369, -164, -953, 47, 2752, 118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -483, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2638, 227, 2975, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1914, 255, 2215, -282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2127, -150, 2410, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2216, -67, 2473, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -2446, -184, 2540, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -468, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -459, 106,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2709, -259, 2746, 195,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3067, -58, 2967, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -347, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3083, -15, -300, 47, 2944, -23,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimDamageX2_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, -72,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -254, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -314, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -241, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -375, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -377, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -281, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 99,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimDamageX2_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -625, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimDamageX2_joint8[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, -4, 176,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 259, -19, 35, -151, 98, 64,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -241, -45, -458, -44, 370, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -241, 12, -458, 4, 370, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -92, 9, -409, 16, -42, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -166, 32, -326, 45, 92, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 201, 0, -4, 0, 176, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTMarioAnimDamageX2_joint10[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 139, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 73, 0, -46, 0, 69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -18, 0, 11, 0, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -221, 139, -209,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimDamageX2_joint11[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2052, -980, 1056, -25, 1674, -694,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1071, -411, 1030, -245, 980, -327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1228, 221, 565, -351, 1019, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 291, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1007, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1515, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1554, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1420, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 285, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 399, 88,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1411, -51, 1099, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1316, 374, 504, 17, 1113, 501,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2161, 466, 435, -160, 2103, 570,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2249, 34, 182, -132, 2254, 76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 337, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2229, -22, 2256, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2161, 79, 2103, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 435, 119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 689, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2317, 431, 2168, 327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3024, 619, 2759, 520,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3557, 318, 600, -68, 3210, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3660, 103, 551, -48, 3282, 71,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimDamageX2_joint12[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 802,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -390,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -790, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -451, 395,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 225,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -300, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -742, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -804, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -7,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimDamageX2_joint13[66] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 625,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 85, -97, -74, 322,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 338,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 188, 136, -195, -165, 644, 325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 612, 42, -245, -5, 575, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 612, -42, -245, 17, 575, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 97, -64, -41, 25, 604, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 97, 58, -41, 4, 604, -67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 625, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimDamageX2_joint15[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 71, 0, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 827, -181, -1389, -43, 758, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1062, 21, -935, 41, 681, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1062, -935, 681,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1062, -935, 681,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1062, 60, -935, 14, 681, -75,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1608, -804, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimDamageX2_joint16[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -198, 282, -184, 162, 166, -501,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 83, -38, -22, 200, -334, -315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -275, -267, 215, 49, -463, -130,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -566, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -511, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 77, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 121, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 77, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -544, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -642, -71,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -508, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -451, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -343, 177, 115, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 267, 130, 320, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -737, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -496, 65,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 371, 81, 271, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 456, 11, 91, -115,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -430, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 453, -115, -37, 30, -353, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 153, 85, -507, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -303, 325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 133, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 98, -97, -94, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -198, -296, -184, -89, 166, 470,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimDamageX2_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 168, 335,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 503, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 420, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 653, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 597, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 566, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 471, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 702, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 414, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 462, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 168, -294,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimDamageX2_joint20[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -208, 118, -224, 134, -14, 191,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 392, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 17, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -32, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 180, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 132, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 127, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 180, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 78, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 30, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -304, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 170, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -115, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -109, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 75, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 35, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -201, -32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -283, 125,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 167, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -165, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 234, -72, 136, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, -187, -69, -229, -57, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -208, -73, -224, -154, -14, 43,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimDamageX2_joint21[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, 140, 158, 187, 95, 232,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 493, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 367, 0, 327, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 228, 13, 157, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 393, 95, 444, -38, 434, 152,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 401, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 420, 19, 463, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 409, 16, 450, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 423, -19, 359, 8, 471, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 585, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 525, 263, 325, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 898, 343, 591, 247,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1290, -79, 850, -145,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 538, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1053, -248, 379, -232, 529, -265,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 453, -283, 144, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 73, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 158, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, -227, 158, 0, 95, -49,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimDamageX2_joint23[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 316, 263,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 580, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 469, -290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -234,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 75, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 359, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 830, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 854, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 741, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 305, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 339, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 316, -22,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimDamageX2_joint24[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 401, -89, -142, -179, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 492, -48, -231, 40, -316, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6, -293, -7, 89, 16, 379,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -112, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -52, -12, 441, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -32, 14, 463, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -50, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 437, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -133, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -136, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -94, 108, -52, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 350, 69, 297, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 397, -114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -69, -84,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 382, 12, 210, -110,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -337, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 248, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -131, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -186, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -262, 91, -349, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -240, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 214, -77, -154, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 94, -61, -166, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 90, -3, -89, 77, -179, 60,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
