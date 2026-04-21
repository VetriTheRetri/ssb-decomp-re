/* AnimJoint data for relocData file 440 (FTNessAnimDollFall) */
/* 3952 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimDollFall_joint1[46];
extern u16 dFTNessAnimDollFall_joint2[82];
extern u16 dFTNessAnimDollFall_joint3[12];
extern u16 dFTNessAnimDollFall_joint5[30];
extern u16 dFTNessAnimDollFall_joint6[284];
extern u16 dFTNessAnimDollFall_joint7[54];
extern u16 dFTNessAnimDollFall_joint8[10];
extern u16 dFTNessAnimDollFall_joint9[10];
extern u16 dFTNessAnimDollFall_joint11[58];
extern u16 dFTNessAnimDollFall_joint12[228];
extern u16 dFTNessAnimDollFall_joint13[64];
extern u16 dFTNessAnimDollFall_joint16[10];
extern u16 dFTNessAnimDollFall_joint17[222];
extern u16 dFTNessAnimDollFall_joint19[100];
extern u16 dFTNessAnimDollFall_joint20[128];
extern u16 dFTNessAnimDollFall_joint22[40];
extern u16 dFTNessAnimDollFall_joint23[228];
extern u16 dFTNessAnimDollFall_joint25[102];
extern u16 dFTNessAnimDollFall_joint26[154];
extern u16 dFTNessAnimDollFall_joint27[60];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimDollFall_joints[] = {
	(u32)dFTNessAnimDollFall_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimDollFall_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimDollFall_joint3, /* [2] joint 3 */
	(u32)dFTNessAnimDollFall_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTNessAnimDollFall_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimDollFall_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimDollFall_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimDollFall_joint9, /* [8] joint 9 */
	(u32)dFTNessAnimDollFall_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTNessAnimDollFall_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimDollFall_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimDollFall_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTNessAnimDollFall_joint17, /* [16] joint 17 */
	(u32)dFTNessAnimDollFall_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNessAnimDollFall_joint20, /* [19] joint 20 */
	(u32)dFTNessAnimDollFall_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTNessAnimDollFall_joint23, /* [22] joint 23 */
	(u32)dFTNessAnimDollFall_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTNessAnimDollFall_joint26, /* [25] joint 26 */
	(u32)dFTNessAnimDollFall_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTNessAnimDollFall_joint1[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -182, 116, -907, -17, 264, -144, 161, 95, 7798, 25, -281, 281,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 20), 0, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 0, 2, 0, 12, 0, -3, 270, -64, 6787, -3119,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 69), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 19), 0, -31, 0, -786,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 50), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimDollFall_joint2[82] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 13, 0, 748, 0, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 9, -386, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 51, -13, -152, 2, 76, -16, -46, -22, 629, 14, 5, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), -252, -9, 463, 15, -911, -32, -46, 0, 368, -62, 5, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 623,
	ftAnimSetValRateT(FT_ANIM_TRAY, 17), 1104, -2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 13, -25, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), -70, 0, 63, 0, 222, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 17), -46, 5,
	ftAnimSetValRateT(FT_ANIM_TRAY, 17), 263, -733,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 33), -46, 5,
	ftAnimBlock(0, 10),
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), -70, 63, 222,
	ftAnimBlock(0, 7),
	ftAnimSetValBlockT(FT_ANIM_TRAY, 16), 263,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTNessAnimDollFall_joint3[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 70),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimDollFall_joint5[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), 0, 0, 0, 0, 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 20, 0, 36, 0, -225, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 20, 36, -225,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimDollFall_joint6[284] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 843, -1, -251, -5, -6, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -165, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 779, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 199, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 420, 200,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 805, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -124, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 40, -5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 806, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 774, -24,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 36, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -294, -317,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 733, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 801, 136, -673, -212, 484, -540,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -704, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1052, 117, -348, -485,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1035, -16, -485, -102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1077, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -696, 4, -554, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -676, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -833, -39,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1151, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1446, 539, -777, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2231, 249, -1017, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1944, -37, -388, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2156, 455, -867, 36, -488, -371,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -745, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2855, 295, -1131, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2746, -54, -984, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 3261, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -742, 0, -950, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -659, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1273, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3528, 217, -1493, -174,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 3876, -6, -1705, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -647, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -720, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3863, -24, -1696, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 3698, -351, -1586, 290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3122, -512, -1094, 399,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2673, -277, -787, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2567, -61, -698, -8, -878, -136,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1206, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2550, -125, -1059, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2317, -63, -975, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2422, 55, -1179, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2428, 8, -1250, -103,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 11), 2439,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -1385,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), -1206, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1385,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1385, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), -1206,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), -1206, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2439, -1385,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimDollFall_joint7[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -276, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -391, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -627, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -719, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -648, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -472, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -355, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -355, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -355, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimDollFall_joint8[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 100,
	ftAnimBlock(0, 70),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTNessAnimDollFall_joint9[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 397, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 100,
	ftAnimBlock(0, 70),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNessAnimDollFall_joint11[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -263, 6, -56, 0, -383, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 187, 26, -14, 2, -334, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 187, -158, -14, -28, -334, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -603, -20, -154, -20, -42, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -742, 21, -422, 4, -196, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 143, 36, 20, 18, -301, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 143, 20, -301,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 143, 20, -301,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimDollFall_joint12[228] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 459, -14, 228, 36, -165, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 547, 89, 334, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 520, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 544, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 395, -51,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 644, 93, 483, 145,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 927, 16, 1052, 12,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 341, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 284, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 947, 302, -103, -415, 1034, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1531, -10, -546, -65, 1517, 723,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 926, -260, -234, 168, 2481, 501,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -177, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1011, 135, 2519, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1197, 227, 2526, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1884, 131,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 2450, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -134, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 457, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1982, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 2077, -21,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 460, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 281, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2056, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1873, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2413, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 2315, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1875, -52, 280, 45, 2330, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1713, 122,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 709, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2100, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2096, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2410, 372,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1924, 344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2401, 346, 2909, 363,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3182, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2618, 129, 668, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2660, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 648, 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 3182,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 9), 3182,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2660, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 2660,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 648, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 2660,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimDollFall_joint13[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -393,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -787, -651,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1312, 389,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 656,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -376, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -568, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -613, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -613, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -613, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -613, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTNessAnimDollFall_joint16[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 100,
	ftAnimBlock(0, 70),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTNessAnimDollFall_joint17[222] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1744, 7, -1655, -16, 1566, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1687, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1843, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1667, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1820, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1635, 791, 1837, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -103, 754, 2348, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -125, -6, 2290, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -172, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2348, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 2480, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1856, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1909, 7,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2477, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1895, 42, 2440, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -195, -54, -1824, 780, 2301, 383,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -281, 34, -333, 727, 3207, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, 61, -369, -11, 2968, -95,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -239, -33, 3149, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -355, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -394, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -225, 9, 3126, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 78, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 2719, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2675, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 2369, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 102, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 361, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -400, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -516, -16,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2353, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 2533, 73,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -532, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -443, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 301, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -92, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2625, 110,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 2936,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -92, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -92, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2936, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2936, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -443, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -443, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -92, -443, 2936,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimDollFall_joint19[100] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 393, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 252, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 14), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 378,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 757, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 485, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 290, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -145,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 398, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 809, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 765, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 417, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 401, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 269, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 269, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 269, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 269,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTNessAnimDollFall_joint20[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -327, -2, -246, 0, 715, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), -305, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 40), 230, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -362, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -561, -490,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1343, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -149, 649,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -45, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -29, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -50, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -14, -460,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -970, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -466, 317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -336, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -224, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -397, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -426, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -151, 8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -301, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -221, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 190, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), -70, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -145, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -286, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -332, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -97, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -68, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -56, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -56, 0, -221, 0, -70, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimDollFall_joint22[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 627, 0, 315, 4, -208, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -10, -65, 109, -10, 163, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -413, -8, 143, 5, 191, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -217, 230, 353,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -217, 230, 353,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTNessAnimDollFall_joint23[228] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1399, -6, 1480, -15, -1722, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1513, -116, 1258, -98, -1704, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1654, -93, 1181, -59, -1828, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 975, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1349, 191, -1323, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1155, 166, -1111, 182,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -883, -3, -805, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1028, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1152, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1153, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1150, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -888, -386, 1148, -114, -811, -418,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1656, -487, 922, 36, -1643, -652,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1864, 56, 1220, 220, -2116, -245,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2064, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1409, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1543, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1406, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1432, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2094, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -2890, -76,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1396, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1538, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1448, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -2511, -26,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2962, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -3048, -38,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1588, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1432, -57,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2538, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2523, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1368, -89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1254, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3104, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3051, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1311, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1213, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2478, 29,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), -2474,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3058, -3,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 9), -3058,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1213, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1213, 0,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 2), -2474,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 1213, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -3058,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimDollFall_joint25[102] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 577, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 637, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 372, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 245, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -122,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 613, 469,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 939, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 591, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 618, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 1022, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 968, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 419, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 54, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 105, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 443, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 448, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 403, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 403, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTNessAnimDollFall_joint26[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -731, -3, -24, 0, 677, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 643, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -49, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -757, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -793, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -693, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -511, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -485, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -481, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -481, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -483, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -938, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -854, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -589, 172,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 624, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 244, -208,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -366, 212,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -99, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -45, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 324, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 13, -182,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -172, 20,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -117, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -311, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -148, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 242, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 333, 7,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 27), 347,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -277, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -248, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -231, 37, 242, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 13), -137, 0, 242, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -137, 0, 347, 0, 242, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTNessAnimDollFall_joint27[60] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 524, -2, 294, 4, -163, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -76, -58, 121, -19, -120, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -405, -33, -21, -20, -234, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -517, 5, -139, -23, -418, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -329, 34, -325, -26, -766, -46,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1, -531, -1115,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -1, -531, -1115,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
