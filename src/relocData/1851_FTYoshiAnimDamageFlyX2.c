/* AnimJoint data for relocData file 1851 (FTYoshiAnimDamageFlyX2) */
/* 2880 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimDamageFlyX2_joint1[22];
extern u16 dFTYoshiAnimDamageFlyX2_joint2[100];
extern u16 dFTYoshiAnimDamageFlyX2_joint3[66];
extern u16 dFTYoshiAnimDamageFlyX2_joint4[78];
extern u16 dFTYoshiAnimDamageFlyX2_joint6[18];
extern u16 dFTYoshiAnimDamageFlyX2_joint7[152];
extern u16 dFTYoshiAnimDamageFlyX2_joint8[64];
extern u16 dFTYoshiAnimDamageFlyX2_joint10[8];
extern u16 dFTYoshiAnimDamageFlyX2_joint11[140];
extern u16 dFTYoshiAnimDamageFlyX2_joint12[48];
extern u16 dFTYoshiAnimDamageFlyX2_joint13[8];
extern u16 dFTYoshiAnimDamageFlyX2_joint14[10];
extern u16 dFTYoshiAnimDamageFlyX2_joint15[58];
extern u16 dFTYoshiAnimDamageFlyX2_joint16[20];
extern u16 dFTYoshiAnimDamageFlyX2_joint17[34];
extern u16 dFTYoshiAnimDamageFlyX2_joint18[110];
extern u16 dFTYoshiAnimDamageFlyX2_joint20[48];
extern u16 dFTYoshiAnimDamageFlyX2_joint21[94];
extern u16 dFTYoshiAnimDamageFlyX2_joint22[24];
extern u16 dFTYoshiAnimDamageFlyX2_joint23[124];
extern u16 dFTYoshiAnimDamageFlyX2_joint25[162];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimDamageFlyX2_joints[] = {
	(u32)dFTYoshiAnimDamageFlyX2_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimDamageFlyX2_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimDamageFlyX2_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimDamageFlyX2_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimDamageFlyX2_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimDamageFlyX2_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimDamageFlyX2_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimDamageFlyX2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimDamageFlyX2_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimDamageFlyX2_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimDamageFlyX2_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimDamageFlyX2_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimDamageFlyX2_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimDamageFlyX2_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimDamageFlyX2_joint17, /* [16] joint 17 */
	(u32)dFTYoshiAnimDamageFlyX2_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimDamageFlyX2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimDamageFlyX2_joint21, /* [20] joint 21 */
	(u32)dFTYoshiAnimDamageFlyX2_joint22, /* [21] joint 22 */
	(u32)dFTYoshiAnimDamageFlyX2_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimDamageFlyX2_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF029D, /* [25] END */
};

