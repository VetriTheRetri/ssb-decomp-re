/* AnimJoint data for relocData file 1513 (FTCaptainAnimWalk1) */
/* 1648 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimWalk1_joint1[28];
extern u16 dFTCaptainAnimWalk1_joint2[38];
extern u16 dFTCaptainAnimWalk1_joint4[34];
extern u16 dFTCaptainAnimWalk1_joint5[88];
extern u16 dFTCaptainAnimWalk1_joint6[32];
extern u16 dFTCaptainAnimWalk1_joint7[8];
extern u16 dFTCaptainAnimWalk1_joint8[34];
extern u16 dFTCaptainAnimWalk1_joint10[8];
extern u16 dFTCaptainAnimWalk1_joint11[66];
extern u16 dFTCaptainAnimWalk1_joint12[32];
extern u16 dFTCaptainAnimWalk1_joint13[8];
extern u16 dFTCaptainAnimWalk1_joint14[8];
extern u16 dFTCaptainAnimWalk1_joint16[28];
extern u16 dFTCaptainAnimWalk1_joint17[60];
extern u16 dFTCaptainAnimWalk1_joint19[32];
extern u16 dFTCaptainAnimWalk1_joint21[68];
extern u16 dFTCaptainAnimWalk1_joint22[68];
extern u16 dFTCaptainAnimWalk1_joint24[40];
extern u16 dFTCaptainAnimWalk1_joint25[94];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimWalk1_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimWalk1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimWalk1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimWalk1_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimWalk1_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimWalk1_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimWalk1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimWalk1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimWalk1_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimWalk1_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimWalk1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimWalk1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimWalk1_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimWalk1_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimWalk1_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimWalk1_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimWalk1_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimWalk1_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimWalk1_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimWalk1_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimWalk1_joint1[28] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1593, -11, 8, 8,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), 1512, 2, 45, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 1614, 10, 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 1593, -22, 8, 7,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimWalk1_joint2[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 15, -4, -31, -4, 11, 1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -149, 0, -160, 0, 52, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 62, 2, 5, 2, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 15, -4, -31, -4, 11, 1,
	ftAnimLoop(0x6800, -72),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimWalk1_joint4[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 274, 7, 88, 6, 39, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 454, 0, 300, 0, 134, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 223, -3, 28, -3, 12, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 274, 7, 88, 6, 39, 1,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimWalk1_joint5[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1855, 1, -1515, 0, 1396, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 31), 1756, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 34), -1435, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 23), 1791, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1790, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 1866, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1735, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), 1148, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1445, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 36), -1531, 2,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1867, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 1854, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1152, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 1380, 15,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1529, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), -1515, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1855, 0, -1515, 0, 1396, 15,
	ftAnimLoop(0x6800, -172),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimWalk1_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -777, -14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), -923, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -913, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -516, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -521, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -761, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -777, -15,
	ftAnimLoop(0x6800, -62),
};

/* Joint 7 */
u16 dFTCaptainAnimWalk1_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3056, -14, -163,
	ftAnimBlock(0, 85),
	ftAnimLoop(0x6800, -14),
};

/* Joint 8 */
u16 dFTCaptainAnimWalk1_joint8[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -58, 2, 2, -7, -52, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -2, 0, -190, 0, -2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), -74, 0, 57, 3, -66, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), -58, 2, 2, -7, -52, 1,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimWalk1_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 85),
	ftAnimLoop(0x6800, -14),
};

/* Joint 11 */
u16 dFTCaptainAnimWalk1_joint11[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, 2, 177, 3, 295, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 34), 266, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 55), -5, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 33), 274, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 267, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 50), 173, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 274, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 44), 305, 0,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -8, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 5, 2,
	ftAnimBlock(0, 23),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 305, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 298, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 2, 177, 4, 295, -3,
	ftAnimLoop(0x6800, -128),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimWalk1_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -885, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -964, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -962, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -890, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -876, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), -873, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -885, -12,
	ftAnimLoop(0x6800, -62),
};

/* Joint 13 */
u16 dFTCaptainAnimWalk1_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 317, 214, 166,
	ftAnimBlock(0, 85),
	ftAnimLoop(0x6800, -14),
};

/* Joint 14 */
u16 dFTCaptainAnimWalk1_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1538, -1003, 119,
	ftAnimBlock(0, 85),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTCaptainAnimWalk1_joint16[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 63, -2, -58, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 25), 0, -5, -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 36), 0, 18, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 24), 63, -2, -58, -6,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimWalk1_joint17[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 80, 0, -43, -1, -523, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 36), -102, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 35), 3, 3, -411, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 6, 3, -415, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 33), -554, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 48), 81, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -97, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 47), -42, -1,
	ftAnimBlock(0, 32),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -527, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 80, 0, -43, -1, -523, 4,
	ftAnimLoop(0x6800, -116),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimWalk1_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 465, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 44), 588, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 587, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 563, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 561, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 467, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 465, -2,
	ftAnimLoop(0x6800, -62),
};

/* Joint 21 */
u16 dFTCaptainAnimWalk1_joint21[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -114, -1, -76, -3, 150, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), -77, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 70), -105, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 45, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 36, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 41), 35, 12,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -78, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 44), -74, -1,
	ftAnimBlock(0, 30),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -106, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -113, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 47, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 147, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -114, 0, -76, -2, 150, 2,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimWalk1_joint22[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2, 0, 99, 4, -200, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 41), -27, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 50), 108, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 142, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 132, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -229, -14,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -24, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 42), 2, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 103, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), 95, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -243, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -207, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2, 0, 99, 4, -200, 6,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimWalk1_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 582, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 437, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 436, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 588, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 592, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), 578, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 579, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 582, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 582, 0,
	ftAnimLoop(0x6800, -78),
};

/* Joint 25 */
u16 dFTCaptainAnimWalk1_joint25[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1550, 3, -1693, -1, 1268, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 32), 1266, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), -1429, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 24), -1833, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1837, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -1682, 2,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1272, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), 1308, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1431, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), -1577, 0,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1680, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 34), -1690, -2,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1308, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 1270, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1577, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -1554, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1550, 3, -1693, -2, 1268, -2,
	ftAnimLoop(0x6800, -172),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
