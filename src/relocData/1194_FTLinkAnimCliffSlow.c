/* AnimJoint data for relocData file 1194 (FTLinkAnimCliffSlow) */
/* 2304 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimCliffSlow_joint1[16];
extern u16 dFTLinkAnimCliffSlow_joint2[36];
extern u16 dFTLinkAnimCliffSlow_joint3[38];
extern u16 dFTLinkAnimCliffSlow_joint5[34];
extern u16 dFTLinkAnimCliffSlow_joint6[126];
extern u16 dFTLinkAnimCliffSlow_joint7[66];
extern u16 dFTLinkAnimCliffSlow_joint10[34];
extern u16 dFTLinkAnimCliffSlow_joint11[116];
extern u16 dFTLinkAnimCliffSlow_joint12[64];
extern u16 dFTLinkAnimCliffSlow_joint13[26];
extern u16 dFTLinkAnimCliffSlow_joint14[8];
extern u16 dFTLinkAnimCliffSlow_joint17[26];
extern u16 dFTLinkAnimCliffSlow_joint18[26];
extern u16 dFTLinkAnimCliffSlow_joint19[40];
extern u16 dFTLinkAnimCliffSlow_joint21[34];
extern u16 dFTLinkAnimCliffSlow_joint22[102];
extern u16 dFTLinkAnimCliffSlow_joint24[40];
extern u16 dFTLinkAnimCliffSlow_joint26[44];
extern u16 dFTLinkAnimCliffSlow_joint27[106];
extern u16 dFTLinkAnimCliffSlow_joint29[48];
extern u16 dFTLinkAnimCliffSlow_joint30[62];

/* Joint pointer table (30 entries, 120 bytes) */
AObjEvent32 * dFTLinkAnimCliffSlow_joints[] = {
	(AObjEvent32 *)dFTLinkAnimCliffSlow_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimCliffSlow_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimCliffSlow_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTLinkAnimCliffSlow_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffSlow_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimCliffSlow_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTLinkAnimCliffSlow_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffSlow_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimCliffSlow_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimCliffSlow_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimCliffSlow_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTLinkAnimCliffSlow_joint17, /* [14] joint 17 */
	NULL, /* [15] NULL */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffSlow_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimCliffSlow_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTLinkAnimCliffSlow_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffSlow_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTLinkAnimCliffSlow_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffSlow_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffSlow_joint27, /* [26] joint 27 */
	(AObjEvent32 *)dFTLinkAnimCliffSlow_joint29, /* [27] joint 29 */
	NULL, /* [28] NULL */
	(AObjEvent32 *)dFTLinkAnimCliffSlow_joint30, /* [29] joint 30 */
};

/* Joint 1 */
u16 dFTLinkAnimCliffSlow_joint1[16] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), -1850,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 35), -1850, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 382,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), -1132, 986,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimCliffSlow_joint2[36] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -28, 929, -4, -214, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), -179, 108, 929, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), -214,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 30), -214,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 15), 340, 903,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), -179, -349, 929, 17,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -314, -71, 936, -452,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTLinkAnimCliffSlow_joint3[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 120, -1, -608, 2, -157, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 172, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -597, -412,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 289, -608, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 172, -18, -597, 37, -412, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 18, -9, -45, 37, -95, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimCliffSlow_joint5[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 59, 0, 20, 3, 227, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 59, 20, 227,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 59, 20, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 59, 23, 20, 8, 227, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 408, 41, 141, 12, 53, 5,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimCliffSlow_joint6[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1438, -10, -326, 1, -1886, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1292, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -108, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1703, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1580, 71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1508, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1299, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1434, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -103, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -120, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1516, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1649, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1706, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1702, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, -7, -1694, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1468, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -109, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1391, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1303, 186,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1505, -171,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2724, -331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1541, 169, -93, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -199, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1883, 374,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2392, 418, -2960, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2720, 327, -244, -44, -3129, -168,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimCliffSlow_joint7[66] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -360, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -207, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -217, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -211, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1130, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1215, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1143, 71,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimCliffSlow_joint10[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -5, 542, 0, 255, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 191, 542, 255,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 191, 542, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 191, 11, 542, -31, 255, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 359, 26, 63, -43, -74, -38,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimCliffSlow_joint11[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2049, 0, -1690, 0, 1929, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -1703, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), 2083, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 1860, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1862, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2086, 74,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1690, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1707, -22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2143, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2009, -85,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2084, -7, -1701, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2023, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1690, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1922, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1821, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2049, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2285, 102, -1723, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2255, -177, -1965, -60, 1249, -384,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1930, -446, -1844, 69, 1053, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1362, -411, -1826, 105, 787, -252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1108, -254, -1634, 192, 548, -238,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimCliffSlow_joint12[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -244, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -155, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -152, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -300, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -314, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -244, -343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -687, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -643, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -822, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -710, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -364, 345,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimCliffSlow_joint13[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -17, -209, 17, 0, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -261, -17, 49, 17, 311, 20,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTLinkAnimCliffSlow_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimCliffSlow_joint17[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 1697, -536, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1697, -8, -536, 34, -339, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1569, 5, -22, 11, -1296, -66,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimCliffSlow_joint18[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -85, 217, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -85, 217, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -85, 0, 217, -15, 30, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -78, 0, -15, -15, 68, 2,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTLinkAnimCliffSlow_joint19[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -133, 2, 245, -4, 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -63, -10, 226, -2, 184, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -391, -2, 188, 0, -232, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -133, 17, 245, -21, 0, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -122, 0, -137, -25, 95, 6,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimCliffSlow_joint21[34] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -174, 1,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 25), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -174, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -11, 0, -17, -174, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -179, -11, -260, -17, 55, 15,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTLinkAnimCliffSlow_joint22[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1533, 0, -1576, 0, 1140, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1637, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -1576, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1061, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1022, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1110, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1651, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1568, -29,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1140, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1675, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1560, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1481, -48,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1589, 0, 1741, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1533, 16, 1140, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1534, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1459, 35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1503, 37, 1151, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1406, 9, 1311, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1404, 2, -1430, 28, 1352, 40,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimCliffSlow_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 884, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 756, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 731, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 933, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 961, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 832, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 933, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 539, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 469, -70,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimCliffSlow_joint26[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 737, 0, 38, 0, 13, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), 38, 0, 13, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 23), 719, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 725, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 933, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 870, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 500, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 472, -28, 13, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTLinkAnimCliffSlow_joint27[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 231, 0, -131, 0, -59, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -74, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 231, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -134, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -171, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -59, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -77, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -117, -2,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 210, -32, -47, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 297, -91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 95, 45,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -125, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 62, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 175, -116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -176, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 146, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 310, -56,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -293, -110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -517, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 206, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 347, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 230, -80, 437, 90, -654, -136,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimCliffSlow_joint29[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 316, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 338, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 319, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 428, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 517, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 402, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 316, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 496, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1070, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1140, 69,
	ftAnimEnd(),
	0x0000,
};

/* Joint 30 */
u16 dFTLinkAnimCliffSlow_joint30[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2571, 0, -102, 0, 354, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), -102, 0, 354, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 2638, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2646, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 2571, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2515, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 2367, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2462, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 2446, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2373, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2337, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2340, 2, -102, 0, 354, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
