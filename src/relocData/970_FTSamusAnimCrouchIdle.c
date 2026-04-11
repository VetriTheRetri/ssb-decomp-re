/* AnimJoint data for relocData file 970 (FTSamusAnimCrouchIdle) */
/* 1056 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimCrouchIdle_joint1[24];
extern u16 dFTSamusAnimCrouchIdle_joint2[12];
extern u16 dFTSamusAnimCrouchIdle_joint4[12];
extern u16 dFTSamusAnimCrouchIdle_joint5[48];
extern u16 dFTSamusAnimCrouchIdle_joint6[24];
extern u16 dFTSamusAnimCrouchIdle_joint7[20];
extern u16 dFTSamusAnimCrouchIdle_joint8[12];
extern u16 dFTSamusAnimCrouchIdle_joint11[12];
extern u16 dFTSamusAnimCrouchIdle_joint12[58];
extern u16 dFTSamusAnimCrouchIdle_joint14[32];
extern u16 dFTSamusAnimCrouchIdle_joint15[58];
extern u16 dFTSamusAnimCrouchIdle_joint17[24];
extern u16 dFTSamusAnimCrouchIdle_joint19[32];
extern u16 dFTSamusAnimCrouchIdle_joint20[40];
extern u16 dFTSamusAnimCrouchIdle_joint22[74];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimCrouchIdle_joints[] = {
	(u32)dFTSamusAnimCrouchIdle_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimCrouchIdle_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimCrouchIdle_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimCrouchIdle_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimCrouchIdle_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimCrouchIdle_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimCrouchIdle_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimCrouchIdle_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimCrouchIdle_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimCrouchIdle_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimCrouchIdle_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimCrouchIdle_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimCrouchIdle_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimCrouchIdle_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimCrouchIdle_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF00EB, /* [22] END */
};

/* Joint 1 */
u16 dFTSamusAnimCrouchIdle_joint1[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 832, 222,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 26,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 52), 231, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 31), 900,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 51), 832,
	ftAnimBlock(0, 21),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 30), 222,
	ftAnimLoop(0x6800, -46),
};

/* Joint 2 */
u16 dFTSamusAnimCrouchIdle_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 23, -145, -23, 0, -84, 0,
	ftAnimBlock(0, 82),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimCrouchIdle_joint4[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -8, 142, 0, 0, 0, 0,
	ftAnimBlock(0, 82),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimCrouchIdle_joint5[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -846, 0, -1663, 0, 1177, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 75), -1657, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 81), -846, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 52), 1106, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1106, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), 1176, 0,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1658, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1662, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -846, 0, -1663, 0, 1177, 0,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimCrouchIdle_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -799, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 51), -778, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -778, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -798, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -799, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 7 */
u16 dFTSamusAnimCrouchIdle_joint7[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 470, -134, 111,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 454, 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 62), 473, -111, 76,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 470, -134, 111,
	ftAnimLoop(0x6800, -38),
};

/* Joint 8 */
u16 dFTSamusAnimCrouchIdle_joint8[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 82),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimCrouchIdle_joint11[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 479, 0,
	ftAnimBlock(0, 82),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimCrouchIdle_joint12[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1614, 0, -1515, 0, 1483, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 76), -1610, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 78), -1513, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 51), 1388, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1387, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), 1482, 0,
	ftAnimBlock(0, 24),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1611, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1614, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1514, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1515, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1614, 0, -1515, 0, 1483, 0,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimCrouchIdle_joint14[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -743, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), -627, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -629, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), -710, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -715, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -742, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -743, 0,
	ftAnimLoop(0x6800, -62),
};

/* Joint 15 */
u16 dFTSamusAnimCrouchIdle_joint15[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 315, 0, -384, 0, -1095, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 44), 243, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 78), -386, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 42), -1009, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1010, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 38), -1095, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 245, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), 315, 0,
	ftAnimBlock(0, 33),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -385, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -385, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 315, 0, -384, 0, -1095, 0,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimCrouchIdle_joint17[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1361, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 53), 1333, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1335, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), 1361, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1361, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 19 */
u16 dFTSamusAnimCrouchIdle_joint19[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -90, 0, 307, 0, -372, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 81), -90, 0, 307, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 80), -373, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -372, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -90, 0, 307, 0, -372, 0,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimCrouchIdle_joint20[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -392, 0, 354, 0, -434, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 81), 354, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 55), -356, -1, -439, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -357, -1, -437, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 25), -392, 0, -434, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -392, 0, 354, 0, -434, 0,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimCrouchIdle_joint22[74] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1300, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 81), 1300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1300, 0,
	ftAnimLoop(0x6800, -30),
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, 0, -265, 0, -277, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 45), -215, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 71), -261, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 44), -85, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -83, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), -14, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -218, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 35), -277, 0,
	ftAnimBlock(0, 25),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -262, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -265, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -14, 0, -265, 0, -277, 0,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
	0x0000, 0x0000,
};
