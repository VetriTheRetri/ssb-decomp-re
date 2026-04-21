/* AnimJoint data for relocData file 1304 (FTKirbyAnimFallSpecial) */
/* 640 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimFallSpecial_joint1[12];
extern u16 dFTKirbyAnimFallSpecial_joint2[12];
extern u16 dFTKirbyAnimFallSpecial_joint3[22];
extern u16 dFTKirbyAnimFallSpecial_joint5[14];
extern u16 dFTKirbyAnimFallSpecial_joint6[32];
extern u16 dFTKirbyAnimFallSpecial_joint7[14];
extern u16 dFTKirbyAnimFallSpecial_joint9[14];
extern u16 dFTKirbyAnimFallSpecial_joint10[32];
extern u16 dFTKirbyAnimFallSpecial_joint11[16];
extern u16 dFTKirbyAnimFallSpecial_joint13[12];
extern u16 dFTKirbyAnimFallSpecial_joint14[8];
extern u16 dFTKirbyAnimFallSpecial_joint16[8];
extern u16 dFTKirbyAnimFallSpecial_joint18[30];
extern u16 dFTKirbyAnimFallSpecial_joint19[8];
extern u16 dFTKirbyAnimFallSpecial_joint21[8];
extern u16 dFTKirbyAnimFallSpecial_joint22[34];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimFallSpecial_joints[] = {
	(u32)dFTKirbyAnimFallSpecial_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimFallSpecial_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimFallSpecial_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimFallSpecial_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimFallSpecial_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimFallSpecial_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimFallSpecial_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimFallSpecial_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimFallSpecial_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimFallSpecial_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimFallSpecial_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimFallSpecial_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimFallSpecial_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimFallSpecial_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimFallSpecial_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimFallSpecial_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimFallSpecial_joint1[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 600, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimFallSpecial_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimFallSpecial_joint3[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAZ), 804, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY), 0, 0, 0, 312, 0, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAZ, 4), 759, 3891,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAZ, 4), 804, 4096,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimFallSpecial_joint5[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, -60, -60, 0, 3072, 4096, 4096,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -26),
};

/* Joint 6 */
u16 dFTKirbyAnimFallSpecial_joint6[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1476, -22, -410, -13, -1329, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -424, 20, -1319, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1408, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1453, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1476, 22, -410, 13, -1329, -10,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimFallSpecial_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 9 */
u16 dFTKirbyAnimFallSpecial_joint9[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 60, -60, 0, 3072, 4096, 4096,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -26),
};

/* Joint 10 */
u16 dFTKirbyAnimFallSpecial_joint10[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 131, 19, 1197, -14, -2938, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1183, 19, -2932, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 200, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 151, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 128, -22, 1196, 13, -2942, -10,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimFallSpecial_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTKirbyAnimFallSpecial_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimFallSpecial_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1426, -1304, -34,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTKirbyAnimFallSpecial_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 7,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 18 */
u16 dFTKirbyAnimFallSpecial_joint18[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -18, 2, 220, 0, -2593, 8,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -15, -4, 220, 1, -2584, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -18, -2, 220, 0, -2593, -8,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimFallSpecial_joint19[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 182, 303, 1573,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 21 */
u16 dFTKirbyAnimFallSpecial_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 7,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 22 */
u16 dFTKirbyAnimFallSpecial_joint22[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1626, -2, -1387, 0, -984, 8,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1624, 4, -1388, 1, -976, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1626, 2, -1387, 0, -984, -8,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
