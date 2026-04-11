/* AnimJoint data for relocData file 1449 (FTPurinAnimAttackAirN) */
/* 2864 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimAttackAirN_joint1[60];
extern u16 dFTPurinAnimAttackAirN_joint2[40];
extern u16 dFTPurinAnimAttackAirN_joint3[90];
extern u16 dFTPurinAnimAttackAirN_joint5[88];
extern u16 dFTPurinAnimAttackAirN_joint6[172];
extern u16 dFTPurinAnimAttackAirN_joint7[14];
extern u16 dFTPurinAnimAttackAirN_joint9[104];
extern u16 dFTPurinAnimAttackAirN_joint10[170];
extern u16 dFTPurinAnimAttackAirN_joint11[16];
extern u16 dFTPurinAnimAttackAirN_joint13[10];
extern u16 dFTPurinAnimAttackAirN_joint14[156];
extern u16 dFTPurinAnimAttackAirN_joint16[20];
extern u16 dFTPurinAnimAttackAirN_joint18[188];
extern u16 dFTPurinAnimAttackAirN_joint19[94];
extern u16 dFTPurinAnimAttackAirN_joint21[166];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTPurinAnimAttackAirN_joints[] = {
	(u32)dFTPurinAnimAttackAirN_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimAttackAirN_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimAttackAirN_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimAttackAirN_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPurinAnimAttackAirN_joint6, /* [5] joint 6 */
	(u32)dFTPurinAnimAttackAirN_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimAttackAirN_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTPurinAnimAttackAirN_joint10, /* [9] joint 10 */
	(u32)dFTPurinAnimAttackAirN_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimAttackAirN_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPurinAnimAttackAirN_joint14, /* [13] joint 14 */
	(u32)dFTPurinAnimAttackAirN_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPurinAnimAttackAirN_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTPurinAnimAttackAirN_joint19, /* [18] joint 19 */
	(u32)dFTPurinAnimAttackAirN_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF0281, /* [21] END */
};

