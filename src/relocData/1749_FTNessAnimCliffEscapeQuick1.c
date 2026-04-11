/* AnimJoint data for relocData file 1749 (FTNessAnimCliffEscapeQuick1) */
/* 1104 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimCliffEscapeQuick1_joint1[26];
extern u16 dFTNessAnimCliffEscapeQuick1_joint2[60];
extern u16 dFTNessAnimCliffEscapeQuick1_joint3[30];
extern u16 dFTNessAnimCliffEscapeQuick1_joint5[32];
extern u16 dFTNessAnimCliffEscapeQuick1_joint6[24];
extern u16 dFTNessAnimCliffEscapeQuick1_joint7[8];
extern u16 dFTNessAnimCliffEscapeQuick1_joint8[20];
extern u16 dFTNessAnimCliffEscapeQuick1_joint9[38];
extern u16 dFTNessAnimCliffEscapeQuick1_joint11[32];
extern u16 dFTNessAnimCliffEscapeQuick1_joint12[24];
extern u16 dFTNessAnimCliffEscapeQuick1_joint13[14];
extern u16 dFTNessAnimCliffEscapeQuick1_joint14[16];
extern u16 dFTNessAnimCliffEscapeQuick1_joint16[24];
extern u16 dFTNessAnimCliffEscapeQuick1_joint17[24];
extern u16 dFTNessAnimCliffEscapeQuick1_joint19[16];
extern u16 dFTNessAnimCliffEscapeQuick1_joint20[24];
extern u16 dFTNessAnimCliffEscapeQuick1_joint22[10];
extern u16 dFTNessAnimCliffEscapeQuick1_joint23[24];
extern u16 dFTNessAnimCliffEscapeQuick1_joint25[14];
extern u16 dFTNessAnimCliffEscapeQuick1_joint26[38];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimCliffEscapeQuick1_joints[] = {
	(u32)dFTNessAnimCliffEscapeQuick1_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimCliffEscapeQuick1_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimCliffEscapeQuick1_joint3, /* [2] joint 3 */
	(u32)dFTNessAnimCliffEscapeQuick1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTNessAnimCliffEscapeQuick1_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimCliffEscapeQuick1_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimCliffEscapeQuick1_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimCliffEscapeQuick1_joint9, /* [8] joint 9 */
	(u32)dFTNessAnimCliffEscapeQuick1_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTNessAnimCliffEscapeQuick1_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimCliffEscapeQuick1_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimCliffEscapeQuick1_joint14, /* [13] joint 14 */
	(u32)dFTNessAnimCliffEscapeQuick1_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTNessAnimCliffEscapeQuick1_joint17, /* [16] joint 17 */
	(u32)dFTNessAnimCliffEscapeQuick1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNessAnimCliffEscapeQuick1_joint20, /* [19] joint 20 */
	(u32)dFTNessAnimCliffEscapeQuick1_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTNessAnimCliffEscapeQuick1_joint23, /* [22] joint 23 */
	(u32)dFTNessAnimCliffEscapeQuick1_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTNessAnimCliffEscapeQuick1_joint26, /* [25] joint 26 */
	0xFFFF010D, /* [26] END */
};

/* Joint 1 */
u16 dFTNessAnimCliffEscapeQuick1_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), -633,
	ftAnimSetValRate(FT_ANIM_TRAZ), -351, -839,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 225, 1566, -263, 531,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 149, -900, -139, 1563,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -34, 0, 1010,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimCliffEscapeQuick1_joint2[60] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -80, 54, 0, 0, 218, 173, -77, 455,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 301, 118,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 439, 409, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 39), -16, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 72, 783,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 783,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), 257, 468,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_ROTY, 2), 0,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 118,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 468,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), 282, -75,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 313, -811,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTNessAnimCliffEscapeQuick1_joint3[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 116, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 33, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 33, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 204, 166, -651, -1378,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 220, -475, -861, 22,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimCliffEscapeQuick1_joint5[32] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 42), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 15,
	ftAnimSetValRate(FT_ANIM_ROTX), 380, 116,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 759, 15,
	ftAnimSetValT(FT_ANIM_ROTX, 22), 759,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTNessAnimCliffEscapeQuick1_joint6[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2283, 56, -118, 16, 1843, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -2098, 7, -71, -4, 1560, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2102, -4, -82, -11, 1564, 4,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimCliffEscapeQuick1_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimCliffEscapeQuick1_joint8[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -498, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), 0, 8, 0, 0, 0, 0,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTNessAnimCliffEscapeQuick1_joint9[38] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 54), 300,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 15,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 54), 0, 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 15,
	ftAnimSetValRate(FT_ANIM_ROTX), -641, 37,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 9, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 318, 191,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 318,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNessAnimCliffEscapeQuick1_joint11[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -18,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 0, 0, 54, 0, -17, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 15,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -18, 8, -17,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), 0, 0, 0,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 54, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTNessAnimCliffEscapeQuick1_joint12[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2141, -53, 243, -15, 1703, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1998, 2, 211, 2, 1493, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2012, 13, 216, 5, 1516, 23,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimCliffEscapeQuick1_joint13[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTNessAnimCliffEscapeQuick1_joint14[16] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -79, -2, 53, 1,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 1437,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1206, -9, -45, 1, 37, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimCliffEscapeQuick1_joint16[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 900, -935, 679, 74, 69, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 900, 0, -935, 0, 679, 0, 74, 0, 69, 0, 30, 0,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimCliffEscapeQuick1_joint17[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 405, 1, -71, -2, -36, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 408, 0, -78, 0, -46, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 407, -1, -78, 0, -49, -2,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimCliffEscapeQuick1_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTNessAnimCliffEscapeQuick1_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2263, 9, 1912, -2, 2379, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -2211, 17, 1901, -3, 2319, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2193, 17, 1897, -3, 2300, -18,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimCliffEscapeQuick1_joint22[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -57, 62, 89, 126, -82, -11,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTNessAnimCliffEscapeQuick1_joint23[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 22, 0, 14, 0, -18, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 20, 0, 14, 0, -25, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 20, 0, 14, 0, -32, -6,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimCliffEscapeQuick1_joint25[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimCliffEscapeQuick1_joint26[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1820, -12, -1844, 0, 2151, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1763, -16, -1844, 1, 2055, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1749, -14, -1842, 1, 2025, -30,
	ftAnimEnd(),
	0x500E, 0xFFB7, 0x0019, 0xFFEF, 0x0801, 0x0005, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
