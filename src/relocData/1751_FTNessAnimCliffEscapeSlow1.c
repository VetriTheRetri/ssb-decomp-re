/* AnimJoint data for relocData file 1751 (FTNessAnimCliffEscapeSlow1) */
/* 1472 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimCliffEscapeSlow1_joint1[16];
extern u16 dFTNessAnimCliffEscapeSlow1_joint2[54];
extern u16 dFTNessAnimCliffEscapeSlow1_joint3[18];
extern u16 dFTNessAnimCliffEscapeSlow1_joint5[26];
extern u16 dFTNessAnimCliffEscapeSlow1_joint6[56];
extern u16 dFTNessAnimCliffEscapeSlow1_joint7[26];
extern u16 dFTNessAnimCliffEscapeSlow1_joint8[22];
extern u16 dFTNessAnimCliffEscapeSlow1_joint9[28];
extern u16 dFTNessAnimCliffEscapeSlow1_joint11[28];
extern u16 dFTNessAnimCliffEscapeSlow1_joint12[34];
extern u16 dFTNessAnimCliffEscapeSlow1_joint13[32];
extern u16 dFTNessAnimCliffEscapeSlow1_joint14[30];
extern u16 dFTNessAnimCliffEscapeSlow1_joint16[10];
extern u16 dFTNessAnimCliffEscapeSlow1_joint17[78];
extern u16 dFTNessAnimCliffEscapeSlow1_joint19[30];
extern u16 dFTNessAnimCliffEscapeSlow1_joint20[74];
extern u16 dFTNessAnimCliffEscapeSlow1_joint22[36];
extern u16 dFTNessAnimCliffEscapeSlow1_joint23[24];
extern u16 dFTNessAnimCliffEscapeSlow1_joint25[16];
extern u16 dFTNessAnimCliffEscapeSlow1_joint26[44];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimCliffEscapeSlow1_joints[] = {
	(u32)dFTNessAnimCliffEscapeSlow1_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimCliffEscapeSlow1_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimCliffEscapeSlow1_joint3, /* [2] joint 3 */
	(u32)dFTNessAnimCliffEscapeSlow1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTNessAnimCliffEscapeSlow1_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimCliffEscapeSlow1_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimCliffEscapeSlow1_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimCliffEscapeSlow1_joint9, /* [8] joint 9 */
	(u32)dFTNessAnimCliffEscapeSlow1_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTNessAnimCliffEscapeSlow1_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimCliffEscapeSlow1_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimCliffEscapeSlow1_joint14, /* [13] joint 14 */
	(u32)dFTNessAnimCliffEscapeSlow1_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTNessAnimCliffEscapeSlow1_joint17, /* [16] joint 17 */
	(u32)dFTNessAnimCliffEscapeSlow1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNessAnimCliffEscapeSlow1_joint20, /* [19] joint 20 */
	(u32)dFTNessAnimCliffEscapeSlow1_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTNessAnimCliffEscapeSlow1_joint23, /* [22] joint 23 */
	(u32)dFTNessAnimCliffEscapeSlow1_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTNessAnimCliffEscapeSlow1_joint26, /* [25] joint 26 */
	0xFFFF0166, /* [26] END */
};

/* Joint 1 */
u16 dFTNessAnimCliffEscapeSlow1_joint1[16] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), -327, 252,
	ftAnimSetValBlock(FT_ANIM_TRAZ), -109,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 0, 107,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimCliffEscapeSlow1_joint2[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -9, 0, 0, 0, -126,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -317, -53,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 57), -6, -12,
	ftAnimSetValRateT(FT_ANIM_TRAX, 59), -5, -7,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), -85, -340,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -340,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), -304, -38,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -536, 15, 0, 13,
	ftAnimBlock(0, 4),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -38,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), -300, 874,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTNessAnimCliffEscapeSlow1_joint3[18] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 600,
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 600, -266,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimCliffEscapeSlow1_joint5[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY), 223, 44, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 45), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 759, -12, 0, -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTNessAnimCliffEscapeSlow1_joint6[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -50, 15, -159, -3, -242, -61,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 340, 71, -203, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -598, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -781, -146,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -928, 87,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 401, -4, -256, -115,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 189, -177, -559, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -753, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -556, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, -212, -653, -94, -313, 242,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimCliffEscapeSlow1_joint7[26] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -327, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -512, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -640, -128,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimCliffEscapeSlow1_joint8[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), -794, 10,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 45), 0, 10, 0, 0, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTNessAnimCliffEscapeSlow1_joint9[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY), 24, 288,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ), 112, 8, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 45), 0, 0, 288, 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 0, -6, 0, -14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNessAnimCliffEscapeSlow1_joint11[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -189, -9, 135, 6, -144, -5, 0, 0, 54, -4, -17, 1,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 74), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -368, -13, 309, -2, -239, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTNessAnimCliffEscapeSlow1_joint12[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 50, -2, 159, -12, -242, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 87, 48, -121, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -325, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -294, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -560, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 144, 57, -141, -19, -690, -129,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimCliffEscapeSlow1_joint13[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -500, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -606, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -581, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -478, 102,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTNessAnimCliffEscapeSlow1_joint14[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 598, -79, 0, -21, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 625, 1, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 625, 8,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimCliffEscapeSlow1_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimCliffEscapeSlow1_joint17[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 186, -20, -56, 5, 125, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2, 47, 172, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 119, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -18, -406,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -694, -562, 60, -34, 236, 153,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 669, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1142, -242, -65, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1179, -19, -78, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -293, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1181, -2, 836, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1184, 191, 992, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -798, 505, -535, -150, 781, -420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -173, 624, -593, -58, 151, -629,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimCliffEscapeSlow1_joint19[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 470, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 659, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 993, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 920, -73,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTNessAnimCliffEscapeSlow1_joint20[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2233, 129, 1899, -29, 2350, -136,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1387, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1944, 132, 2036, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1838, 255, 2027, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1027, 146, 2040, -88,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1040, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1140, -141, 1084, 76, 1891, -117,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1537, -295,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1711, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1194, 124,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1470, 191,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1902, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2016, -113, 1716, 246, 1628, -82,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimCliffEscapeSlow1_joint22[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 223, 15, 66, 6, 94, 4,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 136, -82, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 459, 52, 218, -12, 171, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 647, -8, -35, -38, 494, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 416, -57, 27, 36, 473, -51,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTNessAnimCliffEscapeSlow1_joint23[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 53, 1, 47, 0, 120, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 59, 7, 62, -7, 120, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 70, 10, 48, -14, 120, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimCliffEscapeSlow1_joint25[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTNessAnimCliffEscapeSlow1_joint26[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1897, 2, -1819, 0, 2134, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1910, -7, -1820, 0, 2139, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1894, -16, -1819, 0, 2134, -5,
	ftAnimEnd(),
	0x280E, 0x00F1, 0x0004, 0x001D, 0x0000, 0xFFC5, 0xFFFF, 0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x200F, 0x000A, 0x00E8, 0xFFF5, 0x001C, 0xFFF4, 0xFFC8, 0x001D, 0x0000,
};
