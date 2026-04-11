/* AnimJoint data for relocData file 2040 (FTPikachuAnimCliffClimbQuick1) */
/* 1136 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimCliffClimbQuick1_joint1[26];
extern u16 dFTPikachuAnimCliffClimbQuick1_joint2[44];
extern u16 dFTPikachuAnimCliffClimbQuick1_joint3[38];
extern u16 dFTPikachuAnimCliffClimbQuick1_joint4[20];
extern u16 dFTPikachuAnimCliffClimbQuick1_joint6[20];
extern u16 dFTPikachuAnimCliffClimbQuick1_joint7[30];
extern u16 dFTPikachuAnimCliffClimbQuick1_joint8[8];
extern u16 dFTPikachuAnimCliffClimbQuick1_joint9[28];
extern u16 dFTPikachuAnimCliffClimbQuick1_joint10[10];
extern u16 dFTPikachuAnimCliffClimbQuick1_joint11[20];
extern u16 dFTPikachuAnimCliffClimbQuick1_joint12[20];
extern u16 dFTPikachuAnimCliffClimbQuick1_joint14[28];
extern u16 dFTPikachuAnimCliffClimbQuick1_joint15[30];
extern u16 dFTPikachuAnimCliffClimbQuick1_joint17[18];
extern u16 dFTPikachuAnimCliffClimbQuick1_joint18[30];
extern u16 dFTPikachuAnimCliffClimbQuick1_joint20[18];
extern u16 dFTPikachuAnimCliffClimbQuick1_joint22[30];
extern u16 dFTPikachuAnimCliffClimbQuick1_joint23[30];
extern u16 dFTPikachuAnimCliffClimbQuick1_joint25[18];
extern u16 dFTPikachuAnimCliffClimbQuick1_joint26[48];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimCliffClimbQuick1_joints[] = {
	(u32)dFTPikachuAnimCliffClimbQuick1_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimCliffClimbQuick1_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimCliffClimbQuick1_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimCliffClimbQuick1_joint4, /* [3] joint 4 */
	(u32)dFTPikachuAnimCliffClimbQuick1_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPikachuAnimCliffClimbQuick1_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimCliffClimbQuick1_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimCliffClimbQuick1_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimCliffClimbQuick1_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimCliffClimbQuick1_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimCliffClimbQuick1_joint12, /* [11] joint 12 */
	(u32)dFTPikachuAnimCliffClimbQuick1_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPikachuAnimCliffClimbQuick1_joint15, /* [14] joint 15 */
	(u32)dFTPikachuAnimCliffClimbQuick1_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPikachuAnimCliffClimbQuick1_joint18, /* [17] joint 18 */
	(u32)dFTPikachuAnimCliffClimbQuick1_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTPikachuAnimCliffClimbQuick1_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPikachuAnimCliffClimbQuick1_joint23, /* [22] joint 23 */
	(u32)dFTPikachuAnimCliffClimbQuick1_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTPikachuAnimCliffClimbQuick1_joint26, /* [25] joint 26 */
	0xFFFF0113, /* [26] END */
};

/* Joint 1 */
u16 dFTPikachuAnimCliffClimbQuick1_joint1[26] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), -240,
	ftAnimSetValBlock(FT_ANIM_TRAY), -840,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), -240, 12,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 5), -840,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 960,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 1344, 0, 384,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimCliffClimbQuick1_joint2[44] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAY), 897, -437,
	ftAnimSetValRateT(FT_ANIM_TRAY, 15), 526, -72,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 10,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), -5, 0, 6, 0, -5, 0, 115, -47, -146, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -12, 0, 15, 1, -13, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 79, -58, -186, -568,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 64, -61, 743, 1821, -643, -545,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimCliffClimbQuick1_joint3[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -145, 4, 71, 3, -292, 7, -187, 50, -240, 8, -111, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -127, 60, -230, 10, -111, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -69, 106, 54, -15, -166, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 602, 210, -37, -116, 476, 129,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPikachuAnimCliffClimbQuick1_joint4[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -101, 3, 1, -1, 12, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -66, 10, 23, 29, 13, 11,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimCliffClimbQuick1_joint6[20] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 386, -16, -110, 12, 277, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 366, -19, -94, 15, 288, 11,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimCliffClimbQuick1_joint7[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -48, 8, 220, 6, -288, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -21, 7, 240, 1, -232, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -4, 5, 230, -3, -247, -5,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, 230, -247,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimCliffClimbQuick1_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 7),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPikachuAnimCliffClimbQuick1_joint9[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -195, -6, -27, 2, 24, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -304, 35, -16, -9, 50, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 53, 24, -91, -9, -5, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimCliffClimbQuick1_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 7),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimCliffClimbQuick1_joint11[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -244, 8, 14, 0, -25, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -162, 14, 4, -6, 0, 22,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPikachuAnimCliffClimbQuick1_joint12[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -252, 9, -33, 0, 63, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -177, 3, -17, 7, 14, -36,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimCliffClimbQuick1_joint14[28] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -430, 27, -56, -6, 320, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -394, 127, -44, 162, 320, 23,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -318, 31, 85, -8, 340, -3,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPikachuAnimCliffClimbQuick1_joint15[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 803, 0, 1530, 25, 953, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 803, 0, 1608, 85, 882, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 803, 0, 2043, 145, 577, -101,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 803, 2043, 577,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimCliffClimbQuick1_joint17[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -3,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPikachuAnimCliffClimbQuick1_joint18[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1416, -7, -1185, 1, 642, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1394, 4, -1179, -24, 654, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1442, 16, -1330, -50, 952, 99,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1442, -1330, 952,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTPikachuAnimCliffClimbQuick1_joint20[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 808, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 808, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 813, 1,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 813,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimCliffClimbQuick1_joint22[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1869, -4, -1866, -12, 1513, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1882, 70, -1903, 47, 1450, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1447, 144, -1578, 108, 1899, 149,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1447, -1578, 1899,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTPikachuAnimCliffClimbQuick1_joint23[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 224, -28, -4, 66, 59, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 139, -33, 196, 33, -562, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 26, -37, 198, 0, -743, -60,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 26, 198, -743,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimCliffClimbQuick1_joint25[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 319, 184,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 871, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 830, -13,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), 830,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimCliffClimbQuick1_joint26[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1698, 109, -1523, -43, 1916, -285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1371, -20, -1653, -33, 1059, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1819, -149, -1726, -24, 1939, 293,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1819, -1726, 1939,
	ftAnimEnd(),
	0x0000, 0x280E, 0xFE0B, 0xFFE3, 0xFE33, 0xFFF7, 0xFFE8, 0x0028, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x380F, 0x0007, 0xFC25, 0xFE8B, 0xFFAF, 0x0000, 0x0000,
};
