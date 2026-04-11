/* AnimJoint data for relocData file 712 (FTFoxAnimThrown2) */
/* 752 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimThrown2_joint2[8];
extern u16 dFTFoxAnimThrown2_joint3[16];
extern u16 dFTFoxAnimThrown2_joint5[12];
extern u16 dFTFoxAnimThrown2_joint6[24];
extern u16 dFTFoxAnimThrown2_joint7[16];
extern u16 dFTFoxAnimThrown2_joint8[10];
extern u16 dFTFoxAnimThrown2_joint9[16];
extern u16 dFTFoxAnimThrown2_joint11[10];
extern u16 dFTFoxAnimThrown2_joint12[24];
extern u16 dFTFoxAnimThrown2_joint13[14];
extern u16 dFTFoxAnimThrown2_joint14[10];
extern u16 dFTFoxAnimThrown2_joint16[10];
extern u16 dFTFoxAnimThrown2_joint17[24];
extern u16 dFTFoxAnimThrown2_joint19[16];
extern u16 dFTFoxAnimThrown2_joint21[24];
extern u16 dFTFoxAnimThrown2_joint22[24];
extern u16 dFTFoxAnimThrown2_joint24[16];
extern u16 dFTFoxAnimThrown2_joint25[24];
extern u16 dFTFoxAnimThrown2_joint26[24];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimThrown2_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTFoxAnimThrown2_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimThrown2_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimThrown2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimThrown2_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimThrown2_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimThrown2_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimThrown2_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimThrown2_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimThrown2_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimThrown2_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimThrown2_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimThrown2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimThrown2_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimThrown2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimThrown2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimThrown2_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimThrown2_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimThrown2_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimThrown2_joint26, /* [25] joint 26 */
	0xFFFF00B4, /* [26] END */
};

/* Joint 2 */
u16 dFTFoxAnimThrown2_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -240, -240,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTFoxAnimThrown2_joint3[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 178,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimThrown2_joint5[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -178,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimThrown2_joint6[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -147, 3, -217, -1, 418, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -144, -5, -218, 1, 411, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -147, -3, -217, 1, 418, 7,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimThrown2_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimThrown2_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimThrown2_joint9[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -357,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -312,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -357,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimThrown2_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimThrown2_joint12[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 147, -3, 218, 1, 418, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 142, 4, 220, -1, 406, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 145, 3, 219, -1, 413, 7,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimThrown2_joint13[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTFoxAnimThrown2_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimThrown2_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimThrown2_joint17[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, 0, 3, 0, 235, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -26, 0, 3, 0, 227, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -26, 0, 3, 0, 235, 8,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimThrown2_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 227, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 241, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 227, -14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimThrown2_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1655, 0, -1616, 0, 1497, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1656, 0, -1616, 0, 1492, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1655, 0, -1616, 0, 1497, 5,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimThrown2_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1581, 0, -1605, 0, -1373, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1581, 0, -1605, 0, -1381, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1581, 0, -1605, 0, -1373, 8,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimThrown2_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 227, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 241, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 227, -14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimThrown2_joint25[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1543, 0, 1593, 0, -1718, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1543, 0, 1593, 0, -1724, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1543, 0, 1593, 0, -1718, 5,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimThrown2_joint26[24] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -500, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000, 0x50EE, 0x0000, 0x0000, 0x0000, 0x0000, 0x0040, 0xFE3E, 0x0801, 0x000A, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
