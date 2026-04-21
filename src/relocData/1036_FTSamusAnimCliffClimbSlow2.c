/* AnimJoint data for relocData file 1036 (FTSamusAnimCliffClimbSlow2) */
/* 1360 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimCliffClimbSlow2_joint1[12];
extern u16 dFTSamusAnimCliffClimbSlow2_joint2[42];
extern u16 dFTSamusAnimCliffClimbSlow2_joint3[14];
extern u16 dFTSamusAnimCliffClimbSlow2_joint5[30];
extern u16 dFTSamusAnimCliffClimbSlow2_joint6[58];
extern u16 dFTSamusAnimCliffClimbSlow2_joint7[36];
extern u16 dFTSamusAnimCliffClimbSlow2_joint8[34];
extern u16 dFTSamusAnimCliffClimbSlow2_joint9[12];
extern u16 dFTSamusAnimCliffClimbSlow2_joint12[10];
extern u16 dFTSamusAnimCliffClimbSlow2_joint13[50];
extern u16 dFTSamusAnimCliffClimbSlow2_joint15[30];
extern u16 dFTSamusAnimCliffClimbSlow2_joint16[60];
extern u16 dFTSamusAnimCliffClimbSlow2_joint18[40];
extern u16 dFTSamusAnimCliffClimbSlow2_joint20[34];
extern u16 dFTSamusAnimCliffClimbSlow2_joint21[66];
extern u16 dFTSamusAnimCliffClimbSlow2_joint23[32];
extern u16 dFTSamusAnimCliffClimbSlow2_joint24[72];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTSamusAnimCliffClimbSlow2_joints[] = {
	(u32)dFTSamusAnimCliffClimbSlow2_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimCliffClimbSlow2_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimCliffClimbSlow2_joint3, /* [2] joint 3 */
	(u32)dFTSamusAnimCliffClimbSlow2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTSamusAnimCliffClimbSlow2_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimCliffClimbSlow2_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimCliffClimbSlow2_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimCliffClimbSlow2_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimCliffClimbSlow2_joint12, /* [9] joint 12 */
	0x00000000, /* [10] NULL */
	0x00000000, /* [11] NULL */
	(u32)dFTSamusAnimCliffClimbSlow2_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimCliffClimbSlow2_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTSamusAnimCliffClimbSlow2_joint16, /* [15] joint 16 */
	(u32)dFTSamusAnimCliffClimbSlow2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTSamusAnimCliffClimbSlow2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTSamusAnimCliffClimbSlow2_joint21, /* [20] joint 21 */
	(u32)dFTSamusAnimCliffClimbSlow2_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTSamusAnimCliffClimbSlow2_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTSamusAnimCliffClimbSlow2_joint1[12] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimCliffClimbSlow2_joint2[42] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 54), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 34,
	ftAnimSetValRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 864, -144, -29, -4,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 20), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 868, -84,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -84,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), 835, 88,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 88,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 1520, 576,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 576,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 1600, 171,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTSamusAnimCliffClimbSlow2_joint3[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 87, 71,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 30), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 10,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimCliffClimbSlow2_joint5[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ), 134, 2, 54, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ, 15), 134, -4, 0, 0, 54, -14,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 10,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ, 15), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTSamusAnimCliffClimbSlow2_joint6[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 29, 7, -43, 1, 2997, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), 131, 32, -150, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 2830, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2891, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 3029, -26,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 176, 59, -145, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 468, 15, 93, 35,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3006, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2991, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 476, 7, 114, 20, 2985, -5,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimCliffClimbSlow2_joint7[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -434, 79,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -127, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -324, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -412, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -804, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -759, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimCliffClimbSlow2_joint8[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 643, -16, 49, 9, 65, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 575, -36, 142, 0, 28, -4,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 99, 13, 34, -9, 4, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 781, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTSamusAnimCliffClimbSlow2_joint9[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	_FT_ANIM_CMD(11, 0, 1), 90,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimCliffClimbSlow2_joint12[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 10,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTSamusAnimCliffClimbSlow2_joint13[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 64, 0, 23, 2, -262, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -102, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 59, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -438, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -438, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -245, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -233, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -216, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -121, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 0, -128, -7, -215, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimCliffClimbSlow2_joint15[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -395, 80,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -5, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -156, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -592, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, -2,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTSamusAnimCliffClimbSlow2_joint16[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, 2, -27, 0, 91, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -64, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 61, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -84, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -98, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -113, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -213, -100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -426, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -48, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -22, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 77, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 87, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 0, -27, -4, -389, 36,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimCliffClimbSlow2_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 4, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 126, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 166, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 475, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 538, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 744, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 797, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 675, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -196,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimCliffClimbSlow2_joint20[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1582, 0, 1555, 0, 1845, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 1636, 1, 1569, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -1712, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1752, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -1693, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1684, 9, 1637, 0, 1566, -2,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimCliffClimbSlow2_joint21[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1636, -23, 1497, 10, 1234, -104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1555, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1698, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 470, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 543, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 975, 102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1534, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1437, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1684, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1391, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1072, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1534, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1382, 9, 1447, 9, 1558, 24,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimCliffClimbSlow2_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1208, 69,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1303, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1242, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1126, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1024, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 487, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTSamusAnimCliffClimbSlow2_joint24[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 78, 3, -17, 3, -162, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 162, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 99, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -377, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -417, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -492, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 201, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 187, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 108, 7, -502, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 146, -4, -223, 19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 196, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 194, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, -3, 193, 0, -213, 10,
	ftAnimEnd(),
	0x0000, 0x0000,
};
