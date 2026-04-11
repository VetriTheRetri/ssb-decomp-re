/* AnimJoint data for relocData file 1666 (FTNessAnimWalk2) */
/* 2896 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimWalk2_joint1[56];
extern u16 dFTNessAnimWalk2_joint2[64];
extern u16 dFTNessAnimWalk2_joint4[58];
extern u16 dFTNessAnimWalk2_joint5[130];
extern u16 dFTNessAnimWalk2_joint7[52];
extern u16 dFTNessAnimWalk2_joint8[58];
extern u16 dFTNessAnimWalk2_joint10[58];
extern u16 dFTNessAnimWalk2_joint11[138];
extern u16 dFTNessAnimWalk2_joint12[48];
extern u16 dFTNessAnimWalk2_joint13[8];
extern u16 dFTNessAnimWalk2_joint15[12];
extern u16 dFTNessAnimWalk2_joint16[144];
extern u16 dFTNessAnimWalk2_joint18[72];
extern u16 dFTNessAnimWalk2_joint19[148];
extern u16 dFTNessAnimWalk2_joint21[24];
extern u16 dFTNessAnimWalk2_joint22[116];
extern u16 dFTNessAnimWalk2_joint24[56];
extern u16 dFTNessAnimWalk2_joint25[154];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimWalk2_joints[] = {
	(u32)dFTNessAnimWalk2_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimWalk2_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimWalk2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimWalk2_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimWalk2_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTNessAnimWalk2_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimWalk2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimWalk2_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimWalk2_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimWalk2_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimWalk2_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimWalk2_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimWalk2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimWalk2_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimWalk2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimWalk2_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimWalk2_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimWalk2_joint25, /* [24] joint 25 */
	0xFFFF02C0, /* [25] END */
};

/* Joint 1 */
u16 dFTNessAnimWalk2_joint1[56] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 636, -1, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 15), -9, -3,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 43), -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 15), 508,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 15), 636,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), -8, 6,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), 2, 1,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 15), 508,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 13), -4, -5,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), -8, 1,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 17), 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAY, 15), 636, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 13), 0, 0,
	ftAnimLoop(0x6800, -110),
};

/* Joint 2 */
u16 dFTNessAnimWalk2_joint2[64] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -72, 5, 17, -1,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -222,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 67, 8, 5, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -271,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 93, -1, -14, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -279,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 37, -6, 49, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -233,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -54, -7, 26, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 13), -229,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -85, -1, 50, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -241,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -72, 5, 17, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 13), -222,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimWalk2_joint4[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 225, 1, 135, -6, 75, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 297, 4, -87, -14, -108, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 319, -3, -158, -3, -161, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 244, -3, -135, 7, -174, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 246, 1, 5, 12, -30, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 265, -1, 83, 7, 3, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 225, 1, 135, -6, 75, -3,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimWalk2_joint5[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -285, -8, -208, 3, 440, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -263, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), -294, 16, 345, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -276, 31, 310, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 160, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -252, -36,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -291, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -332, -9,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 208, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 363, -28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -285, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 281, 34,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 331, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -269, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -342, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -183, 22,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 313, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 450, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -303, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -322, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -162, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -204, -5,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -296, 12, 443, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -285, 11, -208, -3, 440, -2,
	ftAnimLoop(0x6800, -256),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimWalk2_joint7[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -191, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -604, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -627, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -308, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -259, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -215, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -259, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -643, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -627, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -233, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -203, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -191, 11,
	ftAnimLoop(0x6800, -102),
};

/* Joint 8 */
u16 dFTNessAnimWalk2_joint8[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 187, 0, -68, 0, -32, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 173, 0, -68, 0, -24, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 196, 2, -69, 0, -29, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 204, -1, -69, 0, -54, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 166, -1, -68, 0, -43, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 172, 1, -68, 0, -48, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 187, 0, -68, 0, -32, 0,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimWalk2_joint10[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -181, 1, 4, 2, 39, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -159, 0, 106, 7, 35, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -187, -3, 155, 4, 26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -210, 0, 167, -3, 25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -198, 0, 80, -6, 37, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -200, 1, 49, -4, 44, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -181, 1, 4, 2, 39, 0,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimWalk2_joint11[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -142, 2, 280, 2, -296, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 18), 227, 12, 441, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), 271, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 256, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 158, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 238, 10, 462, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 477, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 404, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 145, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 150, -11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 502, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 323, -49,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 409, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 457, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 139, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 261, 36,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 272, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 144, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 297, 17, 438, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 317, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -287, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 142, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -141, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 324, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 283, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -142, 0, 280, -2, -296, -8,
	ftAnimLoop(0x6800, -272),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimWalk2_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -170, -12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -601, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -624, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -320, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -274, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -274, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -320, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -601, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -183, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -170, 12,
	ftAnimLoop(0x6800, -94),
};

/* Joint 13 */
u16 dFTNessAnimWalk2_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -14),
};

