/* AnimJoint data for relocData file 875 (FTDonkeyAnimCliffWait) */
/* 1296 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimCliffWait_joint1[22];
extern u16 dFTDonkeyAnimCliffWait_joint2[8];
extern u16 dFTDonkeyAnimCliffWait_joint3[28];
extern u16 dFTDonkeyAnimCliffWait_joint5[28];
extern u16 dFTDonkeyAnimCliffWait_joint6[58];
extern u16 dFTDonkeyAnimCliffWait_joint7[24];
extern u16 dFTDonkeyAnimCliffWait_joint8[20];
extern u16 dFTDonkeyAnimCliffWait_joint9[8];
extern u16 dFTDonkeyAnimCliffWait_joint11[22];
extern u16 dFTDonkeyAnimCliffWait_joint12[58];
extern u16 dFTDonkeyAnimCliffWait_joint13[32];
extern u16 dFTDonkeyAnimCliffWait_joint14[18];
extern u16 dFTDonkeyAnimCliffWait_joint17[12];
extern u16 dFTDonkeyAnimCliffWait_joint18[66];
extern u16 dFTDonkeyAnimCliffWait_joint20[24];
extern u16 dFTDonkeyAnimCliffWait_joint22[44];
extern u16 dFTDonkeyAnimCliffWait_joint23[68];
extern u16 dFTDonkeyAnimCliffWait_joint25[24];
extern u16 dFTDonkeyAnimCliffWait_joint26[32];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimCliffWait_joints[] = {
	(u32)dFTDonkeyAnimCliffWait_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimCliffWait_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimCliffWait_joint3, /* [2] joint 3 */
	(u32)dFTDonkeyAnimCliffWait_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTDonkeyAnimCliffWait_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimCliffWait_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimCliffWait_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimCliffWait_joint9, /* [8] joint 9 */
	(u32)dFTDonkeyAnimCliffWait_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTDonkeyAnimCliffWait_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimCliffWait_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimCliffWait_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimCliffWait_joint17, /* [14] joint 17 */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	(u32)dFTDonkeyAnimCliffWait_joint18, /* [17] joint 18 */
	(u32)dFTDonkeyAnimCliffWait_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTDonkeyAnimCliffWait_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTDonkeyAnimCliffWait_joint23, /* [22] joint 23 */
	(u32)dFTDonkeyAnimCliffWait_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTDonkeyAnimCliffWait_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTDonkeyAnimCliffWait_joint1[22] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -3004, -49, 0, 2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 80), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 50), -2588,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 16), -3004, -111,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 14), -3004,
	ftAnimLoop(0x6800, -42),
};

/* Joint 2 */
u16 dFTDonkeyAnimCliffWait_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -24, 1032, -402,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -14),
};

/* Joint 3 */
u16 dFTDonkeyAnimCliffWait_joint3[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 135, -6, -52, 0, -31, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), 17, -53, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 135, 3, -52, 0, -31, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 135, -52, -31,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimCliffWait_joint5[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -230, 5, 17, 0, 6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), -56, 15, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -230, -5, 17, 0, 6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -230, 17, 6,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimCliffWait_joint6[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -42, 0, -195, 0, -673, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 64), -51, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 79), -195, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 51), -445, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -452, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -683, 2,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -46, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -42, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -681, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -673, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -42, 0, -195, 0, -673, 0,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimCliffWait_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -911, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 54), -1060, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1050, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -910, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -911, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 8 */
u16 dFTDonkeyAnimCliffWait_joint8[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -258, 0, -178, 1, -100, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), -258, -178, -100,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -258, -178, -100,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTDonkeyAnimCliffWait_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 144, 74,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -14),
};

/* Joint 11 */
u16 dFTDonkeyAnimCliffWait_joint11[22] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -822, -174, 94,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), -724, -183, 91,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -822, -174, 94,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -822, -174, 94,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimCliffWait_joint12[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1661, 1, 1500, 1, 952, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 68), 1658, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 79), 1500, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 51), 1181, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1174, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 941, 2,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1657, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1660, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 943, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 951, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1661, 0, 1500, 0, 952, 0,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimCliffWait_joint13[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -904, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 53), -1074, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1065, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -900, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -902, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -904, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -904, 0,
	ftAnimLoop(0x6800, -62),
};

/* Joint 14 */
u16 dFTDonkeyAnimCliffWait_joint14[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 446, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 178, 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 50), 508,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 446, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 14), 446,
	ftAnimLoop(0x6800, -34),
};

/* Joint 17 */
u16 dFTDonkeyAnimCliffWait_joint17[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTDonkeyAnimCliffWait_joint18[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -72, -1, -543, -5, 2343, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 38), 1880, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 55), -675, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 37), 251, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 265, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 138, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1867, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 1986, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -666, 9, 2043, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), -543, 0, 2344, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 95, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 22), -72, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -72, 0, -543, 0, 2343, 0,
	ftAnimLoop(0x6800, -128),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimCliffWait_joint20[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1049, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 53), 1179, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1172, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 1049, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1049, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 22 */
u16 dFTDonkeyAnimCliffWait_joint22[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 158, 9, 9, 0, 41, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 79), 9, 0, 41, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 52), 369, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 359, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 22), 150, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 152, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 158, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 158, 0, 9, 0, 41, 0,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimCliffWait_joint23[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -196, -2, 248, 0, 2205, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 54), -300, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 66), 248, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 52), 2031, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2038, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 2208, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -292, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), -196, 0,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 249, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 248, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2207, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2206, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -196, 0, 248, 0, 2205, 0,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimCliffWait_joint25[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1083, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 64), 1094, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1088, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 1082, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1083, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 26 */
u16 dFTDonkeyAnimCliffWait_joint26[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1578, 0, 1738, 0, -1270, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 79), -1578, 0, -1270, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 79), 1738,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1578, 0, -1270, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 1738,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
