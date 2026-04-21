/* AnimJoint data for relocData file 1278 (FTKirbyAnimCrouch) */
/* 880 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimCrouch_joint1[28];
extern u16 dFTKirbyAnimCrouch_joint2[24];
extern u16 dFTKirbyAnimCrouch_joint3[10];
extern u16 dFTKirbyAnimCrouch_joint4[38];
extern u16 dFTKirbyAnimCrouch_joint6[14];
extern u16 dFTKirbyAnimCrouch_joint7[34];
extern u16 dFTKirbyAnimCrouch_joint8[14];
extern u16 dFTKirbyAnimCrouch_joint10[14];
extern u16 dFTKirbyAnimCrouch_joint11[34];
extern u16 dFTKirbyAnimCrouch_joint12[14];
extern u16 dFTKirbyAnimCrouch_joint14[10];
extern u16 dFTKirbyAnimCrouch_joint15[28];
extern u16 dFTKirbyAnimCrouch_joint17[14];
extern u16 dFTKirbyAnimCrouch_joint19[38];
extern u16 dFTKirbyAnimCrouch_joint20[28];
extern u16 dFTKirbyAnimCrouch_joint22[14];
extern u16 dFTKirbyAnimCrouch_joint23[38];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimCrouch_joints[] = {
	(u32)dFTKirbyAnimCrouch_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimCrouch_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimCrouch_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimCrouch_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimCrouch_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimCrouch_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimCrouch_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimCrouch_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimCrouch_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimCrouch_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimCrouch_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimCrouch_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimCrouch_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimCrouch_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimCrouch_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimCrouch_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTKirbyAnimCrouch_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimCrouch_joint1[28] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 409, 4096, -1023, 4096, 409,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4915, 2048, 4915,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimCrouch_joint2[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 600,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 720,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 600, -239,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 600, 95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimCrouch_joint3[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimCrouch_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 312, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 312, -71,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), -178, 3891, 4505, 3891,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 0, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 240, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimCrouch_joint6[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimCrouch_joint7[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -6, -217, 5, 0, 14,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 793, 10, -237, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 48, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 15, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 10, -239, -2, 0, -15,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimCrouch_joint8[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimCrouch_joint10[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimCrouch_joint11[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 6, 1391, 5, -1608, 14,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 814, -10, 1371, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1560, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1592, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -10, 1365, -5, -1608, -15,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimCrouch_joint12[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimCrouch_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimCrouch_joint15[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1632, 4, -1305, -7, 1845, -7,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1670, -32, -1301, 0, 1846, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1695, -25, -1305, -4, 1845, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimCrouch_joint17[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimCrouch_joint19[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, 5, 1785, -6, -1704, 20,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -1939, -10, 1745, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1622, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1689, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1708, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1945, -6, 1723, -22, -1701, 6,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimCrouch_joint20[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1629, -4, 1305, 7, 1841, -7,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1670, 31, 1301, 0, 1846, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1693, 22, 1305, 4, 1841, -4,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimCrouch_joint22[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTKirbyAnimCrouch_joint23[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1298, -5, -1785, 6, -1708, 20,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -1277, 10, -1745, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1622, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1689, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1708, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1271, 6, -1723, 22, -1705, 3,
	ftAnimEnd(),
};
