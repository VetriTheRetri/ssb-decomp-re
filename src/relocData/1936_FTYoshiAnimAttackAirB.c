/* AnimJoint data for relocData file 1936 (FTYoshiAnimAttackAirB) */
/* 2656 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimAttackAirB_joint1[68];
extern u16 dFTYoshiAnimAttackAirB_joint2[88];
extern u16 dFTYoshiAnimAttackAirB_joint3[52];
extern u16 dFTYoshiAnimAttackAirB_joint6[110];
extern u16 dFTYoshiAnimAttackAirB_joint7[158];
extern u16 dFTYoshiAnimAttackAirB_joint8[16];
extern u16 dFTYoshiAnimAttackAirB_joint10[8];
extern u16 dFTYoshiAnimAttackAirB_joint11[104];
extern u16 dFTYoshiAnimAttackAirB_joint12[24];
extern u16 dFTYoshiAnimAttackAirB_joint13[8];
extern u16 dFTYoshiAnimAttackAirB_joint14[10];
extern u16 dFTYoshiAnimAttackAirB_joint15[20];
extern u16 dFTYoshiAnimAttackAirB_joint17[20];
extern u16 dFTYoshiAnimAttackAirB_joint18[136];
extern u16 dFTYoshiAnimAttackAirB_joint20[48];
extern u16 dFTYoshiAnimAttackAirB_joint22[96];
extern u16 dFTYoshiAnimAttackAirB_joint23[142];
extern u16 dFTYoshiAnimAttackAirB_joint25[168];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimAttackAirB_joints[] = {
	(u32)dFTYoshiAnimAttackAirB_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimAttackAirB_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimAttackAirB_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimAttackAirB_joint6, /* [3] joint 6 */
	0x00000000, /* [4] NULL */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimAttackAirB_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimAttackAirB_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimAttackAirB_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimAttackAirB_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimAttackAirB_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimAttackAirB_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimAttackAirB_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimAttackAirB_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimAttackAirB_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimAttackAirB_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimAttackAirB_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimAttackAirB_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimAttackAirB_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimAttackAirB_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF025C, /* [25] END */
};

