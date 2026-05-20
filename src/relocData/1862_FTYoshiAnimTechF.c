/* AnimJoint data for relocData file 1862 (FTYoshiAnimTechF) */
/* 3472 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimTechF_joint1[28];
extern u16 dFTYoshiAnimTechF_joint2[80];
extern u16 dFTYoshiAnimTechF_joint3[18];
extern u16 dFTYoshiAnimTechF_joint4[96];
extern u16 dFTYoshiAnimTechF_joint7[32];
extern u16 dFTYoshiAnimTechF_joint8[110];
extern u16 dFTYoshiAnimTechF_joint9[56];
extern u16 dFTYoshiAnimTechF_joint11[16];
extern u16 dFTYoshiAnimTechF_joint12[112];
extern u16 dFTYoshiAnimTechF_joint13[56];
extern u16 dFTYoshiAnimTechF_joint14[36];
extern u16 dFTYoshiAnimTechF_joint15[10];
extern u16 dFTYoshiAnimTechF_joint16[28];
extern u16 dFTYoshiAnimTechF_joint18[28];
extern u16 dFTYoshiAnimTechF_joint19[158];
extern u16 dFTYoshiAnimTechF_joint21[124];
extern u16 dFTYoshiAnimTechF_joint23[204];
extern u16 dFTYoshiAnimTechF_joint24[164];
extern u16 dFTYoshiAnimTechF_joint26[124];
extern u16 dFTYoshiAnimTechF_joint27[202];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTYoshiAnimTechF_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimTechF_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimTechF_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimTechF_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimTechF_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimTechF_joint7, /* [4] joint 7 */
	NULL, /* [5] NULL */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTYoshiAnimTechF_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTYoshiAnimTechF_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTYoshiAnimTechF_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTYoshiAnimTechF_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimTechF_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimTechF_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimTechF_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimTechF_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTYoshiAnimTechF_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTYoshiAnimTechF_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTYoshiAnimTechF_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTYoshiAnimTechF_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTYoshiAnimTechF_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTYoshiAnimTechF_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTYoshiAnimTechF_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTYoshiAnimTechF_joint1[28] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, -448,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 9), 1229, 4251,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 8), 2762, 5077,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), 4167, 4546,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 4758, 386,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 11), 4800, -492,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimTechF_joint2[80] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY), 721, -41, 850, -1019,
	ftAnimSetValBlock(FT_ANIM_TRAZ), -356,
	ftAnimSetValT(FT_ANIM_TRAZ, 10), -356,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1243, 144,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 806, 680,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 1445, 1196,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 1086, -4223,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 9878, 31,
	ftAnimSetValT(FT_ANIM_TRAZ, 30), 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 685, 211,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 1286, -899,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 353, -585,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 1082, 2487,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1225, -2404,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 636, -171,
	ftAnimSetValRateT(FT_ANIM_TRAY, 12), 672, 70,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 9650, -86,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimTechF_joint3[18] = {
	ftAnimSetVal(FT_ANIM_ROTY), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 30, 20,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 35), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -89, -25,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimTechF_joint4[96] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -183,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 34), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -185, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1147, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 1164, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 703, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 498, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 294, -153,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 242, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 50, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -88, -172,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -168, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -167, -17,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -198, -12,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -191, 25,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -147, 53,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -84, 81,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 16, 93,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimTechF_joint7[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -3, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 5, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 542, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 537, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 286, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 177, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 78, -24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTYoshiAnimTechF_joint8[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1714, -27, -1419, 10, 1162, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1736, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1378, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1114, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1068, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1370, -19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1767, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1674, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1324, -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1021, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1357, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1496, -17,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1671, 3, 1014, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1788, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1263, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1337, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1308, -52,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1510, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1486, 10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1784, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1733, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1718, 14, -1476, 9, 1256, -51,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTYoshiAnimTechF_joint9[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -506, -133,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -596, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -524, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -437, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -562, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -647, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -656, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -805, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -825, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -631, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -676, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -774, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimTechF_joint11[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, -188, -632,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -62, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 30), 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimTechF_joint12[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1512, 33, -1778, -11, 1163, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1481, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1875, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1117, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1075, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1355, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1447, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1544, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1318, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1019, -12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1892, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1730, 25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1007, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1391, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1549, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1413, -9,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1438, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1423, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1708, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1569, 54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1424, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -1674, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1753, -78, -1505, 63, 1389, -34,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimTechF_joint13[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -507, -153,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -669, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -585, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -533, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -697, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -713, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -789, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -730, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -698, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -790, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1025, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimTechF_joint14[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -54, -10, -60, 13, -668, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -86, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -533, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -13, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 36), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), 0, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 0, 16,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimTechF_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimTechF_joint16[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 198, 21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 172, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -147, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -332, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), -272, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -190, 25,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimTechF_joint18[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 158, 23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 193, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -225, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -363, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), -266, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -153, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTYoshiAnimTechF_joint19[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 53, 4, -37, 5, 650, -127,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 70, -22, -2, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -342, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -463, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -381, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 39, 4, -37, 4, -28, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 126, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -426, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -54, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -123, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -89, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 260, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 251, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -32, 10, 373, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -60, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 200, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 277, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 274, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 326, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 93, -21, 427, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 93, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, 21, 412, -152,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 0, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 121, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 571, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 25, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 2, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 305, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 212, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, -103, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1, 3, -152, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, -7, 5, 6, -3, 148,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimTechF_joint21[124] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 313, 64,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 823, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 801, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 618, -400,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 575, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 264, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 532, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 717, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 644, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 671, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 670, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 446, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 673, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 602, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 726, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 672, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 711, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 461, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 510, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 907, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 911, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 439, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 559, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 546, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 313, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 549, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 514, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 413, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, -151,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimTechF_joint23[204] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1578, 6, -50, 10, 389, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), 1576, -12, -9, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 270, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 243, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 124, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 392, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 341, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 40, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 193, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 119, -72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -44, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1567, -32, -29, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1455, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -194, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 37, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1496, -49, -5, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1357, -45, 148, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1405, 54, -140, -3, 120, -134,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -177, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1470, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -119, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -101, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -157, 26, -139, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -153, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -119, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1547, 19, -188, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1426, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -79, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -53, 57, 87, -90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -50, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1478, 54, -260, -149,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1627, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -211, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 25, -40, -105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -414, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -64, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1624, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1611, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -443, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -349, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, 2, -83, -19, -263, 85,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimTechF_joint24[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -43, -4, 29, -4, 651, -131,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -107, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -153, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -344, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -384, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 31, -3, -39, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 44, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -419, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -68, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -130, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -85, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 255, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 255, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -119, -33, 372, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -81, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 214, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 329, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 275, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 334, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 69, 7, 496, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 62, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -83, -20, 410, -181,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -44, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 134, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 565, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 65, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 311, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -32, 22, 206, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 7, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 212, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -103, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -312, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -235, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -7, 0, 2, -154, 80,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimTechF_joint26[124] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 333, 61,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 817, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 786, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 600, -389,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 546, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 289, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 559, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 708, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 662, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 654, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 448, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 666, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 522, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 648, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 746, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 680, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 723, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 357, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 495, 262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 881, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 898, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 425, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 535, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 539, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 313, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 549, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 519, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 450, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -71,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTYoshiAnimTechF_joint27[202] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1618, -7, 26, -8, 379, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), 1618, 10, 4, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 275, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 244, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 159, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 401, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 372, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 31, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 149, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 109, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -42, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1630, 31, 28, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1735, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 178, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 33, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1705, 48, -19, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1831, 40, 118, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1786, -43, 143, 13, 103, -121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 171, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1752, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -123, -109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -138, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 154, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 161, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -111, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1661, -21, -173, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1794, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -63, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 61, -57, 111, -81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 63, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1734, -58, -225, -162,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1590, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 32, -31, -31, -102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -414, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -68, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1593, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1605, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -443, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -303, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1609, 3, -89, -20, -228, 74,
	ftAnimEnd(),
	0x0000, 0x0000,
};
