/* AnimJoint data for relocData file 947 (FTDonkeyAnimCargoVerySlowWalk) */
/* 2080 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimCargoVerySlowWalk_joint1[50];
extern u16 dFTDonkeyAnimCargoVerySlowWalk_joint2[60];
extern u16 dFTDonkeyAnimCargoVerySlowWalk_joint4[32];
extern u16 dFTDonkeyAnimCargoVerySlowWalk_joint5[70];
extern u16 dFTDonkeyAnimCargoVerySlowWalk_joint6[24];
extern u16 dFTDonkeyAnimCargoVerySlowWalk_joint7[36];
extern u16 dFTDonkeyAnimCargoVerySlowWalk_joint8[56];
extern u16 dFTDonkeyAnimCargoVerySlowWalk_joint10[70];
extern u16 dFTDonkeyAnimCargoVerySlowWalk_joint11[70];
extern u16 dFTDonkeyAnimCargoVerySlowWalk_joint12[24];
extern u16 dFTDonkeyAnimCargoVerySlowWalk_joint13[44];
extern u16 dFTDonkeyAnimCargoVerySlowWalk_joint16[12];
extern u16 dFTDonkeyAnimCargoVerySlowWalk_joint17[96];
extern u16 dFTDonkeyAnimCargoVerySlowWalk_joint19[32];
extern u16 dFTDonkeyAnimCargoVerySlowWalk_joint21[80];
extern u16 dFTDonkeyAnimCargoVerySlowWalk_joint22[88];
extern u16 dFTDonkeyAnimCargoVerySlowWalk_joint24[32];
extern u16 dFTDonkeyAnimCargoVerySlowWalk_joint25[112];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimCargoVerySlowWalk_joints[] = {
	(u32)dFTDonkeyAnimCargoVerySlowWalk_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimCargoVerySlowWalk_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimCargoVerySlowWalk_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimCargoVerySlowWalk_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimCargoVerySlowWalk_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimCargoVerySlowWalk_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimCargoVerySlowWalk_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimCargoVerySlowWalk_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimCargoVerySlowWalk_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimCargoVerySlowWalk_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimCargoVerySlowWalk_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimCargoVerySlowWalk_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimCargoVerySlowWalk_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimCargoVerySlowWalk_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimCargoVerySlowWalk_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimCargoVerySlowWalk_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimCargoVerySlowWalk_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimCargoVerySlowWalk_joint25, /* [24] joint 25 */
	0xFFFF01F2, /* [25] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimCargoVerySlowWalk_joint1[50] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 71, 40, 1049, 49, -692, 15,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 34), -720, -16,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 16), 50, -74, 1204, -68,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -68,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -74,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 34), 71,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 11), 1091, 35,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 35,
	ftAnimSetValRateT(FT_ANIM_TRAY, 14), 1177, -40,
	ftAnimBlock(0, 7),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -16,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 16), -692,
	ftAnimBlock(0, 7),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -40,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 9), 1049,
	ftAnimLoop(0x6800, -98),
};

/* Joint 2 */
u16 dFTDonkeyAnimCargoVerySlowWalk_joint2[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -172, 5, -135, -1, 36, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -88, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -40, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 66, 0,
	ftAnimBlock(0, 4),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -136, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -103, -1,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 23), -135,
	ftAnimBlock(0, 6),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 17), 36,
	ftAnimBlock(0, 9),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -172,
	ftAnimLoop(0x6800, -118),
};

/* Joint 4 */
u16 dFTDonkeyAnimCargoVerySlowWalk_joint4[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 966, 92, 6,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 26), 99,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 40), 926,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), 40, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -16, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 92, 6,
	ftAnimBlock(0, 14),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 966,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimCargoVerySlowWalk_joint5[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1592, 2, -1308, 0, -2934, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 1652, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 47), -1313, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -2876, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2846, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), -2814, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1640, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), 1573, 11,
	ftAnimBlock(0, 27),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2853, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2928, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1583, 8, -1310, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1590, 4, -1308, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1592, 2, -1308, 0, -2934, -5,
	ftAnimLoop(0x6800, -136),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimCargoVerySlowWalk_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1260, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 41), -1358, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1350, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1263, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1260, 2,
	ftAnimLoop(0x6800, -46),
};

