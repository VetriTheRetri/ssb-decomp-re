/* AnimJoint data for relocData file 958 (FTSamusAnimDash) */
/* 2192 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimDash_joint1[32];
extern u16 dFTSamusAnimDash_joint2[58];
extern u16 dFTSamusAnimDash_joint4[54];
extern u16 dFTSamusAnimDash_joint5[100];
extern u16 dFTSamusAnimDash_joint6[54];
extern u16 dFTSamusAnimDash_joint7[44];
extern u16 dFTSamusAnimDash_joint8[38];
extern u16 dFTSamusAnimDash_joint11[10];
extern u16 dFTSamusAnimDash_joint12[120];
extern u16 dFTSamusAnimDash_joint14[48];
extern u16 dFTSamusAnimDash_joint15[90];
extern u16 dFTSamusAnimDash_joint17[56];
extern u16 dFTSamusAnimDash_joint19[84];
extern u16 dFTSamusAnimDash_joint20[92];
extern u16 dFTSamusAnimDash_joint22[48];
extern u16 dFTSamusAnimDash_joint23[122];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimDash_joints[] = {
	(AObjEvent32 *)dFTSamusAnimDash_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimDash_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimDash_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimDash_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimDash_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimDash_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimDash_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimDash_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimDash_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimDash_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimDash_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimDash_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimDash_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimDash_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimDash_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimDash_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimDash_joint1[32] = {
	ftAnimSetVal(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1425, -240,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1503, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 1503, -80,
	ftAnimSetValT(FT_ANIM_TRAZ, 8), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 2), 1558,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 6), 1600,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1600, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimDash_joint2[58] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetValAfterT(FT_ANIM_ROTZ, 13), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 242,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 242, -21, 0, -12,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -143, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 17, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimDash_joint4[54] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 92, 230, -11, 35, -5, 24,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 9), 92, 230, -11, 35,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -5, 24,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -5, 24,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -101, 140, -1, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0, 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimDash_joint5[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2084, 13, -1722, 55, -1839, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2111, 12, -1623, 37, -1848, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2123, -315, -1593, 160, -1854, 405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1479, -350, -1302, 120, -1038, 420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1422, -40, -1352, -37, -1012, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1458, 18, -1346, 32, -1064, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1479, 203, -1301, -127, -1038, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1866, 463, -1601, -153, -1405, -551,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2406, 244, -1607, 0, -2141, -356,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 7), -1725,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2354, -53, -2119, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2299, -57, -2088, 36,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 2084, -1839,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2084, 0, -1722, 2, -1839, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTSamusAnimDash_joint6[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, 26,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -670, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1000, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -997, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -925, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1000, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1259, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -600, 334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -590, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -736,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -2,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimDash_joint7[44] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 701,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), -30,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 9), -30,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), -344,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 701,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 701,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimDash_joint8[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 67, -17, -1474,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 98, 60, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1072, 67, -670, -34, -2680, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 1216, -58, -609, 37, -2954, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 67, -191, -17, 98, -1474, 246,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 67, -17, -1474,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimDash_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 479, 0,
	ftAnimBlock(0, 23),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimDash_joint12[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, -88, -128, 62, -215, 186,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -88, 110, 88, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 147, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 336, -385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 144, 89, 314, 118, -624, -530,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 50, -33, 332, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -724, -86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -723, 87,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 22, -21, 338, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 145, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 340, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 315, -112, -623, 432,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 124, -32, 115, -117, 142, 636,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 31, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 80, -22, 649, 173,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -124, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 488, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 334, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -71, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 58, 11, -215, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 55, 0, -212, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 2, -128, -4, -215, -3,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimDash_joint14[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -229,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1029, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -962, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1113, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1260, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1067, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1076, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -763, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -600, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimDash_joint15[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, -34, -27, -15, -389, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 8, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -86, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -523, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -580, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -936, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -974, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1008, 39,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 14, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 87, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -959, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -72, -19, -737, 321,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -27, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -316, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -366, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -408, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -390, 0,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 2, -27, 0, -389, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTSamusAnimDash_joint17[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 50,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 565, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 587, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 905, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 919, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 883, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 871, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 608, -435,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 148, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 283, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 478, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimDash_joint19[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1532, 7, 1637, -26, -1650, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 1639, -20, 1604, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1451, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1448, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1511, 129,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1616, -53, 1607, -78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1304, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1532, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1683, 26, -1326, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1554, -22, -1494, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1386, 76,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 6), 1631,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1541, -7, -1536, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1649, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 1533,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1532, -1, 1637, 5, -1650, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimDash_joint20[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -57, 160, 7, -49, -94,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 7, 13, 56, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -234, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -318, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 47, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -35, -37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 22, 14, 57, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -29, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 124, 55,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -71, -83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -298, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -51, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 229, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 158, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 160, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -270, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -47, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, -3, 160, 0, -49, -1,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimDash_joint22[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 115,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 650, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 727, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 509, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 468, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 555, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 606, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 817, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 767, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 441, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimDash_joint23[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1750, -36, 1414, 43, 1394, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1728, -61, 1531, 92, 1286, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1590, -65, 1643, 38, 1241, 315,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1614, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1576, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1917, 350,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1942, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1936, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1620, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1603, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1558, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1610, 32,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1917, -157,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1265, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1611, -3, 1612, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1680, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1715, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1637, -70, 1282, 17,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 6), 1413,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1394, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1750, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1751, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1750, 0, 1414, 1, 1394, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
