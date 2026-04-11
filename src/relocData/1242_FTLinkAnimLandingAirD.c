/* AnimJoint data for relocData file 1242 (FTLinkAnimLandingAirD) */
/* 3936 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimLandingAirD_joint1[80];
extern u16 dFTLinkAnimLandingAirD_joint2[62];
extern u16 dFTLinkAnimLandingAirD_joint4[68];
extern u16 dFTLinkAnimLandingAirD_joint5[166];
extern u16 dFTLinkAnimLandingAirD_joint6[76];
extern u16 dFTLinkAnimLandingAirD_joint7[68];
extern u16 dFTLinkAnimLandingAirD_joint9[60];
extern u16 dFTLinkAnimLandingAirD_joint10[220];
extern u16 dFTLinkAnimLandingAirD_joint11[80];
extern u16 dFTLinkAnimLandingAirD_joint12[38];
extern u16 dFTLinkAnimLandingAirD_joint13[36];
extern u16 dFTLinkAnimLandingAirD_joint16[54];
extern u16 dFTLinkAnimLandingAirD_joint17[42];
extern u16 dFTLinkAnimLandingAirD_joint18[42];
extern u16 dFTLinkAnimLandingAirD_joint20[62];
extern u16 dFTLinkAnimLandingAirD_joint21[180];
extern u16 dFTLinkAnimLandingAirD_joint23[68];
extern u16 dFTLinkAnimLandingAirD_joint25[170];
extern u16 dFTLinkAnimLandingAirD_joint26[148];
extern u16 dFTLinkAnimLandingAirD_joint28[190];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimLandingAirD_joints[] = {
	(u32)dFTLinkAnimLandingAirD_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimLandingAirD_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimLandingAirD_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimLandingAirD_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimLandingAirD_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimLandingAirD_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimLandingAirD_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimLandingAirD_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimLandingAirD_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimLandingAirD_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimLandingAirD_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimLandingAirD_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimLandingAirD_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimLandingAirD_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimLandingAirD_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimLandingAirD_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimLandingAirD_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimLandingAirD_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimLandingAirD_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimLandingAirD_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF039F, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimLandingAirD_joint1[80] = {
	ftAnimSetValRate(FT_ANIM_TRAY), 664, -1041,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 62, -148,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 62, 0, 408, -1047, -148, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 62, 309, -148,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 62, 0, 408, -1, -148, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -22, 179, 54,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -4, -44, 855, 397, -68, 53,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -4, 0, 855, -109, -68, 4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -2, 2, 637, -100, -59, -24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 1, 676, 19, -112, -26,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 676, 119, -112, 59,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 9), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 901, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimLandingAirD_joint2[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -63, 270, -4,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -63, 270, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -63, 0, 270, 0, -4, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 61, -1, 271, -11, -3, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -92, 3, 50, 17, 46, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 151, 15, 686, 39, 132, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 151, -17, 686, -27, 132, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -107, 276, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTLinkAnimLandingAirD_joint4[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 519, 201, 42,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 519, 201, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 519, 0, 201, 0, 42, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 293, -54, 189, -30, 47, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -75, 5, -131, -33, -111, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 385, 21, -410, 19, -249, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 259, -8, 166, 41, 56, 21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 259, 166, 56,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 259, 166, 56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimLandingAirD_joint5[166] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -81, 0, -549, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 422,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 19), 422, -9, -81, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -549, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -549, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -928, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 403, -44, -54, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 234, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 119, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 127, 6, -978, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1077, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 100, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 227, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 414, 45,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1093, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -817, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 18, -93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -523, 59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 452, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 147, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -696, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -151, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 196, 28, -430, 102, -181, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -43, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -511, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -138, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -16, 104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 486, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -97, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -541, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -492, 93, 494, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 244, 80, -41, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -512, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -369, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, 35, -326, 42, -86, -44,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimLandingAirD_joint6[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -677, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -677, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -670, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -403, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -359, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -358, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -355, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -793, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -889, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -528, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -268, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -316, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -400, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -542, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -548, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -661, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -559, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 58,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTLinkAnimLandingAirD_joint7[68] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -142, 55, -142,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -142, 55, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -142, 0, 55, 0, -142, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -172, -2, 237, 15, 248, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -172, 11, 237, -14, 248, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 4, 12, 7, -16, 76, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 7, 0, 4, 0, 291, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 8, 0, 2, 0, 409, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 4, 7, 76,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimLandingAirD_joint9[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, 96, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 804, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1608, 96, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 1608, 0, 96, 0, 0, 0, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -47,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 96, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1416, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1416, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 8, -61,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 8, 96, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 8, 96, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimLandingAirD_joint10[220] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -466, 0, 75, 0, -713, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 75, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 18), -466, 0, -713, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -466, 35, -713, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1, 44, -1000, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 62, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -69, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 37, 37, -1051, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -50, -75, -957, 134,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -78, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -84, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -49, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -147, 221, 294, 271, -781, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 391, 303, 493, 90, -437, 117,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 400, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 459, 24, -546, -133,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 96, -302, -1214, -363,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 451, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 140, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -251, -238, -1622, -297,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -419, -4, -2005, -43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 132, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 629, 92,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -428, -22, -2044, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -625, -394, -2205, -329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1253, -501, 667, -48, -2738, -372,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2097, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 340, -66, -2869, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 278, -45, -2833, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2936, -137,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 301, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2285, -179,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2807, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3097, -147,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -3277, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 248, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 142, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2800, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2799, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2800, 0, 123, -19, -3267, 9,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimLandingAirD_joint11[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -656, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -656, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -629, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -307, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -213, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -175, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -374, -330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -837, -302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -978, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1344, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1277, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -879, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -793, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -620, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -509, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -567, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, -19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimLandingAirD_joint12[38] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, -210, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 4, -210, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 4, 0, -210, 0, 11, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, 0, -209, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, -209, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, -209, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLinkAnimLandingAirD_joint13[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -803, 804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 804, -803, 804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 804, 0, -803, 0, 804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 804, 0, -804, 0, 804, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 804, -804, 804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 804, -804, 804,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLinkAnimLandingAirD_joint16[54] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1252, 137, -1100,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1252, 137, -1100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 1252, -4, 137, -3, -1100, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 1114, -11, 51, -10, 1645, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1039, 151, -66, -60, 1577, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 2474, 29, -494, 7, -149, -87,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 1697, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 18, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 11), -536,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimLandingAirD_joint17[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 11, 14, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 11, 14, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 11, 0, 14, 0, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 0, 0, 463, -10, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, -271, -31, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, -163, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimLandingAirD_joint18[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, 17, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 28, 17, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 28, 0, 17, 0, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -1, -4, -4, -12, 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -82, 0, -307, -9, 143, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimLandingAirD_joint20[62] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 204, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 204, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -226, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -226, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -178, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -207, 8, 0, 16, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -55, 13, 244, -14, -25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -16, 4, -204, -21, -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0, 10, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimLandingAirD_joint21[180] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 187, 4, 55, -7, -241, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -294, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 189, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -28, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -35, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -216, -10,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -298, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -334, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -221, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -14, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -50, -41, -305, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -6, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -257, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 153, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -241, 20,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -43, -43,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -274, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -72, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -218, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 236, 109,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -105, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -486, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 56, 116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 305, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 348, 96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 497, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -476, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -477, 26,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 296, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 6, -148,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 451, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -190, -86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -428, 84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 30, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -142, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -252, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -51, -244, 8, 108, 78,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimLandingAirD_joint23[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 912, 197,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1275, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1276, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1278, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1261, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 485, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 363, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 297, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 360, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 769, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 819, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 872, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 879, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 486, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 335, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -85,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimLandingAirD_joint25[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 499, -67, -434, 13, -537, -105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -277, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 313, -2, -747, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 309, -6, -751, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -769, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 143, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 139, 21, -273, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 365, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -380, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -757, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -222, 120,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 389, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 257, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -373, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -237, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -154, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -270, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -305, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -224, 48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -246, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -288, -47,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 254, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 206, -30,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -337, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -396, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -169, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 176, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 305, 61,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -358, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -160, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 354, 28, -167, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 342, -16, -71, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, -13, -161, -1, -34, 36,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimLandingAirD_joint26[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1607, -205, 1184, 24, 964, -255,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1309, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1228, -87, 495, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1227, -3, 492, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 1211, 26, 474, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1313, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), 1363, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1323, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1319, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1228, 85, 495, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1820, 89, 1184, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1855, 26, 1360, 39, 1262, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), 1517, -40, 1453, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1367, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1320, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 980, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1476, -40, 1470, 16, 942, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 961, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 1563, 153, 1035, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1741, 132, 1180, 116,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 1797, 37, 1291, 74,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 958, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 1154, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1838, 35, 1238, 76, 1375, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1868, 20, 1308, 49, 1450, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1879, 10, 1338, 29, 1483, 33,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimLandingAirD_joint28[190] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 786, 168,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1072, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1075, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 1080, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1071, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 746, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 470, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 88, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 197, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 276, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 788, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 840, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 810, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 818, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 558, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 467, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -42,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFE53, 0x0013, 0xFFB0, 0xFFF2, 0xFFDB, 0x0004, 0x2807, 0x0013, 0xFE88, 0xFFED, 0xFF8A, 0x000F, 0x2009, 0x0005, 0x002D, 0x0006, 0x2009, 0x0001, 0x0035, 0x0008, 0x2809, 0x000E, 0xFFC7, 0xFFC5, 0x0801, 0x000D, 0x2007, 0x0001, 0xFE68, 0xFFD3, 0xFFA6, 0x001B, 0x2807, 0x000D, 0xFE33, 0x0005, 0xFF84, 0x0002, 0x2009, 0x0001, 0xFFAC, 0x0019, 0x2009, 0x0006, 0x00B9, 0xFFDA, 0x2009, 0x0001, 0x0097, 0xFFE1, 0x2809, 0x001C, 0xFF80, 0x0001, 0x0801, 0x0005, 0x2007, 0x0001, 0xFE3A, 0x0008, 0xFF88, 0x0005, 0x2803, 0x0012, 0xFEEF, 0xFFFB, 0x2005, 0x0009, 0x002A, 0x001D, 0x2005, 0x0001, 0x003C, 0x0004, 0x2805, 0x000F, 0xFFC5, 0xFFE8, 0x0801, 0x0008, 0x2003, 0x0001, 0xFEEA, 0xFFFC, 0x2803, 0x0006, 0xFE58, 0xFFFB, 0x0801, 0x0003, 0x2009, 0x0001, 0xFF85, 0x000B, 0x2009, 0x0002, 0xFFAE, 0x0012, 0x200F, 0x0001, 0xFE55, 0xFFFE, 0xFFB6, 0xFFF2, 0xFFBB, 0x000D, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
