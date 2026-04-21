/* AnimJoint data for relocData file 995 (FTSamusAnimFallSpecial) */
/* 752 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimFallSpecial_joint1[16];
extern u16 dFTSamusAnimFallSpecial_joint2[8];
extern u16 dFTSamusAnimFallSpecial_joint4[8];
extern u16 dFTSamusAnimFallSpecial_joint5[40];
extern u16 dFTSamusAnimFallSpecial_joint6[16];
extern u16 dFTSamusAnimFallSpecial_joint7[12];
extern u16 dFTSamusAnimFallSpecial_joint8[12];
extern u16 dFTSamusAnimFallSpecial_joint11[8];
extern u16 dFTSamusAnimFallSpecial_joint12[34];
extern u16 dFTSamusAnimFallSpecial_joint14[20];
extern u16 dFTSamusAnimFallSpecial_joint15[26];
extern u16 dFTSamusAnimFallSpecial_joint17[16];
extern u16 dFTSamusAnimFallSpecial_joint19[36];
extern u16 dFTSamusAnimFallSpecial_joint20[26];
extern u16 dFTSamusAnimFallSpecial_joint22[16];
extern u16 dFTSamusAnimFallSpecial_joint23[36];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimFallSpecial_joints[] = {
	(u32)dFTSamusAnimFallSpecial_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimFallSpecial_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimFallSpecial_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimFallSpecial_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimFallSpecial_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimFallSpecial_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimFallSpecial_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimFallSpecial_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimFallSpecial_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimFallSpecial_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimFallSpecial_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimFallSpecial_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimFallSpecial_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimFallSpecial_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimFallSpecial_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimFallSpecial_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimFallSpecial_joint1[16] = {
	ftAnimSetVal(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 817,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 3), 18,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 3), -32,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 2), 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 2 */
u16 dFTSamusAnimFallSpecial_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 4 */
u16 dFTSamusAnimFallSpecial_joint4[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 255, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 5 */
u16 dFTSamusAnimFallSpecial_joint5[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2793, 12, -449, -10, 2667, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2750, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -459, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 2560, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2611, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2781, -21, 2652, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2793, -12, -449, 10, 2667, 15,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimFallSpecial_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1028, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1038, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1028, 10,
	ftAnimLoop(0x6800, -30),
};

/* Joint 7 */
u16 dFTSamusAnimFallSpecial_joint7[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -268, 0, 0, 424, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimFallSpecial_joint8[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimFallSpecial_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 12 */
u16 dFTSamusAnimFallSpecial_joint12[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -800, -6, 266, 17, -592, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -807, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 321, -36, -647, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 284, -27, -608, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -800, 6, 266, -17, -592, 16,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimFallSpecial_joint14[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -687, -20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -749, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -708, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -687, 20,
	ftAnimLoop(0x6800, -38),
};

/* Joint 15 */
u16 dFTSamusAnimFallSpecial_joint15[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1640, -1, -1595, 0, 552, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1637, 2, -1594, 0, 565, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1640, 3, -1595, -1, 552, -13,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimFallSpecial_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1293, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1261, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1293, 31,
	ftAnimLoop(0x6800, -30),
};

/* Joint 19 */
u16 dFTSamusAnimFallSpecial_joint19[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 77, 2, -12, 1, 5, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 79, -2, -18, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 41, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 67, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 36, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 77, -2, -12, 5, 5, -31,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimFallSpecial_joint20[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -47, 1, 17, 0, -668, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -43, -3, 18, 0, -645, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -47, -4, 17, -1, -668, -23,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimFallSpecial_joint22[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1447, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1433, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1447, 14,
	ftAnimLoop(0x6800, -30),
};

/* Joint 23 */
u16 dFTSamusAnimFallSpecial_joint23[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, -4, 87, 0, -19, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -3, -3, 87, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 11, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 46, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 16, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, -6, 87, 0, -19, -35,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};
