/* AnimJoint data for relocData file 1498 (FTPurinAnimCatchPull) */
/* 864 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimCatchPull_joint1[24];
extern u16 dFTPurinAnimCatchPull_joint2[24];
extern u16 dFTPurinAnimCatchPull_joint3[16];
extern u16 dFTPurinAnimCatchPull_joint5[18];
extern u16 dFTPurinAnimCatchPull_joint6[34];
extern u16 dFTPurinAnimCatchPull_joint7[16];
extern u16 dFTPurinAnimCatchPull_joint9[30];
extern u16 dFTPurinAnimCatchPull_joint10[32];
extern u16 dFTPurinAnimCatchPull_joint11[14];
extern u16 dFTPurinAnimCatchPull_joint13[12];
extern u16 dFTPurinAnimCatchPull_joint14[28];
extern u16 dFTPurinAnimCatchPull_joint16[14];
extern u16 dFTPurinAnimCatchPull_joint18[28];
extern u16 dFTPurinAnimCatchPull_joint19[28];
extern u16 dFTPurinAnimCatchPull_joint21[16];
extern u16 dFTPurinAnimCatchPull_joint22[52];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTPurinAnimCatchPull_joints[] = {
	(u32)dFTPurinAnimCatchPull_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimCatchPull_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimCatchPull_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimCatchPull_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPurinAnimCatchPull_joint6, /* [5] joint 6 */
	(u32)dFTPurinAnimCatchPull_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimCatchPull_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTPurinAnimCatchPull_joint10, /* [9] joint 10 */
	(u32)dFTPurinAnimCatchPull_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimCatchPull_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPurinAnimCatchPull_joint14, /* [13] joint 14 */
	(u32)dFTPurinAnimCatchPull_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPurinAnimCatchPull_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTPurinAnimCatchPull_joint19, /* [18] joint 19 */
	(u32)dFTPurinAnimCatchPull_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPurinAnimCatchPull_joint22, /* [21] joint 22 */
	0xFFFF00CC, /* [22] END */
};

/* Joint 1 */
u16 dFTPurinAnimCatchPull_joint1[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 480, 0, 4300, 3276, 4300,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 480, -7, 0, 114, 4096, -81, 3686, 0, 4096, -81,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPurinAnimCatchPull_joint2[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAZ), -268, 600,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0, 0, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -312,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -47, -536, -160, 0, 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPurinAnimCatchPull_joint3[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 178, -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPurinAnimCatchPull_joint5[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -268, -336, -458, -133,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -357, 109, -388, -183,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPurinAnimCatchPull_joint6[34] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAZ), 14336, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3, 1, -1225, 12, -64, -14,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY), 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 2), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, -27, -1212, 18, -78, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -51, -56, -1187, 24, 45, 124,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPurinAnimCatchPull_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -717, 211,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -506, 355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 499,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPurinAnimCatchPull_joint9[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -178, 178, 60, 17, 48,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -179, -1852, -124, -1406,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 357, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), 65,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -58, -294, -270,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPurinAnimCatchPull_joint10[32] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 26, 657, 564, -34, 239, 563,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 683, 279, 529, -193, 802, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 585, -97, 178, -351, 560, -241,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimCatchPull_joint11[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPurinAnimCatchPull_joint13[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -50, -61, -1676, 106, -21, 16,
	_FT_ANIM_CMD(11, 0, 1), 6,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimCatchPull_joint14[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 165, -197, -292, -33, -133, 351,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -31, -106, -325, -15, 218, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -46, -14, -322, 3, 255, 36,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimCatchPull_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 461, -454,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -227,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPurinAnimCatchPull_joint18[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -818, 132, -429, -47, -2936, -5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -686, 0, -476, -27, -2941, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -819, -132, -484, -8, -2792, 149,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimCatchPull_joint19[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1941, -91, -1912, -18, 2197, -114,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1849, -143, -1931, -9, 2083, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1654, -195, -1931, 0, 1863, -219,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimCatchPull_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPurinAnimCatchPull_joint22[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 471, -17, 116, 39, 220, -162,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 453, -63, 155, 39, 58, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 344, -109, 195, 40, -125, -184,
	ftAnimEnd(),
	0x2820, 0x0000, 0xFFFD, 0x38CE, 0x0000, 0x0648, 0x0000, 0x0258, 0x0640, 0x288F, 0x0002, 0x0000, 0x0000, 0x0648, 0x0000, 0x0000, 0x0000, 0x0348, 0x000B, 0x3861, 0x0002, 0xFFFD, 0x0168, 0x0000,
};
