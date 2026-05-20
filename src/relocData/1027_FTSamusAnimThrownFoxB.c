/* AnimJoint data for relocData file 1027 (FTSamusAnimThrownFoxB) */
/* 960 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimThrownFoxB_joint2[26];
extern u16 dFTSamusAnimThrownFoxB_joint3[14];
extern u16 dFTSamusAnimThrownFoxB_joint5[30];
extern u16 dFTSamusAnimThrownFoxB_joint6[42];
extern u16 dFTSamusAnimThrownFoxB_joint7[16];
extern u16 dFTSamusAnimThrownFoxB_joint8[10];
extern u16 dFTSamusAnimThrownFoxB_joint9[10];
extern u16 dFTSamusAnimThrownFoxB_joint12[12];
extern u16 dFTSamusAnimThrownFoxB_joint13[54];
extern u16 dFTSamusAnimThrownFoxB_joint15[24];
extern u16 dFTSamusAnimThrownFoxB_joint16[38];
extern u16 dFTSamusAnimThrownFoxB_joint18[32];
extern u16 dFTSamusAnimThrownFoxB_joint20[42];
extern u16 dFTSamusAnimThrownFoxB_joint21[34];
extern u16 dFTSamusAnimThrownFoxB_joint23[24];
extern u16 dFTSamusAnimThrownFoxB_joint24[24];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTSamusAnimThrownFoxB_joints[] = {
	NULL, /* [0] NULL */
	(AObjEvent32 *)dFTSamusAnimThrownFoxB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimThrownFoxB_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTSamusAnimThrownFoxB_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTSamusAnimThrownFoxB_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimThrownFoxB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimThrownFoxB_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimThrownFoxB_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTSamusAnimThrownFoxB_joint12, /* [9] joint 12 */
	NULL, /* [10] NULL */
	NULL, /* [11] NULL */
	(AObjEvent32 *)dFTSamusAnimThrownFoxB_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTSamusAnimThrownFoxB_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTSamusAnimThrownFoxB_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTSamusAnimThrownFoxB_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTSamusAnimThrownFoxB_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTSamusAnimThrownFoxB_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTSamusAnimThrownFoxB_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTSamusAnimThrownFoxB_joint24, /* [23] joint 24 */
};

/* Joint 2 */
u16 dFTSamusAnimThrownFoxB_joint2[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -290, -232,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, -102, 321, -344, -68,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, -14, 61, -291, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, -49, -338,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTSamusAnimThrownFoxB_joint3[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 116, -20, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 61, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimThrownFoxB_joint5[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -201, 45, 0, -1, 3, -10, -35, 69,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 348, 55, -1, -1, -51, -40, 85, 95,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 367, -1, -48, 87,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTSamusAnimThrownFoxB_joint6[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1583, -200, -1148, -23, -1217, 154,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1145, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1323, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1840, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1790, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1823, -38,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1146, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1851, -28, -1317, 6, -1146, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimThrownFoxB_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1082, -24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -636, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -607, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimThrownFoxB_joint8[10] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -491, -52,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimThrownFoxB_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimThrownFoxB_joint12[12] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -148, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 80, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTSamusAnimThrownFoxB_joint13[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1665, 58, 1521, 2, 2048, 131,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 1755, -21, 1380, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 2135, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2001, -129,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1929, 165,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1743, 28, 1355, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1915, 71, 1435, 63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2138, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1955, 40, 1487, 52, 2225, 86,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimThrownFoxB_joint15[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -242, -243,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -935, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -900, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -914, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -819, 95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimThrownFoxB_joint16[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -17, -24, -73, -28, -77, -99,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 0, -15, -62, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -655, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -654, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -642, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -413, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -26, -26, -67, -4, -173, 239,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimThrownFoxB_joint18[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 604, 82,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 717, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 631, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 580, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 757, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 840, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 666, -174,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimThrownFoxB_joint20[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -90, -18, -28, -2, -41, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -6, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 3, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -396, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -417, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -140, 206,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 16, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 24, 8, 31, 27, 81, 222,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimThrownFoxB_joint21[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, -12, 46, -7, -257, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -35, -3, 21, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -199, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -200, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -307, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -39, -3, 20, -1, -353, -46,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimThrownFoxB_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 477, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 169, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 169, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 544, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 639, 95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTSamusAnimThrownFoxB_joint24[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 15, -7, 193, -1, -213, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 8, -19, 138, -8, -11, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -14, -23, 129, -9, 45, 57,
	ftAnimEnd(),
};
