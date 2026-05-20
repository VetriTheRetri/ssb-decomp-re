/* AnimJoint data for relocData file 433 (FTCaptainAnimDollFall) */
/* 3632 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimDollFall_joint1[46];
extern u16 dFTCaptainAnimDollFall_joint2[58];
extern u16 dFTCaptainAnimDollFall_joint3[70];
extern u16 dFTCaptainAnimDollFall_joint5[76];
extern u16 dFTCaptainAnimDollFall_joint6[210];
extern u16 dFTCaptainAnimDollFall_joint7[94];
extern u16 dFTCaptainAnimDollFall_joint8[8];
extern u16 dFTCaptainAnimDollFall_joint9[10];
extern u16 dFTCaptainAnimDollFall_joint11[10];
extern u16 dFTCaptainAnimDollFall_joint12[248];
extern u16 dFTCaptainAnimDollFall_joint13[80];
extern u16 dFTCaptainAnimDollFall_joint17[8];
extern u16 dFTCaptainAnimDollFall_joint18[208];
extern u16 dFTCaptainAnimDollFall_joint20[68];
extern u16 dFTCaptainAnimDollFall_joint22[72];
extern u16 dFTCaptainAnimDollFall_joint23[216];
extern u16 dFTCaptainAnimDollFall_joint25[72];
extern u16 dFTCaptainAnimDollFall_joint26[210];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTCaptainAnimDollFall_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimDollFall_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimDollFall_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimDollFall_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTCaptainAnimDollFall_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTCaptainAnimDollFall_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimDollFall_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimDollFall_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimDollFall_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTCaptainAnimDollFall_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTCaptainAnimDollFall_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimDollFall_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimDollFall_joint17, /* [13] joint 17 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTCaptainAnimDollFall_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTCaptainAnimDollFall_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTCaptainAnimDollFall_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTCaptainAnimDollFall_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTCaptainAnimDollFall_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTCaptainAnimDollFall_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTCaptainAnimDollFall_joint1[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 205, -106, -698, 334, -168, 82, 204, -40, 7821, -9732, -345, 321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -2, 0, 8, 0, 2, 194, -81, 5377, -3128, -325, 138,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 79), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 0, -19, 0, -544, 0, 33,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 60), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimDollFall_joint2[58] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 889, -35, 303, -9, 813, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 183, -8, 27, -3, 541, -3, 0, 0, 2051, 2, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 19), 402, -1326,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 79), 183, 27, 541,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 19), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 1453,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 60), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 20), 1750, -6,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 15), 288, -1904,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 25), 288,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTCaptainAnimDollFall_joint3[70] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -87, 19, 242, -38, 227, -41,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), -61, 6, 144, -26, 40, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -666, -58, 466, 14, 125, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -1104, -3, 274, -17, -126, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -724, 27, 211, -13, -509, -91,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), -403, 5, 62, -2, -1565, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -61, 144, 40,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 50), -61, 144, 40,
	ftAnimBlock(0, 25),
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -403, 62, -1565,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimDollFall_joint5[76] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 256, 0, 468, -65, -14, 55,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 19), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 556, 0, 0, -1, 0, 26, -95, 5, 221, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 537, -2,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 0, 0, 18, 0, -115,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 14), -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -24, 0, 13, 0, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), -331, -5, 205, 3, -80, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, -38, -5, -141, -18,
	ftAnimSetValT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 50), -38, -141,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 50), 0,
	ftAnimBlock(0, 25),
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -331, 205, -80,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimDollFall_joint6[210] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 338, 4, 432, -28, 1475, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 455, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -211, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1484, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1472, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1836, 427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 427, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 199, -314, -440, -115,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -460, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -201, -174, 2363, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -149, 78, 2366, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -43, 188, -486, -23, 2308, -88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2088, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -446, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 227, 377,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 712, 400,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1254, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2109, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 2132, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2119, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1804, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1384, 126, -503, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -401, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1508, -543,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 297, -587, 1478, -166,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1495, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 333, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 353, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 703, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -395, 3, 1534, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), -59, -19, 1284, 10,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 702, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 609, 26,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -88, -43, 1303, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -410, 15, 1553, 10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 644, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 964, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -389, 16, 1567, 11,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -377, 1576,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 964, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 18), 964,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 964, 0, -377, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1576,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimDollFall_joint7[94] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -326, -263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -831, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1008, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -523, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -374, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -339, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -378, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -858, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -856, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -522, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -505, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -689, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -693, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -385, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -385, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 17), -385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -385, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimDollFall_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimBlock(0, 80),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTCaptainAnimDollFall_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 360, -108,
	ftAnimBlock(0, 80),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimDollFall_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 120, 0,
	ftAnimBlock(0, 80),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimDollFall_joint12[248] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 729, 167, 1105, 14, -59, 85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1193, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 897, 421, 25, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1573, 440, 509, 282,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1793, 20, 591, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1578, 280,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1814, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1819, 26, 514, -74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 513, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1791, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1840, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1998, 11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 519, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 724, 166,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1779, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1672, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1551, 351, 1995, -294, 900, 423,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2374, 422, 1409, -319, 1571, 342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2396, 19, 1357, -50, 1586, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 852, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 2563, 48, 1780, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2626, 112, 1847, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2787, 329, 2011, 331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3285, 461, 835, 1, 2511, 463,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1055, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3710, 276, 2938, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3837, 85, 3069, 89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 3758, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 3094, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3081, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 3092, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3735, -20, 1061, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 886, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 3775, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3870, 153, 3170, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4083, 319, 3366, 301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4509, 379, 881, 21, 3773, 362,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 5110, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1452, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 4407, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4441, 27,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 10), 4436,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5098, -15,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 16), 5054,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 1452,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 14), 1452,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 8), 4436,
	ftAnimBlock(0, 7),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 5054,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimDollFall_joint13[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -68,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -68, -298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -596, -304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 101,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -230, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -467, -331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -893, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -840, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -589, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -787, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -833, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -671, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -515, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -515, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -515,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), -515,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimDollFall_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 80),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTCaptainAnimDollFall_joint18[208] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -101, 499, -13, -306, -139,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 98, 139,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 293, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -454, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -313, 146,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -163, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 231, 87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 256, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 186, -87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -375, -30,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 250, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 182, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -184, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -195, 14,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -408, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 171, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 189, 69, -197, -109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 473, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -570, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -681, -96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1136, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 511, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 110, -13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 219, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 340, 22,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1156, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -829, 53,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 96, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 8, 26,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -770, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -580, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 364, 25,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 51, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 198, 40, -330, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 132, -44, -457, -102,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -535, -63,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 12), -638,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 173,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 16), 173,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 241,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 15), 241,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -638,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), -638,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 173, 0, 241, 0, -638, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTCaptainAnimDollFall_joint20[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 234, 250,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 806, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 765, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 404, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 321, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 493, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 515, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), 632, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 586, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 312, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 170, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 273, 84,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 398,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 398,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 398,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 398, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimDollFall_joint22[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 676, 45, -34, 0, 373, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 79), -34, 373,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1249, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1320, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 2155, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2251, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2244, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2385, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 2865, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2896, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), 3566, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3603, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 3375, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 3375,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 18), 3375,
	ftAnimBlock(0, 17),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 373, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -34,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTCaptainAnimDollFall_joint23[216] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -380, 12, 506, -54, -366, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 65, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -86, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -302, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -265, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -288, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 105, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 435, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 435, -45, -137, 32, -261, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 55, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 345, -22, -127, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 391, 47, -337, -154,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 514, -45, -624, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 78, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 546, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 421, -381, -659, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -72, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -249, -514,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -606, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -584, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -515, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 132, 35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 549, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 375, 1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 163, 27, -46, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 310, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 124, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 377, -20, 131, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 261, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 301, -75, 88, -165,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 146, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -199, -222,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -444, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 233, 111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 368, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 157, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 159, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 368, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 368, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -445, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -443, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 159, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), 157, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 368, 0, 157, 0, -443, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimDollFall_joint25[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 154,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 670, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 683, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 386, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 271, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 169, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 4, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 413, 311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 628, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 712, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 713, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 709, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 709, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTCaptainAnimDollFall_joint26[210] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 754, -78, -151, 0, 508, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -147, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), 517, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 335, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 280, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -214, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -207, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -191, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -32, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -136, -101, -133, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 364, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -235, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -449, -678,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1592, -822,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2333, -207,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 614, 213, 523, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 925, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2615, -146, 587, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2477, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 520, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 725, 80,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2408, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1860, 151,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 915, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1195, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 822, 123,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1681, 89,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1706, 129,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1591, 19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1751, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 1927, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1262, 64,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 23), 1557,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1566, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1593, -88,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1927, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 21), 1927,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1692, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1692, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1692, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1692, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1557, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 1557,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1692, 0, 1557, 0, 1927, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
