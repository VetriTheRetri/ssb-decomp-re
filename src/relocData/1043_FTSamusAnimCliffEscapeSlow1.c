/* AnimJoint data for relocData file 1043 (FTSamusAnimCliffEscapeSlow1) */
/* 912 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimCliffEscapeSlow1_joint1[14];
extern u16 dFTSamusAnimCliffEscapeSlow1_joint2[28];
extern u16 dFTSamusAnimCliffEscapeSlow1_joint3[16];
extern u16 dFTSamusAnimCliffEscapeSlow1_joint5[36];
extern u16 dFTSamusAnimCliffEscapeSlow1_joint6[34];
extern u16 dFTSamusAnimCliffEscapeSlow1_joint7[24];
extern u16 dFTSamusAnimCliffEscapeSlow1_joint8[26];
extern u16 dFTSamusAnimCliffEscapeSlow1_joint9[10];
extern u16 dFTSamusAnimCliffEscapeSlow1_joint12[22];
extern u16 dFTSamusAnimCliffEscapeSlow1_joint13[24];
extern u16 dFTSamusAnimCliffEscapeSlow1_joint15[16];
extern u16 dFTSamusAnimCliffEscapeSlow1_joint16[32];
extern u16 dFTSamusAnimCliffEscapeSlow1_joint18[16];
extern u16 dFTSamusAnimCliffEscapeSlow1_joint20[30];
extern u16 dFTSamusAnimCliffEscapeSlow1_joint21[38];
extern u16 dFTSamusAnimCliffEscapeSlow1_joint23[42];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTSamusAnimCliffEscapeSlow1_joints[] = {
	(u32)dFTSamusAnimCliffEscapeSlow1_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimCliffEscapeSlow1_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimCliffEscapeSlow1_joint3, /* [2] joint 3 */
	(u32)dFTSamusAnimCliffEscapeSlow1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTSamusAnimCliffEscapeSlow1_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimCliffEscapeSlow1_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimCliffEscapeSlow1_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimCliffEscapeSlow1_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimCliffEscapeSlow1_joint12, /* [9] joint 12 */
	0x00000000, /* [10] NULL */
	0x00000000, /* [11] NULL */
	(u32)dFTSamusAnimCliffEscapeSlow1_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimCliffEscapeSlow1_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTSamusAnimCliffEscapeSlow1_joint16, /* [15] joint 16 */
	(u32)dFTSamusAnimCliffEscapeSlow1_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTSamusAnimCliffEscapeSlow1_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTSamusAnimCliffEscapeSlow1_joint21, /* [20] joint 21 */
	(u32)dFTSamusAnimCliffEscapeSlow1_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF00D7, /* [23] END */
};

/* Joint 1 */
u16 dFTSamusAnimCliffEscapeSlow1_joint1[14] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -1358, 552, -303, 28,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 543, 0, 224,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimCliffEscapeSlow1_joint2[28] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 13, 1588, -52, 244, -51,
	ftAnimSetValRateT(FT_ANIM_TRAX, 6), 48, 52,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 958, -375, -43, -138,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -336, -149,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 920, -39, -78, -201,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTSamusAnimCliffEscapeSlow1_joint3[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, 10, 0, 3, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 255, 16, 198, 21, 88, 9,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimCliffEscapeSlow1_joint5[36] = {
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 91), 4096, 4096, 4096,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 80,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 134, 8, 0, 2, 0, 2,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 383, 28, 100, 12, 116, 11,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 2, -88, 58,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimCliffEscapeSlow1_joint6[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 56, -69, -12, -116, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 428, -40, -51, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -273, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -437, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -437, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 367, -60, -4, 47, -389, 48,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimCliffEscapeSlow1_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -947, 81,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -728, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -527, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -635, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -698, -62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimCliffEscapeSlow1_joint8[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 819, 2, -1, -2, 66, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 515, -67, 8, 0, 8, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 48, 4, 8, -4, 3, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimCliffEscapeSlow1_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimCliffEscapeSlow1_joint12[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 479, 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -2, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 11), -231,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimBlock(0, 6),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTSamusAnimCliffEscapeSlow1_joint13[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 56, 11, 39, 16, -81, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 145, -25, 295, 54, -115, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 95, -49, 347, 51, -201, -86,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimCliffEscapeSlow1_joint15[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -935, 33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -616, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -421, 195,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimCliffEscapeSlow1_joint16[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -125, 12, -50, -18, -8, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 33, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 72, 92, -184, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 155, 47, -287, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, -43, 168, 13, -439, -152,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimCliffEscapeSlow1_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 166, 188,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1030, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1136, 106,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimCliffEscapeSlow1_joint20[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 27, 13, 48, -1, 219, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 27, -3, 173, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -88, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -152, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -149, 3, 24, -2, 164, -9,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimCliffEscapeSlow1_joint21[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 59, 16, 50, 23, 0, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 346, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 142, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 11, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 35, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 403, 8, -113, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 25, -116, 364, -38, -336, -222,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimCliffEscapeSlow1_joint23[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 359, 78,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1012, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1197, 184,
	ftAnimEnd(),
	0x0000, 0x200E, 0x063E, 0xFFFD, 0x066A, 0x0002, 0x06A6, 0xFFEB, 0x200F, 0x0005, 0x0640, 0xFFB2, 0x0672, 0x0000, 0x05A9, 0xFFCE, 0x200F, 0x0001, 0x05DA, 0xFF9B, 0x0672, 0x0000, 0x057F, 0xFFD7, 0x0000, 0x0000, 0x0000,
};
