/* AnimJoint data for relocData file 1980 (FTPikachuAnimSleep) */
/* 1808 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimSleep_joint1[42];
extern u16 dFTPikachuAnimSleep_joint2[24];
extern u16 dFTPikachuAnimSleep_joint3[66];
extern u16 dFTPikachuAnimSleep_joint5[34];
extern u16 dFTPikachuAnimSleep_joint6[60];
extern u16 dFTPikachuAnimSleep_joint7[24];
extern u16 dFTPikachuAnimSleep_joint8[48];
extern u16 dFTPikachuAnimSleep_joint9[12];
extern u16 dFTPikachuAnimSleep_joint10[48];
extern u16 dFTPikachuAnimSleep_joint11[48];
extern u16 dFTPikachuAnimSleep_joint13[34];
extern u16 dFTPikachuAnimSleep_joint14[64];
extern u16 dFTPikachuAnimSleep_joint16[16];
extern u16 dFTPikachuAnimSleep_joint17[64];
extern u16 dFTPikachuAnimSleep_joint19[24];
extern u16 dFTPikachuAnimSleep_joint21[58];
extern u16 dFTPikachuAnimSleep_joint22[44];
extern u16 dFTPikachuAnimSleep_joint24[16];
extern u16 dFTPikachuAnimSleep_joint25[68];
extern u16 dFTPikachuAnimSleep_joint26[58];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimSleep_joints[] = {
	(u32)dFTPikachuAnimSleep_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimSleep_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimSleep_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimSleep_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimSleep_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimSleep_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimSleep_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimSleep_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimSleep_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimSleep_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimSleep_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimSleep_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimSleep_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimSleep_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimSleep_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimSleep_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimSleep_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimSleep_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimSleep_joint25, /* [24] joint 25 */
	(u32)dFTPikachuAnimSleep_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimSleep_joint1[42] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 701, 236,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, 33, -28,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 688, -3, 154, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 30), 88,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 0, -23, 675, 0, 89, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 689, 3, 160, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 30), -85,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 0, 701, 236,
	ftAnimLoop(0x6800, -80),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimSleep_joint2[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, 0, -85, 0, 31, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), -216, -9, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), -75, -85, 31,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimSleep_joint3[66] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 41, 14,
	ftAnimSetValRate(FT_ANIM_ROTX), 161, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 156, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 43, 0, 6, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 60, 0, -37, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 26), 78, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 32), 0, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 45, 0, 8, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 89, 3, 30, 0, 49, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 41, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 24), 160, 1,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 160,
	ftAnimLoop(0x6800, -128),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimSleep_joint5[34] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 293, 7, -193, 2, 415, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 60), 220, -6, -160, 1, 425, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 215, 9, -173, -4, 418, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 293, -193, 415,
	ftAnimLoop(0x6800, -66),
};

/* Joint 6 */
u16 dFTPikachuAnimSleep_joint6[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, 159, -2, -307, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 117), 804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), -147, 13, -128, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -99, 16, -162, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 66), 248, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 54), -352, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -346, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -302, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 214, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 166, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 804, 0, 158, -2, -305, -1,
	ftAnimLoop(0x6800, -116),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimSleep_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 66), 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 48), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 8 */
u16 dFTPikachuAnimSleep_joint8[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 185, -4, 17,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 210, -1, -1, 0, -2, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 107, -3, 7, 0, -48, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, 0, 0, 0, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 110, 3, -8, 0, 48, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 185, -4, 17,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimSleep_joint9[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 120),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimSleep_joint10[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 501, 129, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 662, -4, 246, -3, 93, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 253, -7, -33, -3, -100, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 183, 2, 42, 1, -67, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 397, 7, 67, 2, 122, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 501, 129, 126,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimSleep_joint11[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 24, 168, 58,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 76, 0, 148, -1, 23, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -23, -3, 97, 0, -109, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -130, 0, 137, 1, -26, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -14, 3, 175, 0, 65, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 24, 168, 58,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimSleep_joint13[34] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -218, 0, -175, 3, 468, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 60), -228, -9, -150, -3, 425, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), -320, 1, -214, -3, 414, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), -218, -175, 468,
	ftAnimLoop(0x6800, -66),
};

/* Joint 14 */
u16 dFTPikachuAnimSleep_joint14[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 803, 0, 1875, 0, 1280, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 54), 1194, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 117), 803, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 51), 1787, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1786, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 48), 1491, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1199, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), 1465, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1444, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 1290, -4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1573, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), 1858, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 803, 0, 1875, 5, 1281, -3,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimSleep_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 117), -10, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 17 */
u16 dFTPikachuAnimSleep_joint17[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1767, 0, -1555, -1, 1856, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 69), -1678, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 81), 1695, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 54), -1481, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1470, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 57), -1542, -4,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1673, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 45), -1766, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1711, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 33), 1854, 1,
	ftAnimBlock(0, 30),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1552, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1767, 0, -1555, -1, 1856, 0,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimSleep_joint19[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 446, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 72), 767, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 747, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 42), 451, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 446, -1,
	ftAnimLoop(0x6800, -46),
};

/* Joint 21 */
u16 dFTPikachuAnimSleep_joint21[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -68, 0, 115, 0, -398, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 96), 128, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 117), -399, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 54), 4, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -6, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 51), -97, 4,
	ftAnimBlock(0, 39),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 123, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 115, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -86, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -70, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -68, 0, 115, 0, -398, 0,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimSleep_joint22[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, -2, 18, -1, -254, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 117), 18, 0, -255, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 45), -88, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -69, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 60), 46, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 26, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -5, -1, 18, 0, -254, 0,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimSleep_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 885, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 117), 885, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 885, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 25 */
u16 dFTPikachuAnimSleep_joint25[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 30, 1, 8, 1, -299, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 81), -231, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 93), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 48), 167, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 154, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 57), -13, 5,
	ftAnimBlock(0, 30),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -239, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 33), -299, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 0, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 7, 0,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 3, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 26, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 30, 1, 8, 0, -299, 0,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimSleep_joint26[58] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -262, 0, 341, 0, 20, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -208, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 318, -1, 33, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), 233, 0, -59, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 45), -235, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -319, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 257, 2, -76, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -262, 341, 20,
	ftAnimLoop(0x6800, -102),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
