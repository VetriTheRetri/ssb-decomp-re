/* AnimJoint data for relocData file 1385 (FTKirbyAnimUSmash) */
/* 3072 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimUSmash_joint1[70];
extern u16 dFTKirbyAnimUSmash_joint2[24];
extern u16 dFTKirbyAnimUSmash_joint3[82];
extern u16 dFTKirbyAnimUSmash_joint5[38];
extern u16 dFTKirbyAnimUSmash_joint6[220];
extern u16 dFTKirbyAnimUSmash_joint7[22];
extern u16 dFTKirbyAnimUSmash_joint9[38];
extern u16 dFTKirbyAnimUSmash_joint10[230];
extern u16 dFTKirbyAnimUSmash_joint11[24];
extern u16 dFTKirbyAnimUSmash_joint13[44];
extern u16 dFTKirbyAnimUSmash_joint14[138];
extern u16 dFTKirbyAnimUSmash_joint16[14];
extern u16 dFTKirbyAnimUSmash_joint18[188];
extern u16 dFTKirbyAnimUSmash_joint19[148];
extern u16 dFTKirbyAnimUSmash_joint21[8];
extern u16 dFTKirbyAnimUSmash_joint22[204];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimUSmash_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimUSmash_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimUSmash_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimUSmash_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimUSmash_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimUSmash_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimUSmash_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimUSmash_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimUSmash_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimUSmash_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimUSmash_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimUSmash_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimUSmash_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimUSmash_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimUSmash_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimUSmash_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimUSmash_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimUSmash_joint1[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 600, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 450, 4505, 3072, 4505,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 450, 4505, 3072, 4505,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 600, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 23), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 5), -1072, -223, 1560, 512,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 20), -3216,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 1560, -399,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), 660, -1120,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 300, 4915, 2048, 4915,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), -3216, 600, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimUSmash_joint2[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 7), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), -268,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimUSmash_joint3[82] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 357, 44, 4300, 51, 3686, -102, 4300, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 357, -102, 4300, -117, 3686, 234, 4300, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), -357, -102, 3891, -58, 4505, 117, 3891, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -357, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -178, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 3891, 4505, 3891,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 0, 35, 4096, 40, 4096, -81, 4096, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 178, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 0, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimUSmash_joint5[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 268, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 268, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimUSmash_joint6[220] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, -33, -1387, 30, -1608, 82,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1065, 73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1133, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 2340, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 3), 3276,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3276,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1004, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1128, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1131, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1292, -106,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2360, 82, -1474, -333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2504, 160, -1378, 61, -1795, -231,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 2048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2681, 564, -1169, 256, -1937, -501,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3553, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3632, 736, -865, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4153, 213, -1439, -277,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 22), 2048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4060, -66, -1420, 22, -3328, 168,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -3139, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1387, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4021, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 4021, -8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3141, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -3216, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1403, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -1397, 44,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4004, 11, -1316, 250, -3217, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -434, 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4045, -105, -3336, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3792, -49, -3186, 82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -3202, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3946, 118, -272, 107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -201, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4029, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 4023, -3,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -201, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -216, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3217, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -3217, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4021, -2, -220, -4, -3216, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimUSmash_joint7[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 34), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimUSmash_joint9[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -268, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -268, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimUSmash_joint10[230] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2412, 33, 1391, -37, -1608, 82,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1065, 73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1130, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2340, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 3), 3276,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3276,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1003, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1128, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1128, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1288, 105,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2360, -82, -1473, -333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2505, -197, 1375, -52, -1795, -280,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1098, 121,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 2048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2755, -566, -2035, -467,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3638, -691, -2730, -736,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4138, -208, 1425, 157, -3509, -291,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1395, -9,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 22), 2048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4055, 58, -3314, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4021, 23, -3216, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -3195, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -4021, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1395, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1344, 4,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3202, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -3216, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1354, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1400, -43,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4004, -11, 1316, -252, -3217, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 438, -312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4044, 106, -3336, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3790, 49, -3183, 82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3123, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3946, -119, 272, -107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 205, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4029, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -4023, 3,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3144, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -3217, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 207, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 219, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4021, 2, 220, 0, -3216, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimUSmash_joint11[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimUSmash_joint13[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, -1072,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 204, -120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1251, -55, 446, 55, -1251, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1251, 63, 446, -63, -1251, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -804, 63, 0, -63, -1072, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -804, 0, -1072,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), -804, 0, -1072,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimUSmash_joint14[138] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1305, -1371,
	ftAnimSetValRate(FT_ANIM_ROTX), -1632, -9,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1657, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1352, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1371, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1371, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1038, 131,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1655, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1509, 242, -1349, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -1305, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1171, 226, -955, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -903, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1004, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -992, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1191, -79,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -902, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1050, -45,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1292, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1798, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1789, 29, -1095, -98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1677, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1371, -64,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1375,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1375, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1674, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1630, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1305, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1305, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1629, 0, -1305, 0, -1375, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimUSmash_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimUSmash_joint18[188] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -309, -1, -176, 9, -96, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -320, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -157, -16, -95, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -176, 63, -96, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 236, -93,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 5120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 25, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 311, 207,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 383, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -336, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -582, -146, 28, -147,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -104, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -628, -31,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 5120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -549, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 386, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 308, -46,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -99, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 176, 62,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -504, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -284, -40,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 23), 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 230, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -35, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 246, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -96, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -336, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -320, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -114, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -141, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -93, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -99, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -147, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -175, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -317, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -310, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -309, 0, -176, 0, -99, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimUSmash_joint19[148] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1632, 115, -1911, 20, 1845, 191,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2033, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1764, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2385, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2409, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2409, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2048, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1838, -187,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1768, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1909, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2385, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2186, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1629, -110, 1841, -183,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1578, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1818, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1753, -73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1637, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1535, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1537, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1849, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -1826, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1829, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -1911, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1536, 2, 1635, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1680, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1845, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1845,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 12), 1845,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1674, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1633, -1,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1911,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 3), -1911,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1632, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimUSmash_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimUSmash_joint22[204] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 16, 176, -32, -96, -83,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -121, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 359, 3,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -143, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 47, 136,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 132, -63,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -123, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -61, 106,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 47, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, -24, 107, 119, -197, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -17, -150,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 234, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -99, 90,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 7168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 217, 259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -167, -98, 503, 240,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -216, 1, 766, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 132, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 92, 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 7168,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -215, 1, 763, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 555, -109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -98, 48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 92, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 308, 20,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 23), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 435, -100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 33, -110,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -24, 85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 141, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 320, 13, -57, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 310, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -93, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -97, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -96, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 147, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 175, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, 0, 176, 0, -96, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
