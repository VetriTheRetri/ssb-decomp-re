/* AnimJoint data for relocData file 802 (FTDonkeyAnimWalk2) */
/* 1680 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimWalk2_joint1[36];
extern u16 dFTDonkeyAnimWalk2_joint2[46];
extern u16 dFTDonkeyAnimWalk2_joint4[40];
extern u16 dFTDonkeyAnimWalk2_joint5[58];
extern u16 dFTDonkeyAnimWalk2_joint6[32];
extern u16 dFTDonkeyAnimWalk2_joint7[16];
extern u16 dFTDonkeyAnimWalk2_joint8[14];
extern u16 dFTDonkeyAnimWalk2_joint10[32];
extern u16 dFTDonkeyAnimWalk2_joint11[58];
extern u16 dFTDonkeyAnimWalk2_joint12[20];
extern u16 dFTDonkeyAnimWalk2_joint13[16];
extern u16 dFTDonkeyAnimWalk2_joint14[18];
extern u16 dFTDonkeyAnimWalk2_joint16[20];
extern u16 dFTDonkeyAnimWalk2_joint17[76];
extern u16 dFTDonkeyAnimWalk2_joint19[32];
extern u16 dFTDonkeyAnimWalk2_joint21[72];
extern u16 dFTDonkeyAnimWalk2_joint22[92];
extern u16 dFTDonkeyAnimWalk2_joint24[32];
extern u16 dFTDonkeyAnimWalk2_joint25[80];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimWalk2_joints[] = {
	(u32)dFTDonkeyAnimWalk2_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimWalk2_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimWalk2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimWalk2_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimWalk2_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimWalk2_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimWalk2_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimWalk2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimWalk2_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimWalk2_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimWalk2_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimWalk2_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimWalk2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimWalk2_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimWalk2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimWalk2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimWalk2_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimWalk2_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimWalk2_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimWalk2_joint1[36] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 2, -23, -531, -4,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY), 995,
	ftAnimSetValRateT(FT_ANIM_TRAX, 16), 21, 99,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 1434, -442,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 99,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 19), 995,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 19), -531, 4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 14), 94, -69,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -69,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 5), 2, -17,
	ftAnimLoop(0x6800, -70),
};

/* Joint 2 */
u16 dFTDonkeyAnimWalk2_joint2[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -133, 3, 10, 0, 13, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 31, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -96, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 65, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -77, -1,
	ftAnimBlock(0, 5),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -133, 3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 13, 4,
	ftAnimBlock(0, 5),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), 10,
	ftAnimLoop(0x6800, -90),
};

/* Joint 4 */
u16 dFTDonkeyAnimWalk2_joint4[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 735, -3, -39, -5, 20, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 81, 1, -102, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 688, -4,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 574, -5,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -5,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 19), 735,
	ftAnimBlock(0, 9),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -39, 20,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimWalk2_joint5[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 238, 3, -178, -2, -378, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -185, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 211, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -723, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -693, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -380, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -197, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -178, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 207, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 237, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 238, 1, -178, 0, -378, 1,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimWalk2_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -842, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -298, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -260, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -719, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -838, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -842, -3,
	ftAnimLoop(0x6800, -62),
};

/* Joint 7 */
u16 dFTDonkeyAnimWalk2_joint7[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -326, 67, 90,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 8 */
u16 dFTDonkeyAnimWalk2_joint8[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 130, -1, -67, 0, -32, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), 130, -67, -32,
	ftAnimLoop(0x6800, -26),
};

/* Joint 10 */
u16 dFTDonkeyAnimWalk2_joint10[32] = {
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
u16 dFTDonkeyAnimWalk2_joint11[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -246, 8, 147, -2, -725, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -468, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), 181, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -299, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -306, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -247, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -486, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -721, -8,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 168, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 150, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -246, 1, 147, -2, -725, -4,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimWalk2_joint12[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -632, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), -648, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -637, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -632, 4,
	ftAnimLoop(0x6800, -38),
};

/* Joint 13 */
u16 dFTDonkeyAnimWalk2_joint13[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 532, 195, 269,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 98, 0, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 14 */
u16 dFTDonkeyAnimWalk2_joint14[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -609, 0, -1400, 0, 2408, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 120, 120, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), -609, -1400, 2408,
	ftAnimLoop(0x6800, -34),
};

/* Joint 16 */
u16 dFTDonkeyAnimWalk2_joint16[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -710, -151, -27,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1046, 573,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -427, 167, 145,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -710, -151, -27,
	ftAnimLoop(0x6800, -38),
};

/* Joint 17 */
u16 dFTDonkeyAnimWalk2_joint17[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -256, 7, -316, 7, -259, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -205, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -433, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -225, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -246, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -235, -28,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -208, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -324, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -444, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -270, 22,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -263, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -272, 18,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -253, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -260, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -260, 12, -319, 5, -260, 0,
	ftAnimLoop(0x6800, -148),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimWalk2_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1091, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1113, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1065, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 739, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 770, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1082, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1089, 7,
	ftAnimLoop(0x6800, -62),
};

/* Joint 21 */
u16 dFTDonkeyAnimWalk2_joint21[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 19, -3, 101, -14, -548, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -60, -7, -256, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -40, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -31, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 96, 11,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -64, 1, -250, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 123, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -547, -1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 104, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 33, -15,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 114, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 105, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 22, -10, 102, -2, -548, 0,
	ftAnimLoop(0x6800, -140),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimWalk2_joint22[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 138, -4, 373, 1, -618, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 322, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -455, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 193, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 206, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 243, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 347, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 396, -28,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -510, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -652, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 281, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 133, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 375, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 372, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -646, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -623, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 139, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 140, 0, 374, 2, -619, 3,
	ftAnimLoop(0x6800, -180),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimWalk2_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1002, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 693, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 682, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1042, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1029, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1000, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1002, 2,
	ftAnimLoop(0x6800, -62),
};

/* Joint 25 */
u16 dFTDonkeyAnimWalk2_joint25[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -163, 1, -128, 1, -194, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -76, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -323, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -290, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -173, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -105, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -288, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -355, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -142, 15,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -336, -33, -106, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -185, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -147, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -158, -8, -130, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -164, -6, -128, 2, -192, -7,
	ftAnimLoop(0x6800, -148),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
