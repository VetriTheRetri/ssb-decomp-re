/* AnimJoint data for relocData file 1739 (FTNessAnimCliffQuick) */
/* 1808 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimCliffQuick_joint1[38];
extern u16 dFTNessAnimCliffQuick_joint2[46];
extern u16 dFTNessAnimCliffQuick_joint3[20];
extern u16 dFTNessAnimCliffQuick_joint5[46];
extern u16 dFTNessAnimCliffQuick_joint6[104];
extern u16 dFTNessAnimCliffQuick_joint7[40];
extern u16 dFTNessAnimCliffQuick_joint8[16];
extern u16 dFTNessAnimCliffQuick_joint9[48];
extern u16 dFTNessAnimCliffQuick_joint11[34];
extern u16 dFTNessAnimCliffQuick_joint12[86];
extern u16 dFTNessAnimCliffQuick_joint13[38];
extern u16 dFTNessAnimCliffQuick_joint14[28];
extern u16 dFTNessAnimCliffQuick_joint16[10];
extern u16 dFTNessAnimCliffQuick_joint17[58];
extern u16 dFTNessAnimCliffQuick_joint19[14];
extern u16 dFTNessAnimCliffQuick_joint20[38];
extern u16 dFTNessAnimCliffQuick_joint22[26];
extern u16 dFTNessAnimCliffQuick_joint23[64];
extern u16 dFTNessAnimCliffQuick_joint25[14];
extern u16 dFTNessAnimCliffQuick_joint26[82];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimCliffQuick_joints[] = {
	(u32)dFTNessAnimCliffQuick_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimCliffQuick_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimCliffQuick_joint3, /* [2] joint 3 */
	(u32)dFTNessAnimCliffQuick_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTNessAnimCliffQuick_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimCliffQuick_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimCliffQuick_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimCliffQuick_joint9, /* [8] joint 9 */
	(u32)dFTNessAnimCliffQuick_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTNessAnimCliffQuick_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimCliffQuick_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimCliffQuick_joint14, /* [13] joint 14 */
	(u32)dFTNessAnimCliffQuick_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTNessAnimCliffQuick_joint17, /* [16] joint 17 */
	(u32)dFTNessAnimCliffQuick_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNessAnimCliffQuick_joint20, /* [19] joint 20 */
	(u32)dFTNessAnimCliffQuick_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTNessAnimCliffQuick_joint23, /* [22] joint 23 */
	(u32)dFTNessAnimCliffQuick_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTNessAnimCliffQuick_joint26, /* [25] joint 26 */
	0xFFFF01B4, /* [26] END */
};

/* Joint 1 */
u16 dFTNessAnimCliffQuick_joint1[38] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -1254, 172, -240, 443,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 11), -240, 35,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), -700, 493,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), -760, -308,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), -931, 506,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -182, -488,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -254, 1500, -545, -820,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimCliffQuick_joint2[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, 0, 44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 0, 91, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, 0, 90, 124, 0, -44,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, 0, 218, 679,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -77,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 600, 732, 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), 0, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTNessAnimCliffQuick_joint3[20] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAY), 0, -33, 600, -218,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 18), 0, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), 0, -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimCliffQuick_joint5[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 8), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -89, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 178, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 357, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 27), 0, 0, 0, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -1, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTNessAnimCliffQuick_joint6[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2245, -62, -128, -21, 1815, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1898, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -270, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2430, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2426, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2641, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1908, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2085, 174,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -418, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2832, 56, -472, 96, 2295, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2529, 267, -225, 164, 1967, -230,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -47, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2296, 191, 1833, -125,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1512, -72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2052, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -47, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -107, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1478, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2074, -163, 1624, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2379, -305, -179, -72, 2046, 422,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimCliffQuick_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -483, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimCliffQuick_joint8[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -804,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), 0, 14,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTNessAnimCliffQuick_joint9[48] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -357, 20, 0, 17, 0, -15,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -144, -20,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 35), 300,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 35), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 15, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -626, -25, 0, -1, 0, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -448, 34, -2, 0, 86, 9,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNessAnimCliffQuick_joint11[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 44, 0, 0, 54, -18,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 35), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, -6, 0, 2, 0, -5,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), -182, -172,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 113, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimCliffQuick_joint12[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 636, 122, 1480, 1, 207, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 350, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1238, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 934, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 948, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1041, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 358, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 471, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1228, -95, 1081, 28, 703, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 850, -302, 1295, 135, 320, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 624, -188, 1353, 56, 166, -138,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 401, 17, 1447, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -145, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -186, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -96, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 399, -2, 1415, -32, -107, -11,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimCliffQuick_joint13[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -221, -252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -514, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTNessAnimCliffQuick_joint14[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1206, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 1429, 8, 0, -10, 0, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1337, -141, -162, -49, 98, 29,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTNessAnimCliffQuick_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimCliffQuick_joint17[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, -11, -42, 36, -9, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 213, -30, -153, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 167, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 271, 101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 388, -130,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 186, -16, -166, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 233, 8, -85, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 203, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 224, -8, -56, 28, -84, -91,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimCliffQuick_joint19[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTNessAnimCliffQuick_joint20[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2200, 25, 1959, 1, 2319, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 1923, -28, 2388, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -2515, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2638, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -2539, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2273, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2132, 140, 1899, -23, 2350, -37,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimCliffQuick_joint22[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 356, 6, 18, 2, 27, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 96, -48, 32, 0, 46, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTNessAnimCliffQuick_joint23[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, 1, 42, -4, -13, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 77, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 42, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 169, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 283, 106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 404, -123,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 89, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 12, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 50, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -23, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 225, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 22, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -47, -23, 48, 35, -81, -103,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimCliffQuick_joint25[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 14), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTNessAnimCliffQuick_joint26[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1824, -2, -1795, -4, 2097, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1953, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 2170, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 2085, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2189, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2249, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2065, -196, -1911, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1855, -129, -1855, 45, 2165, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1807, -48, -1819, 36, 2134, -30,
	ftAnimEnd(),
	0x400E, 0x0000, 0x0000, 0x0000, 0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x200F, 0x000A, 0x019F, 0x0003, 0x0007, 0x0001, 0xFFF1, 0xFFFE, 0x200F, 0x0005, 0x0034, 0xFFF2, 0x000F, 0x0015, 0xFFE2, 0xFFE0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
