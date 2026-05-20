/* AnimJoint data for relocData file 1616 (FTCaptainAnimHammerIdle) */
/* 1664 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimHammerIdle_joint1[30];
extern u16 dFTCaptainAnimHammerIdle_joint2[28];
extern u16 dFTCaptainAnimHammerIdle_joint4[48];
extern u16 dFTCaptainAnimHammerIdle_joint5[54];
extern u16 dFTCaptainAnimHammerIdle_joint6[16];
extern u16 dFTCaptainAnimHammerIdle_joint7[58];
extern u16 dFTCaptainAnimHammerIdle_joint10[28];
extern u16 dFTCaptainAnimHammerIdle_joint11[58];
extern u16 dFTCaptainAnimHammerIdle_joint12[44];
extern u16 dFTCaptainAnimHammerIdle_joint13[38];
extern u16 dFTCaptainAnimHammerIdle_joint14[8];
extern u16 dFTCaptainAnimHammerIdle_joint16[14];
extern u16 dFTCaptainAnimHammerIdle_joint17[60];
extern u16 dFTCaptainAnimHammerIdle_joint19[32];
extern u16 dFTCaptainAnimHammerIdle_joint21[70];
extern u16 dFTCaptainAnimHammerIdle_joint22[78];
extern u16 dFTCaptainAnimHammerIdle_joint24[32];
extern u16 dFTCaptainAnimHammerIdle_joint25[86];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimHammerIdle_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimHammerIdle_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimHammerIdle_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimHammerIdle_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimHammerIdle_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimHammerIdle_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimHammerIdle_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimHammerIdle_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimHammerIdle_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimHammerIdle_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimHammerIdle_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimHammerIdle_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimHammerIdle_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimHammerIdle_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimHammerIdle_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimHammerIdle_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimHammerIdle_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimHammerIdle_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimHammerIdle_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimHammerIdle_joint1[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1620, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1600, -448, 0, 264,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1339, -449, 161, 46,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1206, 203, 40, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 1620, -3,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimHammerIdle_joint2[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 107, 46, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 107, -34, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -268, 0, 0,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimHammerIdle_joint4[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), -89, 0, 0, 19, -21,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 269, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 55, 6,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 16, -69, -16, 159,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -24, 1, 77, -2,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 19, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 269, 0, 89, 0, 55, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -89, 0, 0,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimHammerIdle_joint5[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1166, 99, -1799, 0, -2534, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1818, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1064, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -2242, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2254, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2518, -28,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1807, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1800, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1129, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1166, -37, -1799, 1, -2534, -15,
	ftAnimLoop(0x6800, -104),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimHammerIdle_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -5,
	ftAnimLoop(0x6800, -30),
};

/* Joint 7 */
u16 dFTCaptainAnimHammerIdle_joint7[58] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -350, 14, -61, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -450, -137, 22, 16, -99, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1039, -42, 215, 47, -276, -58,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -86, 10, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1039, 72, 215, -26, -276, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -529, 86, 27, -44, -172, 60,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -350, 14, -61, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 131,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimHammerIdle_joint10[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 134, -42, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -16, -110, -8, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 12, -110, 6, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 134, -43, 0,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimHammerIdle_joint11[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -240, -1, -112, 0, -761, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -96, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -241, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -778, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -785, 30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -95, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -111, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -756, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -758, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -240, 0, -112, 0, -761, -2,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimHammerIdle_joint12[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -405, 31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -261, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -358, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -393, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -405, -11,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimHammerIdle_joint13[38] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 138, 196, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 273, 16, -148, -47, 405, 45,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 2), 287,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -107, 326,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -148, 31, 405, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 273, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 138, 196, 39,
	ftAnimLoop(0x6800, -74),
};

/* Joint 14 */
u16 dFTCaptainAnimHammerIdle_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1349, 913, -263,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTCaptainAnimHammerIdle_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), -223,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), 268,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimHammerIdle_joint17[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 129, -13, 14, -19, -533, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -118, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 137, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -702, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -674, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -241, -63,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -139, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 2, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -386, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 133, -3, -517, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 129, -4, 14, 11, -533, -16,
	ftAnimLoop(0x6800, -116),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimHammerIdle_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1002, -17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 774, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 766, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1043, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1081, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1091, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1002, -88,
	ftAnimLoop(0x6800, -62),
};

/* Joint 21 */
u16 dFTCaptainAnimHammerIdle_joint21[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1686, 15, -1709, 3, -1357, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1702, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1662, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1835, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1841, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1704, 125,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1734, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1725, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1611, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1490, 9, -1578, 96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1412, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1592, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1666, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1686, -19, -1709, 16, -1357, 54,
	ftAnimLoop(0x6800, -136),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimHammerIdle_joint22[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1508, -4, 1493, -15, 1824, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1771, -61, 1477, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1083, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 897, -254,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 423, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1817, 12, 1603, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1611, 31, 1450, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 511, 118,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1564, 213,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1598, 13, 1439, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1514, 11, 1481, 18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1748, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1508, 6, 1493, 12, 1824, 75,
	ftAnimLoop(0x6800, -152),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimHammerIdle_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 493, 87,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1324, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1374, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 990, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 974, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 570, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 493, -76,
	ftAnimLoop(0x6800, -62),
};

/* Joint 25 */
u16 dFTCaptainAnimHammerIdle_joint25[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 84, -13, 105, -5, -211, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -58, 35, -23, -24, 45, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 11, 22, -26, 38, 225, 80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -196, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 28, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -17, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 148, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -40, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -203, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 32, 84,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 124, -18, -103, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 110, -9, -183, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 84, 52, 105, -5, -211, -27,
	ftAnimLoop(0x6800, -164),
	ftAnimEnd(),
	0x0000, 0x0000,
};
