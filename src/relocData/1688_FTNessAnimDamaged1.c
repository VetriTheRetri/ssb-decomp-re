/* AnimJoint data for relocData file 1688 (FTNessAnimDamaged1) */
/* 2048 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimDamaged1_joint1[44];
extern u16 dFTNessAnimDamaged1_joint2[30];
extern u16 dFTNessAnimDamaged1_joint4[38];
extern u16 dFTNessAnimDamaged1_joint5[94];
extern u16 dFTNessAnimDamaged1_joint6[48];
extern u16 dFTNessAnimDamaged1_joint7[30];
extern u16 dFTNessAnimDamaged1_joint8[44];
extern u16 dFTNessAnimDamaged1_joint10[10];
extern u16 dFTNessAnimDamaged1_joint11[80];
extern u16 dFTNessAnimDamaged1_joint12[38];
extern u16 dFTNessAnimDamaged1_joint13[46];
extern u16 dFTNessAnimDamaged1_joint15[10];
extern u16 dFTNessAnimDamaged1_joint16[70];
extern u16 dFTNessAnimDamaged1_joint18[48];
extern u16 dFTNessAnimDamaged1_joint19[84];
extern u16 dFTNessAnimDamaged1_joint21[20];
extern u16 dFTNessAnimDamaged1_joint22[76];
extern u16 dFTNessAnimDamaged1_joint24[36];
extern u16 dFTNessAnimDamaged1_joint25[78];
extern u16 dFTNessAnimDamaged1_joint26[48];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimDamaged1_joints[] = {
	(AObjEvent32 *)dFTNessAnimDamaged1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimDamaged1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimDamaged1_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimDamaged1_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimDamaged1_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimDamaged1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimDamaged1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimDamaged1_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimDamaged1_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimDamaged1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimDamaged1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimDamaged1_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimDamaged1_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimDamaged1_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimDamaged1_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimDamaged1_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimDamaged1_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimDamaged1_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimDamaged1_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimDamaged1_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimDamaged1_joint1[44] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 537, -28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, -16,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 537, 0, -148, -1054,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 509, 0, -352, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 482, -209, -389, -55,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 465, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -394, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -148, 1471,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 537, -28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimDamaged1_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -360, 8,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -185, 0, -308, 0, -80, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -236, 0, -273, 0, 14, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 28, -360, 8,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimDamaged1_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, 0, 199, 58, -140, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -173, 0, 233, 0, -46, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 201, 0, 170, -69, 64, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimDamaged1_joint5[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -410, -232, -261, 63, 415, 476,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -223, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -642, -17, 892, 295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -444, 96, 1006, 125,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -818, -207, 1268, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -248, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -409, -121,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1031, -215, 1298, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1249, -113, -544, -150, 1351, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1257, -172, -710, -216, 1229, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1595, -139, -978, -217, 1511, 96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1245, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1537, -145, 1423, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1885, -240, 1862, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2018, -133, -1347, -101, 2024, 161,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimDamaged1_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, 180,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -293, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -377, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -614, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -554, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -486, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -577, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -602, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -460, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -614, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 140,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimDamaged1_joint7[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -412, -2, -89, 0, 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -253, 61, 135, 0, -95, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimDamaged1_joint8[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, 364, 0, -32, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 447, 0, 268, 0, 310, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 214, 0, 388, 0, 407, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 209, -3, 62, 0, -11, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -10, 0, 364, 0, -32, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimDamaged1_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimDamaged1_joint11[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2024, -88, 1038, 435, -1727, -417,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2006, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1473, 232, -2144, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1502, 5, -2185, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2198, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1541, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1576, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1542, -162,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1966, 94, -2153, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1817, 287, 1260, -188, -1784, 480,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1392, 105, 1166, -104, -1192, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1607, -315, 1052, -63, -1295, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2024, -416, 1038, -13, -1727, -432,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimDamaged1_joint12[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 558,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 279,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -442, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -437, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 37,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimDamaged1_joint13[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 54, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -124, 0, 54, 1, 126, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 400, 120, -90, -35, 514, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 597, -43, -159, -9, 61, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 97, -5, -158, 7, -46, 63,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 90, 54, 126,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimDamaged1_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimDamaged1_joint16[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -365, -63, -279, 57, -297, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -483, -18, -272, -93, -105, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -466, 0, -409, -60, -147, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -519, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -226, 4, -68, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -265, -26, -120, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -240, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -497, 81, -278, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -357, 79, -412, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -338, -4, -343, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, -26, -279, 63, -297, -57,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimDamaged1_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 396, -396,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 297, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 268, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 108, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 153, 304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 717, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 616, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -219,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimDamaged1_joint19[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, 26, 12, 37, 26, 321,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 180, 9, 196, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 347, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 410, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 268, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 289, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 461, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 190, 10, 195, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 221, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 155, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 429, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 227, -72, 422, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 75, -88, 169, -39, -76, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 50, -34, 75, -78, -90, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, -45, 12, -63, 26, 117,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimDamaged1_joint21[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -259, 442, -102,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -14, 243, 98,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -259, 442, -102,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTNessAnimDamaged1_joint22[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -127, 27, 136, -118, -210, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -131, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 28, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -222, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -177, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -300, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -129, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -87, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 20, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 10, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 11, -70, -78, 58, -346, 82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 120, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -129, -74, -135, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -136, 0, -116, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, 9, 136, 15, -210, -93,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimDamaged1_joint24[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 407, 79,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 444, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 373, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 516, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 577, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 746, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 565, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -158,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimDamaged1_joint25[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 76, -67, 25, 59, -202, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 67, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -87, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 85, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 237, 126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 361, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 73, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 54, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 368, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 80, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -76, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -82, 67, 47, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 58, 75, -285, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 68, 8, -295, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, 7, 25, -55, -202, 92,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimDamaged1_joint26[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -140, 283, -182,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -148, -1, 30, -36, 173, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -148, 12, 30, 19, 173, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -74, 74, 148, 60, 60, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 74, -22, 212, 44, -13, -81,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -140, 283, -182,
	ftAnimEnd(),
	0x0000, 0x0000,
};
