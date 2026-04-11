/* AnimJoint data for relocData file 723 (FTFoxAnimCliffClimbSlow1) */
/* 2368 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimCliffClimbSlow1_joint1[26];
extern u16 dFTFoxAnimCliffClimbSlow1_joint2[32];
extern u16 dFTFoxAnimCliffClimbSlow1_joint3[52];
extern u16 dFTFoxAnimCliffClimbSlow1_joint5[28];
extern u16 dFTFoxAnimCliffClimbSlow1_joint6[90];
extern u16 dFTFoxAnimCliffClimbSlow1_joint7[32];
extern u16 dFTFoxAnimCliffClimbSlow1_joint8[10];
extern u16 dFTFoxAnimCliffClimbSlow1_joint9[30];
extern u16 dFTFoxAnimCliffClimbSlow1_joint11[10];
extern u16 dFTFoxAnimCliffClimbSlow1_joint12[96];
extern u16 dFTFoxAnimCliffClimbSlow1_joint13[46];
extern u16 dFTFoxAnimCliffClimbSlow1_joint14[62];
extern u16 dFTFoxAnimCliffClimbSlow1_joint16[10];
extern u16 dFTFoxAnimCliffClimbSlow1_joint17[110];
extern u16 dFTFoxAnimCliffClimbSlow1_joint19[40];
extern u16 dFTFoxAnimCliffClimbSlow1_joint21[106];
extern u16 dFTFoxAnimCliffClimbSlow1_joint22[106];
extern u16 dFTFoxAnimCliffClimbSlow1_joint24[46];
extern u16 dFTFoxAnimCliffClimbSlow1_joint25[112];
extern u16 dFTFoxAnimCliffClimbSlow1_joint26[86];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimCliffClimbSlow1_joints[] = {
	(u32)dFTFoxAnimCliffClimbSlow1_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimCliffClimbSlow1_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimCliffClimbSlow1_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimCliffClimbSlow1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimCliffClimbSlow1_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimCliffClimbSlow1_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimCliffClimbSlow1_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimCliffClimbSlow1_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimCliffClimbSlow1_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimCliffClimbSlow1_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimCliffClimbSlow1_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimCliffClimbSlow1_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimCliffClimbSlow1_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimCliffClimbSlow1_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimCliffClimbSlow1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimCliffClimbSlow1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimCliffClimbSlow1_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimCliffClimbSlow1_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimCliffClimbSlow1_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimCliffClimbSlow1_joint26, /* [25] joint 26 */
	0xFFFF0234, /* [26] END */
};

