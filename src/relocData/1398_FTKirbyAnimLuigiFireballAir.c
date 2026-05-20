/* AnimJoint data for relocData file 1398 (FTKirbyAnimLuigiFireballAir) */
/* 2688 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimLuigiFireballAir_joint1[26];
extern u16 dFTKirbyAnimLuigiFireballAir_joint2[24];
extern u16 dFTKirbyAnimLuigiFireballAir_joint3[70];
extern u16 dFTKirbyAnimLuigiFireballAir_joint5[84];
extern u16 dFTKirbyAnimLuigiFireballAir_joint6[174];
extern u16 dFTKirbyAnimLuigiFireballAir_joint7[24];
extern u16 dFTKirbyAnimLuigiFireballAir_joint9[88];
extern u16 dFTKirbyAnimLuigiFireballAir_joint10[134];
extern u16 dFTKirbyAnimLuigiFireballAir_joint11[16];
extern u16 dFTKirbyAnimLuigiFireballAir_joint13[10];
extern u16 dFTKirbyAnimLuigiFireballAir_joint14[106];
extern u16 dFTKirbyAnimLuigiFireballAir_joint16[22];
extern u16 dFTKirbyAnimLuigiFireballAir_joint18[194];
extern u16 dFTKirbyAnimLuigiFireballAir_joint19[108];
extern u16 dFTKirbyAnimLuigiFireballAir_joint21[22];
extern u16 dFTKirbyAnimLuigiFireballAir_joint22[198];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimLuigiFireballAir_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballAir_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballAir_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballAir_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballAir_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballAir_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballAir_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballAir_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballAir_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballAir_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballAir_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballAir_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballAir_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballAir_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballAir_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballAir_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimLuigiFireballAir_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimLuigiFireballAir_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 600, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 30), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 0, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimLuigiFireballAir_joint2[24] = {
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
u16 dFTKirbyAnimLuigiFireballAir_joint3[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 268, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), -178, -5, -357, 11, 3686, 51, 4505, -102, 3686, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 178, 16, 178, 24, 4505, 37, 3276, -37, 4505, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 14), 178, 2, 178, -5, 4096, -43, 4096, 86, 4096, -43,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), 268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 40, 4096, -81, 4096, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4300, 3686, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimLuigiFireballAir_joint5[84] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 178, -120, -120, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 357, -25, -134, 8, 134, -5, -90, -20, -120, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 8), -30,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), -120, -119, 60, 270,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -402, -34, 134, 12, 89, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), -150,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -150, -13, -90, 26, 150, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), -402, 13, 134, -4, 89, 2, -150, 12, -90, 12, 150, -12,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0, 178,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -120, 15, -60, -15, 120, -75,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -120, -120, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimLuigiFireballAir_joint6[174] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2176, -4, -995, -19, -287, -6,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -248, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1389, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2195, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2285, -360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -3501, -343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3602, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3754, -42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -222, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -189, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1336, 99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -956, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3814, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4177, -479,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4773, -477, -989, -56, 62, 164,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1146, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -5506, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 178, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 212, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 93, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1142, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1097, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5524, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -5310, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5278, 53, -1052, 61, 41, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -902, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -4978, 305, -296, -326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4593, 255, -706, -290,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -4671, -137, -799, 73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -916, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -995, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4822, -155, -710, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -5386, -13, -293, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5397, -10, -998, -3, -283, 10,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimLuigiFireballAir_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimLuigiFireballAir_joint9[88] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -178, 120, -120, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 8), 134, 22, -134, -7, -223, -11, 0, -20,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 8), 90, -150,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 268, 27, -89, 50, -312, 33, -120, 89, -30, -149,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 4), 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 357, 4, 268, 19, 44, 19, 90, -13, -60, 26, -150, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 14), 357, -11, 268, -8, 44, -7, 90, 12, -150, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 14), -60,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0, -178,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 120, 15, -60, -30, -120, 75,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 120, -120, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimLuigiFireballAir_joint10[134] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1036, 34, 999, 9, -283, 8,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1078, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -187, 53, -114, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -129, 88, -111, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 222, 14, -10, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1042, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1209, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 185, 23, -62, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 379, -5, 140, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1178, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 1085, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 358, -18, 113, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 279, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 298, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 251, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -858, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -229, -35,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1071, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1001, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -935, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1023, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -257, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -276, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1036, -12, 998, -2, -283, -6,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimLuigiFireballAir_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 45), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimLuigiFireballAir_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 46),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimLuigiFireballAir_joint14[106] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 295, -29, -302, 5, 237, 7,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 244, -139,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -484, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -156, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -183, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -252, -29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 85, -150,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -282, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -510, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -509, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -273, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -239, 12,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -274, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 143, 32,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -223, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 290, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -496, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -304, 3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 175, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 235, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 297, 6, -300, 3, 233, -2,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimLuigiFireballAir_joint16[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimLuigiFireballAir_joint18[194] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1930, 14, 1766, -20, -1255, -16,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1582, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), -1821, 22, -1364, -15, 4096, 51, 4096, 51, 4096, 51,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1792, 53, -1390, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1473, 211,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1660, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1660, 117,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1991, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1292, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1620, -122,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1940, -68, -1597, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1512, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1817, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1694, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1729, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 14), 4096, -27, 4096, -27, 4096, -27,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1727, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1701, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1517, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1164, 99,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 3686, 3686, 3686,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1855, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1959, -90,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1730, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2204, -144,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1059, 93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1101, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2327, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1948, 60,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1871, -74, -1174, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1777, -21, -1247, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1924, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1927, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1930, -3, 1766, -10, -1259, -12,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimLuigiFireballAir_joint19[108] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -297, 21, 300, -11, 233, -13,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 44, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 148, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -37, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -15, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 490, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 142, 102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 532, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 180, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 314, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 505, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 196, -72,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 534, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 268, -19,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 124, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -288, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 314, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 303, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 250, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 241, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -295, -6, 302, 0, 237, -4,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimLuigiFireballAir_joint21[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimLuigiFireballAir_joint22[198] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1930, -28, 1450, -1, 1957, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 51, 4096, 51, 4096, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1300, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1486, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1615, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1643, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1674, 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1312, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1357, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1666, -198, 1557, 173,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2090, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1277, -280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1105, -90, 1519, 138,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1083, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1752, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2201, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2318, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 14), 4096, -27, 4096, -27, 4096, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1075, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 1191, 43,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1753, 0, 2319, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 1405, -87, 1976, -60,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 3686, 3686, 3686,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1238, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1342, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1693, 368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2079, 233, 1319, -79, 1916, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1276, 80, 1890, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2159, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1867, 26,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1360, 74, 1926, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1910, 31, 1425, 44, 1953, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1930, 20, 1450, 24, 1961, 7,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
