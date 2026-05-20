/* AnimJoint data for relocData file 1345 (FTKirbyAnimCliffClimbSlow1) */
/* 784 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimCliffClimbSlow1_joint1[22];
extern u16 dFTKirbyAnimCliffClimbSlow1_joint2[24];
extern u16 dFTKirbyAnimCliffClimbSlow1_joint3[12];
extern u16 dFTKirbyAnimCliffClimbSlow1_joint4[24];
extern u16 dFTKirbyAnimCliffClimbSlow1_joint6[36];
extern u16 dFTKirbyAnimCliffClimbSlow1_joint7[20];
extern u16 dFTKirbyAnimCliffClimbSlow1_joint8[8];
extern u16 dFTKirbyAnimCliffClimbSlow1_joint10[38];
extern u16 dFTKirbyAnimCliffClimbSlow1_joint11[20];
extern u16 dFTKirbyAnimCliffClimbSlow1_joint12[12];
extern u16 dFTKirbyAnimCliffClimbSlow1_joint14[24];
extern u16 dFTKirbyAnimCliffClimbSlow1_joint15[20];
extern u16 dFTKirbyAnimCliffClimbSlow1_joint17[8];
extern u16 dFTKirbyAnimCliffClimbSlow1_joint19[20];
extern u16 dFTKirbyAnimCliffClimbSlow1_joint20[20];
extern u16 dFTKirbyAnimCliffClimbSlow1_joint22[12];
extern u16 dFTKirbyAnimCliffClimbSlow1_joint23[26];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTKirbyAnimCliffClimbSlow1_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimCliffClimbSlow1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimCliffClimbSlow1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimCliffClimbSlow1_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimCliffClimbSlow1_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTKirbyAnimCliffClimbSlow1_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTKirbyAnimCliffClimbSlow1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimCliffClimbSlow1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTKirbyAnimCliffClimbSlow1_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTKirbyAnimCliffClimbSlow1_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimCliffClimbSlow1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTKirbyAnimCliffClimbSlow1_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTKirbyAnimCliffClimbSlow1_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTKirbyAnimCliffClimbSlow1_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTKirbyAnimCliffClimbSlow1_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTKirbyAnimCliffClimbSlow1_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTKirbyAnimCliffClimbSlow1_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTKirbyAnimCliffClimbSlow1_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimCliffClimbSlow1_joint1[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -120, 431, -240, 431,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 5), 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 4,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 0, 151,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 4,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimCliffClimbSlow1_joint2[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 600, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 21, 4096, -86, 4096, 21,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimCliffClimbSlow1_joint3[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	_FT_ANIM_CMD(11, 0, 1), 4,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimCliffClimbSlow1_joint4[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -446, 71, 0, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 178, 54, 0, 34,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimCliffClimbSlow1_joint6[36] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -60, 4096, 4096, 4096,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), -180,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 89, 57, 134, -31, -536, -6, 0, 47,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 5), 60,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 5), 178, 20, -268, -37, -536, 13, -180, 25,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 1), 4,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimCliffClimbSlow1_joint7[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 334, -64, -1370, 19, 1369, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, -64, -1351, 19, 1526, 156,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimCliffClimbSlow1_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimCliffClimbSlow1_joint10[38] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 180, -60,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 89, 57, -134, 31, 536, 6, 0, 47,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 5), 60,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 178, 20, 268, 37, 536, -13, 180, -25, -60, -50,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 4,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimCliffClimbSlow1_joint11[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -336, 63, 1379, -26, 1369, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -272, 63, 1352, -26, 1522, 153,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimCliffClimbSlow1_joint12[12] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimCliffClimbSlow1_joint14[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 204, -120, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 18, 72, 287, -94, -298, 141,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 88, 23, -42, -83, -27, 94,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimCliffClimbSlow1_joint15[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, -40, -328, 0, 103, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -50, -40, -329, 0, 178, 75,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimCliffClimbSlow1_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimCliffClimbSlow1_joint19[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, 29, 212, 9, -2529, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -41, 29, 222, 9, -2503, 25,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimCliffClimbSlow1_joint20[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, 40, 328, 1, 99, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 47, 40, 329, 1, 174, 75,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimCliffClimbSlow1_joint22[12] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTKirbyAnimCliffClimbSlow1_joint23[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1537, -29, -1396, 9, -924, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1566, -29, -1386, 9, -899, 25,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
