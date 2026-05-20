/* AnimJoint data for relocData file 870 (FTDonkeyAnimThrownDK) */
/* 1472 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimThrownDK_joint2[20];
extern u16 dFTDonkeyAnimThrownDK_joint3[16];
extern u16 dFTDonkeyAnimThrownDK_joint5[16];
extern u16 dFTDonkeyAnimThrownDK_joint6[80];
extern u16 dFTDonkeyAnimThrownDK_joint7[40];
extern u16 dFTDonkeyAnimThrownDK_joint8[8];
extern u16 dFTDonkeyAnimThrownDK_joint9[24];
extern u16 dFTDonkeyAnimThrownDK_joint11[8];
extern u16 dFTDonkeyAnimThrownDK_joint12[126];
extern u16 dFTDonkeyAnimThrownDK_joint13[32];
extern u16 dFTDonkeyAnimThrownDK_joint14[16];
extern u16 dFTDonkeyAnimThrownDK_joint15[8];
extern u16 dFTDonkeyAnimThrownDK_joint17[20];
extern u16 dFTDonkeyAnimThrownDK_joint18[58];
extern u16 dFTDonkeyAnimThrownDK_joint20[24];
extern u16 dFTDonkeyAnimThrownDK_joint22[44];
extern u16 dFTDonkeyAnimThrownDK_joint23[58];
extern u16 dFTDonkeyAnimThrownDK_joint25[28];
extern u16 dFTDonkeyAnimThrownDK_joint26[58];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTDonkeyAnimThrownDK_joints[] = {
	NULL, /* [0] NULL */
	(AObjEvent32 *)dFTDonkeyAnimThrownDK_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimThrownDK_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTDonkeyAnimThrownDK_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTDonkeyAnimThrownDK_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimThrownDK_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimThrownDK_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimThrownDK_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTDonkeyAnimThrownDK_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTDonkeyAnimThrownDK_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimThrownDK_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimThrownDK_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimThrownDK_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTDonkeyAnimThrownDK_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTDonkeyAnimThrownDK_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTDonkeyAnimThrownDK_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTDonkeyAnimThrownDK_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTDonkeyAnimThrownDK_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTDonkeyAnimThrownDK_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTDonkeyAnimThrownDK_joint26, /* [25] joint 26 */
};

/* Joint 2 */
u16 dFTDonkeyAnimThrownDK_joint2[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 24, 651, -44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1608, -1608, -3216,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 24, 643, 126,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 24, 651, -44,
	ftAnimLoop(0x6800, -38),
};

/* Joint 3 */
u16 dFTDonkeyAnimThrownDK_joint3[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -86,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -41, -16, 0, -214, -154,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -291,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -86,
	ftAnimLoop(0x6800, -30),
};

/* Joint 5 */
u16 dFTDonkeyAnimThrownDK_joint5[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 284,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 24, 41, 0, 319, -157,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 474,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 284,
	ftAnimLoop(0x6800, -30),
};

/* Joint 6 */
u16 dFTDonkeyAnimThrownDK_joint6[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -136, -5, -344, -1, -812, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -300, 41, -335, -35, -473, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -244, 22, -376, -18, -559, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -307, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -318, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -543, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -559, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -414, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -798, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -281, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -142, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -332, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -345, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -136, 5, -344, 1, -812, -13,
	ftAnimLoop(0x6800, -156),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimThrownDK_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -533, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -183, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -320, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -419, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -539, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -533, 6,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimThrownDK_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -114, 26, 114,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -14),
};

/* Joint 9 */
u16 dFTDonkeyAnimThrownDK_joint9[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 174, -44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 358, 6, 327, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 314, -8, -327, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 174, -44,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimThrownDK_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -932, 70, 29,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -14),
};

/* Joint 12 */
u16 dFTDonkeyAnimThrownDK_joint12[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1595, 5, -1966, -3, -2014, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -2060, -93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -2328, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -1454, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1492, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1900, -342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2187, -216,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2889, -286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2360, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -2358, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2289, -282,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2464, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3066, -110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2889, 286,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2289, 282,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1604, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2360, 14, -2494, 350,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1948, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1995, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1492, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1575, -18,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1952, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2009, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1980, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1590, -10, -1970, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1595, -5, -1966, 3, -2014, -5,
	ftAnimLoop(0x6800, -248),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimThrownDK_joint13[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -504, -12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -718, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -690, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -639, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -591, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -516, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -504, 12,
	ftAnimLoop(0x6800, -62),
};

/* Joint 14 */
u16 dFTDonkeyAnimThrownDK_joint14[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 482, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 893, 357, 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 482, 0, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 15 */
u16 dFTDonkeyAnimThrownDK_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -14),
};

/* Joint 17 */
u16 dFTDonkeyAnimThrownDK_joint17[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), -646,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -404, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), -604,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -404,
	ftAnimLoop(0x6800, -38),
};

/* Joint 18 */
u16 dFTDonkeyAnimThrownDK_joint18[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1464, 1, -1324, 1, 1038, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 638, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -1330, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), -1347, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1344, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1323, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 680, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1032, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1355, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1463, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1464, -1, -1324, -1, 1038, 5,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimThrownDK_joint20[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 858, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 1125, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1103, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 863, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 858, -4,
	ftAnimLoop(0x6800, -46),
};

/* Joint 22 */
u16 dFTDonkeyAnimThrownDK_joint22[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -90, -2, 73, 0, 1, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), -99, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 72, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -71, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -58, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 0, 3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -93, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -90, 2, 73, 0, 1, 1,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimThrownDK_joint23[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -255, 3, 161, 4, -1011, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -484, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -21, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), 284, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 284, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 166, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -528, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1005, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -54, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -252, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -255, -3, 161, -4, -1011, -5,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimThrownDK_joint25[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1068, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 681, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 658, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 1058, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1066, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1068, 2,
	ftAnimLoop(0x6800, -54),
};

/* Joint 26 */
u16 dFTDonkeyAnimThrownDK_joint26[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, 0, 61, 0, -149, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 247, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 60, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -121, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -142, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 20, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 219, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -144, -10,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 20, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 21, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, 0, 61, 0, -149, -5,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};
