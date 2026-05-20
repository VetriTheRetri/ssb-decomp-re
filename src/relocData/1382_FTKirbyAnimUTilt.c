/* AnimJoint data for relocData file 1382 (FTKirbyAnimUTilt) */
/* 2240 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimUTilt_joint1[38];
extern u16 dFTKirbyAnimUTilt_joint2[30];
extern u16 dFTKirbyAnimUTilt_joint3[90];
extern u16 dFTKirbyAnimUTilt_joint5[68];
extern u16 dFTKirbyAnimUTilt_joint6[158];
extern u16 dFTKirbyAnimUTilt_joint7[30];
extern u16 dFTKirbyAnimUTilt_joint9[68];
extern u16 dFTKirbyAnimUTilt_joint10[164];
extern u16 dFTKirbyAnimUTilt_joint11[16];
extern u16 dFTKirbyAnimUTilt_joint13[10];
extern u16 dFTKirbyAnimUTilt_joint14[52];
extern u16 dFTKirbyAnimUTilt_joint16[14];
extern u16 dFTKirbyAnimUTilt_joint18[96];
extern u16 dFTKirbyAnimUTilt_joint19[86];
extern u16 dFTKirbyAnimUTilt_joint21[14];
extern u16 dFTKirbyAnimUTilt_joint22[142];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimUTilt_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimUTilt_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimUTilt_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimUTilt_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimUTilt_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimUTilt_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimUTilt_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimUTilt_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimUTilt_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimUTilt_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimUTilt_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimUTilt_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimUTilt_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimUTilt_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimUTilt_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimUTilt_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimUTilt_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimUTilt_joint1[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 600,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1020, 1120,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 1020, -239,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 900, -239,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 900,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 900, -300,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimUTilt_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 0, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimUTilt_joint3[90] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 312, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 7), 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -268, -89, 3686, -273, 4300, 136, 4300, 136,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAZ, 2), -268, 335, 3686, 307, 4300, -307,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 2), 4300,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAZ, 2), 1072, 335, 4300, 307, 3686, -307,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 2), 4300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 1072, -107, 4300, -34, 4300, -34, 3686, 68,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 312, -71, 4198, -255, 3891, 153,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 4), 4198,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4300, -29, 3276, -29, 4300, 58,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 0, 312, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimUTilt_joint5[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 178, 59,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), -120, -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 178, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -120, -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 268, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, -150,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 268, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, -150,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), -120, 150,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 0, -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 4), -120,
	ftAnimSetValRateT(FT_ANIM_TRAX, 4), -60, 137,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimUTilt_joint6[158] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 853, -217, -322, 0, 1429,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1657, 352, -539, -142, 1429, 815,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1509, 0, -502, 0, 1631, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -520, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1657, -47, 1429, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1415, -364, 1544, 259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 929, -176, -409, 48, 1948, 113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -411, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1062, 0, 1770, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 929, -163, 1947, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 735, -315, -462, -117, 2185, 390,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 298, -616, -647, -93, 2727, 697,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -496, -581, -650, -8, 3580, 590,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -562, 697, 3800, -376,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -647, 200,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 529, 658, 3155, -316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 755, 137, -353, 183, 3167, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -223, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 804, 33, 3216, 30,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 813, -9, 3222, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -9, -217, 6, 3216, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimUTilt_joint7[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -91, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 42,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimUTilt_joint9[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -178, -59,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 120, -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -178, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 120, -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -268, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, -150,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -268, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, -150,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), -120, 150,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 0, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 4), 120,
	ftAnimSetValRateT(FT_ANIM_TRAX, 4), 60, -137,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimUTilt_joint10[164] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -853, 1391, -322, 1608, 1429,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -49, -355, 1068, -142, 3037, 812,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 93, 0, 1105, 0, 3233, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1087, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -49, 47, 3037, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 188, 364, 3146, 259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 679, 179, 1199, 49, 3556, 117,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1196, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 548, 0, 3382, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 837, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3555, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1148, -103, 3752, 231,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 847, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1031, 219, 4018, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1276, -50, 4316, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 930, -174, 4020, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 915, -44,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 932, 112, 4177, 245,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 4733, 157,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1327, 49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 838, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 797, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4825, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 4835, -9,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1362, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1381, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 7, 1391, 9, 4825, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimUTilt_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimUTilt_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimUTilt_joint14[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -21, 43, -302, 113, 233, -99,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 151, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 19, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -212, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -211, 2,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 9), -302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 145, -3,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 8), 237,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 18, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, -302, 237,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimUTilt_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 17), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimUTilt_joint18[96] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, 187, 1785, -138, -1708, 688,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1722, 1643,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1019, 370,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -967,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1329, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1731, -3, 1646, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1538, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1766, 12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1310, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1403, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1532, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1682, 81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1754, 3,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), -1918,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1546, -128,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), -1704,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1757, 51,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 3), 1785,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 2), -1918,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1785, -1704,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimUTilt_joint19[86] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1629, -43, 1305, 113, 1841, -99,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1586, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1419, 32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 1708,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1741, 350,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3083, 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1494, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1532, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1436, 0, 3123, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2455, -142,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 11), 1305,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1520, -12,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 5), 1629,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2317, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1841, -43,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1841,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1629, 1841,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1629, 0, 1305, 0, 1841, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimUTilt_joint21[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 17), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimUTilt_joint22[142] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1298, -187, -1785, 138, -1708, 688,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -1019, 352,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1498, -1638,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX, 2), 4096, 1535,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1002,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1485, 4, -1646, 99, -1019, 78,
	ftAnimSetValRateT(FT_ANIM_SCAX, 2), 7168, 1023,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1658, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1439, 110, -846, 189,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -365, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1425, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1463, -53,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 2), 6144, -1024,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1602, 179, -1526, -198,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -2077, -40,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 7), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1299, 148, -498, -363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1305, -57, -1092, -510,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1413, 3, -1941, 146, -1518, -308,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1765, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1715, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1298, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1304, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1775, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, 5, -1785, -9, -1708, 7,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
