/* AnimJoint data for relocData file 1044 (FTSamusAnimCliffEscapeSlow2) */
/* 2608 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimCliffEscapeSlow2_joint1[40];
extern u16 dFTSamusAnimCliffEscapeSlow2_joint2[184];
extern u16 dFTSamusAnimCliffEscapeSlow2_joint3[40];
extern u16 dFTSamusAnimCliffEscapeSlow2_joint5[144];
extern u16 dFTSamusAnimCliffEscapeSlow2_joint6[98];
extern u16 dFTSamusAnimCliffEscapeSlow2_joint7[40];
extern u16 dFTSamusAnimCliffEscapeSlow2_joint8[34];
extern u16 dFTSamusAnimCliffEscapeSlow2_joint9[12];
extern u16 dFTSamusAnimCliffEscapeSlow2_joint12[30];
extern u16 dFTSamusAnimCliffEscapeSlow2_joint13[110];
extern u16 dFTSamusAnimCliffEscapeSlow2_joint15[56];
extern u16 dFTSamusAnimCliffEscapeSlow2_joint16[106];
extern u16 dFTSamusAnimCliffEscapeSlow2_joint18[40];
extern u16 dFTSamusAnimCliffEscapeSlow2_joint20[66];
extern u16 dFTSamusAnimCliffEscapeSlow2_joint21[108];
extern u16 dFTSamusAnimCliffEscapeSlow2_joint23[148];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTSamusAnimCliffEscapeSlow2_joints[] = {
	(u32)dFTSamusAnimCliffEscapeSlow2_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimCliffEscapeSlow2_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimCliffEscapeSlow2_joint3, /* [2] joint 3 */
	(u32)dFTSamusAnimCliffEscapeSlow2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTSamusAnimCliffEscapeSlow2_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimCliffEscapeSlow2_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimCliffEscapeSlow2_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimCliffEscapeSlow2_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimCliffEscapeSlow2_joint12, /* [9] joint 12 */
	0x00000000, /* [10] NULL */
	0x00000000, /* [11] NULL */
	(u32)dFTSamusAnimCliffEscapeSlow2_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimCliffEscapeSlow2_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTSamusAnimCliffEscapeSlow2_joint16, /* [15] joint 16 */
	(u32)dFTSamusAnimCliffEscapeSlow2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTSamusAnimCliffEscapeSlow2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTSamusAnimCliffEscapeSlow2_joint21, /* [20] joint 21 */
	(u32)dFTSamusAnimCliffEscapeSlow2_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF0258, /* [23] END */
};