/* Joint 1 */
u16 dFTFoxAnimCliffClimbSlow1_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), -240,
	ftAnimSetValRate(FT_ANIM_TRAY), -1320, 157,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 15), -240,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), -1080, 320,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), -720, 576,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), 0, 319,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 7), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimCliffClimbSlow1_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValRate(FT_ANIM_TRAX), 60, 69,
	ftAnimSetValBlock(FT_ANIM_TRAY), 912,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 7), 120,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 15), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 7), 912,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 8), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 8), 912,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 7), 0, 26, 0, -11,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 7), 552,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTFoxAnimCliffClimbSlow1_joint3[52] = {
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValT(FT_ANIM_TRAX, 47), 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 40,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 47), 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 40,
	ftAnimSetValRate(FT_ANIM_ROTZ), 357, 29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 536,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 4), -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 268, -35,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 4), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 4), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 4), 0,
	ftAnimSetValT(FT_ANIM_TRAX, 15), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 15), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimCliffClimbSlow1_joint5[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), -178, -19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 178, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 357, 35, -178, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 0, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 714,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimCliffClimbSlow1_joint6[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -986, -85, -520, -111, 901, 100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -669, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1071, -421, 1001, 421,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1828, -535, 1744, 530,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2175, 120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2348, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -501, 166,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 57, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2304, 110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2445, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2486, -113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2579, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 69, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -19, 4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2594, -11, 2456, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -2474, -13, 2389, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2501, -27, -8, 11, 2406, 16,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimCliffClimbSlow1_joint7[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1263, 80,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -963, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -675, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -7, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimCliffClimbSlow1_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 22),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimCliffClimbSlow1_joint9[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 111,
	ftAnimSetValRate(FT_ANIM_ROTX), -178, 23,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 7), -178,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 8), -178,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 7), -178,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimCliffClimbSlow1_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 22),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimCliffClimbSlow1_joint12[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -984, -21, 312, 23, -1504, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1552, -210, 503, 0, -2363, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1795, -217, 474, -71, -2597, -163,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2799, -423,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 296, 102, -2392, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 457, 154, -2281, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 470, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2449, -307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3305, -403, -2896, -382,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -3801, -75, -3479, -144,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 314, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3855, -35, 25, -152, -3626, -90,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -3892, 4, -3700, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 9, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -2, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3878, 13, 7, 10, -3674, 26,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimCliffClimbSlow1_joint13[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -809, -40,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1422, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1471, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -899, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -772, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -504, 382,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTFoxAnimCliffClimbSlow1_joint14[62] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -89, -3, 0, 0, 536, 12,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -44, -11, 0, 0, 536, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -178, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 446,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 178, 71, 0, -11, 536, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 357, 23, -89, 11, 89, -95,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 89, 29, -178, -35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 357, -35, 134, -11, -178, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTFoxAnimCliffClimbSlow1_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 22),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimCliffClimbSlow1_joint17[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, -89, -266, 10, 25, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -101, -104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -480, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -250, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -427, -117,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -377, 246,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -259, -279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 293, -576, -39, -659, -292,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 225, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -367, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -843, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -803, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 257, 35, -759, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -544, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 155, -111,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -364, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -557, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -518, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -82, 90,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 31, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -66, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -37, 28, -569, -12, -42, 40,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimCliffClimbSlow1_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 248, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 908, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 867, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 650, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 585, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 278, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, 14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimCliffClimbSlow1_joint21[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1577, 103, -1514, 29, 2005, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1762, -164, 1499, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1680, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1891, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1936, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1945, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1551, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1978, -140, 1447, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1945, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1352, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1551, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1309, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1867, 82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1673, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1337, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1386, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1284, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1208, -25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1681, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1659, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1186, -21, -1599, 60, 1354, -32,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimCliffClimbSlow1_joint22[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1475, -35, -1405, -65, 1630, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1499, 25, -2249, -18, 1700, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1489, -51, -2242, 12, 1670, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -2028, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1670, 39, 1324, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1606, 76, 1346, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1268, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1489, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1922, 22, 1641, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -2042, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1118, 250, 1558, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -766, 173, 1667, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1721, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -771, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -796, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2045, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -2045, 121,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -817, -313, 1755, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1423, -605, -1801, 244, 1408, -346,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimCliffClimbSlow1_joint24[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 328, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 326, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 268, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 287, 236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1020, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1086, 65,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimCliffClimbSlow1_joint25[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1799, -2, 1600, -28, -1159, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1382, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1507, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1757, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1622, 93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1841, -67,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1391, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1572, 75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1541, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1788, 106,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1908, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2143, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1436, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1592, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1906, 9, -1709, -126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1788, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2059, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2091, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2216, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1876, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2107, 34, 1968, -188, -2262, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2147, -39, 1500, -467, -2370, -107,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimCliffClimbSlow1_joint26[86] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -761, 2, 78, 1, -549, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -705, 7, 0, -2, 0, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -599, 70, 28, 21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 23,
	ftAnimEnd(),
	0x0000, 0x400A, 0x0032, 0xFF4E, 0x2804, 0x011A, 0x002D, 0x48E0, 0x0000, 0x0040, 0xFE3E, 0x200F, 0x0003, 0x0027, 0xFFFE, 0x016B, 0xFFC9, 0xFF47, 0xFFFB, 0x200F, 0x0005, 0x001F, 0x0000, 0xFF5E, 0xFFA9, 0xFF23, 0xFFFA, 0x200F, 0x0004, 0x002C, 0x0000, 0xFE59, 0x0016, 0xFF0C, 0x0001, 0x200F, 0x0008, 0x001E, 0xFFFB, 0x006C, 0x0034, 0xFF34, 0x0007, 0x200F, 0x0002, 0xFFFA, 0xFFEC, 0x0069, 0xFFE9, 0xFF5A, 0x0014, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
