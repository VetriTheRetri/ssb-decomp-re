/* AnimJoint data for relocData file 1124 (FTLinkAnimTurnRun) */
/* 2144 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimTurnRun_joint1[18];
extern u16 dFTLinkAnimTurnRun_joint2[42];
extern u16 dFTLinkAnimTurnRun_joint3[30];
extern u16 dFTLinkAnimTurnRun_joint5[30];
extern u16 dFTLinkAnimTurnRun_joint6[102];
extern u16 dFTLinkAnimTurnRun_joint7[40];
extern u16 dFTLinkAnimTurnRun_joint10[26];
extern u16 dFTLinkAnimTurnRun_joint11[68];
extern u16 dFTLinkAnimTurnRun_joint12[40];
extern u16 dFTLinkAnimTurnRun_joint13[8];
extern u16 dFTLinkAnimTurnRun_joint14[8];
extern u16 dFTLinkAnimTurnRun_joint17[8];
extern u16 dFTLinkAnimTurnRun_joint18[26];
extern u16 dFTLinkAnimTurnRun_joint19[26];
extern u16 dFTLinkAnimTurnRun_joint21[34];
extern u16 dFTLinkAnimTurnRun_joint22[102];
extern u16 dFTLinkAnimTurnRun_joint24[40];
extern u16 dFTLinkAnimTurnRun_joint26[110];
extern u16 dFTLinkAnimTurnRun_joint27[94];
extern u16 dFTLinkAnimTurnRun_joint29[36];
extern u16 dFTLinkAnimTurnRun_joint30[124];

/* Joint pointer table (30 entries, 120 bytes) */
AObjEvent32 * dFTLinkAnimTurnRun_joints[] = {
	(AObjEvent32 *)dFTLinkAnimTurnRun_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimTurnRun_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimTurnRun_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTLinkAnimTurnRun_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTLinkAnimTurnRun_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimTurnRun_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTLinkAnimTurnRun_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTLinkAnimTurnRun_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimTurnRun_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimTurnRun_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimTurnRun_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTLinkAnimTurnRun_joint17, /* [14] joint 17 */
	NULL, /* [15] NULL */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTLinkAnimTurnRun_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimTurnRun_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTLinkAnimTurnRun_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTLinkAnimTurnRun_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTLinkAnimTurnRun_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTLinkAnimTurnRun_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTLinkAnimTurnRun_joint27, /* [26] joint 27 */
	(AObjEvent32 *)dFTLinkAnimTurnRun_joint29, /* [27] joint 29 */
	NULL, /* [28] NULL */
	(AObjEvent32 *)dFTLinkAnimTurnRun_joint30, /* [29] joint 30 */
};

/* Joint 1 */
u16 dFTLinkAnimTurnRun_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 15), 1734, 734,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 1635, -713,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 1073,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimTurnRun_joint2[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 857, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 0, -72,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 838, -234, 95, 31,
	ftAnimSetValRateT(FT_ANIM_TRAY, 11), 465, 7,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), 47, -60,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 12, -35,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 11), -1608,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 857, -11,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTLinkAnimTurnRun_joint3[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 100, -161, -131,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -39, -10, -330, -12, 32, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -39, 10, -330, 12, 32, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 100, -161, -131,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimTurnRun_joint5[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 780, 464, 599,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 600, -9, 132, -39, 201, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 646, 13, -66, 24, 216, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 780, 464, 599,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimTurnRun_joint6[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 293, -124, -463, -50, -72, 142,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -138, -1, -471, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 203, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -28, -249,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1017, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -147, 22, -303, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 102, 17, -120, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 113, 6, -102, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -351, -130,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -112, -195,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -957, 92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -359, 352,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -492, -74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -444, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -360, -160, 44, 306,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 43, 231, 167, -180,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -500, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -522, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 258, 214, -479, 42, -31, -198,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimTurnRun_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, -211,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -665, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -528, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -275, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -438, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -887, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -742, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -317, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -66, 251,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimTurnRun_joint10[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 52, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 395, 30, -86, -12, -45, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 427, -27, -113, 10, -37, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 23, 52, 229,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimTurnRun_joint11[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 448, -2, 269, -9, 24, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 435, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 221, 19, -162, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 237, -14, -183, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 144, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 126, 15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 469, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 452, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 153, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 34, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 144, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 264, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 448, -4, 269, 4, 25, -9,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimTurnRun_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -884, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -403, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -285, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -209, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -370, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -867, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -896, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -889, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -884, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimTurnRun_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 22),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTLinkAnimTurnRun_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 22),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimTurnRun_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -385, -339,
	ftAnimBlock(0, 22),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimTurnRun_joint18[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -45, -3, -6, 4, -71, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -45, 3, -96, -11, 53, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, -163, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTLinkAnimTurnRun_joint19[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -247, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -280, -12, -15, -15, -37, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -427, 2, -434, -13, 279, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -247, -199, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimTurnRun_joint21[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -21, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 60, 3, 0, 24, 0, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 22, -5, 295, -34, -222, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -2, -4, -406, -28, 11, 21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -21, 0, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTLinkAnimTurnRun_joint22[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1562, -202, -1277, -31, 851, 313,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1261, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1765, -94, 1165, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1752, -1, 1123, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 879, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1853, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1798, 119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1133, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 856, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1052, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1309, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1218, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1103, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1621, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1059, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 833, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1237, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1275, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1610, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1582, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1563, 18, -1277, -1, 850, 17,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimTurnRun_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 581, -453,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 128, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 235, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 405, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 361, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1108, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1066, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 677, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 586, -91,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimTurnRun_joint26[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 425, 57, -282, 13, 267, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 774, 69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 513, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 244, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 319, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 567, -97,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 837, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 813, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 497, -347, 497, -128, 344, -219,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 58, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 117, -258, 128, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -19, -90, 83, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -330, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 506, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -12, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -116, -54,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -264, 93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 165, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -168, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -260, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 467, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 427, -39, -281, -20, 262, 96,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimTurnRun_joint27[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 17, 10, 161, 2, 40, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), -291, -42, 202, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 13, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -72, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -698, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -314, 43, 162, -2, -790, -107,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 103, 278, -816, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 197, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 344, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 120, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 353, 125, -494, 280,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 242, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 9, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 107, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 152, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 214, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 67, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 19, -48, 160, 8, 38, 28,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimTurnRun_joint29[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 677, -67,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 654, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 751, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1256, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1223, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 685, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 685, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 677, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 30 */
u16 dFTLinkAnimTurnRun_joint30[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2627, 5, -1461, -1, 1806, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1728, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1322, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -2560, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2397, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1981, 303, -1787, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1606, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1789, 100, 1229, -74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1249, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1838, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1878, -90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2181, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1519, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1637, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1255, -86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 967, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1955, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1753, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2076, 10, -1571, 81, 973, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1323, -17, 1384, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1733, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1972, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2139, -255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2482, -241, -1407, -68, 1707, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2622, -140, -1459, -52, 1803, 95,
	ftAnimEnd(),
	0x0000, 0x0000,
};
