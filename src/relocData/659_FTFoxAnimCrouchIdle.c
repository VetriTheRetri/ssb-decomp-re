/* AnimJoint data for relocData file 659 (FTFoxAnimCrouchIdle) */
/* 880 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimCrouchIdle_joint1[26];
extern u16 dFTFoxAnimCrouchIdle_joint2[12];
extern u16 dFTFoxAnimCrouchIdle_joint4[12];
extern u16 dFTFoxAnimCrouchIdle_joint5[36];
extern u16 dFTFoxAnimCrouchIdle_joint6[24];
extern u16 dFTFoxAnimCrouchIdle_joint7[12];
extern u16 dFTFoxAnimCrouchIdle_joint8[12];
extern u16 dFTFoxAnimCrouchIdle_joint10[8];
extern u16 dFTFoxAnimCrouchIdle_joint11[26];
extern u16 dFTFoxAnimCrouchIdle_joint12[24];
extern u16 dFTFoxAnimCrouchIdle_joint13[12];
extern u16 dFTFoxAnimCrouchIdle_joint15[12];
extern u16 dFTFoxAnimCrouchIdle_joint16[26];
extern u16 dFTFoxAnimCrouchIdle_joint18[16];
extern u16 dFTFoxAnimCrouchIdle_joint20[26];
extern u16 dFTFoxAnimCrouchIdle_joint21[26];
extern u16 dFTFoxAnimCrouchIdle_joint23[16];
extern u16 dFTFoxAnimCrouchIdle_joint24[26];
extern u16 dFTFoxAnimCrouchIdle_joint25[16];
extern u16 dFTFoxAnimCrouchIdle_joint26[20];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimCrouchIdle_joints[] = {
	(u32)dFTFoxAnimCrouchIdle_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimCrouchIdle_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimCrouchIdle_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimCrouchIdle_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimCrouchIdle_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimCrouchIdle_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimCrouchIdle_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimCrouchIdle_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimCrouchIdle_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimCrouchIdle_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimCrouchIdle_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimCrouchIdle_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimCrouchIdle_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimCrouchIdle_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimCrouchIdle_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimCrouchIdle_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimCrouchIdle_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimCrouchIdle_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimCrouchIdle_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimCrouchIdle_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimCrouchIdle_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 483,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), -22, 58,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 20), -22, 58,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 456, -3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 474, 10,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 10), 483,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), -22, 58,
	ftAnimLoop(0x6800, -50),
};

/* Joint 2 */
u16 dFTFoxAnimCrouchIdle_joint2[12] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -267, 101, 159,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -267, 101, 159,
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimCrouchIdle_joint4[12] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 792, 186, 227,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 792, 186, 227,
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimCrouchIdle_joint5[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, 0, -157, 0, 147, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 29), -178, -1, -157, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 127, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 116, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 145, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -178, 0, -157, 0, 147, 1,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimCrouchIdle_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -657, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -634, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -619, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -655, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -657, -1,
	ftAnimLoop(0x6800, -46),
};

/* Joint 7 */
u16 dFTFoxAnimCrouchIdle_joint7[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimCrouchIdle_joint8[12] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -283, -418, 188,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -283, -418, 188,
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimCrouchIdle_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -14),
};

/* Joint 11 */
u16 dFTFoxAnimCrouchIdle_joint11[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1715, 0, 1106, 0, 1085, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -1715, 0, 1107, 0, 1085, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1715, 0, 1106, 0, 1085, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimCrouchIdle_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -571, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -549, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -540, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -570, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, -1,
	ftAnimLoop(0x6800, -46),
};

/* Joint 13 */
u16 dFTFoxAnimCrouchIdle_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimCrouchIdle_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimCrouchIdle_joint16[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -183, 0, 18, 0, -351, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -183, 0, 18, 0, -351, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -183, 0, 18, 0, -351, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimCrouchIdle_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1081, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 1081, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1081, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 20 */
u16 dFTFoxAnimCrouchIdle_joint20[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 24, 0, 148, 0, -380, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 24, 0, 148, 0, -381, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 24, 0, 148, 0, -380, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimCrouchIdle_joint21[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 162, 0, 274, 0, 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 163, 0, 274, 0, 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 162, 0, 274, 0, 6, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimCrouchIdle_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1262, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 1262, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1262, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 24 */
u16 dFTFoxAnimCrouchIdle_joint24[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -124, 0, 436, 0, -704, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -124, 0, 436, 0, -704, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -124, 0, 436, 0, -704, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimCrouchIdle_joint25[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 89,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 219, 0, 0, -126, -96,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), 125,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 21), 89,
	ftAnimLoop(0x6800, -30),
};

/* Joint 26 */
u16 dFTFoxAnimCrouchIdle_joint26[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -20, 186, 0, 64, -450,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), -33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 21), 27,
	ftAnimLoop(0x6800, -30),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
