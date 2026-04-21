/* AnimJoint data for relocData file 708 (FTFoxAnimEggLayPulled) */
/* 944 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimEggLayPulled_joint1[12];
extern u16 dFTFoxAnimEggLayPulled_joint2[16];
extern u16 dFTFoxAnimEggLayPulled_joint3[20];
extern u16 dFTFoxAnimEggLayPulled_joint5[18];
extern u16 dFTFoxAnimEggLayPulled_joint6[30];
extern u16 dFTFoxAnimEggLayPulled_joint7[20];
extern u16 dFTFoxAnimEggLayPulled_joint8[10];
extern u16 dFTFoxAnimEggLayPulled_joint9[20];
extern u16 dFTFoxAnimEggLayPulled_joint11[10];
extern u16 dFTFoxAnimEggLayPulled_joint12[32];
extern u16 dFTFoxAnimEggLayPulled_joint13[20];
extern u16 dFTFoxAnimEggLayPulled_joint14[10];
extern u16 dFTFoxAnimEggLayPulled_joint16[10];
extern u16 dFTFoxAnimEggLayPulled_joint17[32];
extern u16 dFTFoxAnimEggLayPulled_joint19[20];
extern u16 dFTFoxAnimEggLayPulled_joint21[30];
extern u16 dFTFoxAnimEggLayPulled_joint22[30];
extern u16 dFTFoxAnimEggLayPulled_joint24[20];
extern u16 dFTFoxAnimEggLayPulled_joint25[30];
extern u16 dFTFoxAnimEggLayPulled_joint26[14];
extern u16 dFTFoxAnimEggLayPulled_joint27[14];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimEggLayPulled_joints[] = {
	(u32)dFTFoxAnimEggLayPulled_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimEggLayPulled_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimEggLayPulled_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimEggLayPulled_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimEggLayPulled_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimEggLayPulled_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimEggLayPulled_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimEggLayPulled_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimEggLayPulled_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimEggLayPulled_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimEggLayPulled_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimEggLayPulled_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimEggLayPulled_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimEggLayPulled_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimEggLayPulled_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimEggLayPulled_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimEggLayPulled_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimEggLayPulled_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimEggLayPulled_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimEggLayPulled_joint26, /* [25] joint 26 */
	(u32)dFTFoxAnimEggLayPulled_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimEggLayPulled_joint1[12] = {
	ftAnimSetVal(FT_ANIM_TRAZ), 240,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 1200,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 1), 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 360,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimEggLayPulled_joint2[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 49, -287, -20,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -240, -240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, -240, -240,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTFoxAnimEggLayPulled_joint3[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, -338, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 178, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimEggLayPulled_joint5[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 0, -162,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -178, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimEggLayPulled_joint6[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1498, 52, -1443, -29, 1867, -85,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1504, -45, -1418, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1781, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1936, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1460, -43, -1390, 27, 2026, 90,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimEggLayPulled_joint7[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -559, 552,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimEggLayPulled_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimEggLayPulled_joint9[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 136, -72,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -357, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimEggLayPulled_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimEggLayPulled_joint12[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1741, -75, 1335, 135, 1944, -163,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1712, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1471, 41, 1781, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1418, -40, 1936, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1756, 43, 1390, -27, 2026, 90,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimEggLayPulled_joint13[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, 586,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTFoxAnimEggLayPulled_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimEggLayPulled_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimEggLayPulled_joint17[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -376, 340, -207, 211, 28, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -6, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -36, 172, 4, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -31, 5, -3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -26, 4, 3, 6, 235, 241,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimEggLayPulled_joint19[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 328, -180,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 148, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 227, -251,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimEggLayPulled_joint21[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1607, 44, -1705, 81, 1558, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1563, 0, -1616, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1499, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1364, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1561, 2, -1616, 0, 1497, 132,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimEggLayPulled_joint22[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 347, -310, 123, -126, 198, -183,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 3, 0, -6, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 36, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 30, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 26, -4, -3, -6, 235, 241,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimEggLayPulled_joint24[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 290, -142,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 148, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 227, -251,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimEggLayPulled_joint25[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 44, -115, -90, 102, -209, 101,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -62, 3, 18, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -108, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -243, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -64, -2, 14, -3, -110, 133,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimEggLayPulled_joint26[14] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 219,
	ftAnimSetValAfter(FT_ANIM_ROTZ), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -178, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -178, 0,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTFoxAnimEggLayPulled_joint27[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -178, -122,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 0, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
