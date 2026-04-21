/* AnimJoint data for relocData file 1470 (FTPurinAnimShieldOff) */
/* 2192 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimShieldOff_joint1[8];
extern u16 dFTPurinAnimShieldOff_joint2[66];
extern u16 dFTPurinAnimShieldOff_joint3[36];
extern u16 dFTPurinAnimShieldOff_joint4[42];
extern u16 dFTPurinAnimShieldOff_joint6[88];
extern u16 dFTPurinAnimShieldOff_joint7[130];
extern u16 dFTPurinAnimShieldOff_joint8[44];
extern u16 dFTPurinAnimShieldOff_joint10[82];
extern u16 dFTPurinAnimShieldOff_joint11[122];
extern u16 dFTPurinAnimShieldOff_joint12[40];
extern u16 dFTPurinAnimShieldOff_joint14[36];
extern u16 dFTPurinAnimShieldOff_joint15[84];
extern u16 dFTPurinAnimShieldOff_joint17[8];
extern u16 dFTPurinAnimShieldOff_joint19[66];
extern u16 dFTPurinAnimShieldOff_joint20[74];
extern u16 dFTPurinAnimShieldOff_joint22[14];
extern u16 dFTPurinAnimShieldOff_joint23[98];
extern u16 dFTPurinAnimShieldOff_joint24[10];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTPurinAnimShieldOff_joints[] = {
	(u32)dFTPurinAnimShieldOff_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimShieldOff_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimShieldOff_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimShieldOff_joint4, /* [3] joint 4 */
	(u32)dFTPurinAnimShieldOff_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPurinAnimShieldOff_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimShieldOff_joint8, /* [7] joint 8 */
	(u32)dFTPurinAnimShieldOff_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTPurinAnimShieldOff_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimShieldOff_joint12, /* [11] joint 12 */
	(u32)dFTPurinAnimShieldOff_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPurinAnimShieldOff_joint15, /* [14] joint 15 */
	(u32)dFTPurinAnimShieldOff_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPurinAnimShieldOff_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPurinAnimShieldOff_joint20, /* [19] joint 20 */
	(u32)dFTPurinAnimShieldOff_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPurinAnimShieldOff_joint23, /* [22] joint 23 */
	(u32)dFTPurinAnimShieldOff_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTPurinAnimShieldOff_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPurinAnimShieldOff_joint2[66] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 0, 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_TRAX), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 0, 480, 0, 4300, 3276, 4300,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 1), 0, -1,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 480, 4300, 3276, 4300,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), 120, 195,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 1020, 3891, 4915, 3891,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 840, -490, 120, -137,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 0, 590, 0, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPurinAnimShieldOff_joint3[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -312, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 3), 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), -268,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 7), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -46, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPurinAnimShieldOff_joint4[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -446,
	ftAnimSetValRate(FT_ANIM_ROTX), 268, 62,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 357, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 0, -238, -268, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -357, -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -357, 51,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPurinAnimShieldOff_joint6[88] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 39, 51,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), -178, -74, 89, 0, -244, 321,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 2), -446,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -357, -213,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 3), -83,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), -46, -14, -85, -27,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 2), -93,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 4), -53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -446, 0, -536, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -536, 0, -268, 369,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 4), -590,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), -196,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 178, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 1), -178, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 2), 178, 0, -125, -141,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 2), -178, -261,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -160, -3, -76, 1, 99, 90,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimShieldOff_joint7[130] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2544, 85, -1351, 56, -3091, 104,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY), 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 4), 4096, 0, 4096, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2629, 84, -1294, 9, -2987, 467,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2712, -154, -1331, 11, -2156, 721,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2321, 236, -1270, 119, -1543, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3185, 918, -1093, 19, -2310, -686,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4158, 604, -1231, -71, -2917, -692,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 1), 5120, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 4), 4096, 0, 4096, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4394, 48, -1236, -15, -3695, -532,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3946, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4256, 21, -1262, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4438, 124, -1150, 131,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -934, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4505, 249, -3830, -227,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 3), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4936, 353, -4400, -495,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5212, 137, -1150, -153, -4820, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5211, 0, -1241, -90, -4869, -48,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTPurinAnimShieldOff_joint8[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -227, 227,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -127,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 130,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPurinAnimShieldOff_joint10[82] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 95, -455, 242,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, 0, 178, 67,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 357, 119, -306, 1138, -63, -856,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX, 2), 446, 200,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 446, 0, 536, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 2), -164,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 3), 45,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 1), 536, 0, 268, -357, -311, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -178, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 178, -311, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 2), -178, 0, 89, 154,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 178, -511, -354,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 151, 0, -96, -3, 120, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimShieldOff_joint11[122] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX), -686, -405, -81, 238, -995, -59, 4096, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 4096, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1091, -315, 157, 242, -1055, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1317, -599, 404, 508, -869, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2290, -994, 1175, 382, -1501, -786,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3305, -912, 1170, 127, -2442, -669,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4116, -512, 1431, 87, -2840, -608,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 5120,
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 4096, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4330, -52, 1344, -31, -3660, -546,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3931, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4220, -59, 1369, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4450, -240, 1181, -198,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -5036, -363, 902, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3860, -207,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -4837, -270,
	ftAnimSetValRateT(FT_ANIM_SCAX, 3), 4096, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -5428, -208, 1113, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5452, -23, 1241, 127, -4888, -50,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPurinAnimShieldOff_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -428, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPurinAnimShieldOff_joint14[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, 0, 62, -1062, -1, 130, 41, -81, 0, -79, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -576, 9, 102, 0, -1065, 0, 137, 0, -77, 39, -19, 57,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -501, -271, -1055, 106, -21, 16,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPurinAnimShieldOff_joint15[84] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 124, -25, -302, 0, -237, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -264, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 74, -10, -237, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 77, -48, -241, 86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -78, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -63, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -199, 25, 43, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -254, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 101, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -86, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -34, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -257, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -294, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 167, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 231, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -36, -2, -308, -13, 259, 27,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPurinAnimShieldOff_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTPurinAnimShieldOff_joint19[66] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1924, 14, 1659, -21, -1310, -1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1926, -53, -1248, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1618, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1694, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1768, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2003, -39, -1160, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1941, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1227, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1281, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1649, -72,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1761, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1937, 3, 1758, -3, -1689, -39,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPurinAnimShieldOff_joint20[74] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 899, 15, 177, 0, 402, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 982, 51, 215, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 403, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 297, -93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 235, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1032, 25, 247, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1041, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 303, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 259, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 941, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 207, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 68, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 36, -31, 308, 4, 259, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPurinAnimShieldOff_joint22[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTPurinAnimShieldOff_joint23[98] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1465, -31, -1660, 11, 1977, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1529, -16, -1638, 5, 1976, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1529, -99, -1638, 76, 1976, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1963, -121, 2258, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1484, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1418, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1393, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1971, -8, 2263, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2148, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1981, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1776, 291, -1419, -117,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1766, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1398, 264, 1950, -194,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1567, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1248, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1274, -15, -1761, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1279, -4, -1758, 3, 1527, -39,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPurinAnimShieldOff_joint24[10] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
