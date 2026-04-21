/* AnimJoint data for relocData file 578 (FTMarioAnimCliffClimbSlow1) */
/* 1312 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimCliffClimbSlow1_joint1[14];
extern u16 dFTMarioAnimCliffClimbSlow1_joint2[26];
extern u16 dFTMarioAnimCliffClimbSlow1_joint3[24];
extern u16 dFTMarioAnimCliffClimbSlow1_joint5[30];
extern u16 dFTMarioAnimCliffClimbSlow1_joint6[60];
extern u16 dFTMarioAnimCliffClimbSlow1_joint7[26];
extern u16 dFTMarioAnimCliffClimbSlow1_joint8[18];
extern u16 dFTMarioAnimCliffClimbSlow1_joint9[34];
extern u16 dFTMarioAnimCliffClimbSlow1_joint11[36];
extern u16 dFTMarioAnimCliffClimbSlow1_joint12[38];
extern u16 dFTMarioAnimCliffClimbSlow1_joint13[32];
extern u16 dFTMarioAnimCliffClimbSlow1_joint14[16];
extern u16 dFTMarioAnimCliffClimbSlow1_joint16[12];
extern u16 dFTMarioAnimCliffClimbSlow1_joint17[74];
extern u16 dFTMarioAnimCliffClimbSlow1_joint19[30];
extern u16 dFTMarioAnimCliffClimbSlow1_joint21[74];
extern u16 dFTMarioAnimCliffClimbSlow1_joint22[24];
extern u16 dFTMarioAnimCliffClimbSlow1_joint24[14];
extern u16 dFTMarioAnimCliffClimbSlow1_joint25[24];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimCliffClimbSlow1_joints[] = {
	(u32)dFTMarioAnimCliffClimbSlow1_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimCliffClimbSlow1_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimCliffClimbSlow1_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimCliffClimbSlow1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimCliffClimbSlow1_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimCliffClimbSlow1_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimCliffClimbSlow1_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimCliffClimbSlow1_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimCliffClimbSlow1_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimCliffClimbSlow1_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimCliffClimbSlow1_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimCliffClimbSlow1_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimCliffClimbSlow1_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimCliffClimbSlow1_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimCliffClimbSlow1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimCliffClimbSlow1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimCliffClimbSlow1_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimCliffClimbSlow1_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTMarioAnimCliffClimbSlow1_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTMarioAnimCliffClimbSlow1_joint1[14] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -327, 174, -109, 92,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 65, 0, -9,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimCliffClimbSlow1_joint2[26] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -30, 0, 0, 0, -160,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 0, 0, -300, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -317, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -536, 15,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTMarioAnimCliffClimbSlow1_joint3[24] = {
	ftAnimSetValBlock(FT_ANIM_TRAY), 600,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValT(FT_ANIM_TRAY, 23), 600,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 13,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -1, 0, -19, 0, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimCliffClimbSlow1_joint5[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 38), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 18,
	ftAnimSetValRate(FT_ANIM_ROTX), 223, 26,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 759, 36, 0, 4, 0, 1,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimCliffClimbSlow1_joint6[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1657, 17, -1448, -35, 1361, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1445, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1585, 83, 804, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1446, 222, 657, -117,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -983, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 757, 299,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1206, 227,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -941, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1116, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1533, -257, 1188, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1631, -98, -954, -12, 1294, 106,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimCliffClimbSlow1_joint7[26] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -545, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -635, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -640, -5,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimCliffClimbSlow1_joint8[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -804,
	ftAnimSetValRateT(FT_ANIM_ROTX, 70), -625, 8,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 30,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTMarioAnimCliffClimbSlow1_joint9[34] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 288,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ), 178, 8, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 0, 0, 0, 0, 0, 3,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 13,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 53), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 13,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimCliffClimbSlow1_joint11[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -9, 0, 6, 0, -5, 0, 0, 54, 0, -18, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), -368, -19, 309, 8, -239, -7,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 13,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 53), 0, 0, 54, 0, -17, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 13,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimCliffClimbSlow1_joint12[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1659, -14, 1448, 10, 1365, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 1710, 46, 1716, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1057, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 984, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1025, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 975, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1753, 43, 1749, 33, 918, -57,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimCliffClimbSlow1_joint13[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -291, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -445, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -496, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -478, 17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTMarioAnimCliffClimbSlow1_joint14[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 402, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 1127, 4,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 8,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimCliffClimbSlow1_joint16[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	_FT_ANIM_CMD(11, 0, 1), 30,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimCliffClimbSlow1_joint17[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1421, -29, -1551, -1, 1733, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1554, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1860, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1509, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1684, -428,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2367, -546, -1571, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2777, -251, -1407, 100, 2124, 247,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2919, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2743, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1370, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1028, 309,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2978, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2850, -205, 2762, 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3390, -539, -593, 434, 3368, 605,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimCliffClimbSlow1_joint19[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 476, 343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 694, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 924, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 920, -3,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimCliffClimbSlow1_joint21[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -625, 141, -291, 30, 742, -144,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 417, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 221, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -341, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -247, 241,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 469, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 460, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 196, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 568, 151,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 418, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 367, -120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -178, -236,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 279, -139, 147, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 138, -193, 102, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -408, -230, -107, -246, 20, -82,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimCliffClimbSlow1_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 53, 2, 47, 0, 120, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 67, 3, 46, 0, 122, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 70, 3, 47, 1, 124, 2,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimCliffClimbSlow1_joint24[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTMarioAnimCliffClimbSlow1_joint25[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 1897, -3,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1819, 2134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1894, -1, -1818, 0, 2142, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1891, -2, -1819, -1, 2134, -8,
	ftAnimEnd(),
	0x0000,
};
