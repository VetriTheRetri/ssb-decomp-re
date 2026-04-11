/* AnimJoint data for relocData file 560 (FTMarioAnimRollB) */
/* 3040 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimRollB_joint1[50];
extern u16 dFTMarioAnimRollB_joint2[116];
extern u16 dFTMarioAnimRollB_joint3[168];
extern u16 dFTMarioAnimRollB_joint5[64];
extern u16 dFTMarioAnimRollB_joint6[136];
extern u16 dFTMarioAnimRollB_joint7[26];
extern u16 dFTMarioAnimRollB_joint8[16];
extern u16 dFTMarioAnimRollB_joint9[72];
extern u16 dFTMarioAnimRollB_joint11[50];
extern u16 dFTMarioAnimRollB_joint12[134];
extern u16 dFTMarioAnimRollB_joint13[26];
extern u16 dFTMarioAnimRollB_joint14[12];
extern u16 dFTMarioAnimRollB_joint16[74];
extern u16 dFTMarioAnimRollB_joint17[108];
extern u16 dFTMarioAnimRollB_joint19[52];
extern u16 dFTMarioAnimRollB_joint21[90];
extern u16 dFTMarioAnimRollB_joint22[110];
extern u16 dFTMarioAnimRollB_joint24[166];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimRollB_joints[] = {
	(u32)dFTMarioAnimRollB_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimRollB_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimRollB_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimRollB_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimRollB_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimRollB_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimRollB_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimRollB_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimRollB_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimRollB_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimRollB_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimRollB_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimRollB_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimRollB_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimRollB_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimRollB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimRollB_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimRollB_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF02C0, /* [24] END */
};

