/* AnimJoint data for relocData file 2062 (FTPikachuAnimStunStartU) */
/* 3808 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimStunStartU_joint1[54];
extern u16 dFTPikachuAnimStunStartU_joint2[36];
extern u16 dFTPikachuAnimStunStartU_joint3[64];
extern u16 dFTPikachuAnimStunStartU_joint5[54];
extern u16 dFTPikachuAnimStunStartU_joint6[182];
extern u16 dFTPikachuAnimStunStartU_joint7[80];
extern u16 dFTPikachuAnimStunStartU_joint8[74];
extern u16 dFTPikachuAnimStunStartU_joint9[22];
extern u16 dFTPikachuAnimStunStartU_joint10[22];
extern u16 dFTPikachuAnimStunStartU_joint11[32];
extern u16 dFTPikachuAnimStunStartU_joint13[54];
extern u16 dFTPikachuAnimStunStartU_joint14[204];
extern u16 dFTPikachuAnimStunStartU_joint16[78];
extern u16 dFTPikachuAnimStunStartU_joint17[172];
extern u16 dFTPikachuAnimStunStartU_joint19[78];
extern u16 dFTPikachuAnimStunStartU_joint21[160];
extern u16 dFTPikachuAnimStunStartU_joint22[180];
extern u16 dFTPikachuAnimStunStartU_joint24[80];
extern u16 dFTPikachuAnimStunStartU_joint25[226];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimStunStartU_joints[] = {
	(u32)dFTPikachuAnimStunStartU_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimStunStartU_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimStunStartU_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimStunStartU_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimStunStartU_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimStunStartU_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimStunStartU_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimStunStartU_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimStunStartU_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimStunStartU_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimStunStartU_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimStunStartU_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimStunStartU_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimStunStartU_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimStunStartU_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimStunStartU_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimStunStartU_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimStunStartU_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimStunStartU_joint25, /* [24] joint 25 */
	0xFFFF03A1, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimStunStartU_joint1[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 615, 287,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -175,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 704, 14, 19, -47,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -848, -357, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 671, -12, 108, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 38, 0, 19, 0, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -26, -2, 33, 3, -28, -2,
	ftAnimSetValRate(FT_ANIM_TRAY), 673, 30,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), -26, 33, -28, 108,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimStunStartU_joint2[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -11, -60,
	ftAnimSetValRate(FT_ANIM_ROTX), -900, 123,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 45, 1608, 81, 0, 3,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 1, 1251, -56, 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 23, 133, 32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimStunStartU_joint3[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -61, 273, -120,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 458, -10, 533, -27, 393, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -163, -31, 0, -58, 0, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 140, 16, -50, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -24, -133, -50, 0, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -34, -8, -404, -64, 62, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -43, 2, -455, 48, 122, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -13, 0, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPikachuAnimStunStartU_joint5[54] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 500, -30, 63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 379, -141, -27, 43, 132, 236,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 324, -10, 24, 21, 359, 174,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 362, 31, 4, -74, 393, -110,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 363, 36, -68, -63, 221, -143,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 408, -30, -75, 4, 214, 70,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimStunStartU_joint6[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2265, -784, -866, -99, 2228, 643,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3050, -600, -965, -203, 2872, 444,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3467, -241, -1273, -244, 3118, 166,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3402, 200, 3092, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1454, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1241, 199,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1028, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3132, 117, 2975, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3166, 61, 3090, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3009, -105, 2956, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3378, -313, -1065, -158, 3370, 389,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1594, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3636, -126, 3736, 269,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3627, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 4169, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1695, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1533, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3687, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -4129, 48,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4197, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 4020, -85,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1521, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1236, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4072, 44, -1089, 121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1135, -369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4040, -128, 3955, 151,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 4601, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4329, -133,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -4168, 97,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1645, -320, 4580, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1825, -33, 4619, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4113, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4058, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4024, 33, -1843, -18, 4622, 3,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimStunStartU_joint7[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -784, -79,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -864, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -459, 427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -857, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -700, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -10, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -242, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -450, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimStunStartU_joint8[74] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -183, 354, -62,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -66, -26, 561, -57, 86, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -315, -60, 67, -80, 224, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -486, 14, 0, -9, 0, -22,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 48, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 149, 57, 0, -2, -3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 92, 8, -25, -74, -4, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 212, 33, -523, -41, -149, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 258, -25, -233, 42, -46, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -2, -163, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPikachuAnimStunStartU_joint9[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 434, 148, 2349,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 8, 32, 508,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 59, -12, 5, -4, 2401, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 59, 5, 2401,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimStunStartU_joint10[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 132, 55, 516,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -736, -4, 28, -1, 263, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimStunStartU_joint11[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -280, -178, -261,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -11, 0, 13, 0, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 21, 0, 31, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -452,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPikachuAnimStunStartU_joint13[54] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -525, -36, -17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -448, 164, -25, 67, 98, 307,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -320, 79, 48, -25, 365, 208,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -329, -100, -63, -99, 411, -85,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -446, -73, -75, -3, 259, -178,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -420, 93, -67, 10, 187, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimStunStartU_joint14[204] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -405, -131, 898, 87, -336, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -536, -382, 986, -128, -514, -434,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1170, -163, 640, -377, -1204, -182,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -13, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -863, 206, -879, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -758, 82, -790, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -813, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -761, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 5, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 25, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 24, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 213, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -813, -7, 233, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -860, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 0, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -773, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -782, 134,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -869, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -223, 272, -101, 32, -521, 148,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -564, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -325, -83, 65, 107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -309, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 114, 92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 390, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -492, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -388, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 469, 109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 911, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -339, 121, -362, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -65, -125, -40, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -589, -327, -546, -321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -720, -358, 921, 106, -683, -374,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1487, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1305, -501, -1295, -585,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2319, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1854, -296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1637, 100, -1887, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1688, 32, -1900, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2406, -86, 1701, 13, -1905, -4,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimStunStartU_joint16[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -214, -467,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -969, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -584, 479,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -475, -317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -634, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -511, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -509, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 254,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -269,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -538,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 269,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -10,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimStunStartU_joint17[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -348, 14, -147, 22, 446, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 8, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 87, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 519, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 538, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -119, -123, 304, -236,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -372, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 66, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -340, -481,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 295, 28, -896, -387,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -275, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1115, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -977, 127,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -728, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -208, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -269, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -249, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -480, 19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -230, 69, -493, 263,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 195, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -130, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 55, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -376, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -416, 158, 150, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -163, 185, -205, -277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -45, 78, -342, 22, -403, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -96, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -11, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -67, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -159, -149,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -487, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -52, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 48, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -466, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -423, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 10, 0, 10, -411, 12,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimStunStartU_joint19[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 497, 381,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 770, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 879, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 625, -275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 328, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 482, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 136, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 709, 271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 915, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 800, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 734, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 861, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1058, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 997, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 959, -38,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPikachuAnimStunStartU_joint21[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -121, -94, 104, -117, 144, -113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -364, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 222, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -178, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -434, -198,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -750, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -313, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -505, -146,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 437, 179,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 520, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -615, 73, -730, 171,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -156, 107, -150, 127,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 404, -103,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 137, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -142, -1, -153, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -339, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -516, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 111, 22, -441, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 216, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -630, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -221, 95, -483, 180,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -162, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 201, 0, -268, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 135, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -303, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -518, 20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -73, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -35, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 74, -52, -461, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 94, 40, -354, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4, 7, 124, 29, -358, -4,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimStunStartU_joint22[180] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1886, -21, -1611, 156, 1854, -343,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1209, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1865, 63, -1455, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2013, 87, -1567, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 2198, 76, -1499, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1226, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1118, -163,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2245, -57, -1578, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1791, -225,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1757, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 912, -198,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 446, -137,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1632, -130,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1418, -60,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, -123,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 482, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1393, 51, -1733, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1756, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1911, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 703, 193,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 936, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1752, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1558, 25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1929, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -2151, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1626, 215, 779, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1665, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1988, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2166, 46, -1912, 259,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1857, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1554, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1582, -20, 1654, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1575, 20, 1469, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1780, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1741, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1738, -3, -1553, 22, 1420, -49,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimStunStartU_joint24[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 685, 246,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 931, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 836, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 509, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 460, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 349, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 387, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 260, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 343, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 702, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 766, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 867, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 936, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 980, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 776, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 570, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 593, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 773, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 811, 37,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimStunStartU_joint25[226] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 145, -271, -54, 176, -400, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -453, -232, 53, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -450, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 39, 411,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 395, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -590, -164, -164, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -824, 129, -180, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -523, 322, -198, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 73, 183,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 212, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 232, -104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 303, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 189, 109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 279, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 192, -110,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -502, -92,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 302, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 251, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 59, -175, -508, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 102, 106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -323, 83,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 131, -106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -33, 69,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 200, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 151, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -213, 170, 84, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18, 147, 147, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -114, -132, 80, 39, -82, -265,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 205, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 236, 131, -499, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 362, 70, -410, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 320, -35, -484, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 190, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 49, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, -51, 287, -32, -490, -6,
	ftAnimEnd(),
	0x400E, 0x0011, 0xFDE9, 0xFC48, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x200F, 0x0005, 0xFDE7, 0xFFC5, 0xFE0F, 0x002D, 0xFC8C, 0x002D, 0x200F, 0x0005, 0xFDBD, 0x0023, 0xFFAB, 0x0047, 0xFE0B, 0x0045, 0x200F, 0x000A, 0xFFF5, 0x0029, 0x0241, 0x0009, 0x00A3, 0x000B, 0x200F, 0x0005, 0x002D, 0x0000, 0x0034, 0xFFC9, 0xFEBB, 0xFFF0, 0x380F, 0x0005, 0xFFF2, 0x0000, 0xFFFD, 0x0000,
};
