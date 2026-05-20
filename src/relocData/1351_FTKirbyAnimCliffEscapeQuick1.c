/* AnimJoint data for relocData file 1351 (FTKirbyAnimCliffEscapeQuick1) */
/* 1008 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimCliffEscapeQuick1_joint1[16];
extern u16 dFTKirbyAnimCliffEscapeQuick1_joint2[14];
extern u16 dFTKirbyAnimCliffEscapeQuick1_joint3[42];
extern u16 dFTKirbyAnimCliffEscapeQuick1_joint4[14];
extern u16 dFTKirbyAnimCliffEscapeQuick1_joint5[18];
extern u16 dFTKirbyAnimCliffEscapeQuick1_joint7[32];
extern u16 dFTKirbyAnimCliffEscapeQuick1_joint8[42];
extern u16 dFTKirbyAnimCliffEscapeQuick1_joint9[16];
extern u16 dFTKirbyAnimCliffEscapeQuick1_joint11[32];
extern u16 dFTKirbyAnimCliffEscapeQuick1_joint12[42];
extern u16 dFTKirbyAnimCliffEscapeQuick1_joint13[14];
extern u16 dFTKirbyAnimCliffEscapeQuick1_joint15[28];
extern u16 dFTKirbyAnimCliffEscapeQuick1_joint16[28];
extern u16 dFTKirbyAnimCliffEscapeQuick1_joint18[16];
extern u16 dFTKirbyAnimCliffEscapeQuick1_joint20[28];
extern u16 dFTKirbyAnimCliffEscapeQuick1_joint21[28];
extern u16 dFTKirbyAnimCliffEscapeQuick1_joint23[14];
extern u16 dFTKirbyAnimCliffEscapeQuick1_joint24[32];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTKirbyAnimCliffEscapeQuick1_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimCliffEscapeQuick1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimCliffEscapeQuick1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimCliffEscapeQuick1_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimCliffEscapeQuick1_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTKirbyAnimCliffEscapeQuick1_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTKirbyAnimCliffEscapeQuick1_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTKirbyAnimCliffEscapeQuick1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTKirbyAnimCliffEscapeQuick1_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTKirbyAnimCliffEscapeQuick1_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTKirbyAnimCliffEscapeQuick1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTKirbyAnimCliffEscapeQuick1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTKirbyAnimCliffEscapeQuick1_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTKirbyAnimCliffEscapeQuick1_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTKirbyAnimCliffEscapeQuick1_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimCliffEscapeQuick1_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTKirbyAnimCliffEscapeQuick1_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTKirbyAnimCliffEscapeQuick1_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTKirbyAnimCliffEscapeQuick1_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTKirbyAnimCliffEscapeQuick1_joint1[16] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 840, 384, -480, 528,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), 0, 533,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimCliffEscapeQuick1_joint2[14] = {
	ftAnimSetValRate(FT_ANIM_TRAY), 600, 480,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), 600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimCliffEscapeQuick1_joint3[42] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 1608, 189,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), 8, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 3216, 241,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 231, 1119,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 1190,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 768, 456,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 423, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 785, -55, 7, -24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTKirbyAnimCliffEscapeQuick1_joint4[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, -312, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimCliffEscapeQuick1_joint5[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 0, 17,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimCliffEscapeQuick1_joint7[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAY), 178, -120,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, -26, -357, -5, 0, -28, -120, 84,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, -60, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -536, -11, -357, -35,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTKirbyAnimCliffEscapeQuick1_joint8[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 994, -22, -1301, -9, 193, 33,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 164, -317,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1270, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 575, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 704, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -169, -358, 985, 313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -552, -382, -1230, 40, 1332, 347,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimCliffEscapeQuick1_joint9[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimCliffEscapeQuick1_joint11[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAY), -178, -120,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, -26, 357, 5, 0, 28, -120, 90,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, 60, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 536, 11, 357, 35,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTKirbyAnimCliffEscapeQuick1_joint12[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 614, 22, 306, -12, 1802, 34,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1444, 317,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 337, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 2183, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2313, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1777, 358, 2593, 314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2161, 383, 375, 37, 2942, 349,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimCliffEscapeQuick1_joint13[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimCliffEscapeQuick1_joint15[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, -1072,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 204, -120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -274, -7, 276, 36, -636, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -867, -59, 324, 4, -544, 9,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTKirbyAnimCliffEscapeQuick1_joint16[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 60, 19, -329, -12, -4, -15,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 147, -6, -321, 5, -68, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 139, -8, -312, 9, -48, 20,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimCliffEscapeQuick1_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTKirbyAnimCliffEscapeQuick1_joint20[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -120, -48, 197, 0, -2553, -39,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -396, -19, -29, -51, -2856, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -406, -9, -80, -51, -2907, -51,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimCliffEscapeQuick1_joint21[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -60, -21, 329, 11, -4, -19,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -145, 6, 322, -5, -64, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -139, 6, 312, -10, -48, 16,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTKirbyAnimCliffEscapeQuick1_joint23[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTKirbyAnimCliffEscapeQuick1_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1488, 48, 1806, 0, -945, -42,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1211, 19, 1579, -51, -1244, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1202, 9, 1527, -51, -1299, -54,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
