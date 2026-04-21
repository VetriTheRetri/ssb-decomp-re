/* AnimJoint data for relocData file 1583 (FTCaptainAnimThrown1) */
/* 1120 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimThrown1_joint2[18];
extern u16 dFTCaptainAnimThrown1_joint3[24];
extern u16 dFTCaptainAnimThrown1_joint5[32];
extern u16 dFTCaptainAnimThrown1_joint6[86];
extern u16 dFTCaptainAnimThrown1_joint7[36];
extern u16 dFTCaptainAnimThrown1_joint8[10];
extern u16 dFTCaptainAnimThrown1_joint11[10];
extern u16 dFTCaptainAnimThrown1_joint12[92];
extern u16 dFTCaptainAnimThrown1_joint13[24];
extern u16 dFTCaptainAnimThrown1_joint14[10];
extern u16 dFTCaptainAnimThrown1_joint15[12];
extern u16 dFTCaptainAnimThrown1_joint17[14];
extern u16 dFTCaptainAnimThrown1_joint18[26];
extern u16 dFTCaptainAnimThrown1_joint20[16];
extern u16 dFTCaptainAnimThrown1_joint22[26];
extern u16 dFTCaptainAnimThrown1_joint23[26];
extern u16 dFTCaptainAnimThrown1_joint25[16];
extern u16 dFTCaptainAnimThrown1_joint26[30];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimThrown1_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTCaptainAnimThrown1_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimThrown1_joint3, /* [2] joint 3 */
	(u32)dFTCaptainAnimThrown1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTCaptainAnimThrown1_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimThrown1_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimThrown1_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimThrown1_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTCaptainAnimThrown1_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimThrown1_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimThrown1_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimThrown1_joint15, /* [14] joint 15 */
	(u32)dFTCaptainAnimThrown1_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTCaptainAnimThrown1_joint18, /* [17] joint 18 */
	(u32)dFTCaptainAnimThrown1_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTCaptainAnimThrown1_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTCaptainAnimThrown1_joint23, /* [22] joint 23 */
	(u32)dFTCaptainAnimThrown1_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTCaptainAnimThrown1_joint26, /* [25] joint 26 */
};

/* Joint 2 */
u16 dFTCaptainAnimThrown1_joint2[18] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 1544, 0, 92, 10,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 1544, 9, 92, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 20), 0,
	ftAnimLoop(0x6800, -34),
};

/* Joint 3 */
u16 dFTCaptainAnimThrown1_joint3[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -78, 0, 101, 0, -15, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -78, -101, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 101, 0, -15, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -78,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimThrown1_joint5[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 33,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 10,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -4, 0, 32, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX), 168, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -6, 0, 41, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -4, 0, 32, 0,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimThrown1_joint6[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1229, 29, -574, 25, -943, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -652, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1156, -101, -1064, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1040, -47, -1091, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1060, 161, -1225, -252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1362, 259, -674, 13, -1597, -320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1781, 134, -534, 18, -2114, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1942, 158, -508, 33, -2255, -126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2754, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -589, -153, -2491, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -762, -171, -2561, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -933, -135, -2554, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2837, 82, -1033, -100, -2552, 2,
	ftAnimLoop(0x6800, -168),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimThrown1_joint7[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -537, 36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -451, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -498, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -499, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -624, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -787, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -638, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, 100,
	ftAnimLoop(0x6800, -70),
};

/* Joint 8 */
u16 dFTCaptainAnimThrown1_joint8[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2435, -89, -388,
	_FT_ANIM_CMD(11, 0, 1), 13,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -18),
};

/* Joint 11 */
u16 dFTCaptainAnimThrown1_joint11[10] = {
	ftAnimSetVal(FT_ANIM_ROTX), 0,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 20), 0,
	ftAnimLoop(0x6800, -18),
};

/* Joint 12 */
u16 dFTCaptainAnimThrown1_joint12[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1122, -53, 332, -9, 1341, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 552, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 691, -30, 878, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 663, -33, 837, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 559, -65, 703, -73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 655, 91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 705, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 493, 261, 636, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1081, 496, 1243, 524,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1486, 192, 1684, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1467, -32, 616, -81, 1706, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 349, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1421, -45, 1690, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1157, -40, 1389, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1122, -35, 332, -17, 1341, -47,
	ftAnimLoop(0x6800, -180),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimThrown1_joint13[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -560, -27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -691, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -645, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -572, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -560, 11,
	ftAnimLoop(0x6800, -46),
};

/* Joint 14 */
u16 dFTCaptainAnimThrown1_joint14[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	_FT_ANIM_CMD(11, 0, 1), 13,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -18),
};

/* Joint 15 */
u16 dFTCaptainAnimThrown1_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimThrown1_joint17[14] = {
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTZ, 33), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 13,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -26),
};

/* Joint 18 */
u16 dFTCaptainAnimThrown1_joint18[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, 0, -42, 0, -29, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 5, 0, -42, 0, -30, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 0, -42, 0, -29, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimThrown1_joint20[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 273, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 274, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 273, -1,
	ftAnimLoop(0x6800, -30),
};

/* Joint 22 */
u16 dFTCaptainAnimThrown1_joint22[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1626, 11, 1585, 0, -1628, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -1626, -1, 1585, 0, -1628, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1626, 0, 1585, 0, -1628, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimThrown1_joint23[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 8, 0, 47, 0, -56, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 7, 0, 47, 0, -56, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8, 0, 47, 0, -56, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimThrown1_joint25[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 295, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 295, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 295, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 26 */
u16 dFTCaptainAnimThrown1_joint26[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 18, -34, 28, 0, -68, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 16, 3, 28, 0, -68, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18, 1, 28, 0, -68, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