/* Joint 1 */
u16 dFTYoshiAnimDamageFlyX2_joint1[22] = {
	ftAnimSetVal(FT_ANIM_ROTX), -448,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 672, 0, 4096, 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), -710,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 21), -997,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), -2144,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimDamageFlyX2_joint2[100] = {
	ftAnimSetValAfter(FT_ANIM_SCAX | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 18, 58, 152, 86, 25, 626, -91, -229,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_SCAY), 122, 0, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 245, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 334, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 167, -5,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), -120, -37,
	ftAnimSetValT(FT_ANIM_TRAX, 29), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_SCAY, 2), 31, 7168,
	ftAnimSetValT(FT_ANIM_SCAY, 2), 2867,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY, 21), 174, 9, 156, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 342, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValBlockT(FT_ANIM_SCAY, 2), 4915,
	ftAnimSetValT(FT_ANIM_SCAY, 2), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -174, -41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 16), -196, -34,
	ftAnimSetValT(FT_ANIM_SCAY, 21), 4096,
	ftAnimBlock(0, 15),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 534,
	ftAnimSetValT(FT_ANIM_ROTY, 6), -413,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 6), 392, 17, 369, 81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 102, 769,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimDamageFlyX2_joint3[66] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAY | FT_ANIM_SCAZ), 485, -161, -44, 4096, 4096,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX), 0, 0, 172, 4096,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 1055, -266, -310, 3653, 2595,
	ftAnimSetValT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 3758, 4346,
	ftAnimSetValT(FT_ANIM_ROTY, 21), -266,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1175, -343,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1064, -312,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 1153, -333, 3965, 3938,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 1095, -326, 4163, 3618,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 17), 1055, -310,
	ftAnimSetValBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 21), 4096, 4096,
	ftAnimBlock(0, 15),
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1124, 227, -166,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimDamageFlyX2_joint4[78] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 282, 33, -172, 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -416, 65, -288,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 3973, 4249, 3993,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 3727, 5162, 3852,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -460, 50, -299,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4679, 4226,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4358, 4261, 5332,
	ftAnimSetValT(FT_ANIM_SCAY, 2), 4295,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 1), 4109, 4612,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 1), 3973, 3892,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -290, 56, -252,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 21), 4096, 4096, 4096,
	ftAnimBlock(0, 15),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 172, -68, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 263, 24, 205, 197, -197, -75,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimDamageFlyX2_joint6[18] = {
	ftAnimSetVal(FT_ANIM_ROTX), 327,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 655,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 21), 655,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 409, 21,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimDamageFlyX2_joint7[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1528, 69, -1310, -53, -2181, -143,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1355, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1598, 117, -2324, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1763, 17, -2649, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1633, -47, -1374, -208, -2420, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1667, -21, -1771, -41, -2259, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2433, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1591, -16, -1458, 207,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1395, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1635, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1571, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2376, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -2431, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1374, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1025, 22,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1570, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1610, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2449, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -2584, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1633, -57, -1004, -91, -2626, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2323, 134,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1551, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1495, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1493, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1732, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2180, 124,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2036, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1606, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1624, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1796, 63, -1644, -20, -2060, -23,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimDamageFlyX2_joint8[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -648, 276,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -372, 320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1192, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -965, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -605, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -756, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -971, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -979, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -957, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -943, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1157, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1159, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -954, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -770, 184,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimDamageFlyX2_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimDamageFlyX2_joint11[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 164, -43, -3008, 86, 2858, -173,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 162, 172, 2754, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2922, 544,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1920, 425,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 464, 373, -2071, -130, 3031, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 908, 133, -2180, -18, 3360, 95,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -2012, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 732, -178, 3223, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 551, -31, 3106, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 668, 116, -2046, -28, 3185, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 3137, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -2020, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 669, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 650, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 540, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3119, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 3017, -11,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2015, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -2045, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 532, 144, 3006, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1071, 195, 3449, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1220, 119, 3583, 110,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1364, 42, 3723, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2018, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1995, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1394, 30, -1973, 21, 3753, 29,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimDamageFlyX2_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -720, -344,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1065, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -856, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -766, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -690, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -717, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -717, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -697, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -666, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -620, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -557, 63,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimDamageFlyX2_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimDamageFlyX2_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -536, -893, 0, 0, 156, 0,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimDamageFlyX2_joint15[58] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAY | FT_ANIM_SCAZ), -395, 0, 0, 4096, 4096,
	ftAnimSetValAfter(FT_ANIM_SCAX), 4096,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 93, -36, -119,
	ftAnimSetValBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 3000, 4423,
	ftAnimSetValBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 2826, 4998,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -30, -43, -97,
	ftAnimSetValBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 3660, 4300,
	ftAnimSetValBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 5158, 4096,
	ftAnimSetValT(FT_ANIM_SCAZ, 25), 4096,
	ftAnimSetValBlockT(FT_ANIM_SCAY, 1), 4096,
	ftAnimSetValBlockT(FT_ANIM_SCAY, 1), 3615,
	ftAnimSetValBlockT(FT_ANIM_SCAY, 1), 3973,
	ftAnimSetValT(FT_ANIM_SCAY, 22), 4096,
	ftAnimBlock(0, 16),
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -211, 143, -152,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTYoshiAnimDamageFlyX2_joint16[20] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -374, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 69, 8, -94,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -252, -29, -108,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -268, 168, -17,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimDamageFlyX2_joint17[34] = {
	ftAnimSetVal(FT_ANIM_SCAX), 4096,
	ftAnimSetValAfter(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 1), 3159,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 1), 2484,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 1), 3714,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 1), 5590,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 1), 4233,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 1), 3392,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 1), 3703,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 1), 4096,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 21), 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimDamageFlyX2_joint18[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -45, -4, -39, 114, 169, 134,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -50, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 72, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 304, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 224, -79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -68, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 12, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -31, 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -34, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -114, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 243, 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 63, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 7, 15,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -109, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 38, 108,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 268, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 275, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 43, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 100, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 152, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 525, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 293, 17, 61, -38, 678, 152,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimDamageFlyX2_joint20[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 340, -217,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 123, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 313, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 305, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 397, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 621, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 655, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 856, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 823, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 536, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 335, -201,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTYoshiAnimDamageFlyX2_joint21[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1618, 79, 107, 13, -78, 143,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 95, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 229, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1697, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1856, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1724, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1750, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1763, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1760, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1631, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 97, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 94, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 228, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 217, 20,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1615, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1730, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 260, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 421, 36,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1693, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1651, -41, 85, -8, 457, 35,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTYoshiAnimDamageFlyX2_joint22[24] = {
	ftAnimSetVal(FT_ANIM_SCAX), 4096,
	ftAnimSetValAfter(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 2), 2587,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 1), 4005,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 1), 6315,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 2), 3486,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 21), 4096,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimDamageFlyX2_joint23[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 91, -46, 253, 81, -43, 208,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -30, -149, 474, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 165, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 333, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -253, 148, 376, -39, -148, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 424, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 265, 47, 231, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -158, -192, -237, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -119, 16, 368, -28, -41, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -103, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 357, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -125, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 231, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -87, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 366, 46,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 349, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 293, 28,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 259, -54, 413, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 357, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -94, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -166, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -214, -36, 390, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -239, -24, 329, 35, 436, 46,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimDamageFlyX2_joint25[162] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 528, -351,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 390, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 12, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 416, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 334, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 443, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 554, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 547, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 385, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 338, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 444, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 422, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -43,
	ftAnimEnd(),
	0x0000, 0x200E, 0x068A, 0x009A, 0x0018, 0xFFD1, 0xFF38, 0x0126, 0x2805, 0x0003, 0xFFF7, 0xFFDB, 0x200B, 0x0002, 0x07CB, 0x000E, 0x010E, 0x0067, 0x200B, 0x0001, 0x0742, 0xFF2A, 0x012D, 0x0045, 0x2809, 0x0002, 0x0182, 0xFFF1, 0x2007, 0x0001, 0x061E, 0xFFC8, 0xFFAC, 0xFFF2, 0x2805, 0x0002, 0x0048, 0x0035, 0x2003, 0x0001, 0x06D1, 0x008F, 0x2803, 0x0005, 0x070F, 0xFFF8, 0x2009, 0x0001, 0x0179, 0xFFF9, 0x2809, 0x0010, 0x0169, 0x0000, 0x2005, 0x0001, 0x0045, 0x0006, 0x2805, 0x0015, 0x003E, 0x0009, 0x0801, 0x0003, 0x2003, 0x0001, 0x0706, 0xFFF7, 0x2803, 0x000C, 0x066B, 0x0002, 0x0801, 0x000B, 0x2009, 0x0001, 0x0169, 0xFFEB, 0x2809, 0x0005, 0x0092, 0xFFD8, 0x2003, 0x0001, 0x067D, 0x0016, 0x2003, 0x0004, 0x06DE, 0x0010, 0x200F, 0x0001, 0x06ED, 0x000E, 0x0047, 0x0009, 0x006B, 0xFFD9, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
