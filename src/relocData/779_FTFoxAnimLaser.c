/* AnimJoint data for relocData file 779 (FTFoxAnimLaser) */
/* 3488 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimLaser_joint1[26];
extern u16 dFTFoxAnimLaser_joint2[30];
extern u16 dFTFoxAnimLaser_joint4[42];
extern u16 dFTFoxAnimLaser_joint5[260];
extern u16 dFTFoxAnimLaser_joint6[108];
extern u16 dFTFoxAnimLaser_joint7[10];
extern u16 dFTFoxAnimLaser_joint8[24];
extern u16 dFTFoxAnimLaser_joint10[10];
extern u16 dFTFoxAnimLaser_joint11[256];
extern u16 dFTFoxAnimLaser_joint12[142];
extern u16 dFTFoxAnimLaser_joint13[34];
extern u16 dFTFoxAnimLaser_joint15[30];
extern u16 dFTFoxAnimLaser_joint16[120];
extern u16 dFTFoxAnimLaser_joint18[62];
extern u16 dFTFoxAnimLaser_joint20[120];
extern u16 dFTFoxAnimLaser_joint21[152];
extern u16 dFTFoxAnimLaser_joint23[62];
extern u16 dFTFoxAnimLaser_joint24[128];
extern u16 dFTFoxAnimLaser_joint25[38];
extern u16 dFTFoxAnimLaser_joint26[38];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimLaser_joints[] = {
	(u32)dFTFoxAnimLaser_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimLaser_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimLaser_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimLaser_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimLaser_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimLaser_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimLaser_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimLaser_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimLaser_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimLaser_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimLaser_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimLaser_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimLaser_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimLaser_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimLaser_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimLaser_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimLaser_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimLaser_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimLaser_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimLaser_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimLaser_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 912, -20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 48,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 720, -360,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 720, -360,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 30), 912,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), -600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), -418,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 25), -20,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimLaser_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, -338, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -290, -93,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -101,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -244,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -244, -290, -93,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -141, -338, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimLaser_joint4[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 312, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 14, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 125, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 145,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 312, 145, 241,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 156, 81,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 312,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 25), 309,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimLaser_joint5[260] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -109, 254, -165, 22, 258, -134,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -365, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 200, -198, 183, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -252, -341, 448, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -481, 189, -540, -87, 226, -484,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -173, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 125, 372, -520, -415,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -513, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 264, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 322, 31,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 7), 321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -31, 115, -446, 39,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 9), 159,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -534,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -534,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 10), -534,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 321,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 409, 23,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 159,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 142, -26,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -534, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -670, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -712, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -563, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 81, -111,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -357, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 426, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 227, -210,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -591, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -64, -219, -403, -43, -512, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -81, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -581, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -682, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -716, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -768, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -446, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -150, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -244, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -272, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -250, 153, -129, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 515, 288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -653, -15, -288, -254,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -292, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -637, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 639, 82, -712, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -570, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 595, -67,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -213, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -236, -59,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -523, 94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 251, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 494, -104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -51, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -270, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -182, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, -58, -165, 16, 258, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimLaser_joint6[108] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 180,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -377, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -547, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -906, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -964, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -933, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -899, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -421, 23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -421,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), -421,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -421, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 210,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -170, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -516, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -843, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -993, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -955, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -954, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1083, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -961, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -428, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -361, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -511, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -590, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -650, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 91,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimLaser_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 55),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimLaser_joint8[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 136, -72,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 19, -41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, 19, -41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -113, 136, -72,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimLaser_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 55),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimLaser_joint11[256] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1741, -299, 1336, -52, 1945, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1301, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1441, -29, 1936, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1681, 87, 1987, -526,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1616, 47, 1622, 141, 883, -934,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1776, 79, 1584, 8, 119, -396,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1625, -72, 350, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1639, 55,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 19), 1816,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1630, -34, 584, 284,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 17), 1545,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 919, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1047, 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 1050,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 1050,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1545, 5, 1816, -43, 1050, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1718, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1710, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 907, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 869, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 720, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1711, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1563, -73,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1741, 29, 760, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 575, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1807, -34,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1478, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1565, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 502, -89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 330, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1772, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1766, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 382, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1520, 2, 352, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1585, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 530, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 567, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 465, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 464, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1536, 51, 465, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1688, 93, 924, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1688, -27, 1724, 82, 1133, 246,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1666, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2167, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1854, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1746, -69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1525, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1614, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1586, 81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2320, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1754, 77, 2143, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1741, -12, 1336, -189, 1945, -198,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimLaser_joint12[142] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, -223,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -818, -325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1246, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1017, 515,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -214, 508,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -147, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -506, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -591, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -441, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -441,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), -441,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -441, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -237, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -414, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -682, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1055, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1070, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -944, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -737, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -802, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -776, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -798, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -816, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1035, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -854, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -988, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -953, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1139, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1084, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -908, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 313,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimLaser_joint13[34] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -73, 171, 220,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -73, 171, 220,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimLaser_joint15[30] = {
	ftAnimSetVal(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 38), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 804,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 1608,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 2412,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 3216,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 3216,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 5), 3216,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimLaser_joint16[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -405, 0, -223, -9, -26, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -363, 4, -266, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -199, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -147, 45,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 13), -78,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -360, 2, -259, 5,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 13), -256,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -320, 5,
	ftAnimBlock(0, 11),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -78, -118,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -256, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -143, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -315, -102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -244, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -117, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -137, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -233, 30, -312, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -287, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -224, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -135, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -27, 2,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -298, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -404, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, 0, -223, 1, -26, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTFoxAnimLaser_joint18[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, 12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 430, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 414, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 13), 408,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 408, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 176, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 145, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 150, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 372, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 368, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 354, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTFoxAnimLaser_joint20[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 46, 0, 125, 5, -56, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 86, -11,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 15), 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 13, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3, -10,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 14), 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 78, -5,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 13), 75,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 176,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2, 91, 75, 27, 176, 207,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 108, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 185, 68, 591, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 140, -56, 565, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 48, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 342, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 342, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -42, -7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 110, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 125, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 50, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 50, -3,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -48, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -55, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, -3, 125, 0, -56, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimLaser_joint21[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 355, 2, 137, 3, 134, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 105, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 209, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 273, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 231, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 316, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 180, 57,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 9), 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 178, -18,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 16), 157,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 318, 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 13), 320,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 320, 45, 157, -31, 237, -80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 396, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 161, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 75, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 90, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 249, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 368, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 265, -12,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 164, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 181, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 246, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 62, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 255, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 351, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 70, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 128, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 161, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 144, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 3, 137, -6, 134, 5,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimLaser_joint23[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, 22,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 561, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 726, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 550, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 604, 45,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 13), 672,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 672,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 709, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 689, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 448, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 449, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 771, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 754, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 354, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimLaser_joint24[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, -11, -102, -3, -226, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -386, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 65, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 31, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 88, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 132, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -341, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -408, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 105, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 103, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -408, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), -276, 19,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 132, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), 132,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 103,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 144, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 132, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -79, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -52, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 190, 14,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -261, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -233, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 203, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 16, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 140, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -94, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, 0, -102, -7, -226, 6,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimLaser_joint25[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 219,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), 261, 7, 0, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), 199, 23, 52, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 643, -17, 70, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 18), -163, -25, 199, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 0, 219,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTFoxAnimLaser_joint26[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -178, -122,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), 0, 5, 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), -42, 22, -29, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 402, 22, -47, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), 429, -25, -111, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -178, -122,
	ftAnimEnd(),
	0x0000,
};
