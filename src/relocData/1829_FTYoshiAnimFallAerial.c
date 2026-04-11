/* AnimJoint data for relocData file 1829 (FTYoshiAnimFallAerial) */
/* 1376 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimFallAerial_joint1[14];
extern u16 dFTYoshiAnimFallAerial_joint2[32];
extern u16 dFTYoshiAnimFallAerial_joint3[18];
extern u16 dFTYoshiAnimFallAerial_joint6[8];
extern u16 dFTYoshiAnimFallAerial_joint7[66];
extern u16 dFTYoshiAnimFallAerial_joint8[30];
extern u16 dFTYoshiAnimFallAerial_joint10[10];
extern u16 dFTYoshiAnimFallAerial_joint11[64];
extern u16 dFTYoshiAnimFallAerial_joint12[32];
extern u16 dFTYoshiAnimFallAerial_joint13[14];
extern u16 dFTYoshiAnimFallAerial_joint14[12];
extern u16 dFTYoshiAnimFallAerial_joint15[20];
extern u16 dFTYoshiAnimFallAerial_joint17[24];
extern u16 dFTYoshiAnimFallAerial_joint18[56];
extern u16 dFTYoshiAnimFallAerial_joint20[32];
extern u16 dFTYoshiAnimFallAerial_joint22[56];
extern u16 dFTYoshiAnimFallAerial_joint23[56];
extern u16 dFTYoshiAnimFallAerial_joint25[92];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimFallAerial_joints[] = {
	(u32)dFTYoshiAnimFallAerial_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimFallAerial_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimFallAerial_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimFallAerial_joint6, /* [3] joint 6 */
	0x00000000, /* [4] NULL */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimFallAerial_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimFallAerial_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimFallAerial_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimFallAerial_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimFallAerial_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimFallAerial_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimFallAerial_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimFallAerial_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimFallAerial_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimFallAerial_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimFallAerial_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimFallAerial_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimFallAerial_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimFallAerial_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF013E, /* [25] END */
};

/* Joint 1 */
u16 dFTYoshiAnimFallAerial_joint1[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 608, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 2 */
u16 dFTYoshiAnimFallAerial_joint2[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -64, 0, 4, 0, 2, 0, -12, 214, 76, 1, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -1161, 4, 2, 0, 112, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -893, 0, 0, 0, 214, 1,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimFallAerial_joint3[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 1161, 63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 16, 67, 75,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 1251,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 1161,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimFallAerial_joint6[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 562, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -14),
};

/* Joint 7 */
u16 dFTYoshiAnimFallAerial_joint7[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2769, -83, -176, 34, 1380, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -3158, -13, -38, -2, 1536, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3134, -91, -62, -181, 1570, 339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3341, -462, -402, -127, 2216, 649,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4059, -575, -318, -326, 2870, 535,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4492, -159, -1055, -532, 3287, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4378, 56, -1383, -188, 3023, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4378, 0, -1432, -49, 2989, -34,
	ftAnimLoop(0x6800, -128),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimFallAerial_joint8[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -717, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -176, 358,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimFallAerial_joint10[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -625,
	_FT_ANIM_CMD(11, 0, 1), 22,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -18),
};

/* Joint 11 */
u16 dFTYoshiAnimFallAerial_joint11[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2754, 80, 187, -38, 1380, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 3146, 8, 46, 5, 1534, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3113, 78, 76, 209, 1562, 309,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3282, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3303, 480, 465, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4074, 588, 449, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4481, 143, 1032, 459,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4362, -59, 1368, 194, 3023, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4363, 1, 1420, 52, 2989, -33,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimFallAerial_joint12[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -291,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -592,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 291,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -62),
};

/* Joint 13 */
u16 dFTYoshiAnimFallAerial_joint13[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -625,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -481,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 14 */
u16 dFTYoshiAnimFallAerial_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -670, 1608, 0, 0, 156, 0,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimFallAerial_joint15[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 536, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 194, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 155, 69,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 536,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimFallAerial_joint17[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 89, 35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 521, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 284, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -435, -39,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 89,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimFallAerial_joint18[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1569, -29, 1759, 19, -1337, 102,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1757, 59, 1760, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -777, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -657, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1153, -155,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1687, 65, 1776, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1583, 27, 1764, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1287, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1569, 14, 1759, -4, -1337, -49,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimFallAerial_joint20[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 687, -79,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 185, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 13, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 208, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 390, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 648, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, 38,
	ftAnimLoop(0x6800, -62),
};

/* Joint 22 */
u16 dFTYoshiAnimFallAerial_joint22[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 170, 40, -1772, -29, 1290, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 53, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1840, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1490, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1558, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1308, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 53, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 141, 39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1806, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1782, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 170, 28, -1772, 9, 1290, -18,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimFallAerial_joint23[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -34, 35, 150, 13, 286, 121,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 93, -77, 159, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 753, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 941, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 935, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 678, -226,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 338, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 25, -56, 163, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -18, -29, 155, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -34, -15, 150, -4, 286, -52,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimFallAerial_joint25[92] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 670, -106,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 234, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -113,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 319, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 505, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 626, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 670, 44,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
	0x200E, 0x05AC, 0xFFFE, 0xFF5F, 0xFFED, 0xFEBF, 0x0021, 0x2805, 0x0007, 0xFF22, 0x0021, 0x200B, 0x0005, 0x062E, 0x0001, 0xFFCB, 0xFFFF, 0x200B, 0x0001, 0x0632, 0xFFFD, 0xFFBF, 0xFFBA, 0x280B, 0x0003, 0x05CB, 0xFFD5, 0xFED2, 0xFFE2, 0x0801, 0x0001, 0x2005, 0x0001, 0xFF41, 0x001A, 0x2005, 0x0001, 0xFF57, 0x000E, 0x200F, 0x0001, 0x05AC, 0xFFE1, 0xFF5F, 0x0008, 0xFEBF, 0xFFEE, 0x6800, 0xFFA0, 0x0000, 0x0000, 0x0000,
};
