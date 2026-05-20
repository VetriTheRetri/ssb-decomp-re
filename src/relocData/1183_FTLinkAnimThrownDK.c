/* AnimJoint data for relocData file 1183 (FTLinkAnimThrownDK) */
/* 1360 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimThrownDK_joint2[18];
extern u16 dFTLinkAnimThrownDK_joint3[18];
extern u16 dFTLinkAnimThrownDK_joint5[18];
extern u16 dFTLinkAnimThrownDK_joint6[80];
extern u16 dFTLinkAnimThrownDK_joint7[40];
extern u16 dFTLinkAnimThrownDK_joint10[8];
extern u16 dFTLinkAnimThrownDK_joint11[66];
extern u16 dFTLinkAnimThrownDK_joint12[32];
extern u16 dFTLinkAnimThrownDK_joint13[8];
extern u16 dFTLinkAnimThrownDK_joint14[8];
extern u16 dFTLinkAnimThrownDK_joint17[8];
extern u16 dFTLinkAnimThrownDK_joint18[8];
extern u16 dFTLinkAnimThrownDK_joint19[28];
extern u16 dFTLinkAnimThrownDK_joint21[8];
extern u16 dFTLinkAnimThrownDK_joint22[36];
extern u16 dFTLinkAnimThrownDK_joint24[32];
extern u16 dFTLinkAnimThrownDK_joint26[52];
extern u16 dFTLinkAnimThrownDK_joint27[70];
extern u16 dFTLinkAnimThrownDK_joint29[32];
extern u16 dFTLinkAnimThrownDK_joint30[50];

/* Joint pointer table (30 entries, 120 bytes) */
AObjEvent32 * dFTLinkAnimThrownDK_joints[] = {
	NULL, /* [0] NULL */
	(AObjEvent32 *)dFTLinkAnimThrownDK_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimThrownDK_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTLinkAnimThrownDK_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTLinkAnimThrownDK_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimThrownDK_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTLinkAnimThrownDK_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTLinkAnimThrownDK_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimThrownDK_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimThrownDK_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimThrownDK_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTLinkAnimThrownDK_joint17, /* [14] joint 17 */
	NULL, /* [15] NULL */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTLinkAnimThrownDK_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimThrownDK_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTLinkAnimThrownDK_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTLinkAnimThrownDK_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTLinkAnimThrownDK_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTLinkAnimThrownDK_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTLinkAnimThrownDK_joint27, /* [26] joint 27 */
	(AObjEvent32 *)dFTLinkAnimThrownDK_joint29, /* [27] joint 29 */
	NULL, /* [28] NULL */
	(AObjEvent32 *)dFTLinkAnimThrownDK_joint30, /* [29] joint 30 */
};

/* Joint 2 */
u16 dFTLinkAnimThrownDK_joint2[18] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 240, -1, -24, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 1608,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 240, -24,
	ftAnimLoop(0x6800, -34),
};

/* Joint 3 */
u16 dFTLinkAnimThrownDK_joint3[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 8, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -152,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 8,
	ftAnimLoop(0x6800, -34),
};

/* Joint 5 */
u16 dFTLinkAnimThrownDK_joint5[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 184, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 465,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 184,
	ftAnimLoop(0x6800, -34),
};

/* Joint 6 */
u16 dFTLinkAnimThrownDK_joint6[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1731, -16, -1384, -5, -2856, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1954, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1456, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -2516, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2382, 108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -2408, -103,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1986, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1778, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1461, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1372, 19,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2526, -148,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2839, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1739, 22, -1369, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1734, 4, -1379, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1729, 4, -1383, -3, -2859, -19,
	ftAnimLoop(0x6800, -156),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimThrownDK_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -122, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -266, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -404, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -441, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -324, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -100, 162,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 7,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimThrownDK_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -14),
};

/* Joint 11 */
u16 dFTLinkAnimThrownDK_joint11[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 408, 29, 121, -18, -616, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 41, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 460, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1070, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1145, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -828, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 61, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 65, 29,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 454, -7, -729, 84,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 419, -11, -609, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 96, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 409, -9, 120, 23, -615, -5,
	ftAnimLoop(0x6800, -128),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimThrownDK_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -271, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -539, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -504, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -486, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -568, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -353, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -277, 76,
	ftAnimLoop(0x6800, -62),
};

/* Joint 13 */
u16 dFTLinkAnimThrownDK_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -14),
};

/* Joint 14 */
u16 dFTLinkAnimThrownDK_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -14),
};

/* Joint 17 */
u16 dFTLinkAnimThrownDK_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -14),
};

/* Joint 18 */
u16 dFTLinkAnimThrownDK_joint18[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 0, 0,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -14),
};

/* Joint 19 */
u16 dFTLinkAnimThrownDK_joint19[28] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -8, 0, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), -296,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -340, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 72, 0, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 350, -94,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimThrownDK_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -14),
};

/* Joint 22 */
u16 dFTLinkAnimThrownDK_joint22[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -129, -3, -229, 7, -483, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 19), -117, -16, -229, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -732, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -652, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -516, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, -11, -229, 0, -485, 31,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimThrownDK_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 612, -30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 502, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 497, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 696, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 666, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 633, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 613, -19,
	ftAnimLoop(0x6800, -62),
};

/* Joint 26 */
u16 dFTLinkAnimThrownDK_joint26[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 419, 63, -363, 22, -4, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 654, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -21, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), -29, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -86, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -347, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 610, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 441, -29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 420, -20, -362, -14, -4, 5,
	ftAnimLoop(0x6800, -100),
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimThrownDK_joint27[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 9, 6, 137, 0, -965, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 57, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 134, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -546, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -406, 131,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -391, -127,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 84, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -25, 19,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -530, -142,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -962, -11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 132, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4, 17, 135, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8, 13, 137, 1, -965, -3,
	ftAnimLoop(0x6800, -136),
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimThrownDK_joint29[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 734, -22,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 807, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 725, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 820, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 899, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 775, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 737, -38,
	ftAnimLoop(0x6800, -62),
};

/* Joint 30 */
u16 dFTLinkAnimThrownDK_joint30[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1137, 16, 1591, -6, 1661, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1785, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 1589, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1166, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1064, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1114, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1193, 57, 1758, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1162, -29, 1669, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1139, -23, 1591, 2, 1661, -7,
	ftAnimLoop(0x6800, -96),
	ftAnimEnd(),
};
