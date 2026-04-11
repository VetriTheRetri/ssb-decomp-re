/* AnimJoint data for relocData file 372 (FTFoxAnimSelected) */
/* 2528 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimSelected_joint1[10];
extern u16 dFTFoxAnimSelected_joint2[60];
extern u16 dFTFoxAnimSelected_joint4[40];
extern u16 dFTFoxAnimSelected_joint5[118];
extern u16 dFTFoxAnimSelected_joint6[38];
extern u16 dFTFoxAnimSelected_joint7[26];
extern u16 dFTFoxAnimSelected_joint10[40];
extern u16 dFTFoxAnimSelected_joint11[106];
extern u16 dFTFoxAnimSelected_joint12[40];
extern u16 dFTFoxAnimSelected_joint15[52];
extern u16 dFTFoxAnimSelected_joint16[126];
extern u16 dFTFoxAnimSelected_joint18[62];
extern u16 dFTFoxAnimSelected_joint20[122];
extern u16 dFTFoxAnimSelected_joint21[124];
extern u16 dFTFoxAnimSelected_joint23[32];
extern u16 dFTFoxAnimSelected_joint24[124];
extern u16 dFTFoxAnimSelected_joint25[92];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimSelected_joints[] = {
	(u32)dFTFoxAnimSelected_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimSelected_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimSelected_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimSelected_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimSelected_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimSelected_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimSelected_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimSelected_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimSelected_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimSelected_joint15, /* [12] joint 15 */
	0x00000000, /* [13] NULL */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimSelected_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimSelected_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimSelected_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimSelected_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimSelected_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimSelected_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimSelected_joint25, /* [24] joint 25 */
	0xFFFF0257, /* [25] END */
};

/* Joint 1 */
u16 dFTFoxAnimSelected_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1072, 0, 48, 912, -20,
	ftAnimBlock(0, 120),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimSelected_joint2[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -141, 2, -338, -15, -3, 0, 0, 7, 0, 12, 0, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), -70, 0, -789, 0, -23, 0, 22, 0, 38, 0, 73, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY, 70), -70, -23, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 63), -789, 0, 22, 0, 73, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 7), -927, -5, 16, -1, 76, 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ, 20), -927, 16, 76,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY, 20), -70, -23, 38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimSelected_joint4[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, -7, 156, -4, 81, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 94, 0, 30, 0, 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 63), 94, 0, 30, 0, 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 66, -1, 31, 0, -3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 66, 0, 31, 0, -3, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimSelected_joint5[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -109, 18, -165, -7, 258, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 154, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 226, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -290, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -310, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -81, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 106, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -174, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 280, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 601, -4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -200, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -386, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -31, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 359, 3,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 597, -2, -395, -5,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 12), -398,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 25), 595,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 359, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 88), 359, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -398, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 77), -398, 0,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 595, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 64), 595, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 595, 0, -398, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 359,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimSelected_joint6[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -43,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -828, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -837, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -755, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -716, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -342, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 88), -342, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -342, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimSelected_joint7[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -21, 0, 24, 0, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -576, 0, 676, 0, -409, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 70), -576, 676, -409,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -576, 676, -409,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimSelected_joint10[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 3, 136, -6, -72, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -15, 0, -46, 0, -3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 63), -15, 0, -46, 0, -3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -167, -5, -499, -16, 64, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -167, 0, -499, 0, 64, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimSelected_joint11[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1475, 0, -1880, 7, -1271, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -1732, -46, -1430, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -1870, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1867, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1546, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1780, -47, -1483, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -2043, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1982, 3,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1482, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1306, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2045, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -2072, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1975, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -1952, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1306, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 89), -1306, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2072, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 84), -2072, 0,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1952, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 72), -1952, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2072, 0, -1306, 0, -1952, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimSelected_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, -49,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -729, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -669, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -295, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -280, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -306, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -306, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 87), -306, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -306, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimSelected_joint15[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 2, 0, -5, 0, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -314, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 118, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 218, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 213, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -446, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 56, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 115, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 70), 56, -446, 115,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 56, -446, 115,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimSelected_joint16[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -405, 5, -223, 0, -26, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 32), 146, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), -402, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 25), -129, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -125, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -117, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 146, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 59), 146, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -402, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 55), -402, 0,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -117, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), -117, 0,
	ftAnimBlock(0, 39),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -402, -9, 146, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 238, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -535, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -116, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -60, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -31, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -25, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 240, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 239, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -535, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -535, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), -28, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -535, 0, -31, -2, 238, -1,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimSelected_joint18[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 189, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 183, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 171, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 171, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 45), 171, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 171, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 60, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 5,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTFoxAnimSelected_joint20[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 46, -10, 125, -18, -56, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 36), -43, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 58), -84, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), -71, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -71, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 67), -75, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -43, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 55), -43, 0,
	ftAnimBlock(0, 21),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -84, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 34), -84, 1,
	ftAnimBlock(0, 33),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -43, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -59, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -75, -1, -81, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -105, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -30, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -61, 1, 2, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -62, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 3, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 2, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -106, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -102, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -61, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -55, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -102, 0, -55, 0, 0, -3,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimSelected_joint21[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 355, 1, 137, 2, 134, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 159, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 31), -3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 26), 459, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 463, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), 470, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 159, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 62), 159, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 60), -3, 0,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 470, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 37), 468, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 468, -10, 159, -1, -3, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -62, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 123, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 384, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 368, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 354, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -62, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -60, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 123, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 125, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 354, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 349, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 349, 0, 125, 0, -60, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimSelected_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), 219, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 217, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 40), 215, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 215, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 50), 215, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 215, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimSelected_joint24[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, 0, -102, 8, -226, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -57, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 33), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 19), -70, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -78, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -142, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -59, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 57), -58, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 60), -9, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -142, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 56), -140, 0,
	ftAnimBlock(0, 48),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -58, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -72, -3,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -140, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -150, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 6, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -161, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -167, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -75, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -74, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -171, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), -158, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -74, 0, -157, 0, 6, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimSelected_joint25[92] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 219, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), -542, -203, 277,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 57), -665, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 385, 610, 264,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 385, 610, 264,
	ftAnimEnd(),
	0x0000, 0x380E, 0x0000, 0x0000, 0x0000, 0x200F, 0x001B, 0x0037, 0xFFF8, 0x0145, 0xFFFB, 0x0002, 0x0005, 0x200F, 0x0015, 0xFE56, 0xFFF8, 0xFEE6, 0xFFF5, 0x010B, 0x0003, 0x200F, 0x0016, 0xFECB, 0x0006, 0xFF54, 0xFFFF, 0x00A3, 0xFFFE, 0x200F, 0x000E, 0xFF38, 0x000D, 0xFEBD, 0xFFF7, 0x00A0, 0xFFF9, 0x200F, 0x0009, 0x0000, 0x0021, 0xFE79, 0x000F, 0x0000, 0xFFF9, 0x2807, 0x000C, 0x01F0, 0x0012, 0x0000, 0x000E, 0x3809, 0x000C, 0x0000, 0x380F, 0x000F, 0x01F0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
