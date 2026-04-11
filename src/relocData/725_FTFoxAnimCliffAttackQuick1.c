/* AnimJoint data for relocData file 725 (FTFoxAnimCliffAttackQuick1) */
/* 976 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimCliffAttackQuick1_joint1[14];
extern u16 dFTFoxAnimCliffAttackQuick1_joint2[30];
extern u16 dFTFoxAnimCliffAttackQuick1_joint3[22];
extern u16 dFTFoxAnimCliffAttackQuick1_joint5[10];
extern u16 dFTFoxAnimCliffAttackQuick1_joint6[30];
extern u16 dFTFoxAnimCliffAttackQuick1_joint7[16];
extern u16 dFTFoxAnimCliffAttackQuick1_joint8[10];
extern u16 dFTFoxAnimCliffAttackQuick1_joint9[10];
extern u16 dFTFoxAnimCliffAttackQuick1_joint11[10];
extern u16 dFTFoxAnimCliffAttackQuick1_joint12[32];
extern u16 dFTFoxAnimCliffAttackQuick1_joint13[20];
extern u16 dFTFoxAnimCliffAttackQuick1_joint14[38];
extern u16 dFTFoxAnimCliffAttackQuick1_joint16[10];
extern u16 dFTFoxAnimCliffAttackQuick1_joint17[24];
extern u16 dFTFoxAnimCliffAttackQuick1_joint19[14];
extern u16 dFTFoxAnimCliffAttackQuick1_joint21[24];
extern u16 dFTFoxAnimCliffAttackQuick1_joint22[24];
extern u16 dFTFoxAnimCliffAttackQuick1_joint24[16];
extern u16 dFTFoxAnimCliffAttackQuick1_joint25[24];
extern u16 dFTFoxAnimCliffAttackQuick1_joint26[56];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimCliffAttackQuick1_joints[] = {
	(u32)dFTFoxAnimCliffAttackQuick1_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimCliffAttackQuick1_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimCliffAttackQuick1_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimCliffAttackQuick1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimCliffAttackQuick1_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimCliffAttackQuick1_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimCliffAttackQuick1_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimCliffAttackQuick1_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimCliffAttackQuick1_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimCliffAttackQuick1_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimCliffAttackQuick1_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimCliffAttackQuick1_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimCliffAttackQuick1_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimCliffAttackQuick1_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimCliffAttackQuick1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimCliffAttackQuick1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimCliffAttackQuick1_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimCliffAttackQuick1_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimCliffAttackQuick1_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimCliffAttackQuick1_joint26, /* [25] joint 26 */
	0xFFFF00E6, /* [26] END */
};

/* Joint 1 */
u16 dFTFoxAnimCliffAttackQuick1_joint1[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -480, -480,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), 0, 1600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimCliffAttackQuick1_joint2[30] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -420, 28, 912, 239, 0, -99,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), -350, 295, -120, -204,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 941, 405,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 405,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1170, 405,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 405,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1200, -236,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTFoxAnimCliffAttackQuick1_joint3[22] = {
	ftAnimSetValAfter(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -402, -1206,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 114, -1608, -119,
	ftAnimSetValT(FT_ANIM_TRAX, 35), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimCliffAttackQuick1_joint5[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 402,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimCliffAttackQuick1_joint6[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 414, -55, -1695, -107, -277, 236,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 303, -140, 6, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1803, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1676, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 77, -225, -1477, 199, -27, -34,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimCliffAttackQuick1_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimCliffAttackQuick1_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimCliffAttackQuick1_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 178, 0, 0, 0, 336, 0,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimCliffAttackQuick1_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimCliffAttackQuick1_joint12[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2500, -33, 286, -434, -2296, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2533, 256, -148, -392, -2250, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1987, -162, -499, 210, -2603, -261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2858, -871, 272, 771, -2774, -170,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimCliffAttackQuick1_joint13[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -827, -182,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1009, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1252, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -791, 461,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTFoxAnimCliffAttackQuick1_joint14[38] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 268, 0,
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 174, -37, -197, -44,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 1), 132,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 202, -97, -78, 502,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 1), 81,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, -61, 268, -298,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTFoxAnimCliffAttackQuick1_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimCliffAttackQuick1_joint17[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -282, 58, 41, -12, -14, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -89, 68, -6, -4, -150, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -86, 2, 19, 25, -282, -131,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimCliffAttackQuick1_joint19[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimCliffAttackQuick1_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1981, -103, -1752, 67, -1186, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1749, -87, -1579, 38, -1236, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1703, -46, -1609, -30, -1182, 53,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimCliffAttackQuick1_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -22, 21, 28, -14, -11, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 56, 20, -21, -4, -167, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 38, -18, 5, 26, -284, -116,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimCliffAttackQuick1_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimCliffAttackQuick1_joint25[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1793, -87, -1695, 41, 2011, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1539, -100, -1604, 2, 1995, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1504, -35, -1647, -43, 2035, 39,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimCliffAttackQuick1_joint26[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -504, -279, 421,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -364, 133, -276, 0, 350, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 296, 182, -276, -4, 0, -103,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000, 0x400E, 0x0000, 0xFFF7, 0xFFF9, 0x48E0, 0x0000, 0x0040, 0xFE3E, 0x200F, 0x0002, 0x0014, 0x0016, 0xFFF7, 0x0000, 0xFFFA, 0x0000, 0x280F, 0x000F, 0x0183, 0xFFE3, 0x0000, 0x0000, 0x0000, 0x0000, 0x0801, 0x0001, 0x0000, 0x0000,
};
