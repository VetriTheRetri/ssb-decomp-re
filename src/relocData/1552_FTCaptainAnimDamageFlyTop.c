/* AnimJoint data for relocData file 1552 (FTCaptainAnimDamageFlyTop) */
/* 1136 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimDamageFlyTop_joint1[8];
extern u16 dFTCaptainAnimDamageFlyTop_joint2[234];
extern u16 dFTCaptainAnimDamageFlyTop_joint4[12];
extern u16 dFTCaptainAnimDamageFlyTop_joint5[20];
extern u16 dFTCaptainAnimDamageFlyTop_joint6[16];
extern u16 dFTCaptainAnimDamageFlyTop_joint7[12];
extern u16 dFTCaptainAnimDamageFlyTop_joint8[8];
extern u16 dFTCaptainAnimDamageFlyTop_joint10[8];
extern u16 dFTCaptainAnimDamageFlyTop_joint11[26];
extern u16 dFTCaptainAnimDamageFlyTop_joint12[16];
extern u16 dFTCaptainAnimDamageFlyTop_joint13[12];
extern u16 dFTCaptainAnimDamageFlyTop_joint14[12];
extern u16 dFTCaptainAnimDamageFlyTop_joint16[8];
extern u16 dFTCaptainAnimDamageFlyTop_joint17[26];
extern u16 dFTCaptainAnimDamageFlyTop_joint19[16];
extern u16 dFTCaptainAnimDamageFlyTop_joint21[26];
extern u16 dFTCaptainAnimDamageFlyTop_joint22[22];
extern u16 dFTCaptainAnimDamageFlyTop_joint24[16];
extern u16 dFTCaptainAnimDamageFlyTop_joint25[20];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimDamageFlyTop_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimDamageFlyTop_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyTop_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyTop_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyTop_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyTop_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyTop_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyTop_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyTop_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyTop_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyTop_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyTop_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyTop_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyTop_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyTop_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyTop_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyTop_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyTop_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyTop_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamageFlyTop_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimDamageFlyTop_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1200, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 2 */
u16 dFTCaptainAnimDamageFlyTop_joint2[234] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), -66, -162, 400, 178, -172, -137, 125, 163, 78, -432,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), -8,
	ftAnimSetValRateT(FT_ANIM_TRAX, 3), 120, -263,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), -144, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -229, -363, 579, 133, -310, -338,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -363, 133, -338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -793, 290, 667, 242, -849, 318,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 290, 242, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 352, 800, 1069, 289, 326, 539,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 800,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 373, -136,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -136, 289, 539,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -263,
	ftAnimSetValRateT(FT_ANIM_TRAX, 6), -146, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 202, -126, 1244, 184, 216, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 52, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1432, 198, 189, -15,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1635, 318, 197, 19,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 19,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -152, -170,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 101,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), 146, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1993, 146, 229, 49,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 187,
	ftAnimSetValRateBlock(FT_ANIM_ROTY), 1814, -2292,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1424, 311, 297, 117,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -170, 117,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 311,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -604, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -365, 482, 463, -524,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 482, -524,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -74,
	ftAnimSetValRateT(FT_ANIM_TRAX, 3), -78, 384,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 823, 367, -750, -419,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 276, -419,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 376, -234, -521, 122, -374, 264,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 122, 264,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -234,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 114, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -360, 171, -221, 107,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 107,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_TRAX), 171, 384,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX, 4), 400, 192, 125, 316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -159, 43,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 43,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2, -60,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 74,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), 78, -336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -135, 11,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -136, -18,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -60, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -66, -69, -172, -36,
	ftAnimLoop(0x6800, -464),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimDamageFlyTop_joint4[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -134, 391, 8, -15, 20, -91,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimDamageFlyTop_joint5[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -117, 2787,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), -2288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -117, 0, 2787, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -117, 0, 2787, 0,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimDamageFlyTop_joint6[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -508,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -508, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -508, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimDamageFlyTop_joint7[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 424, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimDamageFlyTop_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 402, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 10 */
u16 dFTCaptainAnimDamageFlyTop_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 11 */
u16 dFTCaptainAnimDamageFlyTop_joint11[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 473, 0, 178, 1, 445, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 473, 0, 178, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 445,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 472, 0, 180, 1, 443, -1,
	ftAnimLoop(0x6800, -50),
};

/* Joint 12 */
u16 dFTCaptainAnimDamageFlyTop_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -5, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 5,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimDamageFlyTop_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -286, 0, 0, 424, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimDamageFlyTop_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1472, -1631, -1, 85, 52, 55,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimDamageFlyTop_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 232, 45, -91,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 17 */
u16 dFTCaptainAnimDamageFlyTop_joint17[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 658, 0, 85, -1, -119, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 657, 0, 84, 3, -118, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 658, 0, 85, 1, -119, -1,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimDamageFlyTop_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 315, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 315, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 315, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 21 */
u16 dFTCaptainAnimDamageFlyTop_joint21[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -35, 2, 184, 0, 447, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -33, -4, 184, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 447,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -35, -2, 184, 0, 447, 0,
	ftAnimLoop(0x6800, -50),
};

/* Joint 22 */
u16 dFTCaptainAnimDamageFlyTop_joint22[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 223,
	ftAnimSetValRate(FT_ANIM_ROTY), 9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 884,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 9, 0, 223, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 9, 0, 223, 0,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimDamageFlyTop_joint24[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 706,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 706, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 706, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimDamageFlyTop_joint25[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -1267, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1623, -1160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -1267, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -1267,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
