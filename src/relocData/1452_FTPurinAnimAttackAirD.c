/* AnimJoint data for relocData file 1452 (FTPurinAnimAttackAirD) */
/* 3056 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimAttackAirD_joint1[76];
extern u16 dFTPurinAnimAttackAirD_joint2[38];
extern u16 dFTPurinAnimAttackAirD_joint3[62];
extern u16 dFTPurinAnimAttackAirD_joint5[60];
extern u16 dFTPurinAnimAttackAirD_joint6[182];
extern u16 dFTPurinAnimAttackAirD_joint7[30];
extern u16 dFTPurinAnimAttackAirD_joint9[68];
extern u16 dFTPurinAnimAttackAirD_joint10[190];
extern u16 dFTPurinAnimAttackAirD_joint11[22];
extern u16 dFTPurinAnimAttackAirD_joint13[44];
extern u16 dFTPurinAnimAttackAirD_joint14[140];
extern u16 dFTPurinAnimAttackAirD_joint16[40];
extern u16 dFTPurinAnimAttackAirD_joint18[198];
extern u16 dFTPurinAnimAttackAirD_joint19[122];
extern u16 dFTPurinAnimAttackAirD_joint21[24];
extern u16 dFTPurinAnimAttackAirD_joint22[188];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTPurinAnimAttackAirD_joints[] = {
	(u32)dFTPurinAnimAttackAirD_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimAttackAirD_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimAttackAirD_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimAttackAirD_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPurinAnimAttackAirD_joint6, /* [5] joint 6 */
	(u32)dFTPurinAnimAttackAirD_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimAttackAirD_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTPurinAnimAttackAirD_joint10, /* [9] joint 10 */
	(u32)dFTPurinAnimAttackAirD_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimAttackAirD_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPurinAnimAttackAirD_joint14, /* [13] joint 14 */
	(u32)dFTPurinAnimAttackAirD_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPurinAnimAttackAirD_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTPurinAnimAttackAirD_joint19, /* [18] joint 19 */
	(u32)dFTPurinAnimAttackAirD_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPurinAnimAttackAirD_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTPurinAnimAttackAirD_joint1[76] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 600, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -268, 0, 4505, 273, 2457, -1092, 4505, 273,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4505, -273, 2457, 1092, 4505, -273,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -268,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 17), -268,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, -234, 4096, 702, 4096, -234,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 3686, -2, 4915, 1, 3686, -25,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 3891, 27, 4505, -54, 3891, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), -268, 0, 4096, 13, 4096, -27, 4096, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 0, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPurinAnimAttackAirD_joint2[38] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -268, 243,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, 553,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 3216, 416,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 6433, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 20), 9650, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 9382, -92,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPurinAnimAttackAirD_joint3[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 268, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 312, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 178, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 178, 0, 4096, 0, 4096, 0, 4096, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX, 5), 4300, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPurinAnimAttackAirD_joint5[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 178, -144, -737, 238,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -180, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 39), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -180, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -154, 11, -287, -1, -30, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -154, 1, -287, 6, -30, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), -148, 2, -247, -2, -36, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 178, -144, -737, 238,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPurinAnimAttackAirD_joint6[182] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2329, -1525, -1574, 661, -2239, -977,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -729, -912, 315, -3216, -431,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 869, 0, -943, 0, -3102, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -869, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 802, 260, -3211, -522,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1390, 283, -4147, -429,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1368, -101, -4071, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1186, -190, -3829, 247,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 894, -65, -3446, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -889, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -969, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 855, -28, -3383, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 896, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -3290, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3291, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -3465, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -969, 2, -3468, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -3377, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -947, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 893, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 872, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 874, -36, -3379, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 499, -436, -3069, 330,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -926, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1501, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -72, -522, -2655, 336,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2238, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -544, -348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -768, -154,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -885, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1552, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1571, -10, -2241, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -887, -2, -1574, -3, -2239, 2,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimAttackAirD_joint7[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 28), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPurinAnimAttackAirD_joint9[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), -178, -722, 238,
	ftAnimSetValRate(FT_ANIM_TRAX), 69, 1005,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 180, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 180, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 47), -178,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 122, -1, -304, 1, -24, 2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 122, 2, -304, -2, -24, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), -2, -2, -407, -91, -30, -2,
	ftAnimSetValRateT(FT_ANIM_TRAX, 10), 69, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -722, 238,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPurinAnimAttackAirD_joint10[190] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2394, 1590, 1718, -805, -2305, -911,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 746, 912, -385, -3216, -402,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -902, 4, 946, 0, -3111, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 868, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -795, -235, -3222, -544,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1373, -276, -4200, -464,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1347, 90, -4152, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1191, 193, -3958, 226,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -803, 119, -3529, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 874, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 848, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -722, 52, -3452, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -777, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -3641, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3682, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -3802, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -798, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -945, -73,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3814, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -4214, -24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1022, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1085, 29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4232, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -3930, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 853, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 860, -12,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1065, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -717, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 837, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 446, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 215, -191, -3887, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -93, -23, -3905, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -738, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -766, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -785, -19, -112, -19, -3913, -7,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimAttackAirD_joint11[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 45), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPurinAnimAttackAirD_joint13[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -501, 264, -1427, 106, -21, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -804, 0, 0, 0, -1072, 0, 204, 0, -120, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -804, 6, 0, 5, -1072, -7, 204, -15, -120, 16, 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 47), -501, 264, -1427, 106, -21, 16,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimAttackAirD_joint14[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1763, -253, -1321, -95, 1961, -255,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1417, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1509, -125, 1705, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1512, 0, 1686, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1592, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1709, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1413, 1, 1608, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1599, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), -1420, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1595, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 34), 1576, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1603, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 1555, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1556, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1717, 61,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1413, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1300, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1583, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1606, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1784, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1662, 18, 1789, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1681, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1923, 82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1958, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1726, 38, -1308, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1758, 18, -1314, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1763, 4, -1321, -7, 1961, 2,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimAttackAirD_joint16[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 22), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 124, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -62,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPurinAnimAttackAirD_joint18[198] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -246, 51, -128, 157, -3079, -80,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 28, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -167, 0, -3231, 1,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 3686, 3686,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3686,
	ftAnimSetValRateT(FT_ANIM_SCAX, 2), 3686, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -194, 112, 28, 82, -3155, 415,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 58, 127, 167, 68, -2401, 392, 4096, 409, 3686, 117, 3686, 117,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 164, -2,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 5120, 127, 4096, 51, 4096, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 60, 0, -2371, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2407, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 34), 62, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 160, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 144, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 5120, -95, 4096, -27, 4096, -27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2407, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -2391, -2,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 3686, -95, 3686, -27, 3686, -27,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 146, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 239, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2393, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2742, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 58, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -171, -89,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 3686, 3686, 3686,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 236, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -109, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -250, -57, -2942, -120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -260, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2983, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3041, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -3077, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -246, 14, -128, -19, -3079, -1,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimAttackAirD_joint19[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1399, 308, 1293, 123, 1936, -230,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1434, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1707, 152, 1705, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1703, 0, 1683, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1624, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1416, -10, 1705, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1413, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1608, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1601, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1619, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), 1636, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1601, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), 1567, 6,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1415, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 1399, -18,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1576, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1792, 75,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1376, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1296, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1627, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1428, -37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1869, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1946, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1401, -27, 1291, -4, 1940, -6,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimAttackAirD_joint21[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 38), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPurinAnimAttackAirD_joint22[188] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1300, -114, 1525, 111, -1419, -131,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 1636, 41,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 2), -1439,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1617, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 3686, 3686,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3686,
	ftAnimSetValRateT(FT_ANIM_SCAX, 2), 3686, 273,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 1608,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1414, -114, 1636, 83, -1550, 412,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -1667, -127, 1775, 68, -792, 396, 4096, 409, 3686, 117, 3686, 117,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1772, -3,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 5120, 127, 4096, 51, 4096, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1668, 0, -758, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -802, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 34), -1670, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1768, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 1745, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 5120, -95, 4096, -27, 4096, -27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -802, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), -791, -2,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 3686, -95, 3686, -27, 3686, -27,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1745, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1825, 30,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1667, 7, -792, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1458, 85, -1111, -138,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 3686, 3686, 3686,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1855, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1547, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1379, 60, -1248, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1312, 9, -1418, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1300, 12, 1525, -21, -1415, 3,
	ftAnimEnd(),
	0x0000, 0x0000,
};
