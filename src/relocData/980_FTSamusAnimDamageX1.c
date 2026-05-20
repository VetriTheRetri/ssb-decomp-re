/* AnimJoint data for relocData file 980 (FTSamusAnimDamageX1) */
/* 1872 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimDamageX1_joint1[40];
extern u16 dFTSamusAnimDamageX1_joint2[38];
extern u16 dFTSamusAnimDamageX1_joint4[78];
extern u16 dFTSamusAnimDamageX1_joint5[84];
extern u16 dFTSamusAnimDamageX1_joint6[32];
extern u16 dFTSamusAnimDamageX1_joint7[44];
extern u16 dFTSamusAnimDamageX1_joint8[10];
extern u16 dFTSamusAnimDamageX1_joint9[24];
extern u16 dFTSamusAnimDamageX1_joint11[46];
extern u16 dFTSamusAnimDamageX1_joint12[78];
extern u16 dFTSamusAnimDamageX1_joint14[36];
extern u16 dFTSamusAnimDamageX1_joint15[62];
extern u16 dFTSamusAnimDamageX1_joint17[30];
extern u16 dFTSamusAnimDamageX1_joint19[68];
extern u16 dFTSamusAnimDamageX1_joint20[90];
extern u16 dFTSamusAnimDamageX1_joint22[40];
extern u16 dFTSamusAnimDamageX1_joint23[90];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimDamageX1_joints[] = {
	(AObjEvent32 *)dFTSamusAnimDamageX1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimDamageX1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimDamageX1_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimDamageX1_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimDamageX1_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimDamageX1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimDamageX1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimDamageX1_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTSamusAnimDamageX1_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimDamageX1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimDamageX1_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimDamageX1_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimDamageX1_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimDamageX1_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimDamageX1_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimDamageX1_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimDamageX1_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimDamageX1_joint1[40] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1433, -912, -468, -3863,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), -35,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 103, 1372, -965,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 103, 1266, -912,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 103, 1248, -742,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 1600, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimDamageX1_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 249, 100, 78, -18, 3, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 300, -52, -56, -18, 123, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -139, -33, -56, 6, 123, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimDamageX1_joint4[78] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -143, 116, 260, -101, -180, -96, 96, 0, -13, -102, -54, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 350, 59, -304, -68, -289, -13, 0, -126, -38, 0, 45, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 350, -14, -304, 38, -289, 30, -33, -28, -12, 16, 36, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 233, -128, 9, 111, -43, 106,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -26, 99, -23, 35, 80, -107,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimDamageX1_joint5[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1132, -56, -1722, -99, 1377, -389,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1742, 190, 661, -302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1188, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -763, 284,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -996, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1440, 214, 382, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1227, 37, 971, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1091, -382, -1172, 8, 1232, 453,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1369, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1762, -313, 1878, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1719, 152, 1690, -195,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1258, 162, 1315, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1351, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1454, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1132, 125, -1722, -268, 1377, 61,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimDamageX1_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, 272,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -407, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -716, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1159, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1082, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -888, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 149,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimDamageX1_joint7[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -158, -243, -69, -3, 75, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -25, 7, 27, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -518, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -313, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 365, 223, -10, 5, 11, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 701, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimDamageX1_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimDamageX1_joint9[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 480, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -402, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 30, 92,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimDamageX1_joint11[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 32, 0, 11, 0, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 98, 23, 33, 45, -167, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 107, -15, 211, -5, -130, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -16, 0, -33, 0, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimDamageX1_joint12[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, -387, -128, 620, -215, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -329, 68, 491, 28, -370, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 195, 250, -71, -228, -1, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 170, -33, 33, 59, -89, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 128, -38, 47, 4, -11, 85,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -94, -85, 107, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 67, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -80, -113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -193, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -182, 23, 104, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -47, 120, -33, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 105, -128, -95, -215, -22,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimDamageX1_joint14[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -152,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -747, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -920, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -685, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -678, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -566, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -590, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimDamageX1_joint15[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, 20, -27, 4, -389, -242,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 53, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 70, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -763, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -726, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -508, -32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 57, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 23, -40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -552, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -456, 45,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 111, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, -24, -27, -50, -389, 66,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimDamageX1_joint17[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, -474,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -239,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 266, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 538, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 545, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -66,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTSamusAnimDamageX1_joint19[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, -18, -28, 58, -41, 512,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -43, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 29, -31, 470, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -92, -109, 442, -107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -118, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 254, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 244, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 40, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -144, -108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -109, 58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -67, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -113, -4, -91, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 37, -28, 62, -41, 67,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimDamageX1_joint20[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -53, 160, 29, -49, -618,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 172, 69, 190, 129, -667, -378,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 364, 27, 418, 165, -806, -118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 572, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -834, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 106, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5, -97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -147, -70,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 618, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -230, 147, 711, -17, -759, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 148, 165, 582, -189, -260, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 101, 15, 332, -172, -189, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 179, 62, 238, -85, -132, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 46, 160, -77, -49, 82,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimDamageX1_joint22[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 216,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 658, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 588, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 724, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 785, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 861, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 753, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 619, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -177,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimDamageX1_joint23[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1750, -143, -1802, -100, 1394, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1607, -175, -1902, 54, 1456, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1399, -61, -1694, 119, 1621, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1486, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1681, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1484, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1522, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1658, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1411, -75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1304, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1672, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1736, -139,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1736, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1547, 83,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1919, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1872, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1750, 203, -1802, 69, 1394, 90,
	ftAnimEnd(),
	0x0000, 0x0000,
};
