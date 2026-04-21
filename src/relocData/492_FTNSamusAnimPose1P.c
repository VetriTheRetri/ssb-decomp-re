/* AnimJoint data for relocData file 492 (FTNSamusAnimPose1P) */
/* 720 bytes: 128-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNSamusAnimPose1P_joint1[26];
extern u16 dFTNSamusAnimPose1P_joint2[10];
extern u16 dFTNSamusAnimPose1P_joint4[26];
extern u16 dFTNSamusAnimPose1P_joint5[18];
extern u16 dFTNSamusAnimPose1P_joint6[14];
extern u16 dFTNSamusAnimPose1P_joint8[8];
extern u16 dFTNSamusAnimPose1P_joint9[14];
extern u16 dFTNSamusAnimPose1P_joint11[8];
extern u16 dFTNSamusAnimPose1P_joint12[24];
extern u16 dFTNSamusAnimPose1P_joint23[16];
extern u16 dFTNSamusAnimPose1P_joint24[24];
extern u16 dFTNSamusAnimPose1P_joint26[16];
extern u16 dFTNSamusAnimPose1P_joint28[26];
extern u16 dFTNSamusAnimPose1P_joint29[24];
extern u16 dFTNSamusAnimPose1P_joint31[16];
extern u16 dFTNSamusAnimPose1P_joint32[24];

/* Joint pointer table (32 entries, 128 bytes) */
u32 dFTNSamusAnimPose1P_joints[] = {
	(u32)dFTNSamusAnimPose1P_joint1, /* [0] joint 1 */
	(u32)dFTNSamusAnimPose1P_joint2, /* [1] joint 2 */
	(u32)dFTNSamusAnimPose1P_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNSamusAnimPose1P_joint5, /* [4] joint 5 */
	(u32)dFTNSamusAnimPose1P_joint6, /* [5] joint 6 */
	(u32)dFTNSamusAnimPose1P_joint8, /* [6] joint 8 */
	0x00000000, /* [7] NULL */
	(u32)dFTNSamusAnimPose1P_joint9, /* [8] joint 9 */
	(u32)dFTNSamusAnimPose1P_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTNSamusAnimPose1P_joint12, /* [11] joint 12 */
	(u32)dFTNSamusAnimPose1P_joint23, /* [12] joint 23 */
	0x00000000, /* [13] NULL */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	0x00000000, /* [17] NULL */
	0x00000000, /* [18] NULL */
	0x00000000, /* [19] NULL */
	0x00000000, /* [20] NULL */
	0x00000000, /* [21] NULL */
	0x00000000, /* [22] NULL */
	(u32)dFTNSamusAnimPose1P_joint24, /* [23] joint 24 */
	(u32)dFTNSamusAnimPose1P_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTNSamusAnimPose1P_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	(u32)dFTNSamusAnimPose1P_joint29, /* [28] joint 29 */
	(u32)dFTNSamusAnimPose1P_joint31, /* [29] joint 31 */
	0x00000000, /* [30] NULL */
	(u32)dFTNSamusAnimPose1P_joint32, /* [31] joint 32 */
};

/* 4-byte alignment padding */
static u32 dFTNSamusAnimPose1P_pad[1] = { 0 };

/* Joint 1 */
u16 dFTNSamusAnimPose1P_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 548, -4420, 1545, 1960,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 548, -274, 0, 3838, 1906, 1934, 0, -6306,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -3460, 2029, 383,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNSamusAnimPose1P_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNSamusAnimPose1P_joint4[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), -268, 0, -41, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), -268, 134, 0, 0, -41, 138, -1, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 0, 0, -7, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNSamusAnimPose1P_joint5[18] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1486, 0, 2118, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), -1674,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1486, 0, 2118, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1486, 2118,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNSamusAnimPose1P_joint6[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -909, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -909,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -909, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNSamusAnimPose1P_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTNSamusAnimPose1P_joint9[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -134,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -134, 67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNSamusAnimPose1P_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTNSamusAnimPose1P_joint12[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 371, 0, 102, 0, 10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 371, 0, 102, 0, 10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 371, 0, 102, 0, 10, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTNSamusAnimPose1P_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTNSamusAnimPose1P_joint24[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 135, 54, -49, -2, -140, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 189, 27, -51, -1, 11, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 189, 0, -51, 0, 11, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNSamusAnimPose1P_joint26[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 618, -613,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 28 */
u16 dFTNSamusAnimPose1P_joint28[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 243, -163, 25, 0, 186, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 79, -81, 25, 0, 186, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 79, 0, 25, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 186,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTNSamusAnimPose1P_joint29[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, 0, 197, 0, -297, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -14, 0, 197, 0, -297, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -14, 0, 197, 0, -297, 0,
	ftAnimEnd(),
};

/* Joint 31 */
u16 dFTNSamusAnimPose1P_joint31[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 705, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 705, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 705, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 32 */
u16 dFTNSamusAnimPose1P_joint32[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 541, 0, 65, 0, 23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 541, 0, 65, 0, 23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 541, 0, 65, 0, 23, 0,
	ftAnimEnd(),
};
