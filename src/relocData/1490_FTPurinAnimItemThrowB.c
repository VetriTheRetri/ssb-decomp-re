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
extern u16 dFTPurinAnimItemThrowB_joint21[214];

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
	0xFFFF02CD, /* [21] END */
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
u16 dFTPurinAnimItemThrowB_joint21[214] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFAEE, 0xFFFF, 0xF907, 0xFFE2, 0x05E8, 0xFFFD, 0x280B, 0x0004, 0xFA4B, 0xFF7D, 0x0571, 0xFF96, 0x2005, 0x0002, 0xF899, 0xFFA2, 0x2005, 0x0001, 0xF82B, 0xFF91, 0x2805, 0x0002, 0xF76D, 0xFFD0, 0x0801, 0x0001, 0x200B, 0x0001, 0xF9AB, 0xFF7A, 0x04EB, 0xFF89, 0x200F, 0x0001, 0xF93E, 0xFFC8, 0xF75A, 0xFFFA, 0x0483, 0xFFC7, 0x2805, 0x0003, 0xF77A, 0x0015, 0x200B, 0x0001, 0xF939, 0x000B, 0x0478, 0x0004, 0x200B, 0x0002, 0xF993, 0x004C, 0x04BE, 0x0040, 0x200F, 0x0001, 0xF9EE, 0x0094, 0xF796, 0x0052, 0x050C, 0x0083, 0x200F, 0x0001, 0xFABD, 0x0088, 0xF81F, 0x00C6, 0x05C5, 0x0082, 0x200F, 0x0001, 0xFB00, 0x000E, 0xF922, 0x0102, 0x0612, 0x0009, 0x2809, 0x0002, 0x0550, 0xFF7D, 0x2007, 0x0001, 0xFAD9, 0xFFF8, 0xFA24, 0x0100, 0x2007, 0x0001, 0xFAEE, 0x0030, 0xFB22, 0x00BD, 0x200F, 0x0001, 0xFB39, 0x0026, 0xFB9F, 0x0035, 0x04D1, 0xFFBA, 0x200F, 0x0001, 0xFB3B, 0xFFFA, 0xFB8E, 0xFFE3, 0x04C2, 0xFFFC, 0x2807, 0x0004, 0xFAD6, 0xFFF3, 0xFA9F, 0xFFB4, 0x2009, 0x0001, 0x04C8, 0x0016, 0x2809, 0x0004, 0x05A2, 0x002F, 0x0801, 0x0003, 0x2007, 0x0001, 0xFAD0, 0xFFFF, 0xFA56, 0xFFC1, 0x2805, 0x0005, 0xF974, 0xFFD6, 0x2803, 0x0008, 0xFAEE, 0x0000, 0x2009, 0x0001, 0x05CA, 0x0020, 0x2809, 0x0006, 0x05E6, 0x0000, 0x0801, 0x0004, 0x2005, 0x0001, 0xF94A, 0xFFDB, 0x2805, 0x0002, 0xF910, 0xFFF0, 0x0801, 0x0001, 0x2009, 0x0001, 0x05E8, 0x0000, 0x200F, 0x0001, 0xFAEE, 0x0000, 0xF907, 0xFFF8, 0x05E4, 0xFFFC, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
