/* AnimJoint data for relocData file 796 (FTFoxAnimUnknown) */
/* 992 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimUnknown_joint1[16];
extern u16 dFTFoxAnimUnknown_joint2[10];
extern u16 dFTFoxAnimUnknown_joint4[8];
extern u16 dFTFoxAnimUnknown_joint5[24];
extern u16 dFTFoxAnimUnknown_joint7[16];
extern u16 dFTFoxAnimUnknown_joint8[16];
extern u16 dFTFoxAnimUnknown_joint10[10];
extern u16 dFTFoxAnimUnknown_joint11[24];
extern u16 dFTFoxAnimUnknown_joint12[16];
extern u16 dFTFoxAnimUnknown_joint13[16];
extern u16 dFTFoxAnimUnknown_joint15[10];
extern u16 dFTFoxAnimUnknown_joint16[42];
extern u16 dFTFoxAnimUnknown_joint18[32];
extern u16 dFTFoxAnimUnknown_joint20[46];
extern u16 dFTFoxAnimUnknown_joint21[50];
extern u16 dFTFoxAnimUnknown_joint23[32];
extern u16 dFTFoxAnimUnknown_joint24[42];
extern u16 dFTFoxAnimUnknown_joint25[14];
extern u16 dFTFoxAnimUnknown_joint26[20];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimUnknown_joints[] = {
	(u32)dFTFoxAnimUnknown_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimUnknown_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimUnknown_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimUnknown_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimUnknown_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTFoxAnimUnknown_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimUnknown_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimUnknown_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimUnknown_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimUnknown_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimUnknown_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimUnknown_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimUnknown_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimUnknown_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimUnknown_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimUnknown_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimUnknown_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimUnknown_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimUnknown_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimUnknown_joint1[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 960,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -360,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimUnknown_joint2[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 9,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimUnknown_joint4[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimUnknown_joint5[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -1451, 0, 1035, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), -1801,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1435, -7, -1801, 0, 1070, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1451, -16, -1801, 0, 1035, -34,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimUnknown_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -582, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -642, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -582, 59,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimUnknown_joint8[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimUnknown_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimUnknown_joint11[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1014, 0, 1687, 0, 1197, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1014, 0, 1687, 0, 1197, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1014, 0, 1687, 0, 1197, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimUnknown_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -606, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -606, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -606, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimUnknown_joint13[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 272, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 625, -38,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimUnknown_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimUnknown_joint16[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -30, 148, -105, -31, 145, -515,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 117, -81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -129, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -370, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -410, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -370, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 16, -74, -64, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -30, -46, -105, 24, 145, 209,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimUnknown_joint18[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 227, 378,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 606, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 291, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 606, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 483, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 227, -256,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimUnknown_joint20[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 22, -73, 44, 6, 40, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -50, 51, 38, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 61, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 588, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 358, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 48, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1, 36, 39, 2, -48, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 22, 20, 44, 4, 40, 88,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimUnknown_joint21[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1630, -139, 1501, -38, 1711, -459,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1449, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1490, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1252, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1226, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1252, 190,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1463, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1588, 69, 1477, 19, 1530, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1630, 41, 1501, 23, 1711, 180,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimUnknown_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 279, 314,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 593, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 340, 296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 593, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 485, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 279, -206,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimUnknown_joint24[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 165, 55, 51, 4, 50, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 181, -26, 57, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 70, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 577, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 336, -252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 73, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 165, -15, 51, -5, 50, 58,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimUnknown_joint25[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 442,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 442, -18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTFoxAnimUnknown_joint26[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 0, 16,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
