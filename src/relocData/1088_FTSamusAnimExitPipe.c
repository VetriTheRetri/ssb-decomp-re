/* AnimJoint data for relocData file 1088 (FTSamusAnimExitPipe) */
/* 1920 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimExitPipe_joint1[30];
extern u16 dFTSamusAnimExitPipe_joint2[10];
extern u16 dFTSamusAnimExitPipe_joint4[12];
extern u16 dFTSamusAnimExitPipe_joint5[110];
extern u16 dFTSamusAnimExitPipe_joint6[56];
extern u16 dFTSamusAnimExitPipe_joint7[26];
extern u16 dFTSamusAnimExitPipe_joint8[34];
extern u16 dFTSamusAnimExitPipe_joint9[10];
extern u16 dFTSamusAnimExitPipe_joint11[8];
extern u16 dFTSamusAnimExitPipe_joint12[102];
extern u16 dFTSamusAnimExitPipe_joint14[62];
extern u16 dFTSamusAnimExitPipe_joint15[74];
extern u16 dFTSamusAnimExitPipe_joint17[46];
extern u16 dFTSamusAnimExitPipe_joint19[84];
extern u16 dFTSamusAnimExitPipe_joint20[92];
extern u16 dFTSamusAnimExitPipe_joint22[40];
extern u16 dFTSamusAnimExitPipe_joint23[118];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimExitPipe_joints[] = {
	(u32)dFTSamusAnimExitPipe_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimExitPipe_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimExitPipe_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimExitPipe_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimExitPipe_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimExitPipe_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimExitPipe_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimExitPipe_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimExitPipe_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimExitPipe_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimExitPipe_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimExitPipe_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimExitPipe_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimExitPipe_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimExitPipe_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimExitPipe_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimExitPipe_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimExitPipe_joint1[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -700,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 18), 0,
	ftAnimSetValT(FT_ANIM_TRAY, 33), 1771,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 18), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 15), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 15), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 7), 0, 1600,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimExitPipe_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimExitPipe_joint4[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimExitPipe_joint5[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1598, 0, -1583, 0, -1611, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 26), 1600, 0, -1588, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -1608, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1608, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1636, -15,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1600, 3, -1589, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1673, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1827, 42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1653, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1700, -23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1692, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1868, 47, -1721, -6, -1729, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1642, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2043, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1704, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1656, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1654, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1756, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1665, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2067, 20, -1689, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2084, 17, -1722, -32, -1839, -83,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimExitPipe_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -452, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -586, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -722, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimExitPipe_joint7[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 31, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 701, 31, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimExitPipe_joint8[34] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 98, 60, -42,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 35, 1, -59, 0, -1075, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 35, -59, -1075,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 35, 1, -59, 1, -1075, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 67, 1, -17, 1, -1474, -18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTSamusAnimExitPipe_joint9[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 32,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTSamusAnimExitPipe_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimExitPipe_joint12[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1668, -2, -1646, 4, -1520, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -1629, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), -1680, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1554, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1611, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1608, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1608, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -1608, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1608, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1718, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1623, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1563, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1677, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1628, 11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1737, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1774, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1817, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1733, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1614, 19, -1544, 22, -1741, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1589, 31, -1517, 32, -1772, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1550, 39, -1479, 37, -1824, -51,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimExitPipe_joint14[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -196, 72,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -124, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -197, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -391, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -561, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, -33,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimExitPipe_joint15[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, -3, -41, 0, -21, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -14, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), -39, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 13, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 10, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -14, 0, 8, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -78, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 66, 20,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -42, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -38, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -92, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -218, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -316, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 20, -27, 11, -389, -73,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimExitPipe_joint17[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 66, -66,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 214, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 371, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, 106,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTSamusAnimExitPipe_joint19[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -15, 0, -14, 0, -21, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 32), -7, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), -2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 19, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 22, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 143, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 148, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 239, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -7, -2, 261, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 198, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -61, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -4, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -22, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 173, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 148, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 43, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -12, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, -14, -28, -6, -41, -29,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimExitPipe_joint20[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 41, 0, -21, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 110, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), 35, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 113, -10, 8, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 93, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 63, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 98, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 147, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 36, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 64, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 145, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 116, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 107, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -26, -62,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 91, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 100, -15, 105, 13, -68, -42,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimExitPipe_joint22[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 66, -62,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 328, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, 114,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimExitPipe_joint23[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 21, -4, -21, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 26), -27, -1, -77, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 38, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 44, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 154, 5,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -29, 6, -80, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 48, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 15, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 161, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 189, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 45, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 98, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 19, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 63, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 196, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 98, -46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 139, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 287, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 59, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 19, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 88, 29, -75, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 122, 33, -163, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 155, 33, 323, 35, -214, -50,
	ftAnimEnd(),
	0x0000, 0x0000,
};
