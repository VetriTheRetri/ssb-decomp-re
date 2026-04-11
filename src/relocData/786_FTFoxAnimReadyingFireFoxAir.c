/* AnimJoint data for relocData file 786 (FTFoxAnimReadyingFireFoxAir) */
/* 912 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimReadyingFireFoxAir_joint1[8];
extern u16 dFTFoxAnimReadyingFireFoxAir_joint2[12];
extern u16 dFTFoxAnimReadyingFireFoxAir_joint3[14];
extern u16 dFTFoxAnimReadyingFireFoxAir_joint5[16];
extern u16 dFTFoxAnimReadyingFireFoxAir_joint6[26];
extern u16 dFTFoxAnimReadyingFireFoxAir_joint7[16];
extern u16 dFTFoxAnimReadyingFireFoxAir_joint8[12];
extern u16 dFTFoxAnimReadyingFireFoxAir_joint9[16];
extern u16 dFTFoxAnimReadyingFireFoxAir_joint11[12];
extern u16 dFTFoxAnimReadyingFireFoxAir_joint12[26];
extern u16 dFTFoxAnimReadyingFireFoxAir_joint13[16];
extern u16 dFTFoxAnimReadyingFireFoxAir_joint14[12];
extern u16 dFTFoxAnimReadyingFireFoxAir_joint16[14];
extern u16 dFTFoxAnimReadyingFireFoxAir_joint17[26];
extern u16 dFTFoxAnimReadyingFireFoxAir_joint19[16];
extern u16 dFTFoxAnimReadyingFireFoxAir_joint21[26];
extern u16 dFTFoxAnimReadyingFireFoxAir_joint22[26];
extern u16 dFTFoxAnimReadyingFireFoxAir_joint24[16];
extern u16 dFTFoxAnimReadyingFireFoxAir_joint25[26];
extern u16 dFTFoxAnimReadyingFireFoxAir_joint26[66];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimReadyingFireFoxAir_joints[] = {
	(u32)dFTFoxAnimReadyingFireFoxAir_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimReadyingFireFoxAir_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimReadyingFireFoxAir_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimReadyingFireFoxAir_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimReadyingFireFoxAir_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimReadyingFireFoxAir_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimReadyingFireFoxAir_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimReadyingFireFoxAir_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimReadyingFireFoxAir_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimReadyingFireFoxAir_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimReadyingFireFoxAir_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimReadyingFireFoxAir_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimReadyingFireFoxAir_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimReadyingFireFoxAir_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimReadyingFireFoxAir_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimReadyingFireFoxAir_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimReadyingFireFoxAir_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimReadyingFireFoxAir_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimReadyingFireFoxAir_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimReadyingFireFoxAir_joint26, /* [25] joint 26 */
	0xFFFF00D3, /* [26] END */
};

/* Joint 1 */
u16 dFTFoxAnimReadyingFireFoxAir_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -14),
};

/* Joint 2 */
u16 dFTFoxAnimReadyingFireFoxAir_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 960, 0,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTFoxAnimReadyingFireFoxAir_joint3[14] = {
	ftAnimSetVal(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 5 */
u16 dFTFoxAnimReadyingFireFoxAir_joint5[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -214,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -178,
	ftAnimLoop(0x6800, -30),
};

/* Joint 6 */
u16 dFTFoxAnimReadyingFireFoxAir_joint6[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -822, -3, -135, 4, 722, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -826, 5, -131, -5, 725, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -822, 3, -135, -4, 722, -3,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimReadyingFireFoxAir_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -501, -14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -515, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -501, 14,
	ftAnimLoop(0x6800, -30),
};

/* Joint 8 */
u16 dFTFoxAnimReadyingFireFoxAir_joint8[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimReadyingFireFoxAir_joint9[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -214,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -178,
	ftAnimLoop(0x6800, -30),
};

/* Joint 11 */
u16 dFTFoxAnimReadyingFireFoxAir_joint11[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimReadyingFireFoxAir_joint12[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2394, 3, 124, -3, 721, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -2390, -5, 120, 5, 725, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2394, -3, 124, 3, 721, -3,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimReadyingFireFoxAir_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -520, -13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -533, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -520, 13,
	ftAnimLoop(0x6800, -30),
};

/* Joint 14 */
u16 dFTFoxAnimReadyingFireFoxAir_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimReadyingFireFoxAir_joint16[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	_FT_ANIM_CMD(11, 0, 1), 8,
	ftAnimBlock(0, 6),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimReadyingFireFoxAir_joint17[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1762, -1, -1473, -1, -1395, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1764, 1, -1475, 1, -1384, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1762, 1, -1473, 1, -1395, -11,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimReadyingFireFoxAir_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 5,
	ftAnimLoop(0x6800, -30),
};

/* Joint 21 */
u16 dFTFoxAnimReadyingFireFoxAir_joint21[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 92, 0, -162, 7, 327, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 93, 0, -154, -10, 312, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 92, 0, -162, -7, 327, 14,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimReadyingFireFoxAir_joint22[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1763, 0, 1474, 0, -1393, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1763, -1, 1474, -1, -1387, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1763, 0, 1474, 0, -1393, -5,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimReadyingFireFoxAir_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -5,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimReadyingFireFoxAir_joint25[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1489, 0, 1421, 7, 1940, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1489, 0, 1429, -10, 1919, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1489, 0, 1421, -7, 1940, 20,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimReadyingFireFoxAir_joint26[66] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 268, 73, 0, -24,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 223,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 268, -43, 0, 1,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
	0x2806, 0x0000, 0x00F4, 0x0000, 0x0005, 0x4808, 0x0000, 0x4005, 0x0006, 0x0000, 0x2003, 0x0001, 0x00A8, 0xFFC0, 0x3803, 0x0002, 0xFF3E, 0x2003, 0x0001, 0x00A8, 0x0040, 0x2003, 0x0002, 0x0000, 0xFFF7, 0x6800, 0xFFCC, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
