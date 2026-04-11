/* AnimJoint data for relocData file 411 (FTLinkAnimClaps2) */
/* 4704 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimClaps2_joint1[12];
extern u16 dFTLinkAnimClaps2_joint2[56];
extern u16 dFTLinkAnimClaps2_joint4[58];
extern u16 dFTLinkAnimClaps2_joint5[66];
extern u16 dFTLinkAnimClaps2_joint6[40];
extern u16 dFTLinkAnimClaps2_joint7[12];
extern u16 dFTLinkAnimClaps2_joint9[244];
extern u16 dFTLinkAnimClaps2_joint10[78];
extern u16 dFTLinkAnimClaps2_joint11[40];
extern u16 dFTLinkAnimClaps2_joint15[12];
extern u16 dFTLinkAnimClaps2_joint16[1176];
extern u16 dFTLinkAnimClaps2_joint17[34];
extern u16 dFTLinkAnimClaps2_joint18[12];
extern u16 dFTLinkAnimClaps2_joint20[62];
extern u16 dFTLinkAnimClaps2_joint21[72];
extern u16 dFTLinkAnimClaps2_joint23[40];
extern u16 dFTLinkAnimClaps2_joint25[64];
extern u16 dFTLinkAnimClaps2_joint26[86];
extern u16 dFTLinkAnimClaps2_joint28[130];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimClaps2_joints[] = {
	(u32)dFTLinkAnimClaps2_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimClaps2_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimClaps2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimClaps2_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimClaps2_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimClaps2_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimClaps2_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimClaps2_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimClaps2_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimClaps2_joint15, /* [11] joint 15 */
	0x00000000, /* [12] NULL */
	0x00000000, /* [13] NULL */
	0x00000000, /* [14] NULL */
	(u32)dFTLinkAnimClaps2_joint16, /* [15] joint 16 */
	(u32)dFTLinkAnimClaps2_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimClaps2_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimClaps2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimClaps2_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimClaps2_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimClaps2_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimClaps2_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimClaps2_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF046F, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimClaps2_joint1[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -225, -71, 0, 909, 0,
	ftAnimBlock(0, 160),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimClaps2_joint2[56] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -83, 9, 39,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 32, 274, 83,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), -53, 17, 0, 5, 25, -8,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), -5, 20, 32, 0, 2, -9,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 37, 14, 3, -2, -17, -6,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 58, -5, 22, 1, -27, 2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), -2, -5, 12, -1, 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 53), 0, 7, 0,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimClaps2_joint4[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 33, -76, 31,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 32, 0, -74, 0, 29, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 80), 38, 0, -75, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), 26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 54), 31, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 105, 4, -372, -33, 33, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -372, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 105, 33,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 28), 105, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -372,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 24), -372,
	ftAnimLoop(0x6800, -114),
};

/* Joint 5 */
u16 dFTLinkAnimClaps2_joint5[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 223, 0, -127, 0, -198, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 96), 219, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 97), -132, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 93), -198, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -47, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 217, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 62), 205, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -134, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 61), -126, 0,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -53, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 45), -80, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 205, 0, -126, 0, -80, 0,
	ftAnimLoop(0x6800, -128),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimClaps2_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1105, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 94), -1104, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1102, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -621, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -598, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -567, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -567, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -566, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -566, 0,
	ftAnimLoop(0x6800, -78),
};

/* Joint 7 */
u16 dFTLinkAnimClaps2_joint7[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 704, 16, -290, 250, 0, 0,
	ftAnimBlock(0, 160),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTLinkAnimClaps2_joint9[244] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -247, 0, -352, 0, 262, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1663, 16, -415,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 77), -395, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 86), 1640, 2,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 92), 264, -7,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 93), -246, -7, -351, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 58), -13, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), 15, 1,
	ftAnimBlock(0, 19),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -412, -1,
	ftAnimBlock(0, 9),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1656, 3,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1667, 5,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -427, -6,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -7,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 12), 171, -124,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 1,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -7,
	ftAnimSetValRateT(FT_ANIM_TRAX, 10), -347, -150,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -14,
	ftAnimSetValRateT(FT_ANIM_TRAY, 18), -396, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 19, 2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 43, 6,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1799, 21,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -452, -10,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 99, 9,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -642, -14,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1975, 20,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -150,
	ftAnimSetValRateT(FT_ANIM_TRAX, 16), -658, -21,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -124,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 16), -119, -7,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 192, 9,
	ftAnimBlock(0, 4),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 2122, 2,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -731, -1,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 66,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), -316, 23,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 240, 1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2, 1, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2124, 0, 241, 0, -732, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 2124, 241, -732,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), -21, 23,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), -659, -315,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -7,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 12), -119,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), 2124, 241, -732,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 31), -659, -315,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 28), -119,
	ftAnimLoop(0x6800, -486),
};

