/* AnimJoint data for relocData file 1370 (FTKirbyAnimHammerIdle) */
/* 1280 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimHammerIdle_joint1[72];
extern u16 dFTKirbyAnimHammerIdle_joint2[12];
extern u16 dFTKirbyAnimHammerIdle_joint3[26];
extern u16 dFTKirbyAnimHammerIdle_joint5[26];
extern u16 dFTKirbyAnimHammerIdle_joint6[58];
extern u16 dFTKirbyAnimHammerIdle_joint7[14];
extern u16 dFTKirbyAnimHammerIdle_joint9[26];
extern u16 dFTKirbyAnimHammerIdle_joint10[58];
extern u16 dFTKirbyAnimHammerIdle_joint11[16];
extern u16 dFTKirbyAnimHammerIdle_joint13[34];
extern u16 dFTKirbyAnimHammerIdle_joint14[52];
extern u16 dFTKirbyAnimHammerIdle_joint16[14];
extern u16 dFTKirbyAnimHammerIdle_joint18[58];
extern u16 dFTKirbyAnimHammerIdle_joint19[52];
extern u16 dFTKirbyAnimHammerIdle_joint21[16];
extern u16 dFTKirbyAnimHammerIdle_joint22[62];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimHammerIdle_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimHammerIdle_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimHammerIdle_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimHammerIdle_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimHammerIdle_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimHammerIdle_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimHammerIdle_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimHammerIdle_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimHammerIdle_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimHammerIdle_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimHammerIdle_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimHammerIdle_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimHammerIdle_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimHammerIdle_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimHammerIdle_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimHammerIdle_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimHammerIdle_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimHammerIdle_joint1[72] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 660,
	ftAnimSetValRate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, -136, 4096, 273, 4096, -136,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 600, -200, 4096, 136, 4096, -273, 4096, 136,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 510, 4505, 3276, 4505,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, -136, 4096, 273, 4096, -136,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 660,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 600, -200, 4096, 136, 4096, -273, 4096, 136,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 510, 4505, 3276, 4505,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, -136, 4096, 273, 4096, -136,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 660,
	ftAnimLoop(0x6800, -140),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimHammerIdle_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimHammerIdle_joint3[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -178, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 268, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 0, -44,
	ftAnimLoop(0x6800, -50),
};

/* Joint 5 */
u16 dFTKirbyAnimHammerIdle_joint5[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 268, -71,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -240, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 0, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 714, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 268, -71,
	ftAnimLoop(0x6800, -50),
};

/* Joint 6 */
u16 dFTKirbyAnimHammerIdle_joint6[58] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, -1, -1706, 0, 0, 3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -804, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1708, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -37, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -39, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -64, -15,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -799, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -777, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -38, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, -26, -1706, 2, 0, 38,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimHammerIdle_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 9 */
u16 dFTKirbyAnimHammerIdle_joint9[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 268, -71,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 240, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 0, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 714, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 268, -71,
	ftAnimLoop(0x6800, -50),
};

/* Joint 10 */
u16 dFTKirbyAnimHammerIdle_joint10[58] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 1, -97, 3, 1608, 3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -804, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -100, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1571, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1569, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1544, -15,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -808, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -831, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1569, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 26, -94, 6, 1608, 38,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimHammerIdle_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTKirbyAnimHammerIdle_joint13[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -491, -31, -22, -1, -723, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 204, -120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -491, 31, -22, 1, -723, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -178, -8, -732,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -491, -31, -22, -1, -723, 0,
	ftAnimLoop(0x6800, -66),
};

/* Joint 14 */
u16 dFTKirbyAnimHammerIdle_joint14[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -198, 11, -280, -2, 392, -10,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 88, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -280, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -35, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -31, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -219, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 145, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 377, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -198, 20, 392, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -280,
	ftAnimLoop(0x6800, -102),
};

/* Joint 16 */
u16 dFTKirbyAnimHammerIdle_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 18 */
u16 dFTKirbyAnimHammerIdle_joint18[58] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1938, 2, 1624, 13, -1746, -4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1701, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1941, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 1719, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1726, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1601, 16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1717, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1742, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1944, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1938, 5, 1624, 22, -1746, -3,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimHammerIdle_joint19[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 33, -2, 280, 3, 31, 16,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 337, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 280, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 198, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 184, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 69, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 276, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 46, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 33, -36, 280, 0, 31, -15,
	ftAnimLoop(0x6800, -100),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimHammerIdle_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 22 */
u16 dFTKirbyAnimHammerIdle_joint22[62] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 262, 3, 111, 6, -51, -10,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 290, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -76, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 15, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 29, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 77, 32,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 284, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 270, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -64, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -55, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 262, -8, 111, 33, -51, 3,
	ftAnimLoop(0x6800, -116),
	ftAnimEnd(),
	0x0000, 0x0000,
};
