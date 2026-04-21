/* AnimJoint data for relocData file 1166 (FTLinkAnimDownForwardU) */
/* 2656 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimDownForwardU_joint1[20];
extern u16 dFTLinkAnimDownForwardU_joint2[60];
extern u16 dFTLinkAnimDownForwardU_joint3[22];
extern u16 dFTLinkAnimDownForwardU_joint5[38];
extern u16 dFTLinkAnimDownForwardU_joint6[86];
extern u16 dFTLinkAnimDownForwardU_joint7[48];
extern u16 dFTLinkAnimDownForwardU_joint10[20];
extern u16 dFTLinkAnimDownForwardU_joint11[96];
extern u16 dFTLinkAnimDownForwardU_joint12[56];
extern u16 dFTLinkAnimDownForwardU_joint13[24];
extern u16 dFTLinkAnimDownForwardU_joint14[8];
extern u16 dFTLinkAnimDownForwardU_joint17[36];
extern u16 dFTLinkAnimDownForwardU_joint18[50];
extern u16 dFTLinkAnimDownForwardU_joint19[14];
extern u16 dFTLinkAnimDownForwardU_joint21[30];
extern u16 dFTLinkAnimDownForwardU_joint22[134];
extern u16 dFTLinkAnimDownForwardU_joint24[56];
extern u16 dFTLinkAnimDownForwardU_joint26[140];
extern u16 dFTLinkAnimDownForwardU_joint27[136];
extern u16 dFTLinkAnimDownForwardU_joint29[56];
extern u16 dFTLinkAnimDownForwardU_joint30[136];

/* Joint pointer table (30 entries, 120 bytes) */
u32 dFTLinkAnimDownForwardU_joints[] = {
	(u32)dFTLinkAnimDownForwardU_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimDownForwardU_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimDownForwardU_joint3, /* [2] joint 3 */
	(u32)dFTLinkAnimDownForwardU_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTLinkAnimDownForwardU_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimDownForwardU_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimDownForwardU_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTLinkAnimDownForwardU_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimDownForwardU_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimDownForwardU_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimDownForwardU_joint14, /* [13] joint 14 */
	(u32)dFTLinkAnimDownForwardU_joint17, /* [14] joint 17 */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	(u32)dFTLinkAnimDownForwardU_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimDownForwardU_joint19, /* [18] joint 19 */
	(u32)dFTLinkAnimDownForwardU_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTLinkAnimDownForwardU_joint22, /* [21] joint 22 */
	(u32)dFTLinkAnimDownForwardU_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTLinkAnimDownForwardU_joint26, /* [24] joint 26 */
	0x00000000, /* [25] NULL */
	(u32)dFTLinkAnimDownForwardU_joint27, /* [26] joint 27 */
	(u32)dFTLinkAnimDownForwardU_joint29, /* [27] joint 29 */
	0x00000000, /* [28] NULL */
	(u32)dFTLinkAnimDownForwardU_joint30, /* [29] joint 30 */
};

/* 4-byte alignment padding */
static u32 dFTLinkAnimDownForwardU_pad[1] = { 0 };

