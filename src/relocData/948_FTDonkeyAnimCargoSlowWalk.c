/* AnimJoint data for relocData file 948 (FTDonkeyAnimCargoSlowWalk) */
/* 1936 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimCargoSlowWalk_joint1[34];
extern u16 dFTDonkeyAnimCargoSlowWalk_joint2[46];
extern u16 dFTDonkeyAnimCargoSlowWalk_joint4[40];
extern u16 dFTDonkeyAnimCargoSlowWalk_joint5[72];
extern u16 dFTDonkeyAnimCargoSlowWalk_joint6[24];
extern u16 dFTDonkeyAnimCargoSlowWalk_joint7[36];
extern u16 dFTDonkeyAnimCargoSlowWalk_joint8[14];
extern u16 dFTDonkeyAnimCargoSlowWalk_joint10[32];
extern u16 dFTDonkeyAnimCargoSlowWalk_joint11[72];
extern u16 dFTDonkeyAnimCargoSlowWalk_joint12[28];
extern u16 dFTDonkeyAnimCargoSlowWalk_joint13[36];
extern u16 dFTDonkeyAnimCargoSlowWalk_joint14[12];
extern u16 dFTDonkeyAnimCargoSlowWalk_joint16[34];
extern u16 dFTDonkeyAnimCargoSlowWalk_joint17[96];
extern u16 dFTDonkeyAnimCargoSlowWalk_joint19[32];
extern u16 dFTDonkeyAnimCargoSlowWalk_joint21[60];
extern u16 dFTDonkeyAnimCargoSlowWalk_joint22[94];
extern u16 dFTDonkeyAnimCargoSlowWalk_joint24[32];
extern u16 dFTDonkeyAnimCargoSlowWalk_joint25[122];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimCargoSlowWalk_joints[] = {
	(u32)dFTDonkeyAnimCargoSlowWalk_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimCargoSlowWalk_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimCargoSlowWalk_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimCargoSlowWalk_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimCargoSlowWalk_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimCargoSlowWalk_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimCargoSlowWalk_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimCargoSlowWalk_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimCargoSlowWalk_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimCargoSlowWalk_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimCargoSlowWalk_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimCargoSlowWalk_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimCargoSlowWalk_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimCargoSlowWalk_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimCargoSlowWalk_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimCargoSlowWalk_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimCargoSlowWalk_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimCargoSlowWalk_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimCargoSlowWalk_joint25, /* [24] joint 25 */
	0xFFFF01CD, /* [25] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimCargoSlowWalk_joint1[34] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 2, -42, 963, 50, -658, -2,
	ftAnimSetValRateT(FT_ANIM_TRAX, 16), 21, 99,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 35), -658,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 16), 1194,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 99,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 19), 963,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 14), 94, -69,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -69,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), 2,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimCargoSlowWalk_joint2[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -133, 4, 10, 0, 13, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 31, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -96, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 65, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -77, -1,
	ftAnimBlock(0, 5),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -133, 1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 13, 5,
	ftAnimBlock(0, 5),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), 10,
	ftAnimLoop(0x6800, -90),
};

/* Joint 4 */
u16 dFTDonkeyAnimCargoSlowWalk_joint4[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 914, -3, -39, -5, 20, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 81, 1, -102, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 867, -4,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 753, -5,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -5,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 19), 914,
	ftAnimBlock(0, 9),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -39, 20,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimCargoSlowWalk_joint5[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -58, -8, 2842, -1, 1974, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 2869, 9, 2109, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -228, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -131, 97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 217, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2885, 21, 2044, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 2952, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 1744, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 197, -27, 1749, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -42, -28, 1959, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2909, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 2844, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -58, -15, 2842, -2, 1974, 15,
	ftAnimLoop(0x6800, -140),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimCargoSlowWalk_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1281, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -1262, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1226, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -1282, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1281, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 7 */
u16 dFTDonkeyAnimCargoSlowWalk_joint7[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1196, -298, 466,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -1340, 10, -265, -4, 440, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -988, 18, -387, 0, 298, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -976, -13, -273, 5, 452, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1196, -298, 466,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimCargoSlowWalk_joint8[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 130, -1, -67, 0, -32, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), 130, -67, -32,
	ftAnimLoop(0x6800, -26),
};

/* Joint 10 */
u16 dFTDonkeyAnimCargoSlowWalk_joint10[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -328, -1, 15, -7, 35, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -45, 5,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 23), 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), -382,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), -346, 1, 226, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -328, 15, 35,
	ftAnimLoop(0x6800, -62),
};