/* Joint 15 */
u16 dFTNessAnimWalk2_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimWalk2_joint16[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -209, 4, -48, 6, -68, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -86, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -63, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 55, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 64, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 338, 48,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -85, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -274, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -69, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 2, 24,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 390, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 475, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 15, 9, 496, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 523, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 535, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 356, -53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -38, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -104, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -264, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -170, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 304, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -133, -1,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -184, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -209, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -135, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -85, 17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -100, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -57, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -209, 0, -48, 9, -68, 17,
	ftAnimLoop(0x6800, -284),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimWalk2_joint18[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 248, -21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 283, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 316, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 244, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 171, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 22, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 292, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 413, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 836, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 784, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 390, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 342, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 294, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 248, -45,
	ftAnimLoop(0x6800, -142),
};

/* Joint 19 */
u16 dFTNessAnimWalk2_joint19[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, 10, -2, 5, 24, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 56, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 169, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 14, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 13, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -238, -27,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 37, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -82, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -265, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -344, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -344, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -257, 51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 181, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 305, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -72, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -54, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -201, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -58, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -21, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 126, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 26, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 26, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 288, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 3, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 26, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), 24, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 122, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 100, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 73, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 12, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, -6, -2, -5, 24, 0,
	ftAnimLoop(0x6800, -292),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimWalk2_joint21[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 10, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), 238, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 376, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 194, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 10,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimWalk2_joint22[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 22, 3, 44, 0, 422, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 74, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), 62, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 25, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -185, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 71, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 55, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -188, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -6, 10,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 64, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 38, -7,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 49, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 60, 5,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 401, 23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 34, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 26, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 62, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 47, -3,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 421, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 429, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 22, -4, 44, -3, 422, -6,
	ftAnimLoop(0x6800, -228),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimWalk2_joint24[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 206, 45,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 827, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 884, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 809, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 750, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 484, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 448, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 446, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 461, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 284, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 246, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 187, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 206, 19,
	ftAnimLoop(0x6800, -110),
};

/* Joint 25 */
u16 dFTNessAnimWalk2_joint25[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -71, -4, -27, 2, -90, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -157, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -3, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -121, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -136, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -67, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -151, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 37, 18,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -62, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -7, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -16, 12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 0, 55, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -24, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -68, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -88, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -248, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -284, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -123, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -6, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -6, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -22, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -49, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -71, -21, -27, -3, -90, 33,
	ftAnimLoop(0x6800, -224),
	ftAnimEnd(),
	0x200E, 0x0173, 0x0000, 0xFFD5, 0x0000, 0x003F, 0x0000, 0x200F, 0x000D, 0x00FE, 0xFFF0, 0xFFD4, 0x0000, 0x0041, 0x0000, 0x200F, 0x0007, 0x0026, 0xFFEA, 0xFFD4, 0x0000, 0x0041, 0x0000, 0x200F, 0x0005, 0xFFF3, 0x0008, 0xFFD4, 0x0000, 0x0041, 0x0000, 0x380F, 0x0023, 0x0173, 0xFFD5, 0x003F, 0x6800, 0xFFB6, 0x0000, 0x0000,
};
