/* AnimJoint data for relocData file 1397 (FTKirbyAnimLuigiFireballGround) */
/* 2896 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimLuigiFireballGround_joint1[48];
extern u16 dFTKirbyAnimLuigiFireballGround_joint2[24];
extern u16 dFTKirbyAnimLuigiFireballGround_joint3[78];
extern u16 dFTKirbyAnimLuigiFireballGround_joint5[84];
extern u16 dFTKirbyAnimLuigiFireballGround_joint6[192];
extern u16 dFTKirbyAnimLuigiFireballGround_joint7[22];
extern u16 dFTKirbyAnimLuigiFireballGround_joint9[98];
extern u16 dFTKirbyAnimLuigiFireballGround_joint10[206];
extern u16 dFTKirbyAnimLuigiFireballGround_joint11[22];
extern u16 dFTKirbyAnimLuigiFireballGround_joint13[10];
extern u16 dFTKirbyAnimLuigiFireballGround_joint14[122];
extern u16 dFTKirbyAnimLuigiFireballGround_joint16[22];
extern u16 dFTKirbyAnimLuigiFireballGround_joint18[150];
extern u16 dFTKirbyAnimLuigiFireballGround_joint19[142];
extern u16 dFTKirbyAnimLuigiFireballGround_joint21[14];
extern u16 dFTKirbyAnimLuigiFireballGround_joint22[170];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimLuigiFireballGround_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballGround_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballGround_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballGround_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballGround_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballGround_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballGround_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballGround_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballGround_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballGround_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballGround_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballGround_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballGround_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballGround_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballGround_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballGround_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballGround_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimLuigiFireballGround_joint1[48] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), -240, 119,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), 720,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 600, -43, 240, 174,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 600, 25, 240, -50,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 120, -182,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 660,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 600, -43, 11, -87,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 600, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimLuigiFireballGround_joint2[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 0, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), 0, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 16), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimLuigiFireballGround_joint3[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 30), 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), -178, 11, -357, 11, 3686, 51, 4505, -102, 3686, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 178, 16, 178, 24, 4505, 37, 3276, -37, 4505, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 14), 178, -5, 178, -5, 4096, -43, 4096, 86, 4096, -43,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 312, -57, 4096, 40, 4096, -163, 4096, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 240, 4300, 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 312, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimLuigiFireballGround_joint5[84] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 357, -25, -134, 8, 134, 5,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -150, -89, -30, -59, -90, -119,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -90, -19, -60, -19, -120, 139,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), -402, -34, 134, 12, 89, -2, -180, -32, 120, 87,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), -60,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 14), -402, 13, 134, -4, 89, -2, -180, 12, -60, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 14), 120,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -150, 90, 0, 30, 120, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimLuigiFireballGround_joint6[192] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 7, -1387, 49, -1608, -41,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2131, -233,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -965, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -969, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1359, -176,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 31), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1323, 238, -2424, -419,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -881, 305, -2970, -379,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -673, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1105, -109, -3183, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -991, 135, -3348, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -603, -15, -864, 79, -3540, -169,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1095, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -703, -388, -3687, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1380, -518, -3340, 196,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2103, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -3260, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3238, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -3347, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1084, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1070, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2124, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -1912, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1866, 70, -1049, 33, -3394, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1131, 80, -4123, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1178, -89,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 11), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1052, 90, -4198, -90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -785, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -4773, -36,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1258, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1383, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -791, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -802, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4802, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4819, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, -1, -1391, -7, -4825, -5,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimLuigiFireballGround_joint7[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 35), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimLuigiFireballGround_joint9[98] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 134, 22, -134, -7, -223, -26,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 150, 119, -120, -119, 30, 59,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 120, -120, -120, 90, 60, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 268, 27, -89, 50, -312, 33, -30, 29, 0, -209,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 4), 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 357, 4, 268, 19, 44, 19, 120, 40, -90, -13, -150, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 357, -11, 268, -8, 44, -1, -60, 25, -150, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 14), 120,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 120, -60, -30, 30, -90, 75,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimLuigiFireballGround_joint10[206] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, 98, 217, 89, 0, 33,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2966, 787,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 306, 187, 33, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 591, 178, 229, 628,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 539, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4085, 678, 1291, 656,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4323, 174, 1541, 159,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1559, 50,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 31), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4435, 99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 4885, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 504, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 560, 35,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1626, 53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1561, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5028, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4930, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 583, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 414, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1445, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1688, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5028, 110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 5066, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 447, 21, 1698, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 1855, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 526, 11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5060, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 5462, 128,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1950, 109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2749, 87,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 5594, 124, 537, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 5688, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 359, -63,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 11), 4096,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2837, 92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 3203, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5655, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 5629, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 300, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 230, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5629, 0, 217, -12, 3216, 13,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimLuigiFireballGround_joint11[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 43), -6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimLuigiFireballGround_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 46),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimLuigiFireballGround_joint14[122] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, 19, -302, -25, 237, -35,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -356, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 226, 199, -92, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 465, 221, -341, -214,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 956, 101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -186, 280,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -277, 69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -260, -63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1032, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 500, -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 260, -225, -331, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -249, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -109, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 112, 217,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 418, 12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -242, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), -303, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 426, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 269, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -112, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -21, 0,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 258, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 232, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, -2, -302, 0, 237, 4,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimLuigiFireballGround_joint16[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 32), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimLuigiFireballGround_joint18[150] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1298, -7, 1785, 2, -1704, -10,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1427, 173, 2151, 148, -1820, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1658, 544, 2296, 98, -1954, -461,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2516, 587, 2348, -3, -2743, -538,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2833, 438, 2289, 95, -3030, -439,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 3121, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3393, 103, -3621, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3040, -227, -3325, 211,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2953, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3286, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 3186, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 3044, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2946, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), 2902, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3327, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -3347, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 3035, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 3043, -2,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3347, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -3310, -3,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2901, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2906, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3312, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3316, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 3041, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 3040, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2907, 0, 3040, 0, -3313, 2,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimLuigiFireballGround_joint19[142] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1629, -2, 1305, 9, 1841, -4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1802, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1397, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 1604, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1616, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1562, -186, 1879, 131,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2568, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1243, -48, 1358, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1405, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1464, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1591, 80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1628, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2650, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 2669, -6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1629, 0, 1407, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), 1701, 13, 1344, -28,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2663, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 2668, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2650, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2208, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1708, -4, 1306, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1591, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1307, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2000, -164,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1836, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1598, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1625, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1632, 6, 1305, -1, 1845, 9,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimLuigiFireballGround_joint21[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 45), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimLuigiFireballGround_joint22[170] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1298, 0, -1785, -5, -1708, 5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1940, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1592, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -1271, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1325, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1522, -102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1919, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1623, -224, -1973, -178, -1664, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1971, 93, -2276, -28, -2038, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1752, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1435, 308, -1626, 300,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1379, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1368, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1686, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1682, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1383, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1380, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1362, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1443, -23,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1684, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1627, -13,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1357, 38, -1467, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1288, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1755, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1658, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1866, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1333, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1304, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1832, 28, -1726, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1786, 1, -1706, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, 6, -1785, 0, -1704, 1,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