/* Joint 1 */
u16 dFTYoshiAnimAttackAirB_joint1[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY), 0, 72, 608, -46,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 0, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 7), 865, 608,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 35), 608,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 0, -18, 440, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -61, -5, 371, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -61, 4,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 8), 371,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 0, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 0, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 3216, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValT(FT_ANIM_ROTZ, 11), 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3216, -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimAttackAirB_joint2[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -37, 0, 3, 0, 1, 0, -9, 214, 91, 1, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -893, 89, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 0, 214, 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 35), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 139, 0, 0, 0, 0, 214, 22, 1, 68,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 0, 10, 259, -118, 138, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -57, -5, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 8), -57,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -28,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 21), -893, -28, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 26, 0, -82, -19, 129, -57,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, -10, 214, 118, 1, -51,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimAttackAirB_joint3[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 1161, 43,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 16, 67, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1161, -68, 0, 32, 0, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 475, 2, 321, 22, 307, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 475, 2, 321, 0, 307, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1446, 32, 24, -15, 23, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 1161, -14, 0, -1, 0, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimAttackAirB_joint6[110] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 329,
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 600,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 562, 29, 0, 0, 0, -1,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 569, -11,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 25), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 562, -17, 0, 43, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 389, -12, 437, 31, -15, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 11), -15, 0, 569, -83,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), 389, 437,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -21, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0, 0, -43, 0, 1,
	ftAnimSetValRateT(FT_ANIM_TRAY, 9), 360, -104,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 3276, 3276, 3276,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 394, 40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 360, 160,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 12), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 562, 8,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 600,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimAttackAirB_joint7[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2770, -8, -179, 4, 1383, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1383, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -2820, 33, -149, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2770, 170, -179, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2478, -34, -462, -604, 1291, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2839, -229, -1388, -508, 1460, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2965, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1478, -51, 1440, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 1461, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1492, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -1370, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2971, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -2778, 15,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1326, 51, 1475, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1073, 126, 1582, 160,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2768, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3019, -502,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -932, 66, 1841, 524,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1185, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3796, -506, 2630, 508,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -4120, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2857, 145,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2976, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4182, -56, -1265, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -4351, -30, -1412, -20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2983, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2988, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4378, -26, -1432, -19, 2989, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimAttackAirB_joint8[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 41), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimAttackAirB_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -625,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimAttackAirB_joint11[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1147, 6, 1417, 13, -224, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 1146, -51, -227, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1477, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1420, -158,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 921, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1103, 237, -128, 337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1620, 460, 447, 494,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2024, 225, 947, 18, 861, 230,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 1137, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2097, 20, 936, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2112, 10, 951, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 1851, -65, 684, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1770, -97, 602, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 1108, -18, -115, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1098, -8, 1180, 44, -139, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1126, 18, 1390, 30, -219, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1147, 21, 1417, 26, -224, -5,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimAttackAirB_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimAttackAirB_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -625,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimAttackAirB_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -670, 1608, 0, 0, 156, 0,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimAttackAirB_joint15[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 536, -26,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -536, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 28), -357, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 536, 52,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimAttackAirB_joint17[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 89, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -268, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 28), -536, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 89, 42,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimAttackAirB_joint18[136] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 68, 0, -118, 0, 274, 0,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 68, 0, -118, 0, 274, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 68, -175, -118, 48, 274, 273,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 36, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -281, -186, 821, 290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -305, -15, 856, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 877, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -297, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 10240, 6144, 6144,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, -682, 4096, -227, 4096, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 38, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -42, -11,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4096, 4096, 4096,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 876, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 793, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 14), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -295, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -23, 83,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -53, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -167, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 738, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 356, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 68, 91, -118, 48, 274, -81,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimAttackAirB_joint20[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 687, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 687, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, -343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 83, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 599, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, 87,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimAttackAirB_joint22[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1783, 0, 119, 0, -316, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 157, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 1783, 0, -316, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1783, -139, -316, 125,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 280, 226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1503, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1697, 145, 150, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1787, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 120, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 387, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 503, -17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1793, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 1423, -40,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 126, 5, 473, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 125, -5, -292, -25,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1385, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1520, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1783, 262, 119, -5, -316, -24,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimAttackAirB_joint23[142] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 1457,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 1574, 0, 1894, 0,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1574, 27,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1457, 1894,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1457, 65, 1894, 267,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1628, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1629, 4, 2430, 287,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1545, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2468, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 1649, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 2498, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 10240, 6144, 6144,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, -682, 4096, -227, 4096, -227,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 1557, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1539, -3,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 1658, 8,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2489, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 2406, -10,
	ftAnimBlock(0, 3),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 14), 4096, 4096, 4096,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1667, -8, 1545, -22, 2393, -111,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1600, -24, 1472, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2184, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2073, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1980, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1574, -26, 1457, -14, 1894, -85,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimAttackAirB_joint25[168] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 670, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 670, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 670, -335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 320, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 469, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 580, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 670, 90,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFF64, 0x0000, 0xFA59, 0x0000, 0xF877, 0x0000, 0x2807, 0x0008, 0xFF8A, 0xFFFF, 0xFAA8, 0x002D, 0x2009, 0x0006, 0xF877, 0x0000, 0x2009, 0x0001, 0xF877, 0x0082, 0x2809, 0x0002, 0xFAE4, 0x00EA, 0x0801, 0x0001, 0x2007, 0x0001, 0xFF62, 0x002F, 0xFAB5, 0xFFDE, 0x2805, 0x0002, 0xFA6B, 0x000C, 0x200B, 0x0001, 0xFFE9, 0x003D, 0xFB51, 0x0039, 0x2809, 0x000A, 0xFBC7, 0xFFFD, 0x2003, 0x0001, 0xFFDD, 0xFFC8, 0x2803, 0x0004, 0xFF1D, 0xFFF8, 0x2005, 0x0001, 0xFA7D, 0x0011, 0x2805, 0x0011, 0xFABC, 0x0001, 0x0801, 0x0003, 0x2003, 0x0001, 0xFF17, 0xFFFE, 0x2803, 0x0013, 0xFF18, 0xFFEB, 0x0801, 0x0004, 0x2009, 0x0001, 0xFBC3, 0xFFF0, 0x2809, 0x0014, 0xF890, 0xFFE6, 0x0801, 0x0008, 0x2005, 0x0001, 0xFABD, 0x0000, 0x2805, 0x000B, 0xFA63, 0xFFF6, 0x0801, 0x0005, 0x2003, 0x0001, 0xFF04, 0xFFF3, 0x2003, 0x0002, 0xFF01, 0xFFD5, 0x2003, 0x0001, 0xFEA6, 0xFFE2, 0x2003, 0x0002, 0xFF0B, 0x004F, 0x200F, 0x0001, 0xFF64, 0x0058, 0xFA59, 0xFFF6, 0xF877, 0xFFE7, 0x0000,
};
