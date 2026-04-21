/* AnimJoint data for relocData file 535 (FTMarioAnimDamageFlyX1) */
/* 2704 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimDamageFlyX1_joint1[58];
extern u16 dFTMarioAnimDamageFlyX1_joint2[36];
extern u16 dFTMarioAnimDamageFlyX1_joint4[46];
extern u16 dFTMarioAnimDamageFlyX1_joint5[172];
extern u16 dFTMarioAnimDamageFlyX1_joint6[46];
extern u16 dFTMarioAnimDamageFlyX1_joint7[8];
extern u16 dFTMarioAnimDamageFlyX1_joint8[46];
extern u16 dFTMarioAnimDamageFlyX1_joint10[36];
extern u16 dFTMarioAnimDamageFlyX1_joint11[170];
extern u16 dFTMarioAnimDamageFlyX1_joint12[38];
extern u16 dFTMarioAnimDamageFlyX1_joint13[10];
extern u16 dFTMarioAnimDamageFlyX1_joint15[10];
extern u16 dFTMarioAnimDamageFlyX1_joint16[148];
extern u16 dFTMarioAnimDamageFlyX1_joint18[76];
extern u16 dFTMarioAnimDamageFlyX1_joint20[118];
extern u16 dFTMarioAnimDamageFlyX1_joint21[116];
extern u16 dFTMarioAnimDamageFlyX1_joint23[64];
extern u16 dFTMarioAnimDamageFlyX1_joint24[106];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimDamageFlyX1_joints[] = {
	(u32)dFTMarioAnimDamageFlyX1_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimDamageFlyX1_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimDamageFlyX1_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimDamageFlyX1_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimDamageFlyX1_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimDamageFlyX1_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimDamageFlyX1_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimDamageFlyX1_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimDamageFlyX1_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimDamageFlyX1_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimDamageFlyX1_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimDamageFlyX1_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimDamageFlyX1_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimDamageFlyX1_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimDamageFlyX1_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimDamageFlyX1_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimDamageFlyX1_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimDamageFlyX1_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimDamageFlyX1_joint1[58] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 2, 0, 1,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 223, 0, 540,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0, -7, 0, 0, -16, -21, 597, 68, -268, -330,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 592, -14, -247, 94,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), -6, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), -804, -196,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), -16,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), -16, 7, 556, -80, 4, 105,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 54, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 5, 360,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimDamageFlyX1_joint2[36] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -790, 1,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -71, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 296, -46, 0, 84, 0, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -350, -36, -281, -2, 207, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -541, 15, -52, 9, 178, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -66, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimDamageFlyX1_joint4[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 0, 258, 0, 110, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 97, -23, 0, -98, 0, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 137, -48, -37, -16, 10, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -145, -19, -83, -2, 24, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -263, -9, -83, -5, 24, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -356, -221, 75,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimDamageFlyX1_joint5[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1741, 512, -1308, -9, -1880, -785,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1370, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2254, 347, -2666, -459,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2436, 151, -2799, -117,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2592, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -3077, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3063, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3271, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2632, 144, -1355, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1396, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2880, 400,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3433, 413, -3572, -247,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -4093, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 3702, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3444, -279, -1508, -100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1618, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3143, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3007, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2781, -507, -1491, 352, -4115, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1992, -389, -913, 374, -3832, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2002, -67, -741, 138, -4305, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1857, 95, -636, 69, -4288, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2193, 210, -603, -272, -4604, 449,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2279, 137, -1182, -371, -3388, 537,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2469, 78, -1345, -100, -3530, -111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3874, -143,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1428, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2435, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2064, -45,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4013, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2049, -14, -1438, -10, -4075, -62,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimDamageFlyX1_joint6[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, 182,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -429, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimDamageFlyX1_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimDamageFlyX1_joint8[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, -4, 176,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 255, 59, 0, -38, 0, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 380, -70, -121, -35, 19, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -97, -31, -177, 0, 33, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -281, 2, -106, 22, 162, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -34, 341, 153,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimDamageFlyX1_joint10[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 139, -209,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 36, 0, -23, 0, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, -9, 0, 6, 0, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -221, 139, -209,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimDamageFlyX1_joint11[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1164, 311, 1056, -727, -1542, 472,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -852, 99, 329, -348, -1070, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -966, -84, 358, 40, -1104, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 614, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1381, -322, -1575, -306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1809, -430, -1962, -367,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2500, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2243, -311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2432, -128, 546, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2647, -188,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 85, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2644, -171,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3278, -81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2877, -251,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3490, -127,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3351, -86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -4152, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3614, -146,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3877, 42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 23, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 278, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3811, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3976, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4266, -148,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -4803, 148,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4292, -227, 428, 102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -4078, 342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 522, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 915, 86, -4537, 627,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 257, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3653, -7, -3548, 389,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4094, -235, -3757, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4125, -30, -80, -338, -3691, 66,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimDamageFlyX1_joint12[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 802,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 401,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 22), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -373,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -746, -494,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -988, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -598, 489,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 589,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimDamageFlyX1_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 625, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimDamageFlyX1_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimDamageFlyX1_joint16[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -135, 307, -230, 316, 45, -1143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 172, 150, 85, 94, -1098, -478,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 166, -39, -41, -123, -912, 185,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -370, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -155, -46, -435, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -180, 85, -389, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 177, 83, -819, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 182, -66, -364, -10, -800, 105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -19, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -273, -88, -264, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -322, -9, -178, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -328, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -97, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -94, -116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -527, 148,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -322, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 4, 102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -202, -89, -332, 199,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 181, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -303, 27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 69, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -471, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 63, -155,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -538, -172,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -256, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -150, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -73, 77, -508, -36, -664, -125,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimDamageFlyX1_joint18[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, 170,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 571, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 233, -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 777, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 927, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 440, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 220, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 560, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 735, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 548, -293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 183, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 248, 304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 840, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 963, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 996, 33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimDamageFlyX1_joint20[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -212, 192, -11, -200, -156, 466,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -233, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -19, 89, 310, 291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -33, -14, 425, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 84, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 214, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -239, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -190, 21,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 102, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -80, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 35, -137,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -73, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -177, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 89, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -65, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -80, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -117, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -16, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -43, 58, 148, 159,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 361, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 308, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 256, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 219, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 363, 2, 91, 2, 206, -13,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimDamageFlyX1_joint21[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, -116, 187, -88, 35, -761,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -25, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -34, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -725, -289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -542, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -206, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -24, 12, -176, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 230, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -524, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -694, -181,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -821, 101,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 329, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 164, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -17, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 129, -21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -729, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -421, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 155, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 149, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 108, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 30, -42,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -226, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -28, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 153, 3, -17, -47, 147, 176,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimDamageFlyX1_joint23[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 447, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 112, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 300, 282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 895, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 775, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 734, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 853, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 706, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 704, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 294, -261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -294,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimDamageFlyX1_joint24[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 94, -226, -93, 30, -212, 511,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -85, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -131, -108, 298, 304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -122, -3, 395, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -233, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 334, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -24, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -175, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -258, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -57, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -111, 67,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -328, -52, -17, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -13, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -300, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -277, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -191, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 61, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 235, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -40, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 16, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -185, 5, 14, -2, 235, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
