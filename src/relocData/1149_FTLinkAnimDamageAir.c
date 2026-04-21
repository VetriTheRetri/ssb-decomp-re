/* AnimJoint data for relocData file 1149 (FTLinkAnimDamageAir) */
/* 2064 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimDamageAir_joint1[18];
extern u16 dFTLinkAnimDamageAir_joint2[44];
extern u16 dFTLinkAnimDamageAir_joint4[44];
extern u16 dFTLinkAnimDamageAir_joint5[108];
extern u16 dFTLinkAnimDamageAir_joint6[56];
extern u16 dFTLinkAnimDamageAir_joint9[24];
extern u16 dFTLinkAnimDamageAir_joint10[90];
extern u16 dFTLinkAnimDamageAir_joint11[36];
extern u16 dFTLinkAnimDamageAir_joint12[34];
extern u16 dFTLinkAnimDamageAir_joint13[8];
extern u16 dFTLinkAnimDamageAir_joint16[8];
extern u16 dFTLinkAnimDamageAir_joint17[48];
extern u16 dFTLinkAnimDamageAir_joint18[42];
extern u16 dFTLinkAnimDamageAir_joint20[14];
extern u16 dFTLinkAnimDamageAir_joint21[84];
extern u16 dFTLinkAnimDamageAir_joint23[32];
extern u16 dFTLinkAnimDamageAir_joint25[82];
extern u16 dFTLinkAnimDamageAir_joint26[82];
extern u16 dFTLinkAnimDamageAir_joint28[44];
extern u16 dFTLinkAnimDamageAir_joint29[76];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimDamageAir_joints[] = {
	(u32)dFTLinkAnimDamageAir_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimDamageAir_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimDamageAir_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimDamageAir_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimDamageAir_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimDamageAir_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimDamageAir_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimDamageAir_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimDamageAir_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimDamageAir_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimDamageAir_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimDamageAir_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimDamageAir_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimDamageAir_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimDamageAir_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimDamageAir_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimDamageAir_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimDamageAir_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimDamageAir_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	(u32)dFTLinkAnimDamageAir_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimDamageAir_joint1[18] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, -148,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, 744,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -210,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 22), 0, 128,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimDamageAir_joint2[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 32, -53, 274, -13, 83, -36,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -154, -149, 223, 41, -40, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -415, -21, 397, 7, -294, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -515, 21, 342, -5, -344, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 32, 45, 274, 9, 83, 32,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimDamageAir_joint4[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 86, 166, -95, 56, 14,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 546, 185, -81, -48, 57, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 630, 6, 69, 5, 526, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 652, -16, 11, 4, 546, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 259, -93, 166, 91, 56, -14,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimDamageAir_joint5[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1311, -535, -1228, 14, -1352, 393,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 775, -140, -1214, 195, -959, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1029, -85, -837, 334, -1268, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 603, -193, -544, 176, -875, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 643, 39, -484, 84, -915, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 692, -8, -993, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -354, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -356, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -636, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 679, -24, -975, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 600, -102, -874, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 440, -359, -689, 393,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -119, -420, -664, 50, -86, 473,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -352, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -400, -152, 257, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -380, 63, 354, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -297, 83, -380, -27, 256, -98,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimDamageAir_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -430, -619,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1050, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -761, 360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -328, 271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -218, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -328, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -487, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -658, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -430, 227,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimDamageAir_joint9[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, -23, 7, 15, 76, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -202, -28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -730, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 4, 145, 7, -60, 76, 86,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimDamageAir_joint10[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2310, 68, 1143, 124, 2041, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 2010, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2379, 240, 1268, 301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2791, 232, 1745, 232,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2891, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1732, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1719, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1745, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2930, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 2791, -68,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2009, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 2104, 64,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2701, -104, 1750, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 2399, -72, 1185, -92,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2165, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2152, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2310, -88, 1143, -41, 2041, -110,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimDamageAir_joint11[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -444, -237,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -718, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -680, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -718, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -795, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -774, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -605, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -444, 161,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimDamageAir_joint12[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 59, -209, 10, 0, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 339, 27, -282, -52, -103, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 190, -14, -444, 3, 217, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), 0, -98, -209, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 17), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimDamageAir_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimDamageAir_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1508, 346, -843,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimDamageAir_joint17[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -56, -163, 74, 0, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 54, -58, 108, 108, 76, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -174, -19, 162, 4, -44, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -174, -2, 162, -25, -44, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -207, 15, -220, -29, 214, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 38, -163, -100, 0, -74,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimDamageAir_joint18[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 0, 83, -199, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 250, 20, -614, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 250, -31, -614, 19, 0, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -219, -22, -319, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimDamageAir_joint20[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 97, -20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 464,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 23), 97, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimDamageAir_joint21[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 18, 7, 163, -153, -712, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 291, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -518, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 10, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 55, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -120, -20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 306, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 351, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -493, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -311, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -140, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -156, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, 79, -304, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 144, 80, -618, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 327, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 152, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18, -134, 163, 18, -712, -94,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimDamageAir_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1036, 35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1210, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1196, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 953, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 956, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1094, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1036, -58,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimDamageAir_joint25[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 456, 64, -183, 201, 70, -89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 80, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 139, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 659, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 848, 123,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1041, 20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 78, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 62, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 135, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 148, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1058, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 908, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 880, -88, 129, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -97, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 731, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 447, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 456, 8, -183, -86, 70, 7,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimDamageAir_joint26[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 355, -179, 246, 130, -155, -270,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 493, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 6, 36, -660, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 96, 58, -598, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 256, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -594, -7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 493, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 490, -19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 247, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 96, -10,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -598, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 90, 80, 457, -64, -556, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 257, 132, 361, -105, -317, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 97, 246, -114, -155, 161,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimDamageAir_joint28[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 551, 338,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 890, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 848, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 489, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 448, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 418, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 454, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 642, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 685, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 551, -133,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimDamageAir_joint29[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -415, -84, -89, -90, 252, -294,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -426, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -98, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -41, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 59, 140,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 374, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -381, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -286, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 381, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 353, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -100, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -105, 9,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -287, -26, 348, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -461, -38, 241, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -415, 45, -89, 16, 252, 11,
	ftAnimEnd(),
};
