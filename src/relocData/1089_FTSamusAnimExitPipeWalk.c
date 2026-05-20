/* AnimJoint data for relocData file 1089 (FTSamusAnimExitPipeWalk) */
/* 1360 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimExitPipeWalk_joint1[32];
extern u16 dFTSamusAnimExitPipeWalk_joint2[8];
extern u16 dFTSamusAnimExitPipeWalk_joint4[34];
extern u16 dFTSamusAnimExitPipeWalk_joint5[66];
extern u16 dFTSamusAnimExitPipeWalk_joint6[32];
extern u16 dFTSamusAnimExitPipeWalk_joint7[44];
extern u16 dFTSamusAnimExitPipeWalk_joint8[10];
extern u16 dFTSamusAnimExitPipeWalk_joint11[8];
extern u16 dFTSamusAnimExitPipeWalk_joint12[74];
extern u16 dFTSamusAnimExitPipeWalk_joint14[32];
extern u16 dFTSamusAnimExitPipeWalk_joint15[58];
extern u16 dFTSamusAnimExitPipeWalk_joint17[32];
extern u16 dFTSamusAnimExitPipeWalk_joint19[74];
extern u16 dFTSamusAnimExitPipeWalk_joint20[42];
extern u16 dFTSamusAnimExitPipeWalk_joint22[40];
extern u16 dFTSamusAnimExitPipeWalk_joint23[48];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimExitPipeWalk_joints[] = {
	(AObjEvent32 *)dFTSamusAnimExitPipeWalk_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimExitPipeWalk_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimExitPipeWalk_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimExitPipeWalk_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimExitPipeWalk_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimExitPipeWalk_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimExitPipeWalk_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimExitPipeWalk_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimExitPipeWalk_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimExitPipeWalk_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimExitPipeWalk_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimExitPipeWalk_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimExitPipeWalk_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimExitPipeWalk_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimExitPipeWalk_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimExitPipeWalk_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimExitPipeWalk_joint1[32] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 1165, 3276, 3276, 3276,
	ftAnimSetValBlock(FT_ANIM_TRAZ), -2040,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 25), 1073, 112, 3276, 40, 3276, 40, 3276, 40,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 25), -765,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 1730, 4096, 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 15), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimExitPipeWalk_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimExitPipeWalk_joint4[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 522, 0, -133, 62,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 522, -13, -133, 26, 62, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 20), 0, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 0, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimExitPipeWalk_joint5[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1447, 23, -1388, -17, 1616, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 1610, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -1607, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), -1504, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1478, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -1357, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1667, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 1688, -72,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1630, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1480, 34,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1358, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1373, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1447, 33, -1388, -14, 1616, -71,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimExitPipeWalk_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -917, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -848, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -883, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -952, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -965, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -947, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -917, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimExitPipeWalk_joint7[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, 5, 92, 1, -77, -8,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 194, 0, 83, -6, -136, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -61, -3, 0, 0, -40, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -112, -3, 0, 0, -40, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -62, 5, 92, 1, -77, -6,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimExitPipeWalk_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimExitPipeWalk_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimExitPipeWalk_joint12[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -53, 7, 92, 13, 167, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -245, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -80, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 17), 224, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 214, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 159, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -272, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -282, 68,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -124, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -91, 54,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -210, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -34, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -37, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 53, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -8, 25, 162, 2, 92, 38,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimExitPipeWalk_joint14[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1027, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -1023, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1018, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -896, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -907, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -922, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -928, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimExitPipeWalk_joint15[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -32, 6, -57, 5, -446, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 11, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), -38, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -150, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -168, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -706, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5, -8, -778, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -31, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -431, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -373, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -215, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -27, 4, -38, 0, -176, 39,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimExitPipeWalk_joint17[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 781, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1004, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1041, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1003, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 915, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 282, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 286, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimExitPipeWalk_joint19[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -69, 3, 88, -3, -426, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 33, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), 56, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -346, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -252, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -55, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -49, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -221, 21,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 22, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -58, -2,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -199, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -67, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 52, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 43, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, -1, 43, 0, -64, 3,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimExitPipeWalk_joint20[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -22, -1, 18, -2, -413, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), -35, -4, 25, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -824, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -814, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -86, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -58, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -260, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -39, -3, 22, -2, -304, -43,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimExitPipeWalk_joint22[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1146, 15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 943, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 872, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 814, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 814, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 811, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 851, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 920, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 944, 23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimExitPipeWalk_joint23[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 3, -36, 3, -203, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), 26, 0, 9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -419, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -423, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -214, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -163, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 14, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 27, 0, 9, 0, 18, 3,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
