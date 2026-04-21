/* AnimJoint data for relocData file 517 (FTMarioAnimCrouchEnd) */
/* 1248 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimCrouchEnd_joint1[28];
extern u16 dFTMarioAnimCrouchEnd_joint2[28];
extern u16 dFTMarioAnimCrouchEnd_joint4[28];
extern u16 dFTMarioAnimCrouchEnd_joint5[64];
extern u16 dFTMarioAnimCrouchEnd_joint6[32];
extern u16 dFTMarioAnimCrouchEnd_joint7[20];
extern u16 dFTMarioAnimCrouchEnd_joint8[28];
extern u16 dFTMarioAnimCrouchEnd_joint10[28];
extern u16 dFTMarioAnimCrouchEnd_joint11[62];
extern u16 dFTMarioAnimCrouchEnd_joint12[22];
extern u16 dFTMarioAnimCrouchEnd_joint13[20];
extern u16 dFTMarioAnimCrouchEnd_joint15[12];
extern u16 dFTMarioAnimCrouchEnd_joint16[44];
extern u16 dFTMarioAnimCrouchEnd_joint18[26];
extern u16 dFTMarioAnimCrouchEnd_joint20[32];
extern u16 dFTMarioAnimCrouchEnd_joint21[30];
extern u16 dFTMarioAnimCrouchEnd_joint23[24];
extern u16 dFTMarioAnimCrouchEnd_joint24[48];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimCrouchEnd_joints[] = {
	(u32)dFTMarioAnimCrouchEnd_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimCrouchEnd_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimCrouchEnd_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimCrouchEnd_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimCrouchEnd_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimCrouchEnd_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimCrouchEnd_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimCrouchEnd_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimCrouchEnd_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimCrouchEnd_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimCrouchEnd_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimCrouchEnd_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimCrouchEnd_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimCrouchEnd_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimCrouchEnd_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimCrouchEnd_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimCrouchEnd_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimCrouchEnd_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimCrouchEnd_joint1[28] = {
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 140, 223, -16,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 102, 453, -10,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 223, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 540, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 540, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimCrouchEnd_joint2[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -568, -734, 161,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -181, -727, 28,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 3),
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -71, -790, -95,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -71, -790, -95,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimCrouchEnd_joint4[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 863, 71, 73,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 464, 107, 64,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 3),
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 208, 258, 110,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 208, 258, 110,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimCrouchEnd_joint5[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 103, -71, -488, 19, -1023, 159,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -373, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -87, -71, -471, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -137, -19, -286, 158,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -126, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 133, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -375, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 5), -300,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -272, -72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -272, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 133, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, 0, -300, 0, -272, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTMarioAnimCrouchEnd_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -495, -159,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -735, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -549, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimCrouchEnd_joint7[20] = {
	ftAnimSetValBlock(FT_ANIM_ROTX), -134,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX, 4), -1072,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 1,
	ftAnimBlock(0, 3),
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), -625,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), -625,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimCrouchEnd_joint8[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 187, 0, -6,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 210, 0, 13,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 3),
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 201, -4, 176,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 201, -4, 176,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimCrouchEnd_joint10[28] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -17,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -377, 178, -181,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1,
	ftAnimBlock(0, 3),
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -221, 139, -209,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -221, 139, -209,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimCrouchEnd_joint11[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -158, 8, 512, -7, -992, 145,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -160, 100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -505, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 460, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 367, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 543, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -47, 127,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 5), 443,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -343, 167,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 560, 7,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 4), 551,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 443, 65,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 551,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimCrouchEnd_joint12[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -563, -181,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -883, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 36,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -811,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -811,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimCrouchEnd_joint13[20] = {
	ftAnimSetValBlock(FT_ANIM_ROTX), 134,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX, 4), 1072,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 1,
	ftAnimBlock(0, 3),
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), 625,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 625,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimCrouchEnd_joint15[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 71, 0, 35,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, -804, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimCrouchEnd_joint16[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 184, -82, -233, -17, -566, 71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -40, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -230, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -42, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -55, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -135, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 44, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 45, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, -230, 45,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTMarioAnimCrouchEnd_joint18[26] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1170, -113,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 734, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 400, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 400,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 400,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimCrouchEnd_joint20[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1520, 18, 1523, 16, 1379, -23,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 11), 1619,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1396, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1378, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1392, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 1452,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1396, 1619, 1452,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTMarioAnimCrouchEnd_joint21[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1508, 58, 1390, -13, 1011, 95,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), 1808, 1421,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1633, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1644, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1644, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1808, 1421, 1644,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTMarioAnimCrouchEnd_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1200, -114,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 755, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 710, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 438, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimCrouchEnd_joint24[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -11, 9, -32, -17, -217, -70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -115, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 89, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -332, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -301, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -212, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -93, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -93, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, 0, -93, 0, -212, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
