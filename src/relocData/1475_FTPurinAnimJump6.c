/* AnimJoint data for relocData file 1475 (FTPurinAnimJump6) */
/* 1600 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimJump6_joint1[22];
extern u16 dFTPurinAnimJump6_joint2[10];
extern u16 dFTPurinAnimJump6_joint3[30];
extern u16 dFTPurinAnimJump6_joint5[10];
extern u16 dFTPurinAnimJump6_joint6[72];
extern u16 dFTPurinAnimJump6_joint7[16];
extern u16 dFTPurinAnimJump6_joint9[10];
extern u16 dFTPurinAnimJump6_joint10[68];
extern u16 dFTPurinAnimJump6_joint11[14];
extern u16 dFTPurinAnimJump6_joint13[8];
extern u16 dFTPurinAnimJump6_joint14[102];
extern u16 dFTPurinAnimJump6_joint16[24];
extern u16 dFTPurinAnimJump6_joint18[118];
extern u16 dFTPurinAnimJump6_joint19[104];
extern u16 dFTPurinAnimJump6_joint21[20];
extern u16 dFTPurinAnimJump6_joint22[128];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTPurinAnimJump6_joints[] = {
	(u32)dFTPurinAnimJump6_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimJump6_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimJump6_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimJump6_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPurinAnimJump6_joint6, /* [5] joint 6 */
	(u32)dFTPurinAnimJump6_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimJump6_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTPurinAnimJump6_joint10, /* [9] joint 10 */
	(u32)dFTPurinAnimJump6_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimJump6_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPurinAnimJump6_joint14, /* [13] joint 14 */
	(u32)dFTPurinAnimJump6_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPurinAnimJump6_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTPurinAnimJump6_joint19, /* [18] joint 19 */
	(u32)dFTPurinAnimJump6_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPurinAnimJump6_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTPurinAnimJump6_joint1[22] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4505, 4505, 4505,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 4505, 4505, 4505,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 4096, -83, 4096, -83, 4096, -84,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPurinAnimJump6_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -268, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPurinAnimJump6_joint3[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 130, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), 20, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 108, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 268, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPurinAnimJump6_joint5[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -310, -380, 237,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPurinAnimJump6_joint6[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 802, 0, -1720, 0, -1900, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 842, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 49), -1715, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1942, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1930, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1873, -34,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 838, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 793, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1911, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -1944, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1925, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1853, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 799, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 818, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 818, 0, -1714, 1, -1853, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimJump6_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), -8, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPurinAnimJump6_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 284, -420, 282,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPurinAnimJump6_joint10[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 793, 0, -162, 0, -311, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 753, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 49), -161, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -354, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -342, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -283, -34,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 756, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 802, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -321, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -335, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 796, -4, -320, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 777, 0, -263, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 777, 0, -159, 1, -264, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimJump6_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), -8, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 1,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPurinAnimJump6_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 975, 82, 41,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPurinAnimJump6_joint14[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 92, -5, -155, 0, -84, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -186, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 37), -206, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 218, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 241, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 615, -54,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -198, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 50, 12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 556, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -166, -12,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 62, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 129, 20,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -219, -14, -175, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -160, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -429, -2,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 153, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 244, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -191, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -211, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 242, -1, -430, -1, -209, 2,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimJump6_joint16[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPurinAnimJump6_joint18[118] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -69, -4, -420, 9, -3187, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3112, 3112, 3112,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 3112, 0, 3112, 0, 3112, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), -3031, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 32), -219, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -237, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -216, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -150, -34,
	ftAnimBlock(0, 8),
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 4096, 196, 4096, 193, 4096, 193,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -186, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -323, 19,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3012, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -3202, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -226, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -273, -73,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -306, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -382, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3221, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2853, 43,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -352, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -491, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -510, -19, -372, 10, -2827, 26,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimJump6_joint19[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -95, 5, 163, 0, -81, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 224, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 38), 264, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 217, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 244, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 618, -52,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 239, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -47, -15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 558, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -164, -12,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -62, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -122, -5,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -173, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -160, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 277, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 431, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -138, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -241, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -186, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -206, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -1, 430, -1, -209, -2,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimJump6_joint21[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 32), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 16), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPurinAnimJump6_joint22[128] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 95, 3, 457, -9, 59, -1,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3112, 3112, 3112,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 3112, 0, 3112, 0, 3112, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), 256, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 288, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 276, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 259, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 147, 41,
	ftAnimBlock(0, 9),
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 4096, 193, 4096, 195, 4096, 196,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 189, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 340, -27,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 286, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 79, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 310, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 268, 69,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 315, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 380, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 40, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 303, 73,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 345, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 489, 41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 365, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 510, 20, 372, -8, 389, 24,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
