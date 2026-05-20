/* AnimJoint data for relocData file 749 (FTFoxAnimHammerLanding) */
/* 1472 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimHammerLanding_joint1[8];
extern u16 dFTFoxAnimHammerLanding_joint2[24];
extern u16 dFTFoxAnimHammerLanding_joint4[24];
extern u16 dFTFoxAnimHammerLanding_joint5[48];
extern u16 dFTFoxAnimHammerLanding_joint6[14];
extern u16 dFTFoxAnimHammerLanding_joint7[12];
extern u16 dFTFoxAnimHammerLanding_joint8[16];
extern u16 dFTFoxAnimHammerLanding_joint10[12];
extern u16 dFTFoxAnimHammerLanding_joint11[44];
extern u16 dFTFoxAnimHammerLanding_joint12[16];
extern u16 dFTFoxAnimHammerLanding_joint13[38];
extern u16 dFTFoxAnimHammerLanding_joint15[12];
extern u16 dFTFoxAnimHammerLanding_joint16[52];
extern u16 dFTFoxAnimHammerLanding_joint18[56];
extern u16 dFTFoxAnimHammerLanding_joint20[56];
extern u16 dFTFoxAnimHammerLanding_joint21[62];
extern u16 dFTFoxAnimHammerLanding_joint23[54];
extern u16 dFTFoxAnimHammerLanding_joint24[86];
extern u16 dFTFoxAnimHammerLanding_joint25[20];
extern u16 dFTFoxAnimHammerLanding_joint26[30];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimHammerLanding_joints[] = {
	(AObjEvent32 *)dFTFoxAnimHammerLanding_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimHammerLanding_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimHammerLanding_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimHammerLanding_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimHammerLanding_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimHammerLanding_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimHammerLanding_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimHammerLanding_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimHammerLanding_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimHammerLanding_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimHammerLanding_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimHammerLanding_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimHammerLanding_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimHammerLanding_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimHammerLanding_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimHammerLanding_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimHammerLanding_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimHammerLanding_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimHammerLanding_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimHammerLanding_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimHammerLanding_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 960, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 2 */
u16 dFTFoxAnimHammerLanding_joint2[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -134, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 178, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 0, -31,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimHammerLanding_joint4[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -62,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -268, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 357, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 0, -62,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimHammerLanding_joint5[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1489, 7, 1270, 0, 883, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1514, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1271, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 532, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 588, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 935, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 930, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1498, 12, 913, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1489, 9, 1270, 0, 883, -30,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimHammerLanding_joint6[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 7 */
u16 dFTFoxAnimHammerLanding_joint7[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimHammerLanding_joint8[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 10 */
u16 dFTFoxAnimHammerLanding_joint10[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimHammerLanding_joint11[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1627, -5, 1942, 0, -2528, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1587, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1942, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -2884, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2823, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -2486, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1609, -19, -2503, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1627, -18, 1942, 0, -2528, -25,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimHammerLanding_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -7,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTFoxAnimHammerLanding_joint13[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, -16, 321, 6, 160, -36,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 62, 13, 321, -6, 160, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 223, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 259, 527,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 89, -16, 321, 6, 160, -36,
	ftAnimLoop(0x6800, -72),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimHammerLanding_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimHammerLanding_joint16[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 18, 0, -25, 0, 721, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 18, 0, -26, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 266, -283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -81, -305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -817, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -755, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -378, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -161, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 651, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18, 0, -25, 0, 721, 69,
	ftAnimLoop(0x6800, -100),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimHammerLanding_joint18[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 335, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -90,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 5, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 230, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 317, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 147, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 5,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTFoxAnimHammerLanding_joint20[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1617, 14, -1541, 5, -1452, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1655, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1535, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1790, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1782, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1497, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1499, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1742, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1671, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1635, -18, -1546, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1617, -17, -1541, -6, -1452, 94,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimHammerLanding_joint21[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1628, 6, 1579, -1, 890, 174,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1703, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1579, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1629, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1920, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1798, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1418, -313,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 998, -73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1698, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1636, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 893, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1628, 8, 1579, 0, 892, 0,
	ftAnimLoop(0x6800, -120),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimHammerLanding_joint23[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 98, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 142, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 234, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 326, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 256, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -128,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -104),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimHammerLanding_joint24[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -20, -1, 89, -5, 77, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -50, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 155, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -82, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -16, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -32, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -44, 6, 65, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -95, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 26, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -82, -97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -93, 99,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -58, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -34, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 150, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 97, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 51, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 77, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -20, 13, 89, -7, 80, 3,
	ftAnimLoop(0x6800, -168),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimHammerLanding_joint25[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 89, -64,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -343, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 240, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 89, -64,
	ftAnimLoop(0x6800, -38),
};

/* Joint 26 */
u16 dFTFoxAnimHammerLanding_joint26[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 504, -84,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 0, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -547, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -250, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 506, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 504, -84,
	ftAnimLoop(0x6800, -54),
	ftAnimEnd(),
	0x0000,
};
