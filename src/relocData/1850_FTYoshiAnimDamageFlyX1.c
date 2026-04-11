/* AnimJoint data for relocData file 1850 (FTYoshiAnimDamageFlyX1) */
/* 2080 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimDamageFlyX1_joint1[28];
extern u16 dFTYoshiAnimDamageFlyX1_joint2[60];
extern u16 dFTYoshiAnimDamageFlyX1_joint3[64];
extern u16 dFTYoshiAnimDamageFlyX1_joint4[64];
extern u16 dFTYoshiAnimDamageFlyX1_joint6[10];
extern u16 dFTYoshiAnimDamageFlyX1_joint7[94];
extern u16 dFTYoshiAnimDamageFlyX1_joint8[48];
extern u16 dFTYoshiAnimDamageFlyX1_joint10[8];
extern u16 dFTYoshiAnimDamageFlyX1_joint11[78];
extern u16 dFTYoshiAnimDamageFlyX1_joint12[40];
extern u16 dFTYoshiAnimDamageFlyX1_joint13[10];
extern u16 dFTYoshiAnimDamageFlyX1_joint14[8];
extern u16 dFTYoshiAnimDamageFlyX1_joint15[50];
extern u16 dFTYoshiAnimDamageFlyX1_joint17[50];
extern u16 dFTYoshiAnimDamageFlyX1_joint18[86];
extern u16 dFTYoshiAnimDamageFlyX1_joint20[40];
extern u16 dFTYoshiAnimDamageFlyX1_joint22[60];
extern u16 dFTYoshiAnimDamageFlyX1_joint23[80];
extern u16 dFTYoshiAnimDamageFlyX1_joint25[110];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimDamageFlyX1_joints[] = {
	(u32)dFTYoshiAnimDamageFlyX1_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimDamageFlyX1_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimDamageFlyX1_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimDamageFlyX1_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimDamageFlyX1_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimDamageFlyX1_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimDamageFlyX1_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimDamageFlyX1_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimDamageFlyX1_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimDamageFlyX1_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimDamageFlyX1_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimDamageFlyX1_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimDamageFlyX1_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimDamageFlyX1_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimDamageFlyX1_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimDamageFlyX1_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimDamageFlyX1_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimDamageFlyX1_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimDamageFlyX1_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF01E5, /* [25] END */
};

