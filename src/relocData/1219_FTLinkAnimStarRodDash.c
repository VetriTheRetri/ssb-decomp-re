/* AnimJoint data for relocData file 1219 (FTLinkAnimStarRodDash) */
/* 3568 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimStarRodDash_joint1[22];
extern u16 dFTLinkAnimStarRodDash_joint2[52];
extern u16 dFTLinkAnimStarRodDash_joint3[56];
extern u16 dFTLinkAnimStarRodDash_joint5[68];
extern u16 dFTLinkAnimStarRodDash_joint6[216];
extern u16 dFTLinkAnimStarRodDash_joint7[102];
extern u16 dFTLinkAnimStarRodDash_joint10[62];
extern u16 dFTLinkAnimStarRodDash_joint11[200];
extern u16 dFTLinkAnimStarRodDash_joint12[94];
extern u16 dFTLinkAnimStarRodDash_joint13[58];
extern u16 dFTLinkAnimStarRodDash_joint14[10];
extern u16 dFTLinkAnimStarRodDash_joint17[34];
extern u16 dFTLinkAnimStarRodDash_joint18[34];
extern u16 dFTLinkAnimStarRodDash_joint19[50];
extern u16 dFTLinkAnimStarRodDash_joint21[36];
extern u16 dFTLinkAnimStarRodDash_joint22[126];
extern u16 dFTLinkAnimStarRodDash_joint24[56];
extern u16 dFTLinkAnimStarRodDash_joint26[118];
extern u16 dFTLinkAnimStarRodDash_joint27[120];
extern u16 dFTLinkAnimStarRodDash_joint29[210];

/* Joint pointer table (30 entries, 120 bytes) */
u32 dFTLinkAnimStarRodDash_joints[] = {
	(u32)dFTLinkAnimStarRodDash_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimStarRodDash_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimStarRodDash_joint3, /* [2] joint 3 */
	(u32)dFTLinkAnimStarRodDash_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTLinkAnimStarRodDash_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimStarRodDash_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimStarRodDash_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTLinkAnimStarRodDash_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimStarRodDash_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimStarRodDash_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimStarRodDash_joint14, /* [13] joint 14 */
	(u32)dFTLinkAnimStarRodDash_joint17, /* [14] joint 17 */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	(u32)dFTLinkAnimStarRodDash_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimStarRodDash_joint19, /* [18] joint 19 */
	(u32)dFTLinkAnimStarRodDash_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTLinkAnimStarRodDash_joint22, /* [21] joint 22 */
	(u32)dFTLinkAnimStarRodDash_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTLinkAnimStarRodDash_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTLinkAnimStarRodDash_joint27, /* [26] joint 27 */
	(u32)dFTLinkAnimStarRodDash_joint29, /* [27] joint 29 */
	0x00000000, /* [28] NULL */
	0xFFFF032F, /* [29] END */
};

