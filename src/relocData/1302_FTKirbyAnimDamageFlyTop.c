/* AnimJoint data for relocData file 1302 (FTKirbyAnimDamageFlyTop) */
/* 688 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimDamageFlyTop_joint1[14];
extern u16 dFTKirbyAnimDamageFlyTop_joint2[14];
extern u16 dFTKirbyAnimDamageFlyTop_joint3[14];
extern u16 dFTKirbyAnimDamageFlyTop_joint5[14];
extern u16 dFTKirbyAnimDamageFlyTop_joint6[30];
extern u16 dFTKirbyAnimDamageFlyTop_joint7[16];
extern u16 dFTKirbyAnimDamageFlyTop_joint9[14];
extern u16 dFTKirbyAnimDamageFlyTop_joint10[30];
extern u16 dFTKirbyAnimDamageFlyTop_joint11[16];
extern u16 dFTKirbyAnimDamageFlyTop_joint13[12];
extern u16 dFTKirbyAnimDamageFlyTop_joint14[30];
extern u16 dFTKirbyAnimDamageFlyTop_joint16[16];
extern u16 dFTKirbyAnimDamageFlyTop_joint18[28];
extern u16 dFTKirbyAnimDamageFlyTop_joint19[12];
extern u16 dFTKirbyAnimDamageFlyTop_joint21[8];
extern u16 dFTKirbyAnimDamageFlyTop_joint22[32];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimDamageFlyTop_joints[] = {
	(u32)dFTKirbyAnimDamageFlyTop_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimDamageFlyTop_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimDamageFlyTop_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimDamageFlyTop_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimDamageFlyTop_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimDamageFlyTop_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimDamageFlyTop_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimDamageFlyTop_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimDamageFlyTop_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimDamageFlyTop_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimDamageFlyTop_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimDamageFlyTop_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimDamageFlyTop_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimDamageFlyTop_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimDamageFlyTop_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimDamageFlyTop_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimDamageFlyTop_joint1[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 600, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -26),
};

/* Joint 2 */
u16 dFTKirbyAnimDamageFlyTop_joint2[14] = {
	ftAnimSetVal(FT_ANIM_ROTY), 804,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 16), 4021,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimDamageFlyTop_joint3[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -268, 0, 0, 0, 312, 180, 4096, 4096, 4096,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -26),
};

/* Joint 5 */
u16 dFTKirbyAnimDamageFlyTop_joint5[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -178, 178, -180, -120, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -26),
};

/* Joint 6 */
u16 dFTKirbyAnimDamageFlyTop_joint6[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2287, -2, -1083, -2, -238, 4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -2437, -3, -1039, -1, 44, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2439, -1, -1039, 0, 47, 3,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimDamageFlyTop_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 9 */
u16 dFTKirbyAnimDamageFlyTop_joint9[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 178, -178, 180, -120, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -26),
};

/* Joint 10 */
u16 dFTKirbyAnimDamageFlyTop_joint10[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2536, 1, 521, 0, -1845, 2,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -2387, 3, 571, 2, -1563, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2385, 1, 572, 0, -1560, 3,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimDamageFlyTop_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimDamageFlyTop_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimDamageFlyTop_joint14[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -101,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -56, 0, -233, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -56, 0, -233, 0, -101, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -54, 1, -233, 0, -105, -3,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimDamageFlyTop_joint16[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimDamageFlyTop_joint18[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -3068, -2195,
	ftAnimSetValRate(FT_ANIM_ROTY), 171, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -3068, 0, 171, 0, -2195, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3068, 0, 171, 0, -2199, -3,
	ftAnimLoop(0x6800, -54),
};

/* Joint 19 */
u16 dFTKirbyAnimDamageFlyTop_joint19[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -1553, 1374, 1503, 4096, 4096, 4096,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimDamageFlyTop_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 7,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 22 */
u16 dFTKirbyAnimDamageFlyTop_joint22[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 3068, 1017,
	ftAnimSetValRate(FT_ANIM_ROTY), -171, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 3068, 0, 1017, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), -171,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3068, 0, -171, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1017,
	ftAnimLoop(0x6800, -58),
	ftAnimEnd(),
	0x0000,
};
