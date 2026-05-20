/* AnimJoint data for relocData file 2032 (FTPikachuAnimLandingAirD) */
/* 3840 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimLandingAirD_joint1[76];
extern u16 dFTPikachuAnimLandingAirD_joint2[60];
extern u16 dFTPikachuAnimLandingAirD_joint3[58];
extern u16 dFTPikachuAnimLandingAirD_joint5[44];
extern u16 dFTPikachuAnimLandingAirD_joint6[168];
extern u16 dFTPikachuAnimLandingAirD_joint7[70];
extern u16 dFTPikachuAnimLandingAirD_joint8[66];
extern u16 dFTPikachuAnimLandingAirD_joint9[10];
extern u16 dFTPikachuAnimLandingAirD_joint10[46];
extern u16 dFTPikachuAnimLandingAirD_joint11[46];
extern u16 dFTPikachuAnimLandingAirD_joint13[36];
extern u16 dFTPikachuAnimLandingAirD_joint14[180];
extern u16 dFTPikachuAnimLandingAirD_joint16[68];
extern u16 dFTPikachuAnimLandingAirD_joint17[174];
extern u16 dFTPikachuAnimLandingAirD_joint19[80];
extern u16 dFTPikachuAnimLandingAirD_joint21[182];
extern u16 dFTPikachuAnimLandingAirD_joint22[180];
extern u16 dFTPikachuAnimLandingAirD_joint24[70];
extern u16 dFTPikachuAnimLandingAirD_joint25[172];
extern u16 dFTPikachuAnimLandingAirD_joint26[82];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTPikachuAnimLandingAirD_joints[] = {
	(AObjEvent32 *)dFTPikachuAnimLandingAirD_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPikachuAnimLandingAirD_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPikachuAnimLandingAirD_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPikachuAnimLandingAirD_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTPikachuAnimLandingAirD_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTPikachuAnimLandingAirD_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPikachuAnimLandingAirD_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTPikachuAnimLandingAirD_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTPikachuAnimLandingAirD_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPikachuAnimLandingAirD_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPikachuAnimLandingAirD_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTPikachuAnimLandingAirD_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTPikachuAnimLandingAirD_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTPikachuAnimLandingAirD_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTPikachuAnimLandingAirD_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTPikachuAnimLandingAirD_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTPikachuAnimLandingAirD_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTPikachuAnimLandingAirD_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTPikachuAnimLandingAirD_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTPikachuAnimLandingAirD_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimLandingAirD_joint1[76] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -26, 33, -28, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 590, 97,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4915, 2048, 4915,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 526, -101, 97, -17,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 14), 4915, 1843, 4915,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 809,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1500, 1425, 58, -559,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 2867, 5324, 2867,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 409,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 848, -497, 4096, 4096, 4096,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -997, -684,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 18), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 628, -161, -540, 114,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 727, -50, -411, 354,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 583, -34, -230, 346,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 675, 108,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimLandingAirD_joint2[60] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1104, -836, 292,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 1104, -836, 292,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1471, -538, -54,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -29, 87, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 856, -115, -93, 72, 208, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 660, -38, -31, 23, 26, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 627, -54, 46, 14, 27, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 282, -50, 73, 7, 28, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 23, 133, 32,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimLandingAirD_joint3[58] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 143,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 14), 143,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 11), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 79, 3, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 27, 16, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 213, -5, 0, 0, -1, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -13, 0, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPikachuAnimLandingAirD_joint5[44] = {
	ftAnimSetVal(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 413, 44, 268,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 413, 44, 268,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 352, -80, 266,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 24, 3, 13,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 448, -50, 49, 126, 288, 107,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 289, -66, 77, -59, 400, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimLandingAirD_joint6[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -807, 0, 1972, -2, 181, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -814, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 1937, 23, 137, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1972, -30, 181, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1876, 90, 166, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -812, 17, 2153, -73, 635, 498,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -878, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1729, -287, 1162, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1577, -22, 1125, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1683, 193, 1348, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1012, -16, 1964, -144, 1242, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -911, 6, 1395, -314, 805, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -998, -77, 1336, 13, 870, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1869, 82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 753, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -967, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -868, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -853, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1829, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1846, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1626, -161,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1408, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1094, -199, 889, 146,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -915, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1140, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1386, -20, 1074, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1248, 119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1364, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -865, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -821, 30, 1359, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 17, 1371, 7, 1406, 47,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimLandingAirD_joint7[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -555,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1120, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -429, 560,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -436,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -873,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 436,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -334, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -95, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimLandingAirD_joint8[66] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 122,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 14), 122,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 2, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 8), 217,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -209, -110, 0, -4, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -448, -17, -27, -8, 3, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -330, 18, -60, -12, 7, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -303, 40, -123, -12, 15, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -2, -163, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPikachuAnimLandingAirD_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimLandingAirD_joint10[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -384, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -384, -3, 0, 4, 0, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -483, -1, 133, 8, 266, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -419, 19, 153, 12, 82, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -330, 52, 231, -19, 185, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimLandingAirD_joint11[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -505, -133, -86,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -505, 3, -133, -1, -86, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -418, 14, -168, -7, -147, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -239, -4, -271, 0, -56, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -458, 29, -165, 33, -238, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimLandingAirD_joint13[36] = {
	ftAnimSetVal(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -386, 71, 250,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), -386, 71, 250,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -407, -51, 242,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 36, -40, 76,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -320, 30, -1, -4, 390, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimLandingAirD_joint14[180] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 800, 1, 1248, 56, 202, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 161, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 800, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), 1421, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1403, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1237, 59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 202, 196,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1000, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 776, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 994, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1367, 145,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1887, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1111, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1027, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1178, 216, 1219, 98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 949, -306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1428, -44, 2104, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1089, -332, 1813, -473,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 763, -148, 1156, -358, 611, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 791, 0, 1097, -29, 627, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 805, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1098, 5, 565, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1210, 166, 625, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1442, 204, 567, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1053, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1735, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 830, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1133, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1107, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 812, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1019, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1021, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1730, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1705, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1150, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1263, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -8, 1703, -2, 1311, 47,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimLandingAirD_joint16[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -129, 119,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -129, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -624, -369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -749, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, 369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 93,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimLandingAirD_joint17[174] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1786, 0, -1683, 0, 1928, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), 1757, 21, -1735, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1710, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1701, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1768, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1788, -8, -1684, -25, 1924, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1825, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1673, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1621, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1427, -184,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1044, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1844, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1943, 10, -2045, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1694, -189, -1852, 139, 1054, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 918, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1412, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1565, -111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1351, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1011, 87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1011, -201,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1331, 72, -1197, 155,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1717, 116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1488, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 718, -260,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 545, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1729, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1831, -29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1503, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1606, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1796, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1668, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 545, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 865, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1031, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1154, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1666, -1, -1609, -2, 1201, 46,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimLandingAirD_joint19[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 404, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 461, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 461, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 345, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 459, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 472, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 568, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 593, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 767, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 676, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 661, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 565, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 491, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1025, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1005, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 966, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, -19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimLandingAirD_joint21[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -25, 8, -153, -1, 422, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), -17, 3, -159, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 107, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 109, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 237, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, -90, -154, -30, 419, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -214, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -199, -81, 286, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -183, 53, 430, 143,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 551, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -92, -125, -135, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -434, 76, -162, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 61, 284, -401, -94, -54, -429,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -69, 100, -167, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 133, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -170, -93,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, 12, -60, 129,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 215, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -174, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -239, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -334, -47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 116, -101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 157, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 45, 143,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 75, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -391, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -101, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 290, 130,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 288, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 111, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 129, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 152, -146,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -334, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -73, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -2, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, 8, 127, -1, -353, -19,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimLandingAirD_joint22[180] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -210, 0, -142, -1, 310, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -144, 30, 312, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -211, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -213, 137,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 303, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -104, 60, 274, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -22, 243, 227, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 381, 283, -173, -559,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 514, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -223, -301, -891, -434,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -100, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1043, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1026, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 245, 193, 429, -80, -743, 212,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 435, 67, -506, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 288, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 248, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 402, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 485, 12, -522, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -294, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 355, 47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 543, 80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 443, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -253, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 297, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 414, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 376, -103,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 478, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 289, -102,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 259, -109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -41, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 309, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -136, -102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 195, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 147, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 128, -18, -57, -16, -192, -56,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimLandingAirD_joint24[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 731, 475,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 950, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1023, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1072, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 658, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 587, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 664, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 555, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 332, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 433, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 726, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 660, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 806, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 807, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimLandingAirD_joint25[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -40, -6, 341, 3, 611, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -143, 98, 394, -46, 594, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -39, 7, 343, -141, 619, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -156, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -129, 5, 481, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -29, 43, 434, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -42, 33, -244, -95, 146, -182,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -445, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 37, -3, 69, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -49, 2, 197, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 41, 0, -302, 174, -112, -152,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 90, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 202, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -49, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 23, 81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 122, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 128, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -184, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 274, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -220, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 122, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 352, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 383, 31, -206, 19, -280, -98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -407, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 12, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 392, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 316, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 47, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -350, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -446, -48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 179, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 267, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6, -54, 284, 17, -484, -37,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimLandingAirD_joint26[82] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAZ), -1, -180, -354, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -47, 78, -1327,
	ftAnimSetValBlock(FT_ANIM_SCAY), 4096,
	ftAnimSetValT(FT_ANIM_SCAY, 14), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -22, 2, 65, 0, -1454, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -25, -2, 78, 1, -1311, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -47, 8, 78, 0, -1327, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 54, 23, 79, -6, -1054, 37,
	ftAnimSetValBlockT(FT_ANIM_SCAY, 4), 1400,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 286, -32, -21, 0, -780, 50,
	ftAnimSetValBlockT(FT_ANIM_SCAY, 2), 4096,
	ftAnimSetValT(FT_ANIM_SCAY, 20), 4096,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -522, -25, 96, 1, -139, 64,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -14, 0, -3,
	ftAnimEnd(),
	0x0000, 0x0000,
};
