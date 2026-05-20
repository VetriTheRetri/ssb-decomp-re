/* AnimJoint data for relocData file 1545 (FTCaptainAnimDamaged6) */
/* 1744 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimDamaged6_joint1[54];
extern u16 dFTCaptainAnimDamaged6_joint2[38];
extern u16 dFTCaptainAnimDamaged6_joint4[78];
extern u16 dFTCaptainAnimDamaged6_joint5[76];
extern u16 dFTCaptainAnimDamaged6_joint6[30];
extern u16 dFTCaptainAnimDamaged6_joint7[20];
extern u16 dFTCaptainAnimDamaged6_joint8[36];
extern u16 dFTCaptainAnimDamaged6_joint10[8];
extern u16 dFTCaptainAnimDamaged6_joint11[76];
extern u16 dFTCaptainAnimDamaged6_joint12[40];
extern u16 dFTCaptainAnimDamaged6_joint13[28];
extern u16 dFTCaptainAnimDamaged6_joint14[10];
extern u16 dFTCaptainAnimDamaged6_joint16[18];
extern u16 dFTCaptainAnimDamaged6_joint17[64];
extern u16 dFTCaptainAnimDamaged6_joint19[32];
extern u16 dFTCaptainAnimDamaged6_joint21[60];
extern u16 dFTCaptainAnimDamaged6_joint22[60];
extern u16 dFTCaptainAnimDamaged6_joint24[32];
extern u16 dFTCaptainAnimDamaged6_joint25[62];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimDamaged6_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimDamaged6_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimDamaged6_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimDamaged6_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamaged6_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimDamaged6_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimDamaged6_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimDamaged6_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimDamaged6_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamaged6_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimDamaged6_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimDamaged6_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimDamaged6_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimDamaged6_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamaged6_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimDamaged6_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamaged6_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamaged6_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimDamaged6_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamaged6_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimDamaged6_joint1[54] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -55, 1225, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 223, 1225, 0, -63, -743,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1225, -223, -186, -556,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1169, -63, -202, -18,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1169, 63, -202, 304,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -149, 1225, 149, 63, 538,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -55, 1225, -1,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimDamaged6_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 240, 95, 49,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -17, 0, -31, 0, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 187, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 187, 5, 0, 10, 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 240, 95, 49,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimDamaged6_joint4[78] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 242, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -182, -12, 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 84, -39, 218, 174, 0, -64, 46, 338, -11, -7, 3, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 163, 78, 166, -78, -142, -94, 84, 1, -33, -156, 35, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 241, 8, 62, 0, -189, 0, 47, -46, -50, -20, 36, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 241, -10, 62, 0, -189, 0, 47, -41, -50, 16, 36, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 242, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -182, -12, 0, -31, 47,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimDamaged6_joint5[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1334, 298, -1487, 455, 1001, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1035, -21, -1032, 185, 1017, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1376, -185, -1115, -149, 1400, 275,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1412, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1575, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1332, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1339, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1468, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1418, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1336, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1577, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1436, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1221, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1059, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1334, 2, -1487, -18, 1001, -57,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimDamaged6_joint6[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1109, 232,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -877, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1090, -193,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -1264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1264, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1154, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1109, 44,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimDamaged6_joint7[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -97, -323,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -268, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 191, -97, -323,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimDamaged6_joint8[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, 113, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 47, 0, 72, 0, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 34, 11, 402, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 76, -23, 402, -36, 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -153, 113, -38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimDamaged6_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimDamaged6_joint11[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, 617, 249, 1385, 628, 212,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1568, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1635, 533, 841, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1316, -4, 1039, 364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1627, 174, 1570, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1591, 9, 1666, 25, 1571, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 1568, 93, 1627, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1513, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1570, 173,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2204, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1737, 137, 1601, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1842, 2, 1470, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1742, -100, 1358, -111, 2237, 32,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimDamaged6_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -631, 233,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -397, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -979, -300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -999, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -997, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -999, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1120, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -902, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, 270,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimDamaged6_joint13[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 167, 63, 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 342, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 487, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 223, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 223, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -5,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimDamaged6_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 39,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimDamaged6_joint16[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 255,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -532, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -424, 87,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 255,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTCaptainAnimDamaged6_joint17[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1553, 65, 1526, 278, -2165, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1568, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2122, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1804, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1769, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1610, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1599, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1613, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2133, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -2097, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2055, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1641, 30, -2154, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1553, 88, 1526, -83, -2165, -11,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimDamaged6_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 237, 737,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 975, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 787, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 594, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 597, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 440, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 237, -202,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimDamaged6_joint21[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, -14, -2, -43, 513, -689,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -10, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -17, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -176, -326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -139, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -126, 26,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -9, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -10, 29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -66, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 30, 11, 59, 3, 139, 290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, -25, -2, -62, 513, 374,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimDamaged6_joint22[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, -1, 289, -285, -825, 320,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -93, -7, -66, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -504, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -592, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -601, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -29, 33, 24, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -15, 17, 104, 95,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -530, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, 1, 214, 92, -673, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, -19, 289, 74, -825, -151,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimDamaged6_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 875, -336,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 538, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 743, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 909, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 906, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 874, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 875, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimDamaged6_joint25[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -44, -57, 58, -154, -92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -46, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 136, 34, -293, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 69, -35, -422, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -21, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -389, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -392, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -312, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -45, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, -9, -57, -36, -154, 158,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
