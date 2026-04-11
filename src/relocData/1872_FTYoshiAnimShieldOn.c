/* AnimJoint data for relocData file 1872 (FTYoshiAnimShieldOn) */
/* 912 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimShieldOn_joint2[16];
extern u16 dFTYoshiAnimShieldOn_joint3[24];
extern u16 dFTYoshiAnimShieldOn_joint4[20];
extern u16 dFTYoshiAnimShieldOn_joint5[20];
extern u16 dFTYoshiAnimShieldOn_joint7[14];
extern u16 dFTYoshiAnimShieldOn_joint8[30];
extern u16 dFTYoshiAnimShieldOn_joint9[16];
extern u16 dFTYoshiAnimShieldOn_joint11[10];
extern u16 dFTYoshiAnimShieldOn_joint12[32];
extern u16 dFTYoshiAnimShieldOn_joint13[16];
extern u16 dFTYoshiAnimShieldOn_joint14[14];
extern u16 dFTYoshiAnimShieldOn_joint15[14];
extern u16 dFTYoshiAnimShieldOn_joint16[12];
extern u16 dFTYoshiAnimShieldOn_joint18[12];
extern u16 dFTYoshiAnimShieldOn_joint19[30];
extern u16 dFTYoshiAnimShieldOn_joint21[16];
extern u16 dFTYoshiAnimShieldOn_joint23[24];
extern u16 dFTYoshiAnimShieldOn_joint24[34];
extern u16 dFTYoshiAnimShieldOn_joint26[46];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTYoshiAnimShieldOn_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTYoshiAnimShieldOn_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimShieldOn_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimShieldOn_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimShieldOn_joint5, /* [4] joint 5 */
	(u32)dFTYoshiAnimShieldOn_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTYoshiAnimShieldOn_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimShieldOn_joint9, /* [8] joint 9 */
	(u32)dFTYoshiAnimShieldOn_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTYoshiAnimShieldOn_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimShieldOn_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimShieldOn_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimShieldOn_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimShieldOn_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimShieldOn_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTYoshiAnimShieldOn_joint19, /* [18] joint 19 */
	(u32)dFTYoshiAnimShieldOn_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTYoshiAnimShieldOn_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTYoshiAnimShieldOn_joint24, /* [23] joint 24 */
	(u32)dFTYoshiAnimShieldOn_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	0xFFFF00D5, /* [26] END */
};

/* 4-byte alignment padding */
static u32 dFTYoshiAnimShieldOn_pad[1] = { 0 };

/* Joint 2 */
u16 dFTYoshiAnimShieldOn_joint2[16] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 672,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 914, 164,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimShieldOn_joint3[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -19, -89, -1, 30, -40, 20, 21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -965, -80, 0, 9, -359, 38, 53, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimShieldOn_joint4[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 16, 32,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1251, 28, 0, 4, 0, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTYoshiAnimShieldOn_joint5[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 600, 329,
	ftAnimSetValRate(FT_ANIM_ROTX), 78, 15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 305, -41,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 382, 253,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimShieldOn_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 48, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 0, 58,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTYoshiAnimShieldOn_joint8[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1718, -52, -1476, 10, 1256, 84,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1829, 124, -1471, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1451, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1431, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, 221, -1608, -136, 1532, 100,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTYoshiAnimShieldOn_joint9[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -764, -207,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1248, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1188, 60,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimShieldOn_joint11[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -68,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimShieldOn_joint12[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -145, 14, -103, 26, -219, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 54, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -8, 106, -136, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 82, 4, -207, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -82, 0, -54, -75, 131,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimShieldOn_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1002, -144,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1275, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1188, 87,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimShieldOn_joint14[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -68,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimShieldOn_joint15[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -536, -893,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 156, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 804, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTYoshiAnimShieldOn_joint16[12] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -190, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -713, 51,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimShieldOn_joint18[12] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -153, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -527, 55,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTYoshiAnimShieldOn_joint19[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, 1, 5, 0, -3, 105,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1, 0, 5, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 340, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 534, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -1, 0, -5, 647, 113,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimShieldOn_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 262, 120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 698, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 742, 43,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimShieldOn_joint23[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1602, -3, -83, 8, -263, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1612, 0, -23, 25, -465, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, 4, 0, 23, -429, 36,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimShieldOn_joint24[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -1, 0, 1, -154, 122,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 0, 0, 4, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -32, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 252, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 500, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0, -4, 647, 146,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimShieldOn_joint26[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 378, 103,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 718, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 742, 23,
	ftAnimEnd(),
	0x0000, 0x200E, 0xF9B9, 0xFFFE, 0xFFA7, 0x000B, 0xFF1C, 0xFFB0, 0x200F, 0x0003, 0xF9B3, 0x0001, 0xFFEA, 0x0019, 0xFE3D, 0xFFF5, 0x200F, 0x0001, 0xF9B8, 0x0005, 0x0000, 0x0016, 0xFE53, 0x0016, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
