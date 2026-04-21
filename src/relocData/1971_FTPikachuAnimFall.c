/* AnimJoint data for relocData file 1971 (FTPikachuAnimFall) */
/* 1040 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimFall_joint1[12];
extern u16 dFTPikachuAnimFall_joint2[32];
extern u16 dFTPikachuAnimFall_joint3[32];
extern u16 dFTPikachuAnimFall_joint5[12];
extern u16 dFTPikachuAnimFall_joint6[30];
extern u16 dFTPikachuAnimFall_joint7[20];
extern u16 dFTPikachuAnimFall_joint8[20];
extern u16 dFTPikachuAnimFall_joint9[12];
extern u16 dFTPikachuAnimFall_joint10[20];
extern u16 dFTPikachuAnimFall_joint11[20];
extern u16 dFTPikachuAnimFall_joint13[12];
extern u16 dFTPikachuAnimFall_joint14[30];
extern u16 dFTPikachuAnimFall_joint16[20];
extern u16 dFTPikachuAnimFall_joint17[30];
extern u16 dFTPikachuAnimFall_joint19[20];
extern u16 dFTPikachuAnimFall_joint21[30];
extern u16 dFTPikachuAnimFall_joint22[30];
extern u16 dFTPikachuAnimFall_joint24[20];
extern u16 dFTPikachuAnimFall_joint25[30];
extern u16 dFTPikachuAnimFall_joint26[36];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimFall_joints[] = {
	(u32)dFTPikachuAnimFall_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimFall_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimFall_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimFall_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimFall_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimFall_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimFall_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimFall_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimFall_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimFall_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimFall_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimFall_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimFall_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimFall_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimFall_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimFall_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimFall_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimFall_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimFall_joint25, /* [24] joint 25 */
	(u32)dFTPikachuAnimFall_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimFall_joint1[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 62, 37, -22, 0, 1114, -108,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimFall_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1003, -149, 120,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1031, -13, -154, 2, 114, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 936, -4, -137, 0, 134, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1003, -149, 120,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimFall_joint3[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -173, 58, -73,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -223, 10, 45, 1, -110, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -108, 8, 68, 2, -25, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -173, 58, -73,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimFall_joint5[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 155, -47, 495,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimFall_joint6[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 844, 3, 137, 0, -904, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 854, 0, 139, 0, -865, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 839, -4, 142, 0, -921, -18,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 839, 142, -921,
	ftAnimLoop(0x6800, -58),
};

/* Joint 7 */
u16 dFTPikachuAnimFall_joint7[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 3,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimFall_joint8[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -464, -174, -53,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -404, -176, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -464, -174, -53,
	ftAnimLoop(0x6800, -38),
};

/* Joint 9 */
u16 dFTPikachuAnimFall_joint9[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 40, -29, 2414, 5, 29, 491,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimFall_joint10[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -201, 52, 117,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -163, 201, 227,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -201, 52, 117,
	ftAnimLoop(0x6800, -38),
};

/* Joint 11 */
u16 dFTPikachuAnimFall_joint11[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -166, -144, -146,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -124, -182, -205,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -166, -144, -146,
	ftAnimLoop(0x6800, -38),
};

/* Joint 13 */
u16 dFTPikachuAnimFall_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1, 0, 0, -368, 238, 333,
	ftAnimBlock(0, 8),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimFall_joint14[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 494, 6, 1462, -2, 635, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 513, -1, 1454, 2, 682, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 485, -9, 1476, 7, 610, -23,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 485, 1476, 610,
	ftAnimLoop(0x6800, -58),
};

/* Joint 16 */
u16 dFTPikachuAnimFall_joint16[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 3,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimFall_joint17[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1756, 0, -1542, 0, 770, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1753, 6, -1543, -4, 770, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1718, 11, -1571, -9, 808, 12,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1718, -1571, 808,
	ftAnimLoop(0x6800, -58),
};

/* Joint 19 */
u16 dFTPikachuAnimFall_joint19[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 710, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 712, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 717, 1,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 717,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPikachuAnimFall_joint21[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1691, 2, 1475, 2, 1759, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1697, -3, 1482, 4, 1799, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1668, -9, 1500, 5, 1795, -1,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1668, 1500, 1795,
	ftAnimLoop(0x6800, -58),
};

/* Joint 22 */
u16 dFTPikachuAnimFall_joint22[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 262, 0, 302, 0, -1189, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 262, -11, 301, -1, -1187, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 194, -22, 294, -2, -1168, 6,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 194, 294, -1168,
	ftAnimLoop(0x6800, -58),
};

/* Joint 24 */
u16 dFTPikachuAnimFall_joint24[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 549, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 549, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 587, 12,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 587,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimFall_joint25[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -250, -37, -248, 32, 292, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -362, -9, -151, 22, 302, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -306, 18, -113, 12, 266, -12,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -306, -113, 266,
	ftAnimLoop(0x6800, -58),
};

/* Joint 26 */
u16 dFTPikachuAnimFall_joint26[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -405, 252, -432,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -446, 4, 219, 3, -463, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -383, 6, 267, 5, -414, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -405, 252, -432,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
