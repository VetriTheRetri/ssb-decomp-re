/* AnimJoint data for relocData file 1331 (FTKirbyAnimThrownDKPulled) */
/* 1952 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimThrownDKPulled_joint2[106];
extern u16 dFTKirbyAnimThrownDKPulled_joint3[10];
extern u16 dFTKirbyAnimThrownDKPulled_joint4[22];
extern u16 dFTKirbyAnimThrownDKPulled_joint6[24];
extern u16 dFTKirbyAnimThrownDKPulled_joint7[110];
extern u16 dFTKirbyAnimThrownDKPulled_joint8[8];
extern u16 dFTKirbyAnimThrownDKPulled_joint10[24];
extern u16 dFTKirbyAnimThrownDKPulled_joint11[112];
extern u16 dFTKirbyAnimThrownDKPulled_joint12[16];
extern u16 dFTKirbyAnimThrownDKPulled_joint14[10];
extern u16 dFTKirbyAnimThrownDKPulled_joint15[104];
extern u16 dFTKirbyAnimThrownDKPulled_joint17[16];
extern u16 dFTKirbyAnimThrownDKPulled_joint19[124];
extern u16 dFTKirbyAnimThrownDKPulled_joint20[102];
extern u16 dFTKirbyAnimThrownDKPulled_joint22[16];
extern u16 dFTKirbyAnimThrownDKPulled_joint23[126];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimThrownDKPulled_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTKirbyAnimThrownDKPulled_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimThrownDKPulled_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimThrownDKPulled_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimThrownDKPulled_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimThrownDKPulled_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimThrownDKPulled_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimThrownDKPulled_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimThrownDKPulled_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimThrownDKPulled_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimThrownDKPulled_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimThrownDKPulled_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimThrownDKPulled_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimThrownDKPulled_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimThrownDKPulled_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimThrownDKPulled_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTKirbyAnimThrownDKPulled_joint23, /* [22] joint 23 */
};

/* Joint 2 */
u16 dFTKirbyAnimThrownDKPulled_joint2[106] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -240, -480,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 16, -240, -480,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 0, 0, -180, 1068,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 2), -714, -480,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 0, 0, 0, 480,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 2), -714, -480,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 960,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 150, 1869, 300, -186,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), -1161,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -2144, -188, 0, 0, 720, 1226, -120, -1051,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2323, 232,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 780, 400, -240, -400,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 900, -934, -300, 519,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 3), -714, 423, 0, 0, 240, -1312,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 0, -300,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimThrownDKPulled_joint3[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimThrownDKPulled_joint4[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimThrownDKPulled_joint6[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 2), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 4), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 2), -240,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimThrownDKPulled_joint7[110] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2655, 1, -298, -3, 638, -8,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -350, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2622, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 629, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 732, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -219, 76, 546, -125,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -203, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2602, 29, 480, -94,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -2613, -53, 468, 137,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -222, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -421, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2668, -27, 633, 156,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1197, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -2657, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2984, -494,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3646, -518, -594, -107, 1337, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4021, -197, -635, 108, 1608, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4042, 0, -378, 229, 1629, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4021, 21, -175, 202, 1608, -21,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimThrownDKPulled_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimThrownDKPulled_joint10[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 2), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 4), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 2), 240,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimThrownDKPulled_joint11[112] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1048, -2, 1307, 0, -968, -10,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1258, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1014, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -979, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -875, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1386, 76, -1060, -125,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1405, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 994, -30, -1127, -94,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1004, 53, -1141, 137,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1388, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1185, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1060, 27, -974, 157,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -406, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1049, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1379, 496,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2043, 516, 1016, -106, -264, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, 195, 973, 108, 0, 142,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1233, 231, 21, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 2433,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, -20, 1435, 202, 0, -21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTKirbyAnimThrownDKPulled_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimThrownDKPulled_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimThrownDKPulled_joint15[104] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1445, 12, -1328, 10, -942, -1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1305, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1433, -77, -944, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1601, -114, -743, 188,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1485, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -566, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -697, -134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1305,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -732, 114,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1285, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1506, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1660, 108,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -605, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1425, 67, -1017, -254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1614, -52, -1107, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1631, -11, -1192, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1558, 73, -1510, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1485, 73, -1279, 5, -1612, -102,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTKirbyAnimThrownDKPulled_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimThrownDKPulled_joint19[124] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -319, -36, -185, 12, -3047, 42,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -121, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -356, 71, -3005, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -175, 105, -3100, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -173, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 81, 112, -2872, 160,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 76, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2780, 75,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 2), -2634,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 110, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 167, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2721, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2589, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -137, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -68, -58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 178, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -202, -38, 66, -45, -2679, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -115, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2716, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 88, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 142, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -122, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -222, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -290, -67, 145, 3, -2671, 45,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTKirbyAnimThrownDKPulled_joint20[102] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -160, -16, 281, 7, 669, -9,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 302, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -177, 76, 660, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -7, 114, 864, 188,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -125, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1037, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 302, 0, 907, -131,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 875, 112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 322, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -102, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 54, -106,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 998, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1041, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -180, -68, 594, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 6, 53, 501, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 24, 11, 420, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -50, -72, 97, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -123, -73, 328, 5, -4, -102,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimThrownDKPulled_joint22[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTKirbyAnimThrownDKPulled_joint23[126] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 319, 36, 185, -12, 173, 35,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 121, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 356, -71, 208, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 175, -105, 116, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 173, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -81, -112, 340, 158,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -76, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 432, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 579, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -110, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -167, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 495, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 630, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 137, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 68, 58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -178, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 202, 38, -66, 45, 541, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 115, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 500, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -88, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -142, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 122, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 222, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 290, 67, -145, -3, 545, 45,
	ftAnimEnd(),
	0x0000, 0x0000,
};
