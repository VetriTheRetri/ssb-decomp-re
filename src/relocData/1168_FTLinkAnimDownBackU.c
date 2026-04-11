/* AnimJoint data for relocData file 1168 (FTLinkAnimDownBackU) */
/* 2256 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimDownBackU_joint1[20];
extern u16 dFTLinkAnimDownBackU_joint2[66];
extern u16 dFTLinkAnimDownBackU_joint3[22];
extern u16 dFTLinkAnimDownBackU_joint5[36];
extern u16 dFTLinkAnimDownBackU_joint6[102];
extern u16 dFTLinkAnimDownBackU_joint7[40];
extern u16 dFTLinkAnimDownBackU_joint10[20];
extern u16 dFTLinkAnimDownBackU_joint11[74];
extern u16 dFTLinkAnimDownBackU_joint12[40];
extern u16 dFTLinkAnimDownBackU_joint13[66];
extern u16 dFTLinkAnimDownBackU_joint14[8];
extern u16 dFTLinkAnimDownBackU_joint17[38];
extern u16 dFTLinkAnimDownBackU_joint18[34];
extern u16 dFTLinkAnimDownBackU_joint19[14];
extern u16 dFTLinkAnimDownBackU_joint21[26];
extern u16 dFTLinkAnimDownBackU_joint22[80];
extern u16 dFTLinkAnimDownBackU_joint24[40];
extern u16 dFTLinkAnimDownBackU_joint26[122];
extern u16 dFTLinkAnimDownBackU_joint27[92];
extern u16 dFTLinkAnimDownBackU_joint29[126];

/* Joint pointer table (30 entries, 120 bytes) */
u32 dFTLinkAnimDownBackU_joints[] = {
	(u32)dFTLinkAnimDownBackU_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimDownBackU_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimDownBackU_joint3, /* [2] joint 3 */
	(u32)dFTLinkAnimDownBackU_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTLinkAnimDownBackU_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimDownBackU_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimDownBackU_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTLinkAnimDownBackU_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimDownBackU_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimDownBackU_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimDownBackU_joint14, /* [13] joint 14 */
	(u32)dFTLinkAnimDownBackU_joint17, /* [14] joint 17 */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	(u32)dFTLinkAnimDownBackU_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimDownBackU_joint19, /* [18] joint 19 */
	(u32)dFTLinkAnimDownBackU_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTLinkAnimDownBackU_joint22, /* [21] joint 22 */
	(u32)dFTLinkAnimDownBackU_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTLinkAnimDownBackU_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTLinkAnimDownBackU_joint27, /* [26] joint 27 */
	(u32)dFTLinkAnimDownBackU_joint29, /* [27] joint 29 */
	0x00000000, /* [28] NULL */
	0xFFFF0209, /* [29] END */
};

/* 4-byte alignment padding */
static u32 dFTLinkAnimDownBackU_pad[1] = { 0 };

