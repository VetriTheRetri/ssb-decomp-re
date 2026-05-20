/* AnimJoint data for relocData file 1063 (FTSamusAnimJab1) */
/* 2016 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimJab1_joint1[50];
extern u16 dFTSamusAnimJab1_joint2[18];
extern u16 dFTSamusAnimJab1_joint4[84];
extern u16 dFTSamusAnimJab1_joint5[126];
extern u16 dFTSamusAnimJab1_joint6[56];
extern u16 dFTSamusAnimJab1_joint7[46];
extern u16 dFTSamusAnimJab1_joint8[10];
extern u16 dFTSamusAnimJab1_joint11[8];
extern u16 dFTSamusAnimJab1_joint12[106];
extern u16 dFTSamusAnimJab1_joint14[48];
extern u16 dFTSamusAnimJab1_joint15[74];
extern u16 dFTSamusAnimJab1_joint17[48];
extern u16 dFTSamusAnimJab1_joint19[70];
extern u16 dFTSamusAnimJab1_joint20[82];
extern u16 dFTSamusAnimJab1_joint22[48];
extern u16 dFTSamusAnimJab1_joint23[88];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimJab1_joints[] = {
	(AObjEvent32 *)dFTSamusAnimJab1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimJab1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimJab1_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimJab1_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimJab1_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimJab1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimJab1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimJab1_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimJab1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimJab1_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimJab1_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimJab1_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimJab1_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimJab1_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimJab1_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimJab1_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimJab1_joint1[50] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, -14, 0, 13,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), 15, 145,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 1374, -2,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 1201, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 781, -6,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 784, -7,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), 80, -163,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 1374, 8,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 10), 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 9), 1600,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimJab1_joint2[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -370, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -218, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 9), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimJab1_joint4[84] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 40, 0, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 58, 131, 268, -72, 50, -35,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 40, 0, 15,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 525, 116, -290, -139, -142, -48,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 15, -494, -46, -485, 100, 398,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -82, -13, -121, 40, 114, -89,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 525, -66, -290, 16, -142, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -7, -15,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 16), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 14,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimJab1_joint5[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2087, 36, -1764, -12, -1828, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1883, -389,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1739, 43, -1923, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1690, 547, -2060, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1345, -64, -643, 492, -1514, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1753, 443, -704, 73, -2060, -585,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2232, 299, -497, 148, -2685, -400,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2351, 148, -407, 57, -2861, -176,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3087, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -363, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2528, 182,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3044, 175,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3009, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -3491, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3229, 94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3315, 95,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -365, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 99, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3425, 102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 3682, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3544, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -3492, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3693, 10, 114, 14, -3448, 44,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimJab1_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -707, -93,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -800, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1139, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1347, 567,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 673,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -618, -472,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -944, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1286, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1312, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -858, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -788, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -706, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -738, -32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimJab1_joint7[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -272, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 357, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -178, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -11, 0, -20, 0, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -271, 43,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -160, 91,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 701, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimJab1_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 22),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimJab1_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 22),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimJab1_joint12[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 38, -122, -89, 138, -194, 86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -519, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 181, 63, -181, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 175, 90, -362, -124,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -437, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -706, -70, 361, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -359, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 307, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 212, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -243, 157,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -248, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -244, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 23, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 81, -116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -71, -12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -236, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -169, -37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -86, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -130, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 41, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 17, -128, 2, -215, -45,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimJab1_joint14[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -631, -345,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1201, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -933, 236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -728, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -834, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -779, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -635, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -811, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -823, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -667, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 71,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimJab1_joint15[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, -64, -27, -57, -389, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -50, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -703, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -381, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -382, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -33, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -9, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -41, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -512, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -66, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 78, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -513, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -396, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 9, -27, 6, -389, 6,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimJab1_joint17[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 161,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 778, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 895, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 770, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 814, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 961, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 881, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 623, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 572, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 492, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimJab1_joint19[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, 31, -28, 56, -42, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 17, -33, 65, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -143, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -89, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -194, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -26, -30, 22, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -52, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 17, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 12, -2, -179, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -24, -7, -48, 11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -62, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -72, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, -3, -28, -4, -42, 6,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimJab1_joint20[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -123, 160, 10, -49, -115,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -104, -24, 157, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -287, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -404, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -80, -21, 339, 96, 90, 217,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 210, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -144, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 30, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -182, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 176, -21, -242, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 163, -4, -58, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -96, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 103, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 149, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 216, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 10, 160, -2, -49, 8,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimJab1_joint22[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 204,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 837, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 924, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 444, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 489, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 775, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 736, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 532, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 488, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 455, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimJab1_joint23[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 142, 11, 193, 34, -213, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -239, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 80, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 119, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 130, 63, -199, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -336, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 121, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 19, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 99, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 193, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 14, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 130, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -333, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -219, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 126, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 139, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, 3, 193, 0, -213, 5,
	ftAnimEnd(),
};
