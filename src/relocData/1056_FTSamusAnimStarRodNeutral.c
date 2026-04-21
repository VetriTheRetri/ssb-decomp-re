/* AnimJoint data for relocData file 1056 (FTSamusAnimStarRodNeutral) */
/* 2352 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimStarRodNeutral_joint1[56];
extern u16 dFTSamusAnimStarRodNeutral_joint2[30];
extern u16 dFTSamusAnimStarRodNeutral_joint4[62];
extern u16 dFTSamusAnimStarRodNeutral_joint5[154];
extern u16 dFTSamusAnimStarRodNeutral_joint6[72];
extern u16 dFTSamusAnimStarRodNeutral_joint7[38];
extern u16 dFTSamusAnimStarRodNeutral_joint8[10];
extern u16 dFTSamusAnimStarRodNeutral_joint11[32];
extern u16 dFTSamusAnimStarRodNeutral_joint12[108];
extern u16 dFTSamusAnimStarRodNeutral_joint14[52];
extern u16 dFTSamusAnimStarRodNeutral_joint15[94];
extern u16 dFTSamusAnimStarRodNeutral_joint17[56];
extern u16 dFTSamusAnimStarRodNeutral_joint19[102];
extern u16 dFTSamusAnimStarRodNeutral_joint20[110];
extern u16 dFTSamusAnimStarRodNeutral_joint22[48];
extern u16 dFTSamusAnimStarRodNeutral_joint23[106];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimStarRodNeutral_joints[] = {
	(u32)dFTSamusAnimStarRodNeutral_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimStarRodNeutral_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimStarRodNeutral_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimStarRodNeutral_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimStarRodNeutral_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimStarRodNeutral_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimStarRodNeutral_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimStarRodNeutral_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimStarRodNeutral_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimStarRodNeutral_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimStarRodNeutral_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimStarRodNeutral_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimStarRodNeutral_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimStarRodNeutral_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimStarRodNeutral_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimStarRodNeutral_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimStarRodNeutral_joint1[56] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1680, -257, -116, 305,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 4), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1375, 0, 267, -5,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 3), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 1375, 26, 267, 29,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 5), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1408, 107, 86, -299,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 4), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 8), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 1600, 13,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 8), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimStarRodNeutral_joint2[30] = {
	ftAnimSetVal(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -158, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 35, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 245, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 245, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimStarRodNeutral_joint4[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 181, 130,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 260, 32, -19, -7, 11,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -75, -111, -25, 1, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 913, 4, -526, -9, -781, -7, -22, -1, 0, 6, 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 913, -11, -526, 7, -781, 7, -22, 10, 0, 0, 6, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimStarRodNeutral_joint5[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 669, -118, 97, -45, -313, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -598, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 550, -95, 52, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 478, -206, -74, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 137, -354, -60, -20, -957, -522,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -229, -61, -115, 70, -1643, -413,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 15, 221, 79, -22, -1785, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 213, 509, -159, -605, -1312, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1034, 409, -1132, -486, -1764, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1032, -2, -1132, 0, -1762, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1027, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1152, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1760, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1764, -24,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1034, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1080, 110, -1805, -105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2142, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1256, 182, -1170, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1599, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1445, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1564, 188, -2093, 110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2081, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1922, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, -32, -1872, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2229, 97, -1664, -48, -1907, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2277, 48, -1706, -41, -1922, -14,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimStarRodNeutral_joint6[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -691, -71,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -863, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1075, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -893, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -860, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -605, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -598, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -593, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -602, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -605, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -951, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1075, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1192, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1017, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -801, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -691, 109,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimStarRodNeutral_joint7[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 391, -19, -316, -71, 87, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 562, -1, -502, -5, 124, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 562, 2, -502, 6, 124, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 701, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimStarRodNeutral_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -69, -1473, -1453, 98, 60, -42,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimStarRodNeutral_joint11[32] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 479, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 38, 450, 75,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2, 28, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 38, -2, 450, -26, 75, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimStarRodNeutral_joint12[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, -23, -128, 66, -215, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 77, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 34, -12, -61, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 32, 101, 185, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 238, 173, 356, 92, 396, 242,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 530, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 379, 79, 370, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 364, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 350, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 351, 3, 531, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 352, -35, 526, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 302, -71, 362, -8, 470, -83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -43, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 17, -48, 181, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1, 0, 52, -116,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 44, 20, -110, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -126, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -189, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 13, -128, -18, -215, -26,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimStarRodNeutral_joint14[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -148,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -743, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -946, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -959, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -837, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -879, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -878, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -925, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -970, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -738, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -638, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 43,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimStarRodNeutral_joint15[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1521, 44, 1635, -9, -1998, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1396, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1649, 7, -1877, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1646, -36, -1878, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1519, -40, -2074, -58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1418, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1395, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1494, -15, -2101, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2114, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1478, 1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1402, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1497, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2127, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2006, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1482, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1630, 9,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1514, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1521, -6, 1635, 5, -1998, 7,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimStarRodNeutral_joint17[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, -36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 347, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 248, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 279, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 506, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 721, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 807, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 808, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 809, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 553, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 517, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 490, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimStarRodNeutral_joint19[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1684, -18, -1579, 83, 1566, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1337, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1749, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1607, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1654, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1333, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1275, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1585, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1770, -11, -1657, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1644, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1765, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1336, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1424, 34,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1643, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1572, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1455, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1562, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1756, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1688, 7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1577, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1684, 4, -1579, -2, 1566, 3,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimStarRodNeutral_joint20[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1834, -7, 1447, -6, 1558, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1517, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1482, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1860, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1909, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1897, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1790, -16, 1518, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1930, 32, 1699, 34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1537, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1535, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1930, 0, 1698, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1653, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1866, -15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1537, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1433, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1610, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1553, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1853, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1834, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1431, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1445, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1834, 0, 1447, 2, 1558, 4,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimStarRodNeutral_joint22[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, -14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 343, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 356, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 497, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 573, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 568, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 570, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 605, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 638, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 456, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimStarRodNeutral_joint23[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 142, -13, 193, -33, -213, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 64, -18, 10, -57, -123, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 61, 46, -21, 86, -125, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 252, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -340, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 183, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 301, 77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 338, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 282, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 248, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -338, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -273, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 339, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 206, -11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 233, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 144, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -253, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -220, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 197, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, -2, 193, -3, -213, 6,
	ftAnimEnd(),
	0x0000, 0x0000,
};
