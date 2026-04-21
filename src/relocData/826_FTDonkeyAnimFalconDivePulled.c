/* AnimJoint data for relocData file 826 (FTDonkeyAnimFalconDivePulled) */
/* 2448 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimFalconDivePulled_joint1[50];
extern u16 dFTDonkeyAnimFalconDivePulled_joint2[38];
extern u16 dFTDonkeyAnimFalconDivePulled_joint4[72];
extern u16 dFTDonkeyAnimFalconDivePulled_joint5[128];
extern u16 dFTDonkeyAnimFalconDivePulled_joint6[48];
extern u16 dFTDonkeyAnimFalconDivePulled_joint7[30];
extern u16 dFTDonkeyAnimFalconDivePulled_joint10[82];
extern u16 dFTDonkeyAnimFalconDivePulled_joint11[78];
extern u16 dFTDonkeyAnimFalconDivePulled_joint12[40];
extern u16 dFTDonkeyAnimFalconDivePulled_joint13[26];
extern u16 dFTDonkeyAnimFalconDivePulled_joint14[8];
extern u16 dFTDonkeyAnimFalconDivePulled_joint16[44];
extern u16 dFTDonkeyAnimFalconDivePulled_joint17[128];
extern u16 dFTDonkeyAnimFalconDivePulled_joint19[48];
extern u16 dFTDonkeyAnimFalconDivePulled_joint21[114];
extern u16 dFTDonkeyAnimFalconDivePulled_joint22[94];
extern u16 dFTDonkeyAnimFalconDivePulled_joint24[48];
extern u16 dFTDonkeyAnimFalconDivePulled_joint25[98];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimFalconDivePulled_joints[] = {
	(u32)dFTDonkeyAnimFalconDivePulled_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimFalconDivePulled_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimFalconDivePulled_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimFalconDivePulled_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimFalconDivePulled_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimFalconDivePulled_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimFalconDivePulled_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimFalconDivePulled_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimFalconDivePulled_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimFalconDivePulled_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimFalconDivePulled_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimFalconDivePulled_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimFalconDivePulled_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimFalconDivePulled_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimFalconDivePulled_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimFalconDivePulled_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimFalconDivePulled_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimFalconDivePulled_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimFalconDivePulled_joint1[50] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX), -29,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -95, 1031, -1445, -400, -624,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -184, -16, -449, -168, 544, -194, -567, -66,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 8, 3, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), -184, 0, -449, -8, 544, -3, -567, -2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 124, 144, 49,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, -29, 1031, -400,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimFalconDivePulled_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -41, -16,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -214, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -302, -1, 237, 13, -194, -9,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -302, 0, 237, 0, -194, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, -9, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -265, -41, -16,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimFalconDivePulled_joint4[72] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 24, -21, 41, 8,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 750, 0, 319, -157,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -106, -42, 231, -35, -42, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 604, -21, -39, 97, 636, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 687, 10, 315, 22, 632, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 794, 17, 392, 4, 787, 0, -106, 31, 231, 26, -42, -34,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 319, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1048, -4, 404, -36, 639, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 750, -11, 24, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimFalconDivePulled_joint5[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1671, 137, -1523, 11, 1134, 124,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1430, -4, 1176, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1533, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1141, 296,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -941, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1521, -45, 1017, -79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1015, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1534, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -940, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -940, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1012, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1004, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1536, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -1527, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -941, -34, -1521, 49, 1017, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1151, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1144, -219, 1276, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1448, -279, 1576, 236,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1796, 24, 1564, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1204, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1455, -77,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1754, 21, 1417, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1693, 40, 1287, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1671, 22, -1523, -68, 1134, -152,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimFalconDivePulled_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -214,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -813, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -802, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -795, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -802, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1034, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -927, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -487, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -289, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -510, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 102,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimFalconDivePulled_joint7[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1493, -74, -237, -11, 666, 33,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -1493, 22, -237, 8, 666, -24,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimFalconDivePulled_joint10[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -139, -67, -66, -44, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 696, 2057, -422, -74, -155, -1967,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 6346, 297, -291, 6, -5946, -304,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 6346, 0, -291, 0, -5946, -2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -162, -8, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3252, -3020, -450, 48, -2778, 3073,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 306, -1526, -194, 172, 199, 1457,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, -69, -105, -45, 136, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 96, -3, -330, 5, 310, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 174, -10, -67, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimFalconDivePulled_joint11[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1492, 992, 1436, 122, 1129, 702,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1729, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2485, 456, 1831, 346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2406, -159, 1821, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1889, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2166, -118, 1699, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1225, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2168, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 2270, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1879, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 1752, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2244, -60, 1214, 3, 1734, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1557, -113, 1384, 61, 1247, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1492, -64, 1436, 51, 1129, -117,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimFalconDivePulled_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -847,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1264, -386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1190, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -966, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -950, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -823, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -834, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -550, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 133,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimFalconDivePulled_joint13[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 424, 309, 97, -51, 162, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1026, -11, -154, -3, 62, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), 98, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimFalconDivePulled_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimFalconDivePulled_joint16[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -404, 30,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 291, 13, -631, -12, -891, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -141, -34, -257, 38, -531, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -391, -23, 143, 125, 36, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -260, -1, 367, -20, 375, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -404, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimFalconDivePulled_joint17[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -60, 480, -392, 24, 2887, -497,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -313, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 419, 283, 2389, -535,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 506, -103, 1816, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 211, -146, -399, -43, 2015, 99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -400, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 213, 1, 2014, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 2014, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 211, -8,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -400, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -399, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -399, -57, 2015, -79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -509, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1798, 313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 196, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 607, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -387, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -198, 81, 2328, 338,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2551, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 545, -95, -224, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -20, -76, -396, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2655, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2857, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, -39, -392, 3, 2887, 29,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimFalconDivePulled_joint19[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1026, 215,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1241, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 953, -346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 548, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 550, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 550, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 548, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1089, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1088, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1038, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, -11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimFalconDivePulled_joint21[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, -5, 14, -37, -369, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -118, 294, -23, 178, -349, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 475, 326, 372, 46, 94, 537,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 534, 29, 70, -150, 724, 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 535, 0, 70, 0, 724, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 70, 6, 724, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 534, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 534, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 705, 58, 84, 29, 689, -79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 167, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 29, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 651, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 370, -501,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -351, -367, 47, -113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 30, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -365, 28, -97, -126,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -349, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -294, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -133, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, 19, 14, -16, -369, -19,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimFalconDivePulled_joint22[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 104, 107, 217, 28, -295, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 332, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 211, 177, -296, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 459, 106, -576, -137,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 411, -12, -577, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 219, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 202, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 400, -9, -582, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -568, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 457, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 201, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 296, 25,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -544, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -306, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 448, -26, 317, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 120, -31, 226, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 104, -16, 217, -9, -295, 10,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimFalconDivePulled_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 994, 230,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1225, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1041, -304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 616, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 617, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 618, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 616, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1090, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1078, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1009, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, -14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimFalconDivePulled_joint25[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, -165, 103, 2, -387, -102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 37, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -157, -264, -489, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -521, -185, -378, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -526, 1, -201, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -525, 0, -183, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), -587, 6, -222, -42,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 46, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 152, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -574, 26, -284, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 3, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -528, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -480, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -394, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 131, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 113, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 4, 103, -9, -387, 7,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
