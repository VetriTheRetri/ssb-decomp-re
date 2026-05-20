/* AnimJoint data for relocData file 1828 (FTYoshiAnimFall) */
/* 1408 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimFall_joint1[8];
extern u16 dFTYoshiAnimFall_joint2[48];
extern u16 dFTYoshiAnimFall_joint3[48];
extern u16 dFTYoshiAnimFall_joint4[22];
extern u16 dFTYoshiAnimFall_joint6[8];
extern u16 dFTYoshiAnimFall_joint7[56];
extern u16 dFTYoshiAnimFall_joint10[32];
extern u16 dFTYoshiAnimFall_joint11[58];
extern u16 dFTYoshiAnimFall_joint12[28];
extern u16 dFTYoshiAnimFall_joint13[20];
extern u16 dFTYoshiAnimFall_joint14[12];
extern u16 dFTYoshiAnimFall_joint15[16];
extern u16 dFTYoshiAnimFall_joint17[24];
extern u16 dFTYoshiAnimFall_joint18[50];
extern u16 dFTYoshiAnimFall_joint20[24];
extern u16 dFTYoshiAnimFall_joint22[58];
extern u16 dFTYoshiAnimFall_joint23[48];
extern u16 dFTYoshiAnimFall_joint25[24];
extern u16 dFTYoshiAnimFall_joint26[68];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTYoshiAnimFall_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimFall_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimFall_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimFall_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimFall_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimFall_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTYoshiAnimFall_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTYoshiAnimFall_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTYoshiAnimFall_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTYoshiAnimFall_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimFall_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimFall_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimFall_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimFall_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTYoshiAnimFall_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTYoshiAnimFall_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTYoshiAnimFall_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTYoshiAnimFall_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTYoshiAnimFall_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTYoshiAnimFall_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimFall_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimLoop(0x6800, -14),
};

/* Joint 2 */
u16 dFTYoshiAnimFall_joint2[48] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -80, 0, -80, 63, -31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), -30, -80,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), -30, 39,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 0, 80, 63, 59,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), -60,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), -30, 79,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 30, 84,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 0, -80, 63, -27,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 0,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimFall_joint3[48] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -44, -4, 0, 159, 0, -6, 172, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -89, 60, -4, 174,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, -159, 0, 6, 172, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, -60, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -44, -22, 0, 160, 0, -6, 172, 2,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimFall_joint4[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 446, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 473,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 446, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 384,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 446, 22,
	ftAnimLoop(0x6800, -42),
};

/* Joint 6 */
u16 dFTYoshiAnimFall_joint6[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 255, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimLoop(0x6800, -14),
};

/* Joint 7 */
u16 dFTYoshiAnimFall_joint7[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 66, -10, -387, 53, 2316, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 66, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -334, -54, 2321, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -387, -45, 2316, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2084, 108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -426, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 140, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 261, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 140, -97, 2226, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 66, -73, -387, 38, 2316, 89,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimFall_joint10[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -729, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -670, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -718, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -545, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -472, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -663, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -729, -65,
	ftAnimLoop(0x6800, -62),
};

/* Joint 11 */
u16 dFTYoshiAnimFall_joint11[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1541, -5, 1220, 3, 707, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1536, 19,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 9), 1277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 648, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 699, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 531, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1541, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1425, 48,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1258, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1492, 58, 1231, -19, 634, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1541, 49, 1220, -10, 707, 73,
	ftAnimLoop(0x6800, -114),
};

/* Joint 12 */
u16 dFTYoshiAnimFall_joint12[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -729, 62,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -562, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -666, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -655, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -714, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -729, -14,
	ftAnimLoop(0x6800, -54),
};

/* Joint 13 */
u16 dFTYoshiAnimFall_joint13[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -27, 0, -74,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 0, 27, 0, 74,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimFall_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, -714, 0, 0, 156, 0,
	ftAnimBlock(0, 12),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimFall_joint15[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 428, -30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 428, 25,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimFall_joint17[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -278, 60,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 143, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 107, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -280, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -278, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 18 */
u16 dFTYoshiAnimFall_joint18[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 327, -3, -131, -12, -233, -69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -208, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -505, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -3, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 63, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 300, 56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -139, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -108, 3, -339, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 327, 27, -131, -22, -233, 105,
	ftAnimLoop(0x6800, -96),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimFall_joint20[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 340, 15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 491, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 571, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 443, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 340, -102,
	ftAnimLoop(0x6800, -46),
};

/* Joint 22 */
u16 dFTYoshiAnimFall_joint22[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1140, 48, -627, 50, 163, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -31, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1416, 11, 19, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1414, -1, 182, 115,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -381, -205,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1261, -120,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -67, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 30, 125,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -566, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1140, -120, -627, -61, 163, 132,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimFall_joint23[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1936, 22, 1476, 20, -1842, -104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1304, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1563, -34, -2322, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1627, -78, -2324, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1928, -32, -1914, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1332, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1468, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1936, -8, 1476, 8, -1842, 72,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimFall_joint25[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 340, 75,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 438, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 474, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 386, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 340, -45,
	ftAnimLoop(0x6800, -46),
};

/* Joint 26 */
u16 dFTYoshiAnimFall_joint26[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2078, -110, 627, -59, 163, -99,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1745, 10, -51, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 374, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 131, -223,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -169, 128,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1775, 29, -34, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -5, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2017, 80,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 4, 191,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 576, 104,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 97, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2078, 60, 627, 51, 163, 65,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};
