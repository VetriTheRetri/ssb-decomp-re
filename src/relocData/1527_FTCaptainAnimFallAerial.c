/* AnimJoint data for relocData file 1527 (FTCaptainAnimFallAerial) */
/* 784 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimFallAerial_joint1[8];
extern u16 dFTCaptainAnimFallAerial_joint2[32];
extern u16 dFTCaptainAnimFallAerial_joint4[12];
extern u16 dFTCaptainAnimFallAerial_joint5[26];
extern u16 dFTCaptainAnimFallAerial_joint6[16];
extern u16 dFTCaptainAnimFallAerial_joint7[8];
extern u16 dFTCaptainAnimFallAerial_joint10[8];
extern u16 dFTCaptainAnimFallAerial_joint11[26];
extern u16 dFTCaptainAnimFallAerial_joint12[16];
extern u16 dFTCaptainAnimFallAerial_joint13[8];
extern u16 dFTCaptainAnimFallAerial_joint14[12];
extern u16 dFTCaptainAnimFallAerial_joint16[18];
extern u16 dFTCaptainAnimFallAerial_joint17[26];
extern u16 dFTCaptainAnimFallAerial_joint19[16];
extern u16 dFTCaptainAnimFallAerial_joint21[36];
extern u16 dFTCaptainAnimFallAerial_joint22[26];
extern u16 dFTCaptainAnimFallAerial_joint24[16];
extern u16 dFTCaptainAnimFallAerial_joint25[32];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimFallAerial_joints[] = {
	(u32)dFTCaptainAnimFallAerial_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimFallAerial_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimFallAerial_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimFallAerial_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimFallAerial_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimFallAerial_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimFallAerial_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimFallAerial_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimFallAerial_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimFallAerial_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimFallAerial_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimFallAerial_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimFallAerial_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimFallAerial_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimFallAerial_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimFallAerial_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimFallAerial_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTCaptainAnimFallAerial_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimFallAerial_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -55, 1225, -1,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 2 */
u16 dFTCaptainAnimFallAerial_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 240, 95, 49,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 202, -7, 133, 7, -2, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 204, 7, 133, -7, -2, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 240, 95, 49,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimFallAerial_joint4[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 242, -182, -12, 0, -31, 47,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimFallAerial_joint5[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2942, 2, -120, 15, 2610, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -2933, -5, -88, -41, 2568, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2942, -9, -120, -32, 2610, 42,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimFallAerial_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1109, 15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1074, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1109, -35,
	ftAnimLoop(0x6800, -30),
};

/* Joint 7 */
u16 dFTCaptainAnimFallAerial_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -97, -323,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 10 */
u16 dFTCaptainAnimFallAerial_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, 113, -38,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 11 */
u16 dFTCaptainAnimFallAerial_joint11[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, 13, 249, 3, 628, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 129, 6, 251, -1, 622, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, 4, 249, -1, 628, 6,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimFallAerial_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -631, 25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -619, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, -11,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTCaptainAnimFallAerial_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, 167, 63,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -14),
};

/* Joint 14 */
u16 dFTCaptainAnimFallAerial_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 39,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimFallAerial_joint16[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 255,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 419, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 419, -32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 255,
	ftAnimLoop(0x6800, -34),
};

/* Joint 17 */
u16 dFTCaptainAnimFallAerial_joint17[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 55, 2, 81, -3, -557, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 60, -7, 74, 10, -560, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 55, -4, 81, 7, -557, 3,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimFallAerial_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 237, 51,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 260, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 237, -23,
	ftAnimLoop(0x6800, -30),
};

/* Joint 21 */
u16 dFTCaptainAnimFallAerial_joint21[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, -13, -2, -11, 513, -85,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -4, 15, 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 367, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 403, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 492, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 10, -2, -2, 513, 21,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimFallAerial_joint22[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 15, 289, -4, -825, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, -20, 285, 6, -809, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, -13, 289, 3, -825, -16,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimFallAerial_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 875, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 856, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 875, 18,
	ftAnimLoop(0x6800, -30),
};

/* Joint 25 */
u16 dFTCaptainAnimFallAerial_joint25[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -7, -57, 5, -154, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -9, 10, -56, -4, -145, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, 6, -57, 0, -154, -8,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
