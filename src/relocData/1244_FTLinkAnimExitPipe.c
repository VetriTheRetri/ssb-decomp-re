/* AnimJoint data for relocData file 1244 (FTLinkAnimExitPipe) */
/* 1344 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimExitPipe_joint1[14];
extern u16 dFTLinkAnimExitPipe_joint2[14];
extern u16 dFTLinkAnimExitPipe_joint4[26];
extern u16 dFTLinkAnimExitPipe_joint5[54];
extern u16 dFTLinkAnimExitPipe_joint6[24];
extern u16 dFTLinkAnimExitPipe_joint9[18];
extern u16 dFTLinkAnimExitPipe_joint10[56];
extern u16 dFTLinkAnimExitPipe_joint11[32];
extern u16 dFTLinkAnimExitPipe_joint12[8];
extern u16 dFTLinkAnimExitPipe_joint13[10];
extern u16 dFTLinkAnimExitPipe_joint16[16];
extern u16 dFTLinkAnimExitPipe_joint17[8];
extern u16 dFTLinkAnimExitPipe_joint18[22];
extern u16 dFTLinkAnimExitPipe_joint20[10];
extern u16 dFTLinkAnimExitPipe_joint21[64];
extern u16 dFTLinkAnimExitPipe_joint23[24];
extern u16 dFTLinkAnimExitPipe_joint25[80];
extern u16 dFTLinkAnimExitPipe_joint26[56];
extern u16 dFTLinkAnimExitPipe_joint28[78];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimExitPipe_joints[] = {
	(u32)dFTLinkAnimExitPipe_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimExitPipe_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimExitPipe_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimExitPipe_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimExitPipe_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimExitPipe_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimExitPipe_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimExitPipe_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimExitPipe_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimExitPipe_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimExitPipe_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimExitPipe_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimExitPipe_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimExitPipe_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimExitPipe_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimExitPipe_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimExitPipe_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimExitPipe_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimExitPipe_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF0135, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimExitPipe_joint1[14] = {
	ftAnimSetValRate(FT_ANIM_TRAY), -1054, -134,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 20), 27, 391,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 20), 901,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimExitPipe_joint2[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -86, -65, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), -107, 276, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimExitPipe_joint4[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 236, 5, 270, -1, 15, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), 530, 0, 169, -2, 80, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 259, 166, 56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimExitPipe_joint5[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 756, 0, -157, 3, 9, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -317, -1, 152, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), 326, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 273, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 255, 22,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -320, -4, 154, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -328, 2, -76, -17,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 273, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, 6, -326, 1, -86, -9,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimExitPipe_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -301, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -332, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -503, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimExitPipe_joint9[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, -25, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 33), -242, 6, -25, 0, 227, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 4, 7, 76,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimExitPipe_joint10[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2902, 1, -311, 0, 403, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), -67, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), -2758, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 366, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -38, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -51, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 118, 9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2774, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2797, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2800, -3, 123, 4, -50, -12,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimExitPipe_joint11[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -748, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -570, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -577, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -663, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -627, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -599, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimExitPipe_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimExitPipe_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 804, -804, 804, 83, 0, 12,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLinkAnimExitPipe_joint16[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 1799, -302, -664,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 1697, -536, -339,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimExitPipe_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimExitPipe_joint18[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -4, -59, 2, 0, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 32), -174, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 32), -317, 241,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -199, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimExitPipe_joint20[10] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 40), 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimExitPipe_joint21[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -348, 6, -73, -26, 294, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -201, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -254, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 21), 32, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 41, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -204, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -210, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 98, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -258, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -245, 2,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -213, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -237, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -4, -244, 1, 108, 10,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimExitPipe_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 68, 80,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 872, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 888, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 264, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimExitPipe_joint25[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1426, -5, -1181, -1, 1679, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -1566, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), 1197, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -1247, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1251, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1291, 11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1584, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1899, 32,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1220, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1495, 58,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1271, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1244, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1850, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1479, 59,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1550, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1279, -34, -1446, 32, 1573, 23,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimExitPipe_joint26[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 40, 0, 101, 3, -279, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -501, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), -74, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 21), 79, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 91, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 269, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -480, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -129, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -50, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 264, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 6, 269, 0, -125, 4,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimExitPipe_joint28[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 392, 21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 916, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 895, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 431, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -6,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFDFD, 0x0000, 0xFF72, 0xFFFE, 0xFFFB, 0xFFF8, 0x2803, 0x001D, 0xFECD, 0xFFFE, 0x2809, 0x0020, 0xFF5C, 0x000E, 0x2005, 0x001C, 0x0043, 0xFFFC, 0x2005, 0x0001, 0x003E, 0xFFFC, 0x2805, 0x000A, 0xFFBA, 0xFFF9, 0x2003, 0x0001, 0xFECA, 0xFFFE, 0x2803, 0x0009, 0xFE61, 0xFFEF, 0x0801, 0x0002, 0x2009, 0x0001, 0xFF6B, 0x000E, 0x2009, 0x0006, 0xFFB8, 0x0005, 0x200F, 0x0001, 0xFE55, 0xFFF5, 0xFFB6, 0xFFFD, 0xFFBB, 0x0002, 0x0000,
};
