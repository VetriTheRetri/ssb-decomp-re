/* AnimJoint data for relocData file 1122 (FTLinkAnimRunBrake) */
/* 2144 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimRunBrake_joint1[34];
extern u16 dFTLinkAnimRunBrake_joint2[36];
extern u16 dFTLinkAnimRunBrake_joint4[38];
extern u16 dFTLinkAnimRunBrake_joint5[140];
extern u16 dFTLinkAnimRunBrake_joint6[64];
extern u16 dFTLinkAnimRunBrake_joint9[34];
extern u16 dFTLinkAnimRunBrake_joint10[72];
extern u16 dFTLinkAnimRunBrake_joint11[40];
extern u16 dFTLinkAnimRunBrake_joint12[8];
extern u16 dFTLinkAnimRunBrake_joint13[8];
extern u16 dFTLinkAnimRunBrake_joint16[10];
extern u16 dFTLinkAnimRunBrake_joint17[32];
extern u16 dFTLinkAnimRunBrake_joint18[32];
extern u16 dFTLinkAnimRunBrake_joint20[10];
extern u16 dFTLinkAnimRunBrake_joint21[92];
extern u16 dFTLinkAnimRunBrake_joint23[40];
extern u16 dFTLinkAnimRunBrake_joint25[86];
extern u16 dFTLinkAnimRunBrake_joint26[92];
extern u16 dFTLinkAnimRunBrake_joint28[146];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimRunBrake_joints[] = {
	(u32)dFTLinkAnimRunBrake_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimRunBrake_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimRunBrake_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimRunBrake_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimRunBrake_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimRunBrake_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimRunBrake_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimRunBrake_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimRunBrake_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimRunBrake_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimRunBrake_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimRunBrake_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimRunBrake_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimRunBrake_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimRunBrake_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimRunBrake_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimRunBrake_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimRunBrake_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimRunBrake_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF01E3, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimRunBrake_joint1[34] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 857, 11,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 838, -207, 95, 28,
	ftAnimSetValRateT(FT_ANIM_TRAY, 12), 465, -164,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), 47, -53,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 12, 219,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 494, 345, 300, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 901, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimRunBrake_joint2[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 100, -161, -131,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -39, -9, -330, -11, 32, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -39, -330, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -39, -6, -330, 60, 32, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -107, 276, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTLinkAnimRunBrake_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 780, 464, 599,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 600, -2, 132, -16, 201, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 749, 16, 218, 9, 187, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 749, -48, 218, -5, 187, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 259, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimRunBrake_joint5[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1901, -110, -1144, 46, 1535, 128,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1149, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1489, 13, 1731, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1515, 3, 1483, -239,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1623, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 661, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1315, -122,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1481, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1686, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1717, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1492, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1421, 83,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 846, 610,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1759, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1712, -325, -1287, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1108, -163, -1452, -39, 1839, 504,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1384, 254, -1366, 46, 1855, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1335, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1616, 165, 1736, -94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1759, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1666, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1751, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1589, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1306, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1835, 63, -1287, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1887, 51, -1281, 5, 1523, -65,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimRunBrake_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, -191,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -640, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -511, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -276, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -340, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -438, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -328, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -586, -349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1027, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -173, 510,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -350, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -504, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimRunBrake_joint9[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 52, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 395, 26, -86, -10, -45, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 427, -74, -113, 52, -37, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -295, -41, 393, 11, 429, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 4, 7, 76,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimRunBrake_joint10[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 448, -1, 269, -7, 24, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -233, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 370, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 237, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 270, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 249, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -248, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -201, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 368, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 414, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 250, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 129, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -183, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -57, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, 1, 123, -5, -50, 6,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimRunBrake_joint11[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -884, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -209, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -84, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -209, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -195, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -380, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -459, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -567, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, -19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimRunBrake_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 25),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimRunBrake_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 25),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimRunBrake_joint16[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -385, -339,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 1697,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -536, -339,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimRunBrake_joint17[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -45, -3, -6, 10, -71, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -45, -6, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -45, 4, -6, -15, -71, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -163, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimRunBrake_joint18[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -247, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -280, -2, -15, 12, -37, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -280, -15, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -280, 27, -15, -18, -37, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -199, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimRunBrake_joint20[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 25), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimRunBrake_joint21[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1562, -73, -1277, 1, 851, 117,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1297, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1732, 3, 1130, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1727, 7, 1113, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1212, 83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 739, -45,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1328, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1380, 90,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1143, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1504, -183,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 702, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1482, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1266, 73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1336, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1694, -143,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1833, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1622, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1850, -16, -1363, -26, 1714, 91,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimRunBrake_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 581, -142,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 236, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 269, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 361, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 869, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 665, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 431, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 254, -176,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimRunBrake_joint25[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 425, 14, -282, -9, 267, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 381, -45, 200, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 155, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 268, 95,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 188, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 337, -40, 184, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 110, -2, 7, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, 61, 194, 24, -86, -86,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 200, -186, -304, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 589, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 645, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 335, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -28, -165, -319, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -156, -15, -126, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, -6, -161, -5, -37, 89,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimRunBrake_joint26[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 17, 0, 161, 2, 40, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 144, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -191, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -83, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -173, -91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -708, 15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 150, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 145, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -180, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -384, -55,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 94, -22, -665, 88,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 345, 21, -241, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -413, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 253, 28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 344, -5, -233, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 288, -20, -168, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 16, 270, -17, -126, 42,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimRunBrake_joint28[146] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 677, -31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 688, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 768, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1216, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1243, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 932, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 941, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 541, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 427, -113,
	ftAnimEnd(),
	0x0000, 0x200E, 0x024D, 0x0005, 0xFA4B, 0xFFFC, 0x070E, 0x0007, 0x280D, 0x0007, 0xF90C, 0xFFC5, 0x05AC, 0xFF9A, 0x2003, 0x0006, 0x0373, 0x00BF, 0x2003, 0x0001, 0x0465, 0x00D1, 0x2803, 0x0006, 0x0531, 0x0011, 0x200D, 0x0001, 0xF8DF, 0xFFE8, 0x0545, 0xFFA3, 0x2805, 0x0007, 0xF909, 0xFFD6, 0x2809, 0x000A, 0x049B, 0xFFEB, 0x0801, 0x0005, 0x2003, 0x0001, 0x054F, 0x002A, 0x2803, 0x0005, 0x060C, 0xFF90, 0x0801, 0x0001, 0x2005, 0x0001, 0xF8D6, 0xFFD9, 0x2805, 0x0004, 0xF975, 0x008C, 0x0801, 0x0002, 0x2009, 0x0001, 0x0467, 0xFFB9, 0x2809, 0x0003, 0x047E, 0x008A, 0x2003, 0x0001, 0x057A, 0xFF72, 0x2803, 0x0004, 0x045C, 0x002B, 0x2005, 0x0001, 0xFA0A, 0x0071, 0x2805, 0x0003, 0xFA23, 0xFFD9, 0x0801, 0x0001, 0x2009, 0x0001, 0x0520, 0x0098, 0x2009, 0x0001, 0x05B0, 0x0070, 0x200F, 0x0001, 0x049A, 0x003E, 0xFA03, 0xFFE1, 0x0600, 0x0050, 0x0000, 0x0000, 0x0000,
};
