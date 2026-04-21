/* AnimJoint data for relocData file 1000 (FTSamusAnimStunStartU) */
/* 1824 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimStunStartU_joint1[34];
extern u16 dFTSamusAnimStunStartU_joint2[10];
extern u16 dFTSamusAnimStunStartU_joint4[54];
extern u16 dFTSamusAnimStunStartU_joint5[120];
extern u16 dFTSamusAnimStunStartU_joint6[64];
extern u16 dFTSamusAnimStunStartU_joint7[32];
extern u16 dFTSamusAnimStunStartU_joint8[10];
extern u16 dFTSamusAnimStunStartU_joint9[32];
extern u16 dFTSamusAnimStunStartU_joint11[10];
extern u16 dFTSamusAnimStunStartU_joint12[64];
extern u16 dFTSamusAnimStunStartU_joint14[32];
extern u16 dFTSamusAnimStunStartU_joint15[82];
extern u16 dFTSamusAnimStunStartU_joint17[32];
extern u16 dFTSamusAnimStunStartU_joint19[78];
extern u16 dFTSamusAnimStunStartU_joint20[104];
extern u16 dFTSamusAnimStunStartU_joint22[32];
extern u16 dFTSamusAnimStunStartU_joint23[76];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimStunStartU_joints[] = {
	(u32)dFTSamusAnimStunStartU_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimStunStartU_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimStunStartU_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimStunStartU_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimStunStartU_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimStunStartU_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimStunStartU_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimStunStartU_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimStunStartU_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimStunStartU_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimStunStartU_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimStunStartU_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimStunStartU_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimStunStartU_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimStunStartU_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimStunStartU_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimStunStartU_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimStunStartU_joint1[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, -513, 17, 288, -23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 71, 0, 34, 12, -4, 840, 349, -17, 6,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 1600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimStunStartU_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimStunStartU_joint4[54] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 6, -457, 156, -74, 0, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 268, 19, 0, 22, 0, -7,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -45, 39, 0, -1, 24, 91,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 40, -2, -34, 96, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 402, -17, 5, 0, -43, 1, 100, -51,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimStunStartU_joint5[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 380, -12, 0, -54, -55, 70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 244, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 143, -178, -144, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -57, -105, -40, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -139, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 51, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 43, -108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -7, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -208, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -198, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -24, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 50, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 37, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -92, 28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 34, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -224, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -193, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 259, 101,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -64, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 100, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 354, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 462, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 476, 13, 114, 13, -231, -6,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimStunStartU_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -869, -38,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -797, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -429, 305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -267, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -385, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -751, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -802, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -752, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimStunStartU_joint7[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 36, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 701, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimStunStartU_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 86, 68, -29,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimStunStartU_joint9[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -134, 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 480, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -134, 10, 0, -10, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 134, 13, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTSamusAnimStunStartU_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimStunStartU_joint12[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1534, 2, 1450, 0, -1480, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1581, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1632, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -1339, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1415, -78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1890, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1564, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1666, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1647, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1734, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1872, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1828, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1666, 0, 1737, 2, -1824, 4,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimStunStartU_joint14[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1037, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -868, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -775, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -492, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -520, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -588, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimStunStartU_joint15[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -169, 11, -104, -10, -215, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -908, -116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -45, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -93, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -57, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 129, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1012, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1072, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -41, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -27, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 77, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 79, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1085, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -396, 12,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 82, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 87, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 0, -27, 0, -389, 6,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimStunStartU_joint17[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 316, 71,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 863, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 962, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1192, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1132, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 482, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimStunStartU_joint19[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 83, 27, -117, 3, 338, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -94, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 75, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 345, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 166, -198,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -98, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -134, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -69, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -49, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -87, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 59, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -28, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -89, -1, -67, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -76, 1, -42, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 0, -28, 0, -41, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimStunStartU_joint20[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -46, 6, -59, 2, -167, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -196, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 297, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -458, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -531, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -403, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -226, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -40, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -319, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -557, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -71, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 86, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 263, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 167, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -629, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -301, 55,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 101, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 224, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -246, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -57, 14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 162, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 1, 160, -1, -49, 7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimStunStartU_joint22[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 755, 116,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1199, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1255, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1135, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1094, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 450, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimStunStartU_joint23[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 241, 47, -12, 4, 29, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 252, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -342, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 354, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 355, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 173, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 67, -97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 59, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 243, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 193, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -335, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -215, 3,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 77, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 141, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, 0, 193, 0, -213, 1,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
