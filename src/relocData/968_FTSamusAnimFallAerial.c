/* AnimJoint data for relocData file 968 (FTSamusAnimFallAerial) */
/* 832 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimFallAerial_joint1[16];
extern u16 dFTSamusAnimFallAerial_joint2[8];
extern u16 dFTSamusAnimFallAerial_joint4[12];
extern u16 dFTSamusAnimFallAerial_joint5[36];
extern u16 dFTSamusAnimFallAerial_joint6[24];
extern u16 dFTSamusAnimFallAerial_joint7[12];
extern u16 dFTSamusAnimFallAerial_joint8[12];
extern u16 dFTSamusAnimFallAerial_joint11[8];
extern u16 dFTSamusAnimFallAerial_joint12[36];
extern u16 dFTSamusAnimFallAerial_joint14[24];
extern u16 dFTSamusAnimFallAerial_joint15[36];
extern u16 dFTSamusAnimFallAerial_joint17[24];
extern u16 dFTSamusAnimFallAerial_joint19[36];
extern u16 dFTSamusAnimFallAerial_joint20[26];
extern u16 dFTSamusAnimFallAerial_joint22[24];
extern u16 dFTSamusAnimFallAerial_joint23[36];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimFallAerial_joints[] = {
	(AObjEvent32 *)dFTSamusAnimFallAerial_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimFallAerial_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimFallAerial_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimFallAerial_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimFallAerial_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimFallAerial_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimFallAerial_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimFallAerial_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimFallAerial_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimFallAerial_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimFallAerial_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimFallAerial_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimFallAerial_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimFallAerial_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimFallAerial_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimFallAerial_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimFallAerial_joint1[16] = {
	ftAnimSetVal(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY), -4, 1300,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 3), 25,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 3), -38,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 2), 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 2 */
u16 dFTSamusAnimFallAerial_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 4 */
u16 dFTSamusAnimFallAerial_joint4[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 240, 0, 0, 0, -21, 56,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimFallAerial_joint5[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1596, 0, -1588, 0, 1674, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -1596, 0, -1588, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1653, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1625, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1649, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1596, 0, -1588, 0, 1674, 25,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimFallAerial_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1046, -22,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1022, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -975, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1011, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1046, -34,
	ftAnimLoop(0x6800, -46),
};

/* Joint 7 */
u16 dFTSamusAnimFallAerial_joint7[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 536, 0, 0, 424, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimFallAerial_joint8[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimFallAerial_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 12 */
u16 dFTSamusAnimFallAerial_joint12[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -275, -17, 111, 15, -68, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 98, 14, -83, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -276, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -246, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -262, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -275, -13, 111, 13, -68, 14,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimFallAerial_joint14[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -985, -25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -966, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -915, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -951, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -985, -34,
	ftAnimLoop(0x6800, -46),
};

/* Joint 15 */
u16 dFTSamusAnimFallAerial_joint15[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 31, 2, -51, 0, -566, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 26, 5, -51, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -583, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -597, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -586, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 31, 5, -51, 0, -566, 19,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimFallAerial_joint17[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1329, 12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1304, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1269, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1300, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1329, 28,
	ftAnimLoop(0x6800, -46),
};

/* Joint 19 */
u16 dFTSamusAnimFallAerial_joint19[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 34, -2, 21, 3, 48, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 39, -5, 15, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 36, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 91, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 97, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 34, -5, 21, 6, 48, -48,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimFallAerial_joint20[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -2, 38, 0, -592, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1, -1, 39, 0, -606, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -1, 38, 0, -592, 14,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimFallAerial_joint22[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1100, 25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1103, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1064, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1083, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1100, 17,
	ftAnimLoop(0x6800, -46),
};

/* Joint 23 */
u16 dFTSamusAnimFallAerial_joint23[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -70, 2, 64, -1, 59, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -74, 3, 66, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 30, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 76, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 90, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -70, 3, 64, -1, 59, -31,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};
