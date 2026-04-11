/* AnimJoint data for relocData file 814 (FTDonkeyAnimFall) */
/* 720 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimFall_joint1[8];
extern u16 dFTDonkeyAnimFall_joint2[16];
extern u16 dFTDonkeyAnimFall_joint4[8];
extern u16 dFTDonkeyAnimFall_joint5[28];
extern u16 dFTDonkeyAnimFall_joint6[16];
extern u16 dFTDonkeyAnimFall_joint7[8];
extern u16 dFTDonkeyAnimFall_joint8[8];
extern u16 dFTDonkeyAnimFall_joint10[8];
extern u16 dFTDonkeyAnimFall_joint11[22];
extern u16 dFTDonkeyAnimFall_joint12[16];
extern u16 dFTDonkeyAnimFall_joint13[8];
extern u16 dFTDonkeyAnimFall_joint14[12];
extern u16 dFTDonkeyAnimFall_joint16[20];
extern u16 dFTDonkeyAnimFall_joint17[26];
extern u16 dFTDonkeyAnimFall_joint19[16];
extern u16 dFTDonkeyAnimFall_joint21[26];
extern u16 dFTDonkeyAnimFall_joint22[24];
extern u16 dFTDonkeyAnimFall_joint24[40];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimFall_joints[] = {
	(u32)dFTDonkeyAnimFall_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimFall_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimFall_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimFall_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimFall_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimFall_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimFall_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimFall_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimFall_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimFall_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimFall_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimFall_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimFall_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimFall_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimFall_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimFall_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimFall_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimFall_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF00A8, /* [24] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimFall_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 30, 949, -319,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 2 */
u16 dFTDonkeyAnimFall_joint2[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -257, -28, 131,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -278, -93, 133,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -257, -28, 131,
	ftAnimLoop(0x6800, -30),
};

/* Joint 4 */
u16 dFTDonkeyAnimFall_joint4[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 791, 73, -78,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 5 */
u16 dFTDonkeyAnimFall_joint5[28] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1217, 0, 1786, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -2000,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -2000, 0, -1217, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 1786,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2000, 0, 1786, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1217,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimFall_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1013, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1013, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1013,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimFall_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -825, -308, 165,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 8 */
u16 dFTDonkeyAnimFall_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 144, 74,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 10 */
u16 dFTDonkeyAnimFall_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -452, -206, 75,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 11 */
u16 dFTDonkeyAnimFall_joint11[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 389,
	ftAnimSetValRate(FT_ANIM_ROTY), 417, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 604,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 417, 0, 389, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 417, 0, 389, 0,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimFall_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1029, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1029, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1029, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTDonkeyAnimFall_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, 0, 0,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 14 */
u16 dFTDonkeyAnimFall_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimFall_joint16[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1429, 893, -670,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1046, 573,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1276, 893, -670,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1429, 893, -670,
	ftAnimLoop(0x6800, -38),
};

/* Joint 17 */
u16 dFTDonkeyAnimFall_joint17[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -277, 0, -74, 0, -305, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -74, 0, -305, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -277, 0, -74, 0, -305, 0,
	ftAnimLoop(0x6800, -50),
};

/* Joint 19 */
u16 dFTDonkeyAnimFall_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 834, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 834, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 834, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 21 */
u16 dFTDonkeyAnimFall_joint21[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 11, 0, 9, 0, 41, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 11, 0, 9, 0, 41, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 11, 0, 9, 0, 41, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimFall_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -192, 0, 139, 0, -875, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -192, 0, 139, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -875,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -192, 139, -875,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimFall_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1176, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1176, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1176, 0,
	ftAnimLoop(0x6800, -30),
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -1672, 0, -1480, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 1787,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1672, 0, -1480, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1672, 0, -1480, 0,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
	0x0000, 0x0000,
};
