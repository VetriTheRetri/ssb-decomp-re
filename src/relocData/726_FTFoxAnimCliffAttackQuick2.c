/* AnimJoint data for relocData file 726 (FTFoxAnimCliffAttackQuick2) */
/* 4560 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimCliffAttackQuick2_joint1[24];
extern u16 dFTFoxAnimCliffAttackQuick2_joint2[130];
extern u16 dFTFoxAnimCliffAttackQuick2_joint3[78];
extern u16 dFTFoxAnimCliffAttackQuick2_joint5[44];
extern u16 dFTFoxAnimCliffAttackQuick2_joint6[238];
extern u16 dFTFoxAnimCliffAttackQuick2_joint7[112];
extern u16 dFTFoxAnimCliffAttackQuick2_joint8[10];
extern u16 dFTFoxAnimCliffAttackQuick2_joint9[54];
extern u16 dFTFoxAnimCliffAttackQuick2_joint11[10];
extern u16 dFTFoxAnimCliffAttackQuick2_joint12[220];
extern u16 dFTFoxAnimCliffAttackQuick2_joint13[112];
extern u16 dFTFoxAnimCliffAttackQuick2_joint14[142];
extern u16 dFTFoxAnimCliffAttackQuick2_joint16[12];
extern u16 dFTFoxAnimCliffAttackQuick2_joint17[170];
extern u16 dFTFoxAnimCliffAttackQuick2_joint19[64];
extern u16 dFTFoxAnimCliffAttackQuick2_joint21[182];
extern u16 dFTFoxAnimCliffAttackQuick2_joint22[202];
extern u16 dFTFoxAnimCliffAttackQuick2_joint24[84];
extern u16 dFTFoxAnimCliffAttackQuick2_joint25[212];
extern u16 dFTFoxAnimCliffAttackQuick2_joint26[70];
extern u16 dFTFoxAnimCliffAttackQuick2_joint27[56];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTFoxAnimCliffAttackQuick2_joints[] = {
	(AObjEvent32 *)dFTFoxAnimCliffAttackQuick2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimCliffAttackQuick2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimCliffAttackQuick2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTFoxAnimCliffAttackQuick2_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffAttackQuick2_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimCliffAttackQuick2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimCliffAttackQuick2_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimCliffAttackQuick2_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTFoxAnimCliffAttackQuick2_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffAttackQuick2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimCliffAttackQuick2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimCliffAttackQuick2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTFoxAnimCliffAttackQuick2_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffAttackQuick2_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTFoxAnimCliffAttackQuick2_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffAttackQuick2_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffAttackQuick2_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTFoxAnimCliffAttackQuick2_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffAttackQuick2_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimCliffAttackQuick2_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTFoxAnimCliffAttackQuick2_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimCliffAttackQuick2_joint1[24] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 1600,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 12), 2400,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), 2400,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 2280, -560,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), 660, -480,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 360,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimCliffAttackQuick2_joint2[130] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -350, 295, 1200, -236, -120, -204,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -258, 159, 1092, -168, -111, 30,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -168,
	ftAnimSetValRateT(FT_ANIM_TRAX, 9), -11, 58,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 30,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1067, -185,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -185,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 480, -418,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -418,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 242, -35,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 58,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 5), 0,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -35,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 295, 387,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 387,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 17), -13, -23,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 480, 526,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 526,
	ftAnimSetValRateT(FT_ANIM_TRAX, 12), 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 781, 529,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 529,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 988, 387,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 387,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 1181, -137,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -137,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 982, -202,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -202,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 5,
	ftAnimSetValRateT(FT_ANIM_TRAX, 5), 48, 10,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 600, -6,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -6,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 802, 680,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -23,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -20, -4,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 680,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 912, 260,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTFoxAnimCliffAttackQuick2_joint3[78] = {
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValT(FT_ANIM_TRAX, 35), 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 3,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 114, -1608, -119,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -446, -153, -1831, -59,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 201,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2412, -297,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -804, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -372,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 7), -4825,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 17), -804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -4825,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -804, -167,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -4021,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1072, -52,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1608, -4825,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1750, -1270, -4829,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimCliffAttackQuick2_joint5[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 17), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 27), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 0, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 268, 44, 0, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 309, 156, 81,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 309, 156, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimCliffAttackQuick2_joint6[238] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 77, 493, -1477, -92, -27, -718,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 571, 653, -1569, 130, -745, -442,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1385, 654, -1215, 119, -913, -361,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1400, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1880, 306, -1469, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1998, 191, -1429, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2263, 159, -1237, 810, -1334, 413,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2317, 519, 221, 456, -603, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3301, 655, -323, -340, -859, -229,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -482, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3627, 363, -1062, -341,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4028, 133, -1543, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3895, -171, -382, 147, -1373, 163,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 3665, 157, -1251, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -89, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -114, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3896, 209, -114, 120, -1405, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4083, 73, 125, 98, -1479, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4042, -5, 82, -19, -1335, 89,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 4173, 135, -1174, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 87, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -67, -155,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4343, 51, -1087, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 4127, 342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -299, -140, -1145, -235,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -183, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1557, -314,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1994, -328,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -76, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -375, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4626, 417, -462, 42, -2491, -299,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 5261, 450,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2718, -368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -290, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -193, 92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -191, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5864, 539,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 6341, 273, -3256, -365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 6410, 4, -3450, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 6350, -43, -3086, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6324, -26, -164, 27, -2957, 129,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimCliffAttackQuick2_joint7[112] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, -1043,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1052, -360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -729, 513,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -24, 360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -322, -659,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1327, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -665, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -834, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1046, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -911, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -645, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -591, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -450, 291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -600, -410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -829, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -594, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -932, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -422, 394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -143, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -532, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -560, -28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimCliffAttackQuick2_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimCliffAttackQuick2_joint9[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 178, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 17), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 29), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 0, 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -268, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -178, 18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 136, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 134, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -113,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimCliffAttackQuick2_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimCliffAttackQuick2_joint12[220] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2858, -280, 272, -33, -2774, -553,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 235, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3139, -81, -3327, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3022, 99, -2869, 278,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3045, -95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3075, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 190, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 257, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3138, -60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3189, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2968, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3204, -384,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3340, -26, 231, 43, -3737, -255,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -3076, 84, 537, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3715, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3704, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -4217, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3072, -18, 486, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3690, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 398, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 175, -70, -4476, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4005, 82, 257, 348, -4450, 361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3525, -108, 873, 522, -3753, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4221, -427, 1301, 205, -4227, -312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4381, -125, 1284, -4, -4378, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4472, -45, 1292, 88, -4406, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -4565, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1461, 87, -4222, 104,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1414, 13, -4138, 153,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4600, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -4058, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1493, 78, -3892, 181,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3972, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1572, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1523, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4235, -188, 1653, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -4625, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1485, -167, -4241, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1325, 8, -4423, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4692, -67, 1334, 9, -4489, -65,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimCliffAttackQuick2_joint13[112] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -791, 783,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, -348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -820, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -772, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1022, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -769, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -894, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -982, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -840, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -648, 416,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -717, -427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -862, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -381, 316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -229, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -501, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -504, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -592, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -836, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -597, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -842, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -780, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -845, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -801, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -592, 208,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTFoxAnimCliffAttackQuick2_joint14[142] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, -61, 268, -298,
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 96, 71, -40, -18,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 1), 21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 223, -122, 89, 48,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, -255, 0, -102,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 268, 76, 178, 51,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 268, 36, 178, -40,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetValT(FT_ANIM_ROTY, 25), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 428, 81, 0, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 554, 224, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 634, -20, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 589, -112, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 473, -122, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 384, -81, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 357, 114, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 759, 34, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 536, 8, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 804, 122, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1072, -20, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 714, -136, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 357, -136, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimCliffAttackQuick2_joint16[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	_FT_ANIM_CMD(11, 0, 1), 3,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimCliffAttackQuick2_joint17[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -86, -65, 19, 59, -282, 64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 13, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -124, 58, 155, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -56, 49, 53, -78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 4, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -28, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 18, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -8, -42,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -4, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -29, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -86, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -64, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -418, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -120, 99, 8, -37, -392, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -204, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 203, -14, -220, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 83, -99, 33, 145,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 47, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -129, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -61, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 115, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 287, 69, 86, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -3, -15, -446, -261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -195, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -127, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -378, -13, 69, -133, -728, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -153, 56, -271, -213, -845, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -266, -105, -356, -29, -537, 310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -363, -69, -330, 66, -223, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -41, -223, 107, -26, 196,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimCliffAttackQuick2_joint19[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 363, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 177, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 5, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 108, 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1058, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 678, -289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -323,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimCliffAttackQuick2_joint21[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1703, 81, -1609, -116, -1182, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1212, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1775, -80, -1674, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1681, -69, -1604, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1637, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1574, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1210, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1228, -45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1640, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1702, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1569, 1, -1299, -153,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1603, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1534, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1424, 83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1411, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1691, -98, -1645, 81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1292, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1440, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1355, 51, -1608, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1260, 166,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1753, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1540, 173,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1775, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1185, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1523, -149,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1905, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1644, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1757, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1656, -65,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1684, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1976, 51, -1963, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1747, -133, -1796, -82, -1995, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1784, 43, -1822, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1708, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1658, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1655, -3, -1734, 50, -1664, 157,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimCliffAttackQuick2_joint22[202] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 38, -88, 5, 59, -282, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -65, 53, 147, -72, 0, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1, 49, 40, -80, 17, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 211, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1, -6, 31, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -10, 59, 23, -66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -105, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 457, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 452, 229,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 783, 107,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -97, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 886, -279, -184, -449,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 224, -424, 252, -218, -997, -551,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 37, -98, 19, -124, -1286, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 26, -8, 3, -11, -1106, 155,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -794, 90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -110, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 20, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 250, 343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 706, 191, -795, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 633, -288, -15, 15, -644, 291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 130, -304, -79, 7, -211, 332,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -6, -3, 123, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1, 84,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 198, -76,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 18, 9, 284, 69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 168, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 150, 77,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 75, -102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 172, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 89, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -321, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 206, 72, 245, 26, -187, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 295, 74, 225, -54, -14, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 59, 137, -88, 134, 149,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimCliffAttackQuick2_joint24[84] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 712, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 941, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1105, -315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 575, -371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 363, -246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 82, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 341, 396,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 876, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 393, -435,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -196,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 623, 465,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 930, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 645, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -313,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimCliffAttackQuick2_joint25[212] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1504, 119, -1647, -142, 2038, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2015, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1669, -72, -1765, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1575, -67, -1687, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1463, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1664, 24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2000, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1937, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1406, -1, 1632, -281,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1147, -284,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1662, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1632, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1647, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1545, 43, 806, -225,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1683, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 695, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1571, -46, 1007, 302,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1576, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1301, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1688, 45, 1428, 171,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1513, 6, 1747, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1579, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1314, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1376, 212, -1580, -14, 1532, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1740, 87, -1542, -38, 1674, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1552, -45, -1657, -123, 2030, 145,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1780, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1705, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1964, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1972, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1952, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1747, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1542, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1644, -50, 1799, -357,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1874, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1612, 27, 1237, -430,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1598, 50, 938, -98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1196, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1713, 44, -1697, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1687, -44, -1559, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1624, -62, -1505, 53, 1381, 185,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimCliffAttackQuick2_joint26[70] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -364, 133, -276, 0, 350, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 296, 182, -276, -4, 0, -103,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 728, 23, -305, 14, -268, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 533, -160, -126, 22, -211, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1038, -108, -62, -15, -176, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -554, 32, -285, 9, 680, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -616, 61, 65, 56, -42, -75,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 219, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTFoxAnimCliffAttackQuick2_joint27[56] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 64, -450,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 20, 22, -9, 0, -6, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 387, -29, 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -542, -20, 0, -58, 0, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 201, 140, -527, -21, -584, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 583, -42, -173, 44, -327, 64,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -178, -122, -7,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
