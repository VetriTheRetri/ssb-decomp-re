/* AnimJoint data for relocData file 981 (FTSamusAnimDamageX2) */
/* 2192 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimDamageX2_joint1[40];
extern u16 dFTSamusAnimDamageX2_joint2[38];
extern u16 dFTSamusAnimDamageX2_joint4[86];
extern u16 dFTSamusAnimDamageX2_joint5[106];
extern u16 dFTSamusAnimDamageX2_joint6[52];
extern u16 dFTSamusAnimDamageX2_joint7[44];
extern u16 dFTSamusAnimDamageX2_joint8[10];
extern u16 dFTSamusAnimDamageX2_joint9[24];
extern u16 dFTSamusAnimDamageX2_joint11[46];
extern u16 dFTSamusAnimDamageX2_joint12[104];
extern u16 dFTSamusAnimDamageX2_joint14[48];
extern u16 dFTSamusAnimDamageX2_joint15[92];
extern u16 dFTSamusAnimDamageX2_joint17[40];
extern u16 dFTSamusAnimDamageX2_joint19[78];
extern u16 dFTSamusAnimDamageX2_joint20[94];
extern u16 dFTSamusAnimDamageX2_joint22[40];
extern u16 dFTSamusAnimDamageX2_joint23[108];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimDamageX2_joints[] = {
	(u32)dFTSamusAnimDamageX2_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimDamageX2_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimDamageX2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimDamageX2_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimDamageX2_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimDamageX2_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimDamageX2_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimDamageX2_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimDamageX2_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimDamageX2_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimDamageX2_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimDamageX2_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimDamageX2_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimDamageX2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimDamageX2_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimDamageX2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimDamageX2_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimDamageX2_joint1[40] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1433, -912, -468, -3863,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), -35,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 103, 1372, -965,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 103, 1266, -912,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 103, 1248, -742,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 1600, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimDamageX2_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 249, 100, 78, -18, 3, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 300, -20, -56, -7, 123, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -139, -14, -56, 2, 123, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimDamageX2_joint4[86] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -240, 101, -515, 96, 97, 50, 2, 92, 17, -37, -106, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 305, 43, 290, 47, 151, 12, 34, 13, -14, -12, 50, 62,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 34, -2, -14, 6, 50, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 580, 384, 328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 305, -115, 290, -125, 151, -123,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 233, -101, 9, -96, -43, -50,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 29, -92, 0, 37, 77, -134,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimDamageX2_joint5[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 476, -912, 114, -714, -231, 474,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -435, -316, -600, -45, 243, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -157, 106, 22, 312, 16, -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 15, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -223, -27, 24, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -211, 12, 17, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 203, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -167, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 22, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 124, -5,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 227, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 252, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 103, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -147, 30, -106, -144,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -150, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -185, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -293, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 350, 111, -153, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 476, 125, 114, 268, -231, 61,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimDamageX2_joint6[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, -379,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1118, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -959, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -570, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -446, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -491, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -791, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -913, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -893, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -888, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 149,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimDamageX2_joint7[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -158, -76, -69, -1, 75, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -25, 3, 27, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -518, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -313, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 365, 203, -10, 5, 11, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 701, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimDamageX2_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimDamageX2_joint9[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 480, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -402, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), 30, 92,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimDamageX2_joint11[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 72, 0, 186, 0, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 217, 7, 559, 20, 21, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 123, -12, 334, -31, -97, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -17, 0, -47, 0, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimDamageX2_joint12[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, -568, -128, 86, -215, -580,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 27, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -510, -603, -795, -562,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1149, -238, -1339, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -987, 86, -72, -49, -649, 372,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -44, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -976, 12, -595, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -729, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -389, 28,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -33, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 98, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -710, 45, 116, 98,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -484, 242, 357, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -347, 97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -92, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -152, 223, 89, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -38, 105, -53, -109, -165, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 96, -128, -75, -215, -49,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimDamageX2_joint14[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, 238,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -356, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -692, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -666, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -807, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -824, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -995, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -944, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -677, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 82,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimDamageX2_joint15[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, -144, -27, 3, -389, -242,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -760, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 49, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -56, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -408, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -399, 2, -730, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -379, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -403, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -423, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 48, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), 40, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 35, -63, -364, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -119, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -468, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -417, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -68, 163,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -126, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -83, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 155, -27, 55, -389, 78,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimDamageX2_joint17[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, -474,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 339, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 465, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 519, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimDamageX2_joint19[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, 116, -28, 154, -41, 531,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 137, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 40, 178, 489, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 281, 30, 466, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 102, -91, 261, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 99, -3, 120, -17, 244, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -3, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -44, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -2, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -19, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -250, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 25, 28, -273, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -11, -64, -128, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, -64, -28, 15, -41, 86,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimDamageX2_joint20[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -237, 160, -111, -49, -640,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -285, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 90, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -690, -403,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -855, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -831, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -293, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -279, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 94, 5, -815, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 173, 0, -533, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 172, 39, -503, 68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -213, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -246, 52, 252, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 29, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 208, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 138, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -160, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 197, 160, 22, -49, 110,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimDamageX2_joint22[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 216,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 658, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 600, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 724, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 743, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 952, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 956, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 620, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -177,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimDamageX2_joint23[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1466, -125, -1802, 61, 1394, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1688, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1591, -4, 1437, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1475, 73, 1658, 91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1406, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1609, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1597, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1406, -11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1400, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1339, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1683, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1688, 7,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1395, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1296, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1664, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1894, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1387, -128,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1652, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1314, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1345, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1466, 186, -1802, 92, 1394, 48,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
