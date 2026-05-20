/* AnimJoint data for relocData file 1243 (FTLinkAnimEnterPipe) */
/* 1328 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimEnterPipe_joint1[10];
extern u16 dFTLinkAnimEnterPipe_joint2[14];
extern u16 dFTLinkAnimEnterPipe_joint4[26];
extern u16 dFTLinkAnimEnterPipe_joint5[62];
extern u16 dFTLinkAnimEnterPipe_joint6[32];
extern u16 dFTLinkAnimEnterPipe_joint9[18];
extern u16 dFTLinkAnimEnterPipe_joint10[54];
extern u16 dFTLinkAnimEnterPipe_joint11[32];
extern u16 dFTLinkAnimEnterPipe_joint12[8];
extern u16 dFTLinkAnimEnterPipe_joint13[10];
extern u16 dFTLinkAnimEnterPipe_joint16[16];
extern u16 dFTLinkAnimEnterPipe_joint17[8];
extern u16 dFTLinkAnimEnterPipe_joint18[22];
extern u16 dFTLinkAnimEnterPipe_joint20[18];
extern u16 dFTLinkAnimEnterPipe_joint21[62];
extern u16 dFTLinkAnimEnterPipe_joint23[36];
extern u16 dFTLinkAnimEnterPipe_joint25[70];
extern u16 dFTLinkAnimEnterPipe_joint26[46];
extern u16 dFTLinkAnimEnterPipe_joint28[16];
extern u16 dFTLinkAnimEnterPipe_joint29[46];

/* Joint pointer table (29 entries, 116 bytes) */
AObjEvent32 * dFTLinkAnimEnterPipe_joints[] = {
	(AObjEvent32 *)dFTLinkAnimEnterPipe_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimEnterPipe_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimEnterPipe_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTLinkAnimEnterPipe_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTLinkAnimEnterPipe_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimEnterPipe_joint9, /* [6] joint 9 */
	NULL, /* [7] NULL */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTLinkAnimEnterPipe_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTLinkAnimEnterPipe_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimEnterPipe_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimEnterPipe_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimEnterPipe_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTLinkAnimEnterPipe_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTLinkAnimEnterPipe_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimEnterPipe_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTLinkAnimEnterPipe_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTLinkAnimEnterPipe_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTLinkAnimEnterPipe_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTLinkAnimEnterPipe_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTLinkAnimEnterPipe_joint28, /* [26] joint 28 */
	NULL, /* [27] NULL */
	(AObjEvent32 *)dFTLinkAnimEnterPipe_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimEnterPipe_joint1[10] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 901,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 32), -1054, -66,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimEnterPipe_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 276, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), -86, -65, 10,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimEnterPipe_joint4[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 236, 0, 270, 3, 15, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 236, 5, 270, -1, 15, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimEnterPipe_joint5[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 280, -12, -326, -2, -86, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 193, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -172, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 145, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 136, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 247, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 729, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 737, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 756, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -168, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -157, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 756, 0, -157, 0, 9, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimEnterPipe_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -345, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -301, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimEnterPipe_joint9[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -242, -7, -25, -1, 227, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), -242, -25, 227,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimEnterPipe_joint10[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2800, 5, 123, -8, -50, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -95, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -2670, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 373, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 377, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 403, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -106, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -310, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2680, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), -2900, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2902, -1, -311, 0, 403, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimEnterPipe_joint11[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -657, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -606, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -701, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -711, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -747, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -748, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimEnterPipe_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimEnterPipe_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 804, -804, 804, 83, 0, 12,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLinkAnimEnterPipe_joint16[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1799, -302, -664,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 1697, -536, -339,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimEnterPipe_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimEnterPipe_joint18[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -311, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -76, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, -4, -59, 2, 0, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimEnterPipe_joint20[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 522, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 10, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 0, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimEnterPipe_joint21[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, 9, -244, -3, 108, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -127, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 26, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 60, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 314, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -124, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -53, -10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -336, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -352, 2,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 315, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -348, 3, -73, -20, 294, -21,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimEnterPipe_joint23[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 315, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 252, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 68, 62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimEnterPipe_joint25[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1279, 60, -1446, -67, 1573, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1957, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1381, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1254, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1286, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1207, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1954, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -1183, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1412, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1614, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1621, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1722, -27,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1221, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -1424, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1426, -1, -1181, 2, 1679, -42,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimEnterPipe_joint26[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -25, 269, -9, -125, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 109, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 31), -262, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -85, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -95, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 38, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 105, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 22), 98, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 40, 1, 101, 3, -279, -16,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimEnterPipe_joint28[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 364, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 392, 28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimEnterPipe_joint29[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -427, 24, -74, 21, -69, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -287, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 31), 5, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 241, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 243, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -137, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -295, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 22), -513, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -515, -2, -142, -5, -5, -11,
	ftAnimEnd(),
};