/* Joint 10 */
u16 dFTLinkAnimClaps2_joint10[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -363, 0, 150, 0, -449, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 97), 146, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 102), -289, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 93), -449, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -439, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -152, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 146, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 61), 129, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -282, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 47), -270, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -157, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 45), -182, 0,
	ftAnimBlock(0, 36),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -270, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -270, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -270, 0, 129, 0, -182, 0,
	ftAnimLoop(0x6800, -152),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimClaps2_joint11[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -944, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 97), -943, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -941, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -474, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -453, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -439, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -439, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -435, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -435, 0,
	ftAnimLoop(0x6800, -78),
};

/* Joint 15 */
u16 dFTLinkAnimClaps2_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, 0, 248, 0, 0,
	ftAnimBlock(0, 160),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLinkAnimClaps2_joint16[1176] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 1608, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 1608, 0, -255, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 1608, 0, -255, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 1608, 0, -255, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 1608, 0, -255, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 1607, 0, -255, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 1607, 0, -255, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 1607, 0, -255, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 1606, 0, -255, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 1606, 0, -255, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 1606, 0, -255, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 1605, 0, -255, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 1605, 0, -255, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1, 0, 1604, 0, -254, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1, 0, 1603, 0, -254, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1, 0, 1603, 0, -254, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, 0, 1602, 0, -254, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, 0, 1601, 0, -254, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, 0, 1601, 0, -254, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3, 0, 1600, 0, -254, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3, 0, 1599, 0, -254, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, 0, 1598, 0, -253, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, 0, 1597, 0, -253, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, 0, 1596, 0, -253, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 0, 1596, 0, -253, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 0, 1595, 0, -253, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6, 0, 1594, 0, -252, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6, 0, 1593, -1, -252, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6, 0, 1592, -1, -252, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -7, 0, 1590, -1, -252, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -8, 0, 1589, -1, -251, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -8, 0, 1588, -1, -251, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, 0, 1587, -1, -251, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, 0, 1586, -1, -251, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -10, 0, 1585, -1, -251, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -10, 0, 1584, -1, -250, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -11, 0, 1583, -1, -250, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -12, 0, 1581, -1, -249, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -12, 0, 1580, -1, -249, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, 0, 1578, -1, -249, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, 0, 1577, -1, -249, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -14, 0, 1576, -1, -248, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -14, 0, 1575, -1, -248, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -15, 0, 1573, -1, -248, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -16, 0, 1572, -1, -247, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -17, 0, 1569, -1, -247, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -18, 0, 1568, -1, -247, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -18, 0, 1566, -1, -246, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -19, 0, 1565, -1, -246, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -19, 0, 1564, -1, -246, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -20, 0, 1562, -1, -245, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 0, 1561, -1, -245, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 0, 1559, -1, -245, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 0, 1556, -1, -244, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 0, 1555, -1, -244, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -24, 0, 1553, -1, -243, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -25, 0, 1551, -1, -243, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -25, 0, 1550, -1, -243, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -26, 0, 1548, -1, -242, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -27, 0, 1547, -1, -242, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -27, 0, 1545, -1, -242, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -29, 0, 1542, -1, -241, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -30, -1, 1540, -1, -241, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -31, -1, 1539, -1, -240, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -32, -1, 1537, -1, -240, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -33, 0, 1536, -1, -240, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -33, 0, 1534, -1, -239, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -34, 0, 1532, -1, -239, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -35, 0, 1530, -1, -238, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -36, 0, 1527, -1, -238, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -37, 0, 1525, -1, -237, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -37, 0, 1524, -1, -237, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -38, 0, 1522, -1, -237, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -39, 0, 1520, -1, -236, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -39, 0, 1518, -1, -236, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -40, 0, 1517, -1, -235, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -41, 0, 1515, -1, -235, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -42, 0, 1511, -2, -234, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -43, 0, 1509, -2, -234, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -44, 0, 1508, -2, -234, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -45, 0, 1506, -2, -233, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -45, 0, 1504, -2, -233, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -46, 0, 1502, -2, -233, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -47, 0, 1501, -2, -232, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -48, 0, 1499, -2, -232, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -49, 0, 1497, -1, -232, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -50, 0, 1493, -1, -231, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -51, 0, 1492, -1, -231, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -52, 0, 1490, -1, -230, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -52, 0, 1488, -1, -230, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -53, 0, 1486, -1, -229, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -54, 0, 1485, -1, -229, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -55, 0, 1483, -1, -229, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -55, 0, 1481, -1, -228, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -57, 0, 1478, -1, -228, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -58, 0, 1476, -1, -227, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -59, 0, 1474, -1, -227, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -59, 0, 1472, -1, -227, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, 0, 1471, -1, -226, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -61, 0, 1469, -1, -226, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 0, 1467, -1, -226, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 0, 1465, -1, -225, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -64, 0, 1462, -1, -225, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -65, 0, 1460, -1, -225, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -66, 0, 1458, -1, -224, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -66, 0, 1457, -1, -224, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -67, 0, 1455, -1, -224, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -68, -1, 1453, -4, -224, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -70, -3, 1448, -7, -223, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -74, -5, 1439, -11, -222, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -85, -6, 1414, -14, -218, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -91, -5, 1401, -13, -216, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -95, -3, 1390, -9, -214, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -98, -1, 1383, -4, -214, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -98, 1, 1382, 3, -214, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -95, 5, 1389, 12, -215, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -88, 10, 1405, 23, -219, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -76, 14, 1431, 32, -224, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -45, 18, 1500, 42, -239, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -28, 18, 1539, 42, -246, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -12, 17, 1575, 38, -253, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1, 14, 1608, 32, -260, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 12, 10, 1633, 22, -264, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 19, 6, 1648, 13, -267, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 24, 4, 1656, 8, -269, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 27, 2, 1663, 6, -270, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 30, 0, 1671, 2, -272, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 30, 0, 1673, 1, -272, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 31, 0, 1674, 0, -272, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 31, 0, 1674, 0, -273, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 30, 0, 1673, -1, -272, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 30, -1, 1671, -2, -272, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 29, -1, 1669, -2, -272, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 27, -1, 1666, -3, -271, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 25, -1, 1660, -3, -270, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 23, -1, 1657, -3, -270, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 22, -1, 1654, -2, -269, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, 0, 1652, -2, -268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 20, 0, 1650, -1, -268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 20, 0, 1649, -1, -267, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 20, 0, 1648, 0, -267, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 19, 0, 1648, 0, -267, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 19, 0, 1648, 0, -267, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 19, 0, 1648, 0, -267, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 19, 0, 1648, 0, -267, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 19, 0, 1648, 0, -267, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 19, 1648, -267,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 19, 1648, -267,
	ftAnimLoop(0x6800, -2350),
};