/* Joint 1 */
u16 dFTMarioAnimRollB_joint1[50] = {
	ftAnimSetValAfter(FT_ANIM_TRAY), 0,
	ftAnimSetValRate(FT_ANIM_TRAX), 0, -9,
	ftAnimSetValBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 1), 0, -10,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 1), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 1), -1002, -2404,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), -383,
	ftAnimSetValRateT(FT_ANIM_TRAX, 13), 0, 127,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 9), -3006, -1589,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), -3600, -316,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 11), 0, -3600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 0, -3600,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimRollB_joint2[116] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 540,
	ftAnimSetValRate(FT_ANIM_ROTY), 223, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 0, -66,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -579,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -240, -2002,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -846,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -6433, -117,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 21), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), -144, -1019,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -1019,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), -254, -753,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), -753, -2002,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), -333, 1019, -360, 2057,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 1019, 2057,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 0, 1206, 0, 3249,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 1206, 3249,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), -31, -213, 51, 325,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 325,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -213,
	ftAnimSetValRateT(FT_ANIM_TRAX, 12), 0, 12,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 9), -9, -35,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -35,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 0, 14,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 12, 14,
	ftAnimSetValT(FT_ANIM_ROTX, 12), -6433,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 12), 0, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValBlockT(FT_ANIM_ROTY, 6), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 223,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTMarioAnimRollB_joint3[168] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, 4, -790, 25, -95, 2,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 0, 21, 0, 233, 0, 28, 0, 0, -157, -373,
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
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), -7, -99, -12, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -71, -6, -790, -68, -95, -8, 0, 0, 0, -51, 0, -22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimRollB_joint5[64] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 10, 258, -5, 110, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 446, 70, 0, -76, 0, -32,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 446, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 48,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 678, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 678, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 446, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -89, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 107, 37, 0, 32, 0, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 208, 33, 258, 21, 110, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTMarioAnimRollB_joint6[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1475, -188, -1308, 1146, 1336, 705,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1663, -99, -161, 585, 2042, 425,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1674, -64, -137, 17, 2186, 141,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2323, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -2151, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2206, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -2347, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2323, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 2324, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2347, 16, -130, -44, 2324, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2132, 179, 1875, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -220, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -444, -112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -397, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1954, 81, 1343, -332,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1215, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1969, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1887, 97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1304, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -400, -2, 1222, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1210, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -401, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -396, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1146, -85, -607, -456, 1182, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, -328, -1308, -700, 1336, 153,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimRollB_joint7[26] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, 182,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 86,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 28), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, -182,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimRollB_joint8[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -625,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -625, 28,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTMarioAnimRollB_joint9[72] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, -9, -4, 0, 176, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -50, 0, 1, 0, -44,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 55,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 331, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 331, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, -14,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -178, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -178, 47, 0, 0, 0, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 201, 8, -4, 0, 176, 7,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimRollB_joint11[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 12, 139, -9, -209, 5,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 55, 0, -34, 0, 52,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -27, 0, 17, 0, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -221, -8, 139, 5, -209, -8,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimRollB_joint12[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 443, -388, 551, 895, 65, 367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 54, -202, 1447, 461, 433, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 38, 64, 1474, 17, 598, 141,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 716, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 16), 1482,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 284, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 371, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 713, 20,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 713,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 716, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1482, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1392, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 735, 19, 715, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 558, -305, 267, -448,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1164, -112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1211, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 142, -266, -260, -332,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 28, 7, -380, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1209, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1212, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 37, 7, -367, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 24, 28, -397, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 98, 209, 1106, -330, -317, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 443, 345, 551, -554, 65, 383,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimRollB_joint13[26] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 811,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 405,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 28), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -811,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTMarioAnimRollB_joint14[12] = {
	ftAnimSetVal(FT_ANIM_ROTX), 625,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 625,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 31), 625,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimRollB_joint16[74] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 71, 0, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 3529, 219, -782, 40, -2048, -235,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -401, 30,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 3799, -2355,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 26, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 3948, 58, -290, -5, -2498, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 4441, 92, -464, -97, -2416, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4225, -116, -583, -105, -2329, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 4092, -211, -782, -32, -2048, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 2743, -310, -812, -2, -484, 256,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1608, -804, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTMarioAnimRollB_joint17[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1743, 73, -1377, 129, 1653, -582,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1212, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1791, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1071, -289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1074, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 1397, 22,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1214, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1321, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1809, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -2083, -14,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1420, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1597, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1355, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1517, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2087, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2089, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1518, -1, 1597, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1517, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1587, 28,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2087, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1864, 171, -1404, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1743, 121, -1377, 27, 1653, 65,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimRollB_joint19[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, 575,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 976, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 976, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 556, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 508, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 210, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -105,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 281, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, 119,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimRollB_joint21[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -212, 55, -11, -34, -156, -180,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -85, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -36, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -336, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -336, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -288, 27,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -82, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -48, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -35, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 3, -14,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -255, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -87, 378,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 501, 431,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 589, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 412, -163,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2, -147,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -55, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -183, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, -28, -11, -15, -156, -153,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimRollB_joint22[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, -137, 187, 175, 35, -572,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 362, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 133, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -536, -286,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -536,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -221, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 362, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 278, -24,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 150, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 442, 40,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -11, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 244, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 73, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 473, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 483, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 72, 0, -11, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 73, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -21, 23,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 481, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 299, -140, 172, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, -98, 187, 14, 35, 56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimRollB_joint24[166] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 538,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 976, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 976, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 556, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 508, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 208, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -104,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 295, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, 142,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0059, 0x000B, 0x0C33, 0x0046, 0xFF2C, 0xFF8D, 0x2805, 0x0008, 0x0C6C, 0xFFFE, 0x2803, 0x0013, 0x0049, 0x0000, 0x2009, 0x0007, 0xFEBC, 0x0000, 0x2009, 0x0001, 0xFEBB, 0x0000, 0x2809, 0x000B, 0xFEFF, 0x001F, 0x2005, 0x0001, 0x0C6A, 0xFFFE, 0x2805, 0x000C, 0x0BD8, 0xFFD2, 0x0801, 0x000A, 0x200B, 0x0001, 0x0048, 0xFFED, 0xFF25, 0x006E, 0x200B, 0x0001, 0x0022, 0xFF7D, 0xFFDD, 0x0173, 0x200F, 0x0001, 0xFF42, 0xFF71, 0x0BBB, 0x0015, 0x020A, 0x0195, 0x2809, 0x0004, 0x0253, 0xFF64, 0x2803, 0x0006, 0xFFE8, 0x001E, 0x2005, 0x0003, 0x0C19, 0xFFFF, 0x2005, 0x0001, 0x0C14, 0x0000, 0x2805, 0x0005, 0x0C53, 0x0024, 0x2009, 0x0001, 0x01A5, 0xFF5E, 0x2809, 0x0002, 0x00B1, 0xFFC2, 0x0801, 0x0001, 0x2003, 0x0001, 0xFFFC, 0x000D, 0x2803, 0x0002, 0x004D, 0x0032, 0x2009, 0x0001, 0x0092, 0xFF98, 0x2009, 0x0001, 0xFFE1, 0xFF4A, 0x200F, 0x0001, 0x0068, 0x001A, 0x0C7C, 0x0029, 0xFF26, 0xFF46, 0x0000,
};
