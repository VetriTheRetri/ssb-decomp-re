/* AnimJoint data for relocData file 1277 (FTKirbyAnimFallAerial) */
/* 800 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimFallAerial_joint1[12];
extern u16 dFTKirbyAnimFallAerial_joint2[12];
extern u16 dFTKirbyAnimFallAerial_joint3[22];
extern u16 dFTKirbyAnimFallAerial_joint5[14];
extern u16 dFTKirbyAnimFallAerial_joint6[38];
extern u16 dFTKirbyAnimFallAerial_joint7[16];
extern u16 dFTKirbyAnimFallAerial_joint9[14];
extern u16 dFTKirbyAnimFallAerial_joint10[38];
extern u16 dFTKirbyAnimFallAerial_joint11[16];
extern u16 dFTKirbyAnimFallAerial_joint13[12];
extern u16 dFTKirbyAnimFallAerial_joint14[32];
extern u16 dFTKirbyAnimFallAerial_joint16[14];
extern u16 dFTKirbyAnimFallAerial_joint18[30];
extern u16 dFTKirbyAnimFallAerial_joint19[34];
extern u16 dFTKirbyAnimFallAerial_joint21[16];
extern u16 dFTKirbyAnimFallAerial_joint22[36];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimFallAerial_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimFallAerial_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimFallAerial_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimFallAerial_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimFallAerial_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimFallAerial_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimFallAerial_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimFallAerial_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimFallAerial_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimFallAerial_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimFallAerial_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimFallAerial_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimFallAerial_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimFallAerial_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimFallAerial_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimFallAerial_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimFallAerial_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimFallAerial_joint1[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 600, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimFallAerial_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimFallAerial_joint3[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAZ), 268, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY), 0, 0, 0, 312, 0, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAZ, 4), 223, 3891,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAZ, 4), 268, 4096,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimFallAerial_joint5[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 178, -120, -120, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -26),
};

/* Joint 6 */
u16 dFTKirbyAnimFallAerial_joint6[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -572, -4, -609, -13, 1325, 8,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -619, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -599, 25, 1366, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -580, 13, 1338, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -572, 8, -609, 10, 1325, -12,
	ftAnimLoop(0x6800, -72),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimFallAerial_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 9 */
u16 dFTKirbyAnimFallAerial_joint9[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -178, 120, -120, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -26),
};

/* Joint 10 */
u16 dFTKirbyAnimFallAerial_joint10[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 572, 8, 609, 10, -1891, 12,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 619, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 603, -25, -1846, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 580, -15, -1878, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 572, -8, 609, -10, -1891, -12,
	ftAnimLoop(0x6800, -72),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimFallAerial_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTKirbyAnimFallAerial_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimFallAerial_joint14[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 242, -9, -430, 1, -209, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 229, 21, -430, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -164, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -195, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 242, 13, -430, 0, -209, -13,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimFallAerial_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 18 */
u16 dFTKirbyAnimFallAerial_joint18[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2118, 4, 1980, -2, -1218, -11,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -2114, -6, 1978, 3, -1226, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2118, -4, 1980, 2, -1218, 7,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimFallAerial_joint19[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -242, 13, -209, 13,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 430,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 429, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -204, -27, -169, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -232, -19, -200, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -9, 430, 1, -209, -9,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimFallAerial_joint21[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimFallAerial_joint22[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1098, -4, -1980, 2, -1218, -7,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1102, 6, -1978, -3, -1229, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1098, 4, -1980, -2, -1218, 11,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
