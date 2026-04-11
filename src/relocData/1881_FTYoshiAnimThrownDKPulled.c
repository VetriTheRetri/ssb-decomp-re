/* AnimJoint data for relocData file 1881 (FTYoshiAnimThrownDKPulled) */
/* 2288 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimThrownDKPulled_joint2[54];
extern u16 dFTYoshiAnimThrownDKPulled_joint3[62];
extern u16 dFTYoshiAnimThrownDKPulled_joint4[34];
extern u16 dFTYoshiAnimThrownDKPulled_joint5[44];
extern u16 dFTYoshiAnimThrownDKPulled_joint7[26];
extern u16 dFTYoshiAnimThrownDKPulled_joint8[142];
extern u16 dFTYoshiAnimThrownDKPulled_joint11[68];
extern u16 dFTYoshiAnimThrownDKPulled_joint12[142];
extern u16 dFTYoshiAnimThrownDKPulled_joint13[64];
extern u16 dFTYoshiAnimThrownDKPulled_joint14[12];
extern u16 dFTYoshiAnimThrownDKPulled_joint15[10];
extern u16 dFTYoshiAnimThrownDKPulled_joint16[56];
extern u16 dFTYoshiAnimThrownDKPulled_joint18[54];
extern u16 dFTYoshiAnimThrownDKPulled_joint19[66];
extern u16 dFTYoshiAnimThrownDKPulled_joint21[48];
extern u16 dFTYoshiAnimThrownDKPulled_joint23[42];
extern u16 dFTYoshiAnimThrownDKPulled_joint24[62];
extern u16 dFTYoshiAnimThrownDKPulled_joint26[104];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTYoshiAnimThrownDKPulled_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTYoshiAnimThrownDKPulled_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimThrownDKPulled_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimThrownDKPulled_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimThrownDKPulled_joint5, /* [4] joint 5 */
	(u32)dFTYoshiAnimThrownDKPulled_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTYoshiAnimThrownDKPulled_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimThrownDKPulled_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTYoshiAnimThrownDKPulled_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimThrownDKPulled_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimThrownDKPulled_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimThrownDKPulled_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimThrownDKPulled_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimThrownDKPulled_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTYoshiAnimThrownDKPulled_joint19, /* [18] joint 19 */
	(u32)dFTYoshiAnimThrownDKPulled_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTYoshiAnimThrownDKPulled_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTYoshiAnimThrownDKPulled_joint24, /* [23] joint 24 */
	(u32)dFTYoshiAnimThrownDKPulled_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	0xFFFF0221, /* [26] END */
};

