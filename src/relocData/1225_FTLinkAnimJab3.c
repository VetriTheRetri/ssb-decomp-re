/* AnimJoint data for relocData file 1225 (FTLinkAnimJab3) */
/* 2704 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimJab3_joint1[66];
extern u16 dFTLinkAnimJab3_joint2[70];
extern u16 dFTLinkAnimJab3_joint4[66];
extern u16 dFTLinkAnimJab3_joint5[172];
extern u16 dFTLinkAnimJab3_joint6[48];
extern u16 dFTLinkAnimJab3_joint9[70];
extern u16 dFTLinkAnimJab3_joint10[56];
extern u16 dFTLinkAnimJab3_joint11[28];
extern u16 dFTLinkAnimJab3_joint12[8];
extern u16 dFTLinkAnimJab3_joint13[8];
extern u16 dFTLinkAnimJab3_joint16[32];
extern u16 dFTLinkAnimJab3_joint17[60];
extern u16 dFTLinkAnimJab3_joint18[62];
extern u16 dFTLinkAnimJab3_joint20[64];
extern u16 dFTLinkAnimJab3_joint21[82];
extern u16 dFTLinkAnimJab3_joint23[36];
extern u16 dFTLinkAnimJab3_joint25[78];
extern u16 dFTLinkAnimJab3_joint26[126];
extern u16 dFTLinkAnimJab3_joint28[162];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimJab3_joints[] = {
	(u32)dFTLinkAnimJab3_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimJab3_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimJab3_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimJab3_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimJab3_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimJab3_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimJab3_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimJab3_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimJab3_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimJab3_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimJab3_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimJab3_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimJab3_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimJab3_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimJab3_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimJab3_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimJab3_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimJab3_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimJab3_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF0267, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimJab3_joint1[66] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 117, -58, 761, 69, 30, -15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 117, 0, 761, 0, 30, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -58, 69, -15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 80, -17, 710, -24, 146, 54,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 80, 12, 710, 17, 45, -38,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 117, 0, 761, 0, 30, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -58, 69, -15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, -36, 901, 42, 0, -9,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, 901, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimJab3_joint2[70] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 73, 11, 138, -31, 5, 1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 73, -6, 138, -17, 5, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 36, -2, 30, -6, -20, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 36, 0, 30, 0, -20, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 73, -7, 138, 12, 5, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -107, 22, 276, -13, 0, 23,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -107, 276, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimJab3_joint4[66] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 146, -15, 290, 13, 54, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 159, 42, 349, -129, 76, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 399, 14, -486, -49, -128, -12,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 399, 0, -486, 0, -128, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, 19, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 159, -7, 349, 34, 76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 259, 3, 166, -7, 56, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 259, 166, 56,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimJab3_joint5[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 960, 590, -692, -108, -778, -598,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1061, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1551, 34, -1376, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1028, -251, -865, 235,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1030, -217, -931, 87,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1156, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 613, -117, -906, 385, -730, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 795, 91, -386, 261, -1090, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 795, 0, -382, 0, -1090, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 795, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1080, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -386, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), -386, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -386, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -851, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 823, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 882, 110, -1100, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1044, -288, -1223, 328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 305, -169, -443, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 704, 257, -931, -81, -800, -212,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 897, 73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1127, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -867, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1188, -110,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 965, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1658, 103,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1131, -11, -1306, -117,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1254, -31, -1659, -46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1751, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1863, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1888, 24, -1281, -27, -1694, -35,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimJab3_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -266, -182,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -884, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -908, 438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 454,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -257, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -417, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -551, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 50,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimJab3_joint9[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -185, 18, 0, -17, 649, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -22, -42, -159, 95, -30, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -398, -211, 479, 413, 447, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -445, -2, 667, 11, 404, -2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -445, 0, 667, 0, 404, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 13, -19, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -22, 23, -159, -34, -30, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 4, 1, 7, 6, 76, 4,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 4, 7, 76,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimJab3_joint10[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 937, 0, 174, 0, 256, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), 110, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 35), 140, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 30), 937, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 912, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 440, -31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 93, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 117, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 105, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -21, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, -24, 123, 6, -50, -28,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimJab3_joint11[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -494, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), -494, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -531, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -655, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -618, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 30,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimJab3_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimJab3_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimJab3_joint16[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2187, -586, -850,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 2187, -586, -850,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 2187, -13, -586, 1, -850, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1697, -18, -536, 1, -339, 19,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 1697, -536, -339,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimJab3_joint17[60] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -33, -224, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -33, 0, -224, 85, 25, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -31, 0, 290, 30, -6, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -31, 0, 290, 0, -6, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -13, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -33, 1, -224, -23, 25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 1, -163, 2, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, -163, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimJab3_joint18[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, -1, -455, 18, -37, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 43, -4, -292, 75, -15, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 33, -1, 0, 26, 4, 2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 33, 0, 0, 0, 4, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 41, -1, -261, -10, -12, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -1, -199, 2, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, -199, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimJab3_joint20[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, 0, 291, -1, -86, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -62, 28, 291, -26, -86, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 109, -1, 134, -19, -66, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -71, -17, 155, -6, -70, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -139, -4, 42, -9, -24, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -150, 6, 0, -2, 0, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 0, 5, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 12), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimJab3_joint21[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -176, -22, -225, -3, -157, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -148, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 36), -277, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -62, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 52, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 20, -11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -145, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -178, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 8, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 19, 36,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -176, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -200, -38,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -280, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -265, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 55, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 87, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -41, -244, 21, 108, 21,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimJab3_joint23[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 673, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 639, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 586, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 702, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 712, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 346, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 293, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimJab3_joint25[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1335, -15, -1296, -5, 1294, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), 1294, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -1363, -62, -1210, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1459, -35, -1150, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1147, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1409, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1403, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), -1295, 7,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1148, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -1363, -20,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1294, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1552, 24,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1385, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1427, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1279, 16, -1446, -18, 1573, 21,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimJab3_joint26[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1747, 56, 1389, -31, 1028, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1417, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 964, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1744, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1824, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1670, 48, 1399, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1469, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1727, -16, 930, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1726, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 947, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1483, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 1451, -8,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1717, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1693, 80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 954, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1221, 74,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1440, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1332, 11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1614, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1336, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1296, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1486, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1342, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1345, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1337, -1, 1338, -7, 1483, -3,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimJab3_joint28[162] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 630, -31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 504, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 429, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 642, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 641, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 531, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 544, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 435, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -10,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0524, 0xFFED, 0xF9A5, 0x0044, 0x05EE, 0x0023, 0x2809, 0x0005, 0x0698, 0xFFCB, 0x2007, 0x0003, 0x052E, 0x0029, 0xF9B1, 0xFFC1, 0x2007, 0x0001, 0x0562, 0xFFCA, 0xF96A, 0x002C, 0x2007, 0x0001, 0x04C1, 0xFFB3, 0xFA09, 0x003D, 0x200F, 0x0001, 0x04C8, 0xFFFB, 0xF9E6, 0xFFFA, 0x0650, 0xFFDF, 0x2803, 0x000F, 0x04BA, 0x0001, 0x2805, 0x0014, 0xF99D, 0xFFEC, 0x2009, 0x0009, 0x0699, 0x000C, 0x2009, 0x0001, 0x06A6, 0x000C, 0x2809, 0x0012, 0x0613, 0xFFF2, 0x0801, 0x0005, 0x2003, 0x0001, 0x04C7, 0x0010, 0x2803, 0x0009, 0x0516, 0xFFD8, 0x0801, 0x0004, 0x2005, 0x0001, 0xF98A, 0xFFF2, 0x2805, 0x0009, 0xFA00, 0xFFFB, 0x0801, 0x0004, 0x2003, 0x0001, 0x04F3, 0xFFE4, 0x2803, 0x0007, 0x0477, 0x000F, 0x0801, 0x0002, 0x2009, 0x0001, 0x0606, 0xFFF7, 0x2809, 0x0004, 0x05FF, 0x0002, 0x0801, 0x0001, 0x2005, 0x0001, 0xF9FA, 0xFFFD, 0x2005, 0x0002, 0xF9FA, 0x0005, 0x200F, 0x0001, 0x049C, 0x0024, 0xFA02, 0x0008, 0x0602, 0x0002, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
