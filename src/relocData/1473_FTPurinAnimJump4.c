/* AnimJoint data for relocData file 1473 (FTPurinAnimJump4) */
/* 1840 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimJump4_joint1[22];
extern u16 dFTPurinAnimJump4_joint2[14];
extern u16 dFTPurinAnimJump4_joint3[44];
extern u16 dFTPurinAnimJump4_joint5[16];
extern u16 dFTPurinAnimJump4_joint6[100];
extern u16 dFTPurinAnimJump4_joint7[14];
extern u16 dFTPurinAnimJump4_joint9[16];
extern u16 dFTPurinAnimJump4_joint10[102];
extern u16 dFTPurinAnimJump4_joint11[24];
extern u16 dFTPurinAnimJump4_joint13[46];
extern u16 dFTPurinAnimJump4_joint14[100];
extern u16 dFTPurinAnimJump4_joint16[8];
extern u16 dFTPurinAnimJump4_joint18[134];
extern u16 dFTPurinAnimJump4_joint19[98];
extern u16 dFTPurinAnimJump4_joint21[138];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTPurinAnimJump4_joints[] = {
	(u32)dFTPurinAnimJump4_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimJump4_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimJump4_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimJump4_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPurinAnimJump4_joint6, /* [5] joint 6 */
	(u32)dFTPurinAnimJump4_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimJump4_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTPurinAnimJump4_joint10, /* [9] joint 10 */
	(u32)dFTPurinAnimJump4_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimJump4_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPurinAnimJump4_joint14, /* [13] joint 14 */
	(u32)dFTPurinAnimJump4_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPurinAnimJump4_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTPurinAnimJump4_joint19, /* [18] joint 19 */
	(u32)dFTPurinAnimJump4_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF018E, /* [21] END */
};

/* Joint 1 */
u16 dFTPurinAnimJump4_joint1[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 600, 0, 5324, 5324, 5324,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 5324, 5324, 5324,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -6, -4, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPurinAnimJump4_joint2[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -268, 0, 0, -312, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPurinAnimJump4_joint3[44] = {
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
u16 dFTPurinAnimJump4_joint5[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -310, -380, 237,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 50), 178, -144, -737, 238,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPurinAnimJump4_joint6[100] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY), 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 806, -64, -1738, 0, -1887, 1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAZ), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1895, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), -1707, 8,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 50), 3072, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 945, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 998, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1727, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1895, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1623, -4,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1756, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 1921, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1628, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -1787, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1809, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -2227, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1697, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1582, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1952, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 2310, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2317, 6, -1580, 1, -2231, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPurinAnimJump4_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 49), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPurinAnimJump4_joint9[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 284, -420, 282,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 50), -178, 69, -722, 238,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPurinAnimJump4_joint10[102] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY), 4096, 4095,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 782, 91, -183, -3, -279, 1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAZ), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -306, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), -211, 7,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 50), 3072, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 626, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 553, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -177, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -306, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -77, -12,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -198, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -255, -28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -91, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -303, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -323, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -683, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -200, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -108, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -291, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -754, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -761, -7, -110, -1, -686, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPurinAnimJump4_joint11[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPurinAnimJump4_joint13[46] = {
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
u16 dFTPurinAnimJump4_joint14[100] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 92, -6, -155, 0, -84, 16,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -283, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 48), -260, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 233, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 706, -43,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -313, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -39, 22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 658, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 56, 77,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -18, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 294, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 337, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 134, -14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 137, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 369, 13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 121, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 114, -4, -264, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 112, -2, -265, -1, 376, 6,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimJump4_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPurinAnimJump4_joint18[134] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -57, -2, -420, 9, -3215, 3,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2457, 2457, 2457,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 2457, 0, 2457, 1, 2457, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 31), -3267, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 33), -37, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -227, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -203, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -40, -45,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 3686, 3686, 3686,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -88, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -577, -28,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3268, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -3007, 59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -26, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -147, 32,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -603, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -330, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2961, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -3070, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -119, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -209, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -248, 71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -108, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3082, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3092, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -213, -3, -104, 4, -3096, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTPurinAnimJump4_joint19[98] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -95, 6, 163, 0, -81, 16,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 342, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 49), 318, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 236, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 260, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 709, -40,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 379, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 57, -30,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 664, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 48, 76,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 29, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -426, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -475, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -220, 20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 127, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 349, 13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -203, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -190, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -189, 0, 318, 0, 351, 2,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimJump4_joint21[138] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x280E, 0xF3C1, 0x0002, 0x01CA, 0xFFF7, 0x001E, 0x0002, 0x3F00, 0x0999, 0x0999, 0x0999, 0x2F01, 0x0014, 0x0999, 0x0000, 0x0999, 0x0000, 0x0999, 0x0001, 0x2803, 0x0020, 0xF432, 0x0007, 0x2809, 0x0022, 0x00AF, 0x0028, 0x2005, 0x000A, 0x0111, 0xFFF0, 0x2005, 0x0001, 0x00FD, 0xFFE9, 0x2805, 0x000B, 0x001A, 0x0036, 0x0801, 0x0009, 0x4701, 0x001E, 0x0E66, 0x0E66, 0x0E66, 0x0801, 0x0002, 0x2005, 0x0001, 0x0054, 0x003A, 0x2805, 0x0011, 0x027D, 0xFFFB, 0x0801, 0x0009, 0x2003, 0x0001, 0xF43B, 0x000D, 0x2803, 0x0008, 0xF479, 0xFFD0, 0x0801, 0x0001, 0x2009, 0x0001, 0x00DC, 0x0030, 0x2809, 0x0006, 0x0111, 0xFFCD, 0x0801, 0x0005, 0x2005, 0x0001, 0x026B, 0xFFD4, 0x2805, 0x0005, 0x009C, 0xFFCD, 0x200B, 0x0001, 0xF44B, 0xFFE2, 0x00DC, 0xFFD7, 0x280B, 0x0007, 0xF491, 0x0004, 0x00B9, 0xFFFF, 0x0801, 0x0004, 0x2005, 0x0001, 0x0074, 0xFFE1, 0x2005, 0x0002, 0x0051, 0xFFF9, 0x200F, 0x0001, 0xF493, 0x0002, 0x004E, 0xFFFD, 0x00B5, 0xFFFC, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
