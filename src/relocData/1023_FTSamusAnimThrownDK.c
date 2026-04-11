/* AnimJoint data for relocData file 1023 (FTSamusAnimThrownDK) */
/* 1296 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimThrownDK_joint2[12];
extern u16 dFTSamusAnimThrownDK_joint3[30];
extern u16 dFTSamusAnimThrownDK_joint5[20];
extern u16 dFTSamusAnimThrownDK_joint6[86];
extern u16 dFTSamusAnimThrownDK_joint7[36];
extern u16 dFTSamusAnimThrownDK_joint8[14];
extern u16 dFTSamusAnimThrownDK_joint9[10];
extern u16 dFTSamusAnimThrownDK_joint12[10];
extern u16 dFTSamusAnimThrownDK_joint13[82];
extern u16 dFTSamusAnimThrownDK_joint15[32];
extern u16 dFTSamusAnimThrownDK_joint16[70];
extern u16 dFTSamusAnimThrownDK_joint18[36];
extern u16 dFTSamusAnimThrownDK_joint20[36];
extern u16 dFTSamusAnimThrownDK_joint21[54];
extern u16 dFTSamusAnimThrownDK_joint23[72];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTSamusAnimThrownDK_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTSamusAnimThrownDK_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimThrownDK_joint3, /* [2] joint 3 */
	(u32)dFTSamusAnimThrownDK_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTSamusAnimThrownDK_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimThrownDK_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimThrownDK_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimThrownDK_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimThrownDK_joint12, /* [9] joint 12 */
	0x00000000, /* [10] NULL */
	0x00000000, /* [11] NULL */
	(u32)dFTSamusAnimThrownDK_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimThrownDK_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTSamusAnimThrownDK_joint16, /* [15] joint 16 */
	(u32)dFTSamusAnimThrownDK_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTSamusAnimThrownDK_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTSamusAnimThrownDK_joint21, /* [20] joint 21 */
	(u32)dFTSamusAnimThrownDK_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF0130, /* [23] END */
};

/* Joint 2 */
u16 dFTSamusAnimThrownDK_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 1608, 0, 79, 58,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTSamusAnimThrownDK_joint3[30] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 101, 0, -15, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), -78,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -101, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 101, 0, -15, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -101, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 101, 0, -15, 0,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimThrownDK_joint5[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 168, 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -5, 0, 41, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), -4, 32,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimThrownDK_joint6[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2813, 73, -1074, -29, 712, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 3518, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1228, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 162, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 61, -89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -590, -73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3573, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 4021, 30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1241, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1041, 154,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -646, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4032, -92, -658, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3837, 194, -871, 179, -449, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4421, 280, -682, 139, -988, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4398, -22, -592, 89, -917, 70,
	ftAnimLoop(0x6800, -168),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimThrownDK_joint7[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -441, 33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -368, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -347, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -445, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -584, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -781, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -627, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -518, 108,
	ftAnimLoop(0x6800, -70),
};

/* Joint 8 */
u16 dFTSamusAnimThrownDK_joint8[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -965, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 40), -965,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimThrownDK_joint9[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 98, 60, -42,
	_FT_ANIM_CMD(11, 0, 1), 3,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -18),
};

/* Joint 12 */
u16 dFTSamusAnimThrownDK_joint12[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 1,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -18),
};

/* Joint 13 */
u16 dFTSamusAnimThrownDK_joint13[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -481, -46, 1252, 9, -256, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1093, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -916, -33, -733, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -951, -54, -785, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1026, -101, 961, -114, -878, -112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 371, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1153, -428, -1009, -420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1882, -250, -1718, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1654, 85, -1454, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1771, -54, -1503, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1822, -55, -1540, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -2053, -41, -1816, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2089, -36, 355, -16, -1864, -48,
	ftAnimLoop(0x6800, -160),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimThrownDK_joint15[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -517, -17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -685, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -706, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -568, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -530, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -517, 12,
	ftAnimLoop(0x6800, -62),
};

/* Joint 16 */
u16 dFTSamusAnimThrownDK_joint16[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 36, 25, -129, 14, -200, -120,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -14, -22, -48, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -967, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -963, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -638, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -28, 2, -55, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -87, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 72, -21,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -487, 141,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -254, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -112, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 50, -17, -125, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 36, -13, -129, -3, -200, 53,
	ftAnimLoop(0x6800, -136),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimThrownDK_joint18[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 649, 114,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 894, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 820, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 773, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 868, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 810, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 715, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 649, -66,
	ftAnimLoop(0x6800, -70),
};

/* Joint 20 */
u16 dFTSamusAnimThrownDK_joint20[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -323, 11, -61, 0, 179, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -61, 0, 179, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 124, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 151, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -341, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -323, 17, -61, 0, 179, 0,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimThrownDK_joint21[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -206, 96, -101, 64, -886, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -313, -86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 23, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 33, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 29, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -149, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, -112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -906, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 28, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -67, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -206, -57, -101, -33, -886, 19,
	ftAnimLoop(0x6800, -104),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimThrownDK_joint23[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 720, 75,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 770, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 703, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 808, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 880, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 770, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 720, -49,
	ftAnimLoop(0x6800, -62),
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 264, -156, -28, 0, 15, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -28, 0, 15, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -124, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -129, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 174, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 264, 89, -28, 0, 15, 0,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
