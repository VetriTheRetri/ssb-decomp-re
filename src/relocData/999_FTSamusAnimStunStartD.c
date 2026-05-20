/* AnimJoint data for relocData file 999 (FTSamusAnimStunStartD) */
/* 1840 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimStunStartD_joint1[30];
extern u16 dFTSamusAnimStunStartD_joint2[10];
extern u16 dFTSamusAnimStunStartD_joint4[54];
extern u16 dFTSamusAnimStunStartD_joint5[112];
extern u16 dFTSamusAnimStunStartD_joint6[46];
extern u16 dFTSamusAnimStunStartD_joint7[28];
extern u16 dFTSamusAnimStunStartD_joint8[10];
extern u16 dFTSamusAnimStunStartD_joint9[20];
extern u16 dFTSamusAnimStunStartD_joint11[10];
extern u16 dFTSamusAnimStunStartD_joint12[74];
extern u16 dFTSamusAnimStunStartD_joint14[32];
extern u16 dFTSamusAnimStunStartD_joint15[100];
extern u16 dFTSamusAnimStunStartD_joint17[32];
extern u16 dFTSamusAnimStunStartD_joint19[90];
extern u16 dFTSamusAnimStunStartD_joint20[82];
extern u16 dFTSamusAnimStunStartD_joint22[24];
extern u16 dFTSamusAnimStunStartD_joint23[120];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimStunStartD_joints[] = {
	(AObjEvent32 *)dFTSamusAnimStunStartD_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimStunStartD_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimStunStartD_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimStunStartD_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimStunStartD_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimStunStartD_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimStunStartD_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimStunStartD_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTSamusAnimStunStartD_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimStunStartD_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimStunStartD_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimStunStartD_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimStunStartD_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimStunStartD_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimStunStartD_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimStunStartD_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimStunStartD_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimStunStartD_joint1[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 697, 268, -321, 23, 200, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 268, -23, 0, -8, 0, 10, 17, -6, 780, 373, -18, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 0, 0, 0, 1600, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimStunStartD_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimStunStartD_joint4[54] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -158, -45, 44, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 268, 28, 0, -11, 0, -15, 0, -2, -21, -42, 91, 52,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -268, -268,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 402, -13,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -3, -31, -79, -19, 97, -16,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -38, 2, -46, 42, 71, -52,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimStunStartD_joint5[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -443, -24, 1343, 22, 509, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 812, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1734, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -641, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -753, -87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1188, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 877, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1102, 21,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1629, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1730, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1329, -134,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1739, 46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1743, 10, 1120, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1590, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1191, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1679, 92, 1196, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1469, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1162, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1525, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1503, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1488, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1480, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1132, 30, 1494, -9, 1474, -5,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimStunStartD_joint6[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -561, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -446, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -313, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -362, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -589, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -730, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -8,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimStunStartD_joint7[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 304, 113, -49, 0, 72, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 453, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 26), 701,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimStunStartD_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 86, 68, -29,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimStunStartD_joint9[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 480, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), 187, -8, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTSamusAnimStunStartD_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimStunStartD_joint12[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 64, -2, -46, 0, -992, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 74, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 182, 51, -158, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 230, 39, -34, 106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 53, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 68, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -18, -33,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 20, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -208, -12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 11, 11, -51, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 53, 8, -122, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 4, -128, -5, -215, -6,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimStunStartD_joint14[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -343, -39,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1086, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1034, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -697, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -702, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -600, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimStunStartD_joint15[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1285, -685, -1576, 156, -1753, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1057, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2364, -231, -1652, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2432, -31, -1571, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1855, 206, -1988, -222,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1128, -136,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1418, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1670, 124, -2197, -171,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2588, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1716, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1428, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1368, -14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2529, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -2003, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1735, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1526, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1385, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -1578, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1521, 5, -1581, -2, -1998, 5,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimStunStartD_joint17[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 182, 110,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1010, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1082, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1050, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 988, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 483, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimStunStartD_joint19[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -592, 242, -106, -5, 632, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 314, -197,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -305, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -350, 295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2, 252,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -267, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 101, -179,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -397, -115,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -372, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 188, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -173, 86, -515, -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -86, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -73, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 211, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -23, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -93, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -44, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, -2, -28, -5, -41, 2,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimStunStartD_joint20[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 364, 4, 7, 15, -333, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 149, -164,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 560, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -313, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -393, -129,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -843, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -17, -115,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 70, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 561, 0, -823, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -262, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 163, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 98, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 224, 2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -221, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -54, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 1, 160, -2, -49, 4,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimStunStartD_joint22[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 787, 23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1234, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1208, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 449, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimStunStartD_joint23[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -559, -62, -376, 23, 308, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -583, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -230, 195, 540, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 37, 217, 677, -104,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 202, 53, 17, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -622, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -187, 341,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 60, 90, 311, 20, -52, -141,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -403, -105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 92, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -22, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 168, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -476, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -421, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 57, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 197, 1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -404, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -216, 5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 198, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 193, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 161, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 144, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, -1, 193, 0, -213, 2,
	ftAnimEnd(),
};
