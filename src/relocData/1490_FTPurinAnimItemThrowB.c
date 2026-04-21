/* AnimJoint data for relocData file 1490 (FTPurinAnimItemThrowB) */
/* 3232 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimItemThrowB_joint1[50];
extern u16 dFTPurinAnimItemThrowB_joint2[10];
extern u16 dFTPurinAnimItemThrowB_joint3[120];
extern u16 dFTPurinAnimItemThrowB_joint5[10];
extern u16 dFTPurinAnimItemThrowB_joint6[208];
extern u16 dFTPurinAnimItemThrowB_joint7[36];
extern u16 dFTPurinAnimItemThrowB_joint9[32];
extern u16 dFTPurinAnimItemThrowB_joint10[222];
extern u16 dFTPurinAnimItemThrowB_joint11[60];
extern u16 dFTPurinAnimItemThrowB_joint13[38];
extern u16 dFTPurinAnimItemThrowB_joint14[174];
extern u16 dFTPurinAnimItemThrowB_joint16[48];
extern u16 dFTPurinAnimItemThrowB_joint18[182];
extern u16 dFTPurinAnimItemThrowB_joint19[168];
extern u16 dFTPurinAnimItemThrowB_joint21[32];
extern u16 dFTPurinAnimItemThrowB_joint22[182];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTPurinAnimItemThrowB_joints[] = {
	(u32)dFTPurinAnimItemThrowB_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimItemThrowB_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimItemThrowB_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimItemThrowB_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPurinAnimItemThrowB_joint6, /* [5] joint 6 */
	(u32)dFTPurinAnimItemThrowB_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimItemThrowB_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTPurinAnimItemThrowB_joint10, /* [9] joint 10 */
	(u32)dFTPurinAnimItemThrowB_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimItemThrowB_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPurinAnimItemThrowB_joint14, /* [13] joint 14 */
	(u32)dFTPurinAnimItemThrowB_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPurinAnimItemThrowB_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTPurinAnimItemThrowB_joint19, /* [18] joint 19 */
	(u32)dFTPurinAnimItemThrowB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPurinAnimItemThrowB_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTPurinAnimItemThrowB_joint1[50] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 564, 32,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), -115, -82,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 4), -120, 63,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 660, 1, 300, 71,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 624, -95, 300, -22,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 576, -2,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 8), 600,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPurinAnimItemThrowB_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -268, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPurinAnimItemThrowB_joint3[120] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 10), 4218, 4218,
	ftAnimSetValRateT(FT_ANIM_SCAY, 10), 3809, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -150, -15, -174, -10, 138, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -150, 9, -174, 7, 150, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 13, 5,
	ftAnimSetValRateT(FT_ANIM_SCAY, 5), 4218, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAZ, 3), 148, 261, 395, 151, 196, 50, 4096, 16, 4096, 16,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 7), 4300, -22, 4300, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 846, 5, 578, 0, 771, 12,
	ftAnimSetVal0RateT(FT_ANIM_SCAY, 5), 3809,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 846, -15, 591, 6, 771, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 80, -65, 96, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 659, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 208, -101,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 3973, -40, 4218, 1, 3973, -40,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 7), 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 52, 4096, -84, 4096, 57,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPurinAnimItemThrowB_joint5[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -310, -380, 237,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPurinAnimItemThrowB_joint6[208] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -72, 90, -642, 8, 75, -95,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -583, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 18, 139, -19, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 207, 143, -225, -167,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 297, -9, -446, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -489, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -320, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -299, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -330, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 290, -10, -432, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 202, -81, -304, 81,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -340, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 88, -104, -211, 180, -210, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6, -61, 20, 138, -149, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -34, -49, 64, 46, -254, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -104, -36, 112, 27, -388, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 128, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -108, -5, -380, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -129, 18, -358, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 152, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 137, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -98, 30, -323, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -8, 110, -321, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 103, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 11, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 152, 131, -216, -227, -329, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 286, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -442, -179, -317, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -576, -104, -326, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -192, 123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -651, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 187, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 47, -115, -48, 118,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 80, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -43, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -76, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -72, 4, -642, 9, 75, -4,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimItemThrowB_joint7[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPurinAnimItemThrowB_joint9[32] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 284, -420, 282,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 233, -283, 270,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 284, 44, -420, -121, 282, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 284, -420, 282,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 284, -420, 282,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPurinAnimItemThrowB_joint10[222] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1685, 105, 962, -56, 1689, 105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 886, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1791, 471, 1794, 468,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2628, 549, 2625, 537,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2890, 161, 1011, 120, 2869, 137,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1246, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2950, 48, 2900, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 3028, 11, 2948, 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1248, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1204, -37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3046, 38, 2984, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3105, 107, 1159, 96, 3073, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3261, 72, 1397, 173, 3326, 151,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3304, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3249, -15, 1506, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1466, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3231, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3206, -27, 3180, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3176, 23, 1304, -85, 3145, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3254, 35, 1295, -6, 3282, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3162, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3247, -37, 1291, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 3054, -156, 1156, -42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3010, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2866, -129, 1139, -11, 2806, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2795, -35, 1133, -48, 2739, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2795, -43, 1042, -79, 2766, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 919, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2709, -154, 2696, -141,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2228, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2486, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2223, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2041, -142, 939, 19, 2050, -139,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 967, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1852, -81, 1863, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1775, -83, 1783, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1685, -89, 962, -4, 1689, -93,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimItemThrowB_joint11[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -173, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -175, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 87,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -72, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -63, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -15, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -28, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -52, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 45,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPurinAnimItemThrowB_joint13[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -50, -61, -1676,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 106, -21, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1267, -47, 343, 23, -2111, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1222, 134, 173, 106, -2087, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 139, 13, 1330, -5, -989, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -50, -61, -1676,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimItemThrowB_joint14[174] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -21, 13, -302, -20, 233, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 49, 77, -364, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 208, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 119, -109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -245, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 147, 103, -393, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -358, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 335, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 371, 23, -288, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 371, -19, -278, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -360, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -387, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 343, -92, -244, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 187, -192, -406, 58, -57, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -41, -94, -270, 200, 277, 237,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 429, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2, 64, -5, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 87, 57, 179, 123,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 116, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 241, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 229, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 436, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 439, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 119, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -51, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 204, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -160, -44,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 408, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 262, -21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -55, 0, -199, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -24, 7, -298, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 239, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 3, -302, -4, 233, -6,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimItemThrowB_joint16[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPurinAnimItemThrowB_joint18[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -309, 0, -176, 27, -99, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -275, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -83, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -5, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 138, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 136, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 119, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -16, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -280, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -314, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 99, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -182, -280,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -80, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -276, 157, -539, -350, -125, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 100, -884, -238, -386, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, -51, -1015, -63, -310, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -145, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1010, 15, -292, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -985, 38, -255, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -854, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -200, -165, -203, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -476, 120, 64, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 40, 167, -720, 122, -466, -184,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -289, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -141, -132, -304, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -224, -68, -235, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -316, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -102, 5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -244, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -185, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -313, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -310, 1, -101, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -309, 1, -176, 8, -99, 1,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimItemThrowB_joint19[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 5, 302, -17, 237, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 16, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 342, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 233, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 152, -88,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -68, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -7, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -15, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 336, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 352, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -74, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -50, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4, 29, -12, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 37, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 140, 181, 349, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 350, 143, 253, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -122, -126, 427, 9, 32, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -215, -41, 368, -51, -110, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -206, 3, 323, -16, -125, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -92, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -187, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 335, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 405, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -76, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 29, 50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -172, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 8, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 394, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 307, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 86, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 231, 12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 20, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, 0, 302, -4, 233, 2,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimItemThrowB_joint21[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPurinAnimItemThrowB_joint22[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1298, -1, -1785, -30, 1512, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1461, -131, 1393, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1895, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2005, -111,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -2195, -48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1621, -134, 1259, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1730, -56, -2214, -6, 1155, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -2182, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1735, 11, 1144, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1645, 76, 1214, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1554, 148, -2154, 82, 1292, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1347, 136, -2017, 198, 1477, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1280, 14, -1758, 258, 1554, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1360, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1319, -8, -1500, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1298, 48, -1246, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1223, 38, -1121, 53, 1233, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1221, -6, -1138, -29, 1218, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1322, -13, -1377, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1224, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1442, 47,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1328, -1, -1450, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1676, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1298, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1482, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1510, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1718, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1776, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1512, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, 0, -1785, -8, 1508, -4,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
