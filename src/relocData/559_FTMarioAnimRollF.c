/* AnimJoint data for relocData file 559 (FTMarioAnimRollF) */
/* 4368 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimRollF_joint1[36];
extern u16 dFTMarioAnimRollF_joint2[132];
extern u16 dFTMarioAnimRollF_joint3[110];
extern u16 dFTMarioAnimRollF_joint5[80];
extern u16 dFTMarioAnimRollF_joint6[244];
extern u16 dFTMarioAnimRollF_joint7[120];
extern u16 dFTMarioAnimRollF_joint8[10];
extern u16 dFTMarioAnimRollF_joint9[88];
extern u16 dFTMarioAnimRollF_joint11[46];
extern u16 dFTMarioAnimRollF_joint12[178];
extern u16 dFTMarioAnimRollF_joint13[74];
extern u16 dFTMarioAnimRollF_joint14[14];
extern u16 dFTMarioAnimRollF_joint16[50];
extern u16 dFTMarioAnimRollF_joint17[228];
extern u16 dFTMarioAnimRollF_joint19[102];
extern u16 dFTMarioAnimRollF_joint21[200];
extern u16 dFTMarioAnimRollF_joint22[168];
extern u16 dFTMarioAnimRollF_joint24[82];
extern u16 dFTMarioAnimRollF_joint25[172];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTMarioAnimRollF_joints[] = {
	(AObjEvent32 *)dFTMarioAnimRollF_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimRollF_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimRollF_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTMarioAnimRollF_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTMarioAnimRollF_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTMarioAnimRollF_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTMarioAnimRollF_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTMarioAnimRollF_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTMarioAnimRollF_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTMarioAnimRollF_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimRollF_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimRollF_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTMarioAnimRollF_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTMarioAnimRollF_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTMarioAnimRollF_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTMarioAnimRollF_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTMarioAnimRollF_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTMarioAnimRollF_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTMarioAnimRollF_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTMarioAnimRollF_joint1[36] = {
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
u16 dFTMarioAnimRollF_joint2[132] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAZ), 223, 0,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -1, 540, 1,
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 223, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 3), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX, 4), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 32), 540,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), -360,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 3), -360,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 223, 0,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), 0, -340,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -340,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), 360, 517,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, 165, -268, -11,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), -85, -822,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -822,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), -205, -192,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), -192, 517,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), -133, 822, 355, -2149,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 822, -2149,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 0, 533, 0, -1485,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 533, -1485,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 1), -16, -112,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 15), 3216,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 0, 131,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -112,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 23), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 13), -1, 17,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 17,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 10), 0,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_ROTX, 9), 3216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1831, 366,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 4), 1831,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 1831,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTMarioAnimRollF_joint3[110] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, -790, -95,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -71, -790, -95,
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
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -71, -790, -95, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimRollF_joint5[80] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 7, 258, -13, 110, -14,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 335, 31, -153, -103, -271, -95,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 335, -153, -271,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, 51, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 449, 44, 207, 46, 226, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 784, 8, 309, 11, 482, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 538, -34, 322, -5, 520, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 258, -6, 110, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 472, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 608, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 608, -49,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 258, 110,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 208, 258, 110,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimRollF_joint6[244] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3083, 688, -300, 101, 2944, -372,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2394, 352, -198, 51, 2572, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2379, 4, -198, 0, 2562, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2394, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -198, 0, 2566, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -198, -135, 2572, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2450, 290, -469, -400, 2731, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1814, 325, -999, -339, 2414, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1799, 58, -1148, -90, 2594, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1696, 43, -1180, -8, 2414, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1712, -41, -1166, 37, 2274, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1780, -145, -1105, 46, 2173, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1065, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2002, -202, 2281, 104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2307, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2382, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2447, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2386, 98, -1079, -166, 2493, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2111, -20, -1397, -283, 2459, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2427, -138, -1646, 158, 2494, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2526, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2388, -13, -1080, 338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2454, -145, -969, 97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -873, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2679, -425, 2745, 422,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3306, -460, 3372, 464,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3665, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -939, -74, 3674, 202,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3770, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1021, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1058, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1098, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3650, 18, 3770, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3650, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 3726, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1087, 71, 3770, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3757, -435, -956, 46, 3830, 382,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4521, -464, -995, -129, 4535, 392,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4686, -85, -1215, -156, 4615, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4692, -5, -1308, -92, 4553, -62,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimRollF_joint7[120] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, -520,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -702, -260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -702, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -702, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -702, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1059, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1189, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -844, 374,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -440, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -177, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -129, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -280, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -403, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -534, -485,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1374, -398,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1332, 420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -534, 471,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -389, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -101, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -316, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -483, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -367, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 185,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimRollF_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -625, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTMarioAnimRollF_joint9[88] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, -10, -4, 22, 176, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -50, 486, 122, 0, -44,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 486, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 98, -302, -147, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 490, 210, -251, 196, -7, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 630, 76, 287, 83, -98, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 721, -9, 0, -127, 0, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 600, -20, -95, -72, -247, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 660, -42, -216, 6, -198, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 8, -26, -4, 12, 176, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 201, -4, 176,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimRollF_joint11[46] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 15, 139, -10, -209, 6,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 55, 0, -34, 0, 52,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -9, 0, 5, 0, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -221, -9, 139, 5, -209, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -221, 139, -209,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimRollF_joint12[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2052, 457, 1056, -108, 1674, 838,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2510, 264, 947, -50, 2512, 474,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2580, 22, 956, 2, 2623, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2555, -35, 952, -4, 2583, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2510, -189, 947, -160, 2512, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2176, -175, 631, -176, 2145, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2159, 60, 595, -123, 2102, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2296, 118, 385, -173, 2241, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2396, 244, 248, -99, 2324, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2784, 223, 186, -20, 2656, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2842, 54, 206, 21, 2707, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 3289, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 451, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 3318, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3403, 80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 3774, 49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3340, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 3435, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 456, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 454, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3809, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3774, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3426, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3378, -81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3745, -70, 491, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3633, -1, 574, -3, 3250, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3742, 13, 484, -11, 3377, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3660, -81, 551, 67, 3282, -95,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimRollF_joint13[74] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -811, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 401,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -686, -401,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -124,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTMarioAnimRollF_joint14[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 625, -25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 625,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 31), 625,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimRollF_joint16[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1756, 37, 148, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1756, -54, -804, 46, 148, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1373, -7, 732, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -476,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 1608, 11, -804, -16, 0, -36,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1608, -804, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1608, -804, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTMarioAnimRollF_joint17[228] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1743, 154, -1377, -456, 1653, -1046,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1589, 83, -1833, -237, 607, -522,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1575, 6, -1853, -9, 608, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1576, 31, -1777, 74, 594, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1525, 39, -1684, 92, 569, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1498, -37, -1591, 58, 602, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1599, 12, -1568, -121, 809, 477,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1306, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1834, -164, 1556, 445,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1897, -38, 1700, 82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1872, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1275, 6, 1722, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1294, -40, 1737, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1781, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1356, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1585, -401, -1833, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2159, -409, -1758, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2404, -521, -1257, 445, 1813, 430,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3202, -713, -867, 91, 2642, 754,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3831, -265, -1074, -78, 3321, 309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3733, 153, -1025, 74, 3262, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3523, 138, -925, 86, 3059, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3455, 87, -852, 103, 3076, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3347, 51, -717, 124, 3098, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -540, 39, 3221, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3353, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3426, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -523, 3, 3247, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -493, 69, 3226, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3417, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -3398, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3424, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3435, 15, -400, 102, 3237, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3392, 41, -288, 84, 3251, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3352, 40, -230, 57, 3262, 10,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimRollF_joint19[102] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, 548,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 949, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 949, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 949, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1015, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1131, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1084, -512,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 107, -542,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -49,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 674, 473,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 955, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 838, -265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 489, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 528, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 511, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 535, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 508, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 444, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -43,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimRollF_joint21[200] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -212, -2, -11, 0, -156, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -156, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 32, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -224, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -206, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -214, -31, -156, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 112, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -270, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -301, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -224, 127,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 124, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 54, 57, 154, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 146, 43, 5, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 113, -1, 141, -13, 25, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 193, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 124, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 154, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 147, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -13, -81, 190, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 73, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -15, 6, 198, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 4, -44, 362, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -89, -12, 406, -47, 19, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 118, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -20, 16, 266, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -55, -98, 166, -111,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -161, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -384, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -453, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -475, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -195, -17, 133, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -161, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 56, -77,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -472, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -326, 77,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -132, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -32, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -37, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -249, 57, -121, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, 37, -11, 20, -156, -34,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimRollF_joint22[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, 399, 187, -457, 35, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 50, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 599, 199, -270, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 599, 0, -274, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 599, 0, -270, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 599, -41, -274, 165, 51, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 516, -179, 61, 175, -22, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 240, -136, 77, -44, 364, 340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 243, -2, -27, -92, 658, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 234, -4, -106, -43, 679, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 236, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -116, -1, 667, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -117, 32, 659, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 259, 13, -50, 58, 525, -111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 160, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1, 43, 435, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 240, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 117, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 72, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -109, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 134, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 39, 10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -138, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -109, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 53, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 178, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 236, -7, -95, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 202, -18, 2, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 21, 187, -15, 35, 33,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimRollF_joint24[82] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, -431,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -219,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 221,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 449,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -224,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 269, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 435, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 729, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 766, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 900, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 911, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 806, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 673, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 521, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -82,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTMarioAnimRollF_joint25[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -255, -1514, 0, 1395, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1397, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1514, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1442, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1450, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1443, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1395, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1671, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1391, 55, -1539, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1653, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1553, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1530, -87, 1834, 104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1786, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1377, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1341, -36, -1641, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1265, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1491, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1719, -69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1350, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1285, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1617, 39,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1486, 3, 1316, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1518, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1189, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1656, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1726, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1528, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1516, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1197, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1275, 63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1713, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1702, -7, 1349, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1697, -4, -1514, 1, 1395, 45,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
