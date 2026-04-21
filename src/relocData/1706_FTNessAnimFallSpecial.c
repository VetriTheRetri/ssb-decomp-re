/* AnimJoint data for relocData file 1706 (FTNessAnimFallSpecial) */
/* 896 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimFallSpecial_joint1[12];
extern u16 dFTNessAnimFallSpecial_joint2[14];
extern u16 dFTNessAnimFallSpecial_joint4[12];
extern u16 dFTNessAnimFallSpecial_joint5[32];
extern u16 dFTNessAnimFallSpecial_joint6[16];
extern u16 dFTNessAnimFallSpecial_joint7[12];
extern u16 dFTNessAnimFallSpecial_joint8[16];
extern u16 dFTNessAnimFallSpecial_joint10[12];
extern u16 dFTNessAnimFallSpecial_joint11[40];
extern u16 dFTNessAnimFallSpecial_joint12[24];
extern u16 dFTNessAnimFallSpecial_joint13[12];
extern u16 dFTNessAnimFallSpecial_joint15[12];
extern u16 dFTNessAnimFallSpecial_joint16[26];
extern u16 dFTNessAnimFallSpecial_joint18[14];
extern u16 dFTNessAnimFallSpecial_joint19[26];
extern u16 dFTNessAnimFallSpecial_joint21[16];
extern u16 dFTNessAnimFallSpecial_joint22[26];
extern u16 dFTNessAnimFallSpecial_joint24[16];
extern u16 dFTNessAnimFallSpecial_joint25[36];
extern u16 dFTNessAnimFallSpecial_joint26[22];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimFallSpecial_joints[] = {
	(u32)dFTNessAnimFallSpecial_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimFallSpecial_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimFallSpecial_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimFallSpecial_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimFallSpecial_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimFallSpecial_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimFallSpecial_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimFallSpecial_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimFallSpecial_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimFallSpecial_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimFallSpecial_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimFallSpecial_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimFallSpecial_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimFallSpecial_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimFallSpecial_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimFallSpecial_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimFallSpecial_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimFallSpecial_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimFallSpecial_joint25, /* [24] joint 25 */
	(u32)dFTNessAnimFallSpecial_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimFallSpecial_joint1[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 242, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimFallSpecial_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -501,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -209, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -460,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -501,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimFallSpecial_joint4[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 148, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimFallSpecial_joint5[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -52, -24, -436, 8, -73, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -63, 15, -433, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -26, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -58, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -52, 10, -436, -3, -73, -15,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimFallSpecial_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -484, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -488, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -484, 3,
	ftAnimLoop(0x6800, -30),
};

/* Joint 7 */
u16 dFTNessAnimFallSpecial_joint7[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 268, 143, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimFallSpecial_joint8[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 271,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 300, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 245,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 271,
	ftAnimLoop(0x6800, -30),
};

/* Joint 10 */
u16 dFTNessAnimFallSpecial_joint10[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimFallSpecial_joint11[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 159, 13, 517, -4, -109, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 515, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 163, 24, -104, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 174, 1, -91, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 165, -7, -101, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 159, -6, 517, 1, -109, -7,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimFallSpecial_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, 18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -96, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -176, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, -5,
	ftAnimLoop(0x6800, -46),
};

/* Joint 13 */
u16 dFTNessAnimFallSpecial_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -106, -233, 158, 143, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimFallSpecial_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimFallSpecial_joint16[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -225, 2, -148, 0, -511, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -224, -2, -146, -2, -528, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -225, -1, -148, -1, -511, 17,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimFallSpecial_joint18[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 19 */
u16 dFTNessAnimFallSpecial_joint19[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1362, -4, 1635, 0, -1309, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1372, 10, 1632, 6, -1332, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1362, 9, 1635, 2, -1309, 22,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimFallSpecial_joint21[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -439,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 74, 35, 126, -82, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -505,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -439,
	ftAnimLoop(0x6800, -30),
};

/* Joint 22 */
u16 dFTNessAnimFallSpecial_joint22[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 256, -1, 231, -3, -535, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 253, 2, 227, 5, -556, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 256, 2, 231, 3, -535, 20,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimFallSpecial_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 25 */
u16 dFTNessAnimFallSpecial_joint25[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -332, 9, -194, -7, 434, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -325, -3, 439, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -332, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -366, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -219, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -332, -7, -194, 25, 434, -4,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimFallSpecial_joint26[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -458,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -120, -123, -126, -82, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -545,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -458,
	ftAnimLoop(0x6800, -30),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
