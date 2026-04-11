/* AnimJoint data for relocData file 1280 (FTKirbyAnimCrouchEnd) */
/* 928 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimCrouchEnd_joint1[28];
extern u16 dFTKirbyAnimCrouchEnd_joint2[24];
extern u16 dFTKirbyAnimCrouchEnd_joint3[10];
extern u16 dFTKirbyAnimCrouchEnd_joint4[44];
extern u16 dFTKirbyAnimCrouchEnd_joint6[14];
extern u16 dFTKirbyAnimCrouchEnd_joint7[38];
extern u16 dFTKirbyAnimCrouchEnd_joint8[16];
extern u16 dFTKirbyAnimCrouchEnd_joint10[14];
extern u16 dFTKirbyAnimCrouchEnd_joint11[38];
extern u16 dFTKirbyAnimCrouchEnd_joint12[16];
extern u16 dFTKirbyAnimCrouchEnd_joint14[10];
extern u16 dFTKirbyAnimCrouchEnd_joint15[28];
extern u16 dFTKirbyAnimCrouchEnd_joint17[14];
extern u16 dFTKirbyAnimCrouchEnd_joint19[38];
extern u16 dFTKirbyAnimCrouchEnd_joint20[28];
extern u16 dFTKirbyAnimCrouchEnd_joint22[58];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimCrouchEnd_joints[] = {
	(u32)dFTKirbyAnimCrouchEnd_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimCrouchEnd_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimCrouchEnd_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimCrouchEnd_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimCrouchEnd_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimCrouchEnd_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimCrouchEnd_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimCrouchEnd_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimCrouchEnd_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimCrouchEnd_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimCrouchEnd_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimCrouchEnd_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimCrouchEnd_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimCrouchEnd_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimCrouchEnd_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimCrouchEnd_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF00D2, /* [22] END */
};

/* Joint 1 */
u16 dFTKirbyAnimCrouchEnd_joint1[28] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4915, 2048, 4915,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, -327, 4096, 819, 4096, -327,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimCrouchEnd_joint2[24] = {
	ftAnimSetValRate(FT_ANIM_TRAY), 600, 96,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 720,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 600, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimCrouchEnd_joint3[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimCrouchEnd_joint4[44] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 240,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -22, 4096, -136, 4096, 204, 4096, -68,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), -178, 312, 3891, 4505, 3891,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 0, 22, 4300, 51, 3276, -102, 4300, 51,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 0, 312, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimCrouchEnd_joint6[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimCrouchEnd_joint7[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -34, -239, 26, 0, 51,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 805, -1, -220, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 78, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 28, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 0, -220, 0, 0, 1,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimCrouchEnd_joint8[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimCrouchEnd_joint10[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimCrouchEnd_joint11[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 34, 1365, 29, -1608, 51,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 803, 1, 1385, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1529, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1579, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1610, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 0, 1391, 6, -1608, 1,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimCrouchEnd_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimCrouchEnd_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimCrouchEnd_joint15[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1695, 44, -1305, -23, 1845, -24,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1632, 0, -1305, -1, 1846, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1632, 0, -1305, 0, 1845, -1,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimCrouchEnd_joint17[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimCrouchEnd_joint19[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1945, 38, 1723, 6, -1701, 67,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -1919, 1, 1785, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1606, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1668, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1706, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 0, 1785, 0, -1704, 1,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimCrouchEnd_joint20[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1695, -44, 1305, 23, 1845, -24,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1630, 0, 1304, 1, 1842, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1632, 1, 1305, 1, 1845, 3,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimCrouchEnd_joint22[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000, 0x280E, 0xFB09, 0xFFDA, 0xF945, 0xFFFA, 0xF95B, 0x0043, 0x4F00, 0x1000, 0x1000, 0x1000, 0x2807, 0x0009, 0xFAEF, 0xFFFF, 0xF907, 0x0000, 0x2009, 0x0003, 0xF9BA, 0xFFD2, 0x2009, 0x0001, 0xF97C, 0xFFCE, 0x2009, 0x0005, 0xF952, 0x0002, 0x200F, 0x0001, 0xFAEE, 0x0000, 0xF907, 0x0000, 0xF958, 0x0005, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
