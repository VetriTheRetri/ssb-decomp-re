/* AnimJoint data for relocData file 1556 (FTCaptainAnimStunLandD) */
/* 2288 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimStunLandD_joint2[48];
extern u16 dFTCaptainAnimStunLandD_joint4[70];
extern u16 dFTCaptainAnimStunLandD_joint5[150];
extern u16 dFTCaptainAnimStunLandD_joint6[68];
extern u16 dFTCaptainAnimStunLandD_joint7[16];
extern u16 dFTCaptainAnimStunLandD_joint8[36];
extern u16 dFTCaptainAnimStunLandD_joint10[18];
extern u16 dFTCaptainAnimStunLandD_joint11[128];
extern u16 dFTCaptainAnimStunLandD_joint12[40];
extern u16 dFTCaptainAnimStunLandD_joint13[44];
extern u16 dFTCaptainAnimStunLandD_joint14[10];
extern u16 dFTCaptainAnimStunLandD_joint16[56];
extern u16 dFTCaptainAnimStunLandD_joint17[100];
extern u16 dFTCaptainAnimStunLandD_joint19[46];
extern u16 dFTCaptainAnimStunLandD_joint21[84];
extern u16 dFTCaptainAnimStunLandD_joint22[76];
extern u16 dFTCaptainAnimStunLandD_joint24[44];
extern u16 dFTCaptainAnimStunLandD_joint25[60];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimStunLandD_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimStunLandD_joint2, /* [0] joint 2 */
	NULL, /* [1] NULL */
	(AObjEvent32 *)dFTCaptainAnimStunLandD_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimStunLandD_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimStunLandD_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimStunLandD_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimStunLandD_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimStunLandD_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimStunLandD_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimStunLandD_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimStunLandD_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimStunLandD_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimStunLandD_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimStunLandD_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimStunLandD_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimStunLandD_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimStunLandD_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimStunLandD_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimStunLandD_joint25, /* [24] joint 25 */
};

/* Joint 2 */
u16 dFTCaptainAnimStunLandD_joint2[48] = {
	ftAnimSetValRate(FT_ANIM_TRAY), 360, 2809,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 982, 0, 0, 17, -132,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 21), 23, 1, -25, 32,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 22), 697,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 268, 10, -321, -12,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 2164, -16,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 11), 163, -3034,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 23, 200, -25,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 697, 268, -321,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimStunLandD_joint4[70] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 284, 14, 12, 0, -12, 110,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -680, -21, 270, -2, -537, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 82, 61, 7, 15, -56, -343,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 47, -27, 0, 4, -154, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -158, 26, -45, -15, 44, 29,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 34, -38, 15, 20, -67, 67,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -27, -30, 38, -41, -23, 102,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -158, -45, 44,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -31, 47,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimStunLandD_joint5[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2741, -205, -605, -54, 2851, 209,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -550, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2946, -487, 3060, 493,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3717, -510, 3837, 433,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3844, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3967, -232, -126, 263,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -286, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4182, -105,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -4162, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3956, 97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 4084, 87,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4152, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -3894, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -276, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -136, 119,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3775, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3757, -252, -7, 87, 4194, -150,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -234, -452,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4280, -229, 3783, -254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4216, 467, 3686, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3345, 217, -866, -460, 3215, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1434, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3781, -189, 3721, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3725, 55, 3689, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3603, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1727, -238, 3625, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1934, 31, 3619, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3643, -40, -1902, 32, 3629, 10,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimStunLandD_joint6[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1052, -78,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1231, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -965, 311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -173, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -5, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -282, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1348, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1318, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -923, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -736, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -430, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -490, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -522, -32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimStunLandD_joint7[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -411, 77, 74,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimStunLandD_joint8[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -89, -19, -268, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -134, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -245, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), 0, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 268, 67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 268, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimStunLandD_joint10[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -134, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -134, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimStunLandD_joint11[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1656, 2, 1332, 2, 1486, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1269, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1275, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1535, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1484, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1664, 189,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1243, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1646, 314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1236, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1059, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2018, 359, 1856, 118,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2798, 486, 2111, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1048, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 973, 44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3339, 411, 2559, 351,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 3773, 148, 2958, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1054, 79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1311, 181,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3919, 354, 3095, 321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4482, 409, 3601, 344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4738, 186, 1539, 166, 3785, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4855, 79, 1644, 65, 3826, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4896, 41, 1671, 26, 3831, 4,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimStunLandD_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -917, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -643, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -815, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1088, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -925, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -515, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -398, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -338, 60,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimStunLandD_joint13[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -180, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 272, 30, 304, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), 671, -48, -25, 2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -220, -308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 333, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 263, 113, 343, -118,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -564, 159, -21,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimStunLandD_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimStunLandD_joint16[56] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -625, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 7, -23,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 26), -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -804, 24,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 285, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -215, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -308, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -462, -166,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -227, 87,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 7), 409,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -606, 47,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTCaptainAnimStunLandD_joint17[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -93, 39, -99, -1, -515, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 0, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -182, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -138, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 75, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -77, -36, 300, 118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -42, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 312, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 167, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -164, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 143, 9,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -46, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -172, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -196, 347, 151, -111, 144, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 522, 397, -79, -142, -146, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 597, -41, -134, 3, -130, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 440, -137, -71, 51, -125, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 323, -116, -31, 39, -144, -19,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimStunLandD_joint19[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 548, 47,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 329, -269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -164,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 85, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 93, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 182, 89,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimStunLandD_joint21[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 129, -67, -143, -6, -257, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 252, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -106, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -296, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -527, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -642, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -552, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -685, -44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 280, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 630, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -734, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1431, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1537, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1618, 480,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -576, 525,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -566, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -558, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -592, -34, -106, 0, 632, 1,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimStunLandD_joint22[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 52, -10, 37, 0, -759, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 431, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 129, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -341, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -286, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 312, 11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 446, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 434, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 188, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 373, -33,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 314, -92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -242, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 290, -34, 464, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 385, 30, 160, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 364, -21, 6, -153, -333, -91,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimStunLandD_joint24[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 667, 33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 933, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 401, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 391, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 405, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 897, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 880, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 787, -92,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimStunLandD_joint25[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -150, 33, 319, -3, -115, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -340, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 307, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 604, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 689, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 695, -24,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -352, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -375, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 669, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 125, -568,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -578, -342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -560, 17, -376, 0, 308, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
