/* AnimJoint data for relocData file 1582 (FTCaptainAnimThrown2) */
/* 1168 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimThrown2_joint2[12];
extern u16 dFTCaptainAnimThrown2_joint3[24];
extern u16 dFTCaptainAnimThrown2_joint5[26];
extern u16 dFTCaptainAnimThrown2_joint6[86];
extern u16 dFTCaptainAnimThrown2_joint7[36];
extern u16 dFTCaptainAnimThrown2_joint8[8];
extern u16 dFTCaptainAnimThrown2_joint11[14];
extern u16 dFTCaptainAnimThrown2_joint12[92];
extern u16 dFTCaptainAnimThrown2_joint13[24];
extern u16 dFTCaptainAnimThrown2_joint14[8];
extern u16 dFTCaptainAnimThrown2_joint15[12];
extern u16 dFTCaptainAnimThrown2_joint17[16];
extern u16 dFTCaptainAnimThrown2_joint18[32];
extern u16 dFTCaptainAnimThrown2_joint20[24];
extern u16 dFTCaptainAnimThrown2_joint22[26];
extern u16 dFTCaptainAnimThrown2_joint23[36];
extern u16 dFTCaptainAnimThrown2_joint25[24];
extern u16 dFTCaptainAnimThrown2_joint26[32];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimThrown2_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTCaptainAnimThrown2_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimThrown2_joint3, /* [2] joint 3 */
	(u32)dFTCaptainAnimThrown2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTCaptainAnimThrown2_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimThrown2_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimThrown2_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimThrown2_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTCaptainAnimThrown2_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimThrown2_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimThrown2_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimThrown2_joint15, /* [14] joint 15 */
	(u32)dFTCaptainAnimThrown2_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTCaptainAnimThrown2_joint18, /* [17] joint 18 */
	(u32)dFTCaptainAnimThrown2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTCaptainAnimThrown2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTCaptainAnimThrown2_joint23, /* [22] joint 23 */
	(u32)dFTCaptainAnimThrown2_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTCaptainAnimThrown2_joint26, /* [25] joint 26 */
};

/* Joint 2 */
u16 dFTCaptainAnimThrown2_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -290, -232,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTCaptainAnimThrown2_joint3[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -78, 0, 101, 0, -15, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -78, -101, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 101, 0, -15, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -78,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimThrown2_joint5[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -4, 0, 32, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX), 168, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -6, 0, 41, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -4, 0, 32, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimThrown2_joint6[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1229, 29, -574, 25, -943, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -652, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1156, -101, -1065, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1040, -47, -1091, -79,
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
u16 dFTCaptainAnimThrown2_joint7[36] = {
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
u16 dFTCaptainAnimThrown2_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2435, -89, -388,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -14),
};

/* Joint 11 */
u16 dFTCaptainAnimThrown2_joint11[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimThrown2_joint12[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2094, -53, 332, -9, -1875, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 552, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -2525, -30, -2338, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2553, -33, -2379, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2657, -65, -2513, -73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 655, 91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 705, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2723, 261, -2580, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2135, 496, -1973, 524,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1730, 192, -1532, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1749, -32, 616, -81, -1510, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 349, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1795, -45, -1526, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -2059, -40, -1827, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2094, -35, 332, -17, -1875, -47,
	ftAnimLoop(0x6800, -180),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimThrown2_joint13[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -560, -27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -691, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -645, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -572, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -560, 11,
	ftAnimLoop(0x6800, -46),
};

/* Joint 14 */
u16 dFTCaptainAnimThrown2_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -14),
};

/* Joint 15 */
u16 dFTCaptainAnimThrown2_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimThrown2_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTCaptainAnimThrown2_joint18[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 8, 0, -47, 0, -445, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 19), 8, 0, -47, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -458, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -449, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8, 0, -47, 0, -445, 3,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimThrown2_joint20[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 477, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 453, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 464, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 476, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 477, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 22 */
u16 dFTCaptainAnimThrown2_joint22[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1604, 0, 1545, 0, -1417, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -1605, 0, 1545, 0, -1417, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1604, 0, 1545, 0, -1417, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimThrown2_joint23[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -42, 0, 29, 0, -606, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 19), -41, 0, 29, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -541, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -562, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -605, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -42, 0, 29, 0, -606, -1,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimThrown2_joint25[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 430, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 478, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 456, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 430, -7,
	ftAnimLoop(0x6800, -46),
};

/* Joint 26 */
u16 dFTCaptainAnimThrown2_joint26[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 27, -1, -28, 0, 15, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 26, 1, -28, 0, 15, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 27, 1, -28, 0, 15, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
