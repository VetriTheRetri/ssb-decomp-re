/* AnimJoint data for relocData file 1087 (FTSamusAnimEnterPipe) */
/* 1680 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimEnterPipe_joint1[28];
extern u16 dFTSamusAnimEnterPipe_joint2[10];
extern u16 dFTSamusAnimEnterPipe_joint4[10];
extern u16 dFTSamusAnimEnterPipe_joint5[98];
extern u16 dFTSamusAnimEnterPipe_joint6[54];
extern u16 dFTSamusAnimEnterPipe_joint7[26];
extern u16 dFTSamusAnimEnterPipe_joint8[34];
extern u16 dFTSamusAnimEnterPipe_joint9[8];
extern u16 dFTSamusAnimEnterPipe_joint11[8];
extern u16 dFTSamusAnimEnterPipe_joint12[80];
extern u16 dFTSamusAnimEnterPipe_joint14[48];
extern u16 dFTSamusAnimEnterPipe_joint15[78];
extern u16 dFTSamusAnimEnterPipe_joint17[40];
extern u16 dFTSamusAnimEnterPipe_joint19[72];
extern u16 dFTSamusAnimEnterPipe_joint20[76];
extern u16 dFTSamusAnimEnterPipe_joint22[40];
extern u16 dFTSamusAnimEnterPipe_joint23[84];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimEnterPipe_joints[] = {
	(AObjEvent32 *)dFTSamusAnimEnterPipe_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimEnterPipe_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimEnterPipe_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimEnterPipe_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimEnterPipe_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimEnterPipe_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimEnterPipe_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimEnterPipe_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTSamusAnimEnterPipe_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimEnterPipe_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimEnterPipe_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimEnterPipe_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimEnterPipe_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimEnterPipe_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimEnterPipe_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimEnterPipe_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimEnterPipe_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimEnterPipe_joint1[28] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 1600,
	ftAnimSetValT(FT_ANIM_TRAX, 5), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 2), 1778,
	ftAnimSetValT(FT_ANIM_TRAY, 30), -700,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 27), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 27), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimEnterPipe_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimEnterPipe_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimEnterPipe_joint5[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2084, -63, -1722, 21, -1839, 111,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1770, -85, -1712, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1653, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1591, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1477, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1686, -51, -1723, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1630, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1647, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1626, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1598, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1623, 6,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 11), -1583,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1491, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1563, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1624, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1608, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1611, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 15), -1611,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 1598,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 15), 1598,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 12), -1583,
	ftAnimBlock(0, 11),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1611,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimEnterPipe_joint6[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, 27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -712, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -637, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -659, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -669, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -408, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -315, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -172, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimEnterPipe_joint7[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -65, -140, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 2, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimEnterPipe_joint8[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 67, -17, -1474,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 98, 60, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 34, -6, -61, -4, -1064, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -13, 0, -70, 0, -699, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 35, 1, -59, 0, -1075, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTSamusAnimEnterPipe_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTSamusAnimEnterPipe_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimEnterPipe_joint12[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1550, -51, -1479, -46, -1824, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1628, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1676, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1784, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1780, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1701, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1667, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1504, -9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1633, -4,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 21), -1646,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1673, 2,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 18), -1668,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1520, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1520, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1520, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1520, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -1520, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1668, -1646,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimEnterPipe_joint14[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, 75,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -519, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -389, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -423, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -447, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -344, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -284, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -196, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimEnterPipe_joint15[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, -34, -27, -15, -389, 113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 7, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -41, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -275, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -70, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -43, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2, -5, -43, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -21, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -21, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -21, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -41, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -41, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3, 0, -41, 0, -21, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimEnterPipe_joint17[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, -147,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 331, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 55, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 66, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 66, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 66, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 66, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimEnterPipe_joint19[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, 25, -28, 8, -41, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -15, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -14, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -19, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 102, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 67, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 12, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -21, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -21, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -21, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -15, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -15, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -14, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), -14, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -15, 0, -14, 0, -21, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimEnterPipe_joint20[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, 23, 160, -37, -49, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 271, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 123, -58, -13, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 44, -39, 88, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 238, -47, 43, -1, 62, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 176, -117, 41, -1, 39, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 41, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4, -86, -21, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4, 0, -21, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -21, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 24), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4, 0, 41, 0, -21, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimEnterPipe_joint22[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, -146,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 295, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 66, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 66, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 66, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 66, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimEnterPipe_joint23[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 141, -62, 193, -89, -214, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 15, -15, -49, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -159, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -18, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -17, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2, -6, -73, 35, -6, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -21, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 21, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 21, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 21, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -21, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -21, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1, 0, 21, 0, -21, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
