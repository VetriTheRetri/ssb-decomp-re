/* AnimJoint data for relocData file 1431 (FTKirbyAnimInhaleGround) */
/* 848 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimInhaleGround_joint1[20];
extern u16 dFTKirbyAnimInhaleGround_joint2[12];
extern u16 dFTKirbyAnimInhaleGround_joint3[24];
extern u16 dFTKirbyAnimInhaleGround_joint4[12];
extern u16 dFTKirbyAnimInhaleGround_joint6[14];
extern u16 dFTKirbyAnimInhaleGround_joint7[30];
extern u16 dFTKirbyAnimInhaleGround_joint8[16];
extern u16 dFTKirbyAnimInhaleGround_joint10[14];
extern u16 dFTKirbyAnimInhaleGround_joint11[30];
extern u16 dFTKirbyAnimInhaleGround_joint12[16];
extern u16 dFTKirbyAnimInhaleGround_joint13[12];
extern u16 dFTKirbyAnimInhaleGround_joint15[10];
extern u16 dFTKirbyAnimInhaleGround_joint16[30];
extern u16 dFTKirbyAnimInhaleGround_joint18[14];
extern u16 dFTKirbyAnimInhaleGround_joint20[30];
extern u16 dFTKirbyAnimInhaleGround_joint21[30];
extern u16 dFTKirbyAnimInhaleGround_joint23[14];
extern u16 dFTKirbyAnimInhaleGround_joint24[30];
extern u16 dFTKirbyAnimInhaleGround_joint25[16];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTKirbyAnimInhaleGround_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimInhaleGround_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimInhaleGround_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimInhaleGround_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimInhaleGround_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTKirbyAnimInhaleGround_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleGround_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimInhaleGround_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTKirbyAnimInhaleGround_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleGround_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimInhaleGround_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTKirbyAnimInhaleGround_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTKirbyAnimInhaleGround_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleGround_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTKirbyAnimInhaleGround_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleGround_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleGround_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTKirbyAnimInhaleGround_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleGround_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTKirbyAnimInhaleGround_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTKirbyAnimInhaleGround_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 840,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 120, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 900,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 840,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimInhaleGround_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimInhaleGround_joint3[24] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4505, 4915, 4505,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4300, 5120, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4505, 4915, 4505,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimInhaleGround_joint4[12] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -10, 285, 5455, 5324, 2996,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimInhaleGround_joint6[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 268, 89, -120, -60, 120, 4096, 4096, 4096,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -26),
};

/* Joint 7 */
u16 dFTKirbyAnimInhaleGround_joint7[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1054, -10, -594, 20, 1470, 27,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1061, 6, -571, -31, 1494, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1054, 7, -594, -23, 1470, -23,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimInhaleGround_joint8[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 10 */
u16 dFTKirbyAnimInhaleGround_joint10[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -268, -89, 120, -60, 120, 4096, 4096, 4096,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -26),
};

/* Joint 11 */
u16 dFTKirbyAnimInhaleGround_joint11[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1053, 7, 594, -23, 1470, 23,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1061, -6, 571, 31, 1494, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1053, -7, 594, 23, 1470, -24,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimInhaleGround_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTKirbyAnimInhaleGround_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimInhaleGround_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -279, 0, 412, 120,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -16),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimInhaleGround_joint16[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -56, 3, -240, 1, 317, -7,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -54, -2, -238, -3, 313, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -56, -2, -240, -2, 317, 3,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimInhaleGround_joint18[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 20 */
u16 dFTKirbyAnimInhaleGround_joint20[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1900, 1, 1631, -5, -1456, 12,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1898, -2, 1625, 6, -1440, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1900, -1, 1631, 5, -1456, -15,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimInhaleGround_joint21[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 54, -2, 240, -2, 313, -3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 52, 2, 238, 3, 309, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 54, 2, 240, 2, 313, 3,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTKirbyAnimInhaleGround_joint23[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 24 */
u16 dFTKirbyAnimInhaleGround_joint24[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 291, -1, 22, -5, 148, 15,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 290, 2, 17, 6, 164, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 291, 1, 22, 5, 148, -15,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTKirbyAnimInhaleGround_joint25[16] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 1800,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
