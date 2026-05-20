/* AnimJoint data for relocData file 1134 (FTLinkAnimLandingAirX) */
/* 1344 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimLandingAirX_joint1[20];
extern u16 dFTLinkAnimLandingAirX_joint2[22];
extern u16 dFTLinkAnimLandingAirX_joint4[22];
extern u16 dFTLinkAnimLandingAirX_joint5[66];
extern u16 dFTLinkAnimLandingAirX_joint6[32];
extern u16 dFTLinkAnimLandingAirX_joint9[18];
extern u16 dFTLinkAnimLandingAirX_joint10[56];
extern u16 dFTLinkAnimLandingAirX_joint11[40];
extern u16 dFTLinkAnimLandingAirX_joint12[8];
extern u16 dFTLinkAnimLandingAirX_joint13[8];
extern u16 dFTLinkAnimLandingAirX_joint16[18];
extern u16 dFTLinkAnimLandingAirX_joint17[14];
extern u16 dFTLinkAnimLandingAirX_joint18[18];
extern u16 dFTLinkAnimLandingAirX_joint20[22];
extern u16 dFTLinkAnimLandingAirX_joint21[46];
extern u16 dFTLinkAnimLandingAirX_joint23[24];
extern u16 dFTLinkAnimLandingAirX_joint25[44];
extern u16 dFTLinkAnimLandingAirX_joint26[54];
extern u16 dFTLinkAnimLandingAirX_joint28[24];
extern u16 dFTLinkAnimLandingAirX_joint29[58];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimLandingAirX_joints[] = {
	(AObjEvent32 *)dFTLinkAnimLandingAirX_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimLandingAirX_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimLandingAirX_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimLandingAirX_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimLandingAirX_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimLandingAirX_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimLandingAirX_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimLandingAirX_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimLandingAirX_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimLandingAirX_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimLandingAirX_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimLandingAirX_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimLandingAirX_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimLandingAirX_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimLandingAirX_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimLandingAirX_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimLandingAirX_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimLandingAirX_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimLandingAirX_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimLandingAirX_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimLandingAirX_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 611,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 361, 290,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), 901,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimLandingAirX_joint2[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -93, 12, 11,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 39, -1, 12, 32, 11, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -107, 276, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimLandingAirX_joint4[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 451, 32, -13,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 676, -23, 32, 16, -13, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 259, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimLandingAirX_joint5[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2036, -328, -1276, 133, 1557, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1463, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2364, 56, -1143, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1922, 473, -1242, -111,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1457, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1417, 319, 1071, -202,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1164, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1282, 88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1303, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1310, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1363, 87, 1440, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1328, -24, -1281, 82, 1522, 82,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimLandingAirX_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -802, 69,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -733, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -735, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -157, 367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -399, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, -101,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimLandingAirX_joint9[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -76, 36, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -76, 10, 36, -3, -44, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 4, 7, 76,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimLandingAirX_joint10[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 595, 249, 252, 157, -71, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 845, -14, 409, 6, -22, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 567, -227, 265, -109, -237, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 412, -13, 202, 47, -249, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 369, 0, 277, -21, -263, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 410, 23, 159, -76, -102, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, 5, 123, -36, -50, 52,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimLandingAirX_joint11[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -836, 72,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -763, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -780, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -521, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -393, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -267, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -400, -290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, -187,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimLandingAirX_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimLandingAirX_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimLandingAirX_joint16[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2182, -376, -605,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2182, -60, -376, -19, -605, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1697, -536, -339,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimLandingAirX_joint17[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -5, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), -163,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimLandingAirX_joint18[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -114, -27, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 34, 14, -27, -21, 29, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimLandingAirX_joint20[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 204,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 127, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -163, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -160, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimLandingAirX_joint21[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -68, 128, -326, -37, -157, -146,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -375, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -279, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 225, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 174, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -206, -55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -260, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 28, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -35, -244, 35, 108, 80,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimLandingAirX_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 952, 189,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1266, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1197, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 399, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -149,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimLandingAirX_joint25[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 160, -105, -357, 31, -279, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -263, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -101, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -98, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -16, 93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 306, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -254, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -169, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 22, -161, 7, -34, 66,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimLandingAirX_joint26[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -69, -52, 164, -19, -725, -282,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 233, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 4, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1275, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1172, 161,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -205, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 310, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 299, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 139, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 235, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 35, 269, -30, -125, 80,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimLandingAirX_joint28[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 923, 132,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 905, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 718, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 525, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -100,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimLandingAirX_joint29[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -462, -8, -132, -24, -93, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -514, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -87, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -18, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 120, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -161, -29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -480, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -437, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -154, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -104, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -427, 10, -74, 13, -69, 34,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
