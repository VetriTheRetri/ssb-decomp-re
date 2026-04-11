/* AnimJoint data for relocData file 895 (FTDonkeyAnimItemDrop) */
/* 1360 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimItemDrop_joint1[14];
extern u16 dFTDonkeyAnimItemDrop_joint2[16];
extern u16 dFTDonkeyAnimItemDrop_joint4[34];
extern u16 dFTDonkeyAnimItemDrop_joint5[38];
extern u16 dFTDonkeyAnimItemDrop_joint6[24];
extern u16 dFTDonkeyAnimItemDrop_joint7[8];
extern u16 dFTDonkeyAnimItemDrop_joint8[16];
extern u16 dFTDonkeyAnimItemDrop_joint10[8];
extern u16 dFTDonkeyAnimItemDrop_joint11[82];
extern u16 dFTDonkeyAnimItemDrop_joint12[40];
extern u16 dFTDonkeyAnimItemDrop_joint13[26];
extern u16 dFTDonkeyAnimItemDrop_joint14[10];
extern u16 dFTDonkeyAnimItemDrop_joint16[26];
extern u16 dFTDonkeyAnimItemDrop_joint17[68];
extern u16 dFTDonkeyAnimItemDrop_joint19[24];
extern u16 dFTDonkeyAnimItemDrop_joint21[56];
extern u16 dFTDonkeyAnimItemDrop_joint22[56];
extern u16 dFTDonkeyAnimItemDrop_joint24[84];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimItemDrop_joints[] = {
	(u32)dFTDonkeyAnimItemDrop_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimItemDrop_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimItemDrop_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimItemDrop_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimItemDrop_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimItemDrop_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimItemDrop_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimItemDrop_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimItemDrop_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimItemDrop_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimItemDrop_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimItemDrop_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimItemDrop_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimItemDrop_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimItemDrop_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimItemDrop_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimItemDrop_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimItemDrop_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0136, /* [24] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimItemDrop_joint1[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1032, -402,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 933, -278,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1032, -402,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimItemDrop_joint2[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -41, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -278, -377, -242,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -265, -41, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTDonkeyAnimItemDrop_joint4[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 750, 24, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 750, -25, 24, 4, 41, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 543, 6, 60, 0, 132, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 841, 12, 29, -2, 55, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 750, 24, 41,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimItemDrop_joint5[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, 0, -84, 0, -473, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -89, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), -127, 5, -328, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -116, 17, -341, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -72, 15, -437, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 9, -84, 4, -473, -36,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimItemDrop_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -778, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -780, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -488, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 80,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimItemDrop_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimItemDrop_joint8[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -279, -583, 434,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 174, -67, -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimItemDrop_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimItemDrop_joint11[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1492, -1, -1780, 12, 1129, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 1643, 47, -1652, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 820, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 735, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 680, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1680, 22, -1701, -43, 474, -154,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1684, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1865, 36, 900, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1889, 6, 1073, 160,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1186, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1501, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1692, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1784, 6,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1145, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1492, -8, -1780, 4, 1129, -16,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimItemDrop_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -394, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -419, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -885, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -913, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1157, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1074, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -448, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 31,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimItemDrop_joint13[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 454, 222, -53, -9, 81, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1874, -18, -78, 2, 118, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 98, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimItemDrop_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimItemDrop_joint16[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -877, -44, 281, 7, 9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1163, 36, 123, -21, -69, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -404, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimItemDrop_joint17[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -86, 22, -394, 1, -304, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -389, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 83, -29, -59, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 46, -29, 24, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -212, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 7, -28,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -385, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -392, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -234, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -305, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -28, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -67, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -86, -19, -394, -1, -304, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimItemDrop_joint19[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1004, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 1105, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1091, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1022, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1004, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimItemDrop_joint21[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, -10, 24, -22, -377, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -291, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -505, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -398, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -395, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 13, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -281, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -81, 29,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -480, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -395, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 18, 24, 10, -377, 18,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimItemDrop_joint22[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 99, 17, 216, 1, -297, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -115, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 162, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 342, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 335, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 94, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -129, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -295, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 175, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 214, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 99, 5, 216, 1, -297, -2,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimItemDrop_joint24[84] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 993, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 972, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 988, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1009, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, -16,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0000, 0xFFF5, 0x0069, 0xFFFB, 0xFE81, 0x0005, 0x2809, 0x000F, 0xFE8A, 0xFFF0, 0x2805, 0x0014, 0x0076, 0x0005, 0x2003, 0x0008, 0xFFAC, 0x0008, 0x2003, 0x0001, 0xFFB3, 0x0006, 0x2803, 0x000E, 0x000A, 0xFFF1, 0x0801, 0x0006, 0x2009, 0x0001, 0xFE79, 0xFFF0, 0x2809, 0x0007, 0xFE73, 0x0015, 0x0801, 0x0004, 0x2005, 0x0001, 0x0078, 0xFFFF, 0x2005, 0x0002, 0x006C, 0xFFFC, 0x200F, 0x0001, 0x0000, 0xFFF7, 0x0069, 0xFFFD, 0xFE81, 0x000E, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
