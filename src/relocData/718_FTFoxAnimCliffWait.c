/* AnimJoint data for relocData file 718 (FTFoxAnimCliffWait) */
/* 912 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimCliffWait_joint1[22];
extern u16 dFTFoxAnimCliffWait_joint2[8];
extern u16 dFTFoxAnimCliffWait_joint3[12];
extern u16 dFTFoxAnimCliffWait_joint5[22];
extern u16 dFTFoxAnimCliffWait_joint6[26];
extern u16 dFTFoxAnimCliffWait_joint7[16];
extern u16 dFTFoxAnimCliffWait_joint8[12];
extern u16 dFTFoxAnimCliffWait_joint9[12];
extern u16 dFTFoxAnimCliffWait_joint11[12];
extern u16 dFTFoxAnimCliffWait_joint12[26];
extern u16 dFTFoxAnimCliffWait_joint13[16];
extern u16 dFTFoxAnimCliffWait_joint14[12];
extern u16 dFTFoxAnimCliffWait_joint16[12];
extern u16 dFTFoxAnimCliffWait_joint17[36];
extern u16 dFTFoxAnimCliffWait_joint19[16];
extern u16 dFTFoxAnimCliffWait_joint21[26];
extern u16 dFTFoxAnimCliffWait_joint22[26];
extern u16 dFTFoxAnimCliffWait_joint24[16];
extern u16 dFTFoxAnimCliffWait_joint25[44];
extern u16 dFTFoxAnimCliffWait_joint26[12];
extern u16 dFTFoxAnimCliffWait_joint27[18];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTFoxAnimCliffWait_joints[] = {
	(AObjEvent32 *)dFTFoxAnimCliffWait_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimCliffWait_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimCliffWait_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTFoxAnimCliffWait_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffWait_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimCliffWait_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimCliffWait_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimCliffWait_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTFoxAnimCliffWait_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffWait_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimCliffWait_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimCliffWait_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTFoxAnimCliffWait_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffWait_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTFoxAnimCliffWait_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffWait_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffWait_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTFoxAnimCliffWait_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTFoxAnimCliffWait_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimCliffWait_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTFoxAnimCliffWait_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimCliffWait_joint1[22] = {
	ftAnimSetValRate(FT_ANIM_TRAX), 0, -120,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -1800, -240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 8), -60,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 8), 0, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 8), 60,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 8), 0, -120,
	ftAnimLoop(0x6800, -42),
};

/* Joint 2 */
u16 dFTFoxAnimCliffWait_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 60, 912, 0,
	ftAnimBlock(0, 32),
	ftAnimLoop(0x6800, -14),
};

/* Joint 3 */
u16 dFTFoxAnimCliffWait_joint3[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 804, -625, -804, 0, 0, 0,
	ftAnimBlock(0, 32),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimCliffWait_joint5[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 536,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 0, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 0, -8,
	ftAnimLoop(0x6800, -42),
};

/* Joint 6 */
u16 dFTFoxAnimCliffWait_joint6[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1280, 3, -428, 0, -1658, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 31), -1284, 3, -428, 0, -1651, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1280, 3, -428, 0, -1658, -7,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimCliffWait_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 31), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimCliffWait_joint8[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 32),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimCliffWait_joint9[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 446, 0, 0, 336, 0,
	ftAnimBlock(0, 32),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimCliffWait_joint11[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 32),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimCliffWait_joint12[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2117, -5, -1927, -11, 2371, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 31), 2119, 0, -1915, -10, 2378, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2117, -2, -1927, -11, 2371, -6,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimCliffWait_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -915, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), -917, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -915, 1,
	ftAnimLoop(0x6800, -30),
};

/* Joint 14 */
u16 dFTFoxAnimCliffWait_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 32),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimCliffWait_joint16[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 32),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimCliffWait_joint17[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1706, 0, -1477, 0, 1660, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 31), -1706, 0, -1477, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), 1645, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1649, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1656, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1706, 0, -1477, 0, 1660, 3,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimCliffWait_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 21 */
u16 dFTFoxAnimCliffWait_joint21[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 136, -1, -105, 0, 433, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 31), 138, -1, -106, 0, 439, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 136, -1, -105, 0, 433, -5,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimCliffWait_joint22[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1765, -1, 1619, 1, 1167, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 31), 1768, -2, 1617, 1, 1160, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1765, -2, 1619, 1, 1167, 6,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimCliffWait_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 821, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 817, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 821, 4,
	ftAnimLoop(0x6800, -30),
};

/* Joint 25 */
u16 dFTFoxAnimCliffWait_joint25[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1678, 1, 1644, 0, -1753, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 31), -1681, 3, 1645, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -1727, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1712, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -1680, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1695, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1739, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1678, 3, 1644, 0, -1753, -14,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimCliffWait_joint26[12] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY), -714, 0,
	ftAnimSetValAfter(FT_ANIM_ROTZ), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 32), -714, 0,
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTFoxAnimCliffWait_joint27[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -134, -25, 0, -1, 0, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 32), -134, 21, 0, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 32), 0,
	ftAnimLoop(0x6800, -34),
};
