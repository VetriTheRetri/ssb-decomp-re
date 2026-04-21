/* AnimJoint data for relocData file 791 (FTFoxAnimSwitchDirectionShine) */
/* 688 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimSwitchDirectionShine_joint1[8];
extern u16 dFTFoxAnimSwitchDirectionShine_joint2[8];
extern u16 dFTFoxAnimSwitchDirectionShine_joint4[8];
extern u16 dFTFoxAnimSwitchDirectionShine_joint5[20];
extern u16 dFTFoxAnimSwitchDirectionShine_joint6[16];
extern u16 dFTFoxAnimSwitchDirectionShine_joint7[12];
extern u16 dFTFoxAnimSwitchDirectionShine_joint8[12];
extern u16 dFTFoxAnimSwitchDirectionShine_joint10[12];
extern u16 dFTFoxAnimSwitchDirectionShine_joint11[8];
extern u16 dFTFoxAnimSwitchDirectionShine_joint12[8];
extern u16 dFTFoxAnimSwitchDirectionShine_joint13[12];
extern u16 dFTFoxAnimSwitchDirectionShine_joint15[12];
extern u16 dFTFoxAnimSwitchDirectionShine_joint16[20];
extern u16 dFTFoxAnimSwitchDirectionShine_joint18[8];
extern u16 dFTFoxAnimSwitchDirectionShine_joint20[22];
extern u16 dFTFoxAnimSwitchDirectionShine_joint21[26];
extern u16 dFTFoxAnimSwitchDirectionShine_joint23[16];
extern u16 dFTFoxAnimSwitchDirectionShine_joint24[26];
extern u16 dFTFoxAnimSwitchDirectionShine_joint25[18];
extern u16 dFTFoxAnimSwitchDirectionShine_joint26[20];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimSwitchDirectionShine_joints[] = {
	(u32)dFTFoxAnimSwitchDirectionShine_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimSwitchDirectionShine_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimSwitchDirectionShine_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimSwitchDirectionShine_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimSwitchDirectionShine_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimSwitchDirectionShine_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimSwitchDirectionShine_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimSwitchDirectionShine_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimSwitchDirectionShine_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimSwitchDirectionShine_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimSwitchDirectionShine_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimSwitchDirectionShine_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimSwitchDirectionShine_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimSwitchDirectionShine_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimSwitchDirectionShine_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimSwitchDirectionShine_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimSwitchDirectionShine_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimSwitchDirectionShine_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimSwitchDirectionShine_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimSwitchDirectionShine_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimSwitchDirectionShine_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, 679, -60,
	ftAnimBlock(0, 5),
	ftAnimLoop(0x6800, -14),
};

/* Joint 2 */
u16 dFTFoxAnimSwitchDirectionShine_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, -338, -3,
	ftAnimBlock(0, 5),
	ftAnimLoop(0x6800, -14),
};

/* Joint 4 */
u16 dFTFoxAnimSwitchDirectionShine_joint4[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimBlock(0, 5),
	ftAnimLoop(0x6800, -14),
};

/* Joint 5 */
u16 dFTFoxAnimSwitchDirectionShine_joint5[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 34, 0, -841, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), -137,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 34, -841,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 34, 0, -841, 0,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimSwitchDirectionShine_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -701, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -701,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -701, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimSwitchDirectionShine_joint7[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 5),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimSwitchDirectionShine_joint8[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -113, 136, -72, 0, 336, 0,
	ftAnimBlock(0, 5),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimSwitchDirectionShine_joint10[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 5),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimSwitchDirectionShine_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -427, -324, -541,
	ftAnimBlock(0, 5),
	ftAnimLoop(0x6800, -14),
};

/* Joint 12 */
u16 dFTFoxAnimSwitchDirectionShine_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -345,
	ftAnimBlock(0, 5),
	ftAnimLoop(0x6800, -14),
};

/* Joint 13 */
u16 dFTFoxAnimSwitchDirectionShine_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 357, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 5),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimSwitchDirectionShine_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 5),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimSwitchDirectionShine_joint16[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -220, 0, -332, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), -404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -220, -332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -220, 0, -332, 0,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimSwitchDirectionShine_joint18[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 858,
	ftAnimBlock(0, 5),
	ftAnimLoop(0x6800, -14),
};

/* Joint 20 */
u16 dFTFoxAnimSwitchDirectionShine_joint20[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 48, 0, 122, 0, -249, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 48, 122, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 48, 0, 122, 0, -249, 0,
	ftAnimLoop(0x6800, -42),
};

/* Joint 21 */
u16 dFTFoxAnimSwitchDirectionShine_joint21[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 260, 0, 290, 0, 392, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 260, 0, 290, 0, 392, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 260, 0, 290, 0, 392, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimSwitchDirectionShine_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 313, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 313, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 313, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 24 */
u16 dFTFoxAnimSwitchDirectionShine_joint24[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 330, 0, -182, 0, -556, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 330, 0, -182, 0, -556, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 330, 0, -182, 0, -556, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimSwitchDirectionShine_joint25[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 442, 49, 339, 13, 140, 15,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 442, 339, 140,
	ftAnimLoop(0x6800, -34),
};

/* Joint 26 */
u16 dFTFoxAnimSwitchDirectionShine_joint26[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 19, 0, 13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 64, -450,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 0, 0,
	ftAnimLoop(0x6800, -30),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
