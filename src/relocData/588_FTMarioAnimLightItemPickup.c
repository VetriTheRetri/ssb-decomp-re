/* AnimJoint data for relocData file 588 (FTMarioAnimLightItemPickup) */
/* 1328 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimLightItemPickup_joint1[52];
extern u16 dFTMarioAnimLightItemPickup_joint2[32];
extern u16 dFTMarioAnimLightItemPickup_joint4[36];
extern u16 dFTMarioAnimLightItemPickup_joint5[64];
extern u16 dFTMarioAnimLightItemPickup_joint6[36];
extern u16 dFTMarioAnimLightItemPickup_joint7[18];
extern u16 dFTMarioAnimLightItemPickup_joint8[36];
extern u16 dFTMarioAnimLightItemPickup_joint10[36];
extern u16 dFTMarioAnimLightItemPickup_joint11[42];
extern u16 dFTMarioAnimLightItemPickup_joint12[36];
extern u16 dFTMarioAnimLightItemPickup_joint13[16];
extern u16 dFTMarioAnimLightItemPickup_joint15[16];
extern u16 dFTMarioAnimLightItemPickup_joint16[54];
extern u16 dFTMarioAnimLightItemPickup_joint18[28];
extern u16 dFTMarioAnimLightItemPickup_joint20[24];
extern u16 dFTMarioAnimLightItemPickup_joint21[24];
extern u16 dFTMarioAnimLightItemPickup_joint23[28];
extern u16 dFTMarioAnimLightItemPickup_joint24[38];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimLightItemPickup_joints[] = {
	(u32)dFTMarioAnimLightItemPickup_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimLightItemPickup_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimLightItemPickup_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimLightItemPickup_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimLightItemPickup_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimLightItemPickup_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimLightItemPickup_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimLightItemPickup_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimLightItemPickup_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimLightItemPickup_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimLightItemPickup_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimLightItemPickup_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimLightItemPickup_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimLightItemPickup_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimLightItemPickup_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimLightItemPickup_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimLightItemPickup_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimLightItemPickup_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimLightItemPickup_joint1[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 223, 0,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 540, -214, 0, -37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX, 58), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 402, 0, 0, 406, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 223, -3, 0, 0, 0, 0, 540, 71, 0, 20,
	ftAnimSetValRateT(FT_ANIM_TRAX, 11), -1, 1,
	ftAnimSetValRateT(FT_ANIM_TRAY, 13), 575, -2,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 26), 78,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), 223, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimLightItemPickup_joint2[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, 1, -790, -5, -95, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValAfterT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 58), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -71, -1, -790, 4, -95, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -116, -657, -65,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimLightItemPickup_joint4[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 45, 258, -1, 110, 29,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValAfterT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 58), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1046, 118, 612,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 208, -28, 258, 1, 110, -18,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 177, 154, 47,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimLightItemPickup_joint5[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1475, -512, -1308, 207, 1336, 732,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2267, -96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -968, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2068, 505,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2346, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2181, 45, 2263, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1988, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1094, -64, 2274, -91,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1235, -88, 1480, -204,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1701, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1531, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, 56, -1308, -72, 1336, -144,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimLightItemPickup_joint6[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, -411,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -593, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -424, -291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -369, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 187,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimLightItemPickup_joint7[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 58), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimLightItemPickup_joint8[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, -12, -4, -14, 176, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValAfterT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 58), 0, 288, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 201, 7, -4, 8, 176, 2,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 239, -1, 63,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimLightItemPickup_joint10[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 17, 139, -12, -209, 7,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValAfterT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 58), 0, 54, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -221, -10, 139, 7, -209, -4,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -333, 239, -150,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimLightItemPickup_joint11[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1164, -74, 1056, 54, -1542, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1410, -137,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1585, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1502, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1535, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1273, 139,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1201, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1164, 108, 1056, -144, -1542, 42,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimLightItemPickup_joint12[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, -25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -844, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -735, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -667, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -817, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -881, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 70,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimLightItemPickup_joint13[16] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 625, 0,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 625, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimLightItemPickup_joint15[16] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2412, -1116, -421,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1608, -804, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimLightItemPickup_joint16[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1479, 156, -1374, 26, -1572, -245,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1737, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1347, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2007, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1979, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1618, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1693, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1507, -45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1349, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1363, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1473, -33, -1377, -14, -1563, 55,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimLightItemPickup_joint18[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 418, 298,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 890, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 866, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 481, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -80,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimLightItemPickup_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -213, -21, -67, 47, -193, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -217, 6, -63, -11, -221, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -211, 5, -67, -4, -190, 31,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimLightItemPickup_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, -68, 187, 35, 35, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 182, 21, 198, -12, 5, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 17, 187, -11, 35, 30,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimLightItemPickup_joint23[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 269,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 859, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 838, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 508, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -69,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimLightItemPickup_joint24[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, 38, -1514, -105, 1395, -158,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1702, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1701, 24, 1142, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1667, 40, 1182, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1531, 28, 1357, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1697, -5, -1514, 17, 1395, 38,
	ftAnimEnd(),
};
