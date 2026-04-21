/* AnimJoint data for relocData file 795 (FTFoxAnimSwitchDirectionShineAir) */
/* 592 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimSwitchDirectionShineAir_joint1[12];
extern u16 dFTFoxAnimSwitchDirectionShineAir_joint2[10];
extern u16 dFTFoxAnimSwitchDirectionShineAir_joint4[8];
extern u16 dFTFoxAnimSwitchDirectionShineAir_joint5[16];
extern u16 dFTFoxAnimSwitchDirectionShineAir_joint7[16];
extern u16 dFTFoxAnimSwitchDirectionShineAir_joint8[12];
extern u16 dFTFoxAnimSwitchDirectionShineAir_joint10[12];
extern u16 dFTFoxAnimSwitchDirectionShineAir_joint11[8];
extern u16 dFTFoxAnimSwitchDirectionShineAir_joint12[8];
extern u16 dFTFoxAnimSwitchDirectionShineAir_joint13[12];
extern u16 dFTFoxAnimSwitchDirectionShineAir_joint15[12];
extern u16 dFTFoxAnimSwitchDirectionShineAir_joint16[22];
extern u16 dFTFoxAnimSwitchDirectionShineAir_joint18[16];
extern u16 dFTFoxAnimSwitchDirectionShineAir_joint20[22];
extern u16 dFTFoxAnimSwitchDirectionShineAir_joint21[8];
extern u16 dFTFoxAnimSwitchDirectionShineAir_joint23[8];
extern u16 dFTFoxAnimSwitchDirectionShineAir_joint24[8];
extern u16 dFTFoxAnimSwitchDirectionShineAir_joint25[14];
extern u16 dFTFoxAnimSwitchDirectionShineAir_joint26[20];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimSwitchDirectionShineAir_joints[] = {
	(u32)dFTFoxAnimSwitchDirectionShineAir_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimSwitchDirectionShineAir_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimSwitchDirectionShineAir_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimSwitchDirectionShineAir_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimSwitchDirectionShineAir_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTFoxAnimSwitchDirectionShineAir_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimSwitchDirectionShineAir_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimSwitchDirectionShineAir_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimSwitchDirectionShineAir_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimSwitchDirectionShineAir_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimSwitchDirectionShineAir_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimSwitchDirectionShineAir_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimSwitchDirectionShineAir_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimSwitchDirectionShineAir_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimSwitchDirectionShineAir_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimSwitchDirectionShineAir_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimSwitchDirectionShineAir_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimSwitchDirectionShineAir_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimSwitchDirectionShineAir_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimSwitchDirectionShineAir_joint1[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 960, 0,
	ftAnimBlock(0, 5),
	ftAnimLoop(0x6800, -22),
};

/* Joint 2 */
u16 dFTFoxAnimSwitchDirectionShineAir_joint2[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 4,
	ftAnimBlock(0, 5),
	ftAnimLoop(0x6800, -18),
};

/* Joint 4 */
u16 dFTFoxAnimSwitchDirectionShineAir_joint4[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 5),
	ftAnimLoop(0x6800, -14),
};

/* Joint 5 */
u16 dFTFoxAnimSwitchDirectionShineAir_joint5[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1035, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -1451, -1801,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 1035,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1035, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimSwitchDirectionShineAir_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -582, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -582,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -582, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimSwitchDirectionShineAir_joint8[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 336, 0,
	ftAnimBlock(0, 5),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimSwitchDirectionShineAir_joint10[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 5),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimSwitchDirectionShineAir_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1014, 1687, 1197,
	ftAnimBlock(0, 5),
	ftAnimLoop(0x6800, -14),
};

/* Joint 12 */
u16 dFTFoxAnimSwitchDirectionShineAir_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -606,
	ftAnimBlock(0, 5),
	ftAnimLoop(0x6800, -14),
};

/* Joint 13 */
u16 dFTFoxAnimSwitchDirectionShineAir_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 625, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 5),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimSwitchDirectionShineAir_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 5),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimSwitchDirectionShineAir_joint16[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -30, 0, -105, 0, 145, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -30, -105, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -30, 0, -105, 0, 145, 0,
	ftAnimLoop(0x6800, -42),
};

/* Joint 18 */
u16 dFTFoxAnimSwitchDirectionShineAir_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 227, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 227, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTFoxAnimSwitchDirectionShineAir_joint20[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 22, 0, 44, 0, 40, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 22, 44, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 22, 0, 44, 0, 40, 0,
	ftAnimLoop(0x6800, -42),
};

/* Joint 21 */
u16 dFTFoxAnimSwitchDirectionShineAir_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1630, 1501, 1711,
	ftAnimBlock(0, 5),
	ftAnimLoop(0x6800, -14),
};

/* Joint 23 */
u16 dFTFoxAnimSwitchDirectionShineAir_joint23[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 279,
	ftAnimBlock(0, 5),
	ftAnimLoop(0x6800, -14),
};

/* Joint 24 */
u16 dFTFoxAnimSwitchDirectionShineAir_joint24[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 165, 51, 50,
	ftAnimBlock(0, 5),
	ftAnimLoop(0x6800, -14),
};

/* Joint 25 */
u16 dFTFoxAnimSwitchDirectionShineAir_joint25[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 442, 49,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -126, -96,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 442,
	ftAnimLoop(0x6800, -26),
};

/* Joint 26 */
u16 dFTFoxAnimSwitchDirectionShineAir_joint26[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 64, -450,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimLoop(0x6800, -26),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
