/* AnimJoint data for relocData file 929 (FTDonkeyAnimEnterPipe) */
/* 2000 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimEnterPipe_joint1[46];
extern u16 dFTDonkeyAnimEnterPipe_joint2[22];
extern u16 dFTDonkeyAnimEnterPipe_joint4[30];
extern u16 dFTDonkeyAnimEnterPipe_joint5[82];
extern u16 dFTDonkeyAnimEnterPipe_joint6[32];
extern u16 dFTDonkeyAnimEnterPipe_joint7[26];
extern u16 dFTDonkeyAnimEnterPipe_joint8[30];
extern u16 dFTDonkeyAnimEnterPipe_joint10[22];
extern u16 dFTDonkeyAnimEnterPipe_joint11[76];
extern u16 dFTDonkeyAnimEnterPipe_joint12[32];
extern u16 dFTDonkeyAnimEnterPipe_joint13[26];
extern u16 dFTDonkeyAnimEnterPipe_joint14[10];
extern u16 dFTDonkeyAnimEnterPipe_joint16[16];
extern u16 dFTDonkeyAnimEnterPipe_joint17[88];
extern u16 dFTDonkeyAnimEnterPipe_joint19[48];
extern u16 dFTDonkeyAnimEnterPipe_joint21[104];
extern u16 dFTDonkeyAnimEnterPipe_joint22[102];
extern u16 dFTDonkeyAnimEnterPipe_joint24[48];
extern u16 dFTDonkeyAnimEnterPipe_joint25[110];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTDonkeyAnimEnterPipe_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimEnterPipe_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimEnterPipe_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimEnterPipe_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTDonkeyAnimEnterPipe_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTDonkeyAnimEnterPipe_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimEnterPipe_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimEnterPipe_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimEnterPipe_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTDonkeyAnimEnterPipe_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTDonkeyAnimEnterPipe_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimEnterPipe_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimEnterPipe_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimEnterPipe_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTDonkeyAnimEnterPipe_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTDonkeyAnimEnterPipe_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTDonkeyAnimEnterPipe_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTDonkeyAnimEnterPipe_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTDonkeyAnimEnterPipe_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTDonkeyAnimEnterPipe_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimEnterPipe_joint1[46] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 1032, -402, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), -24,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 24), 4096, 0, 4096, 0, 4096, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1028, -171, -86, 73,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 28), -109, -64,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 12), 689, -663,
	ftAnimSetValRateT(FT_ANIM_TRAY, 16), -1294, 101,
	ftAnimBlock(0, 8),
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -102, -102, -102,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 2457, 2457, 2457,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimEnterPipe_joint2[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -41, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -139, 3, -35, 0, -26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -139, -4, -35, 0, -26, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTDonkeyAnimEnterPipe_joint4[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 750, 24, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 907, -14, 22, 0, 40, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 383, -32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 22, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 390, 20, 22, 0, 40, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimEnterPipe_joint5[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1671, -3, -1523, 4, 1134, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1910, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 913, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -1391, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1377, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1252, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1895, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1484, 35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 723, -166,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 358, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1275, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1612, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1460, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1535, -12,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 359, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 519, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1549, -13, -1604, 8, 560, 41,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimEnterPipe_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -43,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1039, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1109, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1249, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1222, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -1200, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1222, -22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimEnterPipe_joint7[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 702, 15, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -822, -25, -326, -10, 86, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -822, 30, -326, 12, 86, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimEnterPipe_joint8[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -698, -17, -54, 0, 64, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -258, 31, -68, -1, 42, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -199, 24, -78, 0, 6, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimEnterPipe_joint10[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 61, 14, 70, 0, 29, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 61, -17, 70, 0, 29, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimEnterPipe_joint11[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1724, 8, 1436, -11, 1129, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -1292, 7, 1420, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 1284, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1280, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1230, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1298, -36, 1332, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1776, -71, 502, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1819, -30, 1272, 38, 422, -61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1778, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1633, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 441, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 473, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1769, 9, 509, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1758, 11, 1615, -18, 552, 42,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimEnterPipe_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1075, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1147, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1334, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1298, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -1246, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1269, -23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimEnterPipe_joint13[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 623, 49, 278, 28, 210, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 893, -12, 446, 18, 268, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 310, 743, -227,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimEnterPipe_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -916, -1286, 2462, 127, 93, 134,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimEnterPipe_joint16[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 1046, 573,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 25), -194,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), -404,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimEnterPipe_joint17[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -86, -10, -394, 1, -304, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -423, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -125, 72, 122, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -77, 25, 155, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -81, -16, 83, -19,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -425, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -172, 84,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, -86, 53, -93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -319, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -324, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -376, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -383, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -437, -122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1106, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -82, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 295, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 300, 4, -378, 4, -1109, -3,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimEnterPipe_joint19[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1004, -14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 524, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 379, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 4, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 4, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 64, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 429, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 619, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1319, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1323, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimEnterPipe_joint21[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, 15, 24, 47, -377, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 387, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 69, 235, -153, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 423, 291, 157, 250,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 716, 9, 523, 68,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 381, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 196, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 721, 0, 596, 80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 747, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 887, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 889, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 917, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 703, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 740, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 212, 1, 907, -96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -53, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 634, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 565, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 408, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 696, -44, -61, -7, 391, -16,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimEnterPipe_joint22[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1508, 4, 1391, 1, 1310, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1528, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1348, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1552, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1623, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1609, 41, 1763, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1619, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1752, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1684, -8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1346, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1593, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1619, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1522, -76,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1674, -89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1389, -106,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1463, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1226, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1292, -93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 721, -27,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1617, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1622, -4, 1225, -1, 716, -4,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimEnterPipe_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 993, -14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 486, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 321, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 349, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 564, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1297, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1301, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimEnterPipe_joint25[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1607, 9, -1713, 44, 1224, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1700, -306, -1511, 168, 1492, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2212, -388, -1332, 110, 1812, 244,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1296, -3, 2142, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -2565, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2600, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -2668, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1299, -3, 2214, 82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1427, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2479, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2471, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 2468, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1403, 13, 2476, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2194, -91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1564, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2675, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -2168, 129,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2118, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1981, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2036, 132, -1570, -6, 1965, -15,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
