/* AnimJoint data for relocData file 801 (FTDonkeyAnimWalk1) */
/* 1936 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimWalk1_joint1[52];
extern u16 dFTDonkeyAnimWalk1_joint2[60];
extern u16 dFTDonkeyAnimWalk1_joint4[36];
extern u16 dFTDonkeyAnimWalk1_joint5[50];
extern u16 dFTDonkeyAnimWalk1_joint6[40];
extern u16 dFTDonkeyAnimWalk1_joint7[18];
extern u16 dFTDonkeyAnimWalk1_joint8[56];
extern u16 dFTDonkeyAnimWalk1_joint10[76];
extern u16 dFTDonkeyAnimWalk1_joint11[64];
extern u16 dFTDonkeyAnimWalk1_joint12[24];
extern u16 dFTDonkeyAnimWalk1_joint13[18];
extern u16 dFTDonkeyAnimWalk1_joint14[16];
extern u16 dFTDonkeyAnimWalk1_joint16[20];
extern u16 dFTDonkeyAnimWalk1_joint17[82];
extern u16 dFTDonkeyAnimWalk1_joint19[40];
extern u16 dFTDonkeyAnimWalk1_joint21[68];
extern u16 dFTDonkeyAnimWalk1_joint22[92];
extern u16 dFTDonkeyAnimWalk1_joint24[40];
extern u16 dFTDonkeyAnimWalk1_joint25[66];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimWalk1_joints[] = {
	(u32)dFTDonkeyAnimWalk1_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimWalk1_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimWalk1_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimWalk1_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimWalk1_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimWalk1_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimWalk1_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimWalk1_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimWalk1_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimWalk1_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimWalk1_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimWalk1_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimWalk1_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimWalk1_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimWalk1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimWalk1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimWalk1_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimWalk1_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimWalk1_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimWalk1_joint1[52] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 71, 40, 1166, 7, -572, 15,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 32), -585, -5,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 19), 50, -74, 1444, -68,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), -74, -68,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 13), 8, 4, 1120, -7,
	ftAnimSetValRateT(FT_ANIM_TRAY, 17), 1417, -40,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 28), 71,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 9), -600, -16,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -16,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 19), -572,
	ftAnimBlock(0, 8),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -40,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 11), 1166, 8,
	ftAnimLoop(0x6800, -102),
};

/* Joint 2 */
u16 dFTDonkeyAnimWalk1_joint2[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -172, 5, -135, -1, 36, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -88, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 32), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -40, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 66, 0,
	ftAnimBlock(0, 5),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -136, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -103, -1,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 28), -135,
	ftAnimBlock(0, 7),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 21), 36,
	ftAnimBlock(0, 11),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -172,
	ftAnimLoop(0x6800, -118),
};

/* Joint 4 */
u16 dFTDonkeyAnimWalk1_joint4[36] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 92, 1,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 787, 6,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 31), 99,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 48), 747,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 19), 40, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), -16, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 29), 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 92, 1,
	ftAnimBlock(0, 17),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 787,
	ftAnimLoop(0x6800, -70),
};

/* Joint 5 */
u16 dFTDonkeyAnimWalk1_joint5[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 228, -1, -75, 2, -683, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 57), 231, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 59), -76, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -665, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -645, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), -712, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 229, -1, -700, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 228, 0, -690, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 228, 0, -75, 1, -683, 7,
	ftAnimLoop(0x6800, -96),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimWalk1_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -367, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -385, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -652, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -649, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -505, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -530, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -582, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, -4,
	ftAnimLoop(0x6800, -78),
};

/* Joint 7 */
u16 dFTDonkeyAnimWalk1_joint7[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -406, -1, -133, -1, 112, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), -406, 1, -133, 1, 112, -1,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimWalk1_joint8[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 35, 1, -65, 0, -115, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), -45, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 60), -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 35, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -11, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 32, 0,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -111, -1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -21, 0,
	ftAnimBlock(0, 4),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 21), -115,
	ftAnimBlock(0, 10),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 35,
	ftAnimLoop(0x6800, -110),
};

/* Joint 10 */
u16 dFTDonkeyAnimWalk1_joint10[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -284, -6, 74, 3, 63, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 98, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 50, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -310, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -242, 0,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -20, 0,
	ftAnimBlock(0, 6),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 123, -1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -308, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), 74, 2,
	ftAnimBlock(0, 6),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -186, 0,
	ftAnimBlock(0, 7),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 63, -2,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -284, -6,
	ftAnimLoop(0x6800, -148),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimWalk1_joint11[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -206, -1, 245, -2, -553, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 242, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), -210, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -706, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -694, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 35), -550, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 252, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), 247, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -203, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), -206, 0,
	ftAnimBlock(0, 29),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 246, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -206, 0, 245, -1, -553, -3,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimWalk1_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -721, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -539, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -563, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), -728, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -721, 6,
	ftAnimLoop(0x6800, -46),
};

/* Joint 13 */
u16 dFTDonkeyAnimWalk1_joint13[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 439, -4, 255, 1, 224, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), 439, 4, 255, 0, 224, 0,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimWalk1_joint14[16] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -893, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1340, 2502, 120, 120, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 60), -893, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimWalk1_joint16[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -546, 79, 79,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1046, 573,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), -698, -164, -171,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), -546, 79, 79,
	ftAnimLoop(0x6800, -38),
};

/* Joint 17 */
u16 dFTDonkeyAnimWalk1_joint17[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1089, 0, -1210, 0, -1749, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), -1310, 0, -1927, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), 1221, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1238, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 1221, -53,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1309, 0, -1947, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1359, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -1739, 1,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1168, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1081, 11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1371, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1210, 2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1738, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1748, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1089, 8, -1210, 0, -1749, -1,
	ftAnimLoop(0x6800, -160),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimWalk1_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 837, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 766, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 812, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 826, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 763, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 614, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 660, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 829, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 837, 7,
	ftAnimLoop(0x6800, -78),
};

/* Joint 21 */
u16 dFTDonkeyAnimWalk1_joint21[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1688, 1, 1271, -1, -1863, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 39), 1643, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 41), 1248, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -1874, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1894, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -1779, 14,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1662, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 1692, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1241, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1268, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1765, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -1858, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1688, -3, 1271, 3, -1863, -4,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimWalk1_joint22[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -89, 6, 160, 6, -442, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 252, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -351, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), 189, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 177, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 199, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 258, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 25, 3,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -377, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -401, 18,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 195, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 158, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 29, 3, -383, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -428, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -69, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -82, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -89, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -88, 1, 160, 1, -442, -13,
	ftAnimLoop(0x6800, -180),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimWalk1_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1153, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 558, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 561, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 932, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 924, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 945, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 989, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1145, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1152, 7,
	ftAnimLoop(0x6800, -78),
};

/* Joint 25 */
u16 dFTDonkeyAnimWalk1_joint25[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 17, -11, -174, -2, -355, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 45), -129, -11, -245, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -117, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -110, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), -21, -2,
	ftAnimBlock(0, 30),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -140, -11, -241, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -174, 0, -366, 5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -22, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 25, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 17, -8, -174, 0, -356, 10,
	ftAnimLoop(0x6800, -116),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