/* Joint 1 */
u16 dFTYoshiAnimDamageFlyX1_joint1[28] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 672, 0, 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_ROTZ, 29), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), -147,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 21), -491,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), -1708,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), -2144,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimDamageFlyX1_joint2[60] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -317, 0, 61, 0, 30, -123,
	ftAnimSetValT(FT_ANIM_TRAZ, 23), -89,
	ftAnimSetValT(FT_ANIM_TRAY, 24), -87,
	ftAnimSetValT(FT_ANIM_TRAX, 29), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -375, -71, 71,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -375, -71, 71,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -624,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), -215, -50,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -174, -413, 392,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 416,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 292, 1409,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), 102, 1132,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 386,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 369, 185,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimDamageFlyX1_joint3[64] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 207, 222, 99,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 145, 371, 202,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -14, 410, 115,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 59, 394, 156,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -33, 411, 103,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 9, 401, 127,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -10, 404, 115,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 120, 379, 189,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 562, 328, 70,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 767, 303, 11,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 982, 278, -47,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1124, 227, -166,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimDamageFlyX1_joint4[64] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 75, 142, -284,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 3539, 595, 5484, -819, 3539, 595,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -184, 298, -187,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -184, 298, -187,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 5287, 83, 2457, -241, 5287, 83,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 3706, -595, 5001, 819, 3706, -595,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 33, 4096, -78, 4096, 33,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 21), 4096, 4096, 4096,
	ftAnimBlock(0, 15),
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 263, 205, -197,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimDamageFlyX1_joint6[10] = {
	ftAnimSetVal(FT_ANIM_ROTX), 643,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 29), 409,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimDamageFlyX1_joint7[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1850, -168, -1604, 106, 1689, -104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2071, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1346, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1335, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1324, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1155, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2065, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1788, 28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1318, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 865, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1759, -17, -1158, -60, 815, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1748, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1571, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1012, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1078, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1166, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1649, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1533, 114, -1612, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1420, 112, -1644, -32, 1156, -9,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimDamageFlyX1_joint8[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1130, 144,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -986, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -760, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -780, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -786, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -611, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -582, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -874, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -934, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -880, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -770, 110,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimDamageFlyX1_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimDamageFlyX1_joint11[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1432, 81, -2190, 157, 1085, 133,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1249, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1961, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1360, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1353, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1373, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1253, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 1123, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1964, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -2105, 4,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1388, -56, 1098, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1777, -49, 610, -76,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2094, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -2012, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1822, -44, -1973, 39, 536, -73,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimDamageFlyX1_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -784, 45,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -738, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -533, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -609, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -643, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -952, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -957, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -647, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -557, 90,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimDamageFlyX1_joint13[10] = {
	ftAnimSetVal(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 29), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimDamageFlyX1_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -893, 0,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimDamageFlyX1_joint15[50] = {
	ftAnimSetValAfter(FT_ANIM_SCAX | FT_ANIM_SCAY), 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_SCAZ), 4096,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 36, 63, -16,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 2), 4915,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 435, -48, 138,
	ftAnimSetValRateT(FT_ANIM_SCAZ, 2), 4096, -60,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 572, -51, 135,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 477, -53, 132,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 25), 4096,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 464, -56, 128,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 498, -65, 118,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -211, 143, -152,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimDamageFlyX1_joint17[50] = {
	ftAnimSetValAfter(FT_ANIM_SCAX | FT_ANIM_SCAY), 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_SCAZ), 4096,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 45, 139, 65,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 2), 6143,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 276, -131, 126,
	ftAnimSetValRateT(FT_ANIM_SCAZ, 2), 4096, -151,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, -124, 128,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 145, -116, 130,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 25), 4096,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, -109, 131,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 213, -126, 128,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -268, 168, -17,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimDamageFlyX1_joint18[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -118, 52, -12, -45, 92, 113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -100, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -89, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 205, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 628, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 512, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 654, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 669, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -101, 0, 674, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -117, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 761, -8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -90, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 35, 27,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -119, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 229, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 736, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 681, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 293, 63, 61, 26, 678, -2,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimDamageFlyX1_joint20[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 375, 189,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 564, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 241, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 350, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 264, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 276, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 276, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 325, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 335, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimDamageFlyX1_joint22[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1564, -68, 30, 3, 10, 268,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1526, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 279, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 600, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 585, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 578, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 453, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1526, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), 1525, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1555, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1651, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1651, 0, 86, 9, 457, 3,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimDamageFlyX1_joint23[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -79, -7, 81, 9, -305, 134,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -65, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 213, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -170, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 37, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -139, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -22, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 176, 28,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -62, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -246, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 213, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 340, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 243, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 281, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -239, 7, 329, 48, 436, 96,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimDamageFlyX1_joint25[110] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 512, -16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 495, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 347, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 427, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 483, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 477, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 461, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -82,
	ftAnimEnd(),
	0x0000, 0x200E, 0x060C, 0x0026, 0x0071, 0xFFAA, 0x007A, 0x0115, 0x2805, 0x0004, 0xFFC1, 0xFFFF, 0x200B, 0x0002, 0x0690, 0x001D, 0x028C, 0x0079, 0x200B, 0x0001, 0x066D, 0xFFF2, 0x0283, 0xFFF7, 0x280B, 0x0013, 0x05B3, 0xFFF9, 0x01CD, 0xFFF7, 0x0801, 0x0001, 0x2005, 0x0001, 0xFFC0, 0xFFFF, 0x2805, 0x0012, 0xFFB0, 0x000B, 0x0801, 0x0011, 0x200B, 0x0001, 0x05AC, 0x001E, 0x01C4, 0xFFE0, 0x280B, 0x0005, 0x06D2, 0x0020, 0x00A1, 0xFFC9, 0x2005, 0x0001, 0xFFC8, 0x0018, 0x2005, 0x0004, 0x0030, 0x0018, 0x200F, 0x0001, 0x06ED, 0x001A, 0x0047, 0x0017, 0x006B, 0xFFCA, 0x0000,
};
