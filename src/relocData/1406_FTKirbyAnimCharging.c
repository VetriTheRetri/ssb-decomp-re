/* AnimJoint data for relocData file 1406 (FTKirbyAnimCharging) */
/* 848 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimCharging_joint1[20];
extern u16 dFTKirbyAnimCharging_joint2[14];
extern u16 dFTKirbyAnimCharging_joint3[20];
extern u16 dFTKirbyAnimCharging_joint5[26];
extern u16 dFTKirbyAnimCharging_joint6[30];
extern u16 dFTKirbyAnimCharging_joint7[16];
extern u16 dFTKirbyAnimCharging_joint9[28];
extern u16 dFTKirbyAnimCharging_joint10[44];
extern u16 dFTKirbyAnimCharging_joint11[16];
extern u16 dFTKirbyAnimCharging_joint13[12];
extern u16 dFTKirbyAnimCharging_joint14[30];
extern u16 dFTKirbyAnimCharging_joint16[16];
extern u16 dFTKirbyAnimCharging_joint18[30];
extern u16 dFTKirbyAnimCharging_joint19[30];
extern u16 dFTKirbyAnimCharging_joint21[16];
extern u16 dFTKirbyAnimCharging_joint22[32];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimCharging_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimCharging_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimCharging_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimCharging_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimCharging_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimCharging_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimCharging_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimCharging_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimCharging_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimCharging_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimCharging_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimCharging_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimCharging_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimCharging_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimCharging_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimCharging_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimCharging_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimCharging_joint1[20] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 600, -120, -240, -60,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 600, -240,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimCharging_joint2[14] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 3 */
u16 dFTKirbyAnimCharging_joint3[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 89, 16, 89, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 89, 89,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimCharging_joint5[26] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -268, -16, 0, -22, -60, -20, 0, 60, 0, 40,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -268, 0, -60, 0, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimCharging_joint6[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2196, 37, -96, 12, -852, 16,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -2190, -9, -97, -3, -851, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2195, -5, -99, -2, -854, -2,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimCharging_joint7[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimCharging_joint9[28] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX), 120,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 536, 33, 178, 33, -30, 40,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -120, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 8), 120, -48, -30, -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 536, 178,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimCharging_joint10[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1298, -127, 604, 15, -1153, -109,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1216, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 608, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1429, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1368, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1312, 35, -1164, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, 14, 604, -4, -1153, 11,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimCharging_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTKirbyAnimCharging_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimCharging_joint14[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 123, 10, -328, -5, -4, -12,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 124, -3, -329, 0, -6, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 120, -4, -329, 0, 0, 6,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimCharging_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimLoop(0x6800, -30),
};

/* Joint 18 */
u16 dFTKirbyAnimCharging_joint18[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1970, -3, 1786, 0, -1536, -5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1971, 0, 1786, 0, -1537, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1970, 0, 1786, 0, -1533, 4,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimCharging_joint19[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -76, 20, 199, -11, 657, 14,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -71, -5, 198, 2, 663, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -76, -4, 199, 1, 657, -5,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimCharging_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimLoop(0x6800, -30),
};

/* Joint 22 */
u16 dFTKirbyAnimCharging_joint22[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1034, -32, -1769, 13, -1042, -1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1038, 8, -1767, -3, -1038, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1034, 4, -1769, -1, -1042, -3,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
	0x0000, 0x0000,
};
