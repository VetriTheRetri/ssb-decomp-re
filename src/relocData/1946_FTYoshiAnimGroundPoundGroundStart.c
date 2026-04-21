/* AnimJoint data for relocData file 1946 (FTYoshiAnimGroundPoundGroundStart) */
/* 2912 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimGroundPoundGroundStart_joint1[44];
extern u16 dFTYoshiAnimGroundPoundGroundStart_joint2[120];
extern u16 dFTYoshiAnimGroundPoundGroundStart_joint3[102];
extern u16 dFTYoshiAnimGroundPoundGroundStart_joint4[74];
extern u16 dFTYoshiAnimGroundPoundGroundStart_joint7[86];
extern u16 dFTYoshiAnimGroundPoundGroundStart_joint8[122];
extern u16 dFTYoshiAnimGroundPoundGroundStart_joint9[28];
extern u16 dFTYoshiAnimGroundPoundGroundStart_joint11[26];
extern u16 dFTYoshiAnimGroundPoundGroundStart_joint12[126];
extern u16 dFTYoshiAnimGroundPoundGroundStart_joint13[30];
extern u16 dFTYoshiAnimGroundPoundGroundStart_joint14[26];
extern u16 dFTYoshiAnimGroundPoundGroundStart_joint15[16];
extern u16 dFTYoshiAnimGroundPoundGroundStart_joint16[36];
extern u16 dFTYoshiAnimGroundPoundGroundStart_joint18[48];
extern u16 dFTYoshiAnimGroundPoundGroundStart_joint19[92];
extern u16 dFTYoshiAnimGroundPoundGroundStart_joint21[54];
extern u16 dFTYoshiAnimGroundPoundGroundStart_joint23[110];
extern u16 dFTYoshiAnimGroundPoundGroundStart_joint24[96];
extern u16 dFTYoshiAnimGroundPoundGroundStart_joint26[54];
extern u16 dFTYoshiAnimGroundPoundGroundStart_joint27[112];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTYoshiAnimGroundPoundGroundStart_joints[] = {
	(u32)dFTYoshiAnimGroundPoundGroundStart_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimGroundPoundGroundStart_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimGroundPoundGroundStart_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimGroundPoundGroundStart_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimGroundPoundGroundStart_joint7, /* [4] joint 7 */
	0x00000000, /* [5] NULL */
	0x00000000, /* [6] NULL */
	(u32)dFTYoshiAnimGroundPoundGroundStart_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimGroundPoundGroundStart_joint9, /* [8] joint 9 */
	(u32)dFTYoshiAnimGroundPoundGroundStart_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTYoshiAnimGroundPoundGroundStart_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimGroundPoundGroundStart_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimGroundPoundGroundStart_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimGroundPoundGroundStart_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimGroundPoundGroundStart_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimGroundPoundGroundStart_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTYoshiAnimGroundPoundGroundStart_joint19, /* [18] joint 19 */
	(u32)dFTYoshiAnimGroundPoundGroundStart_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTYoshiAnimGroundPoundGroundStart_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTYoshiAnimGroundPoundGroundStart_joint24, /* [23] joint 24 */
	(u32)dFTYoshiAnimGroundPoundGroundStart_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTYoshiAnimGroundPoundGroundStart_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTYoshiAnimGroundPoundGroundStart_joint1[44] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 0,
	ftAnimSetValBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValT(FT_ANIM_TRAZ, 11), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 5496,
	ftAnimSetValRateT(FT_ANIM_TRAY, 11), 5340, -271,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -182,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 7), 3120,
	ftAnimSetValT(FT_ANIM_TRAZ, 12), 3120,
	ftAnimBlock(0, 1),
	ftAnimSetValBlockT(FT_ANIM_TRAY, 10), 5340,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -13292,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 288, -612,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimGroundPoundGroundStart_joint2[120] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX), 0, 0, 0, 4096,
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 672, -146,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY, 1), 417, -640,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetValT(FT_ANIM_SCAZ, 27), 4096,
	ftAnimSetValT(FT_ANIM_SCAY, 29), 4096,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetValT(FT_ANIM_ROTX, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 432, 5,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 5496,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 432, 5,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 5496,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 432, 5,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 5496,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 432, 5,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 5496,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 432, 5,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 5496,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 432, 5,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 5496,
	ftAnimSetValT(FT_ANIM_ROTX, 9), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 672,
	ftAnimSetValT(FT_ANIM_TRAY, 21), 672,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_ROTY, 11), 0,
	ftAnimBlock(0, 7),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1295, 402,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 3216, 73, 178, 6,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY, 22), 3216, 178,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_SCAZ, 1), 4096, -955,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 2), 2662,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAY, 2), 6758,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimGroundPoundGroundStart_joint3[102] = {
	ftAnimSetValRate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 2, 0, -13, 30, 39, 20, -10,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -89,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 0, -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 30, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0, 30, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -446, -89, 46, 0, 1, 0, 0, 30, -32, 20, -107,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 0, 0, -27, 37, -167, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -893, -68, 3, 6, 2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -893, -27, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 8), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 26), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 214, 56, 1, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1340, -17,
	ftAnimSetValT(FT_ANIM_ROTX, 22), -1340,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 18), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimGroundPoundGroundStart_joint4[74] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 16, 22, 0, -4, 0, -19, 172, 28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 555, 134,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 172,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0, 172,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 555,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 555,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 555, 152, 0, 9, 0, 38, 172, -55,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 16, 3, 67, 13, 75, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 860, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 804, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 1161, 9,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 1161, 16, 67, 75,
	ftAnimBlock(0, 9),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimGroundPoundGroundStart_joint7[86] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 600,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 78, 11, 0, -1, 0, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 329,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 377, -445,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 78, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 78, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -321, -199,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 1), -321, 377,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 3), -321, 377,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 1), -321, 82, 0, 0, 0, 0, 377, 594,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -156, 68,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 2), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 562, 18, 0, 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_TRAY, 20), 600,
	ftAnimBlock(0, 11),
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 562, 0, 0,
	ftAnimBlock(0, 9),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTYoshiAnimGroundPoundGroundStart_joint8[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1453, -1, -1518, -1, -1972, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -2056, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 1445, 0, -1526, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1444, -100, -1527, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1244, -111, -1374, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1220, -17, -1333, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1232, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1047, 93,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2127, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1359, 307, -2301, -350,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2223, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -984, -28, -2828, -459,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3339, -84,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1306, -66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2353, 104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 2673, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3389, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -3458, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1360, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1442, -5,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2677, -17, -3456, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2638, -41, -3397, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2594, -43, -1467, -25, -3284, 112,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTYoshiAnimGroundPoundGroundStart_joint9[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -764,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -764, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 382,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 378,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 19), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimGroundPoundGroundStart_joint11[26] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -625, -16,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 26), -625,
	ftAnimBlock(0, 9),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimGroundPoundGroundStart_joint12[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -177, 0, -53, 0, -235, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -177, -53, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -177, 157, -53, 158, -235, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 137, 167, 263, 183, -397, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 157, 16, 313, 58, -416, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 588, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 147, -73, -523, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 23, -308, -693, -346,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -861, -276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 641, -24, -1215, -454,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 324, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1601, -256,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1805, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1022, -127,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1304, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 264, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 180, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1825, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1849, 27,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1306, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1251, 62,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1789, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1183, 67, 153, -27, -1676, 113,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimGroundPoundGroundStart_joint13[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1002, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -1002,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 496,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 496,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimGroundPoundGroundStart_joint14[26] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -625, -16,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 26), -625,
	ftAnimBlock(0, 9),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimGroundPoundGroundStart_joint15[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -536, 2, -893, -44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 156, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 30), -536, -893,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTYoshiAnimGroundPoundGroundStart_joint16[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -190, -15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -190,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -190, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 178, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 178, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -262, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -262, 12,
	ftAnimBlock(0, 9),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimGroundPoundGroundStart_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -153, -9, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -153, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -153, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -153, 14, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -109, 3, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -109, -35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 28), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -504, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -504, 11,
	ftAnimBlock(0, 9),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTYoshiAnimGroundPoundGroundStart_joint19[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, -7, 5, -6, -3, -419,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -12, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -423, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -398,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -12, -128, 0, -77, -398, 681,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -269, -102, -154, -95, 964, 629,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -218, 47, -190, -25, 860, -91,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 16), -151,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 38, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 271, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 271, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 203, -66,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -151, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -155, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 38, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 71, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 107, 35, -145, 9, 138, -65,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimGroundPoundGroundStart_joint21[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 262, 840,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1102, 410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1082, -33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 1035,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1035, -438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 158, -369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 296, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 685, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 687, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 808, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 901, 92,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimGroundPoundGroundStart_joint23[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, -2, 1692, 3, -1872, -382,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 8, 1694,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2254, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2272, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -2246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8, 115, 1694, -127, -2246, 600,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 240, 103, 1439, -132, -1046, 580,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 215, -26, 1429, -10, -1085, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1469, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1955, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -106, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -70, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 258, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1488, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1260, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1990, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2247, -88,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 256, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 206, 29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2361, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 63, 1307, 47, -2368, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTYoshiAnimGroundPoundGroundStart_joint24[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -274, 281, -123, -144, -120, -535,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 6), -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 6, 140, -656, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 6, 0, -656, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 6, -656,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, -161, -267, 170, -656, -776,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -316, -155, 74, 142, -2208, -833,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -304, 14, 17, -40, -2323, -95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -2846, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -221, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -5, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -43, -10,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2880, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2937, -65,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -64, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -192, 29, -30, 33, -3011, -74,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimGroundPoundGroundStart_joint26[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 378, 811,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1190, 405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1190, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 1190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1190, -557,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 75, -464,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 260, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 626, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 645, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 670, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 670, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 795, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 889, 93,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTYoshiAnimGroundPoundGroundStart_joint27[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -37, -41, -1519, 2, -1837, -284,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -78, -1516,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2122, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2122, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -2122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -78, 203, -1516, 66, -2122, 590,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 328, 143, -1383, 74, -941, 570,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 208, -119, -1366, 17, -981, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1420, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1929, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -124, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -111, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -194, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -463, -188,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -626, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1447, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1446, -40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1929, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2019, -85,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -638, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -685, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -656, 29, -1528, -82, -2099, -80,
	ftAnimEnd(),
	0x0000,
};
