/* AnimJoint data for relocData file 906 (FTDonkeyAnimFireFlowerShoot) */
/* 2176 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimFireFlowerShoot_joint1[32];
extern u16 dFTDonkeyAnimFireFlowerShoot_joint2[34];
extern u16 dFTDonkeyAnimFireFlowerShoot_joint4[44];
extern u16 dFTDonkeyAnimFireFlowerShoot_joint5[122];
extern u16 dFTDonkeyAnimFireFlowerShoot_joint6[48];
extern u16 dFTDonkeyAnimFireFlowerShoot_joint7[36];
extern u16 dFTDonkeyAnimFireFlowerShoot_joint8[36];
extern u16 dFTDonkeyAnimFireFlowerShoot_joint10[8];
extern u16 dFTDonkeyAnimFireFlowerShoot_joint11[92];
extern u16 dFTDonkeyAnimFireFlowerShoot_joint12[40];
extern u16 dFTDonkeyAnimFireFlowerShoot_joint13[40];
extern u16 dFTDonkeyAnimFireFlowerShoot_joint14[16];
extern u16 dFTDonkeyAnimFireFlowerShoot_joint16[22];
extern u16 dFTDonkeyAnimFireFlowerShoot_joint17[106];
extern u16 dFTDonkeyAnimFireFlowerShoot_joint19[40];
extern u16 dFTDonkeyAnimFireFlowerShoot_joint21[110];
extern u16 dFTDonkeyAnimFireFlowerShoot_joint22[88];
extern u16 dFTDonkeyAnimFireFlowerShoot_joint24[36];
extern u16 dFTDonkeyAnimFireFlowerShoot_joint25[88];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTDonkeyAnimFireFlowerShoot_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShoot_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShoot_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShoot_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShoot_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShoot_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShoot_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShoot_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShoot_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShoot_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShoot_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShoot_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShoot_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShoot_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShoot_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShoot_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShoot_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShoot_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShoot_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTDonkeyAnimFireFlowerShoot_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimFireFlowerShoot_joint1[32] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1032, -402,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), -24,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), -847, -410,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 784, -198,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 784, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 765, -967,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 784, 112, -847, 237,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 1032, -402,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimFireFlowerShoot_joint2[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -41, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -264, 0, 286, 32, -92, -7,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -264, 286, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -264, 0, 286, -16, -92, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -265, -41, -16,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimFireFlowerShoot_joint4[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 750, 24, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 574, -17, 50, 2, 100, 5,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 574, 0, 50, 3, 100, -3,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 528, 69, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 574, 11, 50, -2, 100, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 750, 24, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimFireFlowerShoot_joint5[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, 4, -84, 5, -473, 84,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 145, 176, -233, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -425, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -831, -400,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1414, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 370, 186, -350, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 370, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -350, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1437, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1226, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 370, 0, -1226, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 442, 43, -1319, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -350, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -223, 54,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 480, 12, -1366, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 59, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -318, 47,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -179, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -82, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 10, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -62, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -307, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -447, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 0, -84, -2, -473, -25,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimFireFlowerShoot_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -199,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -924, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1145, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -928, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -919, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -964, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -946, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1039, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -906, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -465, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 58,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimFireFlowerShoot_joint7[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1302, -130, -66, -6, 294, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1302, -66, 294,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1302, -66, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1302, 86, -66, 4, 294, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimFireFlowerShoot_joint8[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 245, 7, -322, -25, 236, 28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 245, -322, 236,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 245, -322, 236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 245, -4, -322, 16, 236, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 174, -67, -44,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimFireFlowerShoot_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimFireFlowerShoot_joint11[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1492, 14, -1780, -12, 1129, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 1749, 12, -1719, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1608, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1599, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1608, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1762, 16, -1684, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1781, 93, -1666, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1950, 96, -1864, -145, 1450, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1890, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1956, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1497, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1488, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1135, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1846, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1495, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1938, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -1784, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1492, -3, -1780, 3, 1129, -6,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimFireFlowerShoot_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -66,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -989, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1006, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1087, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1237, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1138, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1104, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -427, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimFireFlowerShoot_joint13[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 103, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 962, 59, 431, 36, 256, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 697, 360, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 962, 26, 431, 7, 256, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 962, -57, 431, -28, 256, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 103, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimFireFlowerShoot_joint14[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -893,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1340, 2502, 120, 120, 180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -777,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -893,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimFireFlowerShoot_joint16[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -404, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -814, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -948, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), -404,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimFireFlowerShoot_joint17[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1695, 12, -1214, 24, 1303, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1220, 121, -954, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1453, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1271, -154,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 898, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1130, 67, -980, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -957, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1082, 13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 691, -94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 739, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -961, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1309, -123,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 774, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1106, 84,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1068, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1187, -24,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1435, -116, 1190, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1692, -6, 1304, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1207, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1695, -2, -1214, -7, 1303, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimFireFlowerShoot_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1004, 25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 907, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 832, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1054, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1095, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1095, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1101, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1012, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1004, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimFireFlowerShoot_joint21[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1545, -40, 1584, -22, 1231, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1572, 29, 1108, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1191, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1044, -109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1077, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1596, -1, 1175, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1454, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1175, 13,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1119, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1216, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1362, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1452, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1174, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1098, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1193, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1324, 69,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1450, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1576, 14,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1099, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1223, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1394, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1540, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1545, 4, 1584, 7, 1231, 7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimFireFlowerShoot_joint22[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 99, 9, 216, 18, -297, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 521, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 9, -57, -545, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -39, -37, -643, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -105, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -647, 89,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 547, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 703, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 691, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 363, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -132, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 44, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 96, 41, -560, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 104, -7, -303, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 314, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 223, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 99, -4, 216, -6, -297, 5,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimFireFlowerShoot_joint24[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 993, 19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1184, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1153, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1057, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1065, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 1013, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 998, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimFireFlowerShoot_joint25[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 105, 6, -383, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 126, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 0, -44, -288, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -43, -44, -241, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -328, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -139, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -269, -58, 50, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 121, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -207, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -184, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -2, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 123, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 105, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -350, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -381, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 2, 105, 0, -383, -1,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
