/* AnimJoint data for relocData file 713 (FTFoxAnimThrown1) */
/* 864 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimThrown1_joint2[8];
extern u16 dFTFoxAnimThrown1_joint3[16];
extern u16 dFTFoxAnimThrown1_joint5[14];
extern u16 dFTFoxAnimThrown1_joint6[26];
extern u16 dFTFoxAnimThrown1_joint7[16];
extern u16 dFTFoxAnimThrown1_joint8[12];
extern u16 dFTFoxAnimThrown1_joint9[16];
extern u16 dFTFoxAnimThrown1_joint11[12];
extern u16 dFTFoxAnimThrown1_joint12[26];
extern u16 dFTFoxAnimThrown1_joint13[16];
extern u16 dFTFoxAnimThrown1_joint14[12];
extern u16 dFTFoxAnimThrown1_joint16[14];
extern u16 dFTFoxAnimThrown1_joint17[36];
extern u16 dFTFoxAnimThrown1_joint19[20];
extern u16 dFTFoxAnimThrown1_joint21[26];
extern u16 dFTFoxAnimThrown1_joint22[36];
extern u16 dFTFoxAnimThrown1_joint24[20];
extern u16 dFTFoxAnimThrown1_joint25[26];
extern u16 dFTFoxAnimThrown1_joint26[12];
extern u16 dFTFoxAnimThrown1_joint27[14];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTFoxAnimThrown1_joints[] = {
	NULL, /* [0] NULL */
	(AObjEvent32 *)dFTFoxAnimThrown1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimThrown1_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTFoxAnimThrown1_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTFoxAnimThrown1_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimThrown1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimThrown1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimThrown1_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTFoxAnimThrown1_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTFoxAnimThrown1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimThrown1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimThrown1_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTFoxAnimThrown1_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTFoxAnimThrown1_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTFoxAnimThrown1_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTFoxAnimThrown1_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTFoxAnimThrown1_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTFoxAnimThrown1_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTFoxAnimThrown1_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimThrown1_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTFoxAnimThrown1_joint27, /* [26] joint 27 */
};

/* Joint 2 */
u16 dFTFoxAnimThrown1_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 840, 0,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -14),
};

/* Joint 3 */
u16 dFTFoxAnimThrown1_joint3[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 5 */
u16 dFTFoxAnimThrown1_joint5[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimThrown1_joint6[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 376, 0, 1790, -1, -304, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 377, -6, 1788, 2, -306, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 376, 0, 1790, 1, -304, 2,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimThrown1_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -340, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -347, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -340, 6,
	ftAnimLoop(0x6800, -30),
};

/* Joint 8 */
u16 dFTFoxAnimThrown1_joint8[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimThrown1_joint9[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 223,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 178,
	ftAnimLoop(0x6800, -30),
};

/* Joint 11 */
u16 dFTFoxAnimThrown1_joint11[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimThrown1_joint12[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2836, 0, -1779, 1, 2899, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 2835, 6, -1777, -2, 2897, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2836, 0, -1779, -1, 2899, 2,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimThrown1_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -368, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -374, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -368, 6,
	ftAnimLoop(0x6800, -30),
};

/* Joint 14 */
u16 dFTFoxAnimThrown1_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimThrown1_joint16[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	_FT_ANIM_CMD(11, 0, 1), 20,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimThrown1_joint17[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -31, 0, 6, 0, 127, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -32, 1, 5, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 15, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 59, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 104, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -31, 0, 6, 0, 127, 23,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimThrown1_joint19[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 75, 31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 155, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 106, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 75, -31,
	ftAnimLoop(0x6800, -38),
};

/* Joint 21 */
u16 dFTFoxAnimThrown1_joint21[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 56, 0, 9, 0, 133, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 57, 0, 9, 0, 121, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 56, 0, 9, 0, 133, 12,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimThrown1_joint22[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1640, 0, -1602, 0, -1480, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 1640, -1, -1602, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1593, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1548, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1504, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1640, 0, -1602, 0, -1480, 23,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimThrown1_joint24[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 75, 31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 155, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 106, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 75, -31,
	ftAnimLoop(0x6800, -38),
};

/* Joint 25 */
u16 dFTFoxAnimThrown1_joint25[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1684, 0, 1595, 0, 1743, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -1685, 0, 1595, 0, 1730, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1684, 0, 1595, 0, 1743, 12,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimThrown1_joint26[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 671, 0, 0, 0, -126, -96,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTFoxAnimThrown1_joint27[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 64, -450,
	ftAnimBlock(0, 10),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
	0x0000, 0x0000,
};
