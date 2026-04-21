/* AnimJoint data for relocData file 1176 (FTLinkAnimRollB) */
/* 3968 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimRollB_joint1[44];
extern u16 dFTLinkAnimRollB_joint2[52];
extern u16 dFTLinkAnimRollB_joint3[56];
extern u16 dFTLinkAnimRollB_joint5[86];
extern u16 dFTLinkAnimRollB_joint6[224];
extern u16 dFTLinkAnimRollB_joint7[102];
extern u16 dFTLinkAnimRollB_joint10[50];
extern u16 dFTLinkAnimRollB_joint11[208];
extern u16 dFTLinkAnimRollB_joint12[96];
extern u16 dFTLinkAnimRollB_joint13[50];
extern u16 dFTLinkAnimRollB_joint14[8];
extern u16 dFTLinkAnimRollB_joint17[32];
extern u16 dFTLinkAnimRollB_joint18[50];
extern u16 dFTLinkAnimRollB_joint19[56];
extern u16 dFTLinkAnimRollB_joint21[8];
extern u16 dFTLinkAnimRollB_joint22[174];
extern u16 dFTLinkAnimRollB_joint24[68];
extern u16 dFTLinkAnimRollB_joint26[182];
extern u16 dFTLinkAnimRollB_joint27[180];
extern u16 dFTLinkAnimRollB_joint29[64];
extern u16 dFTLinkAnimRollB_joint30[134];

/* Joint pointer table (30 entries, 120 bytes) */
u32 dFTLinkAnimRollB_joints[] = {
	(u32)dFTLinkAnimRollB_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimRollB_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimRollB_joint3, /* [2] joint 3 */
	(u32)dFTLinkAnimRollB_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTLinkAnimRollB_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimRollB_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimRollB_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTLinkAnimRollB_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimRollB_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimRollB_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimRollB_joint14, /* [13] joint 14 */
	(u32)dFTLinkAnimRollB_joint17, /* [14] joint 17 */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	(u32)dFTLinkAnimRollB_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimRollB_joint19, /* [18] joint 19 */
	(u32)dFTLinkAnimRollB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTLinkAnimRollB_joint22, /* [21] joint 22 */
	(u32)dFTLinkAnimRollB_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTLinkAnimRollB_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTLinkAnimRollB_joint27, /* [26] joint 27 */
	(u32)dFTLinkAnimRollB_joint29, /* [27] joint 29 */
	0x00000000, /* [28] NULL */
	(u32)dFTLinkAnimRollB_joint30, /* [29] joint 30 */
};

