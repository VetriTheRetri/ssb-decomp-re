/* AnimJoint data for relocData file 2019 (FTPikachuAnimFTilt) */
/* 4448 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimFTilt_joint1[52];
extern u16 dFTPikachuAnimFTilt_joint2[60];
extern u16 dFTPikachuAnimFTilt_joint3[88];
extern u16 dFTPikachuAnimFTilt_joint5[86];
extern u16 dFTPikachuAnimFTilt_joint6[206];
extern u16 dFTPikachuAnimFTilt_joint7[86];
extern u16 dFTPikachuAnimFTilt_joint8[62];
extern u16 dFTPikachuAnimFTilt_joint9[10];
extern u16 dFTPikachuAnimFTilt_joint10[70];
extern u16 dFTPikachuAnimFTilt_joint11[70];
extern u16 dFTPikachuAnimFTilt_joint13[78];
extern u16 dFTPikachuAnimFTilt_joint14[188];
extern u16 dFTPikachuAnimFTilt_joint16[96];
extern u16 dFTPikachuAnimFTilt_joint17[188];
extern u16 dFTPikachuAnimFTilt_joint19[80];
extern u16 dFTPikachuAnimFTilt_joint21[206];
extern u16 dFTPikachuAnimFTilt_joint22[212];
extern u16 dFTPikachuAnimFTilt_joint24[80];
extern u16 dFTPikachuAnimFTilt_joint25[188];
extern u16 dFTPikachuAnimFTilt_joint26[66];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimFTilt_joints[] = {
	(u32)dFTPikachuAnimFTilt_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimFTilt_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimFTilt_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimFTilt_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimFTilt_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimFTilt_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimFTilt_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimFTilt_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimFTilt_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimFTilt_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimFTilt_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimFTilt_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimFTilt_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimFTilt_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimFTilt_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimFTilt_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimFTilt_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimFTilt_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimFTilt_joint25, /* [24] joint 25 */
	(u32)dFTPikachuAnimFTilt_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimFTilt_joint1[52] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 108,
	ftAnimSetValRate(FT_ANIM_TRAY), 675, 171,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -26, 0, -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 715, 444, 436, 722,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 953, 190, 559, 98,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 953, -80, 559, -89,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 843, -395, 436, -246,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 755, -221, 436, -135,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 704, -53, 352, -218,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 675, 108,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPikachuAnimFTilt_joint2[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 167, 32,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 612, 187, 1608, 300, -23, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 959, 34, 1670, 6, -247, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 959, -28, 1670, 7, -247, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 647, -42, 1758, 21, -127, 30,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 647, 0, 1758, -1, -127, 11,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -31, 81,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 23, 3384, 32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimFTilt_joint3[88] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, 0, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -102, -1, 67, 13, 13, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -18, 43, 39, -46, -187, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 27, 0, -72, 0, -44, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, -5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -90, -16, -97, -2, -58, -2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -90, -16, -97, 2, -58, -2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 27, 19, -72, 4, -44, 2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 27, 0, -72, 0, -44, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, 3, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -13, 0, -2,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimFTilt_joint5[86] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 321, -57, -50, 432, 347, 327,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 295, -520, 153, 713, 477, 216,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 61, -186, 306, 122, 455, -17,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 61, 82, 306, -153, 455, 61,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 174, 225, 95, -422, 540, 169,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 174, 271, 95, -205, 540, -355,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 344, 293, -33, -114, 318, -296,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 357, -44, 23, 4, 354, -58,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 315, -38, -30, -98, 280, -47,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimFTilt_joint6[206] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -39, 238, 40, -199, -470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 764, -85, 279, 181, -669, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 633, -31, 601, -138, 260, 420,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -412, 137,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 879, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 171, -433,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -605, -593,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1139, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 278, 369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 924, 47, 326, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1205, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 352, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 315, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1188, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1017, 108,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1207, -83, 279, -100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1012, 63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -176, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -903, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -881, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1165, 137, -1081, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1287, -24, -182, -30, -1176, 75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -311, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1115, -262, -930, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 762, 39, -675, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1195, 436, -170, 113, -839, -245,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1803, 26, 135, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1166, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1244, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1688, -286, 470, 875, -1498, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1230, 135, 1886, 810, -1037, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1960, 434, 2090, -55, -1895, -482,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2098, 141, 1775, -277, -2002, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1847, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2243, 134, 1534, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2368, 84, 1404, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, 43, 1369, -34, -1808, 39,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimFTilt_joint7[86] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -494,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -988, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 494,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -514, -314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -628, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -491, 346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -544, -637,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1275, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 637,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPikachuAnimFTilt_joint8[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -163, 20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, -114, 384, 158, -10, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -462, -121, 469, 0, -465, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -429, 3, 387, -8, -421, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -429, -3, 387, 7, -421, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -462, -8, 469, 20, -465, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -462, 32, 469, -45, -465, 34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -2, -163, 20,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimFTilt_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimFTilt_joint10[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -26, -2, 9, -3, 268, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -9, 150, -14, -3, 113, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 576, 58, -4, 1, 20, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 576, -92, -4, 0, 20, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -619, -48, -8, -4, 57, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 143, 75, -41, 1, 138, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -4, -20, 2, 5, 302, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimFTilt_joint11[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -89, 236, -261, 22, 293, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 944, 177, 90, 67, -481, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 622, -32, 8, -8, -40, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 622, -89, 8, 4, -40, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -547, -122, 66, 10, 2, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -484, 184, 102, -13, 44, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 967, 69, -46, -14, -385, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimFTilt_joint13[78] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -366, 135, -38, 264, 317, 332,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -256, 20, 69, 387, 479, -22,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -356, -80, 154, 68, 306, -138,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -356, 72, 154, -62, 306, 125,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -256, 200, 69, -170, 479, 346,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -256, 38, 69, 8, 479, -121,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -222, -72, 76, -77, 373, -217,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -331, -115, -10, -159, 257, -68,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimFTilt_joint14[188] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 401, 1700, -511, 1315, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1205, 568, 1188, -46, 961, 396,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1941, 56, 1608, 418, 2108, 396,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1317, -294, 2026, -42, 1753, -417,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1352, -247, 1524, -338, 1272, -643,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1254, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 822, -274, 466, -423,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 803, -23, 424, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 739, 63, 361, 85,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1235, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1308, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 822, 166, 1345, 94, 467, 193,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1253, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1250, 98, 1660, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1268, 13, 1532, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1310, 49, 1448, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1296, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1409, -97,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1381, 17, 1294, -123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 976, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1344, 63, 1244, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1579, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1508, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1743, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1810, 207, 791, -120, 1412, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 997, 447,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2158, -361, 1690, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1087, -655, 1438, -187,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1315, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 847, -136, 1629, 348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 815, -21, 1694, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -11, 1700, 6, 1315, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimFTilt_joint16[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -487,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -984, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 487,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -681, -405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -821, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -770, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -736, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -544, 368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -370, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimFTilt_joint17[188] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 51, 39, 0, -235, -405, -334,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4095, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -396, -203,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4095, 4095, 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 90, -198, -740, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -346, -97, -542, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -103, -151, -641, -3, -863, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -77, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -649, 45, -461, 367,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -12, 362, -127, 157,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 6553, 4915, 4915,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, 71, -89, -7, -146, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 29, 28, -77, -16, -131, 55,
	ftAnimBlock(0, 3),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 21), 4095, 4095, 4095,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 81, 98, -108, 25, -39, -140,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 288, 36, 64, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -412, -297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -634, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 299, 18, 21, 24, -562, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 36, -256, -34, -304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -713, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -921, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1011, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -574, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -256, -216, -404, -241,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -436, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -396, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -648, -91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -25, 153,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -316, 180, -646, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -74, 158, -527, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 51, 77, 0, 74, -405, 121,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimFTilt_joint19[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 950, -72,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 877, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1002, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 872, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 661, -436,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 549, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 536, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 229, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 890, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 860, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 737, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 801, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 979, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 950, -29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTPikachuAnimFTilt_joint21[206] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1622, -226, -1739, 286, 1254, 354,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4095, 4095,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4095, 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1395, -86, -1453, 67, 1608, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1448, -133, -1604, -173, 1299, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1128, -128, -1799, -258, 1511, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1191, 209, -2122, 45, 1216, 361,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1546, 156, -1709, 229, 2233, 540,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 6144, 6144, 6144,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1505, -37, -1663, 30, 2296, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2344, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1648, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1507, -72,
	ftAnimBlock(0, 3),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 21), 4096, 4095, 4095,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2324, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1577, 121, 2085, -384,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1383, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1413, 1, 1555, -305,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1531, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1473, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1418, -11, 1402, -65,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1451, -206, 1507, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1446, -92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1472, 332,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1773, -265, 1560, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1894, 194, -1983, -36, 1802, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1861, 112, -1846, 78, 1719, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1755, -118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1845, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2119, 149,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1920, -240,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1566, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1679, -141, -1756, 54, 1372, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1637, -41, -1736, 19, 1315, -57,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimFTilt_joint22[212] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 123, -312, -56, 271, -187, -152,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4095, 4095,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4095, 4095, 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -189, 63, 215, -15, -339, -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 250, 159, -86, -57, -750, -398,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -80, 76, 237, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1136, -314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1379, 493,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 281, 206, -92, -170, -148, 603,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 6553, 4915, 4915,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 385, 49, -112, -3,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -172, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -148, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 432, 41, -111, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 414, -40, -91, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 21), 4095, 4095, 4095,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 359, -248, -20, 253, -131, -579,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -82, -283, 415, 196, -1306, -638,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -207, -86, 371, -33, -1408, -107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -74, 216,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 284, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1521, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1335, 277,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -567, 304,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 175, 176,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 336, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 85, -169, -356, 149,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 30, 136,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -390, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 397, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 158, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 218, 104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -25, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -281, 122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -157, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 154, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 124, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 123, -1, -56, -30, -187, -29,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimFTilt_joint24[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 805, -76,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 728, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 894, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 425, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 964, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -479,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 726, 414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 835, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 886, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 732, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 627, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 755, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 885, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 812, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 787, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 805, 17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimFTilt_joint25[188] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1606, 339, 1320, 268, -2089, 232,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4095, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1267, -137, 1588, 200, -1856, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1881, -323, 1720, 213, -1722, 470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1915, 217, 2014, -47, -915, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1446, -96, 1625, -299, -1617, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2108, -299, 1415, -77, -953, 345,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 6144, 6144, 6144,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2045, 39, 1469, 41, -926, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -2015, 2, 1519, -6, -921, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 21), 4095, 4096, 4096,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2021, -318, 1512, -43, -926, -261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2653, 160, 1432, 237, -1444, -290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1701, 535, 1988, 282, -1507, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1663, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1997, -2, -1580, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1983, -54, -1564, -110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1999, -149,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1378, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1532, 87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1393, 106,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2100, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1933, 115,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1379, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1304, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1274, 53, -1846, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1549, -97, -2067, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1606, -57, 1320, 15, -2089, -21,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimFTilt_joint26[66] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, -116, -40, -8, -249, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -596, -41, -40, 0, 325, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -596, 32, -40, 0, 325, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -179, -69, -29, -37, 231, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1218, -94, -381, -15, 233, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -953, 171, -154, 54, 152, -33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -14, 0, -3,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
