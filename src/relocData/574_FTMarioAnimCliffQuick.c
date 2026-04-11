/* AnimJoint data for relocData file 574 (FTMarioAnimCliffQuick) */
/* 1632 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimCliffQuick_joint1[38];
extern u16 dFTMarioAnimCliffQuick_joint2[46];
extern u16 dFTMarioAnimCliffQuick_joint3[20];
extern u16 dFTMarioAnimCliffQuick_joint5[48];
extern u16 dFTMarioAnimCliffQuick_joint6[94];
extern u16 dFTMarioAnimCliffQuick_joint7[38];
extern u16 dFTMarioAnimCliffQuick_joint8[16];
extern u16 dFTMarioAnimCliffQuick_joint9[46];
extern u16 dFTMarioAnimCliffQuick_joint11[34];
extern u16 dFTMarioAnimCliffQuick_joint12[86];
extern u16 dFTMarioAnimCliffQuick_joint13[40];
extern u16 dFTMarioAnimCliffQuick_joint14[24];
extern u16 dFTMarioAnimCliffQuick_joint16[10];
extern u16 dFTMarioAnimCliffQuick_joint17[54];
extern u16 dFTMarioAnimCliffQuick_joint19[16];
extern u16 dFTMarioAnimCliffQuick_joint21[38];
extern u16 dFTMarioAnimCliffQuick_joint22[60];
extern u16 dFTMarioAnimCliffQuick_joint24[58];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimCliffQuick_joints[] = {
	(u32)dFTMarioAnimCliffQuick_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimCliffQuick_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimCliffQuick_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimCliffQuick_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimCliffQuick_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimCliffQuick_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimCliffQuick_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimCliffQuick_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimCliffQuick_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimCliffQuick_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimCliffQuick_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimCliffQuick_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimCliffQuick_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimCliffQuick_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimCliffQuick_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimCliffQuick_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimCliffQuick_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimCliffQuick_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0183, /* [24] END */
};

/* Joint 1 */
u16 dFTMarioAnimCliffQuick_joint1[38] = {
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
u16 dFTMarioAnimCliffQuick_joint2[46] = {
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
u16 dFTMarioAnimCliffQuick_joint3[20] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAY), 0, -33, 600, -218,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 18), 0, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), 0, -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimCliffQuick_joint5[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 8), 0, 0, 0, 0,
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
u16 dFTMarioAnimCliffQuick_joint6[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -636, -62, -1480, 17, 207, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 300, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1337, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -818, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -838, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1033, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 338, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1189, 100, 476, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1223, 56, -1136, -96, 687, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -921, 267, -1383, -164, 359, -230,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1564, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -688, 191, 225, -126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -443, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -93, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1548, 29, -132, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -467, -163, -1504, 57, 18, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -771, -303, -1432, 71, 438, 420,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimCliffQuick_joint7[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -483, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimCliffQuick_joint8[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -804,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 143, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), 0, 14,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTMarioAnimCliffQuick_joint9[46] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -357, 20, 0, 17, 0, -15,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 288,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -144, -20,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 35), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 15, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -626, -25, 0, -1, 0, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -448, 33, -2, 0, 86, 9,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimCliffQuick_joint11[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 44, 0, 0, 54, -18,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 35), 0, 0, 54, 0, -17, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, -6, 0, 2, 0, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -182, -10, 113, 6, -172, -9,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimCliffQuick_joint12[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2245, 122, 128, 2, 1815, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1966, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 370, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2557, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2565, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2650, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1986, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2080, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2837, -95, 527, -28, 2312, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2459, -302, 312, -133, 1929, -269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2231, -189, 259, -54, 1773, -139,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 2014, 16, 163, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1463, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1421, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1508, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2007, -6, 193, 29, 1500, -7,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimCliffQuick_joint13[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -221, -252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -514, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTMarioAnimCliffQuick_joint14[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1206, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 1429, 8, 0, -10, 0, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1337, -141, -162, -49, 98, 29,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimCliffQuick_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimCliffQuick_joint17[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1215, -11, -1565, -38, -1618, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), -1342, -2, -1443, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1336, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1234, 82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1414, -196,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1336, 26, -1441, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1228, 44, -1526, -40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1610, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1199, 28, -1553, -26, -1692, -81,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimCliffQuick_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTMarioAnimCliffQuick_joint21[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -592, 22, -350, -1, 711, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -311, 27, 775, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -876, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -977, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -854, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -671, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -599, 72, -291, 20, 742, -33,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimCliffQuick_joint22[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, 2, 42, -4, -13, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 89, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 74, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 165, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 279, 107,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 222, -195,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 96, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 12, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 59, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 45, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 18, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 24, -20, 48, 35, -84, -103,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimCliffQuick_joint24[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0720, 0xFFFC, 0xF8FD, 0xFFFC, 0x0831, 0x0001, 0x280D, 0x000E, 0xF8C0, 0x002E, 0x0867, 0xFFF4, 0x2003, 0x0008, 0x0826, 0x0068, 0x2003, 0x0001, 0x0888, 0x0050, 0x2003, 0x0004, 0x0805, 0xFF3B, 0x2003, 0x0001, 0x072C, 0xFF7D, 0x200F, 0x0001, 0x06FE, 0xFFD2, 0xF8E5, 0x0024, 0x0856, 0xFFEF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
