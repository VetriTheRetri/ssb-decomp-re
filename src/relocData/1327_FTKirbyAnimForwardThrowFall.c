/* AnimJoint data for relocData file 1327 (FTKirbyAnimForwardThrowFall) */
/* 800 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimForwardThrowFall_joint1[8];
extern u16 dFTKirbyAnimForwardThrowFall_joint2[14];
extern u16 dFTKirbyAnimForwardThrowFall_joint3[12];
extern u16 dFTKirbyAnimForwardThrowFall_joint4[20];
extern u16 dFTKirbyAnimForwardThrowFall_joint6[14];
extern u16 dFTKirbyAnimForwardThrowFall_joint7[30];
extern u16 dFTKirbyAnimForwardThrowFall_joint8[14];
extern u16 dFTKirbyAnimForwardThrowFall_joint10[14];
extern u16 dFTKirbyAnimForwardThrowFall_joint11[30];
extern u16 dFTKirbyAnimForwardThrowFall_joint12[16];
extern u16 dFTKirbyAnimForwardThrowFall_joint14[12];
extern u16 dFTKirbyAnimForwardThrowFall_joint15[30];
extern u16 dFTKirbyAnimForwardThrowFall_joint17[16];
extern u16 dFTKirbyAnimForwardThrowFall_joint19[30];
extern u16 dFTKirbyAnimForwardThrowFall_joint20[30];
extern u16 dFTKirbyAnimForwardThrowFall_joint22[16];
extern u16 dFTKirbyAnimForwardThrowFall_joint23[30];
extern u16 dFTKirbyAnimForwardThrowFall_joint24[16];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTKirbyAnimForwardThrowFall_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimForwardThrowFall_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimForwardThrowFall_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimForwardThrowFall_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimForwardThrowFall_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTKirbyAnimForwardThrowFall_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTKirbyAnimForwardThrowFall_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimForwardThrowFall_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTKirbyAnimForwardThrowFall_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTKirbyAnimForwardThrowFall_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimForwardThrowFall_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTKirbyAnimForwardThrowFall_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTKirbyAnimForwardThrowFall_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTKirbyAnimForwardThrowFall_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTKirbyAnimForwardThrowFall_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTKirbyAnimForwardThrowFall_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTKirbyAnimForwardThrowFall_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTKirbyAnimForwardThrowFall_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTKirbyAnimForwardThrowFall_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTKirbyAnimForwardThrowFall_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 2 */
u16 dFTKirbyAnimForwardThrowFall_joint2[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 1608, 0, 600, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -26),
};

/* Joint 3 */
u16 dFTKirbyAnimForwardThrowFall_joint3[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimForwardThrowFall_joint4[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -536,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -580,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -536,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimForwardThrowFall_joint6[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -357, -357, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -26),
};

/* Joint 7 */
u16 dFTKirbyAnimForwardThrowFall_joint7[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -1163,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -435, 0, 827, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -435, -1, -1163, -1, 827, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -435, 0, 827, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1163,
	ftAnimLoop(0x6800, -58),
};

/* Joint 8 */
u16 dFTKirbyAnimForwardThrowFall_joint8[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 10 */
u16 dFTKirbyAnimForwardThrowFall_joint10[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 357, 357, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -26),
};

/* Joint 11 */
u16 dFTKirbyAnimForwardThrowFall_joint11[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 432, 2, 1161, 2, 824, 3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 435, 0, 1163, 0, 827, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 432, -2, 1161, -2, 824, -3,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimForwardThrowFall_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimLoop(0x6800, -30),
};

/* Joint 14 */
u16 dFTKirbyAnimForwardThrowFall_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimForwardThrowFall_joint15[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 123, -3, -328, -5, -4, 7,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 116, 4, -335, 8, 8, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 123, 6, -328, 6, -4, -12,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimForwardThrowFall_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimLoop(0x6800, -30),
};

/* Joint 19 */
u16 dFTKirbyAnimForwardThrowFall_joint19[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -166, 4, 203, 12, -2566, 11,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -162, -6, 215, -18, -2551, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -166, -4, 203, -12, -2566, -14,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimForwardThrowFall_joint20[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1485, 6, 1279, -6, -1612, 12,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1491, -6, 1273, 8, -1600, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1485, -6, 1279, 6, -1612, -12,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimForwardThrowFall_joint22[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimLoop(0x6800, -30),
};

/* Joint 23 */
u16 dFTKirbyAnimForwardThrowFall_joint23[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1442, -4, -1405, 12, -957, 14,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1446, 6, -1392, -18, -942, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1442, 4, -1405, -12, -957, -14,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTKirbyAnimForwardThrowFall_joint24[16] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1608, 0, 0, 840, 540,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
