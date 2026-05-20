/* AnimJoint data for relocData file 730 (FTFoxAnimCliffEscapeQuick2) */
/* 3936 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimCliffEscapeQuick2_joint1[48];
extern u16 dFTFoxAnimCliffEscapeQuick2_joint2[184];
extern u16 dFTFoxAnimCliffEscapeQuick2_joint3[66];
extern u16 dFTFoxAnimCliffEscapeQuick2_joint5[34];
extern u16 dFTFoxAnimCliffEscapeQuick2_joint6[240];
extern u16 dFTFoxAnimCliffEscapeQuick2_joint7[108];
extern u16 dFTFoxAnimCliffEscapeQuick2_joint8[10];
extern u16 dFTFoxAnimCliffEscapeQuick2_joint9[38];
extern u16 dFTFoxAnimCliffEscapeQuick2_joint11[10];
extern u16 dFTFoxAnimCliffEscapeQuick2_joint12[224];
extern u16 dFTFoxAnimCliffEscapeQuick2_joint13[108];
extern u16 dFTFoxAnimCliffEscapeQuick2_joint14[28];
extern u16 dFTFoxAnimCliffEscapeQuick2_joint16[10];
extern u16 dFTFoxAnimCliffEscapeQuick2_joint17[114];
extern u16 dFTFoxAnimCliffEscapeQuick2_joint19[76];
extern u16 dFTFoxAnimCliffEscapeQuick2_joint21[130];
extern u16 dFTFoxAnimCliffEscapeQuick2_joint22[110];
extern u16 dFTFoxAnimCliffEscapeQuick2_joint24[86];
extern u16 dFTFoxAnimCliffEscapeQuick2_joint25[156];
extern u16 dFTFoxAnimCliffEscapeQuick2_joint26[74];
extern u16 dFTFoxAnimCliffEscapeQuick2_joint27[60];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTFoxAnimCliffEscapeQuick2_joints[] = {
	(AObjEvent32 *)dFTFoxAnimCliffEscapeQuick2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeQuick2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeQuick2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeQuick2_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeQuick2_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeQuick2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeQuick2_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeQuick2_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeQuick2_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeQuick2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeQuick2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeQuick2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeQuick2_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeQuick2_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeQuick2_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeQuick2_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeQuick2_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeQuick2_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeQuick2_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeQuick2_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTFoxAnimCliffEscapeQuick2_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimCliffEscapeQuick2_joint1[48] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 800,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 360, 672,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 720, 608,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 1080, 384,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 1200, 192,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 1320, 288,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 1560, 672,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 2160, 864,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 2640, 768,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 3120, 512,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), 3600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimCliffEscapeQuick2_joint2[184] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), -420, -26, 0, -44,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), -503, -220, -107, 228,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 3,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), 1170, 405,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 1211, 125,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 1,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 168,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -220,
	ftAnimSetValRateT(FT_ANIM_TRAX, 2), -600, -38,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 105,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 1104, -191,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -42, 261,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 261,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 0, 30,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -38,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 2), -600,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -191,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 9), -600,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1049, -291,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -291,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 899, -464,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -464,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 18), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 840, -718,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -718,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 480, -240,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -5,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 480, 44,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 368,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 757, 1311,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 1487,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -569, 207, 1002, 276,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 253,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 257,
	ftAnimSetValRateT(FT_ANIM_TRAX, 4), -360, 184,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1080, 230,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 252,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 1192, -129,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 184,
	ftAnimSetValRateT(FT_ANIM_TRAX, 3), -271, 226,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -111,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 1080, -230,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 128, -230,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, 44, 961, -394,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -272,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 24, -9,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 6), 48, 10, -20, -2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 757, -1509,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -1311,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 480, -272,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 827, 585,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 585,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 912,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTFoxAnimCliffEscapeQuick2_joint3[66] = {
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValT(FT_ANIM_TRAX, 35), 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 3,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -1608,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 9), -1608,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 15), -1608,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1608, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2412, -2010,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), -2412,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -804, -2412,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1608, -2010,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 3), -1608,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1608, -1608,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1750, -1270, -1612,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimCliffEscapeQuick2_joint5[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 0, -91,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 268, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 309, 156, 81,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimCliffEscapeQuick2_joint6[240] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1070, -219, -327, 163, -1707, 242,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1547, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 714, -73, -160, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 702, 203, -168, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -215, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1122, 590,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1884, 604, -1849, -285,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2204, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2853, 80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -42, 102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -180, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2161, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2666, -225,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2918, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3068, 87,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -157, 9, -2881, -391,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -106, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3179, -18, -3449, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3031, -20, -3345, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3138, 61, -235, -69, -3875, -329,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3077, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -255, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4003, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3617, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3169, 309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3696, 449, -333, 124, -3785, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4067, 198, -7, 262, -4062, -129,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4049, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 134, -4045, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -4051, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 262, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3991, -73, 142, -429,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3902, -76, -596, -775, -4382, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3839, 523, -1408, -328, -4426, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4948, 413, -1254, 126, -4816, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4665, -451, -1155, 45, -4772, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4045, -36, -1164, -171, -4249, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4592, 285, -1498, -152, -4877, -351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4615, 18, -1469, 0, -4953, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4630, 49, -1498, 12, -4655, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4715, 85, -1444, 54, -4565, 89,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimCliffEscapeQuick2_joint7[108] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -168, 160,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -666, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -837, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -714, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -627, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -885, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -644, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -580, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -816, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -954, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -577, 288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -378, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -513, -327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1033, -303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1120, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -634, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -890, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1125, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -613, 430,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -265, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -550, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -560, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimCliffEscapeQuick2_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimCliffEscapeQuick2_joint9[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 178, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 178, 183,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -113, 136, -72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimCliffEscapeQuick2_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimCliffEscapeQuick2_joint12[224] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 60, -121, 161, 63, 990, -384,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 154, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -61, 19, 606, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 98, 101, 899, 195,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 912, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 13, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 98, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 95, -61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 930, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 887, 41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 78, 92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 227, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 977, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 363, -441,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 26, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 184, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 153, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 100, 45, -168, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 244, 5, 104, 9, -136, -251,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 237, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 111, -66, -670, -439,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 111, -17, -1015, -351,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -29, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 250, -19, -1373, -256,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 193, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1615, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1552, 204,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -748, 317,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 20, 1, 192, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -90, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 102, -153, -569, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -114, 14, -490, 607,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -282, 73, 130, 160, 645, 445,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 56, 249, 205, 73, 399, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 382, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 217, 220, 608, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 496, -239, 761, -385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -261, -363, 283, -79, -162, -474,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 49, 181, 303, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -187, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 247, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, 83, 273, -29, 335, 88,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimCliffEscapeQuick2_joint13[108] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -618, 257,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -361, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -637, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -440, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -422, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -305, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -260, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -839, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -894, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -660, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -868, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -689, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -681, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -323, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -269, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -769, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -519, 380,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -960, -296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -600, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -952, -283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1167, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -419, 481,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -205, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -599, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -592, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTFoxAnimCliffEscapeQuick2_joint14[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 272, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 23), 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 134, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 375, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 580, -118,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTFoxAnimCliffEscapeQuick2_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimCliffEscapeQuick2_joint17[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1551, -34, -1613, 6, -1884, -126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1573, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1595, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1760, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1651, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1977, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1570, -2, -2031, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1833, 185,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1597, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1601, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1589, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1615, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1585, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1584, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1772, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1574, 20, -1602, 16, -1871, -198,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1285, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1627, -82, -2470, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1474, -98, -2219, 256,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1764, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1430, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1281, -113, -1308, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1202, -78, -1385, -77, -1635, 128,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimCliffEscapeQuick2_joint19[76] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 288, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 561, 454,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1196, 328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1217, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1228, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1229, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 781, -425,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -390,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -186,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1042, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 955, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 607, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -253,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimCliffEscapeQuick2_joint21[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 73, 27, -12, 23, 418, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -31, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 47, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 167, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -100, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -338, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -441, -265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -870, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -825, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -730, 186,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -29, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -21, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 44, -3, -412, 277,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 24, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -175, 369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 326, 311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 391, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 406, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 377, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 54, -21, 381, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -17, -6, 30, -254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 42, 56, 9, 70, -127, -122,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 154, -25, -174, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 95, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 35, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, 11, 125, -28, -56, 118,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimCliffEscapeQuick2_joint22[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1674, 91, 1617, 4, 1332, -128,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1456, 106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 1664, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1807, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1730, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1622, -14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1568, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1239, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1185, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1383, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1601, 121,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1628, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1620, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1760, 40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1629, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1652, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1663, -12, 1659, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1423, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1273, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1375, 125,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1666, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1821, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1911, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1963, 51, 1470, 47, 1743, 76,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimCliffEscapeQuick2_joint24[86] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 288, 280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 561, 454,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1196, 328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1217, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1228, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1229, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 781, -425,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 377, -390,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -185,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 239, 388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 776, 483,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1205, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1018, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 542, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -210,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimCliffEscapeQuick2_joint25[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -127, -69, 27, -55, 419, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 168, -189,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 65, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -175, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -145, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -112, 49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -96, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -338, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -67, 23, -441, -266,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -92, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 61, -3, -871, -192,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 52, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -826, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -731, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -412, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -176, 373,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -17, 30, 334, 315,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -74, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 393, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 402, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 393, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -65, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -102, 15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 51, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 195, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 303, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -480, -317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -83, 36, 139, -47, -804, -87,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 26, 0, -58, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -655, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -496, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -365, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, -10, -102, -44, -226, 139,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimCliffEscapeQuick2_joint26[74] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, 113, 117, -55, -177, 84,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 64, 41, 0, -16, 0, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 152, -56,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -13, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -442, -109, 0, 5, 0, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -725, -36, 33, 8, -202, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -775, 98, 80, -31, -627, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 458, 58, -348, 20, 187, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -192, -114, 281, 142, 660, -46,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 219, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTFoxAnimCliffEscapeQuick2_joint27[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, -7,
	ftAnimSetValRate(FT_ANIM_ROTX), 127, 50,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 64, -450,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -9, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 250, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 537, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 537, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 337, -52, -9, 37, -7, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 69, -16, 330, -31, 320, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 94, -20, -481, -37, 201, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -178, -122, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
