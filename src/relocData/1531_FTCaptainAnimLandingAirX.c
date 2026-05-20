/* AnimJoint data for relocData file 1531 (FTCaptainAnimLandingAirX) */
/* 1184 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimLandingAirX_joint1[20];
extern u16 dFTCaptainAnimLandingAirX_joint2[26];
extern u16 dFTCaptainAnimLandingAirX_joint4[44];
extern u16 dFTCaptainAnimLandingAirX_joint5[58];
extern u16 dFTCaptainAnimLandingAirX_joint6[28];
extern u16 dFTCaptainAnimLandingAirX_joint7[18];
extern u16 dFTCaptainAnimLandingAirX_joint8[12];
extern u16 dFTCaptainAnimLandingAirX_joint10[14];
extern u16 dFTCaptainAnimLandingAirX_joint11[44];
extern u16 dFTCaptainAnimLandingAirX_joint12[32];
extern u16 dFTCaptainAnimLandingAirX_joint13[18];
extern u16 dFTCaptainAnimLandingAirX_joint16[10];
extern u16 dFTCaptainAnimLandingAirX_joint17[46];
extern u16 dFTCaptainAnimLandingAirX_joint19[24];
extern u16 dFTCaptainAnimLandingAirX_joint21[46];
extern u16 dFTCaptainAnimLandingAirX_joint22[24];
extern u16 dFTCaptainAnimLandingAirX_joint24[24];
extern u16 dFTCaptainAnimLandingAirX_joint25[54];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimLandingAirX_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimLandingAirX_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimLandingAirX_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimLandingAirX_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimLandingAirX_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimLandingAirX_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimLandingAirX_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimLandingAirX_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimLandingAirX_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimLandingAirX_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimLandingAirX_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimLandingAirX_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimLandingAirX_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimLandingAirX_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimLandingAirX_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimLandingAirX_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimLandingAirX_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimLandingAirX_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimLandingAirX_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimLandingAirX_joint1[20] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -46, 11, 974, -88, 2, -3,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 11), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 979, 105,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 7), 1600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimLandingAirX_joint2[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 9,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 155, -15, -17, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 11), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 26, 2, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 107, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimLandingAirX_joint4[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 459, -10, -5, 0, -136, 108,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), -136, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 508, 7, -2, 3, -1, 2, 0, -2, 108, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 513, 0, 4, 0, 2, 0, -1, 0, 130, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 189, 0, 0, 0, -31, 47,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimLandingAirX_joint5[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -296, -17, -159, 1, 454, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -194, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -155, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 530, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 469, -124,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -327, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -269, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -31, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 76, 182,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 238, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -470, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, 1, 5, 37, -524, -53,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimLandingAirX_joint6[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -733, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -845, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1027, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1057, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -884, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 86,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimLandingAirX_joint7[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3306, 169, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 3365, 0, 216, 0, 32, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 2435, -89, -388,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimLandingAirX_joint8[12] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -14, 1,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimLandingAirX_joint10[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 160, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 172, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimLandingAirX_joint11[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, -14, 250, -7, 433, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -53, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 149, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 597, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 472, -79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 570, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -86, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -123, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, -5, 144, -5, 592, 21,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimLandingAirX_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -449, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -596, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -611, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -771, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -833, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -991, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, -32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimLandingAirX_joint13[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 345, 87, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 352, 0, 152, 20, -276, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 270, 275, 62,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimLandingAirX_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 11),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimLandingAirX_joint17[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 76, -4, -116, -2, -1139, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 20, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 122, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -827, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -709, 115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -508, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 56, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 170, 34, 69, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 20, 70, 0, -472, 36,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimLandingAirX_joint19[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 952, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 716, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 598, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 493, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -47,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimLandingAirX_joint21[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1645, 13, 1485, -15, -1542, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1597, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1589, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1624, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1669, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1727, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1576, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1633, 30, -1545, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1735, -7, 1650, 17, -1528, 16,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimLandingAirX_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -65, 9, 190, 8, -601, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 153, 12, 118, -13, -101, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 6, 110, -8, -76, 24,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimLandingAirX_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1189, 35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 852, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 712, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 593, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -52,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimLandingAirX_joint25[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 155, 19, -76, -33, -626, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -429, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 180, 8, -60, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 178, -5, 53, 115,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 172, -11, 352, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -380, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -292, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, -10, 365, 12, -279, 12,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
