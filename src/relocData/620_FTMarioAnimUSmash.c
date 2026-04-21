/* AnimJoint data for relocData file 620 (FTMarioAnimUSmash) */
/* 2512 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimUSmash_joint1[56];
extern u16 dFTMarioAnimUSmash_joint2[18];
extern u16 dFTMarioAnimUSmash_joint4[26];
extern u16 dFTMarioAnimUSmash_joint5[120];
extern u16 dFTMarioAnimUSmash_joint6[56];
extern u16 dFTMarioAnimUSmash_joint8[8];
extern u16 dFTMarioAnimUSmash_joint10[70];
extern u16 dFTMarioAnimUSmash_joint11[128];
extern u16 dFTMarioAnimUSmash_joint12[62];
extern u16 dFTMarioAnimUSmash_joint13[8];
extern u16 dFTMarioAnimUSmash_joint15[10];
extern u16 dFTMarioAnimUSmash_joint16[138];
extern u16 dFTMarioAnimUSmash_joint18[54];
extern u16 dFTMarioAnimUSmash_joint20[134];
extern u16 dFTMarioAnimUSmash_joint21[138];
extern u16 dFTMarioAnimUSmash_joint23[56];
extern u16 dFTMarioAnimUSmash_joint24[126];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimUSmash_joints[] = {
	(u32)dFTMarioAnimUSmash_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimUSmash_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimUSmash_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimUSmash_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimUSmash_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimUSmash_joint8, /* [6] joint 8 */
	0x00000000, /* [7] NULL */
	(u32)dFTMarioAnimUSmash_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimUSmash_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimUSmash_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimUSmash_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimUSmash_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimUSmash_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimUSmash_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimUSmash_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimUSmash_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimUSmash_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimUSmash_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimUSmash_joint1[56] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 540, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 223, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, -80, 407, 469, 0, 80,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 1010, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), -60, 60,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 0, -53, 0, 53,
	ftAnimSetValRateT(FT_ANIM_TRAY, 17), 540, -165,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 7), -120, 120,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), 0, 50, 0, -50,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 12, 433, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, 540, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimUSmash_joint2[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -790,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -713, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), -504, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 29), -640, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 11), -790,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimUSmash_joint4[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 208,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 258, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -774, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 138, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 634, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 22), 666, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 18), 208,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimUSmash_joint5[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, -28, -300, -2, -272, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 90, -64, -208, 105, -314, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -31, -46, -66, 52, -363, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, -79, -103, -142, -308, 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -189, -83, -351, -143, 261, 266,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -368, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -169, -21, 224, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -233, -29, 316, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 295, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -204, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -368, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 48), -302, 1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 284, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), -169, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -195, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), 91, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 99, -4, -185, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 132, 1, -271, -2,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, 0, -300, 0, -272, -1,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimUSmash_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, -158,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -622, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -687, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -821, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -992, 406,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 491,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -205, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -206, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -183, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimUSmash_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -625, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTMarioAnimUSmash_joint10[70] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 139, -209,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -221, 0, 54, -17,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 56, 54, 69, -17, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 336, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -104, -2,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 56, 123, 21, 5324, 5324, 4915,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 0, 54, -17, 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 47), 0, 54, -17, 4096, 4096, 4096,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 29), 228, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), -221,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimUSmash_joint11[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 443, -110, 551, -46, 65, -90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -28, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 28, -106, -462, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -41, 92, -579, 164,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 372, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 87, 386, 214, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 743, 429, 119, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 945, 101, 307, 93, 453, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 951, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 461, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 305, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 445, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 951, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 44), 477, -15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 462, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 39), 117, -18,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 462, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 296, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 293, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 551, 1,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 100, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 68, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 463, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 445, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 443, -2, 551, 0, 65, -2,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimUSmash_joint12[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, -33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -673, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -280, 336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -992, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -588, 496,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 19), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -320, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -403, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), -811, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimUSmash_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimUSmash_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimUSmash_joint16[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1473, 44, -1377, 17, -1563, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1776, 7, -1378, -1, -1898, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1734, -199, -1363, -47, -1864, 301,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1505, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1378, -200, -1295, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1333, -32, -1385, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1364, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1414, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1511, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1407, 3,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1372, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1484, -23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1420, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1516, 64,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1402, 27, -1511, -121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1388, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1727, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1557, 37, -1820, -79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -1990, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 33), 1484, -9,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1382, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -1376, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1973, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -1567, 8,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1476, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1473, -2, -1377, -1, -1563, 4,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimUSmash_joint18[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, 112,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 933, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 875, -466,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -437,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 341, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 462, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 820, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 813, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 405, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -4,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimUSmash_joint20[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -212, -9, -11, -8, -156, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -200, 127, 30, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -373, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -359, 175,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 355, 252,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -35, 114, 89, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 30, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 198, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 482, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 413, -26,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 23, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -206, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 388, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 100, -22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 213, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 92, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 79, -78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -91, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -195, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -246, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -115, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 33), -157, 2,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -243, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -212, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 90, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), -9, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, 0, -11, -1, -156, 1,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimUSmash_joint21[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, -27, 187, 21, 35, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 49, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 248, -1, -239, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 245, -85, -176, 292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 243, 123, 76, -105, 344, 215,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 308, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 34, -28, 255, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 352, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -54, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 303, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 230, -6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 360, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 347, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -59, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 27, 59,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 338, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 93, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 76, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 192, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 68, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), 36, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 224, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 200, -1,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 190, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), 186, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 0, 187, 0, 35, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimUSmash_joint23[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 966, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 893, -483,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -446,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 385, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 484, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 709, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 692, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 440, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimUSmash_joint24[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, 3, -1514, -6, 1395, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1732, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1543, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1137, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1158, 214,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1938, 246,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1610, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1704, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1544, -6, 2060, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -1724, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 2024, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2005, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1586, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1729, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1723, 2,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1546, -78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1257, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1723, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 32), -1523, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1236, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), 1394, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1726, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 1697, 0,
	ftAnimBlock(0, 27),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1516, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1697, 0, -1514, 2, 1395, 1,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
