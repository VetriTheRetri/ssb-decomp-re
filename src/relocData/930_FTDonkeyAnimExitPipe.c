/* AnimJoint data for relocData file 930 (FTDonkeyAnimExitPipe) */
/* 2336 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimExitPipe_joint1[44];
extern u16 dFTDonkeyAnimExitPipe_joint2[18];
extern u16 dFTDonkeyAnimExitPipe_joint4[34];
extern u16 dFTDonkeyAnimExitPipe_joint5[112];
extern u16 dFTDonkeyAnimExitPipe_joint6[48];
extern u16 dFTDonkeyAnimExitPipe_joint7[50];
extern u16 dFTDonkeyAnimExitPipe_joint8[26];
extern u16 dFTDonkeyAnimExitPipe_joint10[18];
extern u16 dFTDonkeyAnimExitPipe_joint11[94];
extern u16 dFTDonkeyAnimExitPipe_joint12[48];
extern u16 dFTDonkeyAnimExitPipe_joint13[54];
extern u16 dFTDonkeyAnimExitPipe_joint14[34];
extern u16 dFTDonkeyAnimExitPipe_joint16[16];
extern u16 dFTDonkeyAnimExitPipe_joint17[106];
extern u16 dFTDonkeyAnimExitPipe_joint19[56];
extern u16 dFTDonkeyAnimExitPipe_joint21[108];
extern u16 dFTDonkeyAnimExitPipe_joint22[92];
extern u16 dFTDonkeyAnimExitPipe_joint24[46];
extern u16 dFTDonkeyAnimExitPipe_joint25[114];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTDonkeyAnimExitPipe_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimExitPipe_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimExitPipe_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimExitPipe_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTDonkeyAnimExitPipe_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTDonkeyAnimExitPipe_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimExitPipe_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimExitPipe_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimExitPipe_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTDonkeyAnimExitPipe_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTDonkeyAnimExitPipe_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimExitPipe_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimExitPipe_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimExitPipe_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTDonkeyAnimExitPipe_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTDonkeyAnimExitPipe_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTDonkeyAnimExitPipe_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTDonkeyAnimExitPipe_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTDonkeyAnimExitPipe_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTDonkeyAnimExitPipe_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimExitPipe_joint1[44] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -1294, -109, 2457, 2457, 2457,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), -24,
	ftAnimSetValRateT(FT_ANIM_TRAY, 18), 689, 571,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 35), -86, -58,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 4096, 0, 4096, 0, 4096, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -102, -102, -102,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 31), 4096, 4096, 4096,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 17), 1207, 124,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 1032, -402,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimExitPipe_joint2[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -139, -35, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -139, -3, -35, 0, -26, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -265, -41, -16,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimExitPipe_joint4[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 390, 22, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 383, 28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 22, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 907, 25, 22, 0, 40, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 998, -7, 23, 0, 41, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 750, 24, 41,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimExitPipe_joint5[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1549, -31, -1604, -78, 560, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -2037, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1772, -118, 617, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1891, -19, 567, 92,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1536, 68, 1377, 214,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2053, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1786, 64,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1508, 12, 1543, 130,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1546, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -1572, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1718, 73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1450, -16,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1495, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 1147, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1468, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1675, 13,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1581, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1668, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1644, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1535, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1671, -2, -1523, 12, 1134, -12,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimExitPipe_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1222, 34,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -977, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -881, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1179, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1239, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1152, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1163, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -867, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -841, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -437, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimExitPipe_joint7[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -822, 59, -326, 13, 86, 8,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 702, 15, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 426, 81, -36, -8, 264, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 237, -2, -436, -34, -433, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 379, 0, -660, 2, -634, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 232, -22, -373, 38, -701, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimExitPipe_joint8[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -199, -78, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -258, -27, -68, 1, 42, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -698, 14, -54, 0, 64, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 174, -67, -44,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimExitPipe_joint10[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 61, 70, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 61, -11, 70, 0, 29, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -398, 70, 29,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimExitPipe_joint11[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1758, 26, 1615, 30, 552, 72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1841, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1577, 92, 674, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1484, 5, 639, 103,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1749, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1144, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1368, 186,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1532, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1771, -9, 1751, -81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1343, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -1791, 11,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1482, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 1143, -20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1351, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), 1531, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1768, 22, 1508, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1724, 3, 1441, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1724, 0, 1436, -5, 1129, -14,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimExitPipe_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1269, 37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -986, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -867, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1046, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1162, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1141, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1149, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -794, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -763, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -449, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimExitPipe_joint13[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 310, -68, 743, -14, -227, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -548, -54, 151, -16, 13, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -393, -22, 529, 24, -596, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -947, -35, 589, 1, -1256, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -928, 14, 550, -2, -1316, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -771, 85, 564, -45, -1268, 109,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 98, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimExitPipe_joint14[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -916, 0, -1286, -11, 2462, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 127, 93, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -909, 0, -1606, -12, 2476, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -906, 0, -1635, 11, 2423, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -916, -1286, 2462,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimExitPipe_joint16[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 1046, 573,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -194,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 30), -404,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimExitPipe_joint17[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 300, -13, -378, -6, -1109, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -199, 104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -430, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -146, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -34, 115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 109, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -80, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -68, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -429, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -269, 40,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -69, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -74, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 114, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 195, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, -49, 204, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -278, -22, 0, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -297, -22, -25, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -390, -8, -277, -46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -220, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -109, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -86, 22, -394, -3, -304, -27,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimExitPipe_joint19[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1323, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 522, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 293, -261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 257, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 387, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 799, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 901, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 975, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1004, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimExitPipe_joint21[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 696, -14, -61, 6, 391, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 480, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 135, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 680, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 827, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 827, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 541, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 685, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 126, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 375, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 828, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 840, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 835, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 621, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 560, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 304, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 671, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 502, -226,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 366, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 55, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 199, -247, 18, -261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -51, -35, -339, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, -11, 24, -30, -377, -37,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimExitPipe_joint22[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1622, 9, 1225, 7, 716, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1574, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1342, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1355, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1454, 124,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1686, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1617, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1612, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1693, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 1791, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1344, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), -1498, -16,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1611, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1395, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1799, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1574, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1547, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1331, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1508, -9, 1391, -3, 1310, -20,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimExitPipe_joint24[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1301, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 636, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 458, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -75,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 445, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 524, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 963, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, 29,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimExitPipe_joint25[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2036, -4, -1570, 6, 1965, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -2602, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1482, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 2165, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2320, 120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2413, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2596, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -2523, 32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1489, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1293, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2418, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 2449, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2451, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2144, -50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1290, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1423, -139,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2488, 105, 2096, -94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1269, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2313, 307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1873, 343,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1600, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1589, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1685, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1607, -6, -1713, -28, 1224, -44,
	ftAnimEnd(),
};
