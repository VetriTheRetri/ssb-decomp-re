/* AnimJoint data for relocData file 1325 (FTKirbyAnimCatchPull) */
/* 800 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimCatchPull_joint1[18];
extern u16 dFTKirbyAnimCatchPull_joint2[14];
extern u16 dFTKirbyAnimCatchPull_joint3[16];
extern u16 dFTKirbyAnimCatchPull_joint5[20];
extern u16 dFTKirbyAnimCatchPull_joint6[28];
extern u16 dFTKirbyAnimCatchPull_joint7[8];
extern u16 dFTKirbyAnimCatchPull_joint9[34];
extern u16 dFTKirbyAnimCatchPull_joint10[32];
extern u16 dFTKirbyAnimCatchPull_joint11[16];
extern u16 dFTKirbyAnimCatchPull_joint13[10];
extern u16 dFTKirbyAnimCatchPull_joint14[28];
extern u16 dFTKirbyAnimCatchPull_joint16[14];
extern u16 dFTKirbyAnimCatchPull_joint18[28];
extern u16 dFTKirbyAnimCatchPull_joint19[28];
extern u16 dFTKirbyAnimCatchPull_joint21[14];
extern u16 dFTKirbyAnimCatchPull_joint22[28];
extern u16 dFTKirbyAnimCatchPull_joint23[18];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTKirbyAnimCatchPull_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimCatchPull_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimCatchPull_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimCatchPull_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimCatchPull_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimCatchPull_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimCatchPull_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimCatchPull_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimCatchPull_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimCatchPull_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimCatchPull_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimCatchPull_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimCatchPull_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimCatchPull_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimCatchPull_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimCatchPull_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimCatchPull_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTKirbyAnimCatchPull_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimCatchPull_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 480, 4300, 3276, 4300,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 600, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimCatchPull_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAZ), -268, 600,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, -312,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 2), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimCatchPull_joint3[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 178, -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimCatchPull_joint5[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX), -268, -180,
	ftAnimSetValRate(FT_ANIM_TRAZ), -180, -288,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), -357, 0, -180,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimCatchPull_joint6[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, -344, -1073, 65, -74, 355,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -336, -386, -1008, -27, 280, 423,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -766, -429, -1128, -120, 772, 491,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimCatchPull_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimCatchPull_joint9[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, 178,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 120, 359, 60, 119, 60, -119,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 357, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 180, -479, 60, -239, -60, -959,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, -180,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimCatchPull_joint10[32] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1730, 1055, 1012, -168, 1979, 1008,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2786, 322, 843, -264, 2988, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2374, -411, 482, -360, 2380, -607,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimCatchPull_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimCatchPull_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimCatchPull_joint14[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 165, -204, -292, -67, -133, 365,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -38, -94, -359, -5, 231, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 14, -302, 57, 237, 5,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimCatchPull_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 461, -461,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -230,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimCatchPull_joint18[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1900, -50, 1700, 53, -1874, 206,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1950, -9, 1753, 42, -1667, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 32, 1785, 31, -1704, -37,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimCatchPull_joint19[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 332, -83, 304, -32, 588, -117,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 248, -155, 271, 0, 471, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -227, 302, 30, 233, -237,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimCatchPull_joint21[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimCatchPull_joint22[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 471, -78, 116, 8, 220, -252,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 392, -80, 124, 30, -31, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, -82, 176, 52, -99, -68,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTKirbyAnimCatchPull_joint23[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 600,
	ftAnimSetValRate(FT_ANIM_TRAZ), 1485, -1408,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 1608, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 360, 720,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
