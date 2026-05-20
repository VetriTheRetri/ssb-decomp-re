/* AnimJoint data for relocData file 1902 (FTYoshiAnimCliffEscapeSlow2) */
/* 4128 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimCliffEscapeSlow2_joint1[26];
extern u16 dFTYoshiAnimCliffEscapeSlow2_joint2[36];
extern u16 dFTYoshiAnimCliffEscapeSlow2_joint3[118];
extern u16 dFTYoshiAnimCliffEscapeSlow2_joint4[98];
extern u16 dFTYoshiAnimCliffEscapeSlow2_joint5[56];
extern u16 dFTYoshiAnimCliffEscapeSlow2_joint7[14];
extern u16 dFTYoshiAnimCliffEscapeSlow2_joint8[224];
extern u16 dFTYoshiAnimCliffEscapeSlow2_joint9[72];
extern u16 dFTYoshiAnimCliffEscapeSlow2_joint11[36];
extern u16 dFTYoshiAnimCliffEscapeSlow2_joint12[220];
extern u16 dFTYoshiAnimCliffEscapeSlow2_joint13[72];
extern u16 dFTYoshiAnimCliffEscapeSlow2_joint14[48];
extern u16 dFTYoshiAnimCliffEscapeSlow2_joint15[62];
extern u16 dFTYoshiAnimCliffEscapeSlow2_joint16[50];
extern u16 dFTYoshiAnimCliffEscapeSlow2_joint18[50];
extern u16 dFTYoshiAnimCliffEscapeSlow2_joint19[172];
extern u16 dFTYoshiAnimCliffEscapeSlow2_joint21[80];
extern u16 dFTYoshiAnimCliffEscapeSlow2_joint23[152];
extern u16 dFTYoshiAnimCliffEscapeSlow2_joint24[184];
extern u16 dFTYoshiAnimCliffEscapeSlow2_joint26[72];
extern u16 dFTYoshiAnimCliffEscapeSlow2_joint27[168];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTYoshiAnimCliffEscapeSlow2_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeSlow2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeSlow2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeSlow2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeSlow2_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeSlow2_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeSlow2_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeSlow2_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeSlow2_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeSlow2_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeSlow2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeSlow2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeSlow2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeSlow2_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeSlow2_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeSlow2_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeSlow2_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeSlow2_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeSlow2_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeSlow2_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeSlow2_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTYoshiAnimCliffEscapeSlow2_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTYoshiAnimCliffEscapeSlow2_joint1[26] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -35, 0, 1385, 0, 702,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 40), 3660, 576,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 49), 0, 0,
	ftAnimBlock(0, 39),
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 10), 3600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimCliffEscapeSlow2_joint2[36] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAY), 672,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTY), 268, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -178, -7,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 2,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 9), 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -178, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 0, 8,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimCliffEscapeSlow2_joint3[118] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -224, 68, -119, 589, -520, -1218, 64, 44,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -31, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -156, 10, 0, 5, 0, -7, -115, 22, -459, 48, 57, -5,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -297, -459, 57,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -161, 2, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -156, 0, 0, 0, 0, 9,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 10), -115,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), -459, 57,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -156, 0, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -156, 0, 0, 0, 0, -8,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 10), -297,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -161, 2, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -156, 0, 0, 0, 0, 8,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -115, 118, -459, 195, 57, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -156, 0, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -156, 10, 0, -5, 0, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 7, -89, -4, 0, 46, 30, 195, 20, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimCliffEscapeSlow2_joint4[98] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 829, 1, 0, 51, 5, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 759, -6, 357, -2, 0, 6,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -17, -79,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 781, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 759, -3, -357, 3, 0, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 13, 71,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 753, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 759, 2, 357, -3, 0, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -17, -71,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 781, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 759, -2, -357, 3, 0, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 13, 71,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 753, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 759, -49, 357, 0, 0, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 16, -37, 0, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTYoshiAnimCliffEscapeSlow2_joint5[56] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 329,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -367, -61, 103, -5, 0, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -589, -19, -64, -1, 139, -15,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -596, 84, -187,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -589, -64, 139,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -596, 84, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -589, 33, -64, -4, 139, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 78, 33, 0, 3, 0, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimCliffEscapeSlow2_joint7[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 0, -3,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 100), 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 40,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimCliffEscapeSlow2_joint8[224] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -900, 0, -112, 0, 194, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -323, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1210, -137, 434, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1339, -108, 589, 136,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1495, -228, 804, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -362, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -708, -280,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1884, 73, 1188, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1347, 219, -1035, -213, 592, -263,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1083, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1445, -81, 662, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1916, -184, 1242, 213,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1082, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1478, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2105, -166, 1456, 186,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2698, -123,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2051, 145,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1410, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1003, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2830, -126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3089, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2205, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2399, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3232, 235, 2552, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2618, 126, -701, 233, 1902, -169,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -536, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2979, -217, 2213, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3112, -71, 2345, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3197, -118, 2458, 147,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -4019, -108, 3352, 102,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -430, 109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -129, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4089, -51, 3409, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 3008, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -3746, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3614, 121,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3337, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -140, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -133, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2934, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2883, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3327, 10, -132, 1, 2864, -19,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTYoshiAnimCliffEscapeSlow2_joint9[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1093, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -887, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -824, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -806, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -696, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1090, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1120, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -883, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -824, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -760, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -668, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1082, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1102, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1158, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1151, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -791, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimCliffEscapeSlow2_joint11[36] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -31, -804, 76,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -670, -33, 0, 40,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 10,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -670, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 40), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 20), -670,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -670, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 0, 33,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimCliffEscapeSlow2_joint12[220] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -148, -2, 382, 1, -880, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 355, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 282, 233, -364, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 537, 223, -109, 209,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 222, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1128, 39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 237, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 533, 120,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 295, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 459, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1162, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1087, 241, 670, 184, 417, 262,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1225, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1646, 190, 984, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1468, -98, 783, -127,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1422, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1448, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2058, 195,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1205, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1211, 84,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2244, 161, 1594, 135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1903, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 2736, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1310, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1292, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1179, -108, 1995, 82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 734, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2771, -10, 2069, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2714, 282, 2044, 303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3336, 173, 2676, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3061, -147, 579, -139, 2384, -172,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2394, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 119, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3040, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 3243, -19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2471, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2983, 26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 40, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -100, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3212, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 3084, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3071, -12, -103, -2, 2997, 13,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimCliffEscapeSlow2_joint13[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -845, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -973, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1087, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1084, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -749, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -605, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1048, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1114, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1088, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1084, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -748, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -613, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -927, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -974, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1004, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimCliffEscapeSlow2_joint14[48] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -31, -804, 76,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 11), -670,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 0, 17,
	_FT_ANIM_CMD(11, FT_ANIM_ROTZ, 1), 10,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, -446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -670, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -446,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 0, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -670,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 0, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimCliffEscapeSlow2_joint15[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -625, 21, 89, 39, 0, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -588, 8, 79, -98,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -536, 3, -893, -5, 0, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -536, -40, 0, 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 0, -68,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 43), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -940,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -536, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -893,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -930, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), -536, -893,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTYoshiAnimCliffEscapeSlow2_joint16[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -354, -3, 56, 4, 10, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 14, 268, -12, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 15,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, -268, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 50), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 0, -6, 268, 8,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), -190, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimCliffEscapeSlow2_joint18[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -589, -8, 122, 1, -12, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -232, 14, 268, -15, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 15,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -232, -268, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), -232, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -232, 2, 268, 8, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -153, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTYoshiAnimCliffEscapeSlow2_joint19[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -331, -36, -323, -36, 866, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -268, -13, -441, 18, 735, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -284, -20, -424, 10, 760, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -434, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -569, 80, 1015, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -470, 85, 928, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 860, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -290, 46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -361, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -420, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 778, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 837, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -256, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -552, -82,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -420, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -461, 16,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 915, 80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 939, -57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -619, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -432, 65,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -434, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -357, -37,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -370, 158, 883, -192,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 54, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -435, -18, 554, -280,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -87, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 323, -197,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -76, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 145, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 14, -25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -51, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -10, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, -19, 5, 15, -3, 72,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimCliffEscapeSlow2_joint21[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 189, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 284, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 311, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 169, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 258, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 326, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 262, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 193, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 340, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 514, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 424, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -161,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimCliffEscapeSlow2_joint23[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 205, -79, -1352, -21, -1994, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1712, 113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1668, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -186, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -203, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -240, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1600, 100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1840, -86,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1676, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1373, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -259, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 70, 88,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1919, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1648, 93,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 125, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -145, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1377, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1608, 44,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -171, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -173, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1560, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1805, -92,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1557, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1517, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -124, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 128, -176,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1892, -77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1879, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -127, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -63, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -23, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, 29, -1524, -7, -1872, 7,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTYoshiAnimCliffEscapeSlow2_joint24[184] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -54, 237, 503, -122, 336, 323,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 507, 104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 347, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 659, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 790, 122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1036, -92,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 599, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 378, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 322, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 352, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 916, -70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 765, -73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 330, -29, 353, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 378, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 233, 79,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 692, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 659, 39,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 380, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 380, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 715, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1060, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 342, 123,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 583, -75,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 322, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 382, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 481, -89, 966, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), 67, -115, 503, -169,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 357, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), 380, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 369, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 12, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -47, -96, 321, -181,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -287, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -14, 18,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 8, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, -4, -229, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 14, 0, -5, -154, 75,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimCliffEscapeSlow2_joint26[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 743, -236,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 156, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 76, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 140, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 372, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 210, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 76, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 85, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 786, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 910, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 548, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -169,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTYoshiAnimCliffEscapeSlow2_joint27[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1509, -22, 99, -44, 234, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 315, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1806, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 57, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -148, -193,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -543, 37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 312, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 196, -73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1933, -85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1543, 22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -494, 64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 287, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 121, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 314, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1531, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1748, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -494, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1851, -96, 311, -3, -543, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -1747, 106, -158, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 363, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 354, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 13, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1638, 85, 45, 178,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1413, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -161, -38,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -20, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -87, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1361, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1604, -12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -194, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -216, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1607, -2, -89, -1, -228, -12,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
