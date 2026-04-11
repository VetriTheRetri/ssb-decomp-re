/* AnimJoint data for relocData file 575 (FTMarioAnimCliffClimbQuick1) */
/* 1232 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimCliffClimbQuick1_joint1[38];
extern u16 dFTMarioAnimCliffClimbQuick1_joint2[44];
extern u16 dFTMarioAnimCliffClimbQuick1_joint3[42];
extern u16 dFTMarioAnimCliffClimbQuick1_joint5[42];
extern u16 dFTMarioAnimCliffClimbQuick1_joint6[48];
extern u16 dFTMarioAnimCliffClimbQuick1_joint7[14];
extern u16 dFTMarioAnimCliffClimbQuick1_joint8[18];
extern u16 dFTMarioAnimCliffClimbQuick1_joint9[34];
extern u16 dFTMarioAnimCliffClimbQuick1_joint11[34];
extern u16 dFTMarioAnimCliffClimbQuick1_joint12[48];
extern u16 dFTMarioAnimCliffClimbQuick1_joint13[16];
extern u16 dFTMarioAnimCliffClimbQuick1_joint14[38];
extern u16 dFTMarioAnimCliffClimbQuick1_joint16[10];
extern u16 dFTMarioAnimCliffClimbQuick1_joint17[24];
extern u16 dFTMarioAnimCliffClimbQuick1_joint19[14];
extern u16 dFTMarioAnimCliffClimbQuick1_joint21[24];
extern u16 dFTMarioAnimCliffClimbQuick1_joint22[32];
extern u16 dFTMarioAnimCliffClimbQuick1_joint24[46];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimCliffClimbQuick1_joints[] = {
	(u32)dFTMarioAnimCliffClimbQuick1_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimCliffClimbQuick1_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimCliffClimbQuick1_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimCliffClimbQuick1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimCliffClimbQuick1_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimCliffClimbQuick1_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimCliffClimbQuick1_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimCliffClimbQuick1_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimCliffClimbQuick1_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimCliffClimbQuick1_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimCliffClimbQuick1_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimCliffClimbQuick1_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimCliffClimbQuick1_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimCliffClimbQuick1_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimCliffClimbQuick1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimCliffClimbQuick1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimCliffClimbQuick1_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimCliffClimbQuick1_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0125, /* [24] END */
};

/* Joint 1 */
u16 dFTMarioAnimCliffClimbQuick1_joint1[38] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -931, 506, -182, -488,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -254, 1500, -545, -820,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 2,
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -181, 1019, -592, 260,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 80, -480, 879,
	ftAnimSetValT(FT_ANIM_TRAY, 17), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 0, 621,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimCliffClimbQuick1_joint2[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), -77,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), 218, 679,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 600, 732, 0, 5,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX), 0, 91, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), 3216,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 3), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, 0, 767, -33,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -73,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTMarioAnimCliffClimbQuick1_joint3[42] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAY), 600, -218,
	ftAnimSetValRateT(FT_ANIM_TRAY, 18), 0, -137,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 15,
	ftAnimSetValRate(FT_ANIM_ROTY), 0, -44,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, -804, -56, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY, 11), -804,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 7, -4, 10, -5,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 17), 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimCliffClimbQuick1_joint5[42] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 27), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 7,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 357, -39, 0, -1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -253, -31, -9, -2, -4, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -84, 27, -29, 15, -12, 6,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTMarioAnimCliffClimbQuick1_joint6[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -771, -353, -1432, 183, 438, 462,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1046, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1124, -502, 900, 613,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1775, -542, 1665, 566,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2209, -94, -1109, 0, 2033, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1963, 242, -1047, 57, 1846, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1724, 239, -995, 52, 1597, -249,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimCliffClimbQuick1_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimCliffClimbQuick1_joint8[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -804,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), 0, 14,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 15,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTMarioAnimCliffClimbQuick1_joint9[34] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 288,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 35), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 15,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -626, -25, 0, -1, 0, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -448, 33, -2, 0, 86, 9,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimCliffClimbQuick1_joint11[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -18,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 35), 0, 0, 54, 0, -17, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 15,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -6, 0, 2, 0, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -182, -10, 113, 6, -172, -9,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimCliffClimbQuick1_joint12[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2007, 74, 193, -181, 1500, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2082, -44, 12, -194, 1758, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1918, 15, -195, -36, 1808, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1943, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2112, 24, -61, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1967, -441, -206, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1228, -738, -338, -131, 1987, 44,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimCliffClimbQuick1_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTMarioAnimCliffClimbQuick1_joint14[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1429, 8, 0, -10, 0, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1337, -141, -162, -49, 98, 29,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 580, -62, -294, -9, 178, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 953, 122, -220, 21, 217, -2,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimCliffClimbQuick1_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimCliffClimbQuick1_joint17[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1199, 0, -1553, -2, -1692, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1217, -9, -1553, 1, -1699, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1228, -11, -1549, 3, -1692, 7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimCliffClimbQuick1_joint19[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimCliffClimbQuick1_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -599, 33, -291, 3, 742, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -447, 42, -274, 6, 579, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -401, 45, -266, 7, 522, -57,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimCliffClimbQuick1_joint22[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 24, -145, 48, 190, -84, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 188, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -91, 29, 513, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -83, 7, 513, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -76, 6, 511, -2, 202, 13,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimCliffClimbQuick1_joint24[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000, 0x200E, 0x06FE, 0x00B9, 0xF8E5, 0x000A, 0x0856, 0xFFE8, 0x280D, 0x0004, 0xF911, 0x000C, 0x07D9, 0xFFD8, 0x2003, 0x0003, 0x081F, 0xFFEC, 0x2003, 0x0001, 0x0807, 0xFFE8, 0x200F, 0x0001, 0x07EE, 0xFFE8, 0xF91D, 0x000C, 0x07AE, 0xFFD6, 0x0000,
};
