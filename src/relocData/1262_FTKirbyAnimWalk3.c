/* AnimJoint data for relocData file 1262 (FTKirbyAnimWalk3) */
/* 2112 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimWalk3_joint1[30];
extern u16 dFTKirbyAnimWalk3_joint2[14];
extern u16 dFTKirbyAnimWalk3_joint3[98];
extern u16 dFTKirbyAnimWalk3_joint5[34];
extern u16 dFTKirbyAnimWalk3_joint6[154];
extern u16 dFTKirbyAnimWalk3_joint7[16];
extern u16 dFTKirbyAnimWalk3_joint9[34];
extern u16 dFTKirbyAnimWalk3_joint10[146];
extern u16 dFTKirbyAnimWalk3_joint11[16];
extern u16 dFTKirbyAnimWalk3_joint13[14];
extern u16 dFTKirbyAnimWalk3_joint14[104];
extern u16 dFTKirbyAnimWalk3_joint16[24];
extern u16 dFTKirbyAnimWalk3_joint18[98];
extern u16 dFTKirbyAnimWalk3_joint19[108];
extern u16 dFTKirbyAnimWalk3_joint21[16];
extern u16 dFTKirbyAnimWalk3_joint22[106];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimWalk3_joints[] = {
	(u32)dFTKirbyAnimWalk3_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimWalk3_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimWalk3_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimWalk3_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimWalk3_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimWalk3_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimWalk3_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimWalk3_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimWalk3_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimWalk3_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimWalk3_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimWalk3_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimWalk3_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimWalk3_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimWalk3_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimWalk3_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimWalk3_joint1[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 660, 120,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 660, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 660, 120,
	ftAnimLoop(0x6800, -58),
};

/* Joint 2 */
u16 dFTKirbyAnimWalk3_joint2[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	_FT_ANIM_CMD(11, 0, 1), 10,
	ftAnimBlock(0, 40),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimWalk3_joint3[98] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -44, -134, 44,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 312, 38, 4096, -27, 4096, 109, 4096, -27,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), 44,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 13, 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 312, -57, 4096, 40, 4096, -163, 4096, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 240, 4300, 3276, 4300,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 312, 38, 4096, -27, 4096, 109, 4096, -27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -44, 134, -44,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), 44,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -13, 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 312, -57, 4096, 40, 4096, -163, 4096, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 240, 4300, 3276, 4300,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 312, 38, 4096, -27, 4096, 109, 4096, -27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -44, -134, 44,
	ftAnimLoop(0x6800, -194),
};

/* Joint 5 */
u16 dFTKirbyAnimWalk3_joint5[34] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -60, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 357, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -35, -178, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -357, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 35, -178, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 357, 0,
	ftAnimLoop(0x6800, -66),
};

/* Joint 6 */
u16 dFTKirbyAnimWalk3_joint6[154] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 572, 3, -298, -4, 595, -28,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 788, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -407, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 93, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 57, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -344, -137,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 801, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1069, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -437, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -466, 40,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -475, -103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -552, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1054, -13, -424, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -423, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 908, -67,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -535, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -68, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -504, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -438, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 852, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 743, -41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -72, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 297, 84,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -430, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -311, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 703, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 580, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 377, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 579, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 571, -9, -300, 10, 597, 17,
	ftAnimLoop(0x6800, -304),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimWalk3_joint7[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimWalk3_joint9[34] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 60, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 357, 178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -35, 178, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -357, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 35, 178, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 357, 178,
	ftAnimLoop(0x6800, -66),
};

/* Joint 10 */
u16 dFTKirbyAnimWalk3_joint10[146] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1028, 1, 332, 18, -552, 18,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -909, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 546, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -361, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -194, 137,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -35, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -852, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -743, 41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 517, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 314, -14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 31, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 359, -124,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -703, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -697, -47,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 301, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 393, 10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 232, -108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -202, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -738, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1002, -70,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 407, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 508, -39,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -344, -138,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -556, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1064, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1032, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 463, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 354, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1030, 2, 336, -18, -554, 2,
	ftAnimLoop(0x6800, -288),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimWalk3_joint11[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimWalk3_joint13[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	_FT_ANIM_CMD(11, 0, 1), 10,
	ftAnimBlock(0, 40),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimWalk3_joint14[104] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 371, -9, -213, 5, -389, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -289, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 217, -34, -171, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 170, -59, -88, 101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 525, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -258, 10,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -277, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -296, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 560, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 628, -54,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -240, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 246, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 556, -89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -368, -28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -302, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -220, 9,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 286, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 351, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 371, 20, -213, 6, -389, -21,
	ftAnimLoop(0x6800, -204),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimWalk3_joint16[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimLoop(0x6800, -46),
};

/* Joint 18 */
u16 dFTKirbyAnimWalk3_joint18[98] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1664, -74, 2198, -33, -1628, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1488, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1909, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1839, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1818, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1602, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1571, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1470, 22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1912, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -1868, 33,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1556, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 2181, 23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1457, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1710, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1704, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1691, 49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1830, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1626, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1664, -38, 2198, 16, -1628, 63,
	ftAnimLoop(0x6800, -192),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimWalk3_joint19[108] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 247, 7, 225, -6, 649, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 76, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 245, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 449, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 331, -108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -368, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 21, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -371, -4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 231, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 278, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -389, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -175, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -360, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -29, 59,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -88, 103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 635, 16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 21, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 240, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 269, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 231, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 247, 7, 225, -5, 649, 14,
	ftAnimLoop(0x6800, -212),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimWalk3_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 39), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimWalk3_joint22[106] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1246, -1, -1473, 5, -1473, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1531, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -2181, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1714, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1708, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1551, 67,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1572, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1271, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2198, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1840, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1494, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1488, -75,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1267, 0, -1818, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1602, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1252, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1571, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1505, 36,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1556, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1490, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1246, 5, -1473, 17, -1473, 31,
	ftAnimLoop(0x6800, -208),
	ftAnimEnd(),
};
