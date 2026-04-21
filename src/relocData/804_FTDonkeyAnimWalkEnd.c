/* AnimJoint data for relocData file 804 (FTDonkeyAnimWalkEnd) */
/* 800 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimWalkEnd_joint1[22];
extern u16 dFTDonkeyAnimWalkEnd_joint2[14];
extern u16 dFTDonkeyAnimWalkEnd_joint4[14];
extern u16 dFTDonkeyAnimWalkEnd_joint5[24];
extern u16 dFTDonkeyAnimWalkEnd_joint7[16];
extern u16 dFTDonkeyAnimWalkEnd_joint8[22];
extern u16 dFTDonkeyAnimWalkEnd_joint10[20];
extern u16 dFTDonkeyAnimWalkEnd_joint11[24];
extern u16 dFTDonkeyAnimWalkEnd_joint12[16];
extern u16 dFTDonkeyAnimWalkEnd_joint13[10];
extern u16 dFTDonkeyAnimWalkEnd_joint16[10];
extern u16 dFTDonkeyAnimWalkEnd_joint17[24];
extern u16 dFTDonkeyAnimWalkEnd_joint19[16];
extern u16 dFTDonkeyAnimWalkEnd_joint21[24];
extern u16 dFTDonkeyAnimWalkEnd_joint22[34];
extern u16 dFTDonkeyAnimWalkEnd_joint24[16];
extern u16 dFTDonkeyAnimWalkEnd_joint25[44];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimWalkEnd_joints[] = {
	(u32)dFTDonkeyAnimWalkEnd_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimWalkEnd_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimWalkEnd_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimWalkEnd_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimWalkEnd_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTDonkeyAnimWalkEnd_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimWalkEnd_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimWalkEnd_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimWalkEnd_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimWalkEnd_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimWalkEnd_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimWalkEnd_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimWalkEnd_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimWalkEnd_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimWalkEnd_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimWalkEnd_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimWalkEnd_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimWalkEnd_joint1[22] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 110, 38, 1298, -149, -327, -21,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 1031, -400,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 4), 94, -69,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -69,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 6), -29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimWalkEnd_joint2[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -79, -12, -96, 0, -61, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -265, -41, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTDonkeyAnimWalkEnd_joint4[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 653, 7, 69, 1, -18, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 750, 24, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimWalkEnd_joint5[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -6, -71, -11, -476, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -53, -16, -85, 1, -467, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, -8, -84, 0, -473, -6,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimWalkEnd_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -742, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -426, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimWalkEnd_joint8[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 150, 1, -67, 0, 9, 4,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 174, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 23, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTDonkeyAnimWalkEnd_joint10[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -280, -8, 153, -7, -30, -6,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -398, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -33, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimWalkEnd_joint11[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -352, 17, 62, 11, -666, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -120, 9, 170, 3, -480, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, 4, 172, 1, -479, 1,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimWalkEnd_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -302, -27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -418, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimWalkEnd_joint13[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 491,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 98,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimWalkEnd_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimWalkEnd_joint17[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -355, 0, -250, -6, -188, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -75, 26, -389, -5, -321, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, 14, -392, -2, -329, -8,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimWalkEnd_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 706, 24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1022, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimWalkEnd_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 32, 6, 87, 0, -407, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -105, -15, 15, -1, -375, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, -8, 14, 0, -369, 5,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimWalkEnd_joint22[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -16, -17, 253, -17, -507, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 94, 16, 215, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -454, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -399, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -310, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 104, 9, 217, 1, -295, 14,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimWalkEnd_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 984, 16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 996, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimWalkEnd_joint25[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 145, 42, -79, 72, -237, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 324, -40, 263, -23, -127, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 272, -57, 230, -35, -191, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 27, -34, 111, -14, -377, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, -19, 103, -8, -387, -10,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
