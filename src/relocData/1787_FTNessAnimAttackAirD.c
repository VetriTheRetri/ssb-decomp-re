/* AnimJoint data for relocData file 1787 (FTNessAnimAttackAirD) */
/* 2688 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimAttackAirD_joint1[28];
extern u16 dFTNessAnimAttackAirD_joint2[22];
extern u16 dFTNessAnimAttackAirD_joint4[46];
extern u16 dFTNessAnimAttackAirD_joint5[158];
extern u16 dFTNessAnimAttackAirD_joint6[62];
extern u16 dFTNessAnimAttackAirD_joint7[20];
extern u16 dFTNessAnimAttackAirD_joint8[62];
extern u16 dFTNessAnimAttackAirD_joint10[10];
extern u16 dFTNessAnimAttackAirD_joint11[130];
extern u16 dFTNessAnimAttackAirD_joint12[64];
extern u16 dFTNessAnimAttackAirD_joint13[10];
extern u16 dFTNessAnimAttackAirD_joint15[10];
extern u16 dFTNessAnimAttackAirD_joint16[172];
extern u16 dFTNessAnimAttackAirD_joint18[54];
extern u16 dFTNessAnimAttackAirD_joint19[108];
extern u16 dFTNessAnimAttackAirD_joint21[76];
extern u16 dFTNessAnimAttackAirD_joint22[102];
extern u16 dFTNessAnimAttackAirD_joint24[46];
extern u16 dFTNessAnimAttackAirD_joint25[58];
extern u16 dFTNessAnimAttackAirD_joint26[54];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimAttackAirD_joints[] = {
	(u32)dFTNessAnimAttackAirD_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimAttackAirD_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimAttackAirD_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimAttackAirD_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimAttackAirD_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimAttackAirD_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimAttackAirD_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimAttackAirD_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimAttackAirD_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimAttackAirD_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimAttackAirD_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimAttackAirD_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimAttackAirD_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimAttackAirD_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimAttackAirD_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimAttackAirD_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimAttackAirD_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimAttackAirD_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimAttackAirD_joint25, /* [24] joint 25 */
	(u32)dFTNessAnimAttackAirD_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimAttackAirD_joint1[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 242, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 302, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 302, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -378, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -378, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 13), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimAttackAirD_joint2[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -209,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -216, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -599, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), -599, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 13), -3426,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimAttackAirD_joint4[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 148, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 110, -5, 25, 4, -2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 110, -8, 25, 7, -2, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -104, -5, 168, 3, -17, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -104, 3, 168, -3, -17, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 148, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimAttackAirD_joint5[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2822, 1131, -1315, 62, 2206, -728,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1690, 625, -1252, -32, 1478, -414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1571, 0, -1380, 0, 1377, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1116, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1691, 409, 1477, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -751, 505, 1017, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -679, 66, -1111, 4, 1006, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1112, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -619, 53, 994, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 815, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -436, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -428, -38, -1124, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -712, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1193, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1383, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1106, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 777, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 990, 349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -788, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -950, -338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1465, -542, -984, -19, 1525, 547,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1329, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2034, -370, 2084, 306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2206, -152, 2137, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2093, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2773, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1400, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1327, 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2166, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2822, -48, -1315, 12, 2206, 40,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimAttackAirD_joint6[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -673, -446,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1120, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1132, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1120, 566,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 560,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -512, -381,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -772, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1167, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1064, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -710, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -673, 37,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimAttackAirD_joint7[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 268, 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -855, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -855, 32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 13), 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimAttackAirD_joint8[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 194, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 155, -12, -283, -30, 274, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 155, 48, -283, 8, 274, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 595, 26, -157, -3, -317, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 617, -16, -157, -3, -317, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 569, -9, -566, -101, -521, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 257, -37, -664, 56, -212, 52,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 194, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimAttackAirD_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimAttackAirD_joint11[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1034, 10, 968, 153, -1429, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1068, -32, 1346, 158, -1395, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1090, 393, 1439, -125, -1344, 539,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -282, 434, 1095, -177, -315, 554,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -221, 77, 1084, -11, -235, 100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1122, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 14, 4, 67, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 15, 7, 76, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 38, -3, 116, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 33, -97, 102, -128,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -515, -52, -821, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1140, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1301, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1629, 238,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1421, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -520, -20, -950, -77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1068, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -995, -59,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1274, -129,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 981, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1130, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1385, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1034, -39, 968, -13, -1429, -44,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimAttackAirD_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -433, -155,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -704, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -766, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -354, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -271, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -959, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -904, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -877, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -773, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -449, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, 16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimAttackAirD_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -170, -63, 267, 143, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimAttackAirD_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimAttackAirD_joint16[172] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -32, 267, -360, 61, -700, -388,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -288, -3,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, -1, 4096, -1, 4096, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 235, 139, -1089, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 245, -1, -1093, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 231, -283, -306, 335, -1093, 652,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -321, -275, 382, 352, 211, 652, 7774, 19, 7709, -9, 7735, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -320, 1, 398, 15, 211, 6, 4106, -1596, 4086, -1530, 4080, -1570,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 402, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -318, -15, 223, 4, 6178, 108, 6178, 49, 6165, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -195, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 191, -20,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 5910, -258, 5883, -375, 5889, -270,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4084, -1272, 4131, -1353, 4104, -1358,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -159, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -197, -87,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 12), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 385, -22, 163, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 314, -121, 65, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -328, -64, 115, -190, -218, -221,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -357, -5, -716, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -35, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -29, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -32, -3, -360, -2, -700, 16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTNessAnimAttackAirD_joint18[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 439, 444,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 884, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 897, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 883, -448,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -438,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 465, 345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 698, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 487, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 439, -48,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimAttackAirD_joint19[108] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1620, -11, 1573, 61, -1615, -221,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1593, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1597, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), -1837, 168, 4096, 614, 4096, 614, 4096, 614,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -1527, 173, 5324, 273, 5324, 273, 5324, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), -1462, 23, 4505, -94, 4505, -94, 4505, -94,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 24), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1443, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -1594, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1593, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 1573, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1593, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1399, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1386, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1612, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1600, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1615, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1620, -7, 1573, 0, -1615, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTNessAnimAttackAirD_joint21[76] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY), -476, 178, 112, 126, -82, -12, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY, 3), -480, 28, 243, 40, 179, -29, 126, -140, -82, 59, -12, -72, 4096, 1023,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY, 1), 97, 13, 342, 7, -304, -18, 56, -40, -52, 16, -48, -20, 6144, -2,
	ftAnimSetValRateT(FT_ANIM_SCAY, 14), 4080, -964,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 97, -17, 342, -6, -304, 16, 56, 21, -52, -9, -48, 11,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), -476, 178, 112, 126, -82, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValBlockT(FT_ANIM_SCAY, 12), 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTNessAnimAttackAirD_joint22[102] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1668, 66, 1165, 85, -2407, -201,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1235, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1757, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2608, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2615, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1267, 312, -2608, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1860, 305, -2201, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1877, 12, -2156, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1811, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2116, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -2415, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1748, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1625, -18,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1767, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1174, -16,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1644, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1670, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2410, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1668, 1, 1165, -8, -2407, 2,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimAttackAirD_joint24[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 614, 35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 581,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 649, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 411, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 326, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 368, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 743, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 702, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 626, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, -12,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimAttackAirD_joint25[58] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, -7, -104, -8, -32, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -25, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), -32, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -104, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 54, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 67, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 69, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -102, -3,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -38, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 2, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 4, -104, -2, -32, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimAttackAirD_joint26[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -339, -256, -211,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -126, -82, -12, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -750, -64, -92, 54, 111, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -750, 33, -92, 47, 111, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -518, 16, 470, 20, -131, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -518, 6, 470, -27, -131, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -339, -256, -211,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
