/* AnimJoint data for relocData file 1724 (FTNessAnimRollF) */
/* 4560 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimRollF_joint1[36];
extern u16 dFTNessAnimRollF_joint2[156];
extern u16 dFTNessAnimRollF_joint3[120];
extern u16 dFTNessAnimRollF_joint5[94];
extern u16 dFTNessAnimRollF_joint6[220];
extern u16 dFTNessAnimRollF_joint7[96];
extern u16 dFTNessAnimRollF_joint8[26];
extern u16 dFTNessAnimRollF_joint9[116];
extern u16 dFTNessAnimRollF_joint11[74];
extern u16 dFTNessAnimRollF_joint12[168];
extern u16 dFTNessAnimRollF_joint13[50];
extern u16 dFTNessAnimRollF_joint14[40];
extern u16 dFTNessAnimRollF_joint16[10];
extern u16 dFTNessAnimRollF_joint17[206];
extern u16 dFTNessAnimRollF_joint19[76];
extern u16 dFTNessAnimRollF_joint20[174];
extern u16 dFTNessAnimRollF_joint22[102];
extern u16 dFTNessAnimRollF_joint23[176];
extern u16 dFTNessAnimRollF_joint25[78];
extern u16 dFTNessAnimRollF_joint26[208];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimRollF_joints[] = {
	(u32)dFTNessAnimRollF_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimRollF_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimRollF_joint3, /* [2] joint 3 */
	(u32)dFTNessAnimRollF_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTNessAnimRollF_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimRollF_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimRollF_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimRollF_joint9, /* [8] joint 9 */
	(u32)dFTNessAnimRollF_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTNessAnimRollF_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimRollF_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimRollF_joint14, /* [13] joint 14 */
	(u32)dFTNessAnimRollF_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTNessAnimRollF_joint17, /* [16] joint 17 */
	(u32)dFTNessAnimRollF_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNessAnimRollF_joint20, /* [19] joint 20 */
	(u32)dFTNessAnimRollF_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTNessAnimRollF_joint23, /* [22] joint 23 */
	(u32)dFTNessAnimRollF_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTNessAnimRollF_joint26, /* [25] joint 26 */
	0xFFFF0452, /* [26] END */
};

