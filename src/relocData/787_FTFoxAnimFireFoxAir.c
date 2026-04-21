/* AnimJoint data for relocData file 787 (FTFoxAnimFireFoxAir) */
/* 896 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimFireFoxAir_joint1[8];
extern u16 dFTFoxAnimFireFoxAir_joint2[12];
extern u16 dFTFoxAnimFireFoxAir_joint3[14];
extern u16 dFTFoxAnimFireFoxAir_joint5[16];
extern u16 dFTFoxAnimFireFoxAir_joint6[22];
extern u16 dFTFoxAnimFireFoxAir_joint7[16];
extern u16 dFTFoxAnimFireFoxAir_joint8[12];
extern u16 dFTFoxAnimFireFoxAir_joint9[16];
extern u16 dFTFoxAnimFireFoxAir_joint11[12];
extern u16 dFTFoxAnimFireFoxAir_joint12[26];
extern u16 dFTFoxAnimFireFoxAir_joint13[16];
extern u16 dFTFoxAnimFireFoxAir_joint14[12];
extern u16 dFTFoxAnimFireFoxAir_joint16[14];
extern u16 dFTFoxAnimFireFoxAir_joint17[26];
extern u16 dFTFoxAnimFireFoxAir_joint19[16];
extern u16 dFTFoxAnimFireFoxAir_joint21[32];
extern u16 dFTFoxAnimFireFoxAir_joint22[26];
extern u16 dFTFoxAnimFireFoxAir_joint24[16];
extern u16 dFTFoxAnimFireFoxAir_joint25[26];
extern u16 dFTFoxAnimFireFoxAir_joint26[22];
extern u16 dFTFoxAnimFireFoxAir_joint27[34];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimFireFoxAir_joints[] = {
	(u32)dFTFoxAnimFireFoxAir_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimFireFoxAir_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimFireFoxAir_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimFireFoxAir_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimFireFoxAir_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimFireFoxAir_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimFireFoxAir_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimFireFoxAir_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimFireFoxAir_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimFireFoxAir_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimFireFoxAir_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimFireFoxAir_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimFireFoxAir_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimFireFoxAir_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimFireFoxAir_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimFireFoxAir_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimFireFoxAir_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimFireFoxAir_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimFireFoxAir_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimFireFoxAir_joint26, /* [25] joint 26 */
	(u32)dFTFoxAnimFireFoxAir_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimFireFoxAir_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -14),
};

/* Joint 2 */
u16 dFTFoxAnimFireFoxAir_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 960, 0,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTFoxAnimFireFoxAir_joint3[14] = {
	ftAnimSetVal(FT_ANIM_TRAX), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 268, 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 10), 0,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimFireFoxAir_joint5[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 303,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 268,
	ftAnimLoop(0x6800, -30),
};

/* Joint 6 */
u16 dFTFoxAnimFireFoxAir_joint6[22] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1571, 1, 710, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), -804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1569, -3, 705, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1571, -1, 710, 4,
	ftAnimLoop(0x6800, -40),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimFireFoxAir_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -644, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -649, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -644, 5,
	ftAnimLoop(0x6800, -30),
};

/* Joint 8 */
u16 dFTFoxAnimFireFoxAir_joint8[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimFireFoxAir_joint9[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 11 */
u16 dFTFoxAnimFireFoxAir_joint11[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimFireFoxAir_joint12[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1717, 0, 1591, 0, 2335, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1717, 0, 1590, 0, 2332, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1717, 0, 1591, 0, 2335, 3,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimFireFoxAir_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -722, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -719, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -722, -2,
	ftAnimLoop(0x6800, -30),
};

/* Joint 14 */
u16 dFTFoxAnimFireFoxAir_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimFireFoxAir_joint16[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	_FT_ANIM_CMD(11, 0, 1), 30,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimFireFoxAir_joint17[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1645, 0, -1616, 0, -1374, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1646, 0, -1616, 0, -1379, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1645, 0, -1616, 0, -1374, 5,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimFireFoxAir_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -5,
	ftAnimLoop(0x6800, -30),
};

/* Joint 21 */
u16 dFTFoxAnimFireFoxAir_joint21[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 68, 0, -2, 0, 490, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 67, 1, -2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 456, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 68, 0, -2, 0, 490, 11,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimFireFoxAir_joint22[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1655, 0, 1580, 0, -2437, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1654, 0, 1581, 0, -2432, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1655, 0, 1580, 0, -2437, -5,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimFireFoxAir_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 926, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 929, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 926, -3,
	ftAnimLoop(0x6800, -30),
};

/* Joint 25 */
u16 dFTFoxAnimFireFoxAir_joint25[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1503, 1, 1591, 0, 1525, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1504, -1, 1591, 0, 1525, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1503, -1, 1591, 0, 1525, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimFireFoxAir_joint26[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -555, -30, 13, 0, 21, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -555, 13, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -555, -27, 13, 0, 21, 0,
	ftAnimLoop(0x6800, -42),
};

/* Joint 27 */
u16 dFTFoxAnimFireFoxAir_joint27[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 14, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 168, -38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -194, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 168, 38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 0, 0,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
	0x0000, 0x0000,
};
