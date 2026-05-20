/* AnimJoint data for relocData file 1549 (FTCaptainAnimDamageFlyX2) */
/* 2352 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimDamageFlyX2_joint1[60];
extern u16 dFTCaptainAnimDamageFlyX2_joint2[50];
extern u16 dFTCaptainAnimDamageFlyX2_joint4[68];
extern u16 dFTCaptainAnimDamageFlyX2_joint5[112];
extern u16 dFTCaptainAnimDamageFlyX2_joint6[64];
extern u16 dFTCaptainAnimDamageFlyX2_joint7[18];
extern u16 dFTCaptainAnimDamageFlyX2_joint8[10];
extern u16 dFTCaptainAnimDamageFlyX2_joint10[10];
extern u16 dFTCaptainAnimDamageFlyX2_joint11[124];
extern u16 dFTCaptainAnimDamageFlyX2_joint12[40];
extern u16 dFTCaptainAnimDamageFlyX2_joint13[26];
extern u16 dFTCaptainAnimDamageFlyX2_joint14[10];
extern u16 dFTCaptainAnimDamageFlyX2_joint16[50];
extern u16 dFTCaptainAnimDamageFlyX2_joint17[112];
extern u16 dFTCaptainAnimDamageFlyX2_joint19[56];
extern u16 dFTCaptainAnimDamageFlyX2_joint21[86];
extern u16 dFTCaptainAnimDamageFlyX2_joint22[92];
extern u16 dFTCaptainAnimDamageFlyX2_joint24[48];
extern u16 dFTCaptainAnimDamageFlyX2_joint25[90];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimDamageFlyX2_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimDamageFlyX2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyX2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyX2_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyX2_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyX2_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyX2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyX2_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyX2_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyX2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyX2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyX2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyX2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyX2_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyX2_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyX2_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyX2_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyX2_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyX2_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyX2_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimDamageFlyX2_joint1[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 1600, 0,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValT(FT_ANIM_ROTZ, 22), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 22), 143, -27, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 1682, 977, -233, -1899,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 1844, 185, -474, 82,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 20), -15, 187,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, 0, 1844, -19,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 14), 0, 6, 1795, -215,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -804, -6, -19, 17, 1280, 156,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimDamageFlyX2_joint2[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 107, 0, 4, -76, 9,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 0, -83, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 114, 57, 0, -53, 2, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 114, -10, 0, -1, 2, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 44, -12, -13, -3, 239, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -141, -2, -70, -2, -108, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, -66, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimDamageFlyX2_joint4[68] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 189, 0, 0, 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 211, 159, -47, 0, -179, 0, -50, -20, -14, -474, 5, 364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 508, 42, 1, -5, 0, 27, -5, 10, -150, -155, 139, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 510, -3, -84, 15, 14, 9, -40, 1, -151, 44, 102, -63,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), -1, 0, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 443, -44, 310, -6, 195, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -415, -221, 75,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimDamageFlyX2_joint5[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 239, -229, 5, -62, -524, 475,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -133, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 10, -48, -48, -314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 143, 75, -1152, -593,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 251, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1235, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -125, -1, -1298, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -778, 90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -496, -26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 278, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 147, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 92, -93, -683, 139,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -449, -12, 173, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -518, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -131, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -430, 27, 268, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -503, -38, 332, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -139, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -409, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -532, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -534, -31, -583, -51, 342, 10,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimDamageFlyX2_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, -292,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1090, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -306, 475,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -140, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -431, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -508, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -930, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1017, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -988, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1065, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1311, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1309, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimDamageFlyX2_joint7[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -781, -89, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -150, 13, -20, 9, -150, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), -402, 178, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimDamageFlyX2_joint8[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -274, 446, -71,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimDamageFlyX2_joint10[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 29), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimDamageFlyX2_joint11[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -122, -603, 136, 54, 594, -1345,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1108, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -726, -210, -751, -816,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -542, 99, -1037, -148,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -583, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1059, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1072, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1091, 54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -604, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -600, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -498, -158, -990, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -916, -125, -1414, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -749, 105, -1256, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -599, 22, -1192, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -577, 19, -1183, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1084, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -824, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1121, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1410, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1496, 57, -999, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1340, -126, -839, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -973, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1432, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1612, -180, 1238, -101, -849, -9,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimDamageFlyX2_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, 251,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -571, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -615, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1081, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1054, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -880, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -860, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -666, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -635, 30,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimDamageFlyX2_joint13[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 263, 266, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 337, 2, 156, -44, 225, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 290, 9, -175, -7, 291, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 592, -35, -292,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimDamageFlyX2_joint14[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 1538, 119,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), -1003,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 29), 1538, 119,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimDamageFlyX2_joint16[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -401, -84, 0, -15, 0, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -505, 0, -90, -1, -58, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -505, 0, -90, 0, -58, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -510, 0, 0, 8, 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -515, 17, 6, 0, 4, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 223, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimDamageFlyX2_joint17[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -153, 70, -122, -472, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -681, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -83, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 37, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 71, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -156, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -702, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -706, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -73, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -203, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -168, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 75, 41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -716, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -683, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -663, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -823, 63,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -200, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -163, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 114, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 132, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -746, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -672, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 130, -2, -152, 11, -639, 32,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimDamageFlyX2_joint19[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, -441,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 214, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 218, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 170, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 309, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 422, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 993, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 996, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimDamageFlyX2_joint21[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -126, 79, -42, 76, 80, 320,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 33, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -47, 12, 400, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -100, -4, 150, -109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -12, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 246, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 326, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 201, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 41, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 95, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 264, 50,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 179, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 198, 12,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 314, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 168, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 90, -77, 91, -4, 206, 7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimDamageFlyX2_joint22[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 160, -156, 110, -2, -76, -603,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 88, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3, -50, -679, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 58, 36, -452, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 87, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -573, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -633, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -714, 14,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 89, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 42, -10,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 82, 3, -697, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -773, 165,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 89, -20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 41, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 138, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -154, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 149, 11, 74, -14, -80, 74,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimDamageFlyX2_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, 291,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 833, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 854, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 722, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 552, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 462, -90,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimDamageFlyX2_joint25[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 161, -87, 365, -229, -279, 376,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -64, -106,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -70, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 96, 459,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 639, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -76, -9, 666, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -105, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 677, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 463, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -70, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), -50, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -76, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -200, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -98, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 85, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 457, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 509, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -179, 21, 104, 18, 517, 8,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
