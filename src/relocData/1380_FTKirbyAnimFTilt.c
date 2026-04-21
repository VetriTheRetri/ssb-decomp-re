/* AnimJoint data for relocData file 1380 (FTKirbyAnimFTilt) */
/* 2368 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimFTilt_joint1[44];
extern u16 dFTKirbyAnimFTilt_joint2[32];
extern u16 dFTKirbyAnimFTilt_joint3[68];
extern u16 dFTKirbyAnimFTilt_joint5[50];
extern u16 dFTKirbyAnimFTilt_joint6[190];
extern u16 dFTKirbyAnimFTilt_joint7[14];
extern u16 dFTKirbyAnimFTilt_joint9[62];
extern u16 dFTKirbyAnimFTilt_joint10[180];
extern u16 dFTKirbyAnimFTilt_joint11[14];
extern u16 dFTKirbyAnimFTilt_joint13[10];
extern u16 dFTKirbyAnimFTilt_joint14[112];
extern u16 dFTKirbyAnimFTilt_joint16[12];
extern u16 dFTKirbyAnimFTilt_joint18[138];
extern u16 dFTKirbyAnimFTilt_joint19[86];
extern u16 dFTKirbyAnimFTilt_joint21[14];
extern u16 dFTKirbyAnimFTilt_joint22[114];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimFTilt_joints[] = {
	(u32)dFTKirbyAnimFTilt_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimFTilt_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimFTilt_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimFTilt_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimFTilt_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimFTilt_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimFTilt_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimFTilt_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimFTilt_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimFTilt_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimFTilt_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimFTilt_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimFTilt_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimFTilt_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimFTilt_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimFTilt_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimFTilt_joint1[44] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 600, 384, -120, 384,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 840, 48, 240, 288,
	ftAnimSetValRateT(FT_ANIM_TRAY, 17), 720, -101,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), 240, -112,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), 0, -160,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 600, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimFTilt_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 0, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -804, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -1072, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -3485, -201,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), -3485,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -3485,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimFTilt_joint3[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 312, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 5), 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 178, 107, 3891, 81, 4505, -163, 3891, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 536, 26, 4300, 20, 3686, -40, 4300, 20,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 17), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAY, 17), 312, -30, 4096, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 446, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 0, -37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 0, 240, 4300, 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 0, 312, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimFTilt_joint5[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -178, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 89, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), -180, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX, 17), 178, -4, -120, 50,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 17), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX, 2), 0, -29, -60, 160,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX, 4), 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimFTilt_joint6[190] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 95, -217, -88, 0, -206,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -382, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 900, 153, -206, -309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1111, 82, -618, -209,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1036, 14, -646, -248,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 20), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -332, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -504, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1092, 63, -1122, -223,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1349, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -474, 25, -1093, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -637, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1046, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -815, -39,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1358, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1496, 123,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -869, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1683, 579, -732, -51, -1050, -573,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -452, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2655, 604, -2016, -597,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2892, 163, -2245, -155,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3044, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2328, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2455, -280,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3121, 328,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3700, 449, -443, 85, -2943, -380,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -234, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3213, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4021, 164,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4029, -3,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -221, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4024, -4, -216, 0, -3215, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4021, -3, -220, -4, -3216, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimFTilt_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimFTilt_joint9[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 2), -178, 35, 0, -35, 60, 192,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 178, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -178, 120, -120, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 0, -9, 0, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 120, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 2), 60, -160,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 4), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimFTilt_joint10[180] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, 70, 217, 132, 0, 179,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 465, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3165, 602,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 179, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 557, 330,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 20), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 337, -100, 839, 256,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 604, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3922, 507, 1071, 463,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4206, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1766, 347,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1766, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1189, -255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4233, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 3849, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3580, -213, 949, -185,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 3261, -8, 718, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 599, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1183, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3286, -75, 778, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3110, -93, 648, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3098, -20, 690, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 3038, 3, 784, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3052, 298, 832, 249,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1608, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3635, 484, 1142, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4021, 194, 1327, 117,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4025, 1, 1377, 32, 1604, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1391, -2, 1607, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4024, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4022, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4021, -1, 1387, -3, 1608, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimFTilt_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimFTilt_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 28),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimFTilt_joint14[112] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, -146, -302, 25, 237, 259,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -361, -13, -378, -178, 656, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -310, 277, -617, -170, 521, -328,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -693, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 192, 312, 0, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 315, 103, -124, -104,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 362, -56, -176, 55,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -685, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -477, 43,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 285, -94, -99, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -197, -9, 434, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -196, 3, -436, 37, 446, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -79, 77,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 7), -302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 445, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 316, -106,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -21, 28,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, -302, 233,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimFTilt_joint16[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 27), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimFTilt_joint18[138] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, -290, -1431, 200, -1704, 419,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -945, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2208, 72, -1231, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1772, 253, -1698, -168,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1702, -44,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 8192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1569, 114, -994, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -794, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1469, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1502, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1790, -62,
	ftAnimSetValRateT(FT_ANIM_SCAX, 7), 5120, -630,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -2375, -116,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -771, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -923, -108,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1515, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1311, 37,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2495, -102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2591, 194,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1044, -265,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1708, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2192, 336, -1277, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1918, 137, -1431, -76,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, -1431, -1708,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1918, -1431, -1708,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimFTilt_joint19[86] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, 31, 302, -64, 233, 77,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -15, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 178, 30, 286, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 215, 23, 204, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 162, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 278, 11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -15, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -100, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 164, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 24, -6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 289, 10,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 9), 302,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -102, 29, 23, 50,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 21, 233,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 21, 233,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 302,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimFTilt_joint21[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 27), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimFTilt_joint22[114] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1298, 4, -1785, -110, -1708, -23,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1603, 129,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1341, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -2006, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1915, 121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1686, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1478, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1417, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1685, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1543, 21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1420, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1526, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1343, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1338, 58,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1524, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1650, -135,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1537, -49,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), -1708,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1298, 19, -1785, -67,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1298, -1785,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), -1708,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1298, -1785,
	ftAnimEnd(),
	0x0000, 0x0000,
};
