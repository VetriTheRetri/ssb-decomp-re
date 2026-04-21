/* AnimJoint data for relocData file 1940 (FTYoshiAnimLandingAirB) */
/* 1888 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimLandingAirB_joint1[26];
extern u16 dFTYoshiAnimLandingAirB_joint2[46];
extern u16 dFTYoshiAnimLandingAirB_joint3[42];
extern u16 dFTYoshiAnimLandingAirB_joint6[54];
extern u16 dFTYoshiAnimLandingAirB_joint7[66];
extern u16 dFTYoshiAnimLandingAirB_joint8[34];
extern u16 dFTYoshiAnimLandingAirB_joint10[22];
extern u16 dFTYoshiAnimLandingAirB_joint11[66];
extern u16 dFTYoshiAnimLandingAirB_joint12[42];
extern u16 dFTYoshiAnimLandingAirB_joint13[22];
extern u16 dFTYoshiAnimLandingAirB_joint14[10];
extern u16 dFTYoshiAnimLandingAirB_joint15[26];
extern u16 dFTYoshiAnimLandingAirB_joint17[32];
extern u16 dFTYoshiAnimLandingAirB_joint18[70];
extern u16 dFTYoshiAnimLandingAirB_joint20[40];
extern u16 dFTYoshiAnimLandingAirB_joint22[84];
extern u16 dFTYoshiAnimLandingAirB_joint23[78];
extern u16 dFTYoshiAnimLandingAirB_joint25[32];
extern u16 dFTYoshiAnimLandingAirB_joint26[100];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimLandingAirB_joints[] = {
	(u32)dFTYoshiAnimLandingAirB_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimLandingAirB_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimLandingAirB_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimLandingAirB_joint6, /* [3] joint 6 */
	0x00000000, /* [4] NULL */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimLandingAirB_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimLandingAirB_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimLandingAirB_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimLandingAirB_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimLandingAirB_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimLandingAirB_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimLandingAirB_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimLandingAirB_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimLandingAirB_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimLandingAirB_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimLandingAirB_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimLandingAirB_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimLandingAirB_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimLandingAirB_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimLandingAirB_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimLandingAirB_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 172, 295,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 172, 295,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 172, 363,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 5), 295,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -215,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 672, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimLandingAirB_joint2[46] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY), 83, 0, 0, -2, -2, -2, 144, 41,
	ftAnimSetValBlock(FT_ANIM_TRAZ), -201,
	ftAnimSetValT(FT_ANIM_TRAZ, 13), -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 83, -5, 0, -5, -2, 1, 144, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY, 11), 0, 0, -89, 1, 0, 0, 30, -29,
	ftAnimBlock(0, 8),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 111,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 20, 76,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimLandingAirB_joint3[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 573, 31, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 573, -6, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 492, -18, 0, -26, 0, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 405, -158, -221, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 16, -20, 0, 11, 0, 10,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimLandingAirB_joint6[54] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -587, -12, 41, 2, -144, -3,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 16, 531, 234,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 16, -8, 531, 34, 234, 47,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -587, 41, -144,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 0, 600, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -587, 114, 41, -4, -144, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 443, 95, 4, -5, -13, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 78, -11, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimLandingAirB_joint7[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1603, 4, -1605, 1, -53, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), -1600, 2, -1546, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -98, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -92, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -51, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 329, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 615, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1580, -117, -1513, 274, 619, 231,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1961, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -997, 170, 1078, 341,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1171, -200, 1302, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1638, 322, -1399, -227, 967, -335,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimLandingAirB_joint8[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -489, -282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -573, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -8, -296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -807, -378,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 42,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimLandingAirB_joint10[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -956,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -956, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -546, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1072, 91,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimLandingAirB_joint11[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1601, 5, -1605, 1, -53, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), -1620, -9, -1556, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -122, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -137, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 178, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 467, 308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 794, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1614, 43, -1529, 190, 800, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1533, -28, -1176, 132, 730, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1671, -80, -1264, -117, 977, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1694, -23, -1411, -146, 1111, 134,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimLandingAirB_joint12[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -570, -410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -820, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -841, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -451, 420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -385, -501,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, -616,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimLandingAirB_joint13[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -956,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -956, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -546, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1072, 91,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimLandingAirB_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimLandingAirB_joint15[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 310, -17, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -319, -62, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -506, 11, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -190, 21, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimLandingAirB_joint17[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -39, 18, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 360, -24, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -358, -51, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -153, 3, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimLandingAirB_joint18[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1656, -6, 1699, -5, -953, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1618, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1630, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -917, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -953, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1213, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1270, -159,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2094, -157,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1602, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1608, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1628, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1608, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2192, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1768, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1614, -5, 1603, -5, -1612, 156,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimLandingAirB_joint20[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 88, -81,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 6, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 88, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 457, 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 718, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1180, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1004, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 462, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -200,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimLandingAirB_joint22[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 92, 1, 1329, 6, 2273, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 92, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1287, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 2345, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2273, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 54, -114, 1949, -484,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -136, -87, 1297, 120, 1303, -637,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -120, 64, 1527, 162, 674, -422,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 38, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1622, 56, 459, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1697, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 778, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 29, -11, 978, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 4, 0, 1299, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, 1, 1692, -5, 1344, 44,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimLandingAirB_joint23[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1594, 1, 1473, 0, -1258, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1459, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1542, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1258, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1344, -66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1665, -319,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1454, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1605, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1529, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1618, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2056, -328,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2109, 208,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1596, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1610, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1888, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, -9, 1608, -2, -1762, 125,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimLandingAirB_joint25[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, -21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 438, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 655, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1356, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1362, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 516, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -137,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimLandingAirB_joint26[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -127, 0, -1261, -6, -972, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -127, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1203, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -897, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -972, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -70, 185, -1251, -508,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 244, 164, -1220, -148, -1990, -666,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 259, -64, -1501, -190, -2583, -378,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 35, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1600, -36, -2746, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2304, 230,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1501, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 17, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2102, 182,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1850, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1512, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 3, -1519, -6, -1837, 13,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
