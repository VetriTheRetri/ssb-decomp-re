/* AnimJoint data for relocData file 815 (FTDonkeyAnimFallAerial) */
/* 720 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimFallAerial_joint1[8];
extern u16 dFTDonkeyAnimFallAerial_joint2[16];
extern u16 dFTDonkeyAnimFallAerial_joint4[8];
extern u16 dFTDonkeyAnimFallAerial_joint5[26];
extern u16 dFTDonkeyAnimFallAerial_joint6[16];
extern u16 dFTDonkeyAnimFallAerial_joint7[8];
extern u16 dFTDonkeyAnimFallAerial_joint8[8];
extern u16 dFTDonkeyAnimFallAerial_joint10[8];
extern u16 dFTDonkeyAnimFallAerial_joint11[26];
extern u16 dFTDonkeyAnimFallAerial_joint12[16];
extern u16 dFTDonkeyAnimFallAerial_joint13[8];
extern u16 dFTDonkeyAnimFallAerial_joint14[12];
extern u16 dFTDonkeyAnimFallAerial_joint16[16];
extern u16 dFTDonkeyAnimFallAerial_joint17[26];
extern u16 dFTDonkeyAnimFallAerial_joint19[14];
extern u16 dFTDonkeyAnimFallAerial_joint21[26];
extern u16 dFTDonkeyAnimFallAerial_joint22[26];
extern u16 dFTDonkeyAnimFallAerial_joint24[42];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimFallAerial_joints[] = {
	(u32)dFTDonkeyAnimFallAerial_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimFallAerial_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimFallAerial_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimFallAerial_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimFallAerial_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimFallAerial_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimFallAerial_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimFallAerial_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimFallAerial_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimFallAerial_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimFallAerial_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimFallAerial_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimFallAerial_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimFallAerial_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimFallAerial_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimFallAerial_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimFallAerial_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimFallAerial_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF00A7, /* [24] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimFallAerial_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 30, 949, -319,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 2 */
u16 dFTDonkeyAnimFallAerial_joint2[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -257, -28, 131,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -278, -95, 133,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -257, -28, 131,
	ftAnimLoop(0x6800, -30),
};

/* Joint 4 */
u16 dFTDonkeyAnimFallAerial_joint4[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 791, 73, -78,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 5 */
u16 dFTDonkeyAnimFallAerial_joint5[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -1632, 0, -1225, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 1458,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1632, 0, 1458, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -1225,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -1632, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1225, 1458,
	ftAnimLoop(0x6800, -50),
};

/* Joint 6 */
u16 dFTDonkeyAnimFallAerial_joint6[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -727,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -727, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimFallAerial_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -825, -308, 165,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 8 */
u16 dFTDonkeyAnimFallAerial_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 144, 74,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 10 */
u16 dFTDonkeyAnimFallAerial_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -452, -206, 75,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 11 */
u16 dFTDonkeyAnimFallAerial_joint11[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 276, 0, 384, 0, -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 276, 0, 384, 0, -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 276, 0, 384, 0, -8, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimFallAerial_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -826, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -826, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -826,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimFallAerial_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, 0, 0,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 14 */
u16 dFTDonkeyAnimFallAerial_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimFallAerial_joint16[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, 714, 1072,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -567, 676, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 268, 714, 1072,
	ftAnimLoop(0x6800, -30),
};

/* Joint 17 */
u16 dFTDonkeyAnimFallAerial_joint17[26] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, 0, -196, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -278, 0, -14, 0, -196, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -278, 0, -14, 0, -196, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimFallAerial_joint19[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 651,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 651, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 651,
	ftAnimLoop(0x6800, -26),
};

/* Joint 21 */
u16 dFTDonkeyAnimFallAerial_joint21[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, 0, 0, 0, 105, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -4, 0, 0, 0, 105, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 105,
	ftAnimLoop(0x6800, -50),
};

/* Joint 22 */
u16 dFTDonkeyAnimFallAerial_joint22[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -160, 0, 189, 0, -727, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -160, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 189, -727,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -160, 0, 189, 0, -727, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimFallAerial_joint24[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1071, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1071, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1071,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
	0x4008, 0xFA38, 0x2802, 0xF972, 0x0000, 0x4804, 0x06FB, 0x200B, 0x0005, 0xF972, 0x0000, 0xFA38, 0x0000, 0x2803, 0x0001, 0xF972, 0x0000, 0x3809, 0x0001, 0xFA38, 0x6800, 0xFFD6, 0x0000, 0x0000, 0x0000, 0x0000,
};
