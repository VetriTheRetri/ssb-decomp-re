/* AnimJoint data for relocData file 1664 (FTNessAnimEggLay) */
/* 3632 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimEggLay_joint1[36];
extern u16 dFTNessAnimEggLay_joint2[8];
extern u16 dFTNessAnimEggLay_joint4[22];
extern u16 dFTNessAnimEggLay_joint5[368];
extern u16 dFTNessAnimEggLay_joint6[168];
extern u16 dFTNessAnimEggLay_joint7[12];
extern u16 dFTNessAnimEggLay_joint8[52];
extern u16 dFTNessAnimEggLay_joint10[12];
extern u16 dFTNessAnimEggLay_joint11[384];
extern u16 dFTNessAnimEggLay_joint12[120];
extern u16 dFTNessAnimEggLay_joint13[56];
extern u16 dFTNessAnimEggLay_joint15[12];
extern u16 dFTNessAnimEggLay_joint16[114];
extern u16 dFTNessAnimEggLay_joint18[48];
extern u16 dFTNessAnimEggLay_joint19[52];
extern u16 dFTNessAnimEggLay_joint21[30];
extern u16 dFTNessAnimEggLay_joint22[102];
extern u16 dFTNessAnimEggLay_joint24[48];
extern u16 dFTNessAnimEggLay_joint25[120];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimEggLay_joints[] = {
	(u32)dFTNessAnimEggLay_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimEggLay_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimEggLay_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimEggLay_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimEggLay_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimEggLay_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimEggLay_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimEggLay_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimEggLay_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimEggLay_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimEggLay_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimEggLay_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimEggLay_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimEggLay_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimEggLay_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimEggLay_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimEggLay_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimEggLay_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimEggLay_joint25, /* [24] joint 25 */
	0xFFFF037C, /* [25] END */
};

/* Joint 1 */
u16 dFTNessAnimEggLay_joint1[36] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -16, 537, -28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 30), 470, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 30), -8, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), -16, 537, -28,
	ftAnimSetValRateT(FT_ANIM_TRAY, 30), 470, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 30), -8, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), -16, 537, -28,
	ftAnimLoop(0x6800, -70),
};

/* Joint 2 */
u16 dFTNessAnimEggLay_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -360, 8,
	ftAnimBlock(0, 120),
	ftAnimLoop(0x6800, -14),
};

/* Joint 4 */
u16 dFTNessAnimEggLay_joint4[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 30), 634,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 30), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 30), 634,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 30), 0,
	ftAnimLoop(0x6800, -42),
};

/* Joint 5 */
u16 dFTNessAnimEggLay_joint5[368] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -410, 0, -261, -1, 415, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -199, 68, 109, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -414, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -445, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -484, 19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -126, 73, 29, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 86, 16, -177, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 93, 0, -463, 21, -166, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -177, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -413, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 161, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 183, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 217, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -183, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -179, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 236, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 299, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -412, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -373, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -181, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -149, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -119, 5, -377, 3, 248, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -151, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -334, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 269, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 281, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 294, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -163, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -226, -32,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -334, 6, 285, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 354, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -284, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -264, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -344, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 371, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 322, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -273, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -435, -26,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 291, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -52, -67,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -301, 48, -461, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 86, 16, -484, 19,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -117, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 130, 35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 93, 0, -463, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -177, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -413, 1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 161, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 217, 16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -183, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -179, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 236, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 299, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -412, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -373, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -181, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -149, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -119, 5, -377, 3, 248, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -150, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -350, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 268, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 277, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 269, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -160, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -185, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -194, -26, -351, 7, 261, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -268, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -265, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 305, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 327, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 399, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -293, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -403, -12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 411, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -410, -6, -261, 4, 415, 4,
	ftAnimLoop(0x6800, -732),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimEggLay_joint6[168] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -682, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -690, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -759, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -795, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -836, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -805, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -406, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -354, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -115, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -61, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -159, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -214, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -473, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -496, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -689, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -696, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -759, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -795, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -836, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -805, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -406, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -354, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -115, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -97, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -159, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -259, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -337, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -455, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -18,
	ftAnimLoop(0x6800, -332),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimEggLay_joint7[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 120),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimEggLay_joint8[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, 364, -3, -32, 4,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 30), 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), -221, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 36, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 45), -3, 0,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 354, 0, -24, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 86, 0, -218, 0, -136, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -10, 0, 364, 0, -32, 9,
	ftAnimLoop(0x6800, -102),
};

