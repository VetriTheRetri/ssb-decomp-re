/* AnimJoint data for relocData file 361 (FTMarioAnimClaps) */
/* 3552 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimClaps_joint1[12];
extern u16 dFTMarioAnimClaps_joint2[66];
extern u16 dFTMarioAnimClaps_joint4[26];
extern u16 dFTMarioAnimClaps_joint5[348];
extern u16 dFTMarioAnimClaps_joint6[38];
extern u16 dFTMarioAnimClaps_joint7[162];
extern u16 dFTMarioAnimClaps_joint8[30];
extern u16 dFTMarioAnimClaps_joint10[8];
extern u16 dFTMarioAnimClaps_joint11[318];
extern u16 dFTMarioAnimClaps_joint12[32];
extern u16 dFTMarioAnimClaps_joint13[202];
extern u16 dFTMarioAnimClaps_joint15[8];
extern u16 dFTMarioAnimClaps_joint16[88];
extern u16 dFTMarioAnimClaps_joint18[62];
extern u16 dFTMarioAnimClaps_joint20[72];
extern u16 dFTMarioAnimClaps_joint21[104];
extern u16 dFTMarioAnimClaps_joint23[152];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimClaps_joints[] = {
	(u32)dFTMarioAnimClaps_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimClaps_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimClaps_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimClaps_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimClaps_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimClaps_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimClaps_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimClaps_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimClaps_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimClaps_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimClaps_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimClaps_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimClaps_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimClaps_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimClaps_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimClaps_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimClaps_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF034B, /* [23] END */
};

/* Joint 1 */
u16 dFTMarioAnimClaps_joint1[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 540, 0,
	ftAnimBlock(0, 120),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimClaps_joint2[66] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 119, 0, 180, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), -2, 204,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 20), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 9), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 31), 119, 0, 180, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 11), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 20), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), -1, 204,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 20), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 10), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 30), 180,
	ftAnimSetValRateT(FT_ANIM_TRAY, 30), 119, 12,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 10), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 20), 0, 0,
	ftAnimLoop(0x6800, -130),
};

/* Joint 4 */
u16 dFTMarioAnimClaps_joint4[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -153,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -97,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -153,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -97,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -153,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -153, -1,
	ftAnimLoop(0x6800, -50),
};

/* Joint 5 */
u16 dFTMarioAnimClaps_joint5[348] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 509, 13, 118, -28, -724, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 589, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 32), -829, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -409, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -357, 108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 121, 37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 556, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 671, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 95, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -189, 189,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 675, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 665, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 21, 153,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -352, -53,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 675, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 573, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -394, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -188, 187,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -827, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 48), -792, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 24, 151,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -283, -85,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 580, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 582, -39,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -353, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -185, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 20, 151,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -360, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 542, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 621, -1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -403, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -190, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 620, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 582, 25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 20, 156,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -360, -55,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 606, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 582, -38,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -398, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -191, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 20, 155,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -349, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 543, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 635, 1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -391, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -188, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 637, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 620, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -801, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 35), -722, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 24, 151,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -356, -56,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 646, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 614, -11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -399, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -192, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 25, 155,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -358, -58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 624, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 605, -43,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -404, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -189, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 25, 153,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -282, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 561, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 605, -5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -355, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -222, 171,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 600, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 563, -42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -722, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -19, 170, -724, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 509, -53, 118, 138, -724, 0,
	ftAnimLoop(0x6800, -692),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimClaps_joint6[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 37), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 42), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -74),
};

/* Joint 7 */
u16 dFTMarioAnimClaps_joint7[162] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -625, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -655, -100, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -625, -1, 0, 41, 0, -123,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -663, 106, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -625, 0, 0, -13, 0, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -655, -100, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -625, -1, 0, 41, 0, -123,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -663, 106, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -625, 0, 0, -13, 0, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -655, -100, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -625, -1, 0, 41, 0, -123,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -663, 106, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -625, 0, 0, -13, 0, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -655, -100, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -625, -1, 0, 41, 0, -123,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -663, 106, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -625, 0, 0, -13, 0, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -655, -100, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -625, -1, 0, 41, 0, -123,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -663, 106, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -625, 0, 0, -13, 0, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -655, -100, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -625, -1, 0, 41, 0, -123,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -663, 106, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -625, 0, 0, -13, 0, 41,
	ftAnimLoop(0x6800, -322),
};

