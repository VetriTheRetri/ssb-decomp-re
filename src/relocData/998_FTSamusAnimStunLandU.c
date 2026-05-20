/* AnimJoint data for relocData file 998 (FTSamusAnimStunLandU) */
/* 2144 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimStunLandU_joint2[38];
extern u16 dFTSamusAnimStunLandU_joint4[52];
extern u16 dFTSamusAnimStunLandU_joint5[148];
extern u16 dFTSamusAnimStunLandU_joint6[56];
extern u16 dFTSamusAnimStunLandU_joint7[10];
extern u16 dFTSamusAnimStunLandU_joint8[10];
extern u16 dFTSamusAnimStunLandU_joint11[30];
extern u16 dFTSamusAnimStunLandU_joint12[132];
extern u16 dFTSamusAnimStunLandU_joint14[56];
extern u16 dFTSamusAnimStunLandU_joint15[102];
extern u16 dFTSamusAnimStunLandU_joint17[48];
extern u16 dFTSamusAnimStunLandU_joint19[120];
extern u16 dFTSamusAnimStunLandU_joint20[104];
extern u16 dFTSamusAnimStunLandU_joint22[48];
extern u16 dFTSamusAnimStunLandU_joint23[72];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimStunLandU_joints[] = {
	(AObjEvent32 *)dFTSamusAnimStunLandU_joint2, /* [0] joint 2 */
	NULL, /* [1] NULL */
	(AObjEvent32 *)dFTSamusAnimStunLandU_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimStunLandU_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimStunLandU_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimStunLandU_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimStunLandU_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimStunLandU_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimStunLandU_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimStunLandU_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimStunLandU_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimStunLandU_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimStunLandU_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimStunLandU_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimStunLandU_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimStunLandU_joint23, /* [22] joint 23 */
};

/* Joint 2 */
u16 dFTSamusAnimStunLandU_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAZ), 12, -132,
	ftAnimSetValRate(FT_ANIM_TRAY), 219, 2726,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX), -804, 0, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -455, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 26), -23,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 2164, -16,
	ftAnimSetValRateT(FT_ANIM_TRAY, 11), 312, -2628,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -9,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 5), -513, 288,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimStunLandU_joint4[52] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 284, 14, 12, 4, -22, 68,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, -13, -6, 16, -60, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -45, -18, 44, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -187, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -158, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -26, -33, 13, 2, -69, -6,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -72, 0, -74,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 6, -457, 156,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimStunLandU_joint5[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -110, -55, -180, -8, -137, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -148, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -362, -289, 101, 282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -744, -270, 480, 265,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -927, 4, 729, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 23, 88,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -129, -64,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -920, 7, 721, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -697, 90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 335, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -197, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -397, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -589, 166, -353, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -448, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -363, 356, 316, -154,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -282, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 124, 424,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 609, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -257, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -19, 247, -399, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 238, 55, -490, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 442, -116, 91, -68, -34, 266,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 25, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 382, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 100, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 5, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -11, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -42, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 380, -1, 0, -5, -55, -13,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimStunLandU_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1041, -73,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1292, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1118, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -659, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -876, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1054, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -676, 369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -226, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -826, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -876, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -869, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimStunLandU_joint7[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -399,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 23), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimStunLandU_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 86, 68, -29,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimStunLandU_joint11[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -268, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), -268, 45, 0, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 402, 22, 268, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -134, 268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimStunLandU_joint12[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1672, 27, 1324, -17, 1488, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1229, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1991, 248, 1912, 349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2283, 179, 2338, 323,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2277, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2703, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1393, 128,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1486, 41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2247, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2356, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2704, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2618, -26,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1522, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 108, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2456, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2518, 1, 2598, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2458, 126, 2468, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2771, 157, 2679, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2774, 138, 2549, 358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3048, 110, 3395, 434,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2995, -23, 99, 4, 3418, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 3114, 44, 151, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3415, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 3363, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3143, 28, 158, 6, 3344, -18,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimStunLandU_joint14[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -903, -40,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1122, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1016, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -404, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -290, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -649, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -841, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -419, 365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -889, -445,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -896, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1030, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1037, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimStunLandU_joint15[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -94, 26, -99, -9, -515, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 82, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -161, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -105, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 107, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 25, -21, 300, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 40, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 241, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -375, 30,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -153, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -81, 26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 15, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -218, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -254, -295, -51, -39, -339, 207,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -169, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -810, -230, 39, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -716, 238, 3, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -333, 273, -140, 32, -159, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -169, 163, -104, 36, -215, -56,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimStunLandU_joint17[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 548, 49,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 528, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 298, -261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 98, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 395, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 312, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 213, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 333, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 326, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 316, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimStunLandU_joint19[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 129, -52, -143, -8, -257, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 240, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -81, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -224, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -397, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -433, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -268, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -389, -37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 251, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 214, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -417, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -20, 25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -61, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 70, 14,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 52, 104,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 83, -42, 217, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 344, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -97, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 232, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 327, -24, 345, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 182, -121, -112, -9, 341, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 83, -99, -117, -4, 338, -2,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimStunLandU_joint20[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 53, -18, 37, -4, -759, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -324, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -194, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -618, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -582, 14,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -395, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -878, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -233, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 6, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -561, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -585, -5,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -886, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -884, 183,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 22, -48, -587, 234,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -100, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -521, 253, -117, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -377, 183, -59, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -153, 165, -84, 20, -129, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -46, 107, -59, 24, -167, -37,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimStunLandU_joint22[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 667, 43,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 931, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 933, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 614, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 527, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 294, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 271, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 674, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 634, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 707, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 755, 48,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimStunLandU_joint23[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -151, 47, 319, -1, -115, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -355, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -135, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 294, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 216, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 48, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 85, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 164, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 164, 103, -350, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -5, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 372, 15, -132, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -27, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 195, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 247, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 241, -5, -12, 15, 29, 34,
	ftAnimEnd(),
};