/* Joint 10 */
u16 dFTNessAnimEggLay_joint10[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 120),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimEggLay_joint11[384] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -415, 10, 569, 2, -119, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 548, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -257, 74, 71, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -177, 80, 165, 94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 449, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 95, 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 516, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 288, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 519, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 116, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 225, 21,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 262, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 202, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 538, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 524, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 247, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 379, -3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 228, 27, 499, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 396, 10, 382, 14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 376, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 398, -33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 405, 8, 400, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 538, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 449, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 421, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 95, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 362, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -14, -35,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 538, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 572, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -50, -36, 73, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -280, -60, -52, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -341, -54, -86, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -12, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -291, 67,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 569, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 539, -26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 63, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 424, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -217, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 74, 31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 509, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 262, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 456, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 538, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 101, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 225, 21,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 237, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 228, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 557, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 442, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 247, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 379, -3,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 257, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 405, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 413, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 400, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 376, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 398, -33,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 413, 8, 421, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 538, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 421, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 362, -38, 390, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 21, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 95, -23,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 538, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 572, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -14, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -294, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 72, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -86, -28,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 580, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 572, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -354, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -398, -30, -110, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -415, -16, 569, -3, -119, -8,
	ftAnimLoop(0x6800, -764),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimEggLay_joint12[120] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -459, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -414, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -243, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -274, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -526, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -539, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -439, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -435, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -715, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -745, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -775, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -760, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -606, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -578, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -455, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -423, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -274, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -320, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -540, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -530, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -454, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -490, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -766, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -779, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -687, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -663, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -570, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 11,
	ftAnimLoop(0x6800, -238),
};

/* Joint 13 */
u16 dFTNessAnimEggLay_joint13[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 54, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 73, 0, 73, 0, 1, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 104, 0, 17, 0, 312, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 90, 0, 54, 1, 126, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 73, 0, 73, 0, 1, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 104, 0, 17, 0, 312, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 90, 54, 126,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimEggLay_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 120),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimEggLay_joint16[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -365, 0, -279, 0, -297, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 37), -443, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 39), -288, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 34), -370, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -369, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 32), -296, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -437, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), -316, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -292, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), -349, 3,
	ftAnimBlock(0, 26),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -321, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 31), -437, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -301, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 37), -337, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -346, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 32), -296, -4,
	ftAnimBlock(0, 29),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -431, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -298, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -301, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -365, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -332, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), -280, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, 0, -279, 0, -297, 0,
	ftAnimLoop(0x6800, -224),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimEggLay_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 396, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), 690, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 697, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), 453, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 440, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 475, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 489, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), 678, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 669, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 397, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -1,
	ftAnimLoop(0x6800, -94),
};

/* Joint 19 */
u16 dFTNessAnimEggLay_joint19[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, 0, 12, 0, 26, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 119), 5, 0, 12, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), -121, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -119, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), 7, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), -104, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -99, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 25, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 0, 12, 0, 26, 0,
	ftAnimLoop(0x6800, -100),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimEggLay_joint21[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -259, 442, -102,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -437, 391, -95,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -259, 442, -102,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -437, 391, -95,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -259, 442, -102,
	ftAnimLoop(0x6800, -58),
};

/* Joint 22 */
u16 dFTNessAnimEggLay_joint22[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -127, 0, 136, 0, -210, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 41), -168, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 45), 144, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), -305, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -303, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), -227, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -165, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 32), -151, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 143, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 60), 143, 0,
	ftAnimBlock(0, 21),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -232, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 35), -281, 4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -154, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), -154, 2,
	ftAnimBlock(0, 28),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -277, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -211, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -151, 2, 142, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), -127, 0, 136, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, 0, 136, 0, -210, 0,
	ftAnimLoop(0x6800, -200),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimEggLay_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 407, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), 630, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 633, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), 430, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 422, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 616, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 622, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 471, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 460, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 408, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -1,
	ftAnimLoop(0x6800, -94),
};

/* Joint 25 */
u16 dFTNessAnimEggLay_joint25[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 76, 0, 25, 0, -202, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 41), 115, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 119), 25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), -331, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -327, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), -218, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 112, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 34), 104, 2,
	ftAnimBlock(0, 24),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -223, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 32), -318, 5,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 107, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 97, -2,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -312, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -202, 1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 95, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 76, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, 0, 25, 0, -202, 0,
	ftAnimLoop(0x6800, -172),
	ftAnimEnd(),
	0x400E, 0xFF74, 0x011B, 0xFF4A, 0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x380F, 0x001E, 0xFFCB, 0x00C0, 0xFFB4, 0x380F, 0x001E, 0xFF74, 0x011B, 0xFF4A, 0x380F, 0x001E, 0xFFCB, 0x00C0, 0xFFB4, 0x380F, 0x001E, 0xFF74, 0x011B, 0xFF4A, 0x6800, 0xFFC6, 0x0000, 0x0000,
};