/* Joint 11 */
u16 dFTDonkeyAnimCargoSlowWalk_joint11[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -67, -2, 335, -1, -1407, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 28, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 325, 8, -1287, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 330, 0, -1195, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -790, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 295, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 81, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 293, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 289, -11, -810, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -51, -31, -1381, -48,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 331, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 339, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -67, -16, 335, -4, -1407, -25,
	ftAnimLoop(0x6800, -140),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimCargoSlowWalk_joint12[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1178, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -1220, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1219, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -1217, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1189, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1178, 11,
	ftAnimLoop(0x6800, -54),
};

/* Joint 13 */
u16 dFTDonkeyAnimCargoSlowWalk_joint13[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1117, 243, 376,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1054, 5, 195, 5, 343, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1225, 8, 361, 4, 131, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1230, -7, 294, -7, 276, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1117, 243, 376,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimCargoSlowWalk_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 35),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimCargoSlowWalk_joint16[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -467, -6, -77, 5, -59, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 126, 3, 94, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -529, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -472, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -404, 0, 0,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimCargoSlowWalk_joint17[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -387, 7, -454, 0, -279, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -572, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -459, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -204, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -232, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -325, 50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -570, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -718, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -459, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -363, -18,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -270, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -396, -37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -715, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -276, -1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -382, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -456, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -424, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -400, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -387, 13, -454, 1, -279, -2,
	ftAnimLoop(0x6800, -188),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimCargoSlowWalk_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1135, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1258, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1221, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 909, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 929, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1126, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1135, 8,
	ftAnimLoop(0x6800, -62),
};

/* Joint 21 */
u16 dFTDonkeyAnimCargoSlowWalk_joint21[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 151, 7, 231, -11, -473, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 21), 147, 2, -182, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 17), 115, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 91, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 198, 21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 155, 11, -187, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 157, -11, -477, 2,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 215, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 229, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 151, -6, 231, 1, -473, 3,
	ftAnimLoop(0x6800, -116),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimCargoSlowWalk_joint22[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 384, 7, 524, 2, -539, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 349, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 98, 0, -635, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 97, -5, -637, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -849, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 194, 109,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 346, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 442, 44,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -841, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -598, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 319, 108, 484, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 386, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 520, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -599, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -535, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 393, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 384, -8, 524, 3, -539, -4,
	ftAnimLoop(0x6800, -184),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimCargoSlowWalk_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 961, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 1127, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1163, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 945, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 949, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 955, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 961, 6,
	ftAnimLoop(0x6800, -62),
};

/* Joint 25 */
u16 dFTDonkeyAnimCargoSlowWalk_joint25[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -379, 0, -235, -2, -48, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -281, -4, -230, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), -117, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -117, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -305, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -283, 0, -225, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 59, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -234, 2,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -392, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -381, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 32, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -39, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -382, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -379, 3, -235, 0, -48, -8,
	ftAnimLoop(0x6800, -148),
	ftAnimEnd(),
	0x40E0, 0xFFFE, 0x01F3, 0x033A, 0x480E, 0xFCDC, 0x0000, 0x0000, 0x20E1, 0x000A, 0xFFE7, 0xFFFA, 0x017A, 0xFFE1, 0x033A, 0x0056, 0x20E1, 0x000A, 0xFFEF, 0x0008, 0x01A5, 0x002A, 0x0413, 0x0001, 0x20E1, 0x000A, 0xFFFB, 0x0008, 0x01E4, 0x0029, 0x033D, 0xFF8D, 0x38E1, 0x0005, 0xFFFE, 0x01F3, 0x033A, 0x6800, 0xFFB4, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
