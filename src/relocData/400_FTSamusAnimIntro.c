/* AnimJoint data for relocData file 400 (FTSamusAnimIntro) */
/* 2400 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimIntro_joint1[26];
extern u16 dFTSamusAnimIntro_joint2[10];
extern u16 dFTSamusAnimIntro_joint4[218];
extern u16 dFTSamusAnimIntro_joint5[98];
extern u16 dFTSamusAnimIntro_joint6[46];
extern u16 dFTSamusAnimIntro_joint7[26];
extern u16 dFTSamusAnimIntro_joint8[10];
extern u16 dFTSamusAnimIntro_joint9[32];
extern u16 dFTSamusAnimIntro_joint11[10];
extern u16 dFTSamusAnimIntro_joint12[96];
extern u16 dFTSamusAnimIntro_joint14[46];
extern u16 dFTSamusAnimIntro_joint15[86];
extern u16 dFTSamusAnimIntro_joint17[48];
extern u16 dFTSamusAnimIntro_joint19[58];
extern u16 dFTSamusAnimIntro_joint20[182];
extern u16 dFTSamusAnimIntro_joint22[62];
extern u16 dFTSamusAnimIntro_joint23[100];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimIntro_joints[] = {
	(u32)dFTSamusAnimIntro_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimIntro_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimIntro_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimIntro_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimIntro_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimIntro_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimIntro_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimIntro_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimIntro_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimIntro_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimIntro_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimIntro_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimIntro_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimIntro_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimIntro_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimIntro_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimIntro_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimIntro_joint1[26] = {
	ftAnimSetVal(FT_ANIM_TRAY | FT_ANIM_TRAZ), -3359, 6600,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 1787, 0, 7200,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 75), -3359, 6600,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 1920, -840,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 89,
	ftAnimSetValRateT(FT_ANIM_TRAY, 70), 127, -246,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 70), -2730,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimIntro_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 160),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimIntro_joint4[218] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 240, 0, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -21, 56,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 75), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 75), 240, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 75), 0, -21, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -261, 2, 0, 106, 0, 33, 5, 87, -3, 47, -80, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 251, 0, 426, 0, 134, 0, 43, 10, 2, 1, 49, 37,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 43, 2, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 252, 0, 427, 0, 133, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 303, 0, 427, 0, 133, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 251, 0, 427, 0, 134, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 299, 0, 427, 0, 134, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 251, 0, 427, 0, 134, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 291, 0, 426, 0, 134, 0,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 55), 43, 2, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 251, 0, 426, 0, 134, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 285, 0, 426, 0, 134, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 251, 0, 426, 0, 134, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 279, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 426, 0, 134, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 426, 0, 134, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 251, 426, 134,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 30), 134,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 36), 426,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 273,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 251,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 279,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 251,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 285,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 251,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 290,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 251,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 297,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 251,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 134, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 302,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 134, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 251,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 14), 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 426, 0, 134, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 426, 134,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimIntro_joint5[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1596, 0, -1588, 0, 1674, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 74), -1596, 0, -1588, 0, 1674, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1596, -41, -1588, 39, 1674, -161,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1343, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1679, 20, 1352, -695,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1555, 59, 284, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1563, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1403, 763,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1811, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1824, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1344, -1, 1837, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 37), 1813, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 78), -1340, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1565, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 76), -1554, 0,
	ftAnimBlock(0, 35),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1813, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 40), 1813, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1554, 0, -1340, 0, 1813, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimIntro_joint6[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1046, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 74), -1046, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1046, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1286, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -960, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -834, 480,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 417,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 78), -4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimIntro_joint7[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 536,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 75), 536, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, -17,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 29), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 65), 0,
	ftAnimBlock(0, 55),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimIntro_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 160),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimIntro_joint9[32] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 480, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 75), 0, 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 73, -487, -147,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 73, -487, -147,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 65), 73, -487, -147,
	ftAnimBlock(0, 55),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTSamusAnimIntro_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 160),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimIntro_joint12[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -275, 0, 111, 0, -68, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 74), -275, 0, 111, 0, -68, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -275, 67, 111, -36, -68, -177,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 42, 183,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 131, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -422, -559,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1186, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 226, -114, -137, 689,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -185, -205, 298, 84, 192, 166,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 192, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 299, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -184, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 79), -184, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 195, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 77), 195, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 299, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 76), 299, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -184, 0, 299, 0, 195, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimIntro_joint14[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -985, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 74), -985, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -985, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1429, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1128, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -930, 564,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 462,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 78), -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimIntro_joint15[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1588, 0, -1518, 0, -2131, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 75), -1518, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 74), -1585, -2, -2132, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1588, -59, -2131, 139,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1760, 9, -1642, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1521, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1561, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1685, 23, -1446, 746, -2051, -595,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1713, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -69, 688, -2833, -390,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), -69, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -2833,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 79), -79, 1, -2831, 0,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -1713,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 74), -1711, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1712, 0, -77, 1, -2831, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimIntro_joint17[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1270, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 74), 1270, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1270, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1162, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 999, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1278, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1290, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 50), 1291, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1291, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 1290, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1290, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimIntro_joint19[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 63, 0, 21, 0, 48, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 159), 21, 0, 48, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 74), 58, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 63, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -40, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 31, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 33, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 33, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 70), 17, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 19, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 21, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 23, 1, 21, 0, 48, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimIntro_joint20[182] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0, -592, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 75), 38, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 74), 0, -592,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, -35, -592, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -54, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 45, 63, -439, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 166, -8, -237, -462,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 27, -107, -1364, -410,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -48, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 98, 76, -1059, 152,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 98, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1057, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1057, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 77), -1059, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 98, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -6, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -48, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -41, -12,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -43, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 52, -34,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -48, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -43, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 16, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 64, -25,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -48, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -48, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 36, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 54, -17,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -45, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 38), -47, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 38, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 70, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 60, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 71, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 74, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 96, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 98, 1, -48, 0, -1059, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimIntro_joint22[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 1100,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 74), 1100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1100, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1157, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1127, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1263, -561,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3, -629,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 3, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 30, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 3, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 58), 3, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimIntro_joint23[100] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 1347, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 1544, -1549,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 74), 1347, 1544, -1549,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1347, 34, 1544, 17, -1549, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1707, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 1530, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1848, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1762, 43,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 7), -1762,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1707, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 77), 1707, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1762, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 72), -1762, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1531, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 1521, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1526, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 1509, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1513, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 44), 1473, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1472, 0, 1707, 0, -1762, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
