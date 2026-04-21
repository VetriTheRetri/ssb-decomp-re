/* AnimJoint data for relocData file 1321 (FTKirbyAnimShieldOff) */
/* 1744 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimShieldOff_joint1[8];
extern u16 dFTKirbyAnimShieldOff_joint2[58];
extern u16 dFTKirbyAnimShieldOff_joint3[18];
extern u16 dFTKirbyAnimShieldOff_joint4[48];
extern u16 dFTKirbyAnimShieldOff_joint6[46];
extern u16 dFTKirbyAnimShieldOff_joint7[116];
extern u16 dFTKirbyAnimShieldOff_joint8[22];
extern u16 dFTKirbyAnimShieldOff_joint10[46];
extern u16 dFTKirbyAnimShieldOff_joint11[116];
extern u16 dFTKirbyAnimShieldOff_joint12[22];
extern u16 dFTKirbyAnimShieldOff_joint14[10];
extern u16 dFTKirbyAnimShieldOff_joint15[64];
extern u16 dFTKirbyAnimShieldOff_joint17[16];
extern u16 dFTKirbyAnimShieldOff_joint19[50];
extern u16 dFTKirbyAnimShieldOff_joint20[64];
extern u16 dFTKirbyAnimShieldOff_joint22[14];
extern u16 dFTKirbyAnimShieldOff_joint23[92];
extern u16 dFTKirbyAnimShieldOff_joint24[14];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTKirbyAnimShieldOff_joints[] = {
	(u32)dFTKirbyAnimShieldOff_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimShieldOff_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimShieldOff_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimShieldOff_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimShieldOff_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimShieldOff_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimShieldOff_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimShieldOff_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimShieldOff_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimShieldOff_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimShieldOff_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimShieldOff_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimShieldOff_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimShieldOff_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimShieldOff_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimShieldOff_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTKirbyAnimShieldOff_joint23, /* [22] joint 23 */
	(u32)dFTKirbyAnimShieldOff_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTKirbyAnimShieldOff_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimShieldOff_joint2[58] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 480, 0, 4300, 3276, 4300,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 1), 0, 319,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 480, 4300, 3276, 4300,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), 120, 239,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 1020, 3891, 4915, 3891,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 840, -479, 120, -137,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 600, 0, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimShieldOff_joint3[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 7), -268,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimShieldOff_joint4[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY), 268, -446, 240,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 312, 82,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 357, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 0, -238, -268, 89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -357, -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -357, 51,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 7), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 312,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 5), 0, 312,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimShieldOff_joint6[46] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, -74, 89, -59,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -446, -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -446, -44, -536, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -536, 134, -268, 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -178, 119, 178, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -178, 25, 178, -25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimShieldOff_joint7[116] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4915,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2643, -32, -1410, 82, -146, 445,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2610, -12, 298, 667,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1371, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2618, -173, 1188, 714,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2263, 158, -1346, 137, 1726, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2936, 1009, -1096, -11, 1178, -809,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4283, 697, -1370, -185, 108, -712,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4332, -4, -1468, -87, -246, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4273, 18, -1545, 91, -308, -180,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1111, 66,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4369, 484, -606, -352,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1532, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5242, 604,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 5577, 191, -1152, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 5626, 25, -1303, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5629, 3, -1387, -84, -1608, -76,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimShieldOff_joint8[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -650, 650,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 325,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimShieldOff_joint10[46] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, 74, 178, 59,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 446, 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 446, 44, 536, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 536, -134, 268, -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 178, -119, -178, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 178, -25, -178, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimShieldOff_joint11[116] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4915,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -209, -729, 179, 181, -328, -618,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -938, -400, 361, 30, -946, -46,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1010, 142, 240, -48, -421, 532,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -654, -133, 264, 169, 119, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1278, -1010, 580, -11, -412, -810,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2675, -722, 240, -221, -1501, -720,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2723, 5, 137, -90, -1852, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2664, -19, 59, 93, -1915, -181,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2762, -493, 324, 219, -2215, -356,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 463, -94, -2910, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3652, -603,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3968, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4017, -26, 310, -122, -3140, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4021, -3, 217, -92, -3216, -76,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimShieldOff_joint12[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -535, 528,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimShieldOff_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimShieldOff_joint15[64] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 124, -19, -302, -1, -237, -6,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -23, -76, -265, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -237, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -62, 140,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 93, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -78, -31, -199, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -23, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -256, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -268, -16, 149, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -290, -17, 212, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 2, -302, -12, 233, 20,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimShieldOff_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimShieldOff_joint19[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1924, 10, 1659, -19, -1310, -5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1926, -53, 1695, 66, -1257, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2003, -39, 1751, 30, -1160, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1924, 12, 1784, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1556, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1663, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 6, 1785, 0, -1708, -44,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimShieldOff_joint20[64] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 899, 14, 177, 0, 402, 2,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1032, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 297, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 304, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 215, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 262, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1034, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 942, -232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 576, -371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 199, -258, 250, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 59, -88, 242, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 23, -35, 302, 4, 237, -5,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimShieldOff_joint22[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTKirbyAnimShieldOff_joint23[92] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1465, -28, -1660, 10, -1239, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1638, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1108, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1529, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1529, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1963, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1485, 110,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1393, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -958, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1266, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1969, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1789, 286,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1416, -116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1809, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1409, 261,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1295, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1487, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1796, 12, -1669, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, -3, -1785, 10, -1704, -35,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTKirbyAnimShieldOff_joint24[14] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
