/* AnimJoint data for relocData file 1962 (FTPikachuAnimDash) */
/* 2896 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimDash_joint1[62];
extern u16 dFTPikachuAnimDash_joint2[70];
extern u16 dFTPikachuAnimDash_joint3[54];
extern u16 dFTPikachuAnimDash_joint5[38];
extern u16 dFTPikachuAnimDash_joint6[76];
extern u16 dFTPikachuAnimDash_joint7[16];
extern u16 dFTPikachuAnimDash_joint8[54];
extern u16 dFTPikachuAnimDash_joint9[10];
extern u16 dFTPikachuAnimDash_joint10[70];
extern u16 dFTPikachuAnimDash_joint11[70];
extern u16 dFTPikachuAnimDash_joint13[38];
extern u16 dFTPikachuAnimDash_joint14[104];
extern u16 dFTPikachuAnimDash_joint16[14];
extern u16 dFTPikachuAnimDash_joint17[134];
extern u16 dFTPikachuAnimDash_joint19[48];
extern u16 dFTPikachuAnimDash_joint21[128];
extern u16 dFTPikachuAnimDash_joint22[146];
extern u16 dFTPikachuAnimDash_joint24[48];
extern u16 dFTPikachuAnimDash_joint25[216];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimDash_joints[] = {
	(u32)dFTPikachuAnimDash_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimDash_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimDash_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimDash_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimDash_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimDash_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimDash_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimDash_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimDash_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimDash_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimDash_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimDash_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimDash_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimDash_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimDash_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimDash_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimDash_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimDash_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimDash_joint25, /* [24] joint 25 */
	0xFFFF02AC, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimDash_joint1[62] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 675, 108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, 33, -28,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -1, -2, 721, 734, -125, -463,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 1, 951, 169, -65, 22,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, 0, 953, -12, -94, 46,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 929, -115, 15, 305,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 852, -327, 172, 274,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 765, -353, 152, -129,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 675, 108,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimDash_joint2[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 20, 133, 32,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 547, 142, -49, -61, 8, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 447, 1, -52, 0, 11, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 739, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -52, 0, 11, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -49, 0, 17, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 978, 7, -48, -1, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 795, -98, -57, 0, 7, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 586, -193, -47, 47, 7, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 20, 133, 32,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimDash_joint3[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 0, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, -15, 23, 2, 15, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -198, -5, 32, 0, 3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -149, 40, 34, -1, 8, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 87, 59, 20, -4, 14, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 88, -25, 18, -5, 14, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimDash_joint5[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 213, -37, -143, 106, 415, 86,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 267, 35, 97, 46, 442, 8,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 303, 41, -26, -116, 436, -93,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimDash_joint6[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, 236, -56, -200, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -37, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 804, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -247, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -197, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -704, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -981, -214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1139, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1249, -110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1324, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -10, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 229, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1295, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -977, 374,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -455, 388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 0, 236, 6, -200, 255,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimDash_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimDash_joint8[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -163, 20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -382, -26, -2, 13, -38, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -326, -1, -6, 0, -41, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -412, 17, 14, 1, -45, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -164, 166, 5, -29, -38, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 85, 80, -75, -84, -5, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimDash_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 23),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimDash_joint10[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 97, 0, -17, 0, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 291, -45, -53, -1, 211, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -271, -63, -6, 5, -12, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -280, 27, -6, 0, -10, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 54, 45, 1, 1, 1, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 128, 81, 3, 7, 3, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 300, -64, 24, -1, 6, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimDash_joint11[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 87, 0, 4, 0, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 262, -54, 12, -1, -187, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -328, -63, -8, -2, -10, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -312, 28, -8, 1, -1, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 8, 44, 6, 1, 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 84, 83, 9, 6, 4, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 260, -42, 25, -4, 7, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimDash_joint13[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -176, 14, 41, 97, 441, 57,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -302, -1, 83, -50, 399, 16,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -181, -15, -83, -106, 483, -62,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimDash_joint14[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 0, 1707, 134, 1314, -295,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 803, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1841, 39, 1018, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1786, -57, 1109, 103,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1661, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1069, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 856, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 397, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 416, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 472, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1639, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1683, 85,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 355, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 219, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1795, 26, 325, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 323, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1702, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1749, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1743, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 493, 356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1037, 410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 0, 1703, -40, 1314, 276,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimDash_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimDash_joint17[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1550, -306, -1608, 439, 1205, -759,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1856, -183, -1169, 220, 445, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1917, -109, -1168, -13, 734, 364,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1295, -188,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2166, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1175, 346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1426, 236,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1660, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1573, -141,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1581, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2067, 107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1693, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1630, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1236, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1578, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1553, 1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1868, -172,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2032, 66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1552, 108, 1177, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1337, 108, 936, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1336, 27, 829, -87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1202, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 948, 221,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1957, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1696, 203, -1378, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1550, 146, -1608, -230, 1205, 257,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimDash_joint19[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 945, 21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 733, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 532, -363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 482, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 538, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 943, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 945, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimDash_joint21[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, 361, 128, 141, -353, 535,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 357, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 368, 154, 181, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 316, 70, 196, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 509, 108, 179, -69, 528, 194,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 262, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 534, -13, 586, 107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 67, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 743, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 229, -38, 683, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 704, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 146, 52,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 37, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 118, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 297, 89, 721, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 297, -172, 203, -9, 633, -354,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 104, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -47, -246, 12, -423,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -235, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -177, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 5, 49, 163, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -79, 0, 185, -17, -401, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 86, 128, -57, -353, 48,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimDash_joint22[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1480, 305, 1666, -329, -1797, -891,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1174, 137, 1336, -167, -2689, -351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1205, 11, 1331, -13, -2499, 278,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1329, 147,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1060, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2132, 307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1884, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1604, 133, -1615, 148,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1594, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1587, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1783, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1176, -135,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1761, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1594, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1502, -29,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1796, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2128, -235,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1464, 266,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1189, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1475, -85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1267, 57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1218, 30, -2416, -172,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1144, -28, -2483, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1447, 87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1429, 151,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1185, -79, -2421, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1303, -147, -2063, 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1480, -176, 1666, 237, -1797, 266,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimDash_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 806, 41,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 680, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 561, -340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 664, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 535, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 860, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 806, -54,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimDash_joint25[216] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, -347, 285, -317, -483, 564,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -175, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -352, -170, 80, 356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -345, -66, 228, 245,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -581, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 99, 90, 571, 177,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -130, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 584, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 777, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -511, 100, -165, -12, 730, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 121, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 157, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 606, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 666, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 670, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 74, -65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -265, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -101, -158,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 65, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 627, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 358, -376,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -186, 42, -125, -306,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -138, -8, -239, -83,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -74, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -174, 211, -393, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, 70, 285, 459, -483, -90,
	ftAnimEnd(),
	0x400E, 0xFFF2, 0x0000, 0xFFFD, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x200F, 0x0001, 0xFD6A, 0xFF33, 0x00F4, 0x0079, 0xFE00, 0xFF63, 0x200F, 0x0002, 0xFD8A, 0xFFC2, 0x016C, 0xFFB6, 0xFE23, 0x0002, 0x200F, 0x0002, 0xFC70, 0xFFBB, 0xFFCB, 0xFF92, 0xFE09, 0x0001, 0x200F, 0x0004, 0xFBEC, 0xFFF7, 0xFED6, 0xFFE4, 0xFE2B, 0x0000, 0x200F, 0x0003, 0xFC2E, 0x0000, 0xFF04, 0x0004, 0xFE08, 0xFFFE, 0x200F, 0x0005, 0xFBED, 0x0020, 0xFEF8, 0x0044, 0xFE16, 0x0004, 0x200F, 0x0004, 0xFD51, 0x00E0, 0x0168, 0x006F, 0xFE33, 0x0067, 0x200F, 0x0001, 0x004E, 0x0150, 0x0125, 0xFF4C, 0x001A, 0x00E5, 0x380F, 0x0001, 0xFFF2, 0x0000, 0xFFFD, 0x0000, 0x0000, 0x0000,
};
