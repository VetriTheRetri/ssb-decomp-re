/* AnimJoint data for relocData file 2018 (FTPikachuAnimFTiltHigh) */
/* 4448 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimFTiltHigh_joint1[52];
extern u16 dFTPikachuAnimFTiltHigh_joint2[60];
extern u16 dFTPikachuAnimFTiltHigh_joint3[88];
extern u16 dFTPikachuAnimFTiltHigh_joint5[86];
extern u16 dFTPikachuAnimFTiltHigh_joint6[204];
extern u16 dFTPikachuAnimFTiltHigh_joint7[86];
extern u16 dFTPikachuAnimFTiltHigh_joint8[62];
extern u16 dFTPikachuAnimFTiltHigh_joint9[10];
extern u16 dFTPikachuAnimFTiltHigh_joint10[70];
extern u16 dFTPikachuAnimFTiltHigh_joint11[70];
extern u16 dFTPikachuAnimFTiltHigh_joint13[78];
extern u16 dFTPikachuAnimFTiltHigh_joint14[182];
extern u16 dFTPikachuAnimFTiltHigh_joint16[92];
extern u16 dFTPikachuAnimFTiltHigh_joint17[208];
extern u16 dFTPikachuAnimFTiltHigh_joint19[78];
extern u16 dFTPikachuAnimFTiltHigh_joint21[206];
extern u16 dFTPikachuAnimFTiltHigh_joint22[216];
extern u16 dFTPikachuAnimFTiltHigh_joint24[80];
extern u16 dFTPikachuAnimFTiltHigh_joint25[244];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimFTiltHigh_joints[] = {
	(u32)dFTPikachuAnimFTiltHigh_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimFTiltHigh_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimFTiltHigh_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimFTiltHigh_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimFTiltHigh_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimFTiltHigh_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimFTiltHigh_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimFTiltHigh_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimFTiltHigh_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimFTiltHigh_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimFTiltHigh_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimFTiltHigh_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimFTiltHigh_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimFTiltHigh_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimFTiltHigh_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimFTiltHigh_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimFTiltHigh_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimFTiltHigh_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimFTiltHigh_joint25, /* [24] joint 25 */
	0xFFFF0436, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimFTiltHigh_joint1[52] = {
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
u16 dFTPikachuAnimFTiltHigh_joint2[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 167, 32,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 612, 204, 1608, 300, -23, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1046, 34, 1670, 6, -247, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 959, -36, 1670, 7, -247, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 647, -42, 1758, 21, -127, 30,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 647, 0, 1758, -1, -127, 11,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -31, 81,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 23, 3384, 32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPikachuAnimFTiltHigh_joint3[88] = {
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
u16 dFTPikachuAnimFTiltHigh_joint5[86] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 321, -57, -50, 432, 347, 327,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 295, -520, 153, 713, 477, 216,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 61, -186, 306, 122, 455, -17,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 61, 82, 306, -153, 455, 61,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 174, 225, 95, -422, 540, 169,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 174, 271, 95, -205, 540, -355,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 344, 293, -33, -114, 318, -296,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 357, -46, 23, 5, 354, -60,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 315, -38, -30, -98, 280, -47,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 324, -62, 313,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimFTiltHigh_joint6[204] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, -41, 1369, -43, -1808, -465,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2371, -84, 1325, -177, -2273, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2244, -30, 1014, 141, -1356, 417,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 2021, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2310, 56, -1437, -428,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2357, 136, -2213, -781,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2582, 127, 1254, -394, -3001, -422,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2611, 28, 1232, -18, -3058, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2831, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2625, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1218, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1283, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2816, -96, 1329, 108,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 2621, 67, 1603, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2507, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2490, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2773, 137, 1784, 93, -2690, -147,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1844, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2895, -24, -2784, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2724, -262, -2539, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2371, 39, 1920, -32, -2284, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2803, 436, 1778, -114, -2447, -245,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3411, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1691, -153, -2775, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1472, -276, -2853, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3280, -290, 1139, -875, -3129, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2830, 144, -278, -810, -2636, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3568, 438, -482, 55, -3503, -487,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3707, 141, -167, 277, -3610, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3456, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3852, 134, 73, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3977, 84, 204, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4021, 43, 238, 34, -3416, 39,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimFTiltHigh_joint7[86] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -489,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -988, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 489,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -514, -314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -628, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -491, 346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -573, -634,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1268, 286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 634,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -10,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimFTiltHigh_joint8[62] = {
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
u16 dFTPikachuAnimFTiltHigh_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimFTiltHigh_joint10[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -26, -2, 9, -3, 268, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -9, 150, -14, -3, 113, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 576, 58, -4, 1, 20, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 576, -92, -4, 0, 20, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -619, -48, -8, -4, 57, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 143, 76, -41, 1, 138, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -4, -20, 2, 5, 302, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimFTiltHigh_joint11[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -89, 236, -261, 22, 293, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 944, 177, 90, 67, -481, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 622, -32, 8, -8, -40, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 622, -89, 8, 4, -40, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -547, -122, 66, 10, 2, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -484, 189, 102, -14, 44, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 967, 69, -46, -14, -385, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimFTiltHigh_joint13[78] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -324, -62, 313,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -366, 135, -38, 264, 317, 332,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -256, 20, 69, 387, 479, -22,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -356, -80, 154, 68, 306, -138,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -356, 72, 154, -62, 306, 125,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -256, 200, 69, -170, 479, 346,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -256, 38, 69, 8, 479, -121,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -222, -74, 76, -79, 373, -222,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -331, -115, -10, -159, 257, -68,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -324, -62, 313,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimFTiltHigh_joint14[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 421, 1700, -512, 1315, -342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1225, 567, 1188, -47, 973, 393,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1939, 48, 1606, 417, 2102, 387,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1322, -293, 2023, -40, 1749, -415,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1352, -355, 1524, -367, 1272, -777,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1215, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 610, -371, 194, -556,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 609, -5, 159, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 716, 87, 332, 117,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1204, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1298, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 822, 179, 1345, 100, 467, 210,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1253, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1250, 96, 1663, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1268, 13, 1532, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1446, -113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1380, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1296, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1406, -92,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1295, -122,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 973, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1350, 60, 1253, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1731, 171, 1563, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1843, 220, 790, -121, 1445, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 997, 448,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2172, -378, 1704, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1087, -662, 1438, -194,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1315, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 847, -136, 1629, 348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 815, -21, 1694, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -11, 1705, 11, 1315, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimFTiltHigh_joint16[92] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -492,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -984, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 487,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -681, -410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -821, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -769, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -730, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -528, 360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -370,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimFTiltHigh_joint17[208] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 51, 39, 0, -235, -405, -330,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4095, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -393, -201,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4095, 4095, 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 90, -197, -736, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -344, -96, -532, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -101, -152, -637, -4, -850, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -649, 86, -402, 205, -461, 474,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 71, 389, -226, 78, 99, 272,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 7372, 4915, 4915,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -256, -7,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 129, 44, 83, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 58, -16, 184, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -259, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -223, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 21), 4095, 4095, 4095,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 42, 84, -207, 98, 215, -298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 227, 118, -26, 109, -412, -376,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 279, 36, 10, 23, -537, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 348, -44, 225, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -562, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -712, -110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -918, -86,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 263, -156, 209, -129,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -254, -215, -403, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1011, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -574, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -394, -197, -517, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -316, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -648, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -578, 196,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -25, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -646, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -74, 158, -527, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 51, 77, 0, 74, -405, 121,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimFTiltHigh_joint19[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 950, -72,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 877, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1001, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 870, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 661, -435,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -330,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 549, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 326, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 229, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 540, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 891, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 861, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 737, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 801, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 979, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 950, -29,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPikachuAnimFTiltHigh_joint21[206] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 14, -229, 131, -286, -354, 353,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4095, 4095,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4095, 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -215, -92, -154, -68, 0, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -171, -140, -5, 171, -309, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -496, -122, 187, 259, -99, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -416, 169, 513, -83, -392, 387,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -157, 119, 21, -250, 675, 551,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 6144, 6144, 6144,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -177, -15, 12, -6, 710, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 748, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 11, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -181, -29,
	ftAnimBlock(0, 3),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 21), 4096, 4095, 4095,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 742, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -69, -106, 549, -397,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -204, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -194, 54, -53, -299,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -76, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -48, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -189, 1, -205, -108,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -161, 208, -99, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -162, -92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -136, 332,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 165, 267, -48, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 281, 194, 374, 36, 189, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 252, 114, 237, -78, 110, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 147, -118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 236, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 510, 150,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 311, -240,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -42, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 70, -141, 148, -54, -235, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 29, -41, 128, -19, -293, -57,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimFTiltHigh_joint22[216] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 123, -311, -56, 273, -187, -148,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4095, 4095,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4095, 4095, 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -188, 62, 216, -17, -335, -277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 247, 156, -90, -58, -741, -396,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -80, 70, 237, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1129, -318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1379, 560,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 266, 195, -212, -234, -8, 674,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 7372, 4915, 4915,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 348, 30,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -231, -12, -30, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 50, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -238, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -216, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 370, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 276, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 21), 4095, 4095, 4095,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, 147, 86, -121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 415, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 301, -179, -193, -696,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -82, -254, -1306, -607,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -207, -86, 371, -33, -1408, -107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -74, 217,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 284, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1521, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -563, 304,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 176, 176,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 336, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 84, -169, -354, 147,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 32, 136,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -390, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 397, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 158, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 219, 104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -25, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -281, 122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -157, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 154, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 124, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 123, -1, -56, -30, -187, -29,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimFTiltHigh_joint24[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 805, -78,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 727, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 893, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 431, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 964, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -482,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 650, 363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 726, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 884, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 730, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 627, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 756, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 885, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 812, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 787, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 805, 17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimFTiltHigh_joint25[244] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1606, 329, 1320, 269, -2089, 232,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4095, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1277, -153, 1589, 198, -1856, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1914, -340, 1717, 212, -1724, 466,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1958, 234, 2015, -46, -923, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1446, 39, 1625, -309, -1617, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1879, -190, 1396, -82, -811, 396,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 6144, 6144, 6144,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1826, 32, 1460, 46, -823, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1937, -49, 1499, -5, -821, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 21), 4095, 4096, 4096,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1998, -219, 1493, -169, -811, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2377, 148, 1160, 247, -911, -348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1701, 397, 1988, 418, -1507, -334,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1663, 25, -1564, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1997, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1983, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1379, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1531, 88, -1801, -218,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1393, 106, -1932, 114,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1379, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1304, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1274, 53, -1846, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1549, -97, -2067, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1606, -57, 1320, 15, -2089, -21,
	ftAnimEnd(),
	0x400E, 0xFFF2, 0x0000, 0xFFFD, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x200F, 0x0001, 0xFFC4, 0xFFB1, 0xFFD8, 0xFFF8, 0xFF07, 0x0041, 0x200F, 0x0004, 0xFE65, 0xFFE5, 0xFFD8, 0x0000, 0x0145, 0x002C, 0x200F, 0x0009, 0xFE65, 0x0011, 0xFFD8, 0x0000, 0x0145, 0xFFF9, 0x200F, 0x0004, 0xFF4D, 0xFFA7, 0xFFE3, 0xFFDB, 0x00E7, 0xFFF6, 0x200F, 0x0005, 0xFB3E, 0xFFA0, 0xFE83, 0xFFF1, 0x00E9, 0xFFF7, 0x200F, 0x0003, 0xFC47, 0x00AB, 0xFF66, 0x0036, 0x0098, 0xFFDF, 0x380F, 0x0004, 0xFFF2, 0x0000, 0xFFFD, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
