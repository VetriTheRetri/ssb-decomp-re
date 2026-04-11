/* AnimJoint data for relocData file 1515 (FTCaptainAnimWalk3) */
/* 2272 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimWalk3_joint1[40];
extern u16 dFTCaptainAnimWalk3_joint2[46];
extern u16 dFTCaptainAnimWalk3_joint4[38];
extern u16 dFTCaptainAnimWalk3_joint5[112];
extern u16 dFTCaptainAnimWalk3_joint6[48];
extern u16 dFTCaptainAnimWalk3_joint7[44];
extern u16 dFTCaptainAnimWalk3_joint8[8];
extern u16 dFTCaptainAnimWalk3_joint10[42];
extern u16 dFTCaptainAnimWalk3_joint11[80];
extern u16 dFTCaptainAnimWalk3_joint12[48];
extern u16 dFTCaptainAnimWalk3_joint13[34];
extern u16 dFTCaptainAnimWalk3_joint14[12];
extern u16 dFTCaptainAnimWalk3_joint16[82];
extern u16 dFTCaptainAnimWalk3_joint17[88];
extern u16 dFTCaptainAnimWalk3_joint19[40];
extern u16 dFTCaptainAnimWalk3_joint21[86];
extern u16 dFTCaptainAnimWalk3_joint22[86];
extern u16 dFTCaptainAnimWalk3_joint24[152];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimWalk3_joints[] = {
	(u32)dFTCaptainAnimWalk3_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimWalk3_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimWalk3_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimWalk3_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimWalk3_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimWalk3_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimWalk3_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimWalk3_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimWalk3_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimWalk3_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimWalk3_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimWalk3_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimWalk3_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimWalk3_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimWalk3_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimWalk3_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimWalk3_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimWalk3_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0200, /* [24] END */
};

/* Joint 1 */
u16 dFTCaptainAnimWalk3_joint1[40] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1583, 75, 67, -141,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1620, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 1502, 0, 222, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 1625, 0, -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 1503, 0, 215, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 1583, 107, 67, -191,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimWalk3_joint2[46] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 37, 0, -64, 22, 13, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 35, 0, 173, 0, -72, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 39, 0, 18, -14, 44, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), 13, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), 37, 0, -127, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 37, 0, -64, 15,
	ftAnimLoop(0x6800, -88),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimWalk3_joint4[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 260, 0, 120, -37, -16, 6,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 259, 0, -347, 0, 58, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), 260, 0, 427, 1, -65, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 260, 0, 120, -41, -16, 5,
	ftAnimLoop(0x6800, -72),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimWalk3_joint5[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 144, 1, 27, 3, -295, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -63, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 217, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -540, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -521, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 130, 37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -50, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -133, -29,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 221, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 88, -15,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -163, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -55, 37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 167, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 7, -66,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 76, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 155, -6,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -57, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -267, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -21, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 25, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 150, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 144, -5, 27, 2, -295, -28,
	ftAnimLoop(0x6800, -220),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimWalk3_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -865, 43,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -644, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -644, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -699, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -685, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -881, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -906, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1107, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1107, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -898, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -865, 33,
	ftAnimLoop(0x6800, -94),
};

/* Joint 7 */
u16 dFTCaptainAnimWalk3_joint7[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3250, 19, 151, 1, -94, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 3553, 0, 172, 0, -181, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), 3126, -13, 142, 0, -55, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX, 4), 3126,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 142, -55,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 8, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 3250, 16, 151, 1, -94, -6,
	ftAnimLoop(0x6800, -86),
};

/* Joint 8 */
u16 dFTCaptainAnimWalk3_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -30, 0, 0,
	ftAnimBlock(0, 64),
	ftAnimLoop(0x6800, -14),
};

/* Joint 10 */
u16 dFTCaptainAnimWalk3_joint10[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -152, 4, -98, 11, 103, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -34, 0, 212, -3, -125, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), -210, 0, -253, 0, 217, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -200, 3, -227, 10, 198, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -152, 6, -98, 13, 103, -12,
	ftAnimLoop(0x6800, -80),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimWalk3_joint11[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1557, -9, -1723, -2, -1836, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 27), 1605, -4, -1473, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 24), -1761, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1738, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -1753, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1601, -1, -1525, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 1672, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -1940, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1930, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -1829, -5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1745, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1727, 4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1654, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1576, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1557, -19, -1723, 4, -1836, -6,
	ftAnimLoop(0x6800, -156),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimWalk3_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -764, 19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -805, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -805, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1039, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1021, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -826, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -852, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -900, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -870, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -801, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 37,
	ftAnimLoop(0x6800, -94),
};

/* Joint 13 */
u16 dFTCaptainAnimWalk3_joint13[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -92, 2, 18, 0, -35, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -71, 0, 26, 0, 24, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), -100, 0, 14, 0, -60, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -92, 1, 18, 0, -35, 3,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimWalk3_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1403, -645, -200, 92, 56, 7,
	ftAnimBlock(0, 64),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimWalk3_joint16[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 24, 0, -7, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 51, -4, -7, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 12), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -8, 0, 0, 92, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -25, -17, 4, 4, 155, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -174, 1, 42, 2, 34, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -6, 8, 38, -2, -87, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -3, -4, 13, 1, -138, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -103, -19, 65, 12, 41, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -158, 12, 89, -8, 33, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 16, 0, -7, 0, 0,
	ftAnimLoop(0x6800, -162),
};

/* Joint 17 */
u16 dFTCaptainAnimWalk3_joint17[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -82, 12, -50, 8, -409, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), -59, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 73, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 102, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 89, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -505, -13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -45, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -133, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 45, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), -95, 13,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -517, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -536, 17,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -131, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -62, 12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -515, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -451, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -82, 12, -50, 11, -409, 42,
	ftAnimLoop(0x6800, -172),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimWalk3_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 644, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 393, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 418, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 788, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 777, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 566, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 595, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 646, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 644, -1,
	ftAnimLoop(0x6800, -78),
};

/* Joint 21 */
u16 dFTCaptainAnimWalk3_joint21[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, -5, -55, 12, -228, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 32), -74, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), -62, 23, -383, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -38, 23, -377, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -15, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -108, 14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -58, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 2, -6,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -64, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -92, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -51, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -96, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -186, -43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -64, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3, -5, -55, 8, -228, -42,
	ftAnimLoop(0x6800, -168),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimWalk3_joint22[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -80, 17, 35, 4, -237, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 99, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 34), 2, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -597, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -590, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -424, 29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 101, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 76, 6,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -393, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 164, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -14, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), -97, 15,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 82, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 33, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 154, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -190, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -80, 17, 35, 2, -237, -46,
	ftAnimLoop(0x6800, -168),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimWalk3_joint24[152] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 791, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 471, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 702, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 701, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 358, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 353, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 772, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 791, 18,
	ftAnimLoop(0x6800, -78),
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -31, 29, -54, 29, -197, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -10, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -2, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 31, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 6, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 37, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -27, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), 35, 1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 34, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 96, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 47, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -377, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 31, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 113, -5,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 36, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -42, -13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -380, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -204, 6,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 103, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -63, 5,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -48, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -42, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -31, 10, -54, 9, -197, 7,
	ftAnimLoop(0x6800, -220),
	ftAnimEnd(),
};
