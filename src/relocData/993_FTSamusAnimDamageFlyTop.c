/* AnimJoint data for relocData file 993 (FTSamusAnimDamageFlyTop) */
/* 1136 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimDamageFlyTop_joint1[8];
extern u16 dFTSamusAnimDamageFlyTop_joint2[234];
extern u16 dFTSamusAnimDamageFlyTop_joint4[12];
extern u16 dFTSamusAnimDamageFlyTop_joint5[24];
extern u16 dFTSamusAnimDamageFlyTop_joint6[16];
extern u16 dFTSamusAnimDamageFlyTop_joint7[12];
extern u16 dFTSamusAnimDamageFlyTop_joint8[12];
extern u16 dFTSamusAnimDamageFlyTop_joint9[12];
extern u16 dFTSamusAnimDamageFlyTop_joint11[12];
extern u16 dFTSamusAnimDamageFlyTop_joint12[26];
extern u16 dFTSamusAnimDamageFlyTop_joint14[16];
extern u16 dFTSamusAnimDamageFlyTop_joint15[26];
extern u16 dFTSamusAnimDamageFlyTop_joint17[16];
extern u16 dFTSamusAnimDamageFlyTop_joint19[28];
extern u16 dFTSamusAnimDamageFlyTop_joint20[28];
extern u16 dFTSamusAnimDamageFlyTop_joint22[16];
extern u16 dFTSamusAnimDamageFlyTop_joint23[24];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimDamageFlyTop_joints[] = {
	(AObjEvent32 *)dFTSamusAnimDamageFlyTop_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimDamageFlyTop_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimDamageFlyTop_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimDamageFlyTop_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimDamageFlyTop_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimDamageFlyTop_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimDamageFlyTop_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimDamageFlyTop_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTSamusAnimDamageFlyTop_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimDamageFlyTop_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimDamageFlyTop_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimDamageFlyTop_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimDamageFlyTop_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimDamageFlyTop_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimDamageFlyTop_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimDamageFlyTop_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimDamageFlyTop_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimDamageFlyTop_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1200, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 2 */
u16 dFTSamusAnimDamageFlyTop_joint2[234] = {
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
u16 dFTSamusAnimDamageFlyTop_joint4[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -134, 391, 8, -15, 20, -91,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimDamageFlyTop_joint5[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -679, -1471, 1178,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -679, 0, -1471, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 1178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -679, 0, -1471, 0, 1178, 0,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimDamageFlyTop_joint6[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -519,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -519, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -519, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimDamageFlyTop_joint7[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 424, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimDamageFlyTop_joint8[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimDamageFlyTop_joint9[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 402, 0, 0, 480, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimDamageFlyTop_joint11[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimDamageFlyTop_joint12[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1136, 0, 1419, 1, 2052, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -1135, 0, 1421, 0, 2054, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1136, 0, 1419, -1, 2052, -1,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimDamageFlyTop_joint14[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 5,
	ftAnimLoop(0x6800, -30),
};

/* Joint 15 */
u16 dFTSamusAnimDamageFlyTop_joint15[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 658, 0, 85, -1, -119, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 657, 0, 84, 3, -118, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 658, 0, 85, 1, -119, -1,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimDamageFlyTop_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 315, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 315, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 315, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 19 */
u16 dFTSamusAnimDamageFlyTop_joint19[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -35, 2, 184, 0, 447, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -33, -4, 184, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 447,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -35, -2, 184, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 447,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimDamageFlyTop_joint20[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 884, 0, 9, 0, 223, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 9, 0, 223, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 884,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 9, 0, 223, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 884,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimDamageFlyTop_joint22[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 706, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 706, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 706,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimDamageFlyTop_joint23[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -1623,
	ftAnimSetValRate(FT_ANIM_ROTX), -1268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 2056,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), -1623,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1268, 0, -1623, 0,
	ftAnimLoop(0x6800, -42),
	ftAnimEnd(),
	0x0000,
};
