/* AnimJoint data for relocData file 1471 (FTPurinAnimJump2) */
/* 1936 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimJump2_joint1[22];
extern u16 dFTPurinAnimJump2_joint2[14];
extern u16 dFTPurinAnimJump2_joint3[44];
extern u16 dFTPurinAnimJump2_joint5[16];
extern u16 dFTPurinAnimJump2_joint6[102];
extern u16 dFTPurinAnimJump2_joint7[14];
extern u16 dFTPurinAnimJump2_joint9[16];
extern u16 dFTPurinAnimJump2_joint10[114];
extern u16 dFTPurinAnimJump2_joint11[24];
extern u16 dFTPurinAnimJump2_joint13[46];
extern u16 dFTPurinAnimJump2_joint14[100];
extern u16 dFTPurinAnimJump2_joint16[22];
extern u16 dFTPurinAnimJump2_joint18[128];
extern u16 dFTPurinAnimJump2_joint19[98];
extern u16 dFTPurinAnimJump2_joint21[24];
extern u16 dFTPurinAnimJump2_joint22[140];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTPurinAnimJump2_joints[] = {
	(AObjEvent32 *)dFTPurinAnimJump2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPurinAnimJump2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPurinAnimJump2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPurinAnimJump2_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTPurinAnimJump2_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTPurinAnimJump2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPurinAnimJump2_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTPurinAnimJump2_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPurinAnimJump2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPurinAnimJump2_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTPurinAnimJump2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTPurinAnimJump2_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTPurinAnimJump2_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTPurinAnimJump2_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTPurinAnimJump2_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTPurinAnimJump2_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTPurinAnimJump2_joint1[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 600, 0, 6144, 6144, 6144,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 6144, 6144, 6144,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -6, -4, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPurinAnimJump2_joint2[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -268, 0, 0, -312, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPurinAnimJump2_joint3[44] = {
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
u16 dFTPurinAnimJump2_joint5[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -310, -380, 237,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 50), 178, -144, -737, 238,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPurinAnimJump2_joint6[102] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY), 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 811, -103, -1754, 0, -1873, 1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAZ), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1884, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), -1702, 11,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 50), 3072, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 832, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 874, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1775, 30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1884, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1606, -5,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1800, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 1953, 37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1614, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -1830, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1864, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -2228, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1688, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1585, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1997, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 2310, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2317, 6, -1583, 1, -2231, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPurinAnimJump2_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPurinAnimJump2_joint9[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 284, -420, 282,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 50), -178, 69, -722, 238,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPurinAnimJump2_joint10[114] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY), 4096, 4095,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 777, 157, -206, -3, -263, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAZ), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -289, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), -219, 9,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 50), 3072, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 924, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 906, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 202, -110,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -291, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -45, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 98, -97,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -226, 1,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -60, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -253, -12,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -223, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -496, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -265, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -683, -5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -208, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -108, 2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -573, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -754, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -761, -7, -106, 1, -685, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPurinAnimJump2_joint11[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPurinAnimJump2_joint13[46] = {
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
u16 dFTPurinAnimJump2_joint14[100] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 92, -5, -155, 0, -84, 13,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -283, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 48), -259, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 230, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 706, -41,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -312, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -39, 22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 658, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 60, 78,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -18, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 294, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 337, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 134, -14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 137, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 369, 13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 123, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 114, -4, -264, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 114, 0, -264, 0, 372, 2,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimJump2_joint16[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 18), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPurinAnimJump2_joint18[128] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -45, -1, -420, 9, -26, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2457, 2457, 2457,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -146, -4,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 2457, 0, 2457, 1, 2457, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 34), -72, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -226, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -202, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -40, -45,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -150, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 3686, 3686, 3686,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -87, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -581, -29,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -49, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 223, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -7, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -127, 21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -609, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -332, 94,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -108, 5, 203, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -209, -7, 123, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -249, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -108, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -213, -3, -104, 4, 116, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTPurinAnimJump2_joint19[98] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -96, 8, 163, 0, -85, 20,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 342, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 49), 317, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 236, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 260, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 709, -40,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 378, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 57, -31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 664, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 48, 75,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 27, -28,
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
u16 dFTPurinAnimJump2_joint21[24] = {
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
u16 dFTPurinAnimJump2_joint22[140] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3149, 0, 459, -9, -1, 7,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2457, 2457, 2457,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -3055, 1,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 2457, 0, 2457, 0, 2457, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 34), 139, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 273, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 253, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 26, 54,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3054, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -2935, 27,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 3686, 3686, 3686,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 84, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 645, -6,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 181, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 237, -41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2913, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -3003, 20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 625, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 156, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 200, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 182, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2979, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2927, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 116, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 81, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2925, 2, 78, -3, 181, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