/* Joint 7 */
u16 dFTDonkeyAnimCargoVerySlowWalk_joint7[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1071, -295, 417,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -1000, -1, -333, -4, 380, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -1130, -2, -418, -1, 214, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -1077, 2, -382, 6, 252, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -1071, -295, 417,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimCargoVerySlowWalk_joint8[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 35, 1, -65, 0, -115, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -45, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 50), -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 35, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -11, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 32, 0,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -111, -1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -21, 0,
	ftAnimBlock(0, 4),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 17), -115,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), 35,
	ftAnimLoop(0x6800, -110),
};

/* Joint 10 */
u16 dFTDonkeyAnimCargoVerySlowWalk_joint10[70] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -284, 74, 63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 98, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 50, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -310, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -242, 0,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -20, 0,
	ftAnimBlock(0, 5),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 123, -1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -308, 0,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 26), 74,
	ftAnimBlock(0, 5),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -186, 1,
	ftAnimBlock(0, 6),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 15), 63,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), -284,
	ftAnimLoop(0x6800, -136),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimCargoVerySlowWalk_joint11[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 3, 276, 1, -1372, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 238, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 65, -15, -1319, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 48, -17, -1342, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -1405, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -91, 7,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 235, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 276, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1390, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1371, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -85, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -66, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -66, 0, 276, 0, -1372, 0,
	ftAnimLoop(0x6800, -136),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimCargoVerySlowWalk_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1201, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -1229, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1222, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -1202, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1201, 1,
	ftAnimLoop(0x6800, -46),
};

/* Joint 13 */
u16 dFTDonkeyAnimCargoVerySlowWalk_joint13[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1099, 258, 360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1149, -1, 246, -3, 341, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1068, -8, 182, -3, 390, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 973, -1, 174, 2, 363, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 1034, 6, 241, 4, 328, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1099, 258, 360,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimCargoVerySlowWalk_joint16[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 50),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimCargoVerySlowWalk_joint17[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 923, -7, -1090, -2, -1730, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -1205, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), -2089, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), 1319, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1352, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1132, -92,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1209, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1171, -9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2081, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1801, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1038, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 824, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1177, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1092, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1798, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1728, -1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 837, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 916, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 923, 6, -1090, 1, -1730, -1,
	ftAnimLoop(0x6800, -188),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimCargoVerySlowWalk_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 932, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 1038, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1056, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 907, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 864, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 928, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, 4,
	ftAnimLoop(0x6800, -62),
};

/* Joint 21 */
u16 dFTDonkeyAnimCargoVerySlowWalk_joint21[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1891, 2, 1195, -4, -1733, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 1271, 5, -1815, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), 1693, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1680, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1920, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1275, 3, -1821, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1695, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1170, 1,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1951, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1896, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1683, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1729, -7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1170, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 1193, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1891, -5, 1195, 1, -1733, -4,
	ftAnimLoop(0x6800, -156),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimCargoVerySlowWalk_joint22[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -98, 6, 226, 8, -688, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 263, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -473, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 313, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 303, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 254, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 276, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 15, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -470, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -587, 1,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 248, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 229, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -586, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -686, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 11, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -96, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -99, -3, 225, -3, -689, -3,
	ftAnimLoop(0x6800, -172),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimCargoVerySlowWalk_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1274, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 840, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 851, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 1239, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1258, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1270, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1275, 4,
	ftAnimLoop(0x6800, -62),
};

/* Joint 25 */
u16 dFTDonkeyAnimCargoVerySlowWalk_joint25[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -118, -3, -248, -3, -223, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -213, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 41), -224, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -211, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -208, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 32), -120, -5,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -203, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -225, 4,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -237, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -250, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -124, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -119, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -118, 1, -248, 2, -222, 2,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
	0x40E0, 0x0000, 0x01F3, 0x0364, 0x480E, 0xFCDC, 0x0000, 0x0000, 0x20E1, 0x000A, 0xFFF8, 0x0006, 0x0155, 0xFFEB, 0x0364, 0xFFF4, 0x2861, 0x000F, 0x0014, 0x000D, 0x01AF, 0x0007, 0x3881, 0x000F, 0x033E, 0x20E1, 0x000F, 0x002A, 0xFFFA, 0x0171, 0x0015, 0x0364, 0x000C, 0x38E1, 0x000A, 0x0000, 0x01F3, 0x0364, 0x6800, 0xFFB2, 0x0000, 0x0000, 0x0000, 0x0000,
};
