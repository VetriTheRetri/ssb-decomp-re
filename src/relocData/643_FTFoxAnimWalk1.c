/* AnimJoint data for relocData file 643 (FTFoxAnimWalk1) */
/* 1552 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimWalk1_joint1[12];
extern u16 dFTFoxAnimWalk1_joint2[70];
extern u16 dFTFoxAnimWalk1_joint4[34];
extern u16 dFTFoxAnimWalk1_joint5[48];
extern u16 dFTFoxAnimWalk1_joint7[24];
extern u16 dFTFoxAnimWalk1_joint10[48];
extern u16 dFTFoxAnimWalk1_joint11[44];
extern u16 dFTFoxAnimWalk1_joint13[24];
extern u16 dFTFoxAnimWalk1_joint15[12];
extern u16 dFTFoxAnimWalk1_joint16[40];
extern u16 dFTFoxAnimWalk1_joint18[40];
extern u16 dFTFoxAnimWalk1_joint20[58];
extern u16 dFTFoxAnimWalk1_joint21[66];
extern u16 dFTFoxAnimWalk1_joint23[40];
extern u16 dFTFoxAnimWalk1_joint24[72];
extern u16 dFTFoxAnimWalk1_joint25[58];
extern u16 dFTFoxAnimWalk1_joint26[34];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimWalk1_joints[] = {
	(u32)dFTFoxAnimWalk1_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimWalk1_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimWalk1_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimWalk1_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimWalk1_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTFoxAnimWalk1_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimWalk1_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimWalk1_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTFoxAnimWalk1_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimWalk1_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimWalk1_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimWalk1_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimWalk1_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimWalk1_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimWalk1_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimWalk1_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimWalk1_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimWalk1_joint1[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 48, 912, -20,
	ftAnimBlock(0, 90),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimWalk1_joint2[70] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -338, -6, 0, 2, 6, -12, 0, 26,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -141, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -431, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 24), 7, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 25), -50,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 16), 43, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 51), -45, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTY, 47), -222, 0,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 46), -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 43), 35, 5,
	ftAnimBlock(0, 42),
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 23), -338, -6, 0, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 22), 6, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 20), 0, 2,
	ftAnimLoop(0x6800, -138),
};

/* Joint 4 */
u16 dFTFoxAnimWalk1_joint4[34] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 156, 9, 81, 2,
	ftAnimSetValBlock(FT_ANIM_ROTX), 309,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 141, 0,
	ftAnimSetValT(FT_ANIM_ROTX, 90), 309,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 19), 292,
	ftAnimSetValRateT(FT_ANIM_ROTY, 46), -14, 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 45), 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 156, 11, 81, 4,
	ftAnimLoop(0x6800, -66),
};

/* Joint 5 */
u16 dFTFoxAnimWalk1_joint5[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1718, -3, 1816, -5, 1869, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 87), 1825, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 89), -1716, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 63), 1775, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1775, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 1865, 4,
	ftAnimBlock(0, 23),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1822, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1819, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1718, -1, 1816, -3, 1869, 4,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimWalk1_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -471, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -510, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -512, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), -474, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -471, 2,
	ftAnimLoop(0x6800, -46),
};

/* Joint 10 */
u16 dFTFoxAnimWalk1_joint10[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 0, 136, -3, -72, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 97, 3,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 47), -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -52, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 39), -88, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateT(FT_ANIM_ROTY, 41), 201, 0,
	ftAnimBlock(0, 20),
	ftAnimSetValRateT(FT_ANIM_ROTX, 43), -113, 0,
	ftAnimBlock(0, 11),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 32), -72, 1,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 22), 136, -3,
	ftAnimLoop(0x6800, -94),
};

/* Joint 11 */
u16 dFTFoxAnimWalk1_joint11[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 69, -5, 305, 2, 215, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 88), 72, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 89), 303, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 38), 178, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 185, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 50), 218, -3,
	ftAnimBlock(0, 49),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 70, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 69, -1, 305, 1, 215, -3,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimWalk1_joint13[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -525, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 70), -500, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -501, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -524, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -525, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 15 */
u16 dFTFoxAnimWalk1_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 90),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimWalk1_joint16[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -375, 3, -274, -4, -86, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 89), -379, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 61), -95, 3, 138, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -93, 0, 142, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), -269, -5, -79, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -375, 4, -274, -5, -86, -6,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimWalk1_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 501, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 492, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 504, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 40), 319, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 317, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 506, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 506, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 502, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 501, -1,
	ftAnimLoop(0x6800, -78),
};

/* Joint 20 */
u16 dFTFoxAnimWalk1_joint20[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 36, -2, 121, -6, -168, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), 94, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 62), 13, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), -215, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -220, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 55), -175, 6,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 101, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 48), 128, -6,
	ftAnimBlock(0, 21),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 15, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 26), 38, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 36, -2, 121, -6, -168, 6,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimWalk1_joint21[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 358, -5, 128, 4, 144, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 43), 189, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 44), 375, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 99, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 88, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 55), 138, 5,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 181, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), 45, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 388, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 44), 364, -5,
	ftAnimBlock(0, 30),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 50, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), 122, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 358, -5, 128, 5, 144, 5,
	ftAnimLoop(0x6800, -128),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimWalk1_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 302, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 336, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 357, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 38), 266, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 234, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 262, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 267, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 302, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 302, 0,
	ftAnimLoop(0x6800, -78),
};

/* Joint 24 */
u16 dFTFoxAnimWalk1_joint24[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 15, 10, -103, 0, -210, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 37), 67, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), -43, -4, -380, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -49, -7, -394, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -317, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 40), -138, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 51, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 51), 5, 10,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -307, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), -103, 0,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -145, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -207, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 15, 10, -103, 0, -210, -3,
	ftAnimLoop(0x6800, -140),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimWalk1_joint25[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 3, 219, 5, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 306, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 13, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 18), 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 42), -143, 0,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 46), 106,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -11, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 33), -30, 0,
	ftAnimBlock(0, 19),
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 0, 5,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 219, 6,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 0, 2,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimWalk1_joint26[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 59, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), 2, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 23), 182, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 274, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 21), 136, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 59, -4,
	ftAnimLoop(0x6800, -54),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
