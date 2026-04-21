/* AnimJoint data for relocData file 491 (FTNDonkeyAnimPose1P) */
/* 736 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNDonkeyAnimPose1P_joint1[26];
extern u16 dFTNDonkeyAnimPose1P_joint2[10];
extern u16 dFTNDonkeyAnimPose1P_joint4[22];
extern u16 dFTNDonkeyAnimPose1P_joint5[24];
extern u16 dFTNDonkeyAnimPose1P_joint6[16];
extern u16 dFTNDonkeyAnimPose1P_joint7[8];
extern u16 dFTNDonkeyAnimPose1P_joint8[18];
extern u16 dFTNDonkeyAnimPose1P_joint10[8];
extern u16 dFTNDonkeyAnimPose1P_joint11[24];
extern u16 dFTNDonkeyAnimPose1P_joint12[16];
extern u16 dFTNDonkeyAnimPose1P_joint13[18];
extern u16 dFTNDonkeyAnimPose1P_joint16[8];
extern u16 dFTNDonkeyAnimPose1P_joint17[14];
extern u16 dFTNDonkeyAnimPose1P_joint19[14];
extern u16 dFTNDonkeyAnimPose1P_joint21[24];
extern u16 dFTNDonkeyAnimPose1P_joint22[24];
extern u16 dFTNDonkeyAnimPose1P_joint24[14];
extern u16 dFTNDonkeyAnimPose1P_joint25[28];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTNDonkeyAnimPose1P_joints[] = {
	(u32)dFTNDonkeyAnimPose1P_joint1, /* [0] joint 1 */
	(u32)dFTNDonkeyAnimPose1P_joint2, /* [1] joint 2 */
	(u32)dFTNDonkeyAnimPose1P_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNDonkeyAnimPose1P_joint5, /* [4] joint 5 */
	(u32)dFTNDonkeyAnimPose1P_joint6, /* [5] joint 6 */
	(u32)dFTNDonkeyAnimPose1P_joint7, /* [6] joint 7 */
	(u32)dFTNDonkeyAnimPose1P_joint8, /* [7] joint 8 */
	(u32)dFTNDonkeyAnimPose1P_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNDonkeyAnimPose1P_joint11, /* [10] joint 11 */
	(u32)dFTNDonkeyAnimPose1P_joint12, /* [11] joint 12 */
	(u32)dFTNDonkeyAnimPose1P_joint13, /* [12] joint 13 */
	(u32)dFTNDonkeyAnimPose1P_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTNDonkeyAnimPose1P_joint17, /* [16] joint 17 */
	(u32)dFTNDonkeyAnimPose1P_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNDonkeyAnimPose1P_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNDonkeyAnimPose1P_joint22, /* [21] joint 22 */
	(u32)dFTNDonkeyAnimPose1P_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNDonkeyAnimPose1P_joint25, /* [24] joint 25 */
};

/* 4-byte alignment padding */
static u32 dFTNDonkeyAnimPose1P_pad[1] = { 0 };

/* Joint 1 */
u16 dFTNDonkeyAnimPose1P_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -285, 520, 600, -960,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -285, 142, -1920, -17074, 916, 4732, 0, -400,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -3748, 1783, -1060,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNDonkeyAnimPose1P_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -214, -154,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNDonkeyAnimPose1P_joint4[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 373, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 319, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 373, -186, 0, 156, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 312, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNDonkeyAnimPose1P_joint5[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1594, -1219, -29, 78, 260, -704,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2813, -1061, 48, -72, -443, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3716, -902, -174, -223, -289, 154,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNDonkeyAnimPose1P_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -764, 18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -745, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1044, -298,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNDonkeyAnimPose1P_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1443, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNDonkeyAnimPose1P_joint8[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0, -156, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -312, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNDonkeyAnimPose1P_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNDonkeyAnimPose1P_joint11[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 64, -734, 221, -16, -453, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -670, -16, 204, -59, -517, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 32, 702, 102, -102, -719, -201,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNDonkeyAnimPose1P_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -488, -517,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1006, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -903, 103,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNDonkeyAnimPose1P_joint13[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1537, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1537, -317, 0, -98, 1, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 901, -197, 9,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNDonkeyAnimPose1P_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTNDonkeyAnimPose1P_joint17[14] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -1345, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 1573, -2312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1345, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1345,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNDonkeyAnimPose1P_joint19[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1120, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1120, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNDonkeyAnimPose1P_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 56, 0, -1, 0, -159, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 56, 0, -1, 0, -159, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 56, 0, -1, 0, -159, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNDonkeyAnimPose1P_joint22[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 1298, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 640, 1175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1298, 0, 640, 0, 1175, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1298, 0, 640, 0, 1175, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTNDonkeyAnimPose1P_joint24[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 864, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 864,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 864, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNDonkeyAnimPose1P_joint25[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 694, 0, -392, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), -700,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -392, 0, -700, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 694,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 694, 0, -392, 0, -700, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
