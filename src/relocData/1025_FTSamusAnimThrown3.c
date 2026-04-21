/* AnimJoint data for relocData file 1025 (FTSamusAnimThrown3) */
/* 848 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimThrown3_joint2[14];
extern u16 dFTSamusAnimThrown3_joint3[26];
extern u16 dFTSamusAnimThrown3_joint5[32];
extern u16 dFTSamusAnimThrown3_joint6[46];
extern u16 dFTSamusAnimThrown3_joint7[20];
extern u16 dFTSamusAnimThrown3_joint8[20];
extern u16 dFTSamusAnimThrown3_joint9[12];
extern u16 dFTSamusAnimThrown3_joint12[22];
extern u16 dFTSamusAnimThrown3_joint13[30];
extern u16 dFTSamusAnimThrown3_joint15[24];
extern u16 dFTSamusAnimThrown3_joint16[24];
extern u16 dFTSamusAnimThrown3_joint18[16];
extern u16 dFTSamusAnimThrown3_joint20[24];
extern u16 dFTSamusAnimThrown3_joint21[24];
extern u16 dFTSamusAnimThrown3_joint23[16];
extern u16 dFTSamusAnimThrown3_joint24[26];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTSamusAnimThrown3_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTSamusAnimThrown3_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimThrown3_joint3, /* [2] joint 3 */
	(u32)dFTSamusAnimThrown3_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTSamusAnimThrown3_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimThrown3_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimThrown3_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimThrown3_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimThrown3_joint12, /* [9] joint 12 */
	0x00000000, /* [10] NULL */
	0x00000000, /* [11] NULL */
	(u32)dFTSamusAnimThrown3_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimThrown3_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTSamusAnimThrown3_joint16, /* [15] joint 16 */
	(u32)dFTSamusAnimThrown3_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTSamusAnimThrown3_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTSamusAnimThrown3_joint21, /* [20] joint 21 */
	(u32)dFTSamusAnimThrown3_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTSamusAnimThrown3_joint24, /* [23] joint 24 */
};

/* Joint 2 */
u16 dFTSamusAnimThrown3_joint2[14] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 643, 4, -232, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 643, -232,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTSamusAnimThrown3_joint3[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, 0, 0, 0, 0, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -202, 31,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), 268,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0, 0, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimThrown3_joint5[32] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -201, 45, 3, -10, -35, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 167, 5, -4, 0, 32, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), -6, 0, 41, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTSamusAnimThrown3_joint6[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -422, -38, -1028, -19, 695, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 704, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1025, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -460, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -688, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -918, 256, 683, -416,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -175, 470, -924, -14, -128, -517,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, 197, -1053, -128, -350, -221,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimThrown3_joint7[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -502, 61,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -334, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -480, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -364, 116,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimThrown3_joint8[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 424, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 10), 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 5,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -865, -54,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -1036,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTSamusAnimThrown3_joint9[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	_FT_ANIM_CMD(11, 0, 1), 5,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimThrown3_joint12[22] = {
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -148, 0,
	ftAnimSetValT(FT_ANIM_ROTZ, 10), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 0, 4,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 5,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTSamusAnimThrown3_joint13[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -73, -55, -70, 9, -247, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -496, -86, -216, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -540, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -749, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -539, -43, -296, -80, -864, -115,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimThrown3_joint15[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -432, -35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -367, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimThrown3_joint16[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 2, -58, 0, -140, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 9, 3, -57, 0, -349, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 11, 2, -56, 0, -371, -21,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimThrown3_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 477, 28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 656, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 670, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimThrown3_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 35, 0, 62, 0, 190, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 32, -2, 62, 0, 190, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 31, -1, 62, 0, 190, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimThrown3_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -25, 1, 37, 0, -466, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -5, 4, 44, 0, -240, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, 3, 44, 0, -204, 36,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimThrown3_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 470, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 362, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 328, -34,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTSamusAnimThrown3_joint24[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 9, -1, -12, 0, -178, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 3, 0, -12, 0, -178, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3, 0, -12, 0, -178, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
