/* AnimJoint data for relocData file 645 (FTFoxAnimWalk3) */
/* 1808 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimWalk3_joint1[36];
extern u16 dFTFoxAnimWalk3_joint2[16];
extern u16 dFTFoxAnimWalk3_joint4[22];
extern u16 dFTFoxAnimWalk3_joint5[58];
extern u16 dFTFoxAnimWalk3_joint7[40];
extern u16 dFTFoxAnimWalk3_joint8[8];
extern u16 dFTFoxAnimWalk3_joint10[26];
extern u16 dFTFoxAnimWalk3_joint11[76];
extern u16 dFTFoxAnimWalk3_joint13[40];
extern u16 dFTFoxAnimWalk3_joint15[12];
extern u16 dFTFoxAnimWalk3_joint16[68];
extern u16 dFTFoxAnimWalk3_joint18[48];
extern u16 dFTFoxAnimWalk3_joint20[74];
extern u16 dFTFoxAnimWalk3_joint21[78];
extern u16 dFTFoxAnimWalk3_joint23[40];
extern u16 dFTFoxAnimWalk3_joint24[94];
extern u16 dFTFoxAnimWalk3_joint25[60];
extern u16 dFTFoxAnimWalk3_joint26[56];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimWalk3_joints[] = {
	(u32)dFTFoxAnimWalk3_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimWalk3_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimWalk3_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimWalk3_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimWalk3_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTFoxAnimWalk3_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimWalk3_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimWalk3_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimWalk3_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTFoxAnimWalk3_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimWalk3_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimWalk3_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimWalk3_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimWalk3_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimWalk3_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimWalk3_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimWalk3_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimWalk3_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimWalk3_joint1[36] = {
	ftAnimSetValRate(FT_ANIM_TRAY), 958, 131,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 970, -123,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -146,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 953, 108,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 149,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 970, -114,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -206,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 910, 78,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 71,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 958, 80,
	ftAnimLoop(0x6800, -70),
};

/* Joint 2 */
u16 dFTFoxAnimWalk3_joint2[16] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -283, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -219, 55,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 30), -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), -283, -2,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimWalk3_joint4[22] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -35, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 408, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -3, 3,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 20), -170, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 20), -35, 11,
	ftAnimLoop(0x6800, -42),
};

/* Joint 5 */
u16 dFTFoxAnimWalk3_joint5[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1904, 10, -1440, -8, 1677, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), -1749, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), 1333, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 22), -1338, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1342, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -1428, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1743, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -1914, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1338, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1678, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1904, 9, -1440, -12, 1677, -1,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimWalk3_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -970, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -895, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -875, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -541, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -527, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -938, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -951, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -968, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -970, -2,
	ftAnimLoop(0x6800, -78),
};

/* Joint 8 */
u16 dFTFoxAnimWalk3_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -164, 122, -2,
	ftAnimBlock(0, 45),
	ftAnimLoop(0x6800, -14),
};

/* Joint 10 */
u16 dFTFoxAnimWalk3_joint10[26] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY), -80, 221,
	ftAnimSetValAfter(FT_ANIM_ROTZ), 11,
	ftAnimSetValT(FT_ANIM_ROTX, 20), -38,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 5), 192,
	ftAnimSetValT(FT_ANIM_ROTY, 20), 270,
	ftAnimBlock(0, 15),
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), -25,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), -80, 221,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimWalk3_joint11[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 357, -11, 129, 10, 219, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 444, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), -105, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 431, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 475, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 603, 2,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 437, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 386, -14,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -100, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 138, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 600, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 219, -6,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 373, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 359, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 357, -1, 129, -8, 219, 0,
	ftAnimLoop(0x6800, -148),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimWalk3_joint13[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -629, 44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -825, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -856, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -830, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -827, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -678, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -643, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -607, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -629, -22,
	ftAnimLoop(0x6800, -78),
};

/* Joint 15 */
u16 dFTFoxAnimWalk3_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 45),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimWalk3_joint16[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -95, 9, -17, -4, -146, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -91, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 36), 64, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 5, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 13, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 273, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -91, -2, 275, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -109, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -148, 1,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 48, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -13, -3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -101, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -95, 5, -17, -3, -146, 1,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimWalk3_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 582, -57,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 161, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 201, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 228, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 224, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 169, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 241, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 828, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 800, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 609, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 582, -26,
	ftAnimLoop(0x6800, -94),
};

/* Joint 20 */
u16 dFTFoxAnimWalk3_joint20[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3, -4, -148, -2, -106, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), 51, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 44), -142, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -42, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -73, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -60, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -25, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -45, 6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 48, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 6, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -37, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -176, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -160, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -124, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3, -3, -148, -5, -106, 18,
	ftAnimLoop(0x6800, -144),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimWalk3_joint21[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, 1, 56, 4, 184, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -8, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 10, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 39, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 11, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -189, 21,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 6, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -165, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 23, 27,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 10, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 52, 4,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 52, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 158, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 0, 56, 3, 184, 25,
	ftAnimLoop(0x6800, -152),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimWalk3_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 308, -52,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 791, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 835, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 575, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 498, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 325, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 376, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 353, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 308, -44,
	ftAnimLoop(0x6800, -78),
};

/* Joint 24 */
u16 dFTFoxAnimWalk3_joint24[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -177, 19, 210, 11, -165, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -151, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 62, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), 170, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 174, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 153, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -142, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 58, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 34, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -100, -5,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 84, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -217, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -116, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -173, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 165, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 214, -3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -235, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -198, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -177, -4, 210, -4, -165, 32,
	ftAnimLoop(0x6800, -184),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimWalk3_joint25[60] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 219,
	ftAnimSetValRate(FT_ANIM_ROTX), -45, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 129, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -6, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -109, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 35, -2,
	ftAnimBlock(0, 10),
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -10, -1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 52, 9,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -83, -11,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 15), 219,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -45, 9,
	ftAnimLoop(0x6800, -118),
};

/* Joint 26 */
u16 dFTFoxAnimWalk3_joint26[56] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -125, -11,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 16), 268,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 1,
	ftAnimSetValRateBlock(FT_ANIM_ROTY), 53, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), -134, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 134, 6,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 268, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -125, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 53, -12,
	ftAnimBlock(0, 7),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 16), 268,
	ftAnimBlock(0, 1),
	ftAnimLoop(0x6800, -100),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
