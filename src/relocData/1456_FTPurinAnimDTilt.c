/* AnimJoint data for relocData file 1456 (FTPurinAnimDTilt) */
/* 3712 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimDTilt_joint1[38];
extern u16 dFTPurinAnimDTilt_joint2[56];
extern u16 dFTPurinAnimDTilt_joint3[20];
extern u16 dFTPurinAnimDTilt_joint4[42];
extern u16 dFTPurinAnimDTilt_joint6[78];
extern u16 dFTPurinAnimDTilt_joint7[228];
extern u16 dFTPurinAnimDTilt_joint8[52];
extern u16 dFTPurinAnimDTilt_joint10[74];
extern u16 dFTPurinAnimDTilt_joint11[186];
extern u16 dFTPurinAnimDTilt_joint12[40];
extern u16 dFTPurinAnimDTilt_joint14[30];
extern u16 dFTPurinAnimDTilt_joint15[254];
extern u16 dFTPurinAnimDTilt_joint17[86];
extern u16 dFTPurinAnimDTilt_joint19[266];
extern u16 dFTPurinAnimDTilt_joint20[172];
extern u16 dFTPurinAnimDTilt_joint22[188];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTPurinAnimDTilt_joints[] = {
	(u32)dFTPurinAnimDTilt_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimDTilt_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimDTilt_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimDTilt_joint4, /* [3] joint 4 */
	(u32)dFTPurinAnimDTilt_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPurinAnimDTilt_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimDTilt_joint8, /* [7] joint 8 */
	(u32)dFTPurinAnimDTilt_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTPurinAnimDTilt_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimDTilt_joint12, /* [11] joint 12 */
	(u32)dFTPurinAnimDTilt_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPurinAnimDTilt_joint15, /* [14] joint 15 */
	(u32)dFTPurinAnimDTilt_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPurinAnimDTilt_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPurinAnimDTilt_joint20, /* [19] joint 20 */
	(u32)dFTPurinAnimDTilt_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF0351, /* [22] END */
};

