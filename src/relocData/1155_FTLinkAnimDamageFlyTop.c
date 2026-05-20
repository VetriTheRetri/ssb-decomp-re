/* AnimJoint data for relocData file 1155 (FTLinkAnimDamageFlyTop) */
/* 752 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimDamageFlyTop_joint1[10];
extern u16 dFTLinkAnimDamageFlyTop_joint2[14];
extern u16 dFTLinkAnimDamageFlyTop_joint4[12];
extern u16 dFTLinkAnimDamageFlyTop_joint5[26];
extern u16 dFTLinkAnimDamageFlyTop_joint6[16];
extern u16 dFTLinkAnimDamageFlyTop_joint9[8];
extern u16 dFTLinkAnimDamageFlyTop_joint10[26];
extern u16 dFTLinkAnimDamageFlyTop_joint11[16];
extern u16 dFTLinkAnimDamageFlyTop_joint12[8];
extern u16 dFTLinkAnimDamageFlyTop_joint13[8];
extern u16 dFTLinkAnimDamageFlyTop_joint16[8];
extern u16 dFTLinkAnimDamageFlyTop_joint17[8];
extern u16 dFTLinkAnimDamageFlyTop_joint18[8];
extern u16 dFTLinkAnimDamageFlyTop_joint20[8];
extern u16 dFTLinkAnimDamageFlyTop_joint21[28];
extern u16 dFTLinkAnimDamageFlyTop_joint23[16];
extern u16 dFTLinkAnimDamageFlyTop_joint25[26];
extern u16 dFTLinkAnimDamageFlyTop_joint26[26];
extern u16 dFTLinkAnimDamageFlyTop_joint28[16];
extern u16 dFTLinkAnimDamageFlyTop_joint29[28];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimDamageFlyTop_joints[] = {
	(AObjEvent32 *)dFTLinkAnimDamageFlyTop_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimDamageFlyTop_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimDamageFlyTop_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimDamageFlyTop_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimDamageFlyTop_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimDamageFlyTop_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimDamageFlyTop_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimDamageFlyTop_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimDamageFlyTop_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimDamageFlyTop_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimDamageFlyTop_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimDamageFlyTop_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimDamageFlyTop_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimDamageFlyTop_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimDamageFlyTop_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimDamageFlyTop_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimDamageFlyTop_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimDamageFlyTop_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimDamageFlyTop_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimDamageFlyTop_joint29, /* [28] joint 29 */
};

/* 4-byte alignment padding */
static u32 dFTLinkAnimDamageFlyTop_pad[1] = { 0 };

/* Joint 1 */
u16 dFTLinkAnimDamageFlyTop_joint1[10] = {
	ftAnimSetVal(FT_ANIM_TRAY), 901,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 16), 901,
	ftAnimLoop(0x6800, -18),
};

/* Joint 2 */
u16 dFTLinkAnimDamageFlyTop_joint2[14] = {
	ftAnimSetVal(FT_ANIM_ROTY), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -40, 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 16), -3216,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimDamageFlyTop_joint4[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 166, -179, -41, 0, 130, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimDamageFlyTop_joint5[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2853, 0, 141, 0, 287, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 141, 0, 287, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 2853,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2853, 0, 141, 0, 287, 0,
	ftAnimLoop(0x6800, -50),
};

/* Joint 6 */
u16 dFTLinkAnimDamageFlyTop_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -249, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -249, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -249, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 9 */
u16 dFTLinkAnimDamageFlyTop_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 86, 83, 174,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 10 */
u16 dFTLinkAnimDamageFlyTop_joint10[26] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -3, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -639, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -639, 0, -3, 0, -354, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3, 0, -354, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -639,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimDamageFlyTop_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -432, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -432, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -432, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 12 */
u16 dFTLinkAnimDamageFlyTop_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 143, -122, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 13 */
u16 dFTLinkAnimDamageFlyTop_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTLinkAnimDamageFlyTop_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 17 */
u16 dFTLinkAnimDamageFlyTop_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -427, -236, 38,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 18 */
u16 dFTLinkAnimDamageFlyTop_joint18[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -76, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 20 */
u16 dFTLinkAnimDamageFlyTop_joint20[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -97, 291, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 21 */
u16 dFTLinkAnimDamageFlyTop_joint21[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, 0, -178, 0, 57, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -178, 0, 57, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -536,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -178, 0, 57, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -536,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimDamageFlyTop_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 534, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 534, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 534,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTLinkAnimDamageFlyTop_joint25[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 94, 0, -223, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 445,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 94, 0, -223, 0, 445, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), -223, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 94, 445,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimDamageFlyTop_joint26[26] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -76, 0, -129, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -72,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -72, 0, -76, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -72, 0, -76, 0, -129, 0,
	ftAnimLoop(0x6800, -50),
};

/* Joint 28 */
u16 dFTLinkAnimDamageFlyTop_joint28[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 259, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 259, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimDamageFlyTop_joint29[28] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -214, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -1357, 603,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -1357, 0, -214, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 603,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -214, 0, 603, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -1357,
	ftAnimLoop(0x6800, -50),
	ftAnimEnd(),
	0x0000,
};
