/* AnimJoint data for relocData file 1677 (FTNessAnimJumpAerialB) */
/* 2976 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimJumpAerialB_joint1[62];
extern u16 dFTNessAnimJumpAerialB_joint2[32];
extern u16 dFTNessAnimJumpAerialB_joint3[40];
extern u16 dFTNessAnimJumpAerialB_joint5[30];
extern u16 dFTNessAnimJumpAerialB_joint6[186];
extern u16 dFTNessAnimJumpAerialB_joint7[54];
extern u16 dFTNessAnimJumpAerialB_joint8[10];
extern u16 dFTNessAnimJumpAerialB_joint9[42];
extern u16 dFTNessAnimJumpAerialB_joint11[10];
extern u16 dFTNessAnimJumpAerialB_joint12[166];
extern u16 dFTNessAnimJumpAerialB_joint13[56];
extern u16 dFTNessAnimJumpAerialB_joint14[14];
extern u16 dFTNessAnimJumpAerialB_joint16[10];
extern u16 dFTNessAnimJumpAerialB_joint17[134];
extern u16 dFTNessAnimJumpAerialB_joint19[32];
extern u16 dFTNessAnimJumpAerialB_joint20[162];
extern u16 dFTNessAnimJumpAerialB_joint22[54];
extern u16 dFTNessAnimJumpAerialB_joint23[132];
extern u16 dFTNessAnimJumpAerialB_joint25[32];
extern u16 dFTNessAnimJumpAerialB_joint26[118];
extern u16 dFTNessAnimJumpAerialB_joint27[58];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTNessAnimJumpAerialB_joints[] = {
	(AObjEvent32 *)dFTNessAnimJumpAerialB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimJumpAerialB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimJumpAerialB_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTNessAnimJumpAerialB_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTNessAnimJumpAerialB_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimJumpAerialB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimJumpAerialB_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimJumpAerialB_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTNessAnimJumpAerialB_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTNessAnimJumpAerialB_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimJumpAerialB_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimJumpAerialB_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTNessAnimJumpAerialB_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTNessAnimJumpAerialB_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTNessAnimJumpAerialB_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTNessAnimJumpAerialB_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTNessAnimJumpAerialB_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTNessAnimJumpAerialB_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTNessAnimJumpAerialB_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTNessAnimJumpAerialB_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTNessAnimJumpAerialB_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTNessAnimJumpAerialB_joint1[62] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -40, 0, 159,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 14), 471, 525,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), -43, -370,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), -927, -114,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_TRAY, 13), 2189, 1433,
	ftAnimBlock(0, 6),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 14), -387, 190,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_TRAY, 11), 4106, 1428,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 26), -171, 75,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 22), 5663, 10,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 5443, -317,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), 4887, -620,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimJumpAerialB_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 242,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 75), 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 720, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 2338, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 23), 3867, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 30), 3216, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTNessAnimJumpAerialB_joint3[40] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -209, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 42, 0, -96, 9, -48, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 19, 0, 0, 0, -65, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 19, 0, 0, 0, -65, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), -209, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 30), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimJumpAerialB_joint5[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 148, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 445, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 473, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 23), -136, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -159, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 148, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimJumpAerialB_joint6[186] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2744, 5, -1366, 1, 2273, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1051, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -2413, 111, 2077, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2280, 171, 1955, -165,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1090, -280,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1278, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1000, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1200, -25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 874, -104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 885, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1296, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -1172, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1223, -20, 884, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 927, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -769, 58,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1171, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1187, -65, 952, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1301, 132, 1072, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -921, 129, 694, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1042, -80, -717, 48, 815, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1130, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -577, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 852, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 898, 2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1137, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1123, 12,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 903, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 742, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1100, 55, -582, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -509, 92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -647, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 725, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 270, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -423, 71, 145, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -335, 19, -1, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -325, 9, -643, 3, -19, -18,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimJumpAerialB_joint7[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -673, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -275, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 33), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -9, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -46, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -339, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -408, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -541, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -539, 1,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimJumpAerialB_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 268, 143, 0, 0,
	ftAnimBlock(0, 75),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTNessAnimJumpAerialB_joint9[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 138,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 604, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 397, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 253, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 23), 7, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 105, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 362, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 449, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 194, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNessAnimJumpAerialB_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 75),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimJumpAerialB_joint12[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1215, -8, 492, 3, 808, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 528, -318, 672, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 615, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 462, -220,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -407, -211,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 186, -282, 649, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -230, 40, 333, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -593, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -724, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -193, 32, 300, -30, -702, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 621, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 17), -103, 5, -552, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -94, 27, -523, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 267, 297, -114, 303,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 679, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 441, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 646, 323, 267, 322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1223, 20, 797, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1244, 15, 423, -18, 814, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 1228, 2, 659, 34, 838, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1237, -122, 695, -10, 848, -125,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 632, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 983, -170, 587, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 897, -77, 501, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 583, -18, 188, -18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 635, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 639, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 573, -9, 639, 0, 178, -9,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimJumpAerialB_joint13[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -584, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -488, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -282, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 43), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -226, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -310, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -432, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTNessAnimJumpAerialB_joint14[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -104, 44, 566,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 75), -170, -63, 267,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimJumpAerialB_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 75),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimJumpAerialB_joint17[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1515, -12, -1272, 3, 980, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1716, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1103, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -1419, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1458, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1522, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1761, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1875, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1084, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 950, 4,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1525, -3, 1883, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 1777, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 44), -1421, 13,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 955, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1112, -10,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1764, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 1573, -46,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1102, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 1214, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1238, 60, -1409, 58, 1526, -122,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1255, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1573, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1206, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1103, -92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 912, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1248, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1247, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1575, 2, -1248, 0, 908, -4,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimJumpAerialB_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 66), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 310, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 419, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 448, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 439, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTNessAnimJumpAerialB_joint20[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1628, -1, 1659, -2, -1414, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1353, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1527, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1736, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1825, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1972, 40,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1296, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1047, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2013, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1911, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1530, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1369, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1051, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 40), -1288, -11,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1891, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 1789, -28,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1363, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), 1583, 16,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1761, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1547, 15,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1299, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1363, 18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1599, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1585, -16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1564, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1612, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1322, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1150, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1290, -164,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1583, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1612, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1601, -8, 1575, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1596, -5, 1573, -2, -1615, -31,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimJumpAerialB_joint22[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -384, 178, 112,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -194, 49, 180, 0, 104, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 175, 23, 176, 0, 92, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 244, -1, 173, 1, 69, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 116, -10, 215, -2, -25, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), -217, -19, 56, -1, -4, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -476, 178, 112,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTNessAnimJumpAerialB_joint23[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 175, 10, 323, 5, -621, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 487, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 186, -57, -60, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 137, -39, 5, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 57, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 333, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 528, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 733, -2,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 54, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 32), 178, 13,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 331, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 93, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 730, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), 447, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 438, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 12, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 96, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -246, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 192, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 120, 21,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 32, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 23, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 150, 52, -265, -81,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 429, 27, -764, -60,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -33, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -59, -26, 442, 13, -799, -34,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimJumpAerialB_joint25[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 69), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 442, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 548, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 599, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTNessAnimJumpAerialB_joint26[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 5, 10, -1, 226, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), -369, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 33), 682, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -182, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -295, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -515, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -565, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -576, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -583, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -171, 45,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -375, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -115, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 686, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 257, -22,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -128, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -223, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -79, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -42, -49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 235, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -24, -14,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -218, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -5, 22,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -86, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 13, -104, -17, -32, -8,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTNessAnimJumpAerialB_joint27[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -392, -96, -76,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -237, 46, -98, 0, -68, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 133, 23, -107, -1, -15, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 194, 0, -120, 0, 52, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), 107, -10, -120, 1, 52, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), -264, -14, -42, -4, 11, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -339, -256, -211,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
