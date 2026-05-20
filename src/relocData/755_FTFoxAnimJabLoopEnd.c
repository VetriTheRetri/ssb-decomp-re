/* AnimJoint data for relocData file 755 (FTFoxAnimJabLoopEnd) */
/* 944 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimJabLoopEnd_joint1[12];
extern u16 dFTFoxAnimJabLoopEnd_joint2[40];
extern u16 dFTFoxAnimJabLoopEnd_joint4[30];
extern u16 dFTFoxAnimJabLoopEnd_joint5[24];
extern u16 dFTFoxAnimJabLoopEnd_joint7[16];
extern u16 dFTFoxAnimJabLoopEnd_joint10[28];
extern u16 dFTFoxAnimJabLoopEnd_joint11[24];
extern u16 dFTFoxAnimJabLoopEnd_joint12[16];
extern u16 dFTFoxAnimJabLoopEnd_joint13[10];
extern u16 dFTFoxAnimJabLoopEnd_joint15[10];
extern u16 dFTFoxAnimJabLoopEnd_joint16[44];
extern u16 dFTFoxAnimJabLoopEnd_joint18[16];
extern u16 dFTFoxAnimJabLoopEnd_joint20[24];
extern u16 dFTFoxAnimJabLoopEnd_joint21[34];
extern u16 dFTFoxAnimJabLoopEnd_joint23[24];
extern u16 dFTFoxAnimJabLoopEnd_joint24[34];
extern u16 dFTFoxAnimJabLoopEnd_joint25[14];
extern u16 dFTFoxAnimJabLoopEnd_joint26[20];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimJabLoopEnd_joints[] = {
	(AObjEvent32 *)dFTFoxAnimJabLoopEnd_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimJabLoopEnd_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimJabLoopEnd_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimJabLoopEnd_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimJabLoopEnd_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTFoxAnimJabLoopEnd_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimJabLoopEnd_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimJabLoopEnd_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimJabLoopEnd_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimJabLoopEnd_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimJabLoopEnd_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimJabLoopEnd_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimJabLoopEnd_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimJabLoopEnd_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimJabLoopEnd_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimJabLoopEnd_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimJabLoopEnd_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimJabLoopEnd_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimJabLoopEnd_joint1[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 48, 912, -20,
	_FT_ANIM_CMD(11, 0, 1), 46,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimJabLoopEnd_joint2[40] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), 98, -139,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 14), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 6,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -535, 0, -601, 0, 436, 0, -88, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -141, -3,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX, 10), -338, 38, 0, 115,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_TRAX, 1), 2,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), 135, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 0, -27,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimJabLoopEnd_joint4[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTY), 278, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 156, -7,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 3,
	ftAnimSetValRateBlock(FT_ANIM_ROTZ), 31, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 81, 1,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 2,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 189, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 309, 13,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 1,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimJabLoopEnd_joint5[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -132, 15, -404, 34, 326, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -102, -7, -174, 12, 263, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, -7, -165, 8, 258, -4,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimJabLoopEnd_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -898, 26,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -572, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimJabLoopEnd_joint10[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTY), 398, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 136, -33,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 3,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -38, -39, -115, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -113, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -118, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -72, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimJabLoopEnd_joint11[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 575, -43, 176, 43, 868, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 148, -23, 287, -16, 357, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, -15, 271, -15, 336, -20,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimJabLoopEnd_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -708, -74,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -605, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimJabLoopEnd_joint13[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 46,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimJabLoopEnd_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -706, -804, 2315, 59, -60, 12,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimJabLoopEnd_joint16[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_SCAZ), 4096,
	ftAnimSetValRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY), 4096, 0, 4096, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 11), 4096, 4095,
	_FT_ANIM_CMD(11, FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 3,
	ftAnimSetValRateT(FT_ANIM_SCAX, 11), 4096, 0,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX, 1), 3,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1415, -58, -1498, 37, -1820, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1229, -19, -1368, -6, -1649, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1202, -26, -1385, -17, -1635, 14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTFoxAnimJabLoopEnd_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1037, -116,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 436, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 353, -82,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimJabLoopEnd_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1789, 2, -1540, -26, -1847, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1645, 0, -1701, -29, -1710, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1655, 9, -1734, -32, -1664, 46,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimJabLoopEnd_joint21[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 145, 20, 139, -8, 195, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 326, 30, 128, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 161, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 135, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 122, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 28, 137, 9, 134, 11,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimJabLoopEnd_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 166, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 332, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 331, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimJabLoopEnd_joint24[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -52, -1, 15, 0, 25, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -4, 19, -88, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -108, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -162, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -220, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, 21, -102, -14, -226, -6,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimJabLoopEnd_joint25[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 219, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimJabLoopEnd_joint26[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 64, -450,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -86, -5, -511, -27, 265, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -178, -122, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
