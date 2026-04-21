/* AnimJoint data for relocData file 480 (FTPikachuAnimDollPickUp) */
/* 1728 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimDollPickUp_joint1[10];
extern u16 dFTPikachuAnimDollPickUp_joint2[74];
extern u16 dFTPikachuAnimDollPickUp_joint3[24];
extern u16 dFTPikachuAnimDollPickUp_joint4[18];
extern u16 dFTPikachuAnimDollPickUp_joint6[8];
extern u16 dFTPikachuAnimDollPickUp_joint7[60];
extern u16 dFTPikachuAnimDollPickUp_joint8[46];
extern u16 dFTPikachuAnimDollPickUp_joint10[40];
extern u16 dFTPikachuAnimDollPickUp_joint11[58];
extern u16 dFTPikachuAnimDollPickUp_joint12[92];
extern u16 dFTPikachuAnimDollPickUp_joint14[8];
extern u16 dFTPikachuAnimDollPickUp_joint15[66];
extern u16 dFTPikachuAnimDollPickUp_joint17[32];
extern u16 dFTPikachuAnimDollPickUp_joint18[60];
extern u16 dFTPikachuAnimDollPickUp_joint20[32];
extern u16 dFTPikachuAnimDollPickUp_joint22[34];
extern u16 dFTPikachuAnimDollPickUp_joint23[60];
extern u16 dFTPikachuAnimDollPickUp_joint25[32];
extern u16 dFTPikachuAnimDollPickUp_joint26[42];
extern u16 dFTPikachuAnimDollPickUp_joint27[14];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimDollPickUp_joints[] = {
	(u32)dFTPikachuAnimDollPickUp_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimDollPickUp_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimDollPickUp_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimDollPickUp_joint4, /* [3] joint 4 */
	(u32)dFTPikachuAnimDollPickUp_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPikachuAnimDollPickUp_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimDollPickUp_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimDollPickUp_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTPikachuAnimDollPickUp_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimDollPickUp_joint12, /* [11] joint 12 */
	(u32)dFTPikachuAnimDollPickUp_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPikachuAnimDollPickUp_joint15, /* [14] joint 15 */
	(u32)dFTPikachuAnimDollPickUp_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPikachuAnimDollPickUp_joint18, /* [17] joint 18 */
	(u32)dFTPikachuAnimDollPickUp_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTPikachuAnimDollPickUp_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPikachuAnimDollPickUp_joint23, /* [22] joint 23 */
	(u32)dFTPikachuAnimDollPickUp_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTPikachuAnimDollPickUp_joint26, /* [25] joint 26 */
	(u32)dFTPikachuAnimDollPickUp_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTPikachuAnimDollPickUp_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimDollPickUp_joint2[74] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 58, -7, 335, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 0, -11, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 58, -7, 335,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 85), 8, -131, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 45), 58, 0, -7, 0, 335, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -67, -1, 53, 1, 213, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 9, 2, -69, 0, 149, 1,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, -6, 0, 117, 0, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 17, 0, -7, 6, 335, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 17, -320, -7, -245, 335, 188,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimDollPickUp_joint3[24] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1124, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -254, -1436, 12,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1124, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 95), 1124, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPikachuAnimDollPickUp_joint4[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 298, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 100), 0, 0, 0, 0, 0, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPikachuAnimDollPickUp_joint6[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 324, -62, 313,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPikachuAnimDollPickUp_joint7[60] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 68, 0, 2391, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 804,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 80), 2391, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 78), 82, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 86, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -116, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2400, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 2622, -42,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -117, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -47, 85,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2574, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 2390, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 68, 115, 2391, 1,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimDollPickUp_joint8[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -46, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 38), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 34), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -155, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -264, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -601, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -294, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -46, 247,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimDollPickUp_joint10[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 181, 136,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 234, -2, 1, 0, -1, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -51, -11, 1, -1, -1, 4,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimDollPickUp_joint11[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 25, -259, 336, 255, 354, 43,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 149), 255, -1, 354, -4, 43, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 25, -2, -259, 12, 336, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -58, -1, 256, 8, 142, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), -58, 8, 256, 0, 142, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 386, 4, 270, 0, 408, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 72, 6, 286, 0, 314, 5,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPikachuAnimDollPickUp_joint12[92] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 360, 128, -145, -255, 354, 43,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 70), -255, 1, 354, -3, 43, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 360, 128, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 360, -23, 128, -10, -145, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -230, -15, -131, 0, -132, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -357, 1, 97, 0, -314, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -133, 21, -139, -2, 85, 6,
	ftAnimBlock(0, 10),
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), -234, 3, 317, -1, 88, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 292, 0, 15, 2, -121, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -134, -32, -68, 19, 62, -13,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 60), -219, -1, 335, 2, 41, -3,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPikachuAnimDollPickUp_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -324, -62, 313,
	ftAnimBlock(0, 100),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTPikachuAnimDollPickUp_joint15[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2352, 0, 1801, 0, 825, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 81), 1803, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 80), -2352, -4, 825, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2359, -11, 834, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1041, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -2482, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1806, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1824, -15,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1000, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 830, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2449, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -2356, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2352, 4, 1801, -22, 825, -4,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimDollPickUp_joint17[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 47), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPikachuAnimDollPickUp_joint18[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1745, 0, -1514, 0, 443, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 91), 1742, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 97), -1502, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 82), 445, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 448, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 454, -5,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1746, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1757, -10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1505, -3, 450, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1509, -4, 447, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1745, -12, -1514, -5, 443, -3,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPikachuAnimDollPickUp_joint20[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 616, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 80), 616, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 623, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 675, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 652, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 619, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 616, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPikachuAnimDollPickUp_joint22[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1619, 0, -1709, 0, 2028, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 99), -1702, 0, 2088, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 90), -1576, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1578, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -1618, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, 9, -1701, 0, 2088, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPikachuAnimDollPickUp_joint23[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 0, -94, 0, -912, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 91), -1, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 96), -112, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 82), -910, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -906, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -888, -5,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 9, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -111, 2, -892, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -102, 6, -902, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4, -4, -94, 8, -912, -9,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimDollPickUp_joint25[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 364, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 79), 364, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 364, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 388, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 363, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 345, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 364, 19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTPikachuAnimDollPickUp_joint26[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 166, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -3038, 525,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 99), -2986, 0, 488, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 80), 152, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 155, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 159, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 147, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 140, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 148, 8, -2986, 0, 488, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTPikachuAnimDollPickUp_joint27[14] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -289, 467, -1566,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -180, -360,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 100), -288, 467, -1566,
	ftAnimEnd(),
};
