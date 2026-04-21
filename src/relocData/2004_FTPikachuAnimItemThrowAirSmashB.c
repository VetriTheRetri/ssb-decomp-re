/* AnimJoint data for relocData file 2004 (FTPikachuAnimItemThrowAirSmashB) */
/* 3392 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimItemThrowAirSmashB_joint1[40];
extern u16 dFTPikachuAnimItemThrowAirSmashB_joint2[54];
extern u16 dFTPikachuAnimItemThrowAirSmashB_joint3[70];
extern u16 dFTPikachuAnimItemThrowAirSmashB_joint5[46];
extern u16 dFTPikachuAnimItemThrowAirSmashB_joint6[176];
extern u16 dFTPikachuAnimItemThrowAirSmashB_joint7[42];
extern u16 dFTPikachuAnimItemThrowAirSmashB_joint8[72];
extern u16 dFTPikachuAnimItemThrowAirSmashB_joint9[10];
extern u16 dFTPikachuAnimItemThrowAirSmashB_joint10[62];
extern u16 dFTPikachuAnimItemThrowAirSmashB_joint11[62];
extern u16 dFTPikachuAnimItemThrowAirSmashB_joint13[46];
extern u16 dFTPikachuAnimItemThrowAirSmashB_joint14[138];
extern u16 dFTPikachuAnimItemThrowAirSmashB_joint16[38];
extern u16 dFTPikachuAnimItemThrowAirSmashB_joint17[154];
extern u16 dFTPikachuAnimItemThrowAirSmashB_joint19[64];
extern u16 dFTPikachuAnimItemThrowAirSmashB_joint21[114];
extern u16 dFTPikachuAnimItemThrowAirSmashB_joint22[164];
extern u16 dFTPikachuAnimItemThrowAirSmashB_joint24[72];
extern u16 dFTPikachuAnimItemThrowAirSmashB_joint25[154];
extern u16 dFTPikachuAnimItemThrowAirSmashB_joint26[66];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimItemThrowAirSmashB_joints[] = {
	(u32)dFTPikachuAnimItemThrowAirSmashB_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimItemThrowAirSmashB_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimItemThrowAirSmashB_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimItemThrowAirSmashB_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimItemThrowAirSmashB_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimItemThrowAirSmashB_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimItemThrowAirSmashB_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimItemThrowAirSmashB_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimItemThrowAirSmashB_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimItemThrowAirSmashB_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimItemThrowAirSmashB_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimItemThrowAirSmashB_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimItemThrowAirSmashB_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimItemThrowAirSmashB_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimItemThrowAirSmashB_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimItemThrowAirSmashB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimItemThrowAirSmashB_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimItemThrowAirSmashB_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimItemThrowAirSmashB_joint25, /* [24] joint 25 */
	(u32)dFTPikachuAnimItemThrowAirSmashB_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimItemThrowAirSmashB_joint1[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -26, 1114, -108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 33, -28, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 24), -26,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 910, -271, -183, -100,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 910, 66, -183, 582,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 968, -112, 326, 421,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 826, 78, 132, -233,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 1114, -108,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimItemThrowAirSmashB_joint2[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 999, -124, 300,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -196, -199, 133, 42, 32, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -196, 148, 133, -12, 32, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 842, 173, 47, 21, 52, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 841, 239, 264, -8, 55, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 3001, 281, -28, -32, 27, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 4216, -124, 300,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimItemThrowAirSmashB_joint3[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -173, 58, -73,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -231, -9, -85, -23, 33, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -231, -14, -85, 12, 33, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -332, 86, 0, 39, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 286, 120, 150, 23, 33, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 390, 11, 142, -25, 8, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 357, -28, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 217, -88, 144, 9, 9, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -173, 58, -73,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimItemThrowAirSmashB_joint5[46] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 199, -70, 479,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 461, 349, -46, 32, 282, -262,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 461, -11, -46, -8, 282, -111,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 451, 24, -54, -24, 185, -269,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 479, -135, -65, -8, 80, 157,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 199, -70, 479,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimItemThrowAirSmashB_joint6[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1620, -72, -1551, 243, -2419, -232,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1160, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1547, -572, -2652, -315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 475, -532, -3050, -204,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3047, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 482, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 478, -6, -1187, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 472, 65, -1161, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3028, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3306, -554,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 601, 363, -995, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1173, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1199, 337, -4156, -514,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1276, 108, -4335, -136,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1642, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1188, 6, -4430, -114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -4757, -367,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1171, -167,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1917, 611,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2864, 787, -5300, -449,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -5771, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3493, 433, -1455, -190,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1579, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3732, 412,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4317, 462,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 4828, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5791, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -5859, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1582, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1556, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4843, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4838, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5716, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5650, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4837, -1, -1551, 4, -5636, 13,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimItemThrowAirSmashB_joint7[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -758, 293,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -465, 374,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -437, -337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -684, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -758, -74,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimItemThrowAirSmashB_joint8[72] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -478, -335, -28,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -219, 43, -203, 22, -3, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -219, -2, -203, 29, -3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -235, 71, 0, 88, 0, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 212, 64, 329, 31, 79, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 153, -16, 187, -54, 59, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 110, -27, 0, -55, 0, -16,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -106, -98, -146, -55, -36, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -478, -335, -28,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimItemThrowAirSmashB_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1598, -1559, 4035, 39, 48, 495,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimItemThrowAirSmashB_joint10[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -132, 170, 229,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 295, 71, -116, -47, 188, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 295, -87, -116, 41, 188, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -316, -90, 177, 53, 219, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -248, -15, 204, 3, 283, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -409, -33, 198, -7, 276, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -451, 30, 157, -3, 219, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -132, 170, 229,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimItemThrowAirSmashB_joint11[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, -171, -270,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 224, 37, 267, 73, -266, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 224, -69, 267, -68, -266, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -261, -69, -209, -82, -241, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -191, 16, -226, 0, -315, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -163, -49, -213, 0, -311, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -487, 17, -221, 4, -315, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -3, -171, -270,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimItemThrowAirSmashB_joint13[46] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -469, 245, 91,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -472, -2, 19, -300, 222, 175,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -472, 53, 19, -84, 222, -6,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -424, 165, -54, -235, 216, 247,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -347, -24, -156, 160, 408, -67,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), -469, 245, 91,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimItemThrowAirSmashB_joint14[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, -281, 122, 0, -890, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1087, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 90, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1086, -410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1626, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1681, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1674, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1710, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1070, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 117, 86, -1055, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 263, 266, -1029, -162,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1817, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 649, 350,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1518, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1981, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2056, -151, -1896, -99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2368, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2285, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2525, -362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3010, -346, 1694, 165,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2840, 142,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1570, -50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2445, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2499, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2708, 116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2421, 16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1521, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1491, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2413, 8, 1485, -6, -2499, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimItemThrowAirSmashB_joint16[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -456, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimItemThrowAirSmashB_joint17[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1606, 356, -1367, 125, -2587, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1963, -23, -1241, 10, -2522, 618,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1559, -208, -1345, -88, -1350, 668,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1345, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1547, -6, -1186, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1546, 0, -1157, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1685, 120, -1711, -406,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1269, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1282, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1800, 1, -2162, -246,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1810, 504,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1240, -89,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1265, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1553, -195, -1194, 392,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1281, 43, -1655, -43, -1025, 105,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1586, 139, -1380, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -984, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1225, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1481, -309,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2163, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1709, 56, -1346, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1585, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1358, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2236, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2568, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1572, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1601, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1606, 5, -1367, -8, -2587, -19,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimItemThrowAirSmashB_joint19[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 932, 344,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1276, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 768, -352,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 768, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 988, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 964, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 848, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 187, -424,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 542, 460,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1086, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 964, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 930, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimItemThrowAirSmashB_joint21[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1377, 216, -1648, -82, -1022, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1161, -79, -1730, -133, -1150, -368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1536, -254, -1914, -89, -1758, -373,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1587, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1913, -5, -1883, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1919, 0, -1805, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1677, 169,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1652, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1707, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1418, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1060, 151, -1457, 192,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1074, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1114, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1135, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1448, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1430, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1370, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1057, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1023, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1650, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1648, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1377, -7, -1648, 0, -1022, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimItemThrowAirSmashB_joint22[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 203, -672, 533, 120, -780, -325,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1314, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -468, -837, 653, 458,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1471, -543, 1450, 453,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1555, -31, 1560, 53, -1083, 149,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1314, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1534, 36, 1557, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1495, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1526, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1624, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1601, 82, -1767, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1642, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1546, 15, -1610, 126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1292, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1514, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1156, 258,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -971, -156,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1447, -192,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1730, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1309, -293,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2031, -310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1738, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1353, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1704, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1870, 94,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1255, -77, -2367, -289,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2657, 86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1066, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1735, 150,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1448, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2533, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2428, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1404, 43, 1074, 8, -2388, 39,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimItemThrowAirSmashB_joint24[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 595, 444,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1040, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 535, -424,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 103, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 535, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 698, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 125, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 567, 453,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 912, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 637, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 595, -41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimItemThrowAirSmashB_joint25[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -257, 824, -74, -82, 278, -102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -331, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 566, 220, 175, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 182, -174, -80, -164,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -80, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 218, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 222, -14, -338, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -189, 187,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 139, -22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 16, 137,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 348, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 74, 211,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 176, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 81, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -211, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -315, -5, 23, -126, 311, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -137, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 39, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -222, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -248, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -224, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -541, -330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -886, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -845, 254, -133, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -78, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -378, 324, 1, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 14, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -196, 103,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -254, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 159, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 253, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -257, -2, -74, 4, 278, 24,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimItemThrowAirSmashB_joint26[66] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -543, -164, -504,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 113, -14, 0, 0, -3, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 113, -14, 0, 0, -3, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -608, 1, 44, 25, -768, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -600, 66, -43, -39, -802, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -209, 109, -192, -25, -686, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 58, -37, -198, 3, -606, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -543, -164, -504,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
