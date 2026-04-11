/* AnimJoint data for relocData file 1035 (FTSamusAnimCliffClimbSlow1) */
/* 832 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimCliffClimbSlow1_joint1[22];
extern u16 dFTSamusAnimCliffClimbSlow1_joint2[48];
extern u16 dFTSamusAnimCliffClimbSlow1_joint3[12];
extern u16 dFTSamusAnimCliffClimbSlow1_joint5[22];
extern u16 dFTSamusAnimCliffClimbSlow1_joint6[24];
extern u16 dFTSamusAnimCliffClimbSlow1_joint7[16];
extern u16 dFTSamusAnimCliffClimbSlow1_joint8[26];
extern u16 dFTSamusAnimCliffClimbSlow1_joint9[12];
extern u16 dFTSamusAnimCliffClimbSlow1_joint12[8];
extern u16 dFTSamusAnimCliffClimbSlow1_joint13[24];
extern u16 dFTSamusAnimCliffClimbSlow1_joint15[16];
extern u16 dFTSamusAnimCliffClimbSlow1_joint16[24];
extern u16 dFTSamusAnimCliffClimbSlow1_joint18[24];
extern u16 dFTSamusAnimCliffClimbSlow1_joint20[24];
extern u16 dFTSamusAnimCliffClimbSlow1_joint21[24];
extern u16 dFTSamusAnimCliffClimbSlow1_joint23[42];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTSamusAnimCliffClimbSlow1_joints[] = {
	(u32)dFTSamusAnimCliffClimbSlow1_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimCliffClimbSlow1_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimCliffClimbSlow1_joint3, /* [2] joint 3 */
	(u32)dFTSamusAnimCliffClimbSlow1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTSamusAnimCliffClimbSlow1_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimCliffClimbSlow1_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimCliffClimbSlow1_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimCliffClimbSlow1_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimCliffClimbSlow1_joint12, /* [9] joint 12 */
	0x00000000, /* [10] NULL */
	0x00000000, /* [11] NULL */
	(u32)dFTSamusAnimCliffClimbSlow1_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimCliffClimbSlow1_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTSamusAnimCliffClimbSlow1_joint16, /* [15] joint 16 */
	(u32)dFTSamusAnimCliffClimbSlow1_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTSamusAnimCliffClimbSlow1_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTSamusAnimCliffClimbSlow1_joint21, /* [20] joint 21 */
	(u32)dFTSamusAnimCliffClimbSlow1_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF00C3, /* [23] END */
};

/* Joint 1 */
u16 dFTSamusAnimCliffClimbSlow1_joint1[22] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -1358, 955, -303, 26,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 362, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimCliffClimbSlow1_joint2[48] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 54), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 24,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), 1588, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 1363, -744,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 1,
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), 244, -56,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), -29, -4,
	ftAnimBlock(0, 4),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -744,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 864, -144,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -144,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 868, -84,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -4,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 20), 0, 2,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTSamusAnimCliffClimbSlow1_joint3[12] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 87, 71,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 30), 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimCliffClimbSlow1_joint5[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAZ), 134, 2, 54, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ, 15), 134, -4, 0, 0, 54, -14,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimCliffClimbSlow1_joint6[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 0, -69, 5, 3100, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 23, 5, -44, 1, 3022, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 29, 5, -43, 1, 2997, -24,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimCliffClimbSlow1_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -947, 35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -500, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -434, 66,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimCliffClimbSlow1_joint8[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 819, 33, -1, 4, 66, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 643, -16, 49, 9, 65, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 575, -36, 142, 0, 28, -4,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimCliffClimbSlow1_joint9[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	_FT_ANIM_CMD(11, 0, 1), 80,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimCliffClimbSlow1_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTSamusAnimCliffClimbSlow1_joint13[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 56, 1, 39, -5, -81, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 64, 0, 21, 1, -232, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 64, 0, 23, 2, -262, -29,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimCliffClimbSlow1_joint15[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -935, 34,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -469, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -395, 73,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimCliffClimbSlow1_joint16[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -125, -5, -50, 4, -8, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -154, 0, -27, 0, 94, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -153, 1, -27, 0, 91, -3,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimCliffClimbSlow1_joint18[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 166, -39,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimCliffClimbSlow1_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1580, -1, 1560, 0, 1827, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1582, 0, 1555, 0, 1844, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1582, 0, 1555, 0, 1845, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimCliffClimbSlow1_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1549, -1, 1558, -2, 1608, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1619, -15, 1499, -3, 1287, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1636, -17, 1497, -1, 1234, -53,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimCliffClimbSlow1_joint23[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 359, 47,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1138, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1208, 70,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFFF7, 0xFFFE, 0xFFDF, 0x0000, 0x005D, 0xFFF6, 0x200F, 0x0009, 0x0039, 0x0015, 0xFFEB, 0x0003, 0xFF7C, 0xFFE2, 0x200F, 0x0001, 0x004E, 0x0014, 0xFFEF, 0x0003, 0xFF5E, 0xFFE2, 0x0000, 0x0000, 0x0000,
};
