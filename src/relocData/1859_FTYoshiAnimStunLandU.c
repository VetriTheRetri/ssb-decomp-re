/* AnimJoint data for relocData file 1859 (FTYoshiAnimStunLandU) */
/* 2320 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimStunLandU_joint1[46];
extern u16 dFTYoshiAnimStunLandU_joint2[10];
extern u16 dFTYoshiAnimStunLandU_joint3[30];
extern u16 dFTYoshiAnimStunLandU_joint4[38];
extern u16 dFTYoshiAnimStunLandU_joint6[22];
extern u16 dFTYoshiAnimStunLandU_joint7[132];
extern u16 dFTYoshiAnimStunLandU_joint8[48];
extern u16 dFTYoshiAnimStunLandU_joint10[16];
extern u16 dFTYoshiAnimStunLandU_joint11[140];
extern u16 dFTYoshiAnimStunLandU_joint12[48];
extern u16 dFTYoshiAnimStunLandU_joint13[44];
extern u16 dFTYoshiAnimStunLandU_joint14[10];
extern u16 dFTYoshiAnimStunLandU_joint15[24];
extern u16 dFTYoshiAnimStunLandU_joint17[24];
extern u16 dFTYoshiAnimStunLandU_joint18[116];
extern u16 dFTYoshiAnimStunLandU_joint20[48];
extern u16 dFTYoshiAnimStunLandU_joint22[84];
extern u16 dFTYoshiAnimStunLandU_joint23[98];
extern u16 dFTYoshiAnimStunLandU_joint25[130];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimStunLandU_joints[] = {
	(u32)dFTYoshiAnimStunLandU_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimStunLandU_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimStunLandU_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimStunLandU_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimStunLandU_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimStunLandU_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimStunLandU_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimStunLandU_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimStunLandU_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimStunLandU_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimStunLandU_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimStunLandU_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimStunLandU_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimStunLandU_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimStunLandU_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimStunLandU_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimStunLandU_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimStunLandU_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimStunLandU_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF021B, /* [25] END */
};

/* Joint 1 */
u16 dFTYoshiAnimStunLandU_joint1[46] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY), 1184, 71, 212, 2552,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 7), 1527, 0, 1680, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1238, -47,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 11), 418, -1705,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 2), 273,
	ftAnimBlock(0, 1),
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 1442,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_TRAY), 36, 891,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 6), 1422, -27, 273, -833,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimStunLandU_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 144, -190,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimStunLandU_joint3[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 1266, -151,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 496, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 1161, 73,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 73,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 754,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 841, 181,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimStunLandU_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 226, 0,
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 28, 0,
	ftAnimSetValT(FT_ANIM_ROTY, 19), -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -232, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 284, 51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -83, -24,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 465, -294, -236,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 249, -524, -379,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimStunLandU_joint6[22] = {
	ftAnimSetVal(FT_ANIM_ROTX), 0,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 97,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 460,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 0, -84,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimStunLandU_joint7[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1271, -25, -1208, 65, 556, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1044, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1028, 167, 131, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -853, 153, -72, -175,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -551, -39, -400, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1056, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -949, -95,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -652, -394, -296, 400,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1341, -551, 401, 563,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1755, -248, 830, 266,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1865, -17, 987, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1055, -101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1383, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1872, -2, 1021, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1059, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1851, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1838, 137, -1399, 516,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1576, 118, -350, 532,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1602, -26, -335, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1712, -25, -258, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1086, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1114, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1737, -24, -233, 25, 1144, 29,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimStunLandU_joint8[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -429, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -573, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -563, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -911, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -890, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -682, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -560, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -639, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -642, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -639, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -630, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimStunLandU_joint10[16] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1005, -458, 241,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -278, 124, -401,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -278, 124, -401,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimStunLandU_joint11[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1317, 42, 1310, -85, 638, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1092, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1197, -196, 320, -255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 944, -228, 21, -261,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -351, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 705, 156,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1139, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 994, 82,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -281, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 927, 343, -78, 327,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1724, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 373, 391,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 996, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1859, 97, 1090, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 1935, -21, 1362, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 995, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 903, 67,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1906, -182, 1344, -501,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1569, -172, 360, -496, 1103, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1070, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1562, -6, 351, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1544, -2, 317, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1056, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1030, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1542, -2, 308, -8, 1018, -11,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimStunLandU_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -484, -175,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -689, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -601, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -639, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -721, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -557, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -359, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -389, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -402, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -426, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -436, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimStunLandU_joint13[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1092, 354, 409,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 125, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 233, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 154, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 228, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 189, 56, -138, -32,
	ftAnimSetValT(FT_ANIM_ROTX, 7), 224,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, -291,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -67, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -131, 47, -289, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimStunLandU_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimStunLandU_joint15[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -242, 100,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 147, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -165, -25,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 85,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 141, 2,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimStunLandU_joint17[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -420, 168,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 173, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -343, -40,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -40,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -56, 82,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimStunLandU_joint18[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1681, 169, -1515, -15, 2009, -91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1468, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1309, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1917, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2085, 210,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2729, 66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1564, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1517, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2711, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 2345, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1315, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1411, -7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1504, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1539, -52,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2392, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1620, -10, 2607, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1490, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2455, -128,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2130, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1422, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1472, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1465, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1447, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1435, 11, -1484, -12, 2092, -38,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimStunLandU_joint20[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 450, 379,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 829, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 897, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 416, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 416, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 218, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 119, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 291, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 381, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 460, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 416, -43,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimStunLandU_joint22[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1577, -73, 83, 29, 19, 126,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 461, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 110, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1553, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1598, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1528, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 452, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 265, -17,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1527, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1527, 42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 248, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1612, 40, 393, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1508, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 85, -27, 350, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -66, -43, 91, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1505, -2, -110, -43, 15, -75,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimStunLandU_joint23[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -119, -85, 10, -20, 318, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -160, 91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 275, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 534, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 819, 274,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1184, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -45, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -144, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 277, 0, 1124, -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 733, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 181, 14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -165, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -149, 48,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 796, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -77, 17, 194, 2, 953, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -171, -11, 179, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 865, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 760, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -182, -11, 179, 0, 745, -14,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimStunLandU_joint25[130] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 509, 309,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 818, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 842, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 329, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 397, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 312, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 161, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 410, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 576, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 616, 40,
	ftAnimEnd(),
	0x0000, 0x200E, 0x06A2, 0x005B, 0x0023, 0xFFBD, 0x0051, 0x0071, 0x2809, 0x0007, 0x01B4, 0xFFFB, 0x2805, 0x0014, 0xFFAC, 0xFFEE, 0x2003, 0x0005, 0x0669, 0xFFFB, 0x2003, 0x0001, 0x0669, 0x0003, 0x2803, 0x000F, 0x06AC, 0xFFFC, 0x0801, 0x0001, 0x2009, 0x0001, 0x01AE, 0xFFF9, 0x2009, 0x000A, 0x013A, 0xFFF3, 0x2009, 0x0001, 0x012C, 0x0032, 0x2809, 0x0002, 0x01A8, 0x0009, 0x0801, 0x0001, 0x2005, 0x0001, 0xFFAC, 0x0001, 0x2805, 0x0004, 0xFFB7, 0x0003, 0x200B, 0x0001, 0x06A7, 0xFFFD, 0x01B1, 0x0007, 0x200B, 0x0003, 0x06A0, 0xFFFF, 0x01BC, 0x0000, 0x200F, 0x0001, 0x069F, 0x0000, 0xFFBB, 0x0004, 0x01BB, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
