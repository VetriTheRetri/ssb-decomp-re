/* AnimJoint data for relocData file 1535 (FTCaptainAnimSleep) */
/* 2096 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimSleep_joint1[50];
extern u16 dFTCaptainAnimSleep_joint2[60];
extern u16 dFTCaptainAnimSleep_joint4[86];
extern u16 dFTCaptainAnimSleep_joint5[58];
extern u16 dFTCaptainAnimSleep_joint6[32];
extern u16 dFTCaptainAnimSleep_joint7[22];
extern u16 dFTCaptainAnimSleep_joint10[34];
extern u16 dFTCaptainAnimSleep_joint11[68];
extern u16 dFTCaptainAnimSleep_joint12[40];
extern u16 dFTCaptainAnimSleep_joint13[8];
extern u16 dFTCaptainAnimSleep_joint14[12];
extern u16 dFTCaptainAnimSleep_joint16[44];
extern u16 dFTCaptainAnimSleep_joint17[98];
extern u16 dFTCaptainAnimSleep_joint19[24];
extern u16 dFTCaptainAnimSleep_joint21[98];
extern u16 dFTCaptainAnimSleep_joint22[124];
extern u16 dFTCaptainAnimSleep_joint24[32];
extern u16 dFTCaptainAnimSleep_joint25[108];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimSleep_joints[] = {
	(u32)dFTCaptainAnimSleep_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimSleep_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimSleep_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimSleep_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimSleep_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimSleep_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimSleep_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimSleep_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimSleep_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimSleep_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimSleep_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimSleep_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimSleep_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimSleep_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimSleep_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimSleep_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimSleep_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTCaptainAnimSleep_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimSleep_joint1[50] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 231, 1704, 3, 0, -88,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 30), -131,
	ftAnimSetValRateT(FT_ANIM_TRAY, 30), 1562, -28,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 15), 211, 9,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 60), -179,
	ftAnimBlock(0, 15),
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 60), 258,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 30), 1487, -22,
	ftAnimSetValRateT(FT_ANIM_TRAY, 30), 1545, 28,
	ftAnimBlock(0, 15),
	ftAnimSetValRateT(FT_ANIM_TRAX, 45), 0, 88,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 1704, 4, 0, -84,
	ftAnimLoop(0x6800, -98),
};

/* Joint 2 */
u16 dFTCaptainAnimSleep_joint2[60] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, -13, 0, -18,
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), -229, 0,
	ftAnimSetValT(FT_ANIM_ROTY, 120), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -186, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), 9, 14,
	ftAnimBlock(0, 15),
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 0, 16,
	ftAnimBlock(0, 15),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 27), 268,
	ftAnimBlock(0, 15),
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 270, 0,
	ftAnimBlock(0, 12),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), 179, -5,
	ftAnimBlock(0, 18),
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 0, -10,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 0, -8,
	ftAnimLoop(0x6800, -116),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimSleep_joint4[86] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTZ), -71, 0,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -71, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -80, -1, 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 30), -127, 0, 18, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -127, 18,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -125, 1, 22, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), -13, 4, 44, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -13, 44,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, 2, 44, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 40), 6, -1, 5, -1,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 6, 5,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -1, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, -1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -71, -1, 0, 0,
	ftAnimLoop(0x6800, -170),
};

/* Joint 5 */
u16 dFTCaptainAnimSleep_joint5[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 479, -1, 17, -3, -185, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 42), -185, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 115), 479, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 31), 17, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 17, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 87), 17, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -185, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 76), -185, 0,
	ftAnimBlock(0, 72),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 479, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 479, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 479, 0, 17, 0, -185, 0,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimSleep_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -574, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 59), -573, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -574, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -589, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -589, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), -574, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -574, 0,
	ftAnimLoop(0x6800, -62),
};

/* Joint 7 */
u16 dFTCaptainAnimSleep_joint7[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2435, -89, -388,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 45), 2813, -53, -382,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), 2435, -89, -388,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 2435, -89, -388,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimSleep_joint10[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 1, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 33), -44, 0, 0, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 30), -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 30), 44, 0, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 27), 1, 0, 0, 0,
	ftAnimLoop(0x6800, -66),
};

/* Joint 11 */
u16 dFTCaptainAnimSleep_joint11[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -151, -3, -138, 18, 0, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 41), 28, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 50), -174, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), -99, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -98, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 61), -135, 0,
	ftAnimBlock(0, 27),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 32, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 77), 3, -3,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -174, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 68), -152, 0,
	ftAnimBlock(0, 24),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -135, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 43), -138, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -151, 0, -138, 0, 0, -3,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimSleep_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -707, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -549, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -539, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), -624, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -637, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), -874, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), -714, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -707, 7,
	ftAnimLoop(0x6800, -78),
};

/* Joint 13 */
u16 dFTCaptainAnimSleep_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimBlock(0, 120),
	ftAnimLoop(0x6800, -14),
};

/* Joint 14 */
u16 dFTCaptainAnimSleep_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 120),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimSleep_joint16[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 18, 0, -3,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 356, 0, -151, 0, -33, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 305, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), -272, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 145, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 75, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), 413, 0, -1, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), 0, 0, 0,
	ftAnimLoop(0x6800, -86),
};

/* Joint 17 */
u16 dFTCaptainAnimSleep_joint17[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 76, 23, -32, 0, -363, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -110, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 52), -384, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), 194, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 189, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 40), -142, -11,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -109, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 41), 48, -1,
	ftAnimBlock(0, 24),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -393, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), -579, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -153, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 38), -271, 4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 47, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 49), -32, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -579, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 39), -369, 6,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -266, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), 61, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, 14, -32, 0, -363, 6,
	ftAnimLoop(0x6800, -192),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimSleep_joint19[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 439, 12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 70), 590, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 583, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 48), 435, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 439, 4,
	ftAnimLoop(0x6800, -46),
};

/* Joint 21 */
u16 dFTCaptainAnimSleep_joint21[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1675, -18, 1631, 16, -1638, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 1593, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 71), -1724, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 27), -1655, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1653, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 34), -1658, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1591, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 36), 1510, -8,
	ftAnimBlock(0, 32),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1651, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 38), -1584, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1502, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 37), 1392, 8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1721, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 47), -1639, 0,
	ftAnimBlock(0, 29),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1580, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1664, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1401, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), 1621, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1675, -11, 1631, 9, -1638, 0,
	ftAnimLoop(0x6800, -192),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimSleep_joint22[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 231, 13, 147, -9, -22, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 30), 119, -3, 139, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 19), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -8, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 222, 14,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 115, -3, 134, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), -16, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), -189, -17,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 236, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 43), 211, -3,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -28, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 39), -74, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -206, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 34), -294, 6,
	ftAnimBlock(0, 30),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 207, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 156, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -287, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -33, 11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -71, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 159, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 180, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 223, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 152, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 231, 7, 147, -4, -22, 10,
	ftAnimLoop(0x6800, -244),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimSleep_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 387, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 376, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 388, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 58), 615, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 607, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 41), 389, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 387, -1,
	ftAnimLoop(0x6800, -62),
};

/* Joint 25 */
u16 dFTCaptainAnimSleep_joint25[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 142, 2, 197, -13, -188, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), 301, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 50), -332, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), 157, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 162, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 32), 235, 0,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 303, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 346, 10,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -336, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 59), -238, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 234, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 46), -39, 8,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 357, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 41), 492, -6,
	ftAnimBlock(0, 37),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -30, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 137, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 485, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 204, -9,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -232, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -191, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, 4, 197, -7, -188, 3,
	ftAnimLoop(0x6800, -212),
	ftAnimEnd(),
};
