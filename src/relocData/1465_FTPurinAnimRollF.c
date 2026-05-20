/* AnimJoint data for relocData file 1465 (FTPurinAnimRollF) */
/* 3296 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimRollF_joint1[28];
extern u16 dFTPurinAnimRollF_joint2[122];
extern u16 dFTPurinAnimRollF_joint3[46];
extern u16 dFTPurinAnimRollF_joint4[22];
extern u16 dFTPurinAnimRollF_joint6[68];
extern u16 dFTPurinAnimRollF_joint7[174];
extern u16 dFTPurinAnimRollF_joint8[22];
extern u16 dFTPurinAnimRollF_joint10[84];
extern u16 dFTPurinAnimRollF_joint11[178];
extern u16 dFTPurinAnimRollF_joint12[14];
extern u16 dFTPurinAnimRollF_joint14[44];
extern u16 dFTPurinAnimRollF_joint15[140];
extern u16 dFTPurinAnimRollF_joint17[20];
extern u16 dFTPurinAnimRollF_joint19[232];
extern u16 dFTPurinAnimRollF_joint20[172];
extern u16 dFTPurinAnimRollF_joint22[22];
extern u16 dFTPurinAnimRollF_joint23[214];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTPurinAnimRollF_joints[] = {
	(AObjEvent32 *)dFTPurinAnimRollF_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPurinAnimRollF_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPurinAnimRollF_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPurinAnimRollF_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTPurinAnimRollF_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTPurinAnimRollF_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPurinAnimRollF_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTPurinAnimRollF_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTPurinAnimRollF_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPurinAnimRollF_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTPurinAnimRollF_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTPurinAnimRollF_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTPurinAnimRollF_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTPurinAnimRollF_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTPurinAnimRollF_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTPurinAnimRollF_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTPurinAnimRollF_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTPurinAnimRollF_joint1[28] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 960, 1920,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 2100, 772,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 3240, 1920,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), 4200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 4200,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPurinAnimRollF_joint2[122] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 590, 0,
	ftAnimSetValRate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, -2, 4096, 1, 4096, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_SCAZ, 4), -268, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 4), 4096, 1, 4096, 2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -240, -1, 840, -1, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 780, 0,
	ftAnimSetValRateT(FT_ANIM_SCAY, 8), 4096, -2,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 9), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 28), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY, 6), -358, -58, 720, 1098, 840, 4,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 1200, 780,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -767, -66,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_SCAY, 4), 2457, 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 3), 4300, 4300,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAY, 6), 720, -1021, 840, 2, 4095, 827,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 16), -1608,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 4), 4096, -2, 4096, 1,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 5), 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_SCAY), 1,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, 480,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 3), 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4915, 2252, 4915,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 0, 600, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPurinAnimRollF_joint3[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -46, 11, -268, 63,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -312, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, 2, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 12), -1608,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 12), -3216,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -46, -10, -268, -67,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 4), -3216,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPurinAnimRollF_joint4[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 28), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPurinAnimRollF_joint6[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -160, 707, -76, -3416, 99, 718,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAZ, 2), 357, 0, 296, 493,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 17, -791,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAZ, 2), 89, 0, 379, 245,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -190, -508,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 413, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 89, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), -185, -573,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), -273, -496, 360,
	ftAnimSetValRateT(FT_ANIM_TRAX, 4), -180, 118,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -540, 420,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -160, -76, 99,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPurinAnimRollF_joint7[174] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1222, -576, -1241, -285, -1652, -105,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1900, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1798, -308, -1526, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1839, 261, -1663, -107,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 26), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1275, 467, -1741, -9, -1982, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -904, 189, -1682, 30, -1843, 82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1749, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -896, 7, -1818, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1774, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -889, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -900, -10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1717, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1657, 71,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -905, 7, -1803, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -872, -10, -1889, -29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1583, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1568, -86,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -879, -3, -1919, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1896, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -875, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1668, -90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1631, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1789, 88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1767, -37,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -887, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1068, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1477, 146, -1796, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1338, 116, -1765, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1220, -152, -1243, 95, -1655, 109,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPurinAnimRollF_joint8[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPurinAnimRollF_joint10[84] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 151, 637, -96, -807, 120, 506,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 178, 0, 298, 3, -305, -724, 238, 651,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -89, 0, 194, 20, -463, -206, 387, 65,
	ftAnimSetValRateT(FT_ANIM_TRAX, 12), 217, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -89, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), -597, 440,
	ftAnimSetValRateT(FT_ANIM_TRAX, 10), 226, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -504, 370,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 190, -2, 422, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), -540,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 183, -95, -391, 919, 318, -618,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 151, -154, -96, 1443, 120, -744,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimRollF_joint11[178] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -626, -542, 366, 5, -62, -538,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1168, -604, 372, -54, -601, -468,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1835, -108, 258, -56, -1000, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 26), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1385, 383, 259, -76, -601, 380,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1069, 171, 106, -85, -240, 201,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 92, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1041, 23, -198, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1022, 12, -172, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1123, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -351, -45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 82, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -69, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -80, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -298, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1103, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1209, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1366, -122, -404, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1299, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -498, 97,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -276, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 126, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1275, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1012, 61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -380, 126,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -152, 54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 107, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 244, 107,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -949, 110, -134, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -627, 82, -1, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -626, 0, 359, 114, -62, -61,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPurinAnimRollF_joint12[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimRollF_joint14[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -501, -271, -1055, 106, -21, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -804, 0, 0, 0, -1072, 0, 204, 0, -120, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), -804, 0, 0, 0, -1072, 0, 204, 0, -120, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -501, -271, -1055, 106, -21, 16,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPurinAnimRollF_joint15[140] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -36, 0, -308, -185, 259, -21,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 45, 80, 146, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -494, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -622, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -194, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 124, 12, 21, -66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 109, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 69, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 55, -15, -213, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -51, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -250, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 166, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 236, -41,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -55, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 61, 48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -256, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -234, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 188, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -100, 30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 106, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 75, -45,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -200, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -298, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -66, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 173, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 33, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 3, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -36, -40, -308, -9, 259, 86,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPurinAnimRollF_joint17[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 21), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimRollF_joint19[232] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2887, 112, -150, -3, -80, 160,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -81, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3000, 159, 79, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3206, 57, 222, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3115, -31, 70, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3144, 32, 81, 76, 83, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 75, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 3295, -11, 53, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3236, -37, 164, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3219, 19, 236, -65, 377, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3275, -42, 33, -142, 625, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3105, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -48, -165, 505, -250,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -258, -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -297, -220,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -704, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3336, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3502, 121, -438, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3579, 252, -507, -247,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4466, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -775, -21, -933, -434,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -874, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1376, -254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4542, 107, -1442, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4682, -140, -1574, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4262, -168, -1152, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4345, 107, -1173, -287, -1201, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4476, 125, -1450, -198, -1209, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 4702, 90, -1247, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1570, -105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1711, 57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4778, -10, -1238, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1400, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4681, -9, -1546, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1661, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4758, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 4559, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1404, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1649, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1636, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1508, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4496, -63, -1458, 50, -1689, -39,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPurinAnimRollF_joint20[172] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 36, -20, 308, -222, 259, 34,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 176, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -6, 6, -76, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3, -32, 84, 211,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -133, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 346, 159, 80, -78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 130, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 404, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 235, -119,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -102, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 18, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 107, -74, 262, 86,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 258, 70, 71, -86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 20, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -34, 30,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 65, 1, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 308, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 201, -51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 0, -45,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 305, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 28, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 154, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 200, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -47, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 25, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 145, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 207, 14, 173, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 267, 39, 261, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 33, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 41, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 36, -4, 308, 41, 259, -2,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPurinAnimRollF_joint22[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTPurinAnimRollF_joint23[214] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, -262, 150, 76, -80, -28,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -69, 124, 437, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -64, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -34, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 148, 299, 446, -79, 188, 298,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 832, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 278, -27, 561, 278,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 616, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 391, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 768, -98, 494, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 434, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 438, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 545, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 421, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 199, -172, 184, -180,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -177, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 60, -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -364, -31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -303, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -385, 91, 643, 78, -354, 181,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 321, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -120, 287, 702, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 189, 170, 595, -143,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 283, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 221, 19, 276, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 233, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -238, -162,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 115, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 210, -103, 80, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 27, -282, 249, 157,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 504, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -355, -205, -386, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -149, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -382, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -84, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 162, 133, 126, 189,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -35, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 181, 35, 380, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 310, 27, 214, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 18, 150, -63, -80, -45,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
