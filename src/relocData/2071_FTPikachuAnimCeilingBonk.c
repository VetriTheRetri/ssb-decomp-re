/* AnimJoint data for relocData file 2071 (FTPikachuAnimCeilingBonk) */
/* 1088 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimCeilingBonk_joint1[20];
extern u16 dFTPikachuAnimCeilingBonk_joint2[54];
extern u16 dFTPikachuAnimCeilingBonk_joint3[10];
extern u16 dFTPikachuAnimCeilingBonk_joint5[10];
extern u16 dFTPikachuAnimCeilingBonk_joint6[30];
extern u16 dFTPikachuAnimCeilingBonk_joint7[18];
extern u16 dFTPikachuAnimCeilingBonk_joint8[10];
extern u16 dFTPikachuAnimCeilingBonk_joint9[10];
extern u16 dFTPikachuAnimCeilingBonk_joint10[30];
extern u16 dFTPikachuAnimCeilingBonk_joint11[30];
extern u16 dFTPikachuAnimCeilingBonk_joint13[30];
extern u16 dFTPikachuAnimCeilingBonk_joint14[30];
extern u16 dFTPikachuAnimCeilingBonk_joint16[18];
extern u16 dFTPikachuAnimCeilingBonk_joint17[30];
extern u16 dFTPikachuAnimCeilingBonk_joint19[18];
extern u16 dFTPikachuAnimCeilingBonk_joint21[30];
extern u16 dFTPikachuAnimCeilingBonk_joint22[30];
extern u16 dFTPikachuAnimCeilingBonk_joint24[18];
extern u16 dFTPikachuAnimCeilingBonk_joint25[66];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimCeilingBonk_joints[] = {
	(u32)dFTPikachuAnimCeilingBonk_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimCeilingBonk_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimCeilingBonk_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimCeilingBonk_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimCeilingBonk_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimCeilingBonk_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimCeilingBonk_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimCeilingBonk_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimCeilingBonk_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimCeilingBonk_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimCeilingBonk_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimCeilingBonk_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimCeilingBonk_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimCeilingBonk_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimCeilingBonk_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimCeilingBonk_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimCeilingBonk_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimCeilingBonk_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimCeilingBonk_joint25, /* [24] joint 25 */
	0xFFFF00FE, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimCeilingBonk_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 1114,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 62, 37, -22, 0, -108,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1114, 281,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 1185,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), 1114,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimCeilingBonk_joint2[54] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1003, -149, 120,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 732, -135, -87, 31, 166, 22,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 732, 38, -87, -8, 166, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4915, 4505, 2867,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1003, -149, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimCeilingBonk_joint3[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -173, 58, -73, 4, 309, 12,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimCeilingBonk_joint5[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 155, -47, 495,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimCeilingBonk_joint6[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 844, 34, 137, -161, -904, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 946, 2, -347, -12, -673, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 861, -28, 61, 136, -839, -55,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 861, 61, -839,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPikachuAnimCeilingBonk_joint7[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimCeilingBonk_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -464, -174, -53, -1, 194, 148,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimCeilingBonk_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 40, -29, 2414, 5, 29, 491,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimCeilingBonk_joint10[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -201, 52, 117,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -253, -25, -5, -28, -126, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -253, 7, -5, 8, -126, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -201, 52, 117,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimCeilingBonk_joint11[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -166, -144, -146,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -202, -17, -59, 42, 75, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -202, 5, -59, -12, 75, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -166, -144, -146,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimCeilingBonk_joint13[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -368, 238, 333,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -360, 30, 177, -242, 285, -193,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -360, -8, 177, 69, 285, 55,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -368, 238, 333,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimCeilingBonk_joint14[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 494, -17, 1462, -101, 635, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 443, 0, 1158, -11, 491, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 494, 16, 1393, 78, 628, 45,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 494, 1393, 628,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTPikachuAnimCeilingBonk_joint16[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 3,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimCeilingBonk_joint17[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1756, 54, -1542, -25, 770, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1593, 10, -1619, -6, 988, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1693, -33, -1580, 12, 804, -61,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1693, -1580, 804,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTPikachuAnimCeilingBonk_joint19[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 710, 48,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 857, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 754, -34,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 754,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPikachuAnimCeilingBonk_joint21[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1691, -36, 1475, 15, 1759, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1580, -9, 1521, 4, 1562, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1634, 17, 1505, -5, 1708, 48,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1634, 1505, 1708,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPikachuAnimCeilingBonk_joint22[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 262, -9, 302, -5, -1189, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 233, -18, 286, 0, -799, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 152, -27, 300, 4, -1192, -130,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 152, 300, -1192,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTPikachuAnimCeilingBonk_joint24[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 549, 70,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 760, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 663, -32,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 663,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimCeilingBonk_joint25[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -250, 14, -248, 67, 292, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -205, 4, -47, 12, 170, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -220, -5, -171, -41, 251, 26,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -220, -171, 251,
	ftAnimEnd(),
	0x0000, 0x400E, 0xFE6B, 0x00FC, 0xFE50, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x200F, 0x0001, 0x00A5, 0x011D, 0x0074, 0xFFBC, 0x0086, 0x011B, 0x200F, 0x0001, 0x00A5, 0xFFAF, 0x0074, 0x0013, 0x0086, 0xFFB0, 0x380F, 0x0006, 0xFE6B, 0x00FC, 0xFE50, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
