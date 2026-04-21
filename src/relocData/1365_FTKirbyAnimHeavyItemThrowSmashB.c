/* AnimJoint data for relocData file 1365 (FTKirbyAnimHeavyItemThrowSmashB) */
/* 2896 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimHeavyItemThrowSmashB_joint1[50];
extern u16 dFTKirbyAnimHeavyItemThrowSmashB_joint2[28];
extern u16 dFTKirbyAnimHeavyItemThrowSmashB_joint3[60];
extern u16 dFTKirbyAnimHeavyItemThrowSmashB_joint5[74];
extern u16 dFTKirbyAnimHeavyItemThrowSmashB_joint6[150];
extern u16 dFTKirbyAnimHeavyItemThrowSmashB_joint7[24];
extern u16 dFTKirbyAnimHeavyItemThrowSmashB_joint9[74];
extern u16 dFTKirbyAnimHeavyItemThrowSmashB_joint10[150];
extern u16 dFTKirbyAnimHeavyItemThrowSmashB_joint11[22];
extern u16 dFTKirbyAnimHeavyItemThrowSmashB_joint13[10];
extern u16 dFTKirbyAnimHeavyItemThrowSmashB_joint14[144];
extern u16 dFTKirbyAnimHeavyItemThrowSmashB_joint16[54];
extern u16 dFTKirbyAnimHeavyItemThrowSmashB_joint18[116];
extern u16 dFTKirbyAnimHeavyItemThrowSmashB_joint19[100];
extern u16 dFTKirbyAnimHeavyItemThrowSmashB_joint21[14];
extern u16 dFTKirbyAnimHeavyItemThrowSmashB_joint22[130];
extern u16 dFTKirbyAnimHeavyItemThrowSmashB_joint23[202];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimHeavyItemThrowSmashB_joints[] = {
	(u32)dFTKirbyAnimHeavyItemThrowSmashB_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimHeavyItemThrowSmashB_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimHeavyItemThrowSmashB_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimHeavyItemThrowSmashB_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimHeavyItemThrowSmashB_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimHeavyItemThrowSmashB_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimHeavyItemThrowSmashB_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimHeavyItemThrowSmashB_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimHeavyItemThrowSmashB_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimHeavyItemThrowSmashB_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimHeavyItemThrowSmashB_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimHeavyItemThrowSmashB_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimHeavyItemThrowSmashB_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimHeavyItemThrowSmashB_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimHeavyItemThrowSmashB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimHeavyItemThrowSmashB_joint22, /* [21] joint 22 */
	(u32)dFTKirbyAnimHeavyItemThrowSmashB_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimHeavyItemThrowSmashB_joint1[50] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 420, 4710, 2867, 4710,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 630, 112, 4096, -61, 4096, 122, 4096, -61,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 630, -24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 600, -16,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 600, 32,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 660,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 600,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimHeavyItemThrowSmashB_joint2[28] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -268, 0, 0, -312,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), -600, -320,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), -600, 960,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 600, 640,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), 600, -240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimHeavyItemThrowSmashB_joint3[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 312, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4096, -20, 4096, 40, 4096, -20,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 20), 360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -357, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -357, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 268, 59,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 3891, 4505, 3891,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 536, -13, 312, -19, 4096, 20, 4096, -40, 4096, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 0, 312, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimHeavyItemThrowSmashB_joint5[74] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 268, 0, -120, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 14, 0, -2, 268, 2,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 30), 0, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 10), 446, 44, -89, -20, 357, -20, -120, -110,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 3), 580, -25, -268, -12, 0, -95, -60, -137,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, -180,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ, 4), 268, -82, -178, 38, -60, 205,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 7), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 4), -312, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimHeavyItemThrowSmashB_joint6[150] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -360, -1, -1281, 7, -138, 1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), -494, 19, 5, -19,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 37), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -1236, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1238, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1075, 25,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -463, 41, -25, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -295, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -235, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -238, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -403, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -309, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -48, 125,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1052, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1179, -86,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -428, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -143, 306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 93, 90, -1263, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -75, -117,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1217, 63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 237, 301,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 781, 293,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -222, -201,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -785, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1123, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1331, -110,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1183, 345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -813, -9, 1473, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 9, -1387, -55, 1608, 134,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimHeavyItemThrowSmashB_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimHeavyItemThrowSmashB_joint9[74] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -268, 0, -120, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 14, 0, 2, -268, -2,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 30), 0, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 20), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 10), 446, 44, 89, 20, -357, 20, -120, -110,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 3), 580, -25, 268, 12, 0, 95, 60, 137,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, -180,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ, 4), 268, -82, 178, -38, -60, 205,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 7), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 4), 312, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimHeavyItemThrowSmashB_joint10[150] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1408, 0, 326, 0, -1747, 2,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), -1277, -19, -1604, -19,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 37), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), 391, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 393, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 527, 15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1307, -41, -1635, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1472, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1840, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1845, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2012, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1460, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1727, -138,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 538, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 449, -60,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2042, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1804, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1888, -103, 395, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 442, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1933, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1758, 138, -1408, 307,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1339, 278, -894, 319,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 467, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 480, -132,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -987, 192, -429, 379,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -954, 11, 286, -131, -134, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -964, -9, 217, -68, 0, 134,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimHeavyItemThrowSmashB_joint11[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimHeavyItemThrowSmashB_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimHeavyItemThrowSmashB_joint14[144] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -64, -3, -302, -8, 237, -15,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -412, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -99, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -232, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -355, -111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -642, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -395, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -410, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -92, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -24, 72,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -604, 78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -171, 50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -401, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -17, 37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 47, 32, -163, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 7, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 19, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 11, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -296, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -13, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -70, 48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 21, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -21, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 203, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 198, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 234, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 0, -302, -5, 233, -1,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimHeavyItemThrowSmashB_joint16[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 555, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 611, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 541, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 564, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 548, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -200,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimHeavyItemThrowSmashB_joint18[116] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1281, -5, 1744, 1, -1702, -8,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1733, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 1350, 66, -1532, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1418, 60, -1483, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 1411, -103, -1460, -49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1739, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1662, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1298, -42, 1551, -77, -1516, -107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1604, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1674, 25, -2076, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1681, 3, -2104, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -2044, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1772, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1637, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 1304, -10,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1973, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1769, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1747, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1704, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1781, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1298, -5, 1785, 3, -1708, -4,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimHeavyItemThrowSmashB_joint19[100] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 62, 0, 302, -5, 233, 3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -22, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 101, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 316, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 321, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 643, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 15, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 255, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 151, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 214, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 225, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 101, -38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 646, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 315, -63,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 224, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 298, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 64, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 33, -21, 257, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -12, 302, 4, 233, -24,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimHeavyItemThrowSmashB_joint21[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 39), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimHeavyItemThrowSmashB_joint22[130] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1281, -6, -1744, 0, -1706, -5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1576, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1685, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -1874, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1874, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1711, 269,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1526, 80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1336, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1683, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1792, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1463, -126, -1354, 294,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -984, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1631, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1787, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1787, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -977, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1128, -80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1633, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1392, 88,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1228, -121,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1720, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1314, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1299, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1714, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, 0, -1785, 2, -1708, 5,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTKirbyAnimHeavyItemThrowSmashB_joint23[202] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 780, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_TRAX), -804, 0,
	ftAnimSetValT(FT_ANIM_TRAX, 10), 122,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 714, -52, -948, -696,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), -889,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), -982,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -20,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 700, -1, -1044, -182,
	ftAnimSetValT(FT_ANIM_TRAX, 5), 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1010, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1048, -35,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 713, 190, -1040, 286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1081, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1094, 4,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 795, 465,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 1), -1072, 49, -937, 1554,
	ftAnimSetValT(FT_ANIM_TRAX, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 1), -994, 100, -651, 2928,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 946, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 1), -872, 130, -204, 3568,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 1), -734, 129, 240, 3500,
	ftAnimSetValT(FT_ANIM_TRAX, 2), -120,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 900, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 1), -612, 99, 670, 3118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 1), -536, 53, 1020, 2131,
	ftAnimSetValT(FT_ANIM_TRAX, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -451, 41, 970, 339, 1469, 1751,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -370, 39, 1069, 388, 1895, 1650,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -294, 36, 1164, 298, 2294, 1537,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -223, 33, 1219, 71, 2664, 1410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -160, 29, 1200, -350, 3000, 1328,
	ftAnimSetValT(FT_ANIM_TRAX, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -106, 24, 1043, -828, 3328, 1302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -61, 19, 785, -1019, 3651, 1203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -28, 13, 534, -845, 3930, 949,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -7, 7, 362, -468, 4126, 539,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 300, 4200,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
