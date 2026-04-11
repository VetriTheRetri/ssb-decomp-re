/* AnimJoint data for relocData file 685 (FTFoxAnimCeilingBonk) */
/* 1360 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimCeilingBonk_joint1[10];
extern u16 dFTFoxAnimCeilingBonk_joint2[36];
extern u16 dFTFoxAnimCeilingBonk_joint4[18];
extern u16 dFTFoxAnimCeilingBonk_joint5[64];
extern u16 dFTFoxAnimCeilingBonk_joint7[16];
extern u16 dFTFoxAnimCeilingBonk_joint8[20];
extern u16 dFTFoxAnimCeilingBonk_joint10[10];
extern u16 dFTFoxAnimCeilingBonk_joint11[68];
extern u16 dFTFoxAnimCeilingBonk_joint12[32];
extern u16 dFTFoxAnimCeilingBonk_joint13[30];
extern u16 dFTFoxAnimCeilingBonk_joint15[10];
extern u16 dFTFoxAnimCeilingBonk_joint16[50];
extern u16 dFTFoxAnimCeilingBonk_joint18[40];
extern u16 dFTFoxAnimCeilingBonk_joint20[50];
extern u16 dFTFoxAnimCeilingBonk_joint21[50];
extern u16 dFTFoxAnimCeilingBonk_joint23[20];
extern u16 dFTFoxAnimCeilingBonk_joint24[52];
extern u16 dFTFoxAnimCeilingBonk_joint25[52];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimCeilingBonk_joints[] = {
	(u32)dFTFoxAnimCeilingBonk_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimCeilingBonk_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimCeilingBonk_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimCeilingBonk_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimCeilingBonk_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTFoxAnimCeilingBonk_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimCeilingBonk_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimCeilingBonk_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimCeilingBonk_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimCeilingBonk_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimCeilingBonk_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimCeilingBonk_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimCeilingBonk_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimCeilingBonk_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimCeilingBonk_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimCeilingBonk_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimCeilingBonk_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimCeilingBonk_joint25, /* [24] joint 25 */
	0xFFFF0144, /* [25] END */
};

/* Joint 1 */
u16 dFTFoxAnimCeilingBonk_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 960, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimCeilingBonk_joint2[36] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 480, 320, -240, -160,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 89,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 480, -320, -240, 160,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 89,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimCeilingBonk_joint4[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 357, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 357, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimCeilingBonk_joint5[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1888, 533, -1326, 97, -2070, -473,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1262, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2421, 556, -2543, -524,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3001, 308, -3119, -314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3037, 21, -3172, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3044, 0, -3182, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3037, -21, -3172, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3001, -308, -3119, 314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2421, -557, -1228, -30, -2543, 526,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1885, -535, -1323, -95, -2065, 477,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimCeilingBonk_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimCeilingBonk_joint8[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 268, 0, 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 536, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 536, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 178,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimCeilingBonk_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimCeilingBonk_joint11[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1240, 252, 1090, 99, -1624, 331,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1334, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -987, 334, -1293, 422,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -571, 223, -779, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -540, 20, -740, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -729, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -531, 1341,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1190, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -540, -20, -740, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -571, -223, -779, -276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -987, -334, -1293, -422,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1240, -252, 1090, -99, -1624, -331,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimCeilingBonk_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, -582,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -589, -334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -677, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -642, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -677, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -589, 335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 582,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimCeilingBonk_joint13[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 324, 54, -178, -29, 178, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 324, -54, -178, 29, 178, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimCeilingBonk_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimCeilingBonk_joint16[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 1, -5, -1, 18, -114,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 1, -7, -6, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -96, -361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -704, -375,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -846, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -910, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -879, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -755, 371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -136, 387,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -2, -5, 1, 18, 155,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimCeilingBonk_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 883, 495,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 995, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 992, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 916, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 771, -455,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -382,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimCeilingBonk_joint20[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -16, 106, -64, -34, 610, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 112, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -97, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 552, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 215, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 315, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 361, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 383, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 81, -64, 598, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -16, -98, -64, 32, 610, 11,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimCeilingBonk_joint21[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1600, -6, 1603, 4, 1116, -265,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 1525, 54, 1664, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 574, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 500, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 574, 174,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1570, 34, 1626, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1594, 15, 1607, -11, 850, 271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1600, 6, 1603, -4, 1116, 265,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimCeilingBonk_joint23[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 626, 139,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 787, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 765, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 626, -139,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimCeilingBonk_joint24[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, -20, -3092, 1, -91, 81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 36, 99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -3090, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 206, 144,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 206, -144,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 156, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -42, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -34, 14, -10, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -14, 20, -3092, -1, -91, -81,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimCeilingBonk_joint25[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -395, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 394, 56,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimEnd(),
	0x4002, 0x0192, 0x480C, 0x0000, 0x0000, 0x2003, 0x0002, 0xFE41, 0xFEF6, 0x2003, 0x0001, 0xFE74, 0x0014, 0x2003, 0x0001, 0xFE69, 0x004E, 0x2003, 0x0001, 0xFF11, 0x00CD, 0x2003, 0x0001, 0x0003, 0x00D5, 0x3803, 0x0002, 0x0192, 0x0000, 0x0000, 0x0000, 0x0000,
};
