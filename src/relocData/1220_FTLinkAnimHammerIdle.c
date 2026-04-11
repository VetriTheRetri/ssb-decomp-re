/* AnimJoint data for relocData file 1220 (FTLinkAnimHammerIdle) */
/* 1872 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimHammerIdle_joint1[16];
extern u16 dFTLinkAnimHammerIdle_joint2[16];
extern u16 dFTLinkAnimHammerIdle_joint4[26];
extern u16 dFTLinkAnimHammerIdle_joint5[70];
extern u16 dFTLinkAnimHammerIdle_joint6[32];
extern u16 dFTLinkAnimHammerIdle_joint9[28];
extern u16 dFTLinkAnimHammerIdle_joint10[80];
extern u16 dFTLinkAnimHammerIdle_joint11[32];
extern u16 dFTLinkAnimHammerIdle_joint12[28];
extern u16 dFTLinkAnimHammerIdle_joint13[12];
extern u16 dFTLinkAnimHammerIdle_joint16[8];
extern u16 dFTLinkAnimHammerIdle_joint17[18];
extern u16 dFTLinkAnimHammerIdle_joint18[26];
extern u16 dFTLinkAnimHammerIdle_joint20[22];
extern u16 dFTLinkAnimHammerIdle_joint21[84];
extern u16 dFTLinkAnimHammerIdle_joint23[44];
extern u16 dFTLinkAnimHammerIdle_joint25[98];
extern u16 dFTLinkAnimHammerIdle_joint26[98];
extern u16 dFTLinkAnimHammerIdle_joint28[140];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimHammerIdle_joints[] = {
	(u32)dFTLinkAnimHammerIdle_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimHammerIdle_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimHammerIdle_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimHammerIdle_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimHammerIdle_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimHammerIdle_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimHammerIdle_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimHammerIdle_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimHammerIdle_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimHammerIdle_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimHammerIdle_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimHammerIdle_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimHammerIdle_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimHammerIdle_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimHammerIdle_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimHammerIdle_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimHammerIdle_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimHammerIdle_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimHammerIdle_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF01A4, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimHammerIdle_joint1[16] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 901, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 821, 162,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 901, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimHammerIdle_joint2[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 184,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -178,
	ftAnimLoop(0x6800, -30),
};

/* Joint 4 */
u16 dFTLinkAnimHammerIdle_joint4[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -94, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 563, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 658, -69,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimHammerIdle_joint5[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1181, 0, -1547, -3, -2080, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1576, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1126, 44, -2406, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1082, -12, -2520, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2394, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1206, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1588, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1547, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2404, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2099, 26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1201, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1181, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1181, 0, -1547, 0, -2081, 18,
	ftAnimLoop(0x6800, -136),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimHammerIdle_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -749, -39,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -548, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -348, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -563, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -633, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -728, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -747, -19,
	ftAnimLoop(0x6800, -62),
};

/* Joint 9 */
u16 dFTLinkAnimHammerIdle_joint9[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -277, 96, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -109, -10, 32, -7, 99, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -366, -15, 33, 5, 172, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -277, 96, 220,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimHammerIdle_joint10[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -405, 0, -4, 20, -233, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -463, -44, 95, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -293, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -497, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -498, 39, 124, -37, -665, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -330, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -135, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -599, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -643, 51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -296, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -407, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, 24, -576, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -7, 5, -257, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, 2, -4, 3, -235, 22,
	ftAnimLoop(0x6800, -156),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimHammerIdle_joint11[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -573, -91,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -866, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -570, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -299, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -294, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -568, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -573, -4,
	ftAnimLoop(0x6800, -62),
};

/* Joint 12 */
u16 dFTLinkAnimHammerIdle_joint12[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 293, 373, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -49, 0, 253, -27, -54, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 285, 31, 148, 11, 316, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 293, 373, 15,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLinkAnimHammerIdle_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 804, -804, 804, 48, 12, 60,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLinkAnimHammerIdle_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 17 */
u16 dFTLinkAnimHammerIdle_joint17[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 0, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 0,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimHammerIdle_joint18[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 184,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -252, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -66, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 126, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 201, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 184,
	ftAnimLoop(0x6800, -50),
};

/* Joint 20 */
u16 dFTLinkAnimHammerIdle_joint20[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -189,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -189, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 168, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -225, -65,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -189,
	ftAnimLoop(0x6800, -42),
};

/* Joint 21 */
u16 dFTLinkAnimHammerIdle_joint21[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1675, -99, -1171, 0, 1059, 84,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1350, -3, 1361, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -2008, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1853, 135,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1543, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1333, -9, 1142, -229,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 689, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1519, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1425, 91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1241, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1709, -162, 909, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1820, 59, 1311, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1766, 55, 1231, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1709, 44, -1200, 33, 1132, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1677, 32, -1173, 26, 1064, -68,
	ftAnimLoop(0x6800, -164),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimHammerIdle_joint23[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1053, -90,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 748, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 503, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 959, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1069, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 823, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 590, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 890, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 998, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1050, 51,
	ftAnimLoop(0x6800, -86),
};

/* Joint 25 */
u16 dFTLinkAnimHammerIdle_joint25[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2564, 16, 390, 0, 44, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 252, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2601, -100, -56, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2755, -70, -259, -85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2758, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 97, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 166, -98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 123, 146,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2815, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2693, -51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 33, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -173, 94,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 273, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 357, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2761, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2651, 79,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 386, 16, -57, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2571, 79, 391, 4, 36, 94,
	ftAnimLoop(0x6800, -192),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimHammerIdle_joint26[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 282, -45, 231, 38, -7, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -17, -113, 304, -34, -554, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -104, -15, 246, -21, -724, -109,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 331, -70, -512, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 147, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 358, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 106, -149, 201, -50, -422, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 259, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -641, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 59, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 54, 170,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 300, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 352, -75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 252, 151, -384, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 358, 24, 232, -61, -148, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 302, -56, 229, -3, -48, 99,
	ftAnimLoop(0x6800, -192),
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimHammerIdle_joint28[140] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 475, 147,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1091, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 876, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 629, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 642, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1176, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1048, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 770, -316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 416, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 450, 34,
	ftAnimLoop(0x6800, -86),
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1202, -16, 1926, 7, -1824, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1945, 74, -1662, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1318, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1409, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1301, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1040, -120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1228, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2036, -85, -1713, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1774, -110, -1966, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1211, 12, 1816, 44, -1942, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1990, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1351, -105, -1652, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1147, -196, -1528, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1578, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 957, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1019, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1177, 158, 1941, -48, -1755, -176,
	ftAnimLoop(0x6800, -180),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
