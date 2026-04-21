/* AnimJoint data for relocData file 732 (FTFoxAnimCliffEscapeSlow2) */
/* 3008 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimCliffEscapeSlow2_joint1[22];
extern u16 dFTFoxAnimCliffEscapeSlow2_joint2[30];
extern u16 dFTFoxAnimCliffEscapeSlow2_joint3[36];
extern u16 dFTFoxAnimCliffEscapeSlow2_joint5[36];
extern u16 dFTFoxAnimCliffEscapeSlow2_joint6[148];
extern u16 dFTFoxAnimCliffEscapeSlow2_joint7[80];
extern u16 dFTFoxAnimCliffEscapeSlow2_joint8[10];
extern u16 dFTFoxAnimCliffEscapeSlow2_joint9[38];
extern u16 dFTFoxAnimCliffEscapeSlow2_joint11[10];
extern u16 dFTFoxAnimCliffEscapeSlow2_joint12[162];
extern u16 dFTFoxAnimCliffEscapeSlow2_joint13[64];
extern u16 dFTFoxAnimCliffEscapeSlow2_joint14[34];
extern u16 dFTFoxAnimCliffEscapeSlow2_joint16[10];
extern u16 dFTFoxAnimCliffEscapeSlow2_joint17[150];
extern u16 dFTFoxAnimCliffEscapeSlow2_joint19[62];
extern u16 dFTFoxAnimCliffEscapeSlow2_joint21[156];
extern u16 dFTFoxAnimCliffEscapeSlow2_joint22[110];
extern u16 dFTFoxAnimCliffEscapeSlow2_joint24[64];
extern u16 dFTFoxAnimCliffEscapeSlow2_joint25[110];
extern u16 dFTFoxAnimCliffEscapeSlow2_joint26[48];
extern u16 dFTFoxAnimCliffEscapeSlow2_joint27[70];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimCliffEscapeSlow2_joints[] = {
	(u32)dFTFoxAnimCliffEscapeSlow2_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimCliffEscapeSlow2_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimCliffEscapeSlow2_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimCliffEscapeSlow2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimCliffEscapeSlow2_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimCliffEscapeSlow2_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimCliffEscapeSlow2_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimCliffEscapeSlow2_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimCliffEscapeSlow2_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimCliffEscapeSlow2_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimCliffEscapeSlow2_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimCliffEscapeSlow2_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimCliffEscapeSlow2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimCliffEscapeSlow2_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimCliffEscapeSlow2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimCliffEscapeSlow2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimCliffEscapeSlow2_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimCliffEscapeSlow2_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimCliffEscapeSlow2_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimCliffEscapeSlow2_joint26, /* [25] joint 26 */
	(u32)dFTFoxAnimCliffEscapeSlow2_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimCliffEscapeSlow2_joint1[22] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 671,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 1019, 1727,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 2160, 1490,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), 3360, 576,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 3600,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimCliffEscapeSlow2_joint2[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 552, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 960,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 912, -217,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), 0, 19, 0, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 552,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 48, 912, -20,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTFoxAnimCliffEscapeSlow2_joint3[36] = {
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValT(FT_ANIM_TRAX, 40), 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 10,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 2412, 160,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 3216, 33, 0, -18, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 3075, -338, -3,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimCliffEscapeSlow2_joint5[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 9,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 714, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 178, -29, 8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 268, 35, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 536, 2, 0, 10, 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 309, 156, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimCliffEscapeSlow2_joint6[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2501, -124, -8, 1, 2406, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -2605, 153, -48, -27, 2224, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2375, 521, -81, -251, 1998, -474,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1562, 402, -550, -578, 1274, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1569, -97, -1238, -347, 1669, 352,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1808, 21, 2255, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1246, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1371, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1394, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1714, 31, 2214, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1712, 94, 2478, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1557, 128, 2314, -194,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1601, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1470, -43, 2089, -146,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1254, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2020, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1630, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1769, -114, 1695, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1732, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1775, 41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1259, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1436, -11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1722, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1718, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1819, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1853, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1718, 0, -1442, -6, 1867, 13,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimCliffEscapeSlow2_joint7[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -482,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -971, -428,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -865, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -999, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -938, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -720, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -776, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -724, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -365, 358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -126, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -476, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -658, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -639, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -552, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimCliffEscapeSlow2_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimCliffEscapeSlow2_joint9[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTZ), -178,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 0, 7, 0, 2,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 134, -11, 37, 13,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 3), -21,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -113, 136,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 7), -72,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimCliffEscapeSlow2_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimCliffEscapeSlow2_joint12[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2270, 26, 1600, -13, -2065, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1517, -31, -2532, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -2205, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2262, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2511, 9, 1479, -603, -2808, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2242, -332, 311, -509, -2472, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3177, -264, 460, 100, -2934, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2771, 321, 511, -189, -2563, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2534, 63, 81, -251, -2267, 190,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2161, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 127, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2644, -118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3169, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2272, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 183, 4, -2630, -215,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 202, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2703, -75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3084, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3176, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2727, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 275, 73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 191, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3162, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2940, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2884, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2868, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2757, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3065, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 217, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 270, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3084, -18, 271, 1, -2880, -11,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimCliffEscapeSlow2_joint13[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -633,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1274, -453,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -913, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1141, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -939, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -521, 380,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -123, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -351, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -612, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTFoxAnimCliffEscapeSlow2_joint14[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 731, 31, 260, 27, -79, -4,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1007, -23, 424, -13, -84, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 268, -40, 0, -16, 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTFoxAnimCliffEscapeSlow2_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimCliffEscapeSlow2_joint17[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1571, -291, -1039, -85, 1565, 304,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1364, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1279, -155, 1870, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1260, -42, 1772, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 982, -232, 1315, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 728, 249, 1028, -136,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1116, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1481, 147, -1480, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1023, 29, -1428, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1539, 250, -1582, -78, 972, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1264, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1534, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1524, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1526, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1153, -95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 838, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1530, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1306, 49,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 860, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1303, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1523, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1228, -17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1262, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1371, -22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1407, 95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1557, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1214, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1206, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1202, -3, -1385, -13, 1581, 24,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimCliffEscapeSlow2_joint19[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 292, -292,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -143,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 415, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 546, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 903, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 894, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 927, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1045, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 690, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 588, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 393, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -39,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimCliffEscapeSlow2_joint21[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2030, 83, 1617, 17, -1862, 118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1574, -124,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1265, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1947, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1713, 187,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1342, 292,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1393, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -985, -119, 1310, 76, -1007, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1582, -10, 1547, 144, -1052, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1006, 33, 1599, 73, -1343, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1514, -251, 1694, 31, -1257, -187,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1621, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1509, 2, -1717, -195,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1431, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1649, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1646, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1674, -141,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1593, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1341, -11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1438, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1489, 36,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1851, -156,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1771, 13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1456, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1561, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1343, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1472, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1774, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1682, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1561, 0, 1482, 9, -1664, 17,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimCliffEscapeSlow2_joint22[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 185, 9, 192, -21, -199, 86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -13, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 53, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -86, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -28, -101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -576, -124,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -16, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 102, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -468, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -642, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -15, 121,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 127, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 238, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -142, -117,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 68, 53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 114, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 148, -16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 273, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 309, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 332, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 348, 11, 115, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 6, 137, -10, 134, 19,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimCliffEscapeSlow2_joint24[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1086, -142,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 615, -469,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 162, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 543, 420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1003, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 755, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 845, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 886, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 906, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 805, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 373, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimCliffEscapeSlow2_joint25[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1069, 65, -1716, -26, 846, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1545, 150, -1963, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1013, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1365, 282,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1836, 261,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1676, -6, -1951, 162,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1458, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1638, 106, 2102, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1737, -27, 2243, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1639, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1468, 3, 1993, -388,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1529, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1466, -292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1698, -66, 1407, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -1880, 17, 997, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1864, 13, 941, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -1516, 19, 1358, 38,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1573, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1628, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1624, -3, -1505, 10, 1381, 23,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimCliffEscapeSlow2_joint26[48] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -848, -33, -39, 6, 133, -37,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1000, -16, 0, 4, 0, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1000, 118,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 299, 193,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 21), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 739, -21, 0, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 0, 219,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTFoxAnimCliffEscapeSlow2_joint27[70] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 49, -7, -273, -43, -230, 5,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -82, -53, -481, 54, -73, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -216, -81, 0, 80, 0, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -569, -62, 0, 5, 0, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -713, 85,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 41, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 454, 125, 0, -7, 0, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 664, -70, -44, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -178, -122, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
