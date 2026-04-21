/* AnimJoint data for relocData file 720 (FTFoxAnimCliffClimbQuick1) */
/* 944 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimCliffClimbQuick1_joint1[16];
extern u16 dFTFoxAnimCliffClimbQuick1_joint2[40];
extern u16 dFTFoxAnimCliffClimbQuick1_joint3[26];
extern u16 dFTFoxAnimCliffClimbQuick1_joint5[12];
extern u16 dFTFoxAnimCliffClimbQuick1_joint6[30];
extern u16 dFTFoxAnimCliffClimbQuick1_joint7[16];
extern u16 dFTFoxAnimCliffClimbQuick1_joint8[10];
extern u16 dFTFoxAnimCliffClimbQuick1_joint9[10];
extern u16 dFTFoxAnimCliffClimbQuick1_joint11[10];
extern u16 dFTFoxAnimCliffClimbQuick1_joint12[32];
extern u16 dFTFoxAnimCliffClimbQuick1_joint13[20];
extern u16 dFTFoxAnimCliffClimbQuick1_joint14[18];
extern u16 dFTFoxAnimCliffClimbQuick1_joint16[12];
extern u16 dFTFoxAnimCliffClimbQuick1_joint17[24];
extern u16 dFTFoxAnimCliffClimbQuick1_joint19[16];
extern u16 dFTFoxAnimCliffClimbQuick1_joint21[24];
extern u16 dFTFoxAnimCliffClimbQuick1_joint22[24];
extern u16 dFTFoxAnimCliffClimbQuick1_joint24[14];
extern u16 dFTFoxAnimCliffClimbQuick1_joint25[24];
extern u16 dFTFoxAnimCliffClimbQuick1_joint26[20];
extern u16 dFTFoxAnimCliffClimbQuick1_joint27[20];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimCliffClimbQuick1_joints[] = {
	(u32)dFTFoxAnimCliffClimbQuick1_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimCliffClimbQuick1_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimCliffClimbQuick1_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimCliffClimbQuick1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimCliffClimbQuick1_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimCliffClimbQuick1_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimCliffClimbQuick1_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimCliffClimbQuick1_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimCliffClimbQuick1_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimCliffClimbQuick1_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimCliffClimbQuick1_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimCliffClimbQuick1_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimCliffClimbQuick1_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimCliffClimbQuick1_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimCliffClimbQuick1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimCliffClimbQuick1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimCliffClimbQuick1_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimCliffClimbQuick1_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimCliffClimbQuick1_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimCliffClimbQuick1_joint26, /* [25] joint 26 */
	(u32)dFTFoxAnimCliffClimbQuick1_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimCliffClimbQuick1_joint1[16] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), -480,
	ftAnimSetValRate(FT_ANIM_TRAY), -480, 2133,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), 0, 480,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimCliffClimbQuick1_joint2[40] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -420, 440, 912, 343, -24, 126,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -394, 190, 959, 449, 2, -167,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 449, -167,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 190,
	ftAnimSetValRateT(FT_ANIM_TRAX, 2), -240, 1409,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1186, 679, -159, -278,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 679, -278,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1272, 1144, -175, 458,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTFoxAnimCliffClimbQuick1_joint3[26] = {
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValT(FT_ANIM_TRAX, 30), 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 20,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -89, -402, 178, -1206, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0, 80, -1608, -241,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimCliffClimbQuick1_joint5[12] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 402, -89,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 0, -80,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimCliffClimbQuick1_joint6[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2025, -23, 68, 31, -1868, 98,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2009, -5, -1629, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 99, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -67, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1991, -18, -144, -77, -1524, 104,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimCliffClimbQuick1_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimCliffClimbQuick1_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimCliffClimbQuick1_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 178, 0, 0, 0, 336, 0,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimCliffClimbQuick1_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimCliffClimbQuick1_joint12[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2353, -238, 1349, -218, 2549, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2114, -68, 1130, 36, 2315, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2215, -61, 1421, 180, 2489, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1992, -222, 1490, 69, 2406, -83,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimCliffClimbQuick1_joint13[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -888, 532,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -355, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -553, 18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTFoxAnimCliffClimbQuick1_joint14[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 268, -39,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 0, 35, 0, 35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTFoxAnimCliffClimbQuick1_joint16[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	_FT_ANIM_CMD(11, 0, 1), 20,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimCliffClimbQuick1_joint17[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1328, -12, 1576, -58, -1631, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1346, 22, 1576, 42, -1600, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1361, 14, 1602, 25, -1616, -15,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimCliffClimbQuick1_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimCliffClimbQuick1_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 373, 6, 143, -6, 430, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 396, -19, 138, -10, 398, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 340, -55, 116, -22, 432, 33,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimCliffClimbQuick1_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1624, -36, -1627, -59, 1584, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1620, 28, -1625, 43, 1615, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1603, 17, -1601, 23, 1603, -12,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimCliffClimbQuick1_joint24[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimCliffClimbQuick1_joint25[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1783, 81, 1523, -8, 2014, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1793, -56, 1518, 13, 1983, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1752, -41, 1541, 23, 2036, 52,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimCliffClimbQuick1_joint26[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -504, -46, 279, 22, -421, -14,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -648, -17, 280, -104, -349, 201,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTFoxAnimCliffClimbQuick1_joint27[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 329, -9, -270, -45,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 286, 0, -411, -30,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