/* Joint 1 */
u16 dFTLinkAnimDownForwardU_joint1[20] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 74,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 8), 354, 1372,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 14), 3365, 1302,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 14), 4200, -258,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimDownForwardU_joint2[60] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY), -807, 26, 152, 77,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -161, 196,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 36), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 210, 93,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 614, -369,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 3107, 119,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 636, 847,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 636, -883,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 251, 520,
	ftAnimSetValRateT(FT_ANIM_TRAY, 13), 901, 194,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 3216, -39,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTLinkAnimDownForwardU_joint3[22] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -138, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 36), -107, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 29), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 276, 46,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimDownForwardU_joint5[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 350, 80,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 23), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 29), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 802, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 259, -54,
	ftAnimBlock(0, 13),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 56, 4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 166, 28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTLinkAnimDownForwardU_joint6[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1533, -10, -1136, -32, 1893, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1681, -100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1406, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1683, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1706, 83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2008, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1775, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1736, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2014, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1646, 28,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1414, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1324, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1736, 0, 1682, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), -1426, 92, 1601, -73,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1294, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1328, 97, -1281, 12, 1522, -79,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimDownForwardU_joint7[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -527, 46,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -191, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -153, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -750, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -876, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1123, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1096, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -556, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -556, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -540, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 39,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimDownForwardU_joint10[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -97, -12,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 7, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -140, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 21), 4, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTLinkAnimDownForwardU_joint11[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 668, 16, 433, -10, 230, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 241, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 181, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 473, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 441, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 403, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 244, -125,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 146, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 257, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -296, -15,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 129, -47, 162, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -36, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 312, 30,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -301, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -26, -7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -28, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 45, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 343, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 401, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, 15, 118, 72, -49, -23,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimDownForwardU_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -347, 70,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -277, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -361, -291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1061, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1099, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -1030, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1050, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -798, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 204,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimDownForwardU_joint13[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -399, 86,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -179, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 152, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -10, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 0, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTLinkAnimDownForwardU_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimDownForwardU_joint17[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 1697, 9, -536, 16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), -339,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 1876, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), -323, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -316, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -485, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1697, -44,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -536, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimDownForwardU_joint18[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -899, 126, -494, 54, 377, -92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 143, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 0, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 28), 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 224, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 0, -4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 115, -83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 0, 65,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), -163, -13,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTLinkAnimDownForwardU_joint19[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 29), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -199, -36,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimDownForwardU_joint21[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -243, 7, 115, -11, -78, 7,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), -176,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 11), -176,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 0, 14,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTLinkAnimDownForwardU_joint22[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -632, 154, -300, -97, 129, -128,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -517, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -136, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 53, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 129, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 166, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -566, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -402, -68,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -187, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -104, -64,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 129, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 182, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -496, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -617, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -200, -63, -407, 191,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -247, -30, -144, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 72, -83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 35, 83,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -290, -19, -82, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -246, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 170, 94, -197, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -44, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -127, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 14, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -101, -53, -18, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -246, 0, 82, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, 3, -244, 2, 108, 26,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimDownForwardU_joint24[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 292, 246,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1071, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1173, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1135, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1192, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1281, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1227, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 903, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 944, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1254, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1214, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 320, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 250, -70,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimDownForwardU_joint26[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 681, 0, 163, -22, 625, -138,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 413, -107, 219, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 196, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 66, -175,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -448, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 297, -96, 239, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 330, 5, 162, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -406, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -377, -174,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 334, -3, 168, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 418, 82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 164, 35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -579, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -412, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 526, 75, -218, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 570, -113, 170, -30, -140, -81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -315, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 298, -198, -381, -178,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 175, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -222, 43,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -350, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -191, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 214, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 330, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -190, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -69, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, -1, -161, 29, -34, 34,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimDownForwardU_joint27[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 142, -50, 208, 6, -351, -60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -180, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 178, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -563, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -589, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -452, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -217, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -113, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 191, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 168, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -540, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -652, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -160, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 45, 11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -624, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -338, 51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 179, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 282, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -300, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -207, -62,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 55, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 3, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, -141,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -236, 110,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 27, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 192, 72,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 284, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 77, 269, -14, -125, 111,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimDownForwardU_joint29[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 775, 89,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1164, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1219, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1074, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1147, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1055, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1024, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 697, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 670, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 921, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 952, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 526, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 425, -101,
	ftAnimEnd(),
	0x0000,
};

/* Joint 30 */
u16 dFTLinkAnimDownForwardU_joint30[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -510, -10, -31, -12, -13, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -408, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -93, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 45, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -30, -117,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -403, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -353, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -411, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -70, 16, -369, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -89, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -271, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -410, -9, -287, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -414, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -259, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -365, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -385, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -88, -12, -388, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -98, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -429, -97, -274, 236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -609, -66, 84, 171,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -30, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -562, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -435, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -94, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -120, 41,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -81, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -427, 7, -74, 7, -69, 50,
	ftAnimEnd(),
	0x0000, 0x0000,
};
