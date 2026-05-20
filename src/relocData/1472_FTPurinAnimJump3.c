/* AnimJoint data for relocData file 1472 (FTPurinAnimJump3) */
/* 1904 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimJump3_joint1[22];
extern u16 dFTPurinAnimJump3_joint2[14];
extern u16 dFTPurinAnimJump3_joint3[44];
extern u16 dFTPurinAnimJump3_joint5[16];
extern u16 dFTPurinAnimJump3_joint6[100];
extern u16 dFTPurinAnimJump3_joint7[24];
extern u16 dFTPurinAnimJump3_joint9[16];
extern u16 dFTPurinAnimJump3_joint10[102];
extern u16 dFTPurinAnimJump3_joint11[24];
extern u16 dFTPurinAnimJump3_joint13[46];
extern u16 dFTPurinAnimJump3_joint14[100];
extern u16 dFTPurinAnimJump3_joint16[22];
extern u16 dFTPurinAnimJump3_joint18[132];
extern u16 dFTPurinAnimJump3_joint19[98];
extern u16 dFTPurinAnimJump3_joint21[14];
extern u16 dFTPurinAnimJump3_joint22[134];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTPurinAnimJump3_joints[] = {
	(AObjEvent32 *)dFTPurinAnimJump3_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPurinAnimJump3_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPurinAnimJump3_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPurinAnimJump3_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTPurinAnimJump3_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTPurinAnimJump3_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPurinAnimJump3_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTPurinAnimJump3_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPurinAnimJump3_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPurinAnimJump3_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTPurinAnimJump3_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTPurinAnimJump3_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTPurinAnimJump3_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTPurinAnimJump3_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTPurinAnimJump3_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTPurinAnimJump3_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTPurinAnimJump3_joint1[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 600, 0, 5734, 5734, 5734,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 5734, 5734, 5734,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -6, -4, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPurinAnimJump3_joint2[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -268, 0, 0, -312, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPurinAnimJump3_joint3[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_SCAY), 0, 0, 4096, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAY, 30), 4096, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 130, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 237,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 20, 0,
	ftAnimBlock(0, 13),
	ftAnimSetVal0RateT(FT_ANIM_SCAY, 20), 4096,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 108, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), 268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPurinAnimJump3_joint5[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -310, -380, 237,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 50), 178, -144, -737, 238,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPurinAnimJump3_joint6[100] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY), 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 808, -84, -1747, 2, -1880, 1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAZ), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1889, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), -1697, 11,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 50), 3072, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 887, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 934, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1752, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1888, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1608, -5,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1780, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 1953, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1616, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -1751, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1764, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -2228, -7,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1686, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1585, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1998, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 2310, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2317, 6, -1580, 5, -2231, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPurinAnimJump3_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -5, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 43), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPurinAnimJump3_joint9[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 284, -420, 282,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 50), -178, 69, -722, 238,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPurinAnimJump3_joint10[102] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY), 4096, 4095,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 780, 123, -194, -3, -271, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAZ), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -297, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), -214, 8,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 50), 3072, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 768, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 710, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -178, -34,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -299, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -56, -12,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -208, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -254, -27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -70, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -253, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -267, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -683, -5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -204, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -108, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -290, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -754, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -761, -7, -107, 1, -685, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPurinAnimJump3_joint11[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 40), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPurinAnimJump3_joint13[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 858, -339, -2090,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 106, -21, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 334, -62, -513, -4, -1630, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -394, -40, -424, 1, -1362, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -478, 8, -492, 14, -1036, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -233, -1, -144, 37, -1176, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -501, 264, -1427,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimJump3_joint14[100] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 92, -5, -155, 0, -84, 13,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -284, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 48), -259, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 229, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 257, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 709, -40,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -312, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -40, 21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 661, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 60, 79,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -19, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 295, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 337, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 134, -13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 141, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 369, 13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 123, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 114, -4, -264, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 114, 0, -264, 0, 372, 2,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimJump3_joint16[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 34), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 14), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPurinAnimJump3_joint18[132] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -51, -1, -420, 9, -12, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2457, 2457, 2457,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 2457, 0, 2457, 1, 2457, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), -89, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 34), -57, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -226, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -203, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -40, -45,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 3686, 3686, 3686,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -87, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -579, -29,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -80, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -138, -40,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -32, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 237, -22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -606, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -331, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -170, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -136, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 210, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 124, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -249, 71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -108, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -158, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -209, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -213, -3, -104, 4, 116, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTPurinAnimJump3_joint19[98] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -95, 6, 163, 0, -81, 16,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 342, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 49), 317, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 236, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 264, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 709, -41,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 379, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 59, -31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 661, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 48, 76,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 27, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -428, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -474, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -220, 21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 130, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 345, 13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -203, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -193, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -189, 3, 318, 0, 351, 6,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimJump3_joint21[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 49), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPurinAnimJump3_joint22[134] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3142, 1, 459, -9, 16, 3,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2457, 2457, 2457,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 2457, 0, 2457, 0, 2457, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), -3048, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 34), 157, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 273, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 253, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 26, 54,
	ftAnimBlock(0, 9),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 3686, 3686, 3686,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 84, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 641, -6,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3041, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2893, 11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 201, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 255, -47,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2892, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3001, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 622, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 156, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 212, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 182, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2979, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2927, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 116, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 81, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2925, 2, 78, -3, 181, 0,
	ftAnimEnd(),
	0x0000,
};
