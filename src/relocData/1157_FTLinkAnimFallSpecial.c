/* AnimJoint data for relocData file 1157 (FTLinkAnimFallSpecial) */
/* 768 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimFallSpecial_joint1[16];
extern u16 dFTLinkAnimFallSpecial_joint2[12];
extern u16 dFTLinkAnimFallSpecial_joint4[12];
extern u16 dFTLinkAnimFallSpecial_joint5[26];
extern u16 dFTLinkAnimFallSpecial_joint6[16];
extern u16 dFTLinkAnimFallSpecial_joint9[8];
extern u16 dFTLinkAnimFallSpecial_joint10[26];
extern u16 dFTLinkAnimFallSpecial_joint11[16];
extern u16 dFTLinkAnimFallSpecial_joint12[8];
extern u16 dFTLinkAnimFallSpecial_joint13[8];
extern u16 dFTLinkAnimFallSpecial_joint16[8];
extern u16 dFTLinkAnimFallSpecial_joint17[8];
extern u16 dFTLinkAnimFallSpecial_joint18[8];
extern u16 dFTLinkAnimFallSpecial_joint20[14];
extern u16 dFTLinkAnimFallSpecial_joint21[26];
extern u16 dFTLinkAnimFallSpecial_joint23[16];
extern u16 dFTLinkAnimFallSpecial_joint25[26];
extern u16 dFTLinkAnimFallSpecial_joint26[26];
extern u16 dFTLinkAnimFallSpecial_joint28[14];
extern u16 dFTLinkAnimFallSpecial_joint29[32];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimFallSpecial_joints[] = {
	(AObjEvent32 *)dFTLinkAnimFallSpecial_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimFallSpecial_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimFallSpecial_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimFallSpecial_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimFallSpecial_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimFallSpecial_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimFallSpecial_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimFallSpecial_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimFallSpecial_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimFallSpecial_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimFallSpecial_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimFallSpecial_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimFallSpecial_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimFallSpecial_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimFallSpecial_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimFallSpecial_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimFallSpecial_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimFallSpecial_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimFallSpecial_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimFallSpecial_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimFallSpecial_joint1[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 744, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 61,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 2 */
u16 dFTLinkAnimFallSpecial_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 32, 274, 83, 0, 0, 0,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimFallSpecial_joint4[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 469, 166, 56, 0, 130, 0,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimFallSpecial_joint5[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, -1, -33, 4, -287, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -6, 2, -28, -7, -288, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 1, -33, -4, -287, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimFallSpecial_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -199, -17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -217, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -199, 17,
	ftAnimLoop(0x6800, -30),
};

/* Joint 9 */
u16 dFTLinkAnimFallSpecial_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 331, 191, 315,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 10 */
u16 dFTLinkAnimFallSpecial_joint10[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 425, 3, -76, 0, 133, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 429, -4, -76, 0, 143, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 425, -3, -76, 0, 133, -9,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimFallSpecial_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -858, 15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -843, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -858, -15,
	ftAnimLoop(0x6800, -30),
};

/* Joint 12 */
u16 dFTLinkAnimFallSpecial_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 13 */
u16 dFTLinkAnimFallSpecial_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTLinkAnimFallSpecial_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1617, 358, -671,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 17 */
u16 dFTLinkAnimFallSpecial_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 18 */
u16 dFTLinkAnimFallSpecial_joint18[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 20 */
u16 dFTLinkAnimFallSpecial_joint20[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 97,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 199,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 97,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimFallSpecial_joint21[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -21, 0, -14, 0, -494, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -21, 0, -14, 0, -494, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 0, -14, 0, -494, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimFallSpecial_joint23[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 1239,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1239, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1239, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTLinkAnimFallSpecial_joint25[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 567, 0, -183, 0, 70, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 567, 0, -183, 0, 70, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 567, 0, -183, 0, 70, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimFallSpecial_joint26[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 160, 0, 451, 0, -17, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 160, 0, 451, 0, -17, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 160, 0, -17, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 451,
	ftAnimLoop(0x6800, -50),
};

/* Joint 28 */
u16 dFTLinkAnimFallSpecial_joint28[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1157, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 1157,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1157,
	ftAnimLoop(0x6800, -26),
};

/* Joint 29 */
u16 dFTLinkAnimFallSpecial_joint29[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -648, 0, -170, 0, -51, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -648, 0, -51, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -648, 0, -170, 0, -51, 0,
	ftAnimLoop(0x6800, -50),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
