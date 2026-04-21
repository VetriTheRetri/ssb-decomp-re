/* AnimJoint data for relocData file 2027 (FTPikachuAnimAttackAirF) */
/* 4112 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimAttackAirF_joint1[62];
extern u16 dFTPikachuAnimAttackAirF_joint2[114];
extern u16 dFTPikachuAnimAttackAirF_joint3[62];
extern u16 dFTPikachuAnimAttackAirF_joint4[70];
extern u16 dFTPikachuAnimAttackAirF_joint6[40];
extern u16 dFTPikachuAnimAttackAirF_joint7[178];
extern u16 dFTPikachuAnimAttackAirF_joint8[86];
extern u16 dFTPikachuAnimAttackAirF_joint9[72];
extern u16 dFTPikachuAnimAttackAirF_joint10[10];
extern u16 dFTPikachuAnimAttackAirF_joint11[58];
extern u16 dFTPikachuAnimAttackAirF_joint12[58];
extern u16 dFTPikachuAnimAttackAirF_joint14[40];
extern u16 dFTPikachuAnimAttackAirF_joint15[168];
extern u16 dFTPikachuAnimAttackAirF_joint17[62];
extern u16 dFTPikachuAnimAttackAirF_joint18[154];
extern u16 dFTPikachuAnimAttackAirF_joint20[66];
extern u16 dFTPikachuAnimAttackAirF_joint22[178];
extern u16 dFTPikachuAnimAttackAirF_joint23[204];
extern u16 dFTPikachuAnimAttackAirF_joint25[78];
extern u16 dFTPikachuAnimAttackAirF_joint26[184];
extern u16 dFTPikachuAnimAttackAirF_joint27[58];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimAttackAirF_joints[] = {
	(u32)dFTPikachuAnimAttackAirF_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimAttackAirF_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimAttackAirF_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimAttackAirF_joint4, /* [3] joint 4 */
	(u32)dFTPikachuAnimAttackAirF_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPikachuAnimAttackAirF_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimAttackAirF_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimAttackAirF_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimAttackAirF_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimAttackAirF_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimAttackAirF_joint12, /* [11] joint 12 */
	(u32)dFTPikachuAnimAttackAirF_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPikachuAnimAttackAirF_joint15, /* [14] joint 15 */
	(u32)dFTPikachuAnimAttackAirF_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPikachuAnimAttackAirF_joint18, /* [17] joint 18 */
	(u32)dFTPikachuAnimAttackAirF_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTPikachuAnimAttackAirF_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPikachuAnimAttackAirF_joint23, /* [22] joint 23 */
	(u32)dFTPikachuAnimAttackAirF_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTPikachuAnimAttackAirF_joint26, /* [25] joint 26 */
	(u32)dFTPikachuAnimAttackAirF_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTPikachuAnimAttackAirF_joint1[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -8, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 797, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0, 0, 0, 4,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 19), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 577,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 6433, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 12, 1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1618, 362,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 13), 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 3216, 17,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 6433,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimAttackAirF_joint2[114] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, 33, -28,
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 313, -108,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4095, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4095, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 182, -597, -155, -219,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 89, -78, -190, -1131,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 152, 365, -579, 64,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 163, -163, 163,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4505, 3686, 4505,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 272, 286, -158, 2344,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, -273, 4095, -273, 4096, 273,
	ftAnimSetValT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 3276, 4915,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 260, 18, 299, 19,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 0, 0, 319, 13, -108, -102,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 32), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4095, 51, 4096, -51,
	ftAnimSetValT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 28), 4095, 4096,
	ftAnimBlock(0, 15),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 0, 313, -108,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPikachuAnimAttackAirF_joint3[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 999, -124, 300,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 498, -406, 55, 167, 202, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -219, -280, 378, 176, 26, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -343, -15, 584, -83, -100, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 408, 332, 43, -239, 14, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 654, 12, -134, -8, 57, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 654, 10, -134, 0, 57, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 999, -124, 300,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPikachuAnimAttackAirF_joint4[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -173, 58, -73,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 277, 111, 16, -11, -20, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 384, -16, 0, 14, 0, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 209, -106, 72, 124, 115, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 64, -7, 372, 14, 96, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 64, 15, 372, -1, 96, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 381, 21, 337, -26, 77, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 192, -50, 216, -25, 11, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -173, 58, -73,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimAttackAirF_joint6[40] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 199, -70, 479,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 484, 251, -17, -17, 116, -517,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 450, -88, -37,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -12, -25, -56,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 450, -62, -88, 4, -37, 129,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 199, -70, 479,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPikachuAnimAttackAirF_joint7[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 11, -28, -56, 14, -811, 71,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -69, -159, -627, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -16, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -12, 296,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1263, 546,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -361, -276, -730, -341,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -622, -157, -1310, -408,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1668, -36, -676, -110, -1546, 159,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1206, -349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1191, 6, -992, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1680, 524, -1288, -341,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2239, 276, -1542, -175, -1675, -186,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1553, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2233, -18, -1662, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -1627, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 2108, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1551, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), -1516, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1498, 69, -1632, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1191, 209, -1578, -187,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2156, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2460, 336, -958, 96, -1945, -465,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1182, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2829, 6, -2509, -292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2473, -373, -2529, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2664, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2083, -281, -1198, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1524, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1735, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1638, -59, -2507, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1617, 1, -2428, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1620, 2, -1551, -27, -2419, 8,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPikachuAnimAttackAirF_joint8[86] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -759, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -635, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -437, 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -554, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 272,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -712, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -474, 356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -136, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -501, -260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -658, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -735, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -759, -23,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimAttackAirF_joint9[72] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -478, -335, -28,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 202, 135, -206, 16, -40, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 197, -50, -252, 51, -112, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -77, 0, 157, 0, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -35, -1, 220, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -35, 13, 220, -2, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 250, 5, 157, -46, -3, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1, -66, -56, -44, -14, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -478, -335, -28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPikachuAnimAttackAirF_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1598, -1559, 4035, 39, 48, 495,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimAttackAirF_joint11[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -132, 170, 229, 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -428, -66, 153, 0, 193, -11, 254, 56, 357, -53, 37, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -661, -10, 176, 1, 140, -2, 311, 20, 303, -19, -28, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), -661, 16, 176, 0, 140, 2, 311, -14, 303, 13, -28, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), -132, 170, 229, 254, 357, 37,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPikachuAnimAttackAirF_joint12[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -3, -171, -270, -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -222, -58, -135, -22, 213, 1, -255, -23, 357, -27, 37, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -471, -11, -349, -9, -254, -21, -278, -8, 329, -10, -65, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), -471, 14, -349, 5, -254, 0, -278, 5, 329, 6, -65, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), -3, -171, -270, -255, 357, 37,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimAttackAirF_joint14[40] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -469, 245, 91,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -460, 90, 37, -289, 105, 138,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -379, -44, 229,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 29, -29, 45,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), -379, -22, -44, 72, 229, -34,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), -469, 245, 91,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTPikachuAnimAttackAirF_joint15[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 182, 122, 97, -890, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -754, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -622, 180, 220, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -443, -130, 364, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -884, -290, 31, -34, -477, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1024, -136, 296, 314, -588, -190,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1187, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 659, 330, -858, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 956, -221, -589, 554,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -828, -146, 216, -482, 250, 453,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1479, -319, -7, -108, 317, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 64, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1467, 35, 300, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 19), -1267, 36, 185, -38,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 79, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), 125, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 170, 75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 537, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1229, -38, 133, -139,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -697, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1473, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1613, 0, 514, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -951, 131,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 148, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -775, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -888, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -873, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -807, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 128, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 3, 127, -1, -890, -2,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimAttackAirF_joint17[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -132, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -621, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -10, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -177, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -10, -10,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPikachuAnimAttackAirF_joint18[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1606, -108, -1367, -62, 629, 194,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1358, 206, 1026, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1498, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1295, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1934, 204, -1016, 40, 1013, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1059, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1704, -315, -1276, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1302, -160, -1372, -85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1454, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1384, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1518, -66, 1231, 353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1251, -141, -1690, -114, 1766, 260,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1228, -6, -1677, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1753, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 1703, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1222, -9, -1663, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 970, -4, -1538, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 967, 117, -1537, 21, 1706, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1383, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1119, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1495, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1613, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1455, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1377, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1603, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1418, 31, 993, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1367, 0, 635, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1606, 3, -1367, 0, 629, -6,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPikachuAnimAttackAirF_joint20[66] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 932, -235,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 540, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 819, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1042, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 914, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 940, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 953, -470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -473,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 328, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 510, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 966, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 942, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, -9,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimAttackAirF_joint22[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 230, 1, 39, 47, 585, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 232, 12, 86, 92, 520, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 254, -328, 225, -5, 232, -162,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -50, -55, 85, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -423, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -187, 372,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 321, 179, -35, -11, -75, 99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 682, 258,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 111, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 172, -317,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -664, -180,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 801, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 717, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -674, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -170, 59,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 714, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 583, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 115, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 150, -5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -113, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 16, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 48, 117, 568, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 250, 59, 136, -51, 399, -229,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 34, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 167, -17, 109, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 492, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 251, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 364, 94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 584, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 35, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 39, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 411, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 241, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 230, -10, 39, 0, 585, 1,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPikachuAnimAttackAirF_joint23[204] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 203, -145, 533, 44, -780, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -62, -224, 472, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -836, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -730, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -390, 16, 291, -1, -1230, -102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 412, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 468, 33, -934, 411,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 358, -35, -408, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 118, -305, 396, -114, -396, 143,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -309, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 129, -257, -121, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -118, -130, -79, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -247, 61, -131, 26, -158, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 36, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 613, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -108, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 68, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 72, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 92, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 48, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 188, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 653, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 757, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 758, -95, 194, 100, 94, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 565, -449, 390, -25, 6, -300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -140, -368, 142, -119, -506, -307,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 303, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -171, -28, -609, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -196, -22, -736, -131,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1006, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 36, 91,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 392, 78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 537, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -931, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -800, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 123, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 182, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 203, 21, 533, -3, -780, 20,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTPikachuAnimAttackAirF_joint25[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 595, 207,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1076, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 894, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 879, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 623, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 404, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 497, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 229, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 388, 503,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1007, 338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1066, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1092, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 617, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 595, -21,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimAttackAirF_joint26[184] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -257, 170, -74, 30, 278, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 86, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -86, 403, -43, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 549, -38, 23, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -164, -522, -408, -180, -50, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 120, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -495, -255, -336, 78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -230, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -675, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -363, 256, 296, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -162, 532, 632, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 701, 452, -121, 54, 785, 88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 923, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -153, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 741, -516,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -331, -706,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -762, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1002, -208, 935, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1705, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 853, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -152, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -217, -11,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1705, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1697, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1681, 344, -229, -46, 825, -233,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 41, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1009, 752, -310, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -175, 388, -225, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -75, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -233, -96, 60, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 274, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -369, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -488, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -413, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -268, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -257, 10, -74, 1, 278, 3,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTPikachuAnimAttackAirF_joint27[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -543, -164, -504,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 152, -82, -29, -10, -115, 10,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1202, -251, -417,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -168, -41, -35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1192, -359, -398,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -1202, 74, -251, 22, -417, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 50, 0, 6, 0, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -543, -164, -504,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
