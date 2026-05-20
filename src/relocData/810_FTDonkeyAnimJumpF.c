/* AnimJoint data for relocData file 810 (FTDonkeyAnimJumpF) */
/* 1584 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimJumpF_joint1[8];
extern u16 dFTDonkeyAnimJumpF_joint2[12];
extern u16 dFTDonkeyAnimJumpF_joint4[14];
extern u16 dFTDonkeyAnimJumpF_joint5[112];
extern u16 dFTDonkeyAnimJumpF_joint6[48];
extern u16 dFTDonkeyAnimJumpF_joint7[18];
extern u16 dFTDonkeyAnimJumpF_joint8[16];
extern u16 dFTDonkeyAnimJumpF_joint10[12];
extern u16 dFTDonkeyAnimJumpF_joint11[104];
extern u16 dFTDonkeyAnimJumpF_joint12[48];
extern u16 dFTDonkeyAnimJumpF_joint13[14];
extern u16 dFTDonkeyAnimJumpF_joint14[10];
extern u16 dFTDonkeyAnimJumpF_joint16[42];
extern u16 dFTDonkeyAnimJumpF_joint17[54];
extern u16 dFTDonkeyAnimJumpF_joint19[24];
extern u16 dFTDonkeyAnimJumpF_joint21[44];
extern u16 dFTDonkeyAnimJumpF_joint22[66];
extern u16 dFTDonkeyAnimJumpF_joint24[24];
extern u16 dFTDonkeyAnimJumpF_joint25[72];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTDonkeyAnimJumpF_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimJumpF_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimJumpF_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimJumpF_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTDonkeyAnimJumpF_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTDonkeyAnimJumpF_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimJumpF_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimJumpF_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimJumpF_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTDonkeyAnimJumpF_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTDonkeyAnimJumpF_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimJumpF_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimJumpF_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimJumpF_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTDonkeyAnimJumpF_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTDonkeyAnimJumpF_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTDonkeyAnimJumpF_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTDonkeyAnimJumpF_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTDonkeyAnimJumpF_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTDonkeyAnimJumpF_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimJumpF_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 30, 949, -319,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimJumpF_joint2[12] = {
	ftAnimSetVal(FT_ANIM_ROTX), -57,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), -28, 131,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 15), -57,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 15), -257,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimJumpF_joint4[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 440,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 73, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 440, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 791,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimJumpF_joint5[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 616, -5, -327, 5, -1842, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 546, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1842, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -155, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -154, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -327, -91,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 616, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1165, 527,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -418, -96, -1814, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -700, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2221, -498,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1876, 496, -2906, -469,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2282, 106, -3237, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -595, 115,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -247, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2371, 86, -3242, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -3017, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2799, 35,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -299, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -379, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3027, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2825, 25, -390, -11, -3038, -11,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimJumpF_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -300, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -57, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -587, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -721, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1161, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1115, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1034, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1013, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimJumpF_joint7[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -558, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -893, -8, 0, -10, 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -825, -308, 165,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimJumpF_joint8[16] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 232, 163, 17,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 232, 163, 17,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 393, 144, 74,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimJumpF_joint10[12] = {
	ftAnimSetVal(FT_ANIM_ROTX), -625,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), -206, 75,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 15), -625,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 15), -452,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimJumpF_joint11[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -674, 2, 193, -4, -1754, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), -682, -22, -1734, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 6, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 2, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 6, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 578, 72,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -718, -59, -1739, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -985, -276, -1943, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1354, -373, 624, -2, -2278, -336,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 271, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1951, -180, -2775, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2093, -129, -2824, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2770, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2579, -39,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 292, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 400, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2797, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2612, -32, 417, 17, -2827, -29,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimJumpF_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -329, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -149, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -4, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -202, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1046, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1122, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1045, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1029, 16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimJumpF_joint13[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 415,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 1072, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 893,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimJumpF_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 44, 163,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimJumpF_joint16[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -418, -117, 122,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1046, 573,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -525, 89, -91,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -418, -117, 122,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -525, 89, -91,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -418, -117, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -525, -56, 89, 56, -91, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -1429, 893, -670,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimJumpF_joint17[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -206, 1, -105, 1, -605, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -206, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -509, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), -72, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -105, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -78, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -219, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -280, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -486, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -318, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -277, 3, -74, 4, -305, 12,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimJumpF_joint19[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 990, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), 859, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 849, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 836, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 834, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimJumpF_joint21[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1678, -3, 1527, 0, 1693, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1527, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), 1651, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 1626, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1678, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1633, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1523, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), 1596, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1619, -14, 1598, 1, 1650, -1,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimJumpF_joint22[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 620, 4, 573, 0, -67, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 573, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 681, -51, -14, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 620, -123, -67, -91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 47, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -544, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 559, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 139, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -22, -61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -192, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -599, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -880, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -192, 0, 139, 0, -875, 5,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimJumpF_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 691, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 864, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 916, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1174, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1176, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimJumpF_joint25[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 641, -1, -1419, -2, -969, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -969, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1365, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 615, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 641, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1320, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1036, -79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1542, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1320, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1428, -3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1378, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1543, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1549, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1484, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1544, 1, -1429, 0, -1480, 4,
	ftAnimEnd(),
	0x0000, 0x0000,
};
