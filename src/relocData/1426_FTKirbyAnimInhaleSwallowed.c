/* AnimJoint data for relocData file 1426 (FTKirbyAnimInhaleSwallowed) */
/* 1856 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimInhaleSwallowed_joint1[58];
extern u16 dFTKirbyAnimInhaleSwallowed_joint2[10];
extern u16 dFTKirbyAnimInhaleSwallowed_joint3[46];
extern u16 dFTKirbyAnimInhaleSwallowed_joint4[24];
extern u16 dFTKirbyAnimInhaleSwallowed_joint6[24];
extern u16 dFTKirbyAnimInhaleSwallowed_joint7[82];
extern u16 dFTKirbyAnimInhaleSwallowed_joint8[14];
extern u16 dFTKirbyAnimInhaleSwallowed_joint10[24];
extern u16 dFTKirbyAnimInhaleSwallowed_joint11[82];
extern u16 dFTKirbyAnimInhaleSwallowed_joint12[16];
extern u16 dFTKirbyAnimInhaleSwallowed_joint13[10];
extern u16 dFTKirbyAnimInhaleSwallowed_joint15[60];
extern u16 dFTKirbyAnimInhaleSwallowed_joint16[112];
extern u16 dFTKirbyAnimInhaleSwallowed_joint18[8];
extern u16 dFTKirbyAnimInhaleSwallowed_joint20[80];
extern u16 dFTKirbyAnimInhaleSwallowed_joint21[112];
extern u16 dFTKirbyAnimInhaleSwallowed_joint23[14];
extern u16 dFTKirbyAnimInhaleSwallowed_joint24[80];
extern u16 dFTKirbyAnimInhaleSwallowed_joint25[22];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTKirbyAnimInhaleSwallowed_joints[] = {
	(u32)dFTKirbyAnimInhaleSwallowed_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimInhaleSwallowed_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimInhaleSwallowed_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimInhaleSwallowed_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimInhaleSwallowed_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimInhaleSwallowed_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimInhaleSwallowed_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimInhaleSwallowed_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimInhaleSwallowed_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimInhaleSwallowed_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimInhaleSwallowed_joint13, /* [12] joint 13 */
	(u32)dFTKirbyAnimInhaleSwallowed_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTKirbyAnimInhaleSwallowed_joint16, /* [15] joint 16 */
	(u32)dFTKirbyAnimInhaleSwallowed_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimInhaleSwallowed_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTKirbyAnimInhaleSwallowed_joint21, /* [20] joint 21 */
	(u32)dFTKirbyAnimInhaleSwallowed_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTKirbyAnimInhaleSwallowed_joint24, /* [23] joint 24 */
	(u32)dFTKirbyAnimInhaleSwallowed_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTKirbyAnimInhaleSwallowed_joint1[58] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 840,
	ftAnimSetValBlock(FT_ANIM_TRAZ), 120,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 840, -96,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 3), -360,
	ftAnimSetValT(FT_ANIM_TRAZ, 3), 240,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 720, -130,
	ftAnimBlock(0, 2),
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 3), -240,
	ftAnimSetValT(FT_ANIM_TRAZ, 3), 120,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 660, -95,
	ftAnimBlock(0, 2),
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 3), -60,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 5), 600,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 2), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 3), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimInhaleSwallowed_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimInhaleSwallowed_joint3[46] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 312, 0, 4505, 4915, 4505,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 312, -120, 3276, 3276, 5324,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 4), 5324, 521, 5324, 521,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 16), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAZ, 4), 480, 3276,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 12), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 6144, 6144, 6144,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 6144, 6144, 6144,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTKirbyAnimInhaleSwallowed_joint4[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -10, 285, 5455, 5324, 2996,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 28, 304, 1925, 122, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 17), 28, 304, 1925, 122, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimInhaleSwallowed_joint6[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAZ), 268, 120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 89, -120, -60, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 89, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 16), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimInhaleSwallowed_joint7[82] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2662, -4, -1013, -16, -137, -24,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -2457, 182, -446, -98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1204, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 3072, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 2457, 3276, 3276,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2267, 143, -546, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2197, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -419, 26,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1187, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1145, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2200, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2165, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -395, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -326, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2163, 2, -1142, 3, -325, 1,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimInhaleSwallowed_joint8[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 19), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimInhaleSwallowed_joint10[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAZ), -268, 120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -89, 120, -60, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -89, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 16), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimInhaleSwallowed_joint11[82] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2662, 4, 1013, 16, -137, -24,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 2457, -181, -447, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1202, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 3072, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 2457, 3276, 3276,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2268, -143, -544, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2197, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -421, 25,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1188, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1145, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2198, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2166, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -397, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -326, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2163, -2, 1142, -3, -324, 1,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimInhaleSwallowed_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimInhaleSwallowed_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimInhaleSwallowed_joint15[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -279, 412, 120, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 3276, 3276, 5324,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 300, 67, -120, -215,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 17), 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY, 4), 480, 174, -96, 52, 5324, 521, 5324, 521,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 4), 3276,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 540, 80, -48, 64,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 6144, 6144, 6144,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 600, 0, 6144, 6144, 6144,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimInhaleSwallowed_joint16[112] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -56, 48, -240, -24, 317, -107,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 143, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -288, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 75, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -63, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 270, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 44, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1, 70,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 390, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 191, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 9, -309, -6, 44, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -69, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -297, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 250, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 335, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 206, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -49, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -23, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -294, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -301, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 230, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 236, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 0, -302, -1, 237, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimInhaleSwallowed_joint18[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTKirbyAnimInhaleSwallowed_joint20[80] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1900, -21, 1631, -2, -1456, 42,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1912, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 1783, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1339, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1240, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1454, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1890, 0, -1497, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1929, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1475, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1401, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1625, -25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1907, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1917, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1627, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1700, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 0, 1785, 2, -1704, -4,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimInhaleSwallowed_joint21[112] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 54, -49, 240, 24, 313, -107,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -143, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 288, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 75, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -63, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 266, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -44, 88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1, -71,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 390, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 191, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -89, -10, 308, 6, 39, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 69, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 297, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 254, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 335, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 206, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 47, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 20, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 294, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 301, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 230, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 232, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, 0, 302, 1, 233, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTKirbyAnimInhaleSwallowed_joint23[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTKirbyAnimInhaleSwallowed_joint24[80] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 291, 21, 22, -2, 148, 42,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 304, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 174, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 268, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 367, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 149, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 282, 0, 111, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 321, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 133, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 203, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -16, -29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 298, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 309, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -22, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -95, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, 0, 176, 2, -99, -4,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTKirbyAnimInhaleSwallowed_joint25[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 1800,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 18), 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