/* Joint 1 */
u16 dFTSamusAnimCliffEscapeSlow2_joint1[40] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 344,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 54), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 123, 399,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 1342,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 9), 1714, 1499,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), 3284, 920,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 3885, 660,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 4110, 251,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), 4279, 59,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 4200,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimCliffEscapeSlow2_joint2[184] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX), 0, 31,
	ftAnimSetValRateT(FT_ANIM_TRAX, 9), 55, 3,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 6,
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), 146, -581,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), -74, 244,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 4,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), 920, 102,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 984, 358,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 358,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 1032, 182,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 244,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), 8, -123,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 3, 182,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 55, -221, 1055, -4130,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), -221, -4129,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -123,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -186, -1002,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 0, -223, 0, -4219,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), -223, -4215,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 0, 0, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -1002,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 33), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 48), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -454, -1126,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -1126,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 16), -2055, -351,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -351,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 11), -2386, -116,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -116,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -2400, 91,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 91,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -2363, 158,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 158,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -2377, -87,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -87,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 2625, -2382, 9123,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 2624, 9102,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 656, 2761, -101, 9162,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 2762,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 9152,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -86, 54,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 690, 285,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 285,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 727, 524,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 524,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 54,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 11), 6, 59,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 821, 771,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 771,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), 1541, 691,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 691,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 1651, 44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTSamusAnimCliffEscapeSlow2_joint3[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 255, 16, 198, 21, 88, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 268, -1, 229, 0, 101, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, -6, 0, -2,
	ftAnimSetValAfterT(FT_ANIM_ROTX, 37), 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimCliffEscapeSlow2_joint5[144] = {
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 91), 4096, 4096, 4096,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 86,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 383, 28, 100, 12, 116, 11,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 2, -88, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 449, -15, 132, 0, 128, -31,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 2, -117, 201,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 303, 110, 98, -42, -40, -41,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -39, 589, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -2, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 627,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 2867, 2867, 2867,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 5), 1000, -59, 691, 575,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, 406,
	ftAnimSetValT(FT_ANIM_ROTZ, 46), 0,
	ftAnimSetValAfterT(FT_ANIM_ROTY, 46), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, 367,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 238,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValAfterT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 27), 2867, 2867, 2867,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), 3216, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 1211,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 30), 2400, 19,
	ftAnimSetValT(FT_ANIM_TRAX, 44), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 25), 367,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 2), 384,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -181, 211,
	ftAnimSetValT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 540, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 102, 62,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 1), 402, 111,
	ftAnimSetValBlock(FT_ANIM_TRAY), -111,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 0, -41,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 13), 0, 0, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTSamusAnimCliffEscapeSlow2_joint6[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 367, -23, -4, 38, -389, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 313, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -87, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 19), 22, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 21, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 203, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 311, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 351, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -80, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -21, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 355, -20, -22, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -250, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 393, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 204, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 115, -4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -255, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -258, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 422, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 464, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 470, 6, 113, -2, -255, 3,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimCliffEscapeSlow2_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -698, -57,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -1214, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1222, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -1124, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1100, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -756, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -748, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -759, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimCliffEscapeSlow2_joint8[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 515, -67, 8, 0, 8, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 48, 4, 8, -4, 3, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 714, 13, -178, 0, 41, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 701, 0, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTSamusAnimCliffEscapeSlow2_joint9[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	_FT_ANIM_CMD(11, 0, 1), 6,
	ftAnimBlock(0, 54),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimCliffEscapeSlow2_joint12[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 479, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -2, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 11), -231,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 6,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 49), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTSamusAnimCliffEscapeSlow2_joint13[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 95, 28, 347, 8, -201, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 260, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 103, -72, -121, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -10, -37, -251, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 57, -14, 39, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 34, -28, 88, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -56, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 123, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 64, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 255, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -42, -22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 76, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 52, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -74, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), -363, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -368, -22, 49, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 17), 24, 10, -208, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -55, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), -113, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 29, 5, -112, 1, -214, -5,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimCliffEscapeSlow2_joint15[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -421, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -316, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -38, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -445, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -780, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -522, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -607, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -645, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), -831, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -805, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -603, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimCliffEscapeSlow2_joint16[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, -28, 168, -1, -439, -90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -75, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), -205, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -677, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -690, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 9, 40, -393, 146,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -13, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -397, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), -928, -35,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -15, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 270, 13,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -962, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -893, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 282, 9, -189, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -60, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 116, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 95, -16, -832, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 87, -9, -421, 90,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -37, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -25, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 72, -15, -38, -13, -321, 99,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimCliffEscapeSlow2_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1136, 47,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1229, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1069, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1097, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1108, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 1383, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1354, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 537, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 364, -173,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimCliffEscapeSlow2_joint20[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -149, 3, 24, -1, 164, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 40), -314, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 42), 205, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 28), 66, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 44, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -91, 22,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -318, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -20, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 193, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -21, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -73, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -80, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -65, 14, -24, -3, -16, 3,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimCliffEscapeSlow2_joint21[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 25, -41, 364, -39, -336, -130,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -95, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 240, -14, -723, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 243, 119, -769, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 479, 118, -350, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 479, 0, -357, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 154, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 31), -1083, -6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -112, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -274, 15,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 133, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 275, 13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1087, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -803, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -258, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 263, 10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -686, 114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -7, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 283, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 145, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 268, 5, 134, -11, 12, 20,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimCliffEscapeSlow2_joint23[148] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1197, 85,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1381, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1382, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1082, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1085, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), 1410, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1391, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 449, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 353, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 312, -40,
	ftAnimEnd(),
	0x0000, 0x200E, 0x05DA, 0xFFC9, 0x0672, 0x0000, 0x057F, 0xFFE6, 0x2809, 0x0019, 0x0513, 0xFFFF, 0x2805, 0x0028, 0x0690, 0xFFFC, 0x2003, 0x0003, 0x0552, 0xFFF3, 0x2003, 0x0001, 0x0556, 0x0069, 0x2003, 0x0001, 0x0624, 0x0069, 0x2003, 0x0001, 0x062A, 0x0005, 0x2803, 0x001E, 0x06F1, 0xFFF7, 0x0801, 0x0013, 0x2009, 0x0001, 0x0512, 0xFFFF, 0x2809, 0x0012, 0x04CA, 0xFFF4, 0x0801, 0x000A, 0x2003, 0x0001, 0x06E7, 0xFFF5, 0x2803, 0x000B, 0x06E3, 0x0008, 0x0801, 0x0003, 0x2005, 0x0001, 0x068C, 0xFFF4, 0x2805, 0x0008, 0x05A5, 0xFFF7, 0x0801, 0x0003, 0x2009, 0x0001, 0x04C2, 0x0000, 0x2809, 0x0008, 0x058E, 0x0009, 0x0801, 0x0003, 0x2003, 0x0001, 0x06E8, 0x0002, 0x2803, 0x0004, 0x06C7, 0xFFF7, 0x2005, 0x0001, 0x059D, 0xFFFA, 0x2005, 0x0003, 0x0595, 0x0000, 0x200F, 0x0001, 0x06C1, 0xFFFB, 0x0595, 0x0000, 0x0593, 0x0005, 0x0000, 0x0000, 0x0000,
};
