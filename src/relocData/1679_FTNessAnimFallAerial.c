/* AnimJoint data for relocData file 1679 (FTNessAnimFallAerial) */
/* 912 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimFallAerial_joint1[12];
extern u16 dFTNessAnimFallAerial_joint2[14];
extern u16 dFTNessAnimFallAerial_joint4[12];
extern u16 dFTNessAnimFallAerial_joint5[40];
extern u16 dFTNessAnimFallAerial_joint6[16];
extern u16 dFTNessAnimFallAerial_joint7[12];
extern u16 dFTNessAnimFallAerial_joint8[16];
extern u16 dFTNessAnimFallAerial_joint10[12];
extern u16 dFTNessAnimFallAerial_joint11[44];
extern u16 dFTNessAnimFallAerial_joint12[20];
extern u16 dFTNessAnimFallAerial_joint13[12];
extern u16 dFTNessAnimFallAerial_joint15[12];
extern u16 dFTNessAnimFallAerial_joint16[26];
extern u16 dFTNessAnimFallAerial_joint18[16];
extern u16 dFTNessAnimFallAerial_joint19[32];
extern u16 dFTNessAnimFallAerial_joint21[16];
extern u16 dFTNessAnimFallAerial_joint22[26];
extern u16 dFTNessAnimFallAerial_joint24[16];
extern u16 dFTNessAnimFallAerial_joint25[50];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimFallAerial_joints[] = {
	(u32)dFTNessAnimFallAerial_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimFallAerial_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimFallAerial_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimFallAerial_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimFallAerial_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimFallAerial_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimFallAerial_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimFallAerial_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimFallAerial_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimFallAerial_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimFallAerial_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimFallAerial_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimFallAerial_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimFallAerial_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimFallAerial_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimFallAerial_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimFallAerial_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimFallAerial_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimFallAerial_joint25, /* [24] joint 25 */
	0xFFFF00DB, /* [25] END */
};

/* Joint 1 */
u16 dFTNessAnimFallAerial_joint1[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 242, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimFallAerial_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -209, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimFallAerial_joint4[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 148, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimFallAerial_joint5[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -325, 5, -643, 55, -19, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -11, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -288, -27, -514, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -314, -18, -569, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -325, -5, -620, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -325, 0, -643, -22, -19, -8,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimFallAerial_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -539, -23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -551, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -539, 11,
	ftAnimLoop(0x6800, -30),
};

/* Joint 7 */
u16 dFTNessAnimFallAerial_joint7[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 268, 143, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimFallAerial_joint8[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 194,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 300, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 255,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 194,
	ftAnimLoop(0x6800, -30),
};

/* Joint 10 */
u16 dFTNessAnimFallAerial_joint10[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimFallAerial_joint11[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1034, -23, 968, 64, -1429, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1067, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1437, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1168, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1118, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 995, -42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1044, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1034, 9, 968, -26, -1429, 7,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimFallAerial_joint12[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -433, -64,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -516, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -461, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, 28,
	ftAnimLoop(0x6800, -38),
};

/* Joint 13 */
u16 dFTNessAnimFallAerial_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -170, -63, 267, 143, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimFallAerial_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimFallAerial_joint16[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -32, 8, -360, -1, -700, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 26, -54, -357, -5, -797, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -32, -59, -360, -2, -700, 97,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimFallAerial_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 439, 13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 505, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 439, -66,
	ftAnimLoop(0x6800, -30),
};

/* Joint 19 */
u16 dFTNessAnimFallAerial_joint19[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1620, 0, 1573, -8, -1615, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -1612, -10, 1568, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1468, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1565, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1620, -7, 1573, 5, -1615, -50,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimFallAerial_joint21[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -476,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 178, 112, 126, -82, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -369,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -476,
	ftAnimLoop(0x6800, -30),
};

/* Joint 22 */
u16 dFTNessAnimFallAerial_joint22[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -59, -11, 442, 0, -799, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -133, 69, 431, 14, -894, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -59, 74, 442, 10, -799, 94,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimFallAerial_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 614, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 674, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, -60,
	ftAnimLoop(0x6800, -30),
};

/* Joint 25 */
u16 dFTNessAnimFallAerial_joint25[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, -4, -104, -10, -32, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 0, 13, -115, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 69, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 7, -104, 11, -32, -35,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
	0x4002, 0xFEAD, 0x48EC, 0xFF00, 0xFF2D, 0xFF82, 0xFFAE, 0xFFF4, 0x3803, 0x0003, 0xFE6A, 0x3803, 0x0005, 0xFEAD, 0x6800, 0xFFE2, 0x0000, 0x0000,
};
