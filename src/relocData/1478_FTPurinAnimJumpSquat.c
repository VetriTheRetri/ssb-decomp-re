/* AnimJoint data for relocData file 1478 (FTPurinAnimJumpSquat) */
/* 1152 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimJumpSquat_joint1[14];
extern u16 dFTPurinAnimJumpSquat_joint2[10];
extern u16 dFTPurinAnimJumpSquat_joint3[26];
extern u16 dFTPurinAnimJumpSquat_joint5[26];
extern u16 dFTPurinAnimJumpSquat_joint6[68];
extern u16 dFTPurinAnimJumpSquat_joint7[28];
extern u16 dFTPurinAnimJumpSquat_joint9[26];
extern u16 dFTPurinAnimJumpSquat_joint10[68];
extern u16 dFTPurinAnimJumpSquat_joint11[30];
extern u16 dFTPurinAnimJumpSquat_joint13[10];
extern u16 dFTPurinAnimJumpSquat_joint14[24];
extern u16 dFTPurinAnimJumpSquat_joint16[8];
extern u16 dFTPurinAnimJumpSquat_joint18[64];
extern u16 dFTPurinAnimJumpSquat_joint19[42];
extern u16 dFTPurinAnimJumpSquat_joint21[88];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTPurinAnimJumpSquat_joints[] = {
	(u32)dFTPurinAnimJumpSquat_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimJumpSquat_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimJumpSquat_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimJumpSquat_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPurinAnimJumpSquat_joint6, /* [5] joint 6 */
	(u32)dFTPurinAnimJumpSquat_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimJumpSquat_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTPurinAnimJumpSquat_joint10, /* [9] joint 10 */
	(u32)dFTPurinAnimJumpSquat_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimJumpSquat_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPurinAnimJumpSquat_joint14, /* [13] joint 14 */
	(u32)dFTPurinAnimJumpSquat_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPurinAnimJumpSquat_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTPurinAnimJumpSquat_joint19, /* [18] joint 19 */
	(u32)dFTPurinAnimJumpSquat_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF00FB, /* [21] END */
};

/* Joint 1 */
u16 dFTPurinAnimJumpSquat_joint1[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -268, 0, 0, 600, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPurinAnimJumpSquat_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPurinAnimJumpSquat_joint3[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAY), 268, 312, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 89, -33,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAY, 3), 60, 2048,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAY, 5), 0, 312, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPurinAnimJumpSquat_joint5[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 178, -30, -30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, -22, 0, 29, 0, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPurinAnimJumpSquat_joint6[68] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -516, 39, -611, -8, 1256, -39,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX, 3), 3072, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -477, 714, -620, -225, 1217, -626,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 912, 643, -1063, 153, 4, -619,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 810, -49, -313, 402, -21, -19,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 814, 1, -258, 38, -34, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 805, -2, -218, 2, -4, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -1, -217, 0, 0, 4,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimJumpSquat_joint7[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -345,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -690,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPurinAnimJumpSquat_joint9[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -178, 30, -30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, 22, 0, -29, 0, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPurinAnimJumpSquat_joint10[68] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2129, -43, 1000, -11, -345, -44,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX, 3), 3072, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2086, -717, 988, -226, -390, -629,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 694, -643, 547, 152, -1604, -619,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 798, 49, 1294, 399, -1630, -19,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 794, -1, 1346, 38, -1643, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 802, 2, 1387, 2, -1612, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 1, 1387, 0, -1608, 4,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimJumpSquat_joint11[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -340,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPurinAnimJumpSquat_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimJumpSquat_joint14[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 295, -116,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -302, 237, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 178, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 29, -101,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -23,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimJumpSquat_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPurinAnimJumpSquat_joint18[64] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1930, 56, 1766, -4, -1255, -104,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 102, 4096, 102, 4096, 102,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 5), 1785,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1874, 15, -1360, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1898, -21, -1591, -171,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 5), -1918,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1704, -56,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1704,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), -1704,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 3), 1785,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1918, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimJumpSquat_joint19[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -297, 116, 300, 0, 233, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 302, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -180, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -31, 100,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 23, 2, 302, 0, 237, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPurinAnimJumpSquat_joint21[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x280E, 0xFAFA, 0xFFC8, 0xF91A, 0x0004, 0xFB15, 0xFF98, 0x3F00, 0x0E66, 0x0E66, 0x0E66, 0x2F01, 0x0003, 0x1000, 0x0066, 0x1000, 0x0066, 0x1000, 0x0066, 0x4005, 0x0005, 0xF907, 0x200B, 0x0001, 0xFAC2, 0xFFF1, 0xFAAC, 0xFF58, 0x200B, 0x0001, 0xFADA, 0x0015, 0xF9C5, 0xFF54, 0x2803, 0x0005, 0xFAEE, 0x0000, 0x2009, 0x0001, 0xF954, 0xFFCA, 0x4701, 0x0005, 0x1000, 0x1000, 0x1000, 0x3809, 0x0001, 0xF958, 0x4009, 0x0003, 0xF954, 0x0801, 0x0001, 0x3805, 0x0001, 0xF907, 0x3805, 0x0001, 0xF907, 0x200F, 0x0001, 0xFAEE, 0x0000, 0xF907, 0x0000, 0xF958, 0x0003, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
