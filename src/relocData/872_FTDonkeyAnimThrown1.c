/* AnimJoint data for relocData file 872 (FTDonkeyAnimThrown1) */
/* 912 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimThrown1_joint2[8];
extern u16 dFTDonkeyAnimThrown1_joint3[14];
extern u16 dFTDonkeyAnimThrown1_joint5[14];
extern u16 dFTDonkeyAnimThrown1_joint6[46];
extern u16 dFTDonkeyAnimThrown1_joint7[24];
extern u16 dFTDonkeyAnimThrown1_joint8[8];
extern u16 dFTDonkeyAnimThrown1_joint9[10];
extern u16 dFTDonkeyAnimThrown1_joint11[20];
extern u16 dFTDonkeyAnimThrown1_joint12[50];
extern u16 dFTDonkeyAnimThrown1_joint13[40];
extern u16 dFTDonkeyAnimThrown1_joint14[8];
extern u16 dFTDonkeyAnimThrown1_joint15[12];
extern u16 dFTDonkeyAnimThrown1_joint17[12];
extern u16 dFTDonkeyAnimThrown1_joint18[26];
extern u16 dFTDonkeyAnimThrown1_joint20[16];
extern u16 dFTDonkeyAnimThrown1_joint22[26];
extern u16 dFTDonkeyAnimThrown1_joint23[26];
extern u16 dFTDonkeyAnimThrown1_joint25[16];
extern u16 dFTDonkeyAnimThrown1_joint26[28];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTDonkeyAnimThrown1_joints[] = {
	NULL, /* [0] NULL */
	(AObjEvent32 *)dFTDonkeyAnimThrown1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimThrown1_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTDonkeyAnimThrown1_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTDonkeyAnimThrown1_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimThrown1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimThrown1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimThrown1_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTDonkeyAnimThrown1_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTDonkeyAnimThrown1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimThrown1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimThrown1_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimThrown1_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTDonkeyAnimThrown1_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTDonkeyAnimThrown1_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTDonkeyAnimThrown1_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTDonkeyAnimThrown1_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTDonkeyAnimThrown1_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTDonkeyAnimThrown1_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTDonkeyAnimThrown1_joint26, /* [25] joint 26 */
};

/* Joint 2 */
u16 dFTDonkeyAnimThrown1_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -24, 782, 201,
	ftAnimBlock(0, 14),
	ftAnimLoop(0x6800, -14),
};

/* Joint 3 */
u16 dFTDonkeyAnimThrown1_joint3[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -383,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -41, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), -423,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), -383,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimThrown1_joint5[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 637,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 24, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 578,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 637,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimThrown1_joint6[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2694, -36, -261, -14, 1498, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1720, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -276, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -3085, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3048, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2731, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1675, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1516, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2694, 36, -261, 14, 1498, -18,
	ftAnimLoop(0x6800, -88),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimThrown1_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -164, -35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -465, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -412, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -200, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -164, 35,
	ftAnimLoop(0x6800, -46),
};

/* Joint 8 */
u16 dFTDonkeyAnimThrown1_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -441, -66, -56,
	ftAnimBlock(0, 14),
	ftAnimLoop(0x6800, -14),
};

/* Joint 9 */
u16 dFTDonkeyAnimThrown1_joint9[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	_FT_ANIM_CMD(11, 0, 1), 7,
	ftAnimBlock(0, 14),
	ftAnimLoop(0x6800, -18),
};

/* Joint 11 */
u16 dFTDonkeyAnimThrown1_joint11[20] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 70, 0, 29, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -847,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 70, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), -932,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), -847,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimThrown1_joint12[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1022, -4, 1150, 9, -55, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -126, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1017, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1387, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1391, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1286, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1227, -50, -100, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1160, -18, -62, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1022, 4, 1150, -9, -55, 6,
	ftAnimLoop(0x6800, -96),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimThrown1_joint13[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -415, 15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -187, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -288, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -357, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -400, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -415, -15,
	ftAnimLoop(0x6800, -78),
};

/* Joint 14 */
u16 dFTDonkeyAnimThrown1_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 663, 244, -145,
	ftAnimBlock(0, 14),
	ftAnimLoop(0x6800, -14),
};

/* Joint 15 */
u16 dFTDonkeyAnimThrown1_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 14),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimThrown1_joint17[12] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -328, 269, 304,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -334, 246, 278,
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTDonkeyAnimThrown1_joint18[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -74, 0, -414, 0, -213, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -74, 0, -413, 0, -210, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -74, 0, -413, 0, -209, 1,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimThrown1_joint20[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1177, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 1176, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1175, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 22 */
u16 dFTDonkeyAnimThrown1_joint22[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -305, 2, -43, 0, 93, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -311, -2, -44, 0, 89, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -314, -2, -44, 0, 87, -2,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimThrown1_joint23[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 197, 0, 351, 0, -128, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 195, 0, 350, 0, -127, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 195, 0, 350, 0, -126, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimThrown1_joint25[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1129, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 1128, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1128, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 26 */
u16 dFTDonkeyAnimThrown1_joint26[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1594, -1, 1578, 0, 1603, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 1597, 1, 1576, 0, 1601, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1599, 1, 1576, 0, 1600, -1,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
	0x0000, 0x0000,
};
