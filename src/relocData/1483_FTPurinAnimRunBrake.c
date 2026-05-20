/* AnimJoint data for relocData file 1483 (FTPurinAnimRunBrake) */
/* 1920 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimRunBrake_joint1[48];
extern u16 dFTPurinAnimRunBrake_joint2[34];
extern u16 dFTPurinAnimRunBrake_joint3[50];
extern u16 dFTPurinAnimRunBrake_joint5[20];
extern u16 dFTPurinAnimRunBrake_joint6[126];
extern u16 dFTPurinAnimRunBrake_joint7[14];
extern u16 dFTPurinAnimRunBrake_joint9[20];
extern u16 dFTPurinAnimRunBrake_joint10[134];
extern u16 dFTPurinAnimRunBrake_joint11[40];
extern u16 dFTPurinAnimRunBrake_joint13[22];
extern u16 dFTPurinAnimRunBrake_joint14[78];
extern u16 dFTPurinAnimRunBrake_joint16[30];
extern u16 dFTPurinAnimRunBrake_joint18[82];
extern u16 dFTPurinAnimRunBrake_joint19[94];
extern u16 dFTPurinAnimRunBrake_joint21[38];
extern u16 dFTPurinAnimRunBrake_joint22[86];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTPurinAnimRunBrake_joints[] = {
	(AObjEvent32 *)dFTPurinAnimRunBrake_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPurinAnimRunBrake_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPurinAnimRunBrake_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPurinAnimRunBrake_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTPurinAnimRunBrake_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTPurinAnimRunBrake_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPurinAnimRunBrake_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTPurinAnimRunBrake_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPurinAnimRunBrake_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPurinAnimRunBrake_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTPurinAnimRunBrake_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTPurinAnimRunBrake_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTPurinAnimRunBrake_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTPurinAnimRunBrake_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTPurinAnimRunBrake_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTPurinAnimRunBrake_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTPurinAnimRunBrake_joint1[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 303, 62, -47, 18, 1035, 381,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 452, 0, 140, 0, 76, 0, 13, 0, 486, 0, 380, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 452, 0, 140, 0, 76, 0, 13, -7, 635, 60, 380, -204,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 0, 0, 600, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPurinAnimRunBrake_joint2[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -12, -636, 15,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2, 0, -328, 0, 2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -2, 0, -328, 0, 2, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -268, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPurinAnimRunBrake_joint3[50] = {
	ftAnimSetValRate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3889, 0, 4236, 0, 3889, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 3686, -144, 4915, 0, 2867, -1,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 2867, 132, 3686, -265, 4915, 105,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 265, 4096, 73, 4096, -186,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 3753, 3930, 4293,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPurinAnimRunBrake_joint5[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -157, -440, 92,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -157, -440, 93,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -310, -380, 237,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPurinAnimRunBrake_joint6[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 17, -5, -15, 7, -434, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -219, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 342, 553, -724, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1119, 416, -950, -183,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1362, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1176, 135, -403, -160,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -574, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1390, 265,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1915, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1719, -294,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2174, -208,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2011, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2152, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2471, 288, -644, -35, -2468, -271,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -512, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2729, -15, -2717, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2440, -254, -2437, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2177, -9, -2210, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2200, 186, -614, -103, -2213, -169,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -679, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2551, 434, -2549, -426,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3070, 291, -3066, -290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3134, 64, -641, 37, -3130, -64,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimRunBrake_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPurinAnimRunBrake_joint9[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 247, -547, 197,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 247, -547, 198,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 284, -420, 282,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPurinAnimRunBrake_joint10[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 141, -166, -149, 183, -397, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -25, -34, 34, 208, -329, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 72, 11, 267, 57, 142, 159,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 34, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 149, 2, -11, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 272, 160, 67, 104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 538, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 159, 224, 197, 224,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 700, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 516, 264,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 627, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 435, -96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 362, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 720, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 163, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 387, -179,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 369, 94,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 255, 92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 440, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 458, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 411, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 408, 75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 655, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 394, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 175, -158, 182, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 77, -98, 645, -9, 80, -101,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimRunBrake_joint11[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -187, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -86, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPurinAnimRunBrake_joint13[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -58, -637, -1530,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 106, -21, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -589, -6, -543, 10, -1276, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -50, -61, -1676,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimRunBrake_joint14[78] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2132, -222, 1869, -18, 1147, 158,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1894, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1909, -265, 1305, 335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1600, -141, 1818, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1626, 13, 1767, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1627, 1, 1765, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 1697, 1, 1648, -2,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1901, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1899, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1688, -26, 1659, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1589, -11, 1837, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1587, -2, 1911, 12, 1841, 3,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimRunBrake_joint16[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1033, -125,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 907, -516,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 13), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPurinAnimRunBrake_joint18[82] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -680, 234, 52, -218, -177, -89,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -266, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -445, 299, -266, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -81, 292, -240, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 138, 60, -235, 15, -481, -118,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -195, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 39, -50, -477, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -252, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 6, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -207, -82,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -208, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -281, -51, -134, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -309, -27, -176, 18, -99, 34,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimRunBrake_joint19[94] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1193, 49, 1428, -50, 1160, 75,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1522, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1412, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1236, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1446, 164,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1655, 46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1535, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1585, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1705, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1854, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1411, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1320, -21,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1750, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1552, 20, 1688, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1624, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1836, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1308, -7, 1831, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1629, 5, 1305, -3, 1841, 9,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimRunBrake_joint21[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 688, 38,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 360, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 263, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 289, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 409, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 368, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPurinAnimRunBrake_joint22[86] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1752, -15, -1605, 73, -1127, -112,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1467, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1835, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1240, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1575, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1814, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1463, 3, -1733, 107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1482, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1323, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1320, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1568, -133,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1826, 57, -1525, -112,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1332, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1879, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1822, 47, -1692, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, 33, -1785, 37, -1708, -16,
	ftAnimEnd(),
	0x0000, 0x0000,
};