/* Joint 1 */
u16 dFTLinkAnimDownBackU_joint1[20] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, -249,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 11), -970, -1262,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 14), -3712, -1382,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 11), -4200, 253,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimDownBackU_joint2[66] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -807, -102,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 152, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), -3143, -50,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 333, 0,
	ftAnimSetValT(FT_ANIM_TRAY, 6), 525,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 14), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValBlockT(FT_ANIM_TRAY, 2), 608,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 3), 682,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 3), 659,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 0, 901, 0,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -3216, 14,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTLinkAnimDownBackU_joint3[22] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -138, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 36), -107, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 29), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 276, 45,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimDownBackU_joint5[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 350, 78,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 895, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 581, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 259, 4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 166, 28, 56, 18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTLinkAnimDownBackU_joint6[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 74, -15, -472, 66, 284, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -154, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -124, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 55, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 138, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 222, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -207, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -282, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -118, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -220, 1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 271, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 457, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -287, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 40, 47,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -219, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -313, -19,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 384, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 62, -138,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 92, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 171, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, 108, -326, -13, -86, -149,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimDownBackU_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -527, 89,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -151, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -534, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -643, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -723, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -672, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -565, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 64,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimDownBackU_joint10[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -97, -3,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 7, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 21), -119, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 4, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTLinkAnimDownBackU_joint11[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 666, -1, 442, -42, 227, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 553, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -15, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 145, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 109, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 128, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 516, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 415, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -45, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -12, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 119, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 113, 9,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -13, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -41, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, 0, 123, 10, -50, -9,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimDownBackU_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -330, -16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -216, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -211, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -702, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -808, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -901, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -878, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -631, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 43,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimDownBackU_joint13[66] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -399, 61, 0, 21,
	ftAnimSetValBlock(FT_ANIM_ROTY), -179,
	ftAnimSetValT(FT_ANIM_ROTY, 10), -187,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 198, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 170, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 5, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_ROTY, 7), -193,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 87, -29,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 108, 1,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 8), -200,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 1), -201,
	ftAnimSetValT(FT_ANIM_ROTY, 4), -204,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 0, -3, 0, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValBlockT(FT_ANIM_ROTY, 1), -205,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 5), -209,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTLinkAnimDownBackU_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimDownBackU_joint17[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 1697, 15, -536, 32,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), -339,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -150, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 1845, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1828, -2,
	ftAnimBlock(0, 8),
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -491, -24,
	ftAnimBlock(0, 8),
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1697, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -536, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimDownBackU_joint18[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -899, 140, -494, 48, 377, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 147, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 17), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 24), 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 0, 20,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -163, -28,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTLinkAnimDownBackU_joint19[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 29), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -199, -33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimDownBackU_joint21[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -243, -2, 115, -11, -78, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -240, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 23), 0, 10,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTLinkAnimDownBackU_joint22[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -632, 83, -299, -134, 129, -122,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -213, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -502, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 84, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 62, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -151, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -229, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -257, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -417, 80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1, 49,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -163, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -222, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 50, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 82, 18,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -255, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -19, -244, 11, 108, 26,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimDownBackU_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 291, 277,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 782, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 856, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1005, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 951, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 677, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 635, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 345, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimDownBackU_joint26[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2290, 164, -1772, 40, 2233, -73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1786, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 2374, -152, -1774, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2183, -164, -1856, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1771, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 2127, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1608, -141,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1426, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1773, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -1521, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1453, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1355, -55,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2094, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 2043, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1322, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1388, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1358, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1420, 37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2031, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1928, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1504, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1416, -27,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1455, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1525, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1937, 9, -1446, -30, 1573, 48,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimDownBackU_joint27[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 142, -32, 208, 23, -351, -101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 255, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 116, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -718, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -698, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -337, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 256, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 298, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 134, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 294, 45,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -343, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -377, 43,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 330, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 273, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -333, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -158, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 288, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 274, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, -3, 269, -5, -125, 33,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimDownBackU_joint29[126] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 775, 111,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1079, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1076, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 725, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 751, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 598, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 547, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 441, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -16,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFE02, 0xFFF2, 0xFFE1, 0xFFF4, 0xFFF3, 0xFFDF, 0x2805, 0x000F, 0xFF43, 0xFFEF, 0x2803, 0x0012, 0xFE53, 0x0006, 0x2009, 0x0009, 0xFFC0, 0xFFDE, 0x2009, 0x0001, 0xFF9C, 0xFFE4, 0x2809, 0x000A, 0xFED5, 0xFFE5, 0x0801, 0x0005, 0x2005, 0x0001, 0xFF39, 0xFFF8, 0x2805, 0x000B, 0xFE8F, 0xFFDE, 0x0801, 0x0002, 0x2003, 0x0001, 0xFE54, 0x0002, 0x2803, 0x0008, 0xFE2E, 0xFFB5, 0x0801, 0x0001, 0x2009, 0x0001, 0xFEAA, 0xFFC9, 0x2009, 0x0006, 0xFEEF, 0x0073, 0x200F, 0x0001, 0xFDD6, 0xFFB6, 0xFE70, 0xFFEF, 0xFF73, 0x0073, 0x200F, 0x0007, 0xFE3A, 0x001B, 0xFF7F, 0x003A, 0xFFD1, 0xFFE9, 0x200F, 0x0001, 0xFE55, 0x001A, 0xFFB6, 0x0037, 0xFFBB, 0xFFEA, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
