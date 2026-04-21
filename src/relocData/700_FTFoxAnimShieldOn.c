/* AnimJoint data for relocData file 700 (FTFoxAnimShieldOn) */
/* 912 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimShieldOn_joint2[10];
extern u16 dFTFoxAnimShieldOn_joint3[20];
extern u16 dFTFoxAnimShieldOn_joint5[18];
extern u16 dFTFoxAnimShieldOn_joint6[40];
extern u16 dFTFoxAnimShieldOn_joint7[24];
extern u16 dFTFoxAnimShieldOn_joint8[12];
extern u16 dFTFoxAnimShieldOn_joint9[20];
extern u16 dFTFoxAnimShieldOn_joint11[10];
extern u16 dFTFoxAnimShieldOn_joint12[38];
extern u16 dFTFoxAnimShieldOn_joint13[24];
extern u16 dFTFoxAnimShieldOn_joint14[12];
extern u16 dFTFoxAnimShieldOn_joint16[10];
extern u16 dFTFoxAnimShieldOn_joint17[24];
extern u16 dFTFoxAnimShieldOn_joint19[16];
extern u16 dFTFoxAnimShieldOn_joint21[24];
extern u16 dFTFoxAnimShieldOn_joint22[24];
extern u16 dFTFoxAnimShieldOn_joint24[16];
extern u16 dFTFoxAnimShieldOn_joint25[24];
extern u16 dFTFoxAnimShieldOn_joint26[16];
extern u16 dFTFoxAnimShieldOn_joint27[18];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimShieldOn_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTFoxAnimShieldOn_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimShieldOn_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimShieldOn_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimShieldOn_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimShieldOn_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimShieldOn_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimShieldOn_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimShieldOn_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimShieldOn_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimShieldOn_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimShieldOn_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimShieldOn_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimShieldOn_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimShieldOn_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimShieldOn_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimShieldOn_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimShieldOn_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimShieldOn_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimShieldOn_joint26, /* [25] joint 26 */
	(u32)dFTFoxAnimShieldOn_joint27, /* [26] joint 27 */
};

/* 4-byte alignment padding */
static u32 dFTFoxAnimShieldOn_pad[1] = { 0 };

/* Joint 2 */
u16 dFTFoxAnimShieldOn_joint2[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, 912, -20,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 60, 900, 60,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTFoxAnimShieldOn_joint3[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), -141, -338, -3, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -60, -26, 0, 342,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -321, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimShieldOn_joint5[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -27, -268, -52, 0, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimShieldOn_joint6[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1718, 276, -1442, 211, 1867, -439,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1442, 305, -1231, 77, 1427, -512,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1107, 146, -1287, 14, 842, -423,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1149, -84, -1202, 63, 580, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1276, -126, -1159, 42, 555, -24,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimShieldOn_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 79,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -479, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -533, -533,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimShieldOn_joint8[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 269, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -424,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimShieldOn_joint9[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 136, -72,
	ftAnimSetValRate(FT_ANIM_ROTX), -113, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 0, 23, 0, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 536,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimShieldOn_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimShieldOn_joint12[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 132, -320, 271, -152, 336, -757,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -361, -75, 30, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -420, -506,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -676, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -337, -30, -77, 29, -580, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -423, -85, 88, 166, -277, 303,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimShieldOn_joint13[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, 594,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -146, -344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -696, -549,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTFoxAnimShieldOn_joint14[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 272, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 536,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimShieldOn_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimShieldOn_joint17[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -405, 8, -223, -16, -26, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -289, 59, -266, 4, -307, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, 47, -256, 10, -360, -52,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimShieldOn_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, 38,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 523, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 567, 43,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimShieldOn_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 20, 0, 125, 2, -56, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 19, -5, 76, -37, -80, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 13, -6, 43, -32, -105, -24,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimShieldOn_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 355, -11, 137, 17, 134, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 269, -34, 208, 17, -68, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 242, -27, 220, 12, -82, -14,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimShieldOn_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 331, 53,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 548, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 561, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimShieldOn_joint25[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1565, 1, -1505, -7, -1835, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1544, 19, -1569, -28, -1946, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1519, 24, -1592, -23, -1960, -14,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimShieldOn_joint26[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 219,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 178, 110, 0, -33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTFoxAnimShieldOn_joint27[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -178, -122,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 625, -51, 0, 18,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