/* Joint 1 */
u16 dFTLinkAnimRollB_joint1[44] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 13), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 0, 258, -380, -900,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), 420, 0, -1463, -953,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 0, -168, 0, 0, -3600, -854,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, -3600,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimRollB_joint2[52] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 901, 1, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 667, -511, -66, -52,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 261, -426, -66, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 13,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 187, 488, -48, 21,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 689, 800, -33, 202,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 988, -35, 154, 26,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 619, -43, 19, -77,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 901, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTLinkAnimRollB_joint3[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 25, 276, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 87, -14, 0, -27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -248, -153,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 33), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1290, -225, 0, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -2242, -78, 74, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -1919, -55, 157, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), -3134, -87, 281, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -3324, 276,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimRollB_joint5[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 0, 166, 0, 56, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 479, 20, 0, -16, 0, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 463, 36,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 804, 48, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 804, -102, 0, 7, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -11, -80, 61, 12, 20, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 163, 72, 102, 8, 35, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 567, 31, 127, -20, 43, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 412, -89, -57, -20, 43, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 121, -30, 24, 44, 49, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 259, 166, 56,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimRollB_joint6[224] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 280, 4, -326, -83, -86, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 414, 208, -272, -356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -410, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -602, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 702, -58, -628, 118, -795, -276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 296, -249, -364, 214, -825, -94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -170, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 204, -36, -984, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 557, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -850, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -838, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -758, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 728, 118, -46, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 794, 0, 74, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 794, -25, 74, -98, -758, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -395, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 742, -196, -895, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 400, -288, -897, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1277, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 165, -93, -404, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -151, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 213, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -150, -169,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 90, -1465, -82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 98, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1448, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1447, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1272, 161,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 126, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 218, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -316, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -70, 88,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1106, 149,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -323, 425,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4, 67, 175, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -244, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 105, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -7, -29, 161, 247,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 80, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 199, 74,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -273, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -331, -26, 16, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, 80, -326, 4, -86, -102,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimRollB_joint7[102] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -141,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -811, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -583, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -369, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -497, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -902, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -832, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -832, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -832, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1094, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -846, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -649, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -432, 324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 216,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -337, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -369, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -544, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -900, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -922, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -522, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -521, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimRollB_joint10[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 4, 6, 7, 23, 76, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 68, 7, 238, 25, 557, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 68, 110, 238, -58, 557, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 839, -3, -169, -12, 215, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 4, -39, 7, 8, 76, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 4, 7, 76,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimRollB_joint11[208] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2024, -6, 1484, -9, 1557, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1314, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1846, -182, 1191, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1612, -205, 898, -254,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1297, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 683, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1330, 12, 706, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 761, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1501, -33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1165, -139,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1046, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 691, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1177, -29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1134, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1148, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1439, -114,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1159, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1064, -162,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 743, 126,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1111, 168, 1106, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1486, 624, 927, -13, 1105, 608,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2360, 503, 1080, 202, 1960, 480,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1411, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2492, 78, 2066, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 2384, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2518, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 2527, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1396, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1027, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 875, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2657, 379, 727, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3286, 500, 411, -264, 2544, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 93, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3658, 157, 2425, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3602, -34, 2790, 425,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3589, -8, -155, -142, 3276, 295,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 3640, 7, 23, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3380, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 3235, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3633, -7, 123, 100, 3166, -69,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimRollB_joint12[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -62,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -658, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -454, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -261, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -399, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -917, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -949, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -953, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -903, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -523, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -863, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -658, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -811, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -777, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -474, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -432, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -807, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -966, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -679, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -628, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -638, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 51,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimRollB_joint13[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -5, -209, -4, 0, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -55, -28, -258, -12, 468, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -252, -28, -318, -8, 650, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -252, 14, -318, 6, 650, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 12, -209, 5, 0, -30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -209, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTLinkAnimRollB_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 937, -804, 670,
	ftAnimBlock(0, 38),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimRollB_joint17[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1697, 7, -536, -13, -339, 61,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1775, -667, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 1697, -2, -536, 4, -339, -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1697, -536, -339,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimRollB_joint18[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 5, -17, 11, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 76, 6, 0, 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 76, -13, 0, -8, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -67, -18, -90, -3, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -195, 5, -54, -5, -45, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -163, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTLinkAnimRollB_joint19[56] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 17), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -291, 6, -20, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 96, 32, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 96, -48, 0, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -433, -29, -110, -13, 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -339, 60, -197, -9, 71, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 167, 56, -203, 0, 35, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -199, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimRollB_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 38),
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTLinkAnimRollB_joint22[174] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, 20, -244, -25, 108, -98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -413, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 261, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -314, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -360, -73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -968, -288,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -425, 95,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -156, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 543, 96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 268, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1247, -146,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1035, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -369, -122,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -438, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 248, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 34, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -459, 6, -875, 170,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -209, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -433, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 18, -20, -388, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -60, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 232, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -204, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -234, 23,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -123, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -377, -123,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 380, 53, -199, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -172, -101,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 54, -74,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -498, -105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -507, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -328, -92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -281, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -31, -91, -339, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -202, -57, 3, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -39, -244, 37, 108, 105,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimRollB_joint24[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 119,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1278, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1397, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1282, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1285, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 682, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 470, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 85, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 255, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 310, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 674, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 857, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 633, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 417, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -167,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimRollB_joint26[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, 10, -161, -18, -34, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -452, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -95, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 210, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 95, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 98, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -44, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 180, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -405, 139,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 2, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -303, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 552, 303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 787, 79, 37, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 120, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 711, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 391, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 442, 56, -114, 206,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 339, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 213, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 125, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -494, -107,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 377, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 676, 44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 19, -245,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -663, -59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -588, -81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -656, 192,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -660, 289, 707, -376,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -85, 428, -76, -487,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 197, 143, -323, 232, -267, -107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -104, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -88, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 202, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 303, 88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 376, -35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -142, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, -47, -161, -19, -34, 54,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimRollB_joint27[180] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -19, 269, 12, -125, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -51, 10, 143, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -914, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1012, -75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -852, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -6, 108, 181, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 165, 58, 299, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 111, -28, 198, -85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 166, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -68, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -576, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -680, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -684, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -376, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 96, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 151, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -71, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 230, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -331, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -252, -62,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 117, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 359, 15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 240, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 295, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -321, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -656, -92,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 324, -100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -70, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 337, -44, -791, -93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 275, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -353, 177,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -148, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 228, 74,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 326, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 298, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -198, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 41, 269, -28, -125, 73,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimRollB_joint29[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, 50,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 871, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 926, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 629, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 350, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 572, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 771, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 667, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 461, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 682, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 757, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 789, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 649, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 501, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -76,
	ftAnimEnd(),
	0x0000,
};

/* Joint 30 */
u16 dFTLinkAnimRollB_joint30[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -427, 49, -74, 0, -69, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 110, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -156, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -528, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -531, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -604, 15, 143, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -344, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -500, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -394, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -373, -30, -222, 189,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -582, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 425, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -165, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -124, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -591, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -554, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -127, -182,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -117, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -69, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -537, 20, -283, -122,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -404, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -338, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -235, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -80, 17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -444, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -429, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -427, 1, -74, -4, -69, 10,
	ftAnimEnd(),
	0x0000, 0x0000,
};
