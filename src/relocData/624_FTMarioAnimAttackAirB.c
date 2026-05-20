/* AnimJoint data for relocData file 624 (FTMarioAnimAttackAirB) */
/* 3904 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimAttackAirB_joint1[28];
extern u16 dFTMarioAnimAttackAirB_joint2[56];
extern u16 dFTMarioAnimAttackAirB_joint4[82];
extern u16 dFTMarioAnimAttackAirB_joint5[224];
extern u16 dFTMarioAnimAttackAirB_joint7[96];
extern u16 dFTMarioAnimAttackAirB_joint8[8];
extern u16 dFTMarioAnimAttackAirB_joint10[44];
extern u16 dFTMarioAnimAttackAirB_joint11[208];
extern u16 dFTMarioAnimAttackAirB_joint12[86];
extern u16 dFTMarioAnimAttackAirB_joint13[30];
extern u16 dFTMarioAnimAttackAirB_joint15[10];
extern u16 dFTMarioAnimAttackAirB_joint16[184];
extern u16 dFTMarioAnimAttackAirB_joint18[126];
extern u16 dFTMarioAnimAttackAirB_joint20[192];
extern u16 dFTMarioAnimAttackAirB_joint21[214];
extern u16 dFTMarioAnimAttackAirB_joint23[128];
extern u16 dFTMarioAnimAttackAirB_joint24[188];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTMarioAnimAttackAirB_joints[] = {
	(AObjEvent32 *)dFTMarioAnimAttackAirB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimAttackAirB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimAttackAirB_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTMarioAnimAttackAirB_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTMarioAnimAttackAirB_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTMarioAnimAttackAirB_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTMarioAnimAttackAirB_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTMarioAnimAttackAirB_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTMarioAnimAttackAirB_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimAttackAirB_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimAttackAirB_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTMarioAnimAttackAirB_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTMarioAnimAttackAirB_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTMarioAnimAttackAirB_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTMarioAnimAttackAirB_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTMarioAnimAttackAirB_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTMarioAnimAttackAirB_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimAttackAirB_joint1[28] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAZ), 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY), 0, 0, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_SCAZ, 7), 2621, -1281,
	ftAnimSetValRateBlockT(FT_ANIM_SCAZ, 2), 2621, 753,
	ftAnimSetValRateBlockT(FT_ANIM_SCAZ, 3), 4505, 421,
	ftAnimSetValRateBlockT(FT_ANIM_SCAZ, 4), 4096, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 24), 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimAttackAirB_joint2[56] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 26,
	ftAnimSetValBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValT(FT_ANIM_TRAZ, 9), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 562, 134,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1608, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -570, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 4), 1608, 0, -570, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 24), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 3216, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 0, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimAttackAirB_joint4[82] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 58, -3, 0, 0, 0, 0, -14, 21, -92, -7,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 40, 49, -111, -16,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 5, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -268, -105,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 40, -321, -111, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 34), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 37), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -1202, 0, 0, 0, -160, -76, -111, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 0, 0, -160, 41, -111, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), -324,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 58, 19,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, -14, 89, -92, 11,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimAttackAirB_joint5[224] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1906, -52, -1121, 9, -1709, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1146, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1853, -88, -1650, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1729, -126, -1510, 147,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1512, -63, -1230, 108,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1219, -86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1533, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1472, -20, -1137, 87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1498, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1056, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -987, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1555, 9, -1615, -13, -1015, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1518, -406, -1560, 360, -1112, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 742, -13, -893, 573, -512, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1491, 385, -412, 258, -1134, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1513, 10, -377, 16, -1160, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1492, -26, -406, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1158, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1132, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1458, 10, -428, -42, -1101, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -533, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1512, 259, -1188, -312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1978, 506, -1725, -527,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2975, 286, -2598, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -552, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -276, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3096, 86, -81, 132, -2600, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3184, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -2601, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 19, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 32, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -119, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3185, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 3213, 78,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2634, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -3082, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -171, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -500, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3304, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3409, 105, -3200, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3515, 105, -487, 12, -3318, -117,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimAttackAirB_joint7[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, -67,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -451, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1099, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1099, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -923, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -905, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -821, 447,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, -429,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -859, -473,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1144, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1212, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1146, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1076, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1095, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1127, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -512, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 128,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimAttackAirB_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 127, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTMarioAnimAttackAirB_joint10[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 9, 0, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 53, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 189, 21, 64, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 189, -102, 64, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -322, 4, 0, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 276, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 18), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 0, -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimAttackAirB_joint11[208] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -329, 13, 495, 2, -109, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -42, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 361, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -316, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -248, 81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 67, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 13, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 85, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 249, -109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 68, -63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 80, -4, 102, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, -9, 14, 1, 84, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 62, -130, 71, 223, 18, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -203, -529, 462, 170, -406, -545,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -997, -450, 412, -31, -1071, -369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1104, -64, 399, -7, -1145, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 412, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1126, -19, -1136, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1007, 129, -910, 114,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 404, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -846, 375, 589, 76, -783, 347,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -256, 401, 557, -139, -215, 385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -43, 131, 309, -205, -13, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 30, 145, -120, 48, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 29, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 16, 7, 73, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -36, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 44, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 12, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 245, 45,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -58, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -294, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 294, 49, 42, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 496, 1, -73, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -329, -34, 495, -1, -109, -36,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimAttackAirB_joint12[86] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, -35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -419, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -777, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -759, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -619, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -606, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -374, 303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 182,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -468, -370,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -750, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -816, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -785, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -816, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -804, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -453, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 68,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimAttackAirB_joint13[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 625,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -279, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 13), 804,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 10, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 15), 804,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 12), 625,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimAttackAirB_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimAttackAirB_joint16[184] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 102, -1, -4, 11, -247, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 38, -39, 108, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -297, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -387, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -701, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -11, -67, 129, 0, -857, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -96, -113, 110, -28, -1081, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -238, -26, 71, 38, -1070, 117,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 188, 13, -845, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 99, -53, -1098, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 94, 74, 81, -36, -1059, 107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 157, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 26, -17, -883, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 47, 1, -966, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 30, -21, -915, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -28, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 159, 0, -838, 92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 113, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -731, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -28, 0, -732, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -26, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -730, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -722, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -701, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -20, 19, -701, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 24, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -792, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -787, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 29, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 6, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 105, -7, -739, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 95, 0, -367, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 95, 0, -6, -12, -247, 119,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimAttackAirB_joint18[126] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 229, 97,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 327, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 504, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1341, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1463, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1404, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1230, -316,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4915, 4915, 4915,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 771, -454,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 321, -164,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 443, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 352, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 213, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -103,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 24), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 50, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 306, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 433, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 516, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 376, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 229, -146,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimAttackAirB_joint20[192] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1353, -4, -1574, 14, 2044, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1472, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1368, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2014, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1932, -97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1619, -72,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1431, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1384, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1393, 47, 1561, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1463, 130, 1530, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1653, 49, -1397, 0, 1383, -72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1395, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1562, -79, 1385, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1494, -35, 1367, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1491, -111, -1433, -16, 1412, 214,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1434, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1270, -95, 1795, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1299, 30, 1821, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1331, 36, -1431, 3, 1829, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1761, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1421, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1372, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1438, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1438, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1444, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1460, -21,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1764, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 2021, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1435, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1358, -138, -1427, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1560, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1157, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1066, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1117, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1213, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1277, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1344, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1359, 14, -1574, -14, 2044, 22,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimAttackAirB_joint21[214] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1542, -18, 1445, 7, 1262, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1739, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1494, 33, 1024, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1538, 65, 909, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1814, -94, 1625, 126, 778, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1929, -130, 1791, 59, 666, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1550, -233, 812, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2075, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1952, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1713, 387, 1278, -182, 398, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1176, 341, 1186, 70, 695, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1031, 69, 1419, 87, 821, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1038, 2, 1360, -2, 774, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1025, 11, 1413, 62, 799, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 882, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1017, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1485, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1585, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1589, 1, 883, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 891, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1589, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1580, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1017, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1020, -14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1581, -49, 906, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1365, -98,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 861, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1042, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1230, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1284, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1224, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 864, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 955, 80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1338, -98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1521, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1280, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1404, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1052, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1161, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1542, -21, 1445, 41, 1262, 100,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimAttackAirB_joint23[128] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 716, 28,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 818, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 915, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1350, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1435, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1393, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1237, -305,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4915, 4915, 4915,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 781, -461,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 315, -168,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 444, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 352, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 213, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -106,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 24), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 202, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 436, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 817, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 869, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 790, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, -73,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimAttackAirB_joint24[188] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 57, 13, -134, 0, 164, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 131, 43, -144, -4, 107, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 187, 80, -147, 14, 20, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 293, 128, -116, 93, -168, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 444, 120, 38, 217, -456, -277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 534, -92, 319, 138, -722, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 259, -317, 316, -446, -782, 200,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 225, 383,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -100, -388, -574, -433,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -516, -194, -549, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -488, -13, -461, 48, 444, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -544, 0, -452, -14, 430, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -365, 141,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -567, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 394, -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 237, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -206, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -211, -5, -572, -5, 240, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -552, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 187, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -218, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -195, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -169, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -305, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -527, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -158, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -317, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -147, 80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 181, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 166, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -64, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 57, 51, -134, 24, 164, -1,
	ftAnimEnd(),
};
