/* AnimJoint data for relocData file 724 (FTFoxAnimCliffClimbSlow2) */
/* 1200 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimCliffClimbSlow2_joint1[10];
extern u16 dFTFoxAnimCliffClimbSlow2_joint2[16];
extern u16 dFTFoxAnimCliffClimbSlow2_joint3[20];
extern u16 dFTFoxAnimCliffClimbSlow2_joint5[12];
extern u16 dFTFoxAnimCliffClimbSlow2_joint6[46];
extern u16 dFTFoxAnimCliffClimbSlow2_joint7[32];
extern u16 dFTFoxAnimCliffClimbSlow2_joint8[10];
extern u16 dFTFoxAnimCliffClimbSlow2_joint9[18];
extern u16 dFTFoxAnimCliffClimbSlow2_joint11[10];
extern u16 dFTFoxAnimCliffClimbSlow2_joint12[46];
extern u16 dFTFoxAnimCliffClimbSlow2_joint13[28];
extern u16 dFTFoxAnimCliffClimbSlow2_joint14[26];
extern u16 dFTFoxAnimCliffClimbSlow2_joint16[10];
extern u16 dFTFoxAnimCliffClimbSlow2_joint17[60];
extern u16 dFTFoxAnimCliffClimbSlow2_joint19[32];
extern u16 dFTFoxAnimCliffClimbSlow2_joint21[46];
extern u16 dFTFoxAnimCliffClimbSlow2_joint22[38];
extern u16 dFTFoxAnimCliffClimbSlow2_joint24[16];
extern u16 dFTFoxAnimCliffClimbSlow2_joint25[34];
extern u16 dFTFoxAnimCliffClimbSlow2_joint26[18];
extern u16 dFTFoxAnimCliffClimbSlow2_joint27[18];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTFoxAnimCliffClimbSlow2_joints[] = {
	(AObjEvent32 *)dFTFoxAnimCliffClimbSlow2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimCliffClimbSlow2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimCliffClimbSlow2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTFoxAnimCliffClimbSlow2_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffClimbSlow2_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimCliffClimbSlow2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimCliffClimbSlow2_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimCliffClimbSlow2_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTFoxAnimCliffClimbSlow2_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffClimbSlow2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimCliffClimbSlow2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimCliffClimbSlow2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTFoxAnimCliffClimbSlow2_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffClimbSlow2_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTFoxAnimCliffClimbSlow2_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffClimbSlow2_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffClimbSlow2_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTFoxAnimCliffClimbSlow2_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffClimbSlow2_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimCliffClimbSlow2_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTFoxAnimCliffClimbSlow2_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimCliffClimbSlow2_joint1[10] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 319,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), 360,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimCliffClimbSlow2_joint2[16] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 26, 0, -11,
	ftAnimSetValBlock(FT_ANIM_TRAY), 552,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), 48, -20,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 8), 912,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTFoxAnimCliffClimbSlow2_joint3[20] = {
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValT(FT_ANIM_TRAX, 15), 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 7,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimCliffClimbSlow2_joint5[12] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 17,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 714, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 309, 156, 81,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimCliffClimbSlow2_joint6[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 715, -116, -8, -20, -810, 94,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 412, -257, -412, 427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -28, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -222, -161,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -183, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 83, -248, 138, 407,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -154, 44, 410, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, 44, -165, 17, 258, -151,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimCliffClimbSlow2_joint7[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -234, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -513, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -524, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -712, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 154,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimCliffClimbSlow2_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimCliffClimbSlow2_joint9[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTZ), -178,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -113, 136,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 8), -72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimCliffClimbSlow2_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimCliffClimbSlow2_joint12[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -661, 26, 7, 22, -457, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -179, 193, 222, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -156, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 57, 165, 275, 23, 319, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 151, 37, 269, -1, 400, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, -18, 271, 2, 336, -63,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimCliffClimbSlow2_joint13[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -7, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -138, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -549, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -657, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTFoxAnimCliffClimbSlow2_joint14[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 357, -35, 134, -11, -178, -5,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 89, -47, 0, -17, -223, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTFoxAnimCliffClimbSlow2_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimCliffClimbSlow2_joint17[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -37, -244, -569, 83, -42, 316,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -270, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -282, -134, 273, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -307, -25, 357, 84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 499, -131,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -288, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -201, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -262, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 244, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -315, -58, -7, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -89, -223, 38, -26, -19,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimCliffClimbSlow2_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 292, -286,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 497, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -143,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimCliffClimbSlow2_joint21[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1186, 22, -1599, 28, 1354, 117,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1403, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1571, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1545, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1486, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1412, 77, 1308, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1558, 121, -1677, -81, 1389, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1655, 96, -1734, -57, 1552, 163,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimCliffClimbSlow2_joint22[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1423, 11, -1801, 5, 1408, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1289, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1784, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1543, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1617, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1273, 17, 1683, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1253, 20, -1746, 38, 1743, 59,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimCliffClimbSlow2_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1086, -63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 488, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -156,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimCliffClimbSlow2_joint25[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2147, 43, 1500, -7, -2370, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1692, 29, -1921, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1775, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1630, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1581, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1592, -10, 1711, 18, -1835, 86,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimCliffClimbSlow2_joint26[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 23,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -599, 70, 28, 21,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 219, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTFoxAnimCliffClimbSlow2_joint27[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -6, -20, 105, -23, -166, 20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 64, -450,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -178, -122, 0,
	ftAnimEnd(),
	0x0000,
};
