/* AnimJoint data for relocData file 1700 (FTNessAnimDamageFlyX1) */
/* 3248 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimDamageFlyX1_joint1[40];
extern u16 dFTNessAnimDamageFlyX1_joint2[34];
extern u16 dFTNessAnimDamageFlyX1_joint4[46];
extern u16 dFTNessAnimDamageFlyX1_joint5[184];
extern u16 dFTNessAnimDamageFlyX1_joint6[60];
extern u16 dFTNessAnimDamageFlyX1_joint7[10];
extern u16 dFTNessAnimDamageFlyX1_joint8[50];
extern u16 dFTNessAnimDamageFlyX1_joint10[10];
extern u16 dFTNessAnimDamageFlyX1_joint11[168];
extern u16 dFTNessAnimDamageFlyX1_joint12[24];
extern u16 dFTNessAnimDamageFlyX1_joint13[10];
extern u16 dFTNessAnimDamageFlyX1_joint15[10];
extern u16 dFTNessAnimDamageFlyX1_joint16[166];
extern u16 dFTNessAnimDamageFlyX1_joint18[90];
extern u16 dFTNessAnimDamageFlyX1_joint19[166];
extern u16 dFTNessAnimDamageFlyX1_joint21[70];
extern u16 dFTNessAnimDamageFlyX1_joint22[140];
extern u16 dFTNessAnimDamageFlyX1_joint24[80];
extern u16 dFTNessAnimDamageFlyX1_joint25[158];
extern u16 dFTNessAnimDamageFlyX1_joint26[56];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimDamageFlyX1_joints[] = {
	(AObjEvent32 *)dFTNessAnimDamageFlyX1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimDamageFlyX1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimDamageFlyX1_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimDamageFlyX1_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimDamageFlyX1_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimDamageFlyX1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimDamageFlyX1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimDamageFlyX1_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimDamageFlyX1_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimDamageFlyX1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimDamageFlyX1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimDamageFlyX1_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimDamageFlyX1_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimDamageFlyX1_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimDamageFlyX1_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimDamageFlyX1_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimDamageFlyX1_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimDamageFlyX1_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimDamageFlyX1_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimDamageFlyX1_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimDamageFlyX1_joint1[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 537, -28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, -16,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 597, 73, -268, -292,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 0, -101,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 592, -1, -247, 7,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 592, -19, -247, 155,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 537, 39, 199, -77,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimDamageFlyX1_joint2[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -360, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 296, -63, 0, 13, 0, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -350, -36, -281, -2, 207, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -541, -37, -52, 12, 178, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1206, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimDamageFlyX1_joint4[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 97, 45, 0, -12, 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 137, -48, -37, -16, 10, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -145, -19, -83, -2, 24, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -263, 15, -83, -20, 24, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 206, -557, -225,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimDamageFlyX1_joint5[184] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1198, -552, -1347, 1056, -1192, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 646, -195, -291, 541, -1058, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 807, 147, -264, 18, -1161, -98,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 982, 20, -234, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1469, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1453, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1667, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1024, 145, -252, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -212, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1274, 400,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1824, 411, -1963, -244,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2484, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2093, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1835, -279, -100, 100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 10, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1534, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1399, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1172, -507, -114, -352, -2503, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 383, -389, -694, -376, -2224, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 393, -72, -867, -137, -2697, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 237, 129, -970, -67, -2667, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 652, 166, -1001, 277, -3027, 423,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 571, 104, -414, 369, -1820, 552,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 860, 216, -263, 67, -1921, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2126, -461,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1004, 246, -279, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1354, 660, -563, -171,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -596, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2325, 812, -2831, -573,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2979, 415, -3273, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3156, 177, -585, 10, -3426, -153,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimDamageFlyX1_joint6[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, 473,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 232,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -429, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -531, -426,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -861, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -724, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -606, 118,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimDamageFlyX1_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimDamageFlyX1_joint8[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, 364, 0, -32, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 255, 130, 0, -161, 0, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 380, -70, -121, -35, 19, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -97, -31, -177, 0, 33, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -281, 14, -106, 5, 162, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 246, -53, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimDamageFlyX1_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimDamageFlyX1_joint11[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1192, -437, 1038, 240, 1489, -951,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 755, -237, 1279, 108, 538, -503,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 716, -55, 1256, -37, 482, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 993, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 237, -320, 44, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -186, -436, -339, -373,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -891, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -635, -318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -824, -128, 1061, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1036, -188,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1580, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1035, -169,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1670, -83,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1268, -252,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1883, -127,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1747, -86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2543, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2006, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -2269, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2203, 47, 1596, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2336, -231,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1120, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2656, -147,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3183, 229,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2638, -245,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2831, 170,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1042, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2487, 415, 944, 0, -2771, 472,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1999, 303, 1040, 108, -2237, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1881, 71, 1161, 75, -2112, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1857, 24, 1192, 30, -2088, 23,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimDamageFlyX1_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 549,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimDamageFlyX1_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 90, 54, 126, 143, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimDamageFlyX1_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimDamageFlyX1_joint16[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1242, 538, -1328, -365, -1906, -800,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1781, 271, -1694, -170, -2706, -359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1785, -29, -1669, 76, -2624, 184,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1290, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1509, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2337, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2214, 116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2150, -165,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1276, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1312, -80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1687, 94, -2386, -123,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1318, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1991, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1412, -53, -1821, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1895, -115,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1300, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1320, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1559, 125,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2077, -257,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2625, -151,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1650, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1429, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1308, -5, -2713, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1484, -73, -2002, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1535, 43, -1886, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1342, 17, -2299, -155,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1585, 106,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1542, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1363, -18, -2410, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1379, -23, -2246, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1501, -41, -1411, -31, -2046, 200,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimDamageFlyX1_joint18[90] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 396, 174,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 571, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 413, -285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -206,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 196, 303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 613, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 734, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 320, -317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 562, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 713, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 428, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 141, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 549, 439,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 933, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 745, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 619, -125,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimDamageFlyX1_joint19[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, -25, 12, -223, 26, 284,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -56, 74, -330, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 445, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 623, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 513, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 23, 55, -272, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 118, 97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -187, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 494, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 107, 131,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 247, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 285, 48,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -179, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -41, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 341, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 314, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 296, 113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 135, -139,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 555, 150,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 685, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 20, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 69, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 737, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 221, -90,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 98, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 319, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -29, 22, 400, -92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 129, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 131, -97, 135, -195,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 23, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 10, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 269, 109,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 103, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 114, 10, 135, 5, 324, 54,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimDamageFlyX1_joint21[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -259, 442, -102,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -711, -17, 4, -29, -161, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -364, 40, 266, 28, -82, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -345, 49, 259, -8, -55, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 34, 2, 199, -12, -38, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -320, 2, 149, -13, 20, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 55, -28, 66, -3, -190, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -548, -71, 118, -13, 8, 38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -302, 0, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimDamageFlyX1_joint22[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -127, 210, 136, -38, -210, -514,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -16, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 83, 101, -725, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 75, -19, -689, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 151, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -256, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, -28, -212, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -104, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -695, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 265, 77, -798, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 243, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -67, -718, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -226, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -809, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -823, -69,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -208, 90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 24, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -974, -94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1063, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 56, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 85, 77,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1056, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 235, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 182, -45,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 148, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 139, -13, 158, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 155, 15, 153, -5, 241, 240,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimDamageFlyX1_joint24[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 407, 40,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 268, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 592, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 630, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 485, -315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 449, 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 712, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 691, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 507, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 331, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 608, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 529, -79,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimDamageFlyX1_joint25[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 76, -207, 25, -88, -202, 500,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -319, 72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -200, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 298, 332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 463, 87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 356, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -153, 98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -110, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -146, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -14, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 337, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 67, -50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -86, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -372, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 13, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -147, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 36, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 286, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 394, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 375, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -388, -17, -149, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -24, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -378, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 190, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 213, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 12, 23, 280, 82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 387, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -118, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -376, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -302, 98,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 337, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -186, 73, 305, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -155, 30, -139, -20, 320, 15,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimDamageFlyX1_joint26[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -140, 283, -182,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -444, 11, 231, 10, -155, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -73, -14, 346, 3, -39, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -636, -30, 275, -24, -56, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -471, 11, 29, -14, -146, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -518, 83, 128, -2, -80, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 363, 0, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