/* Joint 1 */
u16 dFTPurinAnimDTilt_joint1[38] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4915, 2048, 4915,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, -1, 3276, 555, 4096, 1,
	ftAnimSetValRateT(FT_ANIM_SCAY, 4), 4096, -111,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 4), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 18), 4096, 1, 2048, -103, 4096, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4915, 2048, 4915,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPurinAnimDTilt_joint2[56] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), 0, -160, 0, 320,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), 600,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 600, 28, 480, -43,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 4), -240,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 18), 0, 68, -120, -137,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 13), 660, 26,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 660, -48,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 600, -47,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPurinAnimDTilt_joint3[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 0, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 0, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 28), -268,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPurinAnimDTilt_joint4[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 312, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY, 8), 268, -7, 0, 44, 4096, -170, 4096, -136,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 8), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -89, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 536, 3072, 3276, 4915,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 28), 0, 0, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPurinAnimDTilt_joint6[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 8), 178,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -178, 14,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -141, -59, -344, -416, 8, -89,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -59, -46, -416, 103, -89, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 178, 20, 0, -8, -187, -26, -240, 128, 186, 63,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 268, -6, -133, 17, -63, 78, 84, -43,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 18), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -136, 107, -15, 51, 62, -67,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPurinAnimDTilt_joint7[228] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, 14, -1387, 57, -1608, -6,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2478, 64, -1638, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1330, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1141, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2556, -81, -909, 178, -1707, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2315, 129, -784, 71, -1529, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2814, 274, -767, 35, -2222, -563,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2711, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -714, 60, -2655, -273,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -610, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2770, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2706, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2629, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2574, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -594, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -671, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2574, 117,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2418, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2654, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2768, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2809, 31, -675, 1, -2365, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -416, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2872, 37, -2273, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2907, 32, -2252, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -2630, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 3265, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3311, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3551, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -392, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -355, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2677, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2790, -41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3634, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3773, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2842, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3056, -35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -356, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -269, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3773, 16, -3077, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3114, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3806, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3893, 85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4014, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3155, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -236, 26, -3197, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4021, 6, -217, 18, -3216, -19,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPurinAnimDTilt_joint8[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPurinAnimDTilt_joint10[74] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 8), 178,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 178, -14,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 104, 121, 25, 33, -20, -102,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 121, 140, 33, -65, -102, 68,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -8, 244, 53, -39, -29, 47, 103,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -178,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 18), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 178, 6,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 202, -69, -10, 11, 53, -13,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimDTilt_joint11[186] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 17, 1387, -2, 1608, -32,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 921, 54, 1323, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1576, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1502, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1425, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 974, 31, 1257, -62, 1380, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1160, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 983, -42, 1316, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 889, -111, 1181, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 760, -89, 1165, 4, 1054, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 711, 166, 1170, -34, 1029, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1094, 396, 1095, -110, 1401, 420,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 836, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1503, 476, 1869, 544,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2047, 385, 2490, 454,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2274, 71, 842, -5, 2777, 112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 825, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2189, -304, 2715, -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1664, -601, 2213, -580,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 985, -399, 1555, -378,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 866, -80, 852, 25, 1456, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1234, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 794, -25, 1421, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 772, -19, 1416, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 691, 3, 1438, 4,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1262, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1391, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 697, 9, 1445, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 801, 4, 1602, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 2, 1387, -4, 1608, 6,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPurinAnimDTilt_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPurinAnimDTilt_joint14[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, -48, -25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, -1072,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 73, 16, -60, 8, -22, -7,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 85, -1, -35, 1, -37, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 28), 68, -53, -19,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPurinAnimDTilt_joint15[254] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -86, -26, -302, 7, 237, 35,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -183, -92,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -230, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 272, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 355, 94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 632, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -297, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -425, -90, -180, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -63, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -479, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -436, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 686, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 740, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -398, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -314, 205, -94, -120, 732, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 12, 468, -303, -1, 291, -693,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 623, 315, -96, 109, -654, -514,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 643, 2, -85, -66, -738, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 619, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -230, -113, -704, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -718, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -311, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 644, 28, -292, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 615, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -248, 8, -752, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -622, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -275, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -481, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 516, -138, -500, -14, -519, 143,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -475, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 339, -204, -335, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 107, -208, -90, 232,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 325, 185,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -233, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -378, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -239, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -91, 98, 501, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -219, 10, -43, 40, 500, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -167, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -11, 23, 500, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -148, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 354, -40,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -141, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -86, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -195, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -295, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 308, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 243, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -86, 0, -302, -7, 237, -6,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPurinAnimDTilt_joint17[86] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 635, 503,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1014, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 522, -432,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 145, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 393, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 539, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 675, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 724, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 603, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 344, -301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTPurinAnimDTilt_joint19[266] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -336, -39, -114, -4, -92, -4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -122, 25, 0, 128,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -375, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -476, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -562, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -481, 121, -78, 29, 169, 153,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 379, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -95, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -320, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -233, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -175, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 401, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -122, -78, 390, -82,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 8192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -192, 149, -252, -107, 235, -493,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 123, 115, -337, 65, -597, -263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 39, 37, -120, 140, -290, 381,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 198, 73, -57, 36, 166, 336,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -39, 5,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 185, -26, 382, 143,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -131, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -35, 1, 357, -130,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 191, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 62, -115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -108, -52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -190, -9, -76, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -150, 20, -10, 16, -144, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -363, -56,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 20), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -149, 11, -42, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -24, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -228, -24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -401, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 37, 48, -357, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 39, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -247, -15, -221, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -283, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -221, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -206, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -173, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 30, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -70, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -282, 5, -186, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -123, 15, -102, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -142, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -322, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -336, -14, -114, 8, -92, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTPurinAnimDTilt_joint20[172] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 84, -8, 303, 2, 233, -13,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -59, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 337, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 133, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 75, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -26, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -91, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -99, 44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 328, -26, -4, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -18, 77, 284, -74, 137, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 55, 37, 180, -93, 340, 163,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 70, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 482, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 56, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 0, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 73, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 171, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 471, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 200, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 137, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -209, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -17, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -130, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 167, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 219, 46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -212, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 177, 50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -129, 11, 270, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 77, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 347, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 329, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 311, -12, 218, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 84, 7, 303, -7, 233, 14,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPurinAnimDTilt_joint22[188] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 19), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000, 0x280E, 0x0150, 0x0002, 0x0072, 0x0000, 0xFFA0, 0x0008, 0x4F00, 0x1000, 0x1000, 0x1000, 0x2807, 0x0007, 0x017E, 0xFFFB, 0x009E, 0x0008, 0x2009, 0x0004, 0x0013, 0x002E, 0x2009, 0x0001, 0x0041, 0x0028, 0x2009, 0x0002, 0x006E, 0xFFF9, 0x200F, 0x0001, 0x0173, 0xFFDD, 0x00A5, 0x0002, 0x0055, 0xFFAC, 0x2803, 0x0003, 0x0085, 0xFFCF, 0x2805, 0x0004, 0x0083, 0xFFF9, 0x2009, 0x0002, 0xFF14, 0xFF87, 0x2009, 0x0001, 0xFED3, 0xFFE3, 0x200B, 0x0001, 0x006E, 0xFFF6, 0xFED9, 0x0004, 0x2803, 0x0005, 0x0080, 0x0006, 0x200D, 0x0001, 0x007A, 0xFFF6, 0xFEDC, 0x0002, 0x2809, 0x000A, 0xFF87, 0x0031, 0x2805, 0x0012, 0xFFCA, 0x0000, 0x0801, 0x0004, 0x2003, 0x0001, 0x0087, 0x0007, 0x2803, 0x000A, 0x009E, 0xFFFB, 0x0801, 0x0005, 0x2009, 0x0001, 0xFFBE, 0x0037, 0x2809, 0x0006, 0x00D5, 0x000B, 0x0801, 0x0004, 0x2003, 0x0001, 0x0099, 0xFFFD, 0x2803, 0x0004, 0x00DF, 0x001F, 0x0801, 0x0001, 0x2009, 0x0001, 0x00D3, 0xFFE9, 0x2809, 0x0003, 0x0029, 0xFFD0, 0x2005, 0x0001, 0xFFCC, 0x0004, 0x2805, 0x0006, 0x0053, 0x001A, 0x0801, 0x0001, 0x2003, 0x0001, 0x00FD, 0x001B, 0x2803, 0x0005, 0x0150, 0x0002, 0x2009, 0x0001, 0x0002, 0xFFE0, 0x2809, 0x0004, 0xFFA7, 0xFFF5, 0x0801, 0x0003, 0x2005, 0x0001, 0x006A, 0x000F, 0x200F, 0x0001, 0x0150, 0x0000, 0x0072, 0x0008, 0xFFA0, 0xFFFA, 0x0000,
};