/* Joint 17 */
u16 dFTLinkAnimClaps2_joint17[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 213, -49,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 362, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 107), 1, 0, 213, 0, -49, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), -151, 0, -272, 0, 34, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -151, -272, 34,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimClaps2_joint18[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 36, -198, 0, 0, 78, 1,
	ftAnimBlock(0, 160),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimClaps2_joint20[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -3, 1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 347, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 102), -14, 0, -7, 0, -7, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 106, 3, -36, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 63, -33, 4, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -12, -2, -259, -4, 58, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 33), -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -24, 3, 7, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -24, 0, 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -24, 7,
	ftAnimLoop(0x6800, -120),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimClaps2_joint21[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -29, 0, -126, 0, -100, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 55), -233, -3, -120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -168, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -163, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 32), -230, 3,
	ftAnimBlock(0, 25),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -237, -3, -120, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 78), -156, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 103), -118, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -227, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 96), -229, 0,
	ftAnimBlock(0, 71),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -157, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 24), -164, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -164, 0, -118, 0, -229, 0,
	ftAnimLoop(0x6800, -140),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimClaps2_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 26, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 231, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 224, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 236, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 254, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 41), 295, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 294, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 74), 308, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 308, 0,
	ftAnimLoop(0x6800, -78),
};

/* Joint 25 */
u16 dFTLinkAnimClaps2_joint25[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 473, 0, -189, 0, 135, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 85), 622, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 86), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 30, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 33, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), -87, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -85, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 95), -44, 0,
	ftAnimBlock(0, 21),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 620, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 73), 578, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 72), -51, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 578, 0, -51, 0, -44, 0,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimClaps2_joint26[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 363, 0, 95, 0, -1, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), 92, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 85), 234, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), 59, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 66, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -16, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 91, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), 156, -2,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -12, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 88), -18, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 154, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 91), 150, 0,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 236, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 73), 265, 0,
	ftAnimBlock(0, 61),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -18, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -19, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 265, 0, 150, 0, -19, 0,
	ftAnimLoop(0x6800, -168),
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimClaps2_joint28[130] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 244, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 162, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 143, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 150, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 168, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), 133, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 126, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 40), 244, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 245, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 48), 270, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 270, 0,
	ftAnimLoop(0x6800, -94),
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -458, 0, -58, 0, -132, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 95), 27, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 97), -392, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), -31, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -23, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -100, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -96, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 44), -99, -1,
	ftAnimBlock(0, 37),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 25, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 63), 13, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -393, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 61), -399, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -100, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 56), -118, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -399, 0, 13, 0, -118, 0,
	ftAnimLoop(0x6800, -148),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
