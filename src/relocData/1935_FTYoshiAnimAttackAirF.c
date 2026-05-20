/* AnimJoint data for relocData file 1935 (FTYoshiAnimAttackAirF) */
/* 2304 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimAttackAirF_joint1[44];
extern u16 dFTYoshiAnimAttackAirF_joint2[74];
extern u16 dFTYoshiAnimAttackAirF_joint3[42];
extern u16 dFTYoshiAnimAttackAirF_joint6[92];
extern u16 dFTYoshiAnimAttackAirF_joint7[24];
extern u16 dFTYoshiAnimAttackAirF_joint8[22];
extern u16 dFTYoshiAnimAttackAirF_joint10[8];
extern u16 dFTYoshiAnimAttackAirF_joint11[74];
extern u16 dFTYoshiAnimAttackAirF_joint12[24];
extern u16 dFTYoshiAnimAttackAirF_joint13[8];
extern u16 dFTYoshiAnimAttackAirF_joint14[10];
extern u16 dFTYoshiAnimAttackAirF_joint15[14];
extern u16 dFTYoshiAnimAttackAirF_joint17[14];
extern u16 dFTYoshiAnimAttackAirF_joint18[160];
extern u16 dFTYoshiAnimAttackAirF_joint20[54];
extern u16 dFTYoshiAnimAttackAirF_joint22[156];
extern u16 dFTYoshiAnimAttackAirF_joint23[120];
extern u16 dFTYoshiAnimAttackAirF_joint25[36];
extern u16 dFTYoshiAnimAttackAirF_joint26[124];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTYoshiAnimAttackAirF_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimAttackAirF_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimAttackAirF_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimAttackAirF_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimAttackAirF_joint6, /* [3] joint 6 */
	NULL, /* [4] NULL */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTYoshiAnimAttackAirF_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTYoshiAnimAttackAirF_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTYoshiAnimAttackAirF_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTYoshiAnimAttackAirF_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTYoshiAnimAttackAirF_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimAttackAirF_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimAttackAirF_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimAttackAirF_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimAttackAirF_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTYoshiAnimAttackAirF_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTYoshiAnimAttackAirF_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTYoshiAnimAttackAirF_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTYoshiAnimAttackAirF_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTYoshiAnimAttackAirF_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTYoshiAnimAttackAirF_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimAttackAirF_joint1[44] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY), 0, -13, 608, -48,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -178, -17, 595, 165, 0, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -178, 207, 814, 501, 37, 758,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 652, 113, 846, -55, 379, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 28), 3216, -17, 608, -50, 0, -79,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimAttackAirF_joint2[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -13, 0, 31, 0, 14, 0, -7, 214, 44, 1, -52,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), -2, 144, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -327, 89, 804, 80, 327, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 26, 804, -100, 0, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -118, -27, 0, -61, -61, -3,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 7), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -360, -32, -42, 2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 0, 214, 18, 1, 54,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 17), -893, -19, 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 17), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimAttackAirF_joint3[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 1161, -4, 0, -30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 16, 67, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 0, -116,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), -773,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, -42, 0, 193,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -171, 67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 28), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 539, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 22), 1161, 19,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimAttackAirF_joint6[92] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 562, -6, 0, -26, 0, 10,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 11), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -302, -83, -627, -66, 288, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -269, -6, -668, -10, -228, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -323, 480, -658, 15, -526, -233,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 690, 149, -636, 94, -696, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 6144, 6144, 6144,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 720, -11, 0, 57, -283, 63,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 26), 4096, 4096, 4096,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 568, -7, 0, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 562, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimAttackAirF_joint7[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1162, 1, -1428, -3, -224, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), -1161, -1, -1430, 0, -226, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1162, -1, -1428, 1, -224, 1,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimAttackAirF_joint8[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 25), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimAttackAirF_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -625,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimAttackAirF_joint11[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1147, -16, 1417, -3, -224, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 374, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1072, -63, -581, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1027, -27, -773, -172,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -815, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1050, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 228, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 287, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 333, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 1132, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -761, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -228, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1066, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 19), 1410, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1146, 13, 1420, 9, -227, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimAttackAirF_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimAttackAirF_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -625,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimAttackAirF_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -670, 1608, 0, 0, 156, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimAttackAirF_joint15[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 536, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 23), -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), 536, 22,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimAttackAirF_joint17[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 89, -12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 23), -481,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), 89, 15,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimAttackAirF_joint18[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1540, 12, 1727, -2, -1333, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1528, -94, 1724, 721, -1458, -346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1729, -102, 3169, 732, -2027, -287,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1722, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3188, 14, -2034, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3199, 13, -2062, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 3263, 151, -2202, -122,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1714, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1755, 154, 3519, 564, -2361, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1405, 157, 4393, 626, -2097, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1440, -19, 4772, 264, -2315, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 4731, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1443, 20, -2036, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1371, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2217, -158,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2097, 253,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 4605, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 5065, 65,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1479, -84, -1759, 381,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1534, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4944, -61, -1333, 212,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 4937, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1333, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -1333, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1534, 0, 4937, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), -1540, 0, 4943, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1540, 0, 4944, 0, -1333, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimAttackAirF_joint20[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 687, 116,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1103, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1079, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 743, -536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 428, 427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 861, 336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1003, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, -157,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 687,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 687, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTYoshiAnimAttackAirF_joint22[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1433, 179, 119, 123, 2900, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 535, 426,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1253, -583, 2850, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2601, -330, 2612, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1914, 309, 1097, 371, 3233, 232,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1380, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1982, 60, 3078, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1695, -134,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3746, 224,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1627, 248,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1937, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2063, -594,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2885, -635, 3929, 367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3334, -184, 4482, 386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3253, -6, 1818, -79, 4703, 97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 4649, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1557, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3347, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3411, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3369, -78, 4619, -32,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 24), 4508,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3567, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3792, 262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3041, 360, 1488, -34,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 8), 1488,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3070, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -3043, 2,
	ftAnimBlock(0, 7),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 1488,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1488, 0,
	ftAnimBlock(0, 12),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), 4508,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3041, 1, 1488, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimAttackAirF_joint23[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -34, -16, 150, 19, 286, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 406, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 320, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -239, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -224, 99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 420, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 409, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 482, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 437, 88,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 466, -46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 413, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 61, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 450, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 303, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 402, -93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 110, -37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -34, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -166, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 75, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 149, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 310, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 286, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -153, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -35, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -34, 1, 150, 1, 286, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimAttackAirF_joint25[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 670, -21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 397, -70,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 511, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 554, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 670, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 670, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 670,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 670,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimAttackAirF_joint26[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -156, 149, -1447, -61, -1929, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1944, -51, -1588, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -9, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -93, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -36, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 249, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 421, -43, -1990, 130, -1534, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 162, -169, -1682, 249, -1760, -165,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 330, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1491, 98, -1865, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1474, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1912, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 579, 151,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 440, -395,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1467, 8,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 25), -1447,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -156, -377, -1929, -8,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 23), -1929,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -315, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -415, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -510, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -487, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -163, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -156, 7, -1447, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1929,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
