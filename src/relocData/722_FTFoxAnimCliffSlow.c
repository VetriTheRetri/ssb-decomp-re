/* AnimJoint data for relocData file 722 (FTFoxAnimCliffSlow) */
/* 2384 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimCliffSlow_joint1[24];
extern u16 dFTFoxAnimCliffSlow_joint2[14];
extern u16 dFTFoxAnimCliffSlow_joint3[30];
extern u16 dFTFoxAnimCliffSlow_joint5[22];
extern u16 dFTFoxAnimCliffSlow_joint6[108];
extern u16 dFTFoxAnimCliffSlow_joint7[56];
extern u16 dFTFoxAnimCliffSlow_joint8[10];
extern u16 dFTFoxAnimCliffSlow_joint9[28];
extern u16 dFTFoxAnimCliffSlow_joint11[10];
extern u16 dFTFoxAnimCliffSlow_joint12[124];
extern u16 dFTFoxAnimCliffSlow_joint13[48];
extern u16 dFTFoxAnimCliffSlow_joint14[44];
extern u16 dFTFoxAnimCliffSlow_joint16[10];
extern u16 dFTFoxAnimCliffSlow_joint17[100];
extern u16 dFTFoxAnimCliffSlow_joint19[40];
extern u16 dFTFoxAnimCliffSlow_joint21[126];
extern u16 dFTFoxAnimCliffSlow_joint22[106];
extern u16 dFTFoxAnimCliffSlow_joint24[38];
extern u16 dFTFoxAnimCliffSlow_joint25[108];
extern u16 dFTFoxAnimCliffSlow_joint26[92];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimCliffSlow_joints[] = {
	(u32)dFTFoxAnimCliffSlow_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimCliffSlow_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimCliffSlow_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimCliffSlow_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimCliffSlow_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimCliffSlow_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimCliffSlow_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimCliffSlow_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimCliffSlow_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimCliffSlow_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimCliffSlow_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimCliffSlow_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimCliffSlow_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimCliffSlow_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimCliffSlow_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimCliffSlow_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimCliffSlow_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimCliffSlow_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimCliffSlow_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimCliffSlow_joint26, /* [25] joint 26 */
	0xFFFF023B, /* [26] END */
};

/* Joint 1 */
u16 dFTFoxAnimCliffSlow_joint1[24] = {
	ftAnimSetValAfter(FT_ANIM_TRAZ), -240,
	ftAnimSetVal0Rate(FT_ANIM_TRAY), -1800,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 10), -1620,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 10), 0,
	ftAnimSetValT(FT_ANIM_TRAX, 30), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), -1620,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 20), -1320, 157,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimCliffSlow_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX), 60,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 912, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 20), -120,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 20), 60, 69,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTFoxAnimCliffSlow_joint3[30] = {
	ftAnimSetValAfter(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -625, -804,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -268, 29,
	ftAnimSetValT(FT_ANIM_TRAX, 47), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 357, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimCliffSlow_joint5[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 536,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 268, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -178, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimCliffSlow_joint6[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1280, -10, -428, 9, 1558, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 141, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1269, -35, 1487, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1309, -41, 1501, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1686, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1627, -45,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 144, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 204, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1737, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1734, 16,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1671, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -1489, 94,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1747, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1651, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 190, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -7, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -78, -66, 1600, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -502, -15, 951, -48,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1393, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1095, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -986, 109, -520, -18, 901, -50,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimCliffSlow_joint7[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -129, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -299, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -336, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -110, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -7, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -50, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -297, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -427, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -1239, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1263, -24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimCliffSlow_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimCliffSlow_joint9[28] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 446,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), -536, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 20), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 20), 111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -178, 23,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 20), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimCliffSlow_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimCliffSlow_joint12[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 509, -3, 318, 6, 763, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 837, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 388, -22, 363, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 377, 28, 257, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 445, -268, 228, -365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -160, -68, -473, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 307, 317, 976, 200, -80, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 473, 48, 1238, 160, 84, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 367, -27, -68, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1298, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1739, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 350, -14, -76, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 476, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 159, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1751, 10, 159, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1653, -62, 97, -23,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 515, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 629, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1598, -52, 84, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1321, -27, 105, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 624, -5, 1295, -25, 104, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimCliffSlow_joint13[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -915, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -679, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -472, 335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -376, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -455, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -773, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -809, -35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTFoxAnimCliffSlow_joint14[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 30), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 178, 17, 0, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 178, -11, 178, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 0, -8, 268, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 0, -4, 357, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -89, -3, 0, 0, 536, 12,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimCliffSlow_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimCliffSlow_joint17[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -98, 4, -130, -4, 51, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 353, 15, -87, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 62, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -67, -114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -526, -70,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 346, -46, -38, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -198, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -379, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -599, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -6, 26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -103, 121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 225, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -412, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -80, 48,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 263, 35, 16, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -271, -1, 25, 0,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -33, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 63, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, -5, -266, 4, 25, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimCliffSlow_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 5, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 308, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 755, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 561, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 5, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimCliffSlow_joint21[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1745, 9, -1502, 6, 2042, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1736, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1420, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1987, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1781, -174,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1586, 81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1666, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1658, 195,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1465, -72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1804, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1912, 238,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2293, -64,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1675, 113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2062, 45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2156, -103, -1803, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2022, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -1588, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2097, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 1989, 6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2009, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1579, -6,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1553, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1499, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1997, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1577, -1, -1514, -15, 2005, 8,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimCliffSlow_joint22[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1451, 6, -1597, -2, 1167, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1732, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 969, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -1184, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1168, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1940, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1769, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1482, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 894, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1309, 115,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1539, -74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1949, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1987, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1955, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1426, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1631, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1982, -26, 1641, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -1382, -15, 1630, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1966, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -1571, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1527, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1461, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, -14, -1405, -23, 1630, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimCliffSlow_joint24[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 821, 22,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1250, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1162, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 381, -301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimCliffSlow_joint25[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1678, -9, 1644, 3, -1753, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1961, 63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1563, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -2028, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2049, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1601, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1889, 64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1479, 87,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1380, 180, 1482, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1112, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1282, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1382, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1179, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1136, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1168, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1129, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1809, 5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1295, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1609, -4,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1162, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1152, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1799, 10, 1600, -9, -1159, -6,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimCliffSlow_joint26[92] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -714, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -815, -6, -249, -6, 42, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -861, 2, -148, 9, 305, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -763, 5, -40, 13, 110, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -761, 2, 78, 1, -549, -4,
	ftAnimEnd(),
	0x0000, 0x400E, 0xFF7A, 0x0000, 0x0000, 0x48E0, 0x0000, 0x0040, 0xFE3E, 0x200F, 0x000B, 0x0270, 0xFFEF, 0xFFC2, 0xFFFC, 0xFF5D, 0xFFF5, 0x200F, 0x0003, 0xFE8A, 0xFF78, 0xFFC2, 0x0016, 0xFF5D, 0xFFE6, 0x200F, 0x0005, 0xFE2B, 0x001F, 0x0077, 0xFFE9, 0xFE88, 0xFFFF, 0x200F, 0x0008, 0x0027, 0x0018, 0xFE95, 0x0007, 0xFF47, 0x0009, 0x2805, 0x000D, 0x011A, 0x002D, 0x380B, 0x000D, 0x0032, 0xFF4E, 0x0000, 0x0000,
};