/* Joint 1 */
u16 dFTPurinAnimAttackAirN_joint1[60] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 81, 4096, -327, 4096, 81,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4300, 15, 3276, -63, 4300, 15,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 24), 4300, -14, 3276, 56, 4300, -14,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, -40, 4096, 163, 4096, -40,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPurinAnimAttackAirN_joint2[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, -312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 0, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -402, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 24), -402, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 0, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 0, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPurinAnimAttackAirN_joint3[90] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 268, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 312, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 3891, -102, 4300, 102, 3891, -102,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 0, 17, 3891, 81, 4300, -81, 3891, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 89, 3, 4096, 15, 4096, -15, 4096, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 24), 268, -6, 89, -3, 4096, -14, 4096, 28, 4096, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 89, -13, 0, -8, 3891, -40, 4505, 81, 3891, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 134, 11, 3891, 27, 4505, -54, 3891, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 268, 0, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPurinAnimAttackAirN_joint5[88] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -144, -737, 238,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 178, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 357, 89, -85, 118, -176, -5, 54, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 357, -107, -85, 145, -176, -21, 54, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -178, -20,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -12, 459, -278, -793, -15, -336,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 29, 6, -374, -32, -100, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), -178, 6, 8, -7, -381, 8, -91, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 17, 19, 3, -6, -344, -163, -26, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 17, -1, 0, -79, -585, -209, 170, 141,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, -144, -737, 238,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPurinAnimAttackAirN_joint6[172] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -899, 1250, -1580, 416, 985, -1214,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 350, 644, -1164, 198, -228, -604,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 389, 7, -1182, -24, -222, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -392, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 347, 141, -1161, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 648, 398, -997, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1084, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1143, 261, -658, -137,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -678, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1171, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 1166, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1095, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -1071, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -685, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -662, 6,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1146, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 663, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1045, 41, -647, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -873, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -561, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 347, -826, -393, 692,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -988, -862, 823, 754,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1377, -301, 1114, 206,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1329, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1062, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -917, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1412, -77,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1305, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 993, -14,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -998, 57, -1482, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -912, 23, -1569, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -899, 12, -1580, -11, 985, -8,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimAttackAirN_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), -6, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -6,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPurinAnimAttackAirN_joint9[104] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -178, 69, -722, 238,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 357, 89, 0, 44, 9, -119, -199, 59, -152, -782,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, -17, 357, -125, 9, 55, -199, -72, -152, 563,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 31), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -89, -3, -268, -24, 44, 10, -244, -13, 199, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), -89, 3, -268, 15, 44, 31, -244, -43, 199, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 8, 178, 44, 160, 19, -402, -208, -359, -382,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 178, -11, 0, -11, 68, -48, -505, -170, -277, 319,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, -178, 69, -722, 238,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPurinAnimAttackAirN_joint10[170] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -761, 35, -107, 1299, -685, -129,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -726, 92, 1192, 682, -814, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -577, 52, 1258, 34, -767, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -791, 55, -783, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1189, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 992, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -615, 95, 1126, 57, -483, 166,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -416, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -570, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1106, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 1126, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -457, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -556, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), -598, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -615, -30, -483, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -758, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -814, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1131, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1241, -86,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -767, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -775, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -810, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -812, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1136, -111,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 938, 109,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -888, -330, -853, -333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2080, -353, -2048, -351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2181, -75, 1069, 140, -2145, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -2361, -14, 1699, 28, -2290, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2370, -8, 1715, 15, -2294, -4,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimAttackAirN_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPurinAnimAttackAirN_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -501, 264, -1427, 106, -21, 16,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimAttackAirN_joint14[156] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 112, -357, -265, -49, 376, 306,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -281, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -245, -195, 683, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -277, -6, 724, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -21, 322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 719, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -314, -135, 683, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -551, -73, 235, -530,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 400, 215, -460, 52, -378, -317,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -406, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 409, 8, -400, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 417, 5, -418, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 21), 415, -13, -401, 21,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -400, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -482, -19,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 400, -39, -378, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -118, -60, 385, 114,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -499, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -288, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -149, -22, 454, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 436, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 105, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -287, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -266, 2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 426, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 378, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 112, 6, -265, 1, 376, -2,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimAttackAirN_joint16[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 30), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 18), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPurinAnimAttackAirN_joint18[188] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3686,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -213, 17, -104, -11, -3096, 512,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -2584, 297,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -221, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -115, -77,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3686,
	ftAnimSetValRateT(FT_ANIM_SCAX, 3), 3686, 983,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2501, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2584, -85,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -195, 154,
	ftAnimSetValRateT(FT_ANIM_SCAX, 2), 6144, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 86, 124, -244, -35, -2701, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -181, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 53, -16, -2598, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 25, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX, 24), 6144, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2590, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -2589, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -177, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -224, 2,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 26, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 85, 45,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2598, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2763, 22,
	ftAnimSetValRateT(FT_ANIM_SCAX, 5), 3686, -491,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 145, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -121, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -207, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -100, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2724, 33,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3686,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -2969, -55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -122, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -214, 1,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 3686,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -83, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -101, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3021, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -3094, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -213, 1, -104, -2, -3096, -2,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimAttackAirN_joint19[94] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -189, -56, 318, 110, 351, -566,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 429, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -203, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -214, -305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -258, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -214, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 429, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), 433, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -214, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), -229, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -202, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), -249, 0,
	ftAnimBlock(0, 28),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -232, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 341, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -246, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -191, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 425, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 324, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -189, 2, 318, -5, 351, 10,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimAttackAirN_joint21[166] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000, 0x280E, 0x0123, 0x00DA, 0x004E, 0x0125, 0x00B5, 0x00CC, 0x4F00, 0x0E66, 0x0E66, 0x0E66, 0x200F, 0x0001, 0x01FE, 0x0076, 0x0174, 0x00AB, 0x0182, 0x0065, 0x200F, 0x0001, 0x0210, 0x000A, 0x01A4, 0x000B, 0x0180, 0x0005, 0x200F, 0x0003, 0x01AD, 0xFFAA, 0x0196, 0x001E, 0x0123, 0xFF9A, 0x200F, 0x0001, 0x0150, 0xFFCE, 0x01B2, 0x000E, 0x00B5, 0xFFC3, 0x2803, 0x0007, 0x0124, 0xFFFD, 0x2805, 0x0016, 0x01B5, 0xFFFF, 0x2009, 0x0006, 0x007F, 0xFFFB, 0x2009, 0x0001, 0x0079, 0xFFFC, 0x2809, 0x0011, 0x00B1, 0x0012, 0x2003, 0x0001, 0x0120, 0xFFFE, 0x2803, 0x0010, 0x0150, 0x0010, 0x0801, 0x000E, 0x2005, 0x0001, 0x01B3, 0xFFFF, 0x2805, 0x0009, 0x0189, 0x0004, 0x0801, 0x0001, 0x200B, 0x0001, 0x0169, 0x0022, 0x00D0, 0x002C, 0x2809, 0x0008, 0x0182, 0xFFFC, 0x2803, 0x000A, 0x01E0, 0xFFCD, 0x0801, 0x0007, 0x2005, 0x0001, 0x0188, 0xFFF6, 0x2805, 0x0007, 0x0035, 0x0001, 0x2009, 0x0001, 0x0182, 0x0000, 0x2809, 0x0009, 0x00B9, 0xFFF8, 0x0801, 0x0001, 0x2003, 0x0001, 0x0196, 0xFF9D, 0x2003, 0x0003, 0x00BE, 0x0014, 0x2003, 0x0001, 0x00E8, 0x0027, 0x2803, 0x0003, 0x0122, 0x0002, 0x2005, 0x0001, 0x003E, 0x0008, 0x2005, 0x0002, 0x004C, 0x0003, 0x200F, 0x0001, 0x0123, 0x0000, 0x004E, 0x0001, 0x00B5, 0xFFFC, 0x0000,
};
