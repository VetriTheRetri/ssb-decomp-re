/* AnimJoint data for relocData file 842 (FTDonkeyAnimFallSpecial) */
/* 720 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimFallSpecial_joint1[8];
extern u16 dFTDonkeyAnimFallSpecial_joint2[16];
extern u16 dFTDonkeyAnimFallSpecial_joint4[8];
extern u16 dFTDonkeyAnimFallSpecial_joint5[26];
extern u16 dFTDonkeyAnimFallSpecial_joint6[16];
extern u16 dFTDonkeyAnimFallSpecial_joint7[8];
extern u16 dFTDonkeyAnimFallSpecial_joint8[8];
extern u16 dFTDonkeyAnimFallSpecial_joint10[8];
extern u16 dFTDonkeyAnimFallSpecial_joint11[26];
extern u16 dFTDonkeyAnimFallSpecial_joint12[16];
extern u16 dFTDonkeyAnimFallSpecial_joint13[8];
extern u16 dFTDonkeyAnimFallSpecial_joint14[12];
extern u16 dFTDonkeyAnimFallSpecial_joint16[16];
extern u16 dFTDonkeyAnimFallSpecial_joint17[26];
extern u16 dFTDonkeyAnimFallSpecial_joint19[16];
extern u16 dFTDonkeyAnimFallSpecial_joint21[26];
extern u16 dFTDonkeyAnimFallSpecial_joint22[26];
extern u16 dFTDonkeyAnimFallSpecial_joint24[16];
extern u16 dFTDonkeyAnimFallSpecial_joint25[24];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTDonkeyAnimFallSpecial_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimFallSpecial_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimFallSpecial_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimFallSpecial_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTDonkeyAnimFallSpecial_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTDonkeyAnimFallSpecial_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimFallSpecial_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimFallSpecial_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimFallSpecial_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTDonkeyAnimFallSpecial_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTDonkeyAnimFallSpecial_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimFallSpecial_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimFallSpecial_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimFallSpecial_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTDonkeyAnimFallSpecial_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTDonkeyAnimFallSpecial_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTDonkeyAnimFallSpecial_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTDonkeyAnimFallSpecial_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTDonkeyAnimFallSpecial_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTDonkeyAnimFallSpecial_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimFallSpecial_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 30, 433, 229,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 2 */
u16 dFTDonkeyAnimFallSpecial_joint2[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -698, 87, 65,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -683, 163, 68,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -698, 87, 65,
	ftAnimLoop(0x6800, -30),
};

/* Joint 4 */
u16 dFTDonkeyAnimFallSpecial_joint4[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 597, 96, -87,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 5 */
u16 dFTDonkeyAnimFallSpecial_joint5[26] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1580, 0, 1082, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -1488,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1488, 0, -1580, 0, 1082, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1580, 0, 1082, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -1488,
	ftAnimLoop(0x6800, -50),
};

/* Joint 6 */
u16 dFTDonkeyAnimFallSpecial_joint6[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -901,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -901, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -901, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimFallSpecial_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -825, -308, 165,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 8 */
u16 dFTDonkeyAnimFallSpecial_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 144, 74,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 10 */
u16 dFTDonkeyAnimFallSpecial_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -452, -206, 75,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 11 */
u16 dFTDonkeyAnimFallSpecial_joint11[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 85, 0, 30, 0, -258, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 85, 0, 30, 0, -258, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 85, 0, 30, 0, -258, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimFallSpecial_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1093, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1093, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1093, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTDonkeyAnimFallSpecial_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, 0, 0,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 14 */
u16 dFTDonkeyAnimFallSpecial_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimFallSpecial_joint16[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -1183,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -4, 105, -10, 813, 682,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -1009,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -1183,
	ftAnimLoop(0x6800, -30),
};

/* Joint 17 */
u16 dFTDonkeyAnimFallSpecial_joint17[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 161, 0, -92, 0, -948, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 161, 0, -92, 0, -948, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, 0, -92, 0, -948, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimFallSpecial_joint19[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 1175,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1175, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1175, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTDonkeyAnimFallSpecial_joint21[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -293, 0, 9, 0, 41, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -293, 0, 9, 0, 41, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -293, 0, 9, 0, 41, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimFallSpecial_joint22[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -268, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, -1149,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -268, 0, -3, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -1149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -268, 0, -3, 0, -1149, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimFallSpecial_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1009, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1009, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1009, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 25 */
u16 dFTDonkeyAnimFallSpecial_joint25[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -1461, 0, 1787, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), -1480,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -1461, 1787,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 1787, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -1461,
	ftAnimLoop(0x6800, -38),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
