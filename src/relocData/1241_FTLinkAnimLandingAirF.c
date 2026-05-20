/* AnimJoint data for relocData file 1241 (FTLinkAnimLandingAirF) */
/* 1440 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimLandingAirF_joint1[22];
extern u16 dFTLinkAnimLandingAirF_joint2[30];
extern u16 dFTLinkAnimLandingAirF_joint4[54];
extern u16 dFTLinkAnimLandingAirF_joint5[66];
extern u16 dFTLinkAnimLandingAirF_joint6[32];
extern u16 dFTLinkAnimLandingAirF_joint9[10];
extern u16 dFTLinkAnimLandingAirF_joint10[68];
extern u16 dFTLinkAnimLandingAirF_joint11[32];
extern u16 dFTLinkAnimLandingAirF_joint12[8];
extern u16 dFTLinkAnimLandingAirF_joint13[8];
extern u16 dFTLinkAnimLandingAirF_joint16[26];
extern u16 dFTLinkAnimLandingAirF_joint17[18];
extern u16 dFTLinkAnimLandingAirF_joint18[18];
extern u16 dFTLinkAnimLandingAirF_joint20[18];
extern u16 dFTLinkAnimLandingAirF_joint21[38];
extern u16 dFTLinkAnimLandingAirF_joint23[24];
extern u16 dFTLinkAnimLandingAirF_joint25[46];
extern u16 dFTLinkAnimLandingAirF_joint26[60];
extern u16 dFTLinkAnimLandingAirF_joint28[24];
extern u16 dFTLinkAnimLandingAirF_joint29[60];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimLandingAirF_joints[] = {
	(AObjEvent32 *)dFTLinkAnimLandingAirF_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimLandingAirF_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimLandingAirF_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimLandingAirF_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimLandingAirF_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimLandingAirF_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimLandingAirF_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimLandingAirF_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimLandingAirF_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimLandingAirF_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimLandingAirF_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimLandingAirF_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimLandingAirF_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimLandingAirF_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimLandingAirF_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimLandingAirF_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimLandingAirF_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimLandingAirF_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimLandingAirF_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimLandingAirF_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimLandingAirF_joint1[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 361,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 361,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 361, 392,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 9), 901,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimLandingAirF_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 43, 5, 12,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 43, 0, 5, 1, 12, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 39, -13, 12, 24, 11, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -107, 276, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimLandingAirF_joint4[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -767, 1109, -1428,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -767, -20, 1109, -18, -1428, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -930, 383, 958, -123, -1399, 422,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 765, 544, 617, -158, 260, 505,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 701, -28, 482, -66, 117, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 622, -88, 282, -63, 68, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 259, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimLandingAirF_joint5[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1446, -7, -1244, 1, -2270, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1319, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1658, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -2181, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2059, 99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1832, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1338, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1465, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1755, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1901, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1420, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1327, 69, -1739, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1888, -12, -1281, 45, -1694, 45,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimLandingAirF_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -98, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -272, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -222, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -451, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, -49,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimLandingAirF_joint9[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -35, 153, 508,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 4, 7, 76,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimLandingAirF_joint10[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 860, 10, 421, 5, 312, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 267, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 787, -75, 241, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 708, -77, 168, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -127, -104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 382, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 218, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 201, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 279, 3, -266, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 140, -42, -87, 67,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 408, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, 7, 123, -16, -50, 36,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimLandingAirF_joint11[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -744, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -774, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -789, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -329, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -483, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, -104,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimLandingAirF_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimLandingAirF_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimLandingAirF_joint16[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2099, -119, -517,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 2099, -1, -119, -1, -517, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2088, -36, -131, -37, -512, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1697, -536, -339,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimLandingAirF_joint17[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, -274, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1, 0, -274, 6, 87, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, -163, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimLandingAirF_joint18[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -200, -155, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -200, 12, -155, -2, 166, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimLandingAirF_joint20[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -208, -59, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -212, 13, -120, 3, 13, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimLandingAirF_joint21[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 219, 0, -400, 0, -416, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -260, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 103, -68, -387, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 33, -68, -332, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -227, -23, 74, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -14, -244, 16, 108, 34,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimLandingAirF_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1269, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1015, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 890, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 316, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -67,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimLandingAirF_joint25[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -98, 0, -256, 0, -328, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -174, 12, -124, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -123, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -98, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 270, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 300, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 321, 14, -165, 6, -64, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 7, -161, 3, -34, 30,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimLandingAirF_joint26[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -122, 0, 198, 1, -1293, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1326, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -155, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 198, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 240, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 130, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1275, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -157, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -183, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 255, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 194, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 281, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 15, 269, -12, -125, 32,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimLandingAirF_joint28[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1114, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1074, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1009, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 466, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimLandingAirF_joint29[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -598, -1, -185, 0, 153, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -78, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -598, -27, 153, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -660, 36, 193, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -129, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -445, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -445, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -430, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -160, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -84, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -427, 2, -74, 4, -69, 14,
	ftAnimEnd(),
	0x0000, 0x0000,
};
