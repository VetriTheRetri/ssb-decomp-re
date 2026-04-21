/* AnimJoint data for relocData file 1499 (FTPurinAnimThrowF) */
/* 2976 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimThrowF_joint1[140];
extern u16 dFTPurinAnimThrowF_joint2[48];
extern u16 dFTPurinAnimThrowF_joint3[14];
extern u16 dFTPurinAnimThrowF_joint5[38];
extern u16 dFTPurinAnimThrowF_joint6[148];
extern u16 dFTPurinAnimThrowF_joint7[22];
extern u16 dFTPurinAnimThrowF_joint9[34];
extern u16 dFTPurinAnimThrowF_joint10[156];
extern u16 dFTPurinAnimThrowF_joint11[14];
extern u16 dFTPurinAnimThrowF_joint13[12];
extern u16 dFTPurinAnimThrowF_joint14[138];
extern u16 dFTPurinAnimThrowF_joint16[68];
extern u16 dFTPurinAnimThrowF_joint18[220];
extern u16 dFTPurinAnimThrowF_joint19[128];
extern u16 dFTPurinAnimThrowF_joint21[22];
extern u16 dFTPurinAnimThrowF_joint22[178];
extern u16 dFTPurinAnimThrowF_joint23[62];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTPurinAnimThrowF_joints[] = {
	(u32)dFTPurinAnimThrowF_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimThrowF_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimThrowF_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimThrowF_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPurinAnimThrowF_joint6, /* [5] joint 6 */
	(u32)dFTPurinAnimThrowF_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimThrowF_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTPurinAnimThrowF_joint10, /* [9] joint 10 */
	(u32)dFTPurinAnimThrowF_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimThrowF_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPurinAnimThrowF_joint14, /* [13] joint 14 */
	(u32)dFTPurinAnimThrowF_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPurinAnimThrowF_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTPurinAnimThrowF_joint19, /* [18] joint 19 */
	(u32)dFTPurinAnimThrowF_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPurinAnimThrowF_joint22, /* [21] joint 22 */
	(u32)dFTPurinAnimThrowF_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTPurinAnimThrowF_joint1[140] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 480, -7, 0, 114, 4096, -81, 3686, 0, 4096, -81,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAY, 3), 540, 0, 3276, 102,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), 143, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAZ, 3), 0, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 0, -3, 1007, 2, 4096, 0, 4096, 0, 4096, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), -157, -2,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 1007, 2, 4096, 0, 4096, -1, 4096, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 3), -153, 2,
	ftAnimSetValRateT(FT_ANIM_TRAX, 7), 150, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 11), 143, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_TRAX, 10), 0, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 0, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_SCAY, 3), 4096, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAZ, 4), 788, -840, 4097, 0, 4097, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 6), 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 5), 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAY, 4), 2867,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 3), 4097, 0, 4097, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 425, 2,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 600, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 0, 4096, 0, 4096, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPurinAnimThrowF_joint2[48] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -47, -536, -160, 0, 89,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -312, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -910, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -142, 0, 268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -143, 268,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -463,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 38), -6702,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -142, 0, 268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 26), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPurinAnimThrowF_joint3[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPurinAnimThrowF_joint5[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -357, 109, -388, -183,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 40), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 134, -371, -267,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 104, -316, -93,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 5, 0, -264, 58, 0, 128,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), -310, -380, 237,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPurinAnimThrowF_joint6[148] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1553, 10, -420, 25, -1557, -44,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -354, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1644, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1624, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1556, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1331, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -393, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -441, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1589, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1582, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1327, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 1631, 19,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1595, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1928, -25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -440, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -402, -10,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1647, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1756, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -420, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -682, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1960, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2315, -151,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1873, 112,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2137, 199,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2503, -237,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3010, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2380, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2559, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2631, 287, -652, 20, -3109, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3134, 503, -641, 10, -3130, -21,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimThrowF_joint7[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 22), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPurinAnimThrowF_joint9[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 357, -58, -294, -270,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 40), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -22, -307, -212,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 110, 117, -393, -46, -8, 182,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 284, -420, 282,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPurinAnimThrowF_joint10[156] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 585, 479, 178, 56, 560, 50,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 951, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1065, 313, 234, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1212, 193, 400, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1451, 358, 564, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1930, 470, 564, -16, 1331, 304,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 472, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1884, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2392, 463,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2856, 350,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 3161, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3157, -6, 471, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), 2998, -15, 385, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1871, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 1560, -13,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2969, -46, 383, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2628, -72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 693, 58,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1544, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1416, -113,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2562, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2471, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2270, -508, 746, 35, 1252, -472,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 662, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1455, -577, 471, -548,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1115, -213, 155, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1027, -519, 80, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 77, -950, 645, -17, 80, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimThrowF_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPurinAnimThrowF_joint13[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -50, -61, -1676, 106, -21, 16,
	_FT_ANIM_CMD(11, 0, 1), 8,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimThrowF_joint14[138] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -46, -16, -322, 5, 255, 11,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -135, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -80, 38, 300, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 12, 82, 166, -150,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 27, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 89, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 28, 0, 88, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 89, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 9, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -134, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -140, -9,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 96, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 184, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -153, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -322, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -11, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 141, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 158, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -106, -33, 321, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 264, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -28, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -321, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -306, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 240, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 5, -302, 3, 237, -3,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimThrowF_joint16[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 484, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 466, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 399, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 398, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 393, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 376, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 191, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 295, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 294, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -147,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPurinAnimThrowF_joint18[220] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -819, 394, -484, 415, -2792, 288,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -37, 372, 273, 339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2504, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2389, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 321, 50, 609, 185, -2366, -416,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 63, -145, 643, -93, -3223, -394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 31, 30, 422, -151, -3154, 171,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 203, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 340, 11, -2881, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 445, 91, -2719, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 9, -156, 522, -18, -2927, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, -16, 408, -130, -3123, -93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 187, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -24, 74, -3114, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2981, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 39, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 188, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 245, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2995, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -3017, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 40, -2, 250, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 181, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -22, -19,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3009, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -3052, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3089, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3135, -49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 164, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -36, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -41, 8, -3220, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5, 67, -3494, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 93, -15, -3602, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3394, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -36, -117, -36, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -156, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -141, -91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -301, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3361, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -3318, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -310, -8, -167, -10, -3307, 10,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimThrowF_joint19[128] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1654, 17, -1931, 4, 1863, 21,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1925, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1888, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1638, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1618, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1704, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1912, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -1851, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1901, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 2326, 20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1714, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1951, 4,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1845, 1, 2344, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2141, -153,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1838, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1945, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1654, -18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1974, -122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1865, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1803, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1896, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1652, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1630, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1849, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1839, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1629, 0, -1911, -14, 1841, 2,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimThrowF_joint21[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 21), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPurinAnimThrowF_joint22[178] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 344, -165, 195, 47, -125, 59,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 292, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 178, -57, -66, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 230, 12, 178, 241,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 642, 267,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -139, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 244, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 119, -118,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 952, 280,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1294, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -30, -104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -101, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -244, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -301, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1315, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 1125, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -100, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 7, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -309, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -303, 13,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1111, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1077, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -282, 46, 8, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -67, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -211, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -60, 743, 1034, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1275, 150, -179, 50, 826, -599,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 240, -536, 33, 137, -164, -530,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 203, -9, 95, 50, -235, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 177, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 220, 11, -242, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 288, 28, -113, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, 21, 176, 0, -99, 13,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPurinAnimThrowF_joint23[62] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 1608, 0, 0, 0, -3, -2195, 840, 11,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY), 360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1034, 282, 1251, -33, 759, 178, -886, -5, 31, -9, -172, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1340, 1429,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1697, 232, -360, 2445, 383, 2575, -360, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1965, 180, 912, 36,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 32), 1965, 1340, 1429, 180, 912, 36,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