/* Joint 2 */
u16 dFTYoshiAnimThrownDKPulled_joint2[54] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, -168, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 5), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 3,
	ftAnimSetValRateT(FT_ANIM_TRAY, 11), 68, -129,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 3,
	ftAnimSetValRateBlock(FT_ANIM_ROTY | FT_ANIM_TRAZ), 0, 35, -240, -422,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -240, -408,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 24), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 6), 0, 0, -648, -187,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), -539, -662,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 4), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 8), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimThrownDKPulled_joint3[62] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 23, 18,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -223, -49, 0, 19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -223, 6, 0, 12, 0, 23, 30, 104, 20, 354,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -178, -28,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 36, 15, 184, 67, 567, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 0, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -510,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -178, -47,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 36, 184, 73,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -893, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimThrownDKPulled_joint4[34] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValRate(FT_ANIM_ROTX), -268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 536, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 761, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -268, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -208, 141,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 804,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTYoshiAnimThrownDKPulled_joint5[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 329,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 600, 329,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 3,
	ftAnimSetValRate(FT_ANIM_ROTX), -402, -105,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -402, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 357, 50,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 16), 536,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0, 600, -89, 329, 138,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 515, 461,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimThrownDKPulled_joint7[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 48, 120,
	ftAnimSetValRate(FT_ANIM_ROTX), 402, 88,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 402,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 402, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 446,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTYoshiAnimThrownDKPulled_joint8[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1683, 9, -552, 87, 981, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1683, 119, -552, -311, 981, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1436, 94, -1088, -382, 696, -143,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -967, 343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1494, 98, 726, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1297, -94, 573, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1683, -150, -552, 305, 981, 154,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -236, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1599, 38, 882, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1620, 4, 922, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1597, -31, -313, -157, 877, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1239, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1683, 149, 981, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1297, 94, 573, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1494, -98, 726, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1495, 6, -1317, 17, 694, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1481, 360, -1205, 210, 720, -315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -775, 703, -896, 74, 64, -673,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 432, -1055, 149, -626, -436,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, 50, -598, 367, -808, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 26, -62, -321, 276, -757, 51,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimThrownDKPulled_joint11[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -873, 66,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -806, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -793, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -493, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -846, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -592, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -477, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -873, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -846, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -493, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -692, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -873, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -892, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -674, 218,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTYoshiAnimThrownDKPulled_joint12[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 79, 56, 1052, -1, 2591, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 79, -74, 1052, 115, 2591, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -12, -35, 1282, 160, 2480, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1250, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -4, -8, 2492, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -9, 42, 2486, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 79, -148, 1052, -306, 2591, -152,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 367, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -306, -97, 2182, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -115, 95, 2329, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -114, -23, 289, 66, 2295, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -162, 97, 500, 381, 2308, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 79, 76, 1052, 374, 2591, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1345, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -9, -42, 2486, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4, 8, 2492, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1, 40, 2499, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1373, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1052, -366,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 79, -32, 2591, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -66, -52, 523, -366, 2423, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -24, 42, 319, -203, 2460, 36,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimThrownDKPulled_joint13[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -873, 62,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -810, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -492, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -777, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -646, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -485, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -779, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -492, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -592, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -858, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -674, 184,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimThrownDKPulled_joint14[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 172, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 3,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimThrownDKPulled_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimThrownDKPulled_joint16[56] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -190, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -223, -5, 0, 19, 0, -9,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -234, -3, 152, -25, -73, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -249, 1, -219, -20, 111, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -223, 2, 0, 68, 0, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -234, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 152, -73,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -268, 0, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimThrownDKPulled_joint18[54] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -153, -5, 0, 42, 0, -15,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -201, -2, 353, -23, -132, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -179, 6, -213, -50, 71, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -153, -4, 0, 104, 0, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -201, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 353, -132,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -357, 0, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTYoshiAnimThrownDKPulled_joint19[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0, 607, -202,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 38, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 245, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 271, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 42, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -184, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 53, -10, -283, 80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -23, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 245, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 264, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 197, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0, 0, 197, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimThrownDKPulled_joint21[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, 337,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 546, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 544, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 912, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1036, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 832, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 546, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 596, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 660, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 776, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 776, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimThrownDKPulled_joint23[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1607, -4, -83, 0, -263, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -83, 0, -263, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1525, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1491, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1578, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1558, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1525, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1525, 0, -83, 0, -263, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimThrownDKPulled_joint24[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 0, 611, -191,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 19), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -6, -265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -286, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 197, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 233, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 222, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 245, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -286, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -155, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 197, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 197, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0, 0, 197, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimThrownDKPulled_joint26[104] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 327,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 821, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1050, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 776, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 606, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 546, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1050, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1020, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 776, -43,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 776,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 776, 0,
	ftAnimEnd(),
	0x200E, 0x063C, 0xFFF7, 0xFFA7, 0x0000, 0xFF1C, 0x0000, 0x280D, 0x0013, 0xFFA7, 0x0000, 0xFF1C, 0x0000, 0x2003, 0x0006, 0x05BC, 0xFFBF, 0x2003, 0x0001, 0x0593, 0x0005, 0x2003, 0x0005, 0x062C, 0x0004, 0x2003, 0x0001, 0x0629, 0x0000, 0x2003, 0x0004, 0x05B4, 0xFFC1, 0x2003, 0x0001, 0x0593, 0xFFF0, 0x2003, 0x0001, 0x0593, 0x0000, 0x200F, 0x0001, 0x0593, 0x0000, 0xFFA7, 0x0000, 0xFF1C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
