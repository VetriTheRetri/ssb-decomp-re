/* AnimJoint data for relocData file 1318 (FTKirbyAnimTech) */
/* 2240 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimTech_joint1[52];
extern u16 dFTKirbyAnimTech_joint2[58];
extern u16 dFTKirbyAnimTech_joint3[16];
extern u16 dFTKirbyAnimTech_joint5[66];
extern u16 dFTKirbyAnimTech_joint6[130];
extern u16 dFTKirbyAnimTech_joint7[16];
extern u16 dFTKirbyAnimTech_joint9[52];
extern u16 dFTKirbyAnimTech_joint10[140];
extern u16 dFTKirbyAnimTech_joint11[16];
extern u16 dFTKirbyAnimTech_joint13[100];
extern u16 dFTKirbyAnimTech_joint14[84];
extern u16 dFTKirbyAnimTech_joint16[14];
extern u16 dFTKirbyAnimTech_joint18[116];
extern u16 dFTKirbyAnimTech_joint19[94];
extern u16 dFTKirbyAnimTech_joint21[122];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimTech_joints[] = {
	(u32)dFTKirbyAnimTech_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimTech_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimTech_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimTech_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimTech_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimTech_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimTech_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimTech_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimTech_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimTech_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimTech_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimTech_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimTech_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimTech_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimTech_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF01F9, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimTech_joint1[52] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 780,
	ftAnimSetValBlock(FT_ANIM_ROTX), 1519,
	ftAnimSetValT(FT_ANIM_ROTX, 6), 1519,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 780,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 4), 2412, 251, 1440, 38,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 840, -597,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 3216,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -597,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), 3216,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 580, -564,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 456, 33,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 600, 256,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimTech_joint2[58] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4915, 1638, 4915,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -268, -23,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_ROTY, 5), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4505, 2457, 4505,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimTech_joint3[16] = {
	ftAnimSetVal(FT_ANIM_ROTX), 0,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 18), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), 125,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimTech_joint5[66] = {
	ftAnimSetValAfter(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), -120, -120,
	ftAnimSetValRate(FT_ANIM_ROTX), 31, -11,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -8, 126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -14, -5,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 14), -120, -120,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -8, 126,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -40, 2, 178, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -52, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, 0, 0, 2, 0, -9,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), -120, 53, -120, 106,
	ftAnimSetValRateT(FT_ANIM_TRAX, 6), -60, 106,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimTech_joint6[130] = {
	ftAnimSetValAfter(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4095,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 966, -20, -476, -4, -1629, 5,
	ftAnimSetValBlock(FT_ANIM_SCAX), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1380, 189,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -522, 55, -1900, -122,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 6), 3072,
	ftAnimSetValT(FT_ANIM_SCAX, 14), 3072,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1612, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1834, 116, -454, 23, -2034, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -440, 4, -1960, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1845, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2056, 37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -470, -32, -1995, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2611, -199,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -512, 60,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2098, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 3025, 439,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2812, -171,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -3194, -30,
	ftAnimSetValT(FT_ANIM_SCAX, 6), 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3500, 417,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4068, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -449, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -269, 55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3999, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3999, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4021, 21, -220, 48, -3216, -22,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimTech_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimTech_joint9[52] = {
	ftAnimSetValAfter(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), 120, -120,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 30, 7, -127,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 17), 120, -120,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 26, 7, -127,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, 7, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -25, 1, 42, -2, -162, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, 0, 0, -1, 0, 8,
	ftAnimBlock(0, 10),
	ftAnimSetValRateT(FT_ANIM_TRAX, 6), 60, -106,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimTech_joint10[140] = {
	ftAnimSetValAfter(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2523, -65, 1131, -10, -17, -54,
	ftAnimSetValBlock(FT_ANIM_SCAX), 3072,
	ftAnimSetValT(FT_ANIM_SCAX, 6), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1112, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -2706, 61, -126, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2615, 48, -18, 68,
	ftAnimSetValT(FT_ANIM_SCAX, 14), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2719, -218, -24, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3046, -241, -199, -125,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3447, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -402, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1127, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 864, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3457, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3696, -343,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -415, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -822, -407,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4187, -520,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -5031, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 894, 56, -1317, -339,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1573, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1327, 71,
	ftAnimSetValT(FT_ANIM_SCAX, 6), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5069, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5386, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5525, -98, -1588, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5584, -51, -1600, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5629, -45, 1391, 63, -1608, -7,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimTech_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimTech_joint13[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, 0, 43, -1072, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1162, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -860, -31, 153, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1055, -164,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 382, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1412, -130,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1907, -120,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1872, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 512, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 392, -58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1968, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1944, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1652, 87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -194, -173,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1845, 261,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1072, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1276, 170,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -804, 39,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -209, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 0, 37,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimTech_joint14[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, -36, -302, -20, 237, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -322, 28, 255, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -138, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -57, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -302, 10, 237, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 233, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -302, -11,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -23, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -64, -45,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 237, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 246, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -325, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -314, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -114, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -42, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 19, -302, 12, 237, -8,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimTech_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 25), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimTech_joint18[116] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1840, -6, 1576, 96, -1350, -70,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1783, -104, 1835, -83, -1510, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1912, -54, 1671, -157, -1294, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1929, -26, 1573, 69, -1195, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1946, 0, 1659, 51, -1294, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1385, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1970, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1572, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1577, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1710, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1401, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1557, -115,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1997, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1947, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1760, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1792, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1672, -66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1699, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2001, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1940, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 22, 1785, -7, -1704, -5,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimTech_joint19[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 36, 302, 20, 237, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 322, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 135, -64, 301, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 57, -57, 255, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 21, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 233, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 302, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 302, 11,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 21, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 66, 46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 237, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 286, 4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 325, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 314, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 114, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 42, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 271, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 246, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -21, 302, -11, 233, -12,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimTech_joint21[122] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 25), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x280E, 0xFA6A, 0x000B, 0xF9DC, 0xFFA4, 0xFAA7, 0xFFB5, 0x4F00, 0x1000, 0x1000, 0x1000, 0x200F, 0x0004, 0xFA4E, 0x0061, 0xF8E5, 0x0053, 0xFA0E, 0x0078, 0x200F, 0x0001, 0xFABB, 0x002B, 0xF982, 0x008B, 0xFAD8, 0x00A4, 0x280D, 0x0006, 0xF995, 0x0003, 0xFA78, 0x0000, 0x2003, 0x0003, 0xFABD, 0x000B, 0x2003, 0x0001, 0xFAC5, 0x0006, 0x2803, 0x0009, 0xFB0B, 0x0029, 0x0801, 0x0002, 0x200D, 0x0001, 0xF9A3, 0x0004, 0xFA8B, 0x0003, 0x2805, 0x000B, 0xF8E9, 0xFFFF, 0x2009, 0x0006, 0xFA44, 0x001D, 0x200B, 0x0001, 0xFB47, 0x0002, 0xFA75, 0xFFD7, 0x2803, 0x0003, 0xFAFF, 0x002F, 0x2009, 0x0002, 0xF961, 0xFFB6, 0x2009, 0x0001, 0xF95C, 0x0001, 0x2809, 0x0003, 0xF954, 0xFFFD, 0x2003, 0x0001, 0xFB36, 0x0013, 0x2803, 0x0002, 0xFAFF, 0xFFE5, 0x2005, 0x0001, 0xF8EE, 0x0009, 0x2005, 0x0001, 0xF8FD, 0x000C, 0x200F, 0x0001, 0xFAEE, 0xFFEF, 0xF907, 0x000A, 0xF954, 0x0000, 0x0000, 0x0000, 0x0000,
};
