/* AnimJoint data for relocData file 1263 (FTKirbyAnimWalkEnd) */
/* 880 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimWalkEnd_joint1[18];
extern u16 dFTKirbyAnimWalkEnd_joint2[14];
extern u16 dFTKirbyAnimWalkEnd_joint3[28];
extern u16 dFTKirbyAnimWalkEnd_joint5[22];
extern u16 dFTKirbyAnimWalkEnd_joint6[34];
extern u16 dFTKirbyAnimWalkEnd_joint7[16];
extern u16 dFTKirbyAnimWalkEnd_joint9[22];
extern u16 dFTKirbyAnimWalkEnd_joint10[34];
extern u16 dFTKirbyAnimWalkEnd_joint11[16];
extern u16 dFTKirbyAnimWalkEnd_joint13[14];
extern u16 dFTKirbyAnimWalkEnd_joint14[36];
extern u16 dFTKirbyAnimWalkEnd_joint16[16];
extern u16 dFTKirbyAnimWalkEnd_joint18[34];
extern u16 dFTKirbyAnimWalkEnd_joint19[36];
extern u16 dFTKirbyAnimWalkEnd_joint21[16];
extern u16 dFTKirbyAnimWalkEnd_joint22[40];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimWalkEnd_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimWalkEnd_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimWalkEnd_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimWalkEnd_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimWalkEnd_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimWalkEnd_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimWalkEnd_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimWalkEnd_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimWalkEnd_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimWalkEnd_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimWalkEnd_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimWalkEnd_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimWalkEnd_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimWalkEnd_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimWalkEnd_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimWalkEnd_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimWalkEnd_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimWalkEnd_joint1[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 630, 90,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 600, 0,
	ftAnimLoop(0x6800, -34),
};

/* Joint 2 */
u16 dFTKirbyAnimWalkEnd_joint2[14] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 0, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), -268,
	ftAnimLoop(0x6800, -26),
};

/* Joint 3 */
u16 dFTKirbyAnimWalkEnd_joint3[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -89, 44,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -22, -1, 312, 12, 4096, -17, 4096, 35, 4096, -17,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 0, 0, 0, 312, 4096, 4096, 4096,
	ftAnimLoop(0x6800, -54),
};

/* Joint 5 */
u16 dFTKirbyAnimWalkEnd_joint5[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX), 268, -60,
	ftAnimSetValRate(FT_ANIM_ROTZ), -89, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 8), 0, 0, 0,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimWalkEnd_joint6[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX), 2197, 11, -1214, -3, -1116, -30, 3072, 89,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 2407, 11, -1382, -17, -1595, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, 5, -1391, -8, -1608, -12,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimWalkEnd_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimWalkEnd_joint9[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX), 268, 60,
	ftAnimSetValRate(FT_ANIM_ROTZ), 178, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 8), 0, 0, 0,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimWalkEnd_joint10[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX), 2326, 7, 429, -8, -181, 13, 3072, 89,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 2409, 5, 234, -25, -6, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, 2, 217, -16, 0, 6,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimWalkEnd_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTKirbyAnimWalkEnd_joint13[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	_FT_ANIM_CMD(11, 0, 1), 15,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimWalkEnd_joint14[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 284, -9, -204, -4, -323, 14,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -5, -30, -303, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 128, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 205, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, -18, -302, 0, 237, 32,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimWalkEnd_joint16[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimWalkEnd_joint18[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX), -1881, 8, 1972, -5, -1373, -21, 3686, 35,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1913, -8, 1795, -17, -1705, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, -4, 1785, -9, -1704, 0,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimWalkEnd_joint19[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 168, 0, 185, 5, 587, -7,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 35, -22, 300, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 319, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 257, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 23, -11, 302, 2, 237, -20,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimWalkEnd_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimLoop(0x6800, -30),
};

/* Joint 22 */
u16 dFTKirbyAnimWalkEnd_joint22[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX), -1306, 0, -1698, -5, -1581, -17, 3686, 35,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1299, 1, -1782, -5, -1717, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, 0, -1785, -3, -1704, 12,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
