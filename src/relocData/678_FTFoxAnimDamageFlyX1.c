/* AnimJoint data for relocData file 678 (FTFoxAnimDamageFlyX1) */
/* 2432 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDamageFlyX1_joint1[62];
extern u16 dFTFoxAnimDamageFlyX1_joint2[44];
extern u16 dFTFoxAnimDamageFlyX1_joint4[38];
extern u16 dFTFoxAnimDamageFlyX1_joint5[138];
extern u16 dFTFoxAnimDamageFlyX1_joint6[62];
extern u16 dFTFoxAnimDamageFlyX1_joint7[10];
extern u16 dFTFoxAnimDamageFlyX1_joint8[52];
extern u16 dFTFoxAnimDamageFlyX1_joint10[10];
extern u16 dFTFoxAnimDamageFlyX1_joint11[132];
extern u16 dFTFoxAnimDamageFlyX1_joint12[62];
extern u16 dFTFoxAnimDamageFlyX1_joint13[14];
extern u16 dFTFoxAnimDamageFlyX1_joint15[10];
extern u16 dFTFoxAnimDamageFlyX1_joint16[110];
extern u16 dFTFoxAnimDamageFlyX1_joint18[46];
extern u16 dFTFoxAnimDamageFlyX1_joint20[82];
extern u16 dFTFoxAnimDamageFlyX1_joint21[86];
extern u16 dFTFoxAnimDamageFlyX1_joint23[40];
extern u16 dFTFoxAnimDamageFlyX1_joint24[82];
extern u16 dFTFoxAnimDamageFlyX1_joint25[84];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimDamageFlyX1_joints[] = {
	(u32)dFTFoxAnimDamageFlyX1_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimDamageFlyX1_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimDamageFlyX1_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimDamageFlyX1_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimDamageFlyX1_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimDamageFlyX1_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimDamageFlyX1_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimDamageFlyX1_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimDamageFlyX1_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimDamageFlyX1_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimDamageFlyX1_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimDamageFlyX1_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimDamageFlyX1_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimDamageFlyX1_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimDamageFlyX1_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimDamageFlyX1_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimDamageFlyX1_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimDamageFlyX1_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimDamageFlyX1_joint25, /* [24] joint 25 */
	0xFFFF024E, /* [25] END */
};

/* Joint 1 */
u16 dFTFoxAnimDamageFlyX1_joint1[62] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, 0, 912, 2, -20, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 143, -20, 0, 0, 0, 0, 48, -11, 881, 75, -167, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -163, -23, 0, 0, 0, 0, 37, -10, 988, 48, -14, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), -402, -17, 0, 0, 0, 0, 17, -10, 1020, -146, -2, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -536, 0, 0, 9, 603, 2,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimDamageFlyX1_joint2[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -141, -338,
	ftAnimSetValRate(FT_ANIM_ROTZ), -3, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -125, -20, -337, 73, -2, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -308, -7, 247, 25, -270, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -308, -20, 247, -11, -270, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 0, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -748, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimDamageFlyX1_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 627, -54, 150, -36, 81, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -123, -32, -133, -12, 64, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -123, 32, -133, 21, 64, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 565, 323, 312,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimDamageFlyX1_joint5[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3107, 477, -165, -286, -2958, -1324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3585, 264, -452, -159, -4282, -703,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3635, -5, -485, -79, -4365, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -729, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3573, -347, -4290, 363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2940, -622, -3639, 639,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2328, -368, -635, 104, -3011, 387,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -466, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2203, -86, -2863, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1934, -124, -2518, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1765, -105, -500, -8, -2322, 118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -398, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1642, -26, -2208, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1619, -22, -2188, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1509, -14, -2096, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1496, 39, -2086, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1589, 285, -460, -18, -2210, -296,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -399, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2067, 391, -2678, -247,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2585, 189, -2671, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -544, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2750, 165, -634, -89, -2769, -98,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimDamageFlyX1_joint6[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 551,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -490, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -518, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -306, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -217, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -25, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -153, -306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -612, -296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -678, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -599, 78,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimDamageFlyX1_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimDamageFlyX1_joint8[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -72,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -113, 0, 136, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 89, 264, -71, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 134,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 415, -32, -62, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -137, -31, -28, 6, -11, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), -283, 17, -39, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 16), 252,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 225, -423, 133,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimDamageFlyX1_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimDamageFlyX1_joint11[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1475, -258, 1336, 82, -1271, -1297,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1018, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1733, -112, -2569, -669,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1701, 23, -2610, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1681, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2667, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2693, 80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2410, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1542, 114,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1569, -226,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2418, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2556, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1902, -188, -2916, -203,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2008, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 993, -19, -2962, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 973, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3030, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -3599, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2062, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -2602, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2684, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2917, -347, 1025, 81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1362, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3380, -334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3585, -216, -3616, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3812, -176, -3896, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3938, -126, 1319, -42, -4027, -130,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimDamageFlyX1_joint12[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, 594,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 293,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -256, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -349, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -226, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -365, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -363, 1,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimDamageFlyX1_joint13[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 272, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 29), 44, 44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimDamageFlyX1_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimDamageFlyX1_joint16[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -405, 285, -223, -155, -26, -392,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -372, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -120, 160, -418, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -84, 28, -414, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -300, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 125, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -357, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -94, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -304, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -217, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 203, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 197, -16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -86, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -58, 11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -227, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -411, -38,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 181, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 26, -37,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -54, -3, -443, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -65, -11, -459, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -26, -76, -10, -462, -3,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimDamageFlyX1_joint18[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, -354,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -177,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 120, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 281, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 289, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 279, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 208, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 235, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 659, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 688, 29,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTFoxAnimDamageFlyX1_joint20[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 46, -1, 125, -181, -56, 280,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -63, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -66, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 224, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 235, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 140, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -63, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -91, 3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -51, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 142, 3,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 137, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 101, -3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 144, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 7, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -84, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 5, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 15, 7, 25, 19, 98, -2,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimDamageFlyX1_joint21[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 355, -202, 137, -240, 134, -472,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 152, -107, -103, -112, -337, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 139, -16, -87, 27, -318, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 101, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 181, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -158, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -113, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -172, 26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 122, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 299, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 189, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), 273, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 278, -31, 248, -38, -132, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 171, -52, 136, -44, -8, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 130, -40, 107, -29, 23, 31,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimDamageFlyX1_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, -82,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 256, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 331, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 154, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 139, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 384, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 375, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 327, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 293, -34,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimDamageFlyX1_joint24[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, -182, -102, 172, -226, 188,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 152, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 320, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -154, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -91, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 185, -16,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 148, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 0, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 166, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -146, -27,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 312, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 414, 61,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -181, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -199, 53,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 472, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -150, 48, -8, -8, 498, 25,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimDamageFlyX1_joint25[84] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 219, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 346, -67, 211, -48, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -538, -40, -171, -15, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -575, 19, -136, 9, 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -185, 115, 2, 71, 4, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 219, 0,
	ftAnimEnd(),
	0x4006, 0xFF4E, 0xFF86, 0x48E8, 0x0000, 0x0000, 0x0040, 0xFE3E, 0x2007, 0x0001, 0x0000, 0x002A, 0x0000, 0x0011, 0x2803, 0x0007, 0x00A0, 0xFFFC, 0x3805, 0x0007, 0x000D, 0x2007, 0x0010, 0xFF9F, 0x000D, 0x0000, 0x0000, 0x3807, 0x0005, 0x01BE, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
