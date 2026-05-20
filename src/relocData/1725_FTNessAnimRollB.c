/* AnimJoint data for relocData file 1725 (FTNessAnimRollB) */
/* 3552 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimRollB_joint1[44];
extern u16 dFTNessAnimRollB_joint2[56];
extern u16 dFTNessAnimRollB_joint3[168];
extern u16 dFTNessAnimRollB_joint5[62];
extern u16 dFTNessAnimRollB_joint6[140];
extern u16 dFTNessAnimRollB_joint7[50];
extern u16 dFTNessAnimRollB_joint8[24];
extern u16 dFTNessAnimRollB_joint9[94];
extern u16 dFTNessAnimRollB_joint11[62];
extern u16 dFTNessAnimRollB_joint12[168];
extern u16 dFTNessAnimRollB_joint13[60];
extern u16 dFTNessAnimRollB_joint14[80];
extern u16 dFTNessAnimRollB_joint16[10];
extern u16 dFTNessAnimRollB_joint17[132];
extern u16 dFTNessAnimRollB_joint19[60];
extern u16 dFTNessAnimRollB_joint20[104];
extern u16 dFTNessAnimRollB_joint22[30];
extern u16 dFTNessAnimRollB_joint23[130];
extern u16 dFTNessAnimRollB_joint25[64];
extern u16 dFTNessAnimRollB_joint26[148];
extern u16 dFTNessAnimRollB_joint27[36];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTNessAnimRollB_joints[] = {
	(AObjEvent32 *)dFTNessAnimRollB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimRollB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimRollB_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTNessAnimRollB_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTNessAnimRollB_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimRollB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimRollB_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimRollB_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTNessAnimRollB_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTNessAnimRollB_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimRollB_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimRollB_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTNessAnimRollB_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTNessAnimRollB_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTNessAnimRollB_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTNessAnimRollB_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTNessAnimRollB_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTNessAnimRollB_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTNessAnimRollB_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTNessAnimRollB_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTNessAnimRollB_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTNessAnimRollB_joint1[44] = {
	ftAnimSetValAfter(FT_ANIM_TRAY), 0,
	ftAnimSetValRate(FT_ANIM_TRAX), 0, -9,
	ftAnimSetValBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 1), 0, -10,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 1), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -2117,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -1308,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 14), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), -3006, -2045,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), -3600, -316,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 12), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 11), -3600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), -3600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimRollB_joint2[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY), 0, 537,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAZ), -16, 132, -28, 239,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 0, 0, 540, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 1), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 540, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -846,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 17), -6433, -117, 0, 0, 540, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), -360,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 14), 0, 102,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), -16, 537, -28,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 12), -6433,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTNessAnimRollB_joint3[168] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -31, -360, 320, 8, -8,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 0, -9, 0, 120, 0, -2, 0, 0, -157, -373,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 2), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 2), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 2), 0, 0, 0, -157,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 283, -655,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, -45, 2046, -327, -1611,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 248, 970, -320, -274,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 147, -317, -382, -202,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 154, 70, -380, -35,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 182, 492, -400, 221,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 349, 164, -292, 393,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 231, -246, -282, 63,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0, 129, -232, -235, 284,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 0, 357, 0, 336,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 0, 0, 31, 24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 342, 724,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 360, -270,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, 0, 0, 0, 74, -362,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 6), 0, 0, 31,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), -7, -45, 1, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 28, 16, -360, -230, 8, 3, 0, 0, 0, -51, 0, -22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimRollB_joint5[62] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 180,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 446, 148, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 446,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 48,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 17), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 678, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 678, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 446, -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 12), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -89, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 107, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, -66,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimRollB_joint6[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2806, 355, -261, -1185, -2801, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -2754, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3162, 199, -1447, -594,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3205, -1449,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1463, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 2939, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2878, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 2542, -36,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1492, -69, -2732, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1849, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2435, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2504, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2501, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1885, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1854, 315, -2499, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2668, 150, -1253, 321, -3011, -492,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2802, 87, -1212, 20, -3485, -301,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3613, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2842, 41, -1212, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 3107, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1136, 62,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3612, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -3650, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3206, 232, -3702, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3573, 604, -1050, -105, -3981, -353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4415, 842, -1347, -296, -4409, -428,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimRollB_joint7[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, 473,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 236,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -655, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -464,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimRollB_joint8[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -625, -208,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -625,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), -625, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 0, 28,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTNessAnimRollB_joint9[94] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 10, 364, -284, -32, 36,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0, 1, 0, -44, 0, 0, 288, -31, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 0, 288, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 55,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 0, 0, 288, 3, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 331, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 331, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, -14,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -178, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -178, 20, 0, 45, 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -10, 97, 364, 174, -32, -15,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimRollB_joint11[62] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 54, 144, -17, -47,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 0, 0, 54, -17,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 21), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 29), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 0, 0, 54, -14, -17, 4,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimRollB_joint12[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2024, 469, 1038, -876, -1727, 548,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1554, 227, 161, -439, -1179, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1570, 0, 159, 0, -1186, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1458, 105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 191, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1179, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1087, 82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1017, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1343, 93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1075, 25,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1018, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -972, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1053, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -900, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 204, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 56, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -84, -126, -915, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -287, 0, -843, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -870, -139, -260, 287, -917, -320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1180, -300, 287, 324, -1484, -480,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1471, -201, 387, 54, -1877, -260,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1585, 4, 394, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2010, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2001, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2035, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1582, 0, 396, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1601, -38, 425, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1661, -614, 465, -6, -2100, -362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2830, -985, 412, 52, -2759, -617,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3632, -802, 569, 157, -3336, -576,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimRollB_joint13[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 549,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 16), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -620, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -389, -279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -169,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTNessAnimRollB_joint14[80] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 54, 126,
	ftAnimSetValRate(FT_ANIM_ROTX), 90, -16,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 625, 178, 0, -18, 0, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -44, 0, -9,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 625,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -177, -44, -38, 13,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 277,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -313, -13, 92, 13,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), -31,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -313, 13, 92, -13,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), -31,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -177, 9, -38, 50,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), 277,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -225, 19, 548, 13,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 40,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 54, 126,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 8), 90,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimRollB_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimRollB_joint17[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -365, 304, -279, -80, -297, -238,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -391, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -61, 145, -536, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -75, -11, -533, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -334, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -367, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -394, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -304, 16,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -315, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -187, 31,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -384, -21, -286, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -175, 81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -478, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -147, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -8, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -90, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -92, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -10, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -479, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -481, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -88, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -91, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -478, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -392, 56, -108, -94, -43, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, 26, -279, -171, -297, -254,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimRollB_joint19[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 396, 580,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 976, 290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 976, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 786, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 760, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 556, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 508, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 413, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 210, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, 396,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTNessAnimRollB_joint20[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, -162, 12, -58, 26, -363,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -43, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -157, -74, -336, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -142, 11, -336, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -311, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -36, 4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -42, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -25, 4,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -288, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -255, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -19, 17, -87, 378,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 14, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 501, 431,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 775, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 730, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -32, 0, 589, -159,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -20, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 170, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 138, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 89, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 26, 12, -2, 26, -63,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimRollB_joint22[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -140, -43, 17, 5, 137, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -196, 2, 17, 0, 135, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -66, 0, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTNessAnimRollB_joint23[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -127, 190, 136, 226, -210, -325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 62, 110, 362, 121, -536, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 93, 0, 379, 0, -524, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -310, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 294, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 62, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 81, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 359, 26,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -289, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -74, 71,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 278, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 164, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 393, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 482, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 79, -43, -10, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -11, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 72, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 482, 0, 72, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 481, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 102, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -11, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -11, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 481, -252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -23, -304, -41, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, -103, 136, 34, -210, -169,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimRollB_joint25[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 407, 569,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 976, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 981, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 810, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 786, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 556, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 508, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 413, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 208, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 80, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, 326,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTNessAnimRollB_joint26[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 76, 24, 25, -48, -202, -125,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 100, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -31, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -328, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -328, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -299, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 95, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 73, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -33, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -101, -16,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -282, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -219, 110,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 72, -19, -120, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -213, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 34, -131, -35, 371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -190, -145, 522, 405,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -269, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -142, 46, 775, 140,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 752, -74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -131, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -218, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -10, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 656, -122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 207, -95,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -112, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -26, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3, 51, 146, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 92, 36, -48, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, -15, 25, 52, -202, -153,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTNessAnimRollB_joint27[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 56, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, -67, -32, -29, -123, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -78, 5, -58, 1, -228, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 56, 0, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
