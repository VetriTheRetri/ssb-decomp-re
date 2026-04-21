/* AnimJoint data for relocData file 1024 (FTSamusAnimThrown1) */
/* 1072 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimThrown1_joint2[18];
extern u16 dFTSamusAnimThrown1_joint3[24];
extern u16 dFTSamusAnimThrown1_joint5[26];
extern u16 dFTSamusAnimThrown1_joint6[88];
extern u16 dFTSamusAnimThrown1_joint7[36];
extern u16 dFTSamusAnimThrown1_joint8[14];
extern u16 dFTSamusAnimThrown1_joint9[12];
extern u16 dFTSamusAnimThrown1_joint12[10];
extern u16 dFTSamusAnimThrown1_joint13[96];
extern u16 dFTSamusAnimThrown1_joint15[24];
extern u16 dFTSamusAnimThrown1_joint16[26];
extern u16 dFTSamusAnimThrown1_joint18[16];
extern u16 dFTSamusAnimThrown1_joint20[26];
extern u16 dFTSamusAnimThrown1_joint21[26];
extern u16 dFTSamusAnimThrown1_joint23[16];
extern u16 dFTSamusAnimThrown1_joint24[30];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTSamusAnimThrown1_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTSamusAnimThrown1_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimThrown1_joint3, /* [2] joint 3 */
	(u32)dFTSamusAnimThrown1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTSamusAnimThrown1_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimThrown1_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimThrown1_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimThrown1_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimThrown1_joint12, /* [9] joint 12 */
	0x00000000, /* [10] NULL */
	0x00000000, /* [11] NULL */
	(u32)dFTSamusAnimThrown1_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimThrown1_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTSamusAnimThrown1_joint16, /* [15] joint 16 */
	(u32)dFTSamusAnimThrown1_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTSamusAnimThrown1_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTSamusAnimThrown1_joint21, /* [20] joint 21 */
	(u32)dFTSamusAnimThrown1_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTSamusAnimThrown1_joint24, /* [23] joint 24 */
};

/* Joint 2 */
u16 dFTSamusAnimThrown1_joint2[18] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 1544, 0, 92, 10,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 1544, 9, 92, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 20), 0,
	ftAnimLoop(0x6800, -34),
};

/* Joint 3 */
u16 dFTSamusAnimThrown1_joint3[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -78, 0, 101, 0, -15, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -78, -101, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 101, 0, -15, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -78,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimThrown1_joint5[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -4, 0, 32, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX), 168, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -6, 0, 41, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -4, 0, 32, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimThrown1_joint6[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1172, 30, -591, 25, -918, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -650, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1123, -89, -1051, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1020, -38, -1085, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1046, 159, -1221, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1339, 253, -674, 10, -1584, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1762, 146, -544, 16, -2101, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1935, 168, -519, 33, -2256, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 2527, 119, -587, -148, -2501, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2676, 87, -755, -167, -2587, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2702, 52, -921, -130, -2523, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2780, 77, -1016, -95, -2527, -3,
	ftAnimLoop(0x6800, -172),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimThrown1_joint7[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -515, 37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -416, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -461, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -451, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -584, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -763, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -515, 100,
	ftAnimLoop(0x6800, -70),
};

/* Joint 8 */
u16 dFTSamusAnimThrown1_joint8[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -748, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 424, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -748,
	ftAnimLoop(0x6800, -26),
};

/* Joint 9 */
u16 dFTSamusAnimThrown1_joint9[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimThrown1_joint12[10] = {
	ftAnimSetVal(FT_ANIM_ROTX), 0,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 20), 0,
	ftAnimLoop(0x6800, -18),
};

/* Joint 13 */
u16 dFTSamusAnimThrown1_joint13[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -491, -54, 1256, 9, -269, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1046, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -923, -29, -738, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -950, -31, -777, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1049, -61, -903, -67,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 945, -89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 901, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1109, 295, -963, 304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -458, 497, -294, 524,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -115, 159, 84, 196,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -186, -45, 79, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 985, 77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1240, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -231, -51, 46, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -455, -40, -222, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -491, -35, 1256, 15, -269, -47,
	ftAnimLoop(0x6800, -188),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimThrown1_joint15[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -519, -26,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -611, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -590, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -533, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -519, 14,
	ftAnimLoop(0x6800, -46),
};

/* Joint 16 */
u16 dFTSamusAnimThrown1_joint16[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, 0, -43, 0, -19, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 7, 0, -43, 0, -20, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 0, -43, 0, -19, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimThrown1_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 273, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 274, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 273, -1,
	ftAnimLoop(0x6800, -30),
};

/* Joint 20 */
u16 dFTSamusAnimThrown1_joint20[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1627, 0, 1585, 0, 1588, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -1627, 0, 1585, 0, 1588, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1627, 0, 1585, 0, 1588, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimThrown1_joint21[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 9, 0, 46, 0, -44, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 9, 0, 46, 0, -44, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 9, 0, 46, 0, -44, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimThrown1_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 295, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 295, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 295, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 24 */
u16 dFTSamusAnimThrown1_joint24[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1590, 0, 1579, 0, -1677, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -1590, 0, 1579, 0, -1677, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1590, 0, 1579, 0, -1677, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
