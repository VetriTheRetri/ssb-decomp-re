/* AnimJoint data for relocData file 701 (FTFoxAnimShieldOff) */
/* 1776 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimShieldOff_joint2[10];
extern u16 dFTFoxAnimShieldOff_joint3[40];
extern u16 dFTFoxAnimShieldOff_joint5[42];
extern u16 dFTFoxAnimShieldOff_joint6[92];
extern u16 dFTFoxAnimShieldOff_joint7[48];
extern u16 dFTFoxAnimShieldOff_joint8[12];
extern u16 dFTFoxAnimShieldOff_joint9[28];
extern u16 dFTFoxAnimShieldOff_joint11[10];
extern u16 dFTFoxAnimShieldOff_joint12[92];
extern u16 dFTFoxAnimShieldOff_joint13[48];
extern u16 dFTFoxAnimShieldOff_joint14[12];
extern u16 dFTFoxAnimShieldOff_joint16[10];
extern u16 dFTFoxAnimShieldOff_joint17[60];
extern u16 dFTFoxAnimShieldOff_joint19[32];
extern u16 dFTFoxAnimShieldOff_joint21[42];
extern u16 dFTFoxAnimShieldOff_joint22[70];
extern u16 dFTFoxAnimShieldOff_joint24[40];
extern u16 dFTFoxAnimShieldOff_joint25[74];
extern u16 dFTFoxAnimShieldOff_joint26[34];
extern u16 dFTFoxAnimShieldOff_joint27[36];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTFoxAnimShieldOff_joints[] = {
	NULL, /* [0] NULL */
	(AObjEvent32 *)dFTFoxAnimShieldOff_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimShieldOff_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTFoxAnimShieldOff_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTFoxAnimShieldOff_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimShieldOff_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimShieldOff_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimShieldOff_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTFoxAnimShieldOff_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTFoxAnimShieldOff_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimShieldOff_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimShieldOff_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTFoxAnimShieldOff_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTFoxAnimShieldOff_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTFoxAnimShieldOff_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTFoxAnimShieldOff_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTFoxAnimShieldOff_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTFoxAnimShieldOff_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTFoxAnimShieldOff_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimShieldOff_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTFoxAnimShieldOff_joint27, /* [26] joint 27 */
};

/* 4-byte alignment padding */
static u32 dFTFoxAnimShieldOff_pad[1] = { 0 };

/* Joint 2 */
u16 dFTFoxAnimShieldOff_joint2[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 60, 900, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 48, 912, -20,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTFoxAnimShieldOff_joint3[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -321, 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -60, -26, 0, 342,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -141, -11, -338, -1, -3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -22, -297, 300, 623,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -208, 20, 312, -266,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -141, -338, -3, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimShieldOff_joint5[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -27, -268, -52, 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 145, 30, -156, 29, 24, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 90, 181, -178, 156, -4, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 508, 24, 156, 0, -36, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 309, 156, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimShieldOff_joint6[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1276, -27, -1159, -395, 555, -338,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 496, 699,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1303, -104, -1555, -260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1484, -96, -1680, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1496, -313, -1756, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2112, -222, -1419, 190, 1566, 507,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1941, 146, -1374, 63, 1512, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1819, 77, -1292, 84, 1475, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1124, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1781, 52, 1770, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1681, 38, 1735, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1718, -7, 1850, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1260, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1392, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1718, 0, -1442, -49, 1867, 16,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimShieldOff_joint7[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -533, 533,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -370, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -508, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -534, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -582, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimShieldOff_joint8[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -424,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 269, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimShieldOff_joint9[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 536,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 23, 0, 30,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 53, -9, 136, -33, 144, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -113, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 136, -72,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimShieldOff_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimShieldOff_joint12[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -423, 183, 88, -297, -277, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -239, 218, -208, 88, -548, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 14, -22, 265, 157, -206, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -284, 75, 107, -4, -509, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 164, 203, 256, 73, -150, 172,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 269, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 122, -38, -164, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 86, -36, -148, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -88, 117,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 51, 70,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 276, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 275, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 127, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 115, 40, 290, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, 17, 271, -3, 336, 46,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimShieldOff_joint13[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -696, 617,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -79, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -886, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -758, 439,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 379,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -528, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, -66,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTFoxAnimShieldOff_joint14[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 536,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 272, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimShieldOff_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimShieldOff_joint17[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, -53, -256, 11, -360, 88,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -148, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -354, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -98, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 44, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -20, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -237, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -232, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -346, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -399, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -43, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -34, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -6, -223, 9, -26, 7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimShieldOff_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 567, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 530, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 502, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 867, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 857, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 392, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimShieldOff_joint21[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 13, 5, 43, 26, -105, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), 20, 0, 124, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -316, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -560, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -459, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -383, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -81, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 20, 0, 125, 1, -56, 25,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimShieldOff_joint22[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 242, 12, 220, -2, -82, 117,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 316, -36, 175, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 34, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 305, 183,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 241, -48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 242, -45, 298, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 205, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 347, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 196, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 133, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 174, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 148, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 7, 137, -11, 134, 1,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimShieldOff_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 561, -134,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 426, -277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 370, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 495, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 512, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 355, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 331, -23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimShieldOff_joint25[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1519, 48, -1592, -10, -1960, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1423, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1601, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1909, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1694, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1659, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1302, 46, -1962, -167,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1457, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2006, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1997, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1851, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1572, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1510, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1500, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1557, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1565, -8, -1505, 4, -1835, 16,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimShieldOff_joint26[34] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 178, 110, 0, -33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 662, 148, 16, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 625, -264, 37, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -132, -69, 60, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 0, 219,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTFoxAnimShieldOff_joint27[36] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 64, -450,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 625, -51, 0, 18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -489, 8, -9, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 666, -16, -34, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -590, -120, -89, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -178, -122,
	ftAnimEnd(),
	0x0000, 0x0000,
};
