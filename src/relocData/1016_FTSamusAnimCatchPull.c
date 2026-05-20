/* AnimJoint data for relocData file 1016 (FTSamusAnimCatchPull) */
/* 992 bytes: 132-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimCatchPull_joint1[18];
extern u16 dFTSamusAnimCatchPull_joint2[10];
extern u16 dFTSamusAnimCatchPull_joint4[32];
extern u16 dFTSamusAnimCatchPull_joint5[24];
extern u16 dFTSamusAnimCatchPull_joint6[16];
extern u16 dFTSamusAnimCatchPull_joint7[20];
extern u16 dFTSamusAnimCatchPull_joint8[18];
extern u16 dFTSamusAnimCatchPull_joint11[20];
extern u16 dFTSamusAnimCatchPull_joint12[24];
extern u16 dFTSamusAnimCatchPull_joint13[16];
extern u16 dFTSamusAnimCatchPull_joint20[32];
extern u16 dFTSamusAnimCatchPull_joint21[28];
extern u16 dFTSamusAnimCatchPull_joint23[20];
extern u16 dFTSamusAnimCatchPull_joint24[24];
extern u16 dFTSamusAnimCatchPull_joint26[16];
extern u16 dFTSamusAnimCatchPull_joint28[24];
extern u16 dFTSamusAnimCatchPull_joint29[24];
extern u16 dFTSamusAnimCatchPull_joint31[16];
extern u16 dFTSamusAnimCatchPull_joint32[24];
extern u16 dFTSamusAnimCatchPull_joint33[24];

/* Joint pointer table (33 entries, 132 bytes) */
AObjEvent32 * dFTSamusAnimCatchPull_joints[] = {
	(AObjEvent32 *)dFTSamusAnimCatchPull_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimCatchPull_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimCatchPull_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimCatchPull_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimCatchPull_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimCatchPull_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimCatchPull_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimCatchPull_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimCatchPull_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimCatchPull_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTSamusAnimCatchPull_joint20, /* [13] joint 20 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	NULL, /* [16] NULL */
	NULL, /* [17] NULL */
	NULL, /* [18] NULL */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTSamusAnimCatchPull_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTSamusAnimCatchPull_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTSamusAnimCatchPull_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTSamusAnimCatchPull_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTSamusAnimCatchPull_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTSamusAnimCatchPull_joint29, /* [28] joint 29 */
	(AObjEvent32 *)dFTSamusAnimCatchPull_joint31, /* [29] joint 31 */
	NULL, /* [30] NULL */
	(AObjEvent32 *)dFTSamusAnimCatchPull_joint32, /* [31] joint 32 */
	(AObjEvent32 *)dFTSamusAnimCatchPull_joint33, /* [32] joint 33 */
};

/* Joint 1 */
u16 dFTSamusAnimCatchPull_joint1[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1063, 0, 253, -1,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 50), 1063, 0, 252, -1,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 40,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimCatchPull_joint2[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 60,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimCatchPull_joint4[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 284, 0, 405, 0, 213, 0, 40, 0, -6, 0, 58, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 50), 284, 0, 405, 0, 213, 0, 40, 0, -6, 0, 58, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 40,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimCatchPull_joint5[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1199, 0, -1252, 0, 1639, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1190, 1, -1255, 0, 1623, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1188, 1, -1255, 0, 1620, -2,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimCatchPull_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -344, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -329, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -327, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimCatchPull_joint7[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -518, 0, -9, 0, 16, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), -518, 0, -9, 0, 16, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 40,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimCatchPull_joint8[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 67, -17, -1474,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 98, 60, -42,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 70), 86, 68, -29,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 60,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimCatchPull_joint11[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -440, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), 0, 0, -440, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 40,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimCatchPull_joint12[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1868, -2, 1333, -1, 1015, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1834, -5, 1314, -3, 1035, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1829, -5, 1311, -3, 1039, 3,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTSamusAnimCatchPull_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -364, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -381, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -383, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimCatchPull_joint20[32] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 15,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY), -835, -626, -778, 6144, 6144,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY, 52), -835, -626, -778, 6144, 6144,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY, 1), 40,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAZ), 589, 11, 2441,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_SCAZ, 12), 824, 163,
	ftAnimSetValT(FT_ANIM_TRAZ, 34), 11,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTSamusAnimCatchPull_joint21[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 458, 13, 5,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 53), 4096, 4096, 4096,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 41,
	ftAnimSetValAfterT(FT_ANIM_ROTX, 55), 352,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 41,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimCatchPull_joint23[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 891, 28, -21, 4096, 4096, 4096,
	ftAnimSetValAfterT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 50), 891, 28, -21, 4096, 4096, 4096,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 40,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTSamusAnimCatchPull_joint24[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 124, 0, -11, 0, -629, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 125, 0, -11, 0, -630, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 125, 0, -10, 0, -630, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTSamusAnimCatchPull_joint26[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1075, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1076, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1076, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 28 */
u16 dFTSamusAnimCatchPull_joint28[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -115, 0, -14, 0, -410, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -116, 0, -14, 0, -409, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -116, 0, -14, 0, -409, 0,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTSamusAnimCatchPull_joint29[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 80, 0, 213, 0, -54, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 80, 0, 212, 0, -55, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 80, 0, 212, 0, -55, 0,
	ftAnimEnd(),
};

/* Joint 31 */
u16 dFTSamusAnimCatchPull_joint31[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 873, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 873, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 873, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 32 */
u16 dFTSamusAnimCatchPull_joint32[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -354, 0, 489, 0, -426, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -353, 0, 490, 0, -426, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -353, 0, 490, 0, -426, 0,
	ftAnimEnd(),
};

/* Joint 33 */
u16 dFTSamusAnimCatchPull_joint33[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 1608, 0,
	ftAnimSetValRate(FT_ANIM_TRAY), -99, -10,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), -15, 4437,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 11), -261, 1182,
	ftAnimSetValRateT(FT_ANIM_TRAY, 11), -141, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
