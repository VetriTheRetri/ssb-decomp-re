/* AnimJoint data for relocData file 1812 (FTNessAnimDKTAAir) */
/* 1152 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimDKTAAir_joint1[12];
extern u16 dFTNessAnimDKTAAir_joint2[16];
extern u16 dFTNessAnimDKTAAir_joint4[12];
extern u16 dFTNessAnimDKTAAir_joint5[64];
extern u16 dFTNessAnimDKTAAir_joint6[14];
extern u16 dFTNessAnimDKTAAir_joint7[12];
extern u16 dFTNessAnimDKTAAir_joint8[20];
extern u16 dFTNessAnimDKTAAir_joint10[12];
extern u16 dFTNessAnimDKTAAir_joint11[40];
extern u16 dFTNessAnimDKTAAir_joint12[16];
extern u16 dFTNessAnimDKTAAir_joint13[12];
extern u16 dFTNessAnimDKTAAir_joint15[12];
extern u16 dFTNessAnimDKTAAir_joint16[48];
extern u16 dFTNessAnimDKTAAir_joint18[16];
extern u16 dFTNessAnimDKTAAir_joint19[48];
extern u16 dFTNessAnimDKTAAir_joint21[32];
extern u16 dFTNessAnimDKTAAir_joint22[50];
extern u16 dFTNessAnimDKTAAir_joint24[24];
extern u16 dFTNessAnimDKTAAir_joint25[64];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimDKTAAir_joints[] = {
	(u32)dFTNessAnimDKTAAir_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimDKTAAir_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimDKTAAir_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimDKTAAir_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimDKTAAir_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimDKTAAir_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimDKTAAir_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimDKTAAir_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimDKTAAir_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimDKTAAir_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimDKTAAir_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimDKTAAir_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimDKTAAir_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimDKTAAir_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimDKTAAir_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimDKTAAir_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimDKTAAir_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimDKTAAir_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimDKTAAir_joint25, /* [24] joint 25 */
	0xFFFF0116, /* [25] END */
};

/* Joint 1 */
u16 dFTNessAnimDKTAAir_joint1[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -16, 537, -28,
	ftAnimBlock(0, 9),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimDKTAAir_joint2[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -43, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -156, 265, -79,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -43, 0, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 4 */
u16 dFTNessAnimDKTAAir_joint4[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 35, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 9),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimDKTAAir_joint5[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1754, 50, -253, -80, 707, 87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -515, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1735, -93, 1009, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1617, -42, 1179, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 893, -107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1804, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -472, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -275, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 795, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1779, -25, 726, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1754, -25, -253, 21, 707, -18,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimDKTAAir_joint6[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimLoop(0x6800, -26),
};

/* Joint 7 */
u16 dFTNessAnimDKTAAir_joint7[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 9),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimDKTAAir_joint8[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -256, 0, -32,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -283, -213, 92,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -256, 0, -32,
	ftAnimLoop(0x6800, -38),
};

/* Joint 10 */
u16 dFTNessAnimDKTAAir_joint10[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 9),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimDKTAAir_joint11[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -663, -11, 251, -50, 805, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 233, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -600, -31, 681, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -641, -33, 734, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -668, 5, 802, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -663, 5, 251, 17, 805, 3,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimDKTAAir_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTNessAnimDKTAAir_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 90, 54, 126, 143, 0, 0,
	ftAnimBlock(0, 9),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimDKTAAir_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 9),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimDKTAAir_joint16[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 147, 63, -308, -15, -217, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 410, -70, -357, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -376, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -450, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -345, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 302, -96, -236, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 174, -35, -211, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 147, -26, -308, 36, -217, -6,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimDKTAAir_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 495, 24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 538, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 495, -43,
	ftAnimLoop(0x6800, -30),
};

/* Joint 19 */
u16 dFTNessAnimDKTAAir_joint19[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3015, 6, 43, -22, 986, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 765, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2999, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 118, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 183, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 80, -60,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 786, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 901, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3015, -15, 43, -37, 986, 85,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimDKTAAir_joint21[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 254, -178, 192,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 49, -11, -210, -10, 271, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 185, 34, -239, 5, 339, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 254, -178, 192,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimDKTAAir_joint22[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -219, 75, 225, 4, -328, 96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 221, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 2, -22, 2, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -29, -42, -58, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -197, -37, -301, -48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 229, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 228, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -219, -22, 225, -2, -328, -27,
	ftAnimLoop(0x6800, -96),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimDKTAAir_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 700, -33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 535, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 578, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 692, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 700, 8,
	ftAnimLoop(0x6800, -46),
};

/* Joint 25 */
u16 dFTNessAnimDKTAAir_joint25[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -124, -11, 12, -25, 860, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -13, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -127, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 690, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 728, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 848, 20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 5, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -124, 3, 12, 6, 860, 11,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
	0x4002, 0x0063, 0x48EC, 0x009E, 0xFF44, 0xFF82, 0xFFAE, 0xFFF4, 0x3803, 0x0006, 0x0082, 0x3803, 0x0003, 0x0063, 0x6800, 0xFFE2, 0x0000, 0x0000, 0x0000, 0x0000,
};
