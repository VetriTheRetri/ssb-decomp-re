/* AnimJoint data for relocData file 1977 (FTPikachuAnimShieldDrop) */
/* 2048 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimShieldDrop_joint1[16];
extern u16 dFTPikachuAnimShieldDrop_joint2[84];
extern u16 dFTPikachuAnimShieldDrop_joint3[46];
extern u16 dFTPikachuAnimShieldDrop_joint5[16];
extern u16 dFTPikachuAnimShieldDrop_joint6[66];
extern u16 dFTPikachuAnimShieldDrop_joint7[30];
extern u16 dFTPikachuAnimShieldDrop_joint8[66];
extern u16 dFTPikachuAnimShieldDrop_joint9[16];
extern u16 dFTPikachuAnimShieldDrop_joint10[38];
extern u16 dFTPikachuAnimShieldDrop_joint11[38];
extern u16 dFTPikachuAnimShieldDrop_joint13[30];
extern u16 dFTPikachuAnimShieldDrop_joint14[66];
extern u16 dFTPikachuAnimShieldDrop_joint16[32];
extern u16 dFTPikachuAnimShieldDrop_joint17[108];
extern u16 dFTPikachuAnimShieldDrop_joint19[46];
extern u16 dFTPikachuAnimShieldDrop_joint21[86];
extern u16 dFTPikachuAnimShieldDrop_joint22[68];
extern u16 dFTPikachuAnimShieldDrop_joint24[32];
extern u16 dFTPikachuAnimShieldDrop_joint25[56];
extern u16 dFTPikachuAnimShieldDrop_joint26[32];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTPikachuAnimShieldDrop_joints[] = {
	(AObjEvent32 *)dFTPikachuAnimShieldDrop_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPikachuAnimShieldDrop_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPikachuAnimShieldDrop_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPikachuAnimShieldDrop_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTPikachuAnimShieldDrop_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTPikachuAnimShieldDrop_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPikachuAnimShieldDrop_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTPikachuAnimShieldDrop_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTPikachuAnimShieldDrop_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPikachuAnimShieldDrop_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPikachuAnimShieldDrop_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTPikachuAnimShieldDrop_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTPikachuAnimShieldDrop_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTPikachuAnimShieldDrop_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTPikachuAnimShieldDrop_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTPikachuAnimShieldDrop_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTPikachuAnimShieldDrop_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTPikachuAnimShieldDrop_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTPikachuAnimShieldDrop_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTPikachuAnimShieldDrop_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTPikachuAnimShieldDrop_joint1[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -26, 33, -28, 16, 734, -278,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 62, 37, -22, 0, 1114, -108,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimShieldDrop_joint2[84] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 862, -22,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 862, 26, -22, -5,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 4), 15,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1021, 28, -54, -41, 65, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1007, -72, -228, -47, 530, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 729, -186, -242, 24, 1017, 486,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 634, -19, -179, 92, 1504, 471,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 689, 127, -56, 113, 1960, 366,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 889, 34, 47, -10, 2238, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1003, 10, -150, -17, 3337, 100,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1003, -150,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 3), 3337,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimShieldDrop_joint3[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -171, -8, -3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -149, 3, 282, 44, -76, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -137, 0, 436, 15, -118, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -146, -3, 343, -42, -112, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -173, -2, 58, -23, -73, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -173, 58, -73,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPikachuAnimShieldDrop_joint5[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -12, -12, 37, 340, -18, 306,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, 0, 0, 155, -47, 495,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimShieldDrop_joint6[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 170, 39, 33, -61, -566, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 372, 57, -385, -167, -615, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 415, 119, -527, -33, -648, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 611, 111, -451, -5, -872, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 637, 23, -537, -70, -894, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 17), 848, 2, -905, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -225, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -116, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 130, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 849, 1, 136, 6, -904, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimShieldDrop_joint7[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -705, -28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -778, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -632, 384,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 17), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimShieldDrop_joint8[66] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -361, 23, 32, -1, 194, 148,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -264, 13, 374, 50, 122, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -241, -14, 477, -31, 145, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -321, -29, 247, -43, 74, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -507, -18, 86, -44, -67, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -507, 0, -196, -67, -44, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -503, 14, -184, 7, -51, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -464, -174, -53,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimShieldDrop_joint9[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 40, -29, 2414, 5, 29, 491,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimShieldDrop_joint10[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -386, -9, -11,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -156, 28, -128, -19, -125, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -68, 6, -219, -6, -207, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -68, -10, -219, 20, -207, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -201, 52, 117,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimShieldDrop_joint11[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -424, -11, -12,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 156, 49, -200, -26, -129, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 123, -14, -306, -7, -246, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -51, -22, -309, 12, -118, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -166, -144, -146,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimShieldDrop_joint13[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -303, -48, 324,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -327, -32, -118, 23, 341, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -372, -18, 0, 158, 327, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -368, 238, 333,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimShieldDrop_joint14[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -17, -6, -212, 17, -572, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), -515, -122, 91, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -548, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -673, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -645, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -699, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1013, 8,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -642, -126, 93, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -1195, -7, 143, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1004, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -980, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1199, -3, 144, 1, -977, 2,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimShieldDrop_joint16[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -631, 33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -461, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPikachuAnimShieldDrop_joint17[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1490, 1, -1201, 8, 220, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1269, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1237, -126, 426, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1121, -77, 585, 118,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 732, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1414, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1370, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1535, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 764, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 832, 81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1454, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1083, -80,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1533, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1242, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1002, -106,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 860, 207,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 917, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1285, 289, -1364, -132, 742, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1440, 87, -1508, -88, 745, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1461, 21, -1542, -34, 770, 24,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimShieldDrop_joint19[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 752, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 546, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 409, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 109, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -54,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 625, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 697, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 713, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 711, -2,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPikachuAnimShieldDrop_joint21[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -67, 10, 284, -2, 3, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 251, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 341, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 265, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 186, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 169, 40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 214, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 199, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 393, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 346, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 226, 132,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 734, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 392, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 472, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 366, -243, 174, -151, 219, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 248, -55, 42, -83, 80, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 256, 7, 6, -36, 43, -36,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimShieldDrop_joint22[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1396, 3, 1150, 1, 334, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1285, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -1573, -80, 190, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1645, -62, 147, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1710, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 251, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 257, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 405, 25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1669, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1368, 43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1288, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1299, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1344, 23, 1306, 6, 419, 14,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimShieldDrop_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 721, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 795, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 895, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 886, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 870, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 571, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 549, -22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTPikachuAnimShieldDrop_joint25[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, 3, -455, 1, -1, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 104, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -347, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -23, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 19, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 113, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 54, -73, 182, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -193, -21, 448, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -333, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -291, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -205, -11, -288, 3, 458, 9,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimShieldDrop_joint26[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -859, -268, -556,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -930, 45, -175, -6, -437, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -179, 27, -368, 22, -406, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -405, 252, -432,
	ftAnimEnd(),
	0x0000, 0x0000,
};