/* Joint 8 */
u16 dFTMarioAnimClaps_joint8[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 288, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 107,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 107,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), 0, -2,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimClaps_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 120),
	ftAnimLoop(0x6800, -14),
};

/* Joint 11 */
u16 dFTMarioAnimClaps_joint11[318] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2080, -8, 1749, -24, -2315, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -2127, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 35), -2410, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 1432, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1652, 158,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1253, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2097, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2184, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1204, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1430, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2187, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2156, -24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1653, 161,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1334, -88,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2180, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -2103, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1259, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1438, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1651, 155,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1259, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2405, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 51), -2426, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2112, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -2092, 11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1217, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1437, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1652, 155,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1252, -62,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2101, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -2091, 11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1206, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1433, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1653, 158,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1255, -59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2101, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -2091, 10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1207, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1432, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1652, 159,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1337, -87,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2102, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -2135, 32,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1262, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1439, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1655, 155,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1255, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2104, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2189, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2433, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 31), -2316, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1213, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1434, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2187, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2155, -23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1656, 157,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1253, -58,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2178, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -2098, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1208, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1430, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1656, 161,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1257, -59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2106, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -2109, 28,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1216, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1435, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1651, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2080, 29, 1749, 97, -2315, 1,
	ftAnimLoop(0x6800, -632),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimClaps_joint12[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 56), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimClaps_joint13[202] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 2, 0, 8,
	ftAnimSetValBlock(FT_ANIM_ROTX), 625,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 85, 246,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 9), 646,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -31, 0, -90,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 625,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -71, -204,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 639,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 10, 0, 30,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), 625,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 85, 246,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 9), 646,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -31, 0, -90,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 625,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -71, -204,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 639,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 10, 0, 30,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), 625,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 85, 246,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 9), 646,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -31, 0, -90,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 625,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -71, -204,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 639,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 10, 0, 30,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), 625,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 85, 246,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 9), 646,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -31, 0, -90,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 625,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -71, -204,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 639,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 10, 0, 30,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), 625,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 85, 246,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 9), 646,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -31, 0, -90,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 625,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -71, -204,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 639,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 10, 0, 30,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), 625,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 85, 246,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 9), 646,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -31, 0, -90,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 625,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -71, -204,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 639,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 2, 0, 7,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), 625,
	ftAnimLoop(0x6800, -400),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimClaps_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimBlock(0, 120),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTMarioAnimClaps_joint16[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1585, 0, -1638, 0, -1439, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 104), -1591, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 119), -1638, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -1407, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1441, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -1578, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1569, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1420, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1423, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -1408, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1405, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -1523, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1502, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1413, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1588, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1585, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1416, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1438, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1585, 0, -1638, 0, -1439, 0,
	ftAnimLoop(0x6800, -172),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimClaps_joint18[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 13), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 273, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 310, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 264, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 220, -50,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 28), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 245, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 286, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 244, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 197, -55,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 13), 0,
	ftAnimLoop(0x6800, -122),
};

/* Joint 20 */
u16 dFTMarioAnimClaps_joint20[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, 0, -10, 0, 101, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 119), 17, 0, -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 22, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -19, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -158, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -140, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 54, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 61, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 27, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 18, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -81, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -48, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 96, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 99, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, 0, -10, 0, 101, 2,
	ftAnimLoop(0x6800, -140),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimClaps_joint21[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 120, 0, -29, 0, 166, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 41), -9, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 119), 120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 202, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 185, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 89, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 108, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 198, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -16, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), -32, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 195, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), 200, 3,
	ftAnimBlock(0, 26),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -32, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 32), -33, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 204, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 20, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 22, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 203, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -33, 0, 199, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -30, 0, 167, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 120, 0, -29, 0, 166, 0,
	ftAnimLoop(0x6800, -204),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimClaps_joint23[152] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 14), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 262, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 299, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 250, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 205, -52,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 31), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 274, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 307, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 228, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 179, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 14), 0,
	ftAnimLoop(0x6800, -122),
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -92, -1, -112, 0, 115, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 66), -94, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 119), -112, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 25, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -111, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -86, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 42, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 51, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), 30, -8,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -93, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 52), -90, -1,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 21, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -71, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -33, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 105, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 109, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 112, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -92, -2, -112, 0, 115, 2,
	ftAnimLoop(0x6800, -176),
	ftAnimEnd(),
};
