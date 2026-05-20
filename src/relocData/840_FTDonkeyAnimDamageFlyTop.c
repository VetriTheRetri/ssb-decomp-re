/* AnimJoint data for relocData file 840 (FTDonkeyAnimDamageFlyTop) */
/* 672 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimDamageFlyTop_joint1[12];
extern u16 dFTDonkeyAnimDamageFlyTop_joint2[14];
extern u16 dFTDonkeyAnimDamageFlyTop_joint4[12];
extern u16 dFTDonkeyAnimDamageFlyTop_joint5[26];
extern u16 dFTDonkeyAnimDamageFlyTop_joint7[16];
extern u16 dFTDonkeyAnimDamageFlyTop_joint10[8];
extern u16 dFTDonkeyAnimDamageFlyTop_joint11[26];
extern u16 dFTDonkeyAnimDamageFlyTop_joint12[16];
extern u16 dFTDonkeyAnimDamageFlyTop_joint13[8];
extern u16 dFTDonkeyAnimDamageFlyTop_joint14[8];
extern u16 dFTDonkeyAnimDamageFlyTop_joint16[8];
extern u16 dFTDonkeyAnimDamageFlyTop_joint17[26];
extern u16 dFTDonkeyAnimDamageFlyTop_joint19[8];
extern u16 dFTDonkeyAnimDamageFlyTop_joint21[26];
extern u16 dFTDonkeyAnimDamageFlyTop_joint22[24];
extern u16 dFTDonkeyAnimDamageFlyTop_joint24[16];
extern u16 dFTDonkeyAnimDamageFlyTop_joint25[32];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTDonkeyAnimDamageFlyTop_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyTop_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyTop_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyTop_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyTop_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyTop_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyTop_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyTop_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyTop_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyTop_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyTop_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyTop_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyTop_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyTop_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyTop_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyTop_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyTop_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTDonkeyAnimDamageFlyTop_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimDamageFlyTop_joint1[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 900, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimDamageFlyTop_joint2[14] = {
	ftAnimSetVal(FT_ANIM_ROTY), 402,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -714, 0, 0, -214, -154,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 16), 3619,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTDonkeyAnimDamageFlyTop_joint4[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 622, 199, 278, -120, 120, -120,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimDamageFlyTop_joint5[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 722, 0, 16, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), -498,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 722, 0, 16, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), -498,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 722, 0, 16, 0, -498, 0,
	ftAnimLoop(0x6800, -50),
};

/* Joint 7 */
u16 dFTDonkeyAnimDamageFlyTop_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -386, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -386, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -386, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 10 */
u16 dFTDonkeyAnimDamageFlyTop_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -343, 242, -170,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 11 */
u16 dFTDonkeyAnimDamageFlyTop_joint11[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 434, 0, -322, 0, 475, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 434, 0, -322, 0, 475, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 434, 0, -322, 0, 475, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimDamageFlyTop_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -260, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -260, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -260, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTDonkeyAnimDamageFlyTop_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 14 */
u16 dFTDonkeyAnimDamageFlyTop_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTDonkeyAnimDamageFlyTop_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -149, -372, -552,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 17 */
u16 dFTDonkeyAnimDamageFlyTop_joint17[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 41, 0, -213, 0, -265, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 41, 0, -213, 0, -265, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 41, 0, -213, 0, -265, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimDamageFlyTop_joint19[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 1322,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 21 */
u16 dFTDonkeyAnimDamageFlyTop_joint21[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -405, 0, -46, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -405, 0, 69, 0, -46, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, 0, 69, 0, -46, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimDamageFlyTop_joint22[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 1561, 0, 617, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 1314,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 617, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 1561,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 617, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 1561,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimDamageFlyTop_joint24[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 1117,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1117, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1117, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimDamageFlyTop_joint25[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -109, 0, -269, 0, -223, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -109, 0, -269, 0, -223, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, 0, -269, 0, -223, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
