/* AnimJoint data for relocData file 1474 (FTPurinAnimJump5) */
/* 1824 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimJump5_joint1[22];
extern u16 dFTPurinAnimJump5_joint2[14];
extern u16 dFTPurinAnimJump5_joint3[44];
extern u16 dFTPurinAnimJump5_joint5[16];
extern u16 dFTPurinAnimJump5_joint6[94];
extern u16 dFTPurinAnimJump5_joint7[14];
extern u16 dFTPurinAnimJump5_joint9[16];
extern u16 dFTPurinAnimJump5_joint10[88];
extern u16 dFTPurinAnimJump5_joint11[24];
extern u16 dFTPurinAnimJump5_joint13[46];
extern u16 dFTPurinAnimJump5_joint14[100];
extern u16 dFTPurinAnimJump5_joint16[22];
extern u16 dFTPurinAnimJump5_joint18[118];
extern u16 dFTPurinAnimJump5_joint19[98];
extern u16 dFTPurinAnimJump5_joint21[24];
extern u16 dFTPurinAnimJump5_joint22[128];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTPurinAnimJump5_joints[] = {
	(AObjEvent32 *)dFTPurinAnimJump5_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPurinAnimJump5_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPurinAnimJump5_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPurinAnimJump5_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTPurinAnimJump5_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTPurinAnimJump5_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPurinAnimJump5_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTPurinAnimJump5_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPurinAnimJump5_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPurinAnimJump5_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTPurinAnimJump5_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTPurinAnimJump5_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTPurinAnimJump5_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTPurinAnimJump5_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTPurinAnimJump5_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTPurinAnimJump5_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTPurinAnimJump5_joint1[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 600, 0, 4915, 4915, 4915,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 4915, 4915, 4915,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -6, -4, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPurinAnimJump5_joint2[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -268, 0, 0, -312, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPurinAnimJump5_joint3[44] = {
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
u16 dFTPurinAnimJump5_joint5[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -310, -380, 237,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 50), 178, -144, -737, 238,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPurinAnimJump5_joint6[94] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY), 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -43, -1729, 0, -1894, 1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAZ), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), -1704, 8,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 50), 3072, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 1003, 55, -1902, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1066, 70, -1899, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1630, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 1731, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1756, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 1952, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1638, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -1786, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1811, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -2227, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1695, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1582, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1997, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 2310, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2317, 6, -1580, 1, -2231, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPurinAnimJump5_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 49), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPurinAnimJump5_joint9[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 284, -420, 282,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 50), -178, 69, -722, 238,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPurinAnimJump5_joint10[88] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY), 4096, 4095,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 785, 58, -171, -3, -287, 1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAZ), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), -204, 7,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 50), 3072, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 484, -76, -311, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 402, -87, -313, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), -192, -8, -89, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -200, -6, -103, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -255, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -271, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -287, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -683, -5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -196, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -108, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -291, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -754, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -761, -7, -106, 1, -685, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPurinAnimJump5_joint11[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPurinAnimJump5_joint13[46] = {
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
u16 dFTPurinAnimJump5_joint14[100] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 92, -5, -155, 0, -84, 13,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -283, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 48), -259, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 233, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 709, -40,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -313, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -40, 22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 661, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 60, 80,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -18, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 294, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 337, 27,
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
u16 dFTPurinAnimJump5_joint16[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 14), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPurinAnimJump5_joint18[118] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -63, -2, -420, 9, -3201, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2457, 2457, 2457,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 2457, 0, 2457, 1, 2457, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 33), -45, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 34), -3243, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -227, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -203, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -40, -45,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 3686, 3686, 3686,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -88, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -575, -27,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -36, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -157, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3219, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2962, -32,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -600, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -330, 93,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -124, 17, -2994, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -209, -7, -3092, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -248, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -108, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -213, -4, -104, 4, -3100, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTPurinAnimJump5_joint19[98] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -96, 8, 163, 0, -85, 20,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 342, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 49), 317, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 232, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 264, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 709, -40,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 379, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 59, -31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 664, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 48, 75,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 27, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -428, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -475, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -220, 21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 127, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 345, 13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -203, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -193, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -189, 3, 318, 0, 351, 6,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimJump5_joint21[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPurinAnimJump5_joint22[128] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3128, 2, 458, -9, 41, 6,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2457, 2457, 2457,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 2457, 0, 2457, 0, 2457, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 33), -3003, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), 290, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 272, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 253, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 26, 54,
	ftAnimBlock(0, 9),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 3686, 3686, 3686,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 84, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 632, -4,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2982, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2935, -52,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 336, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 189, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 615, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 156, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2987, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2927, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 190, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 182, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 116, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 81, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2925, 2, 78, -3, 181, -1,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
