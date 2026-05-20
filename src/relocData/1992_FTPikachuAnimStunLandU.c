/* AnimJoint data for relocData file 1992 (FTPikachuAnimStunLandU) */
/* 3136 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimStunLandU_joint1[50];
extern u16 dFTPikachuAnimStunLandU_joint2[38];
extern u16 dFTPikachuAnimStunLandU_joint3[46];
extern u16 dFTPikachuAnimStunLandU_joint5[30];
extern u16 dFTPikachuAnimStunLandU_joint6[122];
extern u16 dFTPikachuAnimStunLandU_joint7[48];
extern u16 dFTPikachuAnimStunLandU_joint8[38];
extern u16 dFTPikachuAnimStunLandU_joint9[22];
extern u16 dFTPikachuAnimStunLandU_joint10[54];
extern u16 dFTPikachuAnimStunLandU_joint11[38];
extern u16 dFTPikachuAnimStunLandU_joint13[30];
extern u16 dFTPikachuAnimStunLandU_joint14[130];
extern u16 dFTPikachuAnimStunLandU_joint16[56];
extern u16 dFTPikachuAnimStunLandU_joint17[174];
extern u16 dFTPikachuAnimStunLandU_joint19[100];
extern u16 dFTPikachuAnimStunLandU_joint21[150];
extern u16 dFTPikachuAnimStunLandU_joint22[126];
extern u16 dFTPikachuAnimStunLandU_joint24[70];
extern u16 dFTPikachuAnimStunLandU_joint25[152];
extern u16 dFTPikachuAnimStunLandU_joint26[42];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTPikachuAnimStunLandU_joints[] = {
	(AObjEvent32 *)dFTPikachuAnimStunLandU_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPikachuAnimStunLandU_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPikachuAnimStunLandU_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPikachuAnimStunLandU_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTPikachuAnimStunLandU_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTPikachuAnimStunLandU_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPikachuAnimStunLandU_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTPikachuAnimStunLandU_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTPikachuAnimStunLandU_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPikachuAnimStunLandU_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPikachuAnimStunLandU_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTPikachuAnimStunLandU_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTPikachuAnimStunLandU_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTPikachuAnimStunLandU_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTPikachuAnimStunLandU_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTPikachuAnimStunLandU_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTPikachuAnimStunLandU_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTPikachuAnimStunLandU_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTPikachuAnimStunLandU_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTPikachuAnimStunLandU_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimStunLandU_joint1[50] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 280,
	ftAnimSetValRate(FT_ANIM_TRAY), 566, 4508,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 1994, 237,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 280,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 232,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), 280, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), 2037, -63,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -212,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 977, -2318,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 282, 5,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -1185,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 615, -55,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), 287,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimStunLandU_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -957, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1054, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -1054, -7, 0, 0, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1155, 12, -3, 0, -20, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -900, -11, -60,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimStunLandU_joint3[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 204, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -278, -35, 57, 11, -34, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -291, -5, 157, -1, -97, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -352, 68, 41, -11, -17, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 119, 36, 88, 29, -35, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -61, 273, -120,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimStunLandU_joint5[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 362, 56, -78, 49, 267, -118,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 422, 50, 23, 17, 106, -74,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 500, -30, 63,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimStunLandU_joint6[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2319, 8, -1671, 69, -2402, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2351, 145, -2396, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1601, 262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1145, 359,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -930, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2619, 288, -2643, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2929, 77, -2925, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2774, 14, -2745, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 3125, 147, -3063, -134,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -936, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -951, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3253, 97, -3179, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 3348, -36, -3303, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3299, -53, -3276, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 3078, -28, -3132, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3118, 195, -3197, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3469, 266, -929, 18, -3565, -273,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -869, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3652, 168, -3743, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 4104, 103, -4146, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4168, 64, -866, 3, -4205, -58,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimStunLandU_joint7[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -626, -296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -593, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -686, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -774, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -784, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimStunLandU_joint8[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -345, -37, 317, 25, -30, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -344, 24, 358, 2, -70, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 39, 13, 359, 0, -68, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -183, 354, -62,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimStunLandU_joint9[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 59, 5, 2401,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 8, 32, 508,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 59, 14, 5, 5, 2401, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 434, 148, 2349,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimStunLandU_joint10[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -368, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 306, 48, -232, -16, 234, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 306, -55, -232, -1, 234, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -467, -25, -258, 138, 37, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 180, 99, 459, 518, 836, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -268, -6, 778, -57, 111, -45,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 132, 55, 516,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimStunLandU_joint11[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -409, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 253, 47, 180, 12, -291, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 253, -72, 180, -12, -291, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -763, -44, 11, -29, -343, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -280, -178, -261,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimStunLandU_joint13[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -402, -44, -121, -33, 289, -13,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -402, -44, -121, 30, 289, -111,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), -525, -36, -17,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimStunLandU_joint14[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2132, 31, 1541, -145, -2100, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1042, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2229, -277, -2219, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2610, -223, -2528, -172,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2668, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2483, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1114, 84,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1340, 163,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2619, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -2342, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1537, 128, -2416, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -2393, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1705, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1709, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1627, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2364, -25, 1565, -168,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -2454, -120, 1091, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2398, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2616, -428,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2635, -440, 931, -108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 916, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3335, -520, -3305, -508,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3625, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3676, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -3689, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3622, 67, 898, -17, -3553, 71,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimStunLandU_joint16[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -318,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -672, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -653, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -350, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -465, -329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -668, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -304, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -214, 90,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimStunLandU_joint17[174] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1916, 62, -1524, 57, 1049, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1900, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1463, -41, 1348, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1525, 6, 1525, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1410, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1329, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1879, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1830, -59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1421, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2080, 188,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1333, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1413, 104,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1897, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1824, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2232, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2116, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1297, 111, 1890, -655,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1671, -21, -1191, -129, 806, -390,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1866, -81, -1556, -179, 1109, 106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 853, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1834, 8, -1549, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1849, 121, -1495, 102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1261, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1591, 78, 588, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1693, -109, 1055, 353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1809, -131, 1295, 256,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1862, 177,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2036, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1452, -94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1453, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1924, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1990, 39, 1985, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1956, 33, -1460, -6, 2054, 69,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimStunLandU_joint19[100] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, 209,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 751, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 632, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 327, -312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 218, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 428, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 499, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 269, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 56, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 328, 303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 663, 310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 949, -328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -471,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 101, 442,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 891, 347,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 796, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 692, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 473, -346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimStunLandU_joint21[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 189, -34, -153, 105, 214, -170,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -114, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 169, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 78, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 232, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 410, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 316, -96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -8, 60,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -148, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -167, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 184, 15, 68, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 221, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -39, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -144, 237, -122, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 308, 162, -59, -140, 420, 459,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 57, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 180, -54, 796, 139,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 303, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 698, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 544, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 175, -81, 50, 36, 249, -126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -23, -150,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 374, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 290, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 14, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -183, -69, -19, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -134, 21, 16, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 294, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 192, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -121, 12, 104, -88, 144, 128,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimStunLandU_joint22[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 257, 1, 45, 12, -324, 343,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 269, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 203, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 425, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 357, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -44, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -76, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -208, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 305, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 461, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 218, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 148, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -40, -86, -278, -84,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -28, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -426, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 267, -133,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 225, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -37, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -44, 73, -417, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 109, 108, -719, -168,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -64, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -754, 87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 55, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 236, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 243, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 258, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 229, -14, -117, -53, 381, 123,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimStunLandU_joint24[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 689, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 680, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 505, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 770, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 798, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 757, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 686, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 426, -343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -209,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 689, 496,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1000, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 365, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 135, -230,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimStunLandU_joint25[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -119, 117, 27, -93, -102, -232,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 10, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -32, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -334, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -263, 110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -67, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -29, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -248, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -73, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -108, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -49, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -134, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -70, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 249, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -341, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -474, -12, -139, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 45, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -366, 179, 612, 220,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 467, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -116, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -80, -19, 59, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -323, -76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 124, -60,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 342, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -309, 37, 47, -228,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 124, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -113, -171,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -310, 98,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 65, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 27, -25, -180, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, 7, 14, -13, -76, 103,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimStunLandU_joint26[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 443, -6, -1340,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -698, -81,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -6, -1340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -698, 92, -6, 5, -1340, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 596, 59, 75, -44, -1248, 32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 17, -535, -952,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
