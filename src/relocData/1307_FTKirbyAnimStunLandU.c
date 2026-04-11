/* AnimJoint data for relocData file 1307 (FTKirbyAnimStunLandU) */
/* 2288 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimStunLandU_joint1[92];
extern u16 dFTKirbyAnimStunLandU_joint2[22];
extern u16 dFTKirbyAnimStunLandU_joint3[20];
extern u16 dFTKirbyAnimStunLandU_joint5[70];
extern u16 dFTKirbyAnimStunLandU_joint6[164];
extern u16 dFTKirbyAnimStunLandU_joint7[16];
extern u16 dFTKirbyAnimStunLandU_joint9[72];
extern u16 dFTKirbyAnimStunLandU_joint10[124];
extern u16 dFTKirbyAnimStunLandU_joint11[16];
extern u16 dFTKirbyAnimStunLandU_joint13[10];
extern u16 dFTKirbyAnimStunLandU_joint14[94];
extern u16 dFTKirbyAnimStunLandU_joint16[38];
extern u16 dFTKirbyAnimStunLandU_joint18[132];
extern u16 dFTKirbyAnimStunLandU_joint19[88];
extern u16 dFTKirbyAnimStunLandU_joint21[142];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimStunLandU_joints[] = {
	(u32)dFTKirbyAnimStunLandU_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimStunLandU_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimStunLandU_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimStunLandU_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimStunLandU_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimStunLandU_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimStunLandU_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimStunLandU_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimStunLandU_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimStunLandU_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimStunLandU_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimStunLandU_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimStunLandU_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimStunLandU_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimStunLandU_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF01FC, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimStunLandU_joint1[92] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -536, 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_TRAY), 600, 3200,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 1800, -11,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 16), -818,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4505, 4505, 4505,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 3891, 3891, 4505,
	ftAnimBlock(0, 6),
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 576, -3200,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 204, 4096, 204, 4096, -491,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 2), 4505, 4505,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 1920,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 960, -96,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), -818,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 1), 3276,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 5), 4505,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 4), 3891, 3891,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 480, -511,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4505, 4505, 3276,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 576, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimStunLandU_joint2[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 804,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, -312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), 0, -33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimStunLandU_joint3[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 16), 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 0, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimStunLandU_joint5[70] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 178, -210, -150, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -132, 10, 20, 3,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), -120, 13, -60, 13, 0, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 137,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 163, 15, 48, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 79,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 21, -41, 264, -1, -180, -60, -120, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAZ, 2), 12, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ, 6), -166, -42, 33, -26, 0, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 92, -180, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -318, 48, 79, -180, -120, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimStunLandU_joint6[164] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 9, -1059, -1, 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -84, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1007, -16,
	ftAnimSetValRateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 4095, 0, 4095, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 972, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1003, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 801, -554,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -106, -507,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -213, -107, 3, 119,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 540, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -320, -120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -649, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1037, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1213, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 585, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 609, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -650, 198, -1213, 84, 616, -205,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4095, 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -252, 526, -1043, -31, 199, -569,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 403, 317, -1276, -115, -523, -344,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1194, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 382, -32, -488, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 337, -59, -402, 109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 74, -105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 27, -198,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1164, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1035, 99,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -45, -259,
	ftAnimSetVal0RateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4095, 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -444, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -514, -70, -942, 92, -289, -316,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimStunLandU_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimStunLandU_joint9[72] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -178, 210, -150, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -139, -7, 6, 7,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 16), -120,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 16), 120, -40, 60, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), -163,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -117, -6, 118, -27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), -98,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX, 2), -204, -26, -272, -16, 120, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -74, -150, 120,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -330, -16, -16, 36, 60, -60, -120, 30, 60, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), -125,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -333, 15, -143, 60, -120, 60,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimStunLandU_joint10[124] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, -4, 1063, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 156, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1177, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -935, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -954, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -388, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -333, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -278, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 182, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 167, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1160, -33, 121, -215,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -593, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -409, -54, 1109, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -357, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1191, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 938, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -621, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -298, 431,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -352, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -159, 417,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 482, 411, 309, 369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 664, 45, 1019, 113, 441, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 573, 101, 1165, 132, 196, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 867, 294, 1285, 119, 64, -131,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimStunLandU_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimStunLandU_joint13[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, -1072,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 211, -408, -1889,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimStunLandU_joint14[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -88, 4, -394, 1, 125, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -226, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 155, 58, -136, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 207, 47, -226, -83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -327, 107,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 152, -153,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -204, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -190, -19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -138, 403,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -38, -98, 479, 309,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -43, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 480, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 29, -123,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -8, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 114, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -49, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -62, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 98, -15, -211, -21, -36, 25,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimStunLandU_joint16[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 535, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimStunLandU_joint18[132] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -217, -9, -481, 6, -3134, 12,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -2921, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 9, 9,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 4095, 34, 4096, 34, 4095, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -215, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -193, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -257, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2950, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2913, 34,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 19, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 70, -56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2868, 187,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2242, 125,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4095, 4096, 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -199, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 64, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 68, -10, -2289, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -164, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2679, -285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2, -44, -2987, -200,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 74, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3080, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3134, 54,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4095, 4096, 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -187, -7, -2970, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -179, 8, 162, 88, -2742, 228,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimStunLandU_joint19[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1523, 7, 1213, 0, 1729, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1568, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1305, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1801, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1758, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1908, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1604, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1580, 86,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1322, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1263, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1484, 54, 2116, 106,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1579, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2058, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1988, -96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1785, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1659, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1569, 91, 1893, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1476, 92, 1293, 29, 2021, 128,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimStunLandU_joint21[142] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x280E, 0x0722, 0x0009, 0xF7D7, 0x0005, 0x0697, 0x000E, 0x3F00, 0x0E66, 0x0E66, 0x0E66, 0x2809, 0x0009, 0x07B3, 0xFFF2, 0x2805, 0x000D, 0xF987, 0x0015, 0x2F01, 0x0010, 0x1000, 0x0022, 0x0FFF, 0x0022, 0x0FFF, 0x0022, 0x2003, 0x0007, 0x0746, 0xFFD1, 0x2003, 0x0001, 0x071A, 0xFFDC, 0x2803, 0x0008, 0x074A, 0xFFF6, 0x0801, 0x0001, 0x2009, 0x0001, 0x079F, 0xFFEB, 0x2809, 0x0005, 0x0788, 0x001F, 0x0801, 0x0003, 0x2005, 0x0001, 0xF99C, 0x0013, 0x2805, 0x000B, 0xF9D8, 0x002A, 0x0801, 0x0001, 0x2009, 0x0001, 0x07B2, 0x0076, 0x2809, 0x0002, 0x0902, 0x0034, 0x1901, 0x0008, 0x1000, 0x4601, 0x0008, 0x0FFF, 0x0FFF, 0x2003, 0x0001, 0x0724, 0xFF68, 0x2003, 0x0001, 0x0619, 0xFF7A, 0x200B, 0x0001, 0x0617, 0x001A, 0x08DE, 0xFFBF, 0x2809, 0x0005, 0x06F0, 0x0057, 0x2003, 0x0004, 0x0751, 0xFFFC, 0x2003, 0x0001, 0x0745, 0xFFCF, 0x1901, 0x0002, 0x1000, 0x4601, 0x0002, 0x0FFF, 0x0FFF, 0x200B, 0x0001, 0x06ED, 0xFF7A, 0x0793, 0x00B3, 0x200F, 0x0001, 0x0638, 0xFF4B, 0xFA07, 0x002F, 0x0856, 0x00C3, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