/* Joint 1 */
u16 dFTLinkAnimStarRodDash_joint1[22] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 1409,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 22), 1240, 11,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 9), 1240, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 374,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 24), 2177,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimStarRodDash_joint2[52] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 857, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 838, -134, 95, 105,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 756, -309, 90, 338,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 644, -43, 307, 229,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -18,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 522, 12, 550, 80,
	ftAnimSetValRateT(FT_ANIM_TRAY, 21), 700, 92,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 9), 534, -188,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 12), 49, -177,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 901, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTLinkAnimStarRodDash_joint3[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 100, -161, -131,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 42, -10, -232, -12, -62, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 19, 0, -259, -1, -36, 1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), -259, 0, -36, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 19, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 19, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, 16, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), -107, 276, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimStarRodDash_joint5[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 780, 464, 599,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 445, -33, -127, -26, -211, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 515, -14, 255, -3, 29, -24,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 514, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 256, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 295, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 255, 0, 29, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -41, -18, 21, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 459, -1, -41, 9, 21, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 259, 166, 56,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimStarRodDash_joint6[216] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1905, -117, -1146, 19, -1685, 135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1181, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1496, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1525, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1403, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1114, -413, -1177, -139,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2006, -604,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 576, 294, -1634, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1703, 546, -1153, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1669, -22, -1750, -299, -2671, -332,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 1671, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1753, -2, -2671, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1755, -1, -2671, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -1750, 0, -2671, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1670, 68, -1750, 44, -2671, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 2259, -113, -1074, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2613, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2652, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2650, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1997, -11, -875, 378, -2394, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2236, -50, -317, 277, -2946, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1895, -216, -319, -18, -2709, 186,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2571, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -338, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1791, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1783, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1767, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2567, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -2551, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1780, 64, -354, 9, -2556, -79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -431, -126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2962, 307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2960, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3013, -92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3308, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -561, -79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -357, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3229, 214,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3500, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3309, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3305, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3497, -3, -326, 30, -3303, 2,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimStarRodDash_joint7[102] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -134,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -353, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -465, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -668, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1033, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -244, 394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -244, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -244, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -244, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -597, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -685, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -795, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -938, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -249, 469,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -621, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -561, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -433, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -480, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -511, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimStarRodDash_joint10[62] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 52, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -157, -9, -24, -3, 795, 28,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -157, 0, -24, 0, 795, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 26, -35, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 285, 0, -634, 0, 467, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -8, 20, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 150, -7, -56, 30, 522, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 150, -6, -56, 2, 522, -20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 4, 7, 76,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimStarRodDash_joint11[200] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1160, 17, 1339, -15, -1583, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1196, -75, 1107, -81, -1570, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1263, 31, 1060, 24, -1632, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1133, -106, 1157, 36, -1462, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1476, -570, 1132, 286, -1765, -638,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2275, -401, 1730, 300, -2739, -488,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2279, -3, 1733, 2, -2741, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1691, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), -2275, 19, -2739, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2238, 73, -2700, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1879, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2439, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1665, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1493, -229,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1914, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2329, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1202, -285,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 709, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2580, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2654, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 437, -125, -2835, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 463, 8, -2758, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2208, 80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -2076, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 474, 25, -2698, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 349, -18, -2561, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 333, -38, -2565, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 28, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -3180, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2117, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2707, -63,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 53, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 117, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2759, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2790, -20, -3243, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2800, -10, 123, 6, -3267, -24,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimStarRodDash_joint12[94] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -884, 43,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -498, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -154, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -305, -568,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1143, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -181, 483,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -176, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -177, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -181, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -481, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -512, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -974, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -824, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -406, 259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -305, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 96,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -826, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -817, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -617, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 30,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimStarRodDash_joint13[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 46, 22, -405, -47, -409, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 159, 216, -545, -62, 616, 496,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 479, 24, -530, 1, 583, -2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 479, 0, -530, 0, 583, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, 44, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -18, -14, 356, 9, 1024, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 0, -209, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTLinkAnimStarRodDash_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 804, -804, 804, 60, 0, 12,
	ftAnimBlock(0, 55),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimStarRodDash_joint17[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -385, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1354, -13, 102, 19, 672, 40,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 1354, -13, 102, 19, 672, 40,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 33), 1697, -536, -339,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimStarRodDash_joint18[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -21, -2, 252, 21, -53, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -19, 0, 7, -15, -43, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -6, 0, 1, -3, -15, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 33), 0, -163, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTLinkAnimStarRodDash_joint19[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -247, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -365, -19, 207, 25, -140, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -405, 2, 0, -13, 30, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -331, 8, -5, 10, 8, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -196, 9, 279, 3, -149, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -121, 8, 73, -21, -28, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimStarRodDash_joint21[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 164, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 164, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -17, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -191, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 70, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 70, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTLinkAnimStarRodDash_joint22[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1562, -69, -1277, 1, 851, 110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1672, 78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 37), -1189, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1133, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1132, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 865, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1563, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1492, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 870, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 866, 13,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1481, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1490, -16,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 879, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 924, 29,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1522, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1781, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 951, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 1582, 49,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1183, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1359, -7,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1789, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1846, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1630, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1704, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1850, -4, -1364, -4, 1717, 12,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimStarRodDash_joint24[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 581, -139,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 240, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 400, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 709, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 959, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 985, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 1085, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1082, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 473, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 397, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 272, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimStarRodDash_joint26[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 425, 15, -282, -6, 267, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 185, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 363, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 226, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 179, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -141, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -175, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -552, 12,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 203, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 369, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 355, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 507, 6,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 373, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 108, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -536, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -71, 29,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 509, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 324, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 55, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -161, 0,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 326, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 328, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -45, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 0, -161, 0, -34, 10,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimStarRodDash_joint27[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 17, 0, 161, 4, 40, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -100, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 277, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 51, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -19, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 169, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -98, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 39, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 290, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 181, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 193, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 342, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 357, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -411, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 42, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -28, 12,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 163, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 271, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -16, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 226, 26,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -382, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -132, 13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 249, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 265, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 5, 269, -1, -125, 7,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimStarRodDash_joint29[210] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 677, -26,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 668, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 756, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 401, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 362, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 334, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 299, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 581, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 670, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 501, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 462, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 434, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -10,
	ftAnimEnd(),
	0x0000, 0x200E, 0xF5BD, 0xFFFE, 0xFA4B, 0xFFFF, 0x070E, 0x000B, 0x2809, 0x0006, 0x06A3, 0xFF9E, 0x2805, 0x0007, 0xF9D4, 0xFFC5, 0x2003, 0x0005, 0xF5AC, 0x0021, 0x2003, 0x0001, 0xF5E7, 0x0080, 0x200B, 0x0001, 0xF6AD, 0x014F, 0x0625, 0xFEE4, 0x200F, 0x0001, 0xF885, 0x00E6, 0xF973, 0xFFD8, 0x0469, 0xFEFB, 0x2805, 0x0005, 0xF956, 0xFFF1, 0x200B, 0x0001, 0xF879, 0xFFFC, 0x041B, 0xFFDE, 0x2809, 0x0006, 0x0425, 0x0000, 0x2003, 0x0001, 0xF87B, 0x0001, 0x2803, 0x000C, 0xF935, 0x000E, 0x0801, 0x0003, 0x2005, 0x0001, 0xF946, 0xFFEF, 0x2805, 0x0011, 0xF884, 0x001A, 0x0801, 0x0001, 0x2009, 0x0001, 0x0427, 0x0004, 0x2809, 0x000B, 0x04FD, 0x0003, 0x0801, 0x0006, 0x2003, 0x0001, 0xF934, 0xFFFE, 0x2803, 0x0012, 0xF83B, 0xFFED, 0x0801, 0x0004, 0x2009, 0x0001, 0x04FE, 0xFFFE, 0x2809, 0x0005, 0x0459, 0xFFCB, 0x0801, 0x0003, 0x2005, 0x0001, 0xF8B1, 0x002B, 0x2805, 0x0016, 0xFA01, 0x0002, 0x0801, 0x0001, 0x2009, 0x0001, 0x042B, 0xFFDA, 0x2809, 0x000E, 0x0580, 0x001B, 0x0801, 0x0007, 0x2003, 0x0001, 0xF82A, 0xFFF3, 0x2803, 0x000C, 0xF80C, 0x0000, 0x0801, 0x0006, 0x2009, 0x0001, 0x059B, 0x001A, 0x2009, 0x0005, 0x05FE, 0x0007, 0x200F, 0x0001, 0xF80C, 0x0000, 0xFA02, 0x0001, 0x0602, 0x0004, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