/* Joint 1 */
u16 dFTNessAnimRollF_joint1[36] = {
	ftAnimSetVal(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 6), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), 1080, 1424,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 2), -360,
	ftAnimSetValRateT(FT_ANIM_TRAX, 23), 0, 119,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 15), 3027, 876,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 8), 3600, 508,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 0, 3600,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimRollF_joint2[156] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -16, 128, 537, 25, -28, -2653,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 3), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 4), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 9), 540,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 1), 3, 0, -360, -1326,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -1326,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -359, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -359, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 0, -341, -360, 1228,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), -340, 1228,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, 169, -268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), -85, -822, -52, 2934,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), -822, 2934,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), -205, -192, 300, 1402,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), -192, 1402,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), -133, 822, 297, -1494,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -1494,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 822,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 11), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 0, -1190,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -1190,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 3216, 134, 0, 64,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 0, 1,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 1,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 19), 0, -11,
	ftAnimSetValRateT(FT_ANIM_TRAY, 23), 537, -3,
	ftAnimBlock(0, 9),
	ftAnimSetValRateT(FT_ANIM_TRAX, 11), -3, -36,
	ftAnimBlock(0, 5),
	ftAnimSetValT(FT_ANIM_ROTX, 9), 3216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1607, 321,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 4), 1607,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_TRAZ), 0, -11,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 4), 1608,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), -28, -70,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -36,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 3), -16, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTNessAnimRollF_joint3[120] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -360, -429,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 28, 8, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -71, -24, -790, -107, -95, -26,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -71, -790, -95,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 10, 112, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 79, 0, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 6), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 54, 236,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 201, -157,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1003, -79,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -21, 176, -110, -137, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -26, -16, -138, -193, 0, 84,
	ftAnimBlock(0, 8),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -4, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -71, -25, -790, -358, -95, -66,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -26, 26, -138, 138, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -71, -790, -95,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 12, 53, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -360, 119,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 28, 8, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimRollF_joint5[94] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 392, 0, -157, 0, -81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 335, 83, -153, -38, -271, -67, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 335, -153, -271,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, 51, 71,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 20), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 449, 14, 207, 33, 226, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 538, 2, 322, 3, 520, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 266, -8, 110, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 483, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 608, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 608, -41, 240, -4, 110, -3, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 0, -33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimRollF_joint6[220] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -410, -375, 2955, -1148, 415, 547,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -786, -187, 1807, -574, 963, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -785, 0, 1807, 0, 963, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -786, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1807, 0, 963, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1807, 142, 963, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -832, 260, 2092, 402, 1122, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -264, 335, 2611, 326, 909, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -160, 87, 2746, 88, 978, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -88, -4, 2788, 27, 805, -101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 757, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 2780, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -169, -87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -665, -58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 757, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 866, 43,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2760, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 2540, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -721, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -961, -153,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 920, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1217, 273,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1159, -271,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2058, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2524, 11, 1566, 349,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2164, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2563, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2670, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 2718, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2042, 15, 2161, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2009, -19, 2143, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2726, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2722, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2046, 180, 2698, -137, 2167, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1647, -56, 2447, -304, 1614, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2159, -218, 2089, -275, 2052, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2084, 70, 1896, -109, 2041, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2018, 65, 1869, -26, 2024, -16,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimRollF_joint7[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, -229,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -702, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -702, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -702, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -702, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1072, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1172, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -788, 366,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -440, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -366, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -328, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -534, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -529, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -374, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -249, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -412, -334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -669, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -602, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 128,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimRollF_joint8[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -625, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -625,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -625,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -625, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTNessAnimRollF_joint9[116] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, 364, 123, -32, 32,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 2, 486, 30, 0, 0, 0, 0, 288, -23, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 288, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 486, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -112,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 25, -302, 0, 0, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 2), -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -140, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 693, 571,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1142, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 952, -77, 0, -2, 0, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -4, 0, 176, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 729, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 8, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 8, -2, -4, 1, 176, -26, 0, 0, 288, 11, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -10, 0, 364, 78, -32, -57,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 300, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNessAnimRollF_joint11[74] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0, 0, 54, 108, -17, -35,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 54, -17,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 3), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -10, 0, 6, 0, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -221, -11, 139, 6, -209, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -221, 27, 139, -17, -209, 26, 0, 0, 54, -54, -17, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTNessAnimRollF_joint12[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -415, -291, -2647, 378, -119, -585,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -706, -142, -2269, 189, -704, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -700, 6, -2268, 0, -694, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -694, -3, -2267, 0, -685, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -706, -154, -2269, -170, -704, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1003, -172, -2609, -177, -1031, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1051, 38, -2624, -105, -1109, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -925, 114, -2820, -171, -983, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -822, 240, -2968, -103, -892, 213,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -2986, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -445, 216, -557, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -388, 55, -509, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 268, 80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 163, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2961, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -2766, -2,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 348, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 609, -33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 199, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 196, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2769, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -2743, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 557, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 342, -327, 143, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -98, -393, 15, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -444, -158, -2773, 48, -190, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -415, 28, -2647, 126, -119, 70,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimRollF_joint13[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -252,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 405,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 14), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -558,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTNessAnimRollF_joint14[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 54, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 625, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 625, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 625, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 625, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 90, 54, 126,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimRollF_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimRollF_joint17[206] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1242, 384, -1328, -505, -1906, -702,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1627, 192, -1833, -252, -2609, -351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1627, 0, -1833, 0, -2609, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1748, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1608, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2570, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2497, 71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2548, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1664, 90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1365, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1617, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1778, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1994, 229, -1314, -6, -2724, -169,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2408, 142,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1502, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2887, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2937, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2949, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2523, 98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2901, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1481, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1175, 118,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2979, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3035, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3041, -44, -1035, 122, -3268, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2812, 187, -930, 161, -3004, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3417, 183, -711, 162, -3577, -159,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -528, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3180, -159, -3324, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3098, -38, -3249, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 3106, 4, -3209, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3112, 8, -533, -12, -3219, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3118, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -495, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3306, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3481, -128,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3538, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3022, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2906, -85, -368, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2851, -55, -279, 88, -3514, 23,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimRollF_joint19[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 396, 553,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 949, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 949, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1161, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1236, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1188, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1079, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 681, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 529, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 286, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 510, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 584, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 594, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 639, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 700, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 658, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 492, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -96,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTNessAnimRollF_joint20[174] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, -220, 12, -23, 26, -182,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 104, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -214, -111, -156, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -216, 0, -156, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -218, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -156, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -65, 101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 154, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -288, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -260, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -45, 239,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 711, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 140, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -236, -30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 122, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 227, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 573, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -38, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -221, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -382, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -502, -18, -261, 85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -333, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 213, -53, -66, 130,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -251, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 189, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -375, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -502, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -541, -34, -356, -83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -318, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -247, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 223, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 84, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -215, 103, 61, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -34, 62, 44, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -84, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 90, 12, 46, 26, -18,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimRollF_joint22[102] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -424, -37, -191, -24, -165, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -327, 7, -172, 10, -149, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -368, 21, -116, 93, -83, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -284, 73, 14, 62, 84, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 69, 198, 20, 548, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 132, 27, 139, -26, 889, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 136, 2, 67, -11, 919, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 149, 1, 56, -11, 531, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 149, -25, -34, -1, 354, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -30, -86, 44, 28, 313, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, -11, 51, -14, 270, -104,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -66, 0, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTNessAnimRollF_joint23[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -127, 726, 136, -410, -210, 262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 599, 363, -274, -203, 51, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 600, 0, -270, 0, 50, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 599, -41, 50, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -274, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -270, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 516, -180, 61, 175, -22, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, -136, 79, -43, 361, 338,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -106, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 243, -2, 654, 159,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 259, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 679, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, -4, 676, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -117, 32, 659, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -50, 58, 525, -111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 164, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 212, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 263, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 53, -19,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 117, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -109, -31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 224, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 240, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 41, -2, -126, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 53, -43, -109, -57,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 240, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 121, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -27, -78, -199, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -128, -11, -244, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 124, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, 0, 136, 12, -210, 33,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimRollF_joint25[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 407, -407,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -199,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 449, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 269, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 435, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 794, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 816, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 882, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 846, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 532, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -125,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTNessAnimRollF_joint26[208] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1684, -241, 1583, 119, 1406, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1397, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1443, -120, 1702, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1442, 0, 1702, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1442, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1631, -47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1395, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1836, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1420, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1594, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1535, -108, 1583, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1583, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1377, -97, 1881, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1714, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1341, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1265, 20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1631, -86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1153, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1299, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1655, 37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1594, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1597, -14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1687, 28, 1122, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 1760, -3, 1041, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1755, -23, 1049, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1687, -3, 1337, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1684, -2, 1583, -14, 1406, 68,
	ftAnimEnd(),
	0x400E, 0x0038, 0x0000, 0x0000, 0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x380F, 0x0001, 0x0033, 0xFFFC, 0x0028, 0x200F, 0x0004, 0x0038, 0x0024, 0x0000, 0x0000, 0x0000, 0xFFF8, 0x2803, 0x0001, 0x00EB, 0x00D7, 0x380D, 0x0001, 0x0000, 0x0000, 0x200F, 0x0001, 0x01E6, 0x00E6, 0x0000, 0xFFAE, 0x0000, 0x0011, 0x200F, 0x0001, 0x02B7, 0x001A, 0xFF5B, 0xFFEC, 0x0022, 0x0004, 0x200F, 0x0007, 0x02B7, 0xFFEB, 0xFF5B, 0x0006, 0x0022, 0xFFFE, 0x200F, 0x0005, 0x01B1, 0xFFDB, 0xFFA6, 0x0009, 0x0003, 0xFFFE, 0x380F, 0x000C, 0x0038, 0x0000, 0x0000, 0x0000, 0x0000,
};
