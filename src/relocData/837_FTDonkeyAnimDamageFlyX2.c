/* AnimJoint data for relocData file 837 (FTDonkeyAnimDamageFlyX2) */
/* 2112 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimDamageFlyX2_joint1[62];
extern u16 dFTDonkeyAnimDamageFlyX2_joint2[10];
extern u16 dFTDonkeyAnimDamageFlyX2_joint4[46];
extern u16 dFTDonkeyAnimDamageFlyX2_joint5[122];
extern u16 dFTDonkeyAnimDamageFlyX2_joint7[56];
extern u16 dFTDonkeyAnimDamageFlyX2_joint8[32];
extern u16 dFTDonkeyAnimDamageFlyX2_joint10[8];
extern u16 dFTDonkeyAnimDamageFlyX2_joint11[118];
extern u16 dFTDonkeyAnimDamageFlyX2_joint12[56];
extern u16 dFTDonkeyAnimDamageFlyX2_joint13[8];
extern u16 dFTDonkeyAnimDamageFlyX2_joint14[10];
extern u16 dFTDonkeyAnimDamageFlyX2_joint16[20];
extern u16 dFTDonkeyAnimDamageFlyX2_joint17[116];
extern u16 dFTDonkeyAnimDamageFlyX2_joint19[48];
extern u16 dFTDonkeyAnimDamageFlyX2_joint21[68];
extern u16 dFTDonkeyAnimDamageFlyX2_joint22[98];
extern u16 dFTDonkeyAnimDamageFlyX2_joint24[48];
extern u16 dFTDonkeyAnimDamageFlyX2_joint25[80];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTDonkeyAnimDamageFlyX2_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyX2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyX2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyX2_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyX2_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyX2_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyX2_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyX2_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyX2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyX2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyX2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyX2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyX2_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyX2_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyX2_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyX2_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyX2_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyX2_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyX2_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimDamageFlyX2_joint1[62] = {
	ftAnimSetValRate(FT_ANIM_TRAX), -29, 219,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), -6, 0, 0, 1031, -400,
	ftAnimSetValRateT(FT_ANIM_TRAX, 2), 14, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 25), -600, -49,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 29), -19,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY, 29), -6, 0, 1061, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -6, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), -7, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 4), 14, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 16), 14, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 7), 14,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 176,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -989, -333,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 240, 120,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimDamageFlyX2_joint2[10] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -214, -154,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), -245, -2,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimDamageFlyX2_joint4[46] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 750, 24, 41, 0, 319, -157,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 0, 368, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 570, 7, 51, 4, 62, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 797, 14, 48, 0, 60, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 863, -1, 48, -2, 60, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, -24, 0, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 764,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimDamageFlyX2_joint5[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1545, -108, -1523, 55, -2082, 255,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1780, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1437, -174, -1468, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1197, 18, -1197, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1475, 267, -1032, -5, -2132, -326,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2770, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1732, 157, -1208, -157,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1519, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1836, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1849, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1791, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2808, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -2683, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1539, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1411, 29,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2653, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2017, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1367, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1129, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1743, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1431, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1284, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1437, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1464, 33, -1459, -22, -2048, -31,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimDamageFlyX2_joint7[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -680,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1088, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1308, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -926, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -663, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -168, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -74, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -410, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -471, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1177, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1197, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1088, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1044, 43,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimDamageFlyX2_joint8[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, 76, -67, 79, -44, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 174, 16, 0, 7, -4, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 615, -7, 144, 8, -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -27, -111, 222, 14, 3, -27,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimDamageFlyX2_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimDamageFlyX2_joint11[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -115, 205, 172, 97, -479, 291,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 402, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 89, 400, -188, 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 685, 275, 145, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 640, -359, 611, 92, 63, -375,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 341, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -34, -425, -605, -438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -256, -30, -897, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -271, -13, 320, -17, -928, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -822, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), -263, 36, 347, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -223, 69, 323, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -5, 7, 32, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -768, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -672, 103,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1, 5, 42, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 23, 16, 113, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -553, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -455, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 38, 15, 133, 19, -411, 44,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimDamageFlyX2_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -635,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1051, -445,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1308, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -992, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -756, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -454, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -448, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -583, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -521, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -306, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -411, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -715, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -777, -61,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimDamageFlyX2_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimDamageFlyX2_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimDamageFlyX2_joint16[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 1046, 573,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1008, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), -1008, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), -404,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimDamageFlyX2_joint17[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1669, -19, -1215, 105, 1279, -342,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1139, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1688, -324, 936, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2318, -239, 1198, 115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1120, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2166, 176, -1280, -72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1283, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1966, 184,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1673, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1033, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1059, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1296, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -1233, 32,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1682, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1556, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1075, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 843, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 756, -75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 682, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1508, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1516, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1188, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1080, 139, 772, 306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1978, -461, -909, 171, 1294, 522,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimDamageFlyX2_joint19[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1026, -180,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, -305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 415, -338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 211, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 352, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 335, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 306, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 665, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 815, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1114, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1073, -41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimDamageFlyX2_joint21[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 192, 14, 115, -369, 435,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 428, 184,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 176, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 78, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 369, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 208, -89, 435, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 24, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 189, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 208, -20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 175, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 163, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 186, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), 245, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 306, 61, 164, 1, 0, -24,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimDamageFlyX2_joint22[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 104, -159, 217, -99, -295, -426,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 126, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -55, 29, -722, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 162, 115, -533, 138,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -531, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 166, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 162, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 119, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -525, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -363, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 124, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 142, 12,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -389, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -640, -39,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 153, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 148, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 107, -3, -664, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 169, 32, -496, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 201, 31, 160, 11, -447, 49,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimDamageFlyX2_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 994, 33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1028, -312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 369, -427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 317, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 369, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 4, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 369, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 503, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1069, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1078, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimDamageFlyX2_joint25[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, -6, 103, -95, -387, 560,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -77, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 39, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 172, 322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 257, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 201, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -81, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -201, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 41, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 72, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 191, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -91, -18,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -218, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -216, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -243, -27, 74, 2, -110, -18,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
