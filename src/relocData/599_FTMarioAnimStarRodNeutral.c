/* AnimJoint data for relocData file 599 (FTMarioAnimStarRodNeutral) */
/* 3088 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimStarRodNeutral_joint1[66];
extern u16 dFTMarioAnimStarRodNeutral_joint2[68];
extern u16 dFTMarioAnimStarRodNeutral_joint4[80];
extern u16 dFTMarioAnimStarRodNeutral_joint5[116];
extern u16 dFTMarioAnimStarRodNeutral_joint6[60];
extern u16 dFTMarioAnimStarRodNeutral_joint7[46];
extern u16 dFTMarioAnimStarRodNeutral_joint8[92];
extern u16 dFTMarioAnimStarRodNeutral_joint10[10];
extern u16 dFTMarioAnimStarRodNeutral_joint11[170];
extern u16 dFTMarioAnimStarRodNeutral_joint12[86];
extern u16 dFTMarioAnimStarRodNeutral_joint13[156];
extern u16 dFTMarioAnimStarRodNeutral_joint15[10];
extern u16 dFTMarioAnimStarRodNeutral_joint16[124];
extern u16 dFTMarioAnimStarRodNeutral_joint18[48];
extern u16 dFTMarioAnimStarRodNeutral_joint20[106];
extern u16 dFTMarioAnimStarRodNeutral_joint21[102];
extern u16 dFTMarioAnimStarRodNeutral_joint23[56];
extern u16 dFTMarioAnimStarRodNeutral_joint24[100];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimStarRodNeutral_joints[] = {
	(u32)dFTMarioAnimStarRodNeutral_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimStarRodNeutral_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimStarRodNeutral_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimStarRodNeutral_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimStarRodNeutral_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimStarRodNeutral_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimStarRodNeutral_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimStarRodNeutral_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimStarRodNeutral_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimStarRodNeutral_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimStarRodNeutral_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimStarRodNeutral_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimStarRodNeutral_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimStarRodNeutral_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimStarRodNeutral_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimStarRodNeutral_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimStarRodNeutral_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimStarRodNeutral_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimStarRodNeutral_joint1[66] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -43, 548, -31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 4, 193, 482, -274, -112, -356,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 4, 2, 480, 178, -120, 2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 5, 3, 550, 10, 24, 679,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 6, 1, 412, -7, 212, 6,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 408, -3, 161, -107,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 3), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 5), 6, -26,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), -43, 548,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), 84, -275,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), -31,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimStarRodNeutral_joint2[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -360, 8,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), -360, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 28, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 28, 0, -360, 14, 8, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 23, 0, -46, 0, 0, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -48, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 23, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 23, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 3, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -48, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -71, 0, -188, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 28, -360, 8,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimStarRodNeutral_joint4[80] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -260, -130, -489, -122, 155, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -260, 94, -489, 98, 155, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -72, 167, 122, 502, -133, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 166, 66, 514, 0, 9, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 215, 8, 476, -6, 142, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 476, -5, 143, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 215, -1, 476, -5, 142, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 203, -21, 287, -47, 0, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimStarRodNeutral_joint5[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, -501, -300, -256, -272, 525,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -367, -258, -557, -112, 253, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -383, -103, -524, 5, 194, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1027, -121, -507, 32, 866, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1082, -27, -481, 14, 950, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1082, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -501, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 958, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 958, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 742, -162,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1082, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -978, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -752, 243,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -277, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 555, -192,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -129, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -509, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -322, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -164, 105,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 120, 24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -227, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, 12, -300, 22, -272, -44,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimStarRodNeutral_joint6[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, -448,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -710, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -670, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -638, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -635, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -627, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -508, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -366, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -315, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -233, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 50,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimStarRodNeutral_joint7[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -625, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -19, 0, -17, 0, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -703, -47, -71, -13, 51, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -745, -4, -69, 0, 50, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -745, 6, -69, 3, 50, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -625, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimStarRodNeutral_joint8[92] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 42, 246, -73,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1014, -504, 945, 337, -1162, -539,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -984, 562, 920, -473, -1152, 616,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 110, 437, -1, -673, 69, 645,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, 54, -425, -153, 138, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -82, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -460, 0, 81, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -461, 0, 77, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -466, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 87, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 13, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 91, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -254, 86, 62, -15,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -34, 83, 16, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 246, -73,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimStarRodNeutral_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimStarRodNeutral_joint11[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1164, -962, 1056, 470, 1674, -883,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2127, -481, 1527, 237, 790, -442,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2127, 489, 1530, -147, 788, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1147, 287, 1231, -259, 721, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1553, -762, 1010, -429, 466, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2672, -1000, 373, -283, 249, -409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3554, -440, 444, 35, -352, -301,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 444, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3554, 0, -352, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3554, 0, -353, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3554, 2, -352, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3548, -185, 578, 115, -420, -285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3926, -331, 675, 14, -923, -428,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4211, -215, 606, -67, -1277, -281,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 506, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -4458, 17, -1652, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4408, 9, -1569, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4439, 222, 656, 103, -1541, 298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3964, 368, 713, -10, -972, 449,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3490, 250, -445, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 636, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 551, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3200, 255, -230, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2833, 103, 22, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2773, 60, 551, 0, 65, 43,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimStarRodNeutral_joint12[86] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 802,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -466, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -360, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 375,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -174, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -247, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -98, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -307, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -440, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -426, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -480, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -785, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimStarRodNeutral_joint13[156] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 625,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 257, 128, 2586, 1293,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 896,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 896, -618, 257, -368, 2586, 616,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -341, -553, -479, -291, 3819, -1116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -210, 345, -326, 124, 352, -1880,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 350, 419, -230, 19, 58, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 628, 139, -310, -40, -122, -90,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 628, -310, -122,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 628, -310, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 628, -41, -310, -127, -122, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 545, 24, -566, -9, 112, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 701, 0, -337, 55, 121, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 980, 77, -286, 30, -281, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1010, -7, -217, 129, -202, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 956, -36, 102, 144, 113, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 899, -66, 215, 37, 30, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 824, -72, 177, -85, -151, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 754, -63, 44, -114, -275, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 698, -42, -51, -14, -173, 91,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 625, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimStarRodNeutral_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 75, 68, 30,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimStarRodNeutral_joint16[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2010, 36, -1400, 112, -1793, -256,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1292, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1843, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2049, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2059, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1950, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1404, -108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1573, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1719, 77, -2165, -196,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1692, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2343, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2346, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2328, 27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1701, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1628, 40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1578, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1417, 52,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2289, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1821, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1590, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1779, -112,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1372, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1380, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1892, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1976, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2010, -33, -1400, -20, -1793, 28,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimStarRodNeutral_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 96, 279,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 375, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 376, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 319, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 609, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 736, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 729, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 623, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 616, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 158, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 96, -62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimStarRodNeutral_joint20[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1514, 92, 1137, 270, 1758, -109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1623, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1630, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1407, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1462, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1648, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1580, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1396, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1639, 2, 1429, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1528, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1564, -51,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1647, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1644, -12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1530, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1529, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1511, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1511, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1619, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1153, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1572, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1727, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1514, 3, 1137, -16, 1758, 30,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimStarRodNeutral_joint21[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 210, -37, 42, 90, -47, -293,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 121, 57, 208, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -340, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -377, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -204, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 243, 68, 138, -19, 198, 217,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 272, -1, 197, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 230, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 253, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 80, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 269, -3, 201, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 146, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 206, 2,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 63, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -44, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 107, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 46, -8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 209, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 210, 1, 42, -4, -47, -3,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimStarRodNeutral_joint23[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 353, 370,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 724, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 730, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 516, -361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 278, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 488, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 491, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 500, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 578, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 511, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 379, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 353, -25,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimStarRodNeutral_joint24[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1619, -35, -1827, 12, 1355, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1689, 68, -1832, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1330, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1448, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1747, 4, -1907, -26, 1683, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1662, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1826, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1513, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1356, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1660, -1, 1353, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1800, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 1345, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1826, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1869, -15,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1798, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1628, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1881, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1835, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1619, -8, -1827, 8, 1355, 10,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
