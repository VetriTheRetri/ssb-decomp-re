/* AnimJoint data for relocData file 1408 (FTKirbyAnimChargeShotAir) */
/* 1440 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimChargeShotAir_joint1[20];
extern u16 dFTKirbyAnimChargeShotAir_joint2[14];
extern u16 dFTKirbyAnimChargeShotAir_joint3[46];
extern u16 dFTKirbyAnimChargeShotAir_joint5[48];
extern u16 dFTKirbyAnimChargeShotAir_joint6[94];
extern u16 dFTKirbyAnimChargeShotAir_joint7[14];
extern u16 dFTKirbyAnimChargeShotAir_joint9[48];
extern u16 dFTKirbyAnimChargeShotAir_joint10[118];
extern u16 dFTKirbyAnimChargeShotAir_joint11[14];
extern u16 dFTKirbyAnimChargeShotAir_joint13[10];
extern u16 dFTKirbyAnimChargeShotAir_joint14[56];
extern u16 dFTKirbyAnimChargeShotAir_joint16[14];
extern u16 dFTKirbyAnimChargeShotAir_joint18[66];
extern u16 dFTKirbyAnimChargeShotAir_joint19[38];
extern u16 dFTKirbyAnimChargeShotAir_joint21[76];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimChargeShotAir_joints[] = {
	(u32)dFTKirbyAnimChargeShotAir_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimChargeShotAir_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimChargeShotAir_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimChargeShotAir_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimChargeShotAir_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimChargeShotAir_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimChargeShotAir_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimChargeShotAir_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimChargeShotAir_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimChargeShotAir_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimChargeShotAir_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimChargeShotAir_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimChargeShotAir_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimChargeShotAir_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimChargeShotAir_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF014A, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimChargeShotAir_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 600, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 8), 0, -480,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimChargeShotAir_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), 0, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimChargeShotAir_joint3[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 268, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 312, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -178, -11, 0, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 3891, 4505, 3891,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 89, 26, 89, 8,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 51, 4096, -102, 4096, 51,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 204, 4096, 204, 4096, -511,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimChargeShotAir_joint5[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 178, -120, -120, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), 0, -16, 357, -11, 30, 60, 30, -20,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), -120,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -268, -26, 0, -35,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -30, -89, -120, 119, -30, -29,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -60, -39, 0, 159, 0, 39,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimChargeShotAir_joint6[94] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2648, -88, -612, -14, -1895, 2,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1486, 394,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -658, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2228, -396,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1767, -474,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1278, -518,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 729, -360, -1020, 276,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 495, -32, -968, -63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -590, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -208, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 493, 40, -1059, -132,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1460, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 890, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 792, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 760, 66, -1229, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 924, 132, -148, 42, -1031, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1025, 100, -123, 25, -867, 163,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimChargeShotAir_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimChargeShotAir_joint9[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -178, 120, -120, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 33, -357, 22, -120, 20, 120, -40,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 8), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 536, 53, 178, 53,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 120, 29, -90, 89, -60, -270,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 30, -119, -30, 79, -150, -119,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimChargeShotAir_joint10[118] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1040, 123, 995, -5, -287, 55,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 139, 192,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1197, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -916, 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -438, 581,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 246, 512,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 586, 276, 307, 120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1035, 223,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 244, -109,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1288, 72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1262, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1245, 140,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1016, -299,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1118, -79, 86, -211,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -297, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1217, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 649, -307,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 411, 135,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -43, 416,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 672, 87, 1218, -39, 535, 328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 586, -127, 1138, -85, 613, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, -169, 1047, -90, 572, -41,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimChargeShotAir_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimChargeShotAir_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimChargeShotAir_joint14[56] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 295, -25, -302, 10, 237, 4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -190, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 158, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -20, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -12, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 72, 42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -218, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -311, -22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 86, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 123, 50, -328, -17, -4, -90,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimChargeShotAir_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimChargeShotAir_joint18[66] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1286, 20, 1766, -13, -1255, 4,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1604, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1021, 15,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 4096, 37, 4096, 37, 4096, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 1514, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1498, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1376, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1588, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1423, -38,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1003, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -928, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1358, -18, 1388, -35, -864, 64,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimChargeShotAir_joint19[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -297, 0, 300, 0, 233, -6,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -52, -24, 242, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -28, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -66, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -122, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -78, -26, 241, 0, -182, -59,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimChargeShotAir_joint21[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000, 0x280E, 0xFAFA, 0xFFFF, 0xF91A, 0x0006, 0xFB15, 0x0006, 0x3F00, 0x0E66, 0x0E66, 0x0E66, 0x2803, 0x000D, 0xF9DF, 0x0000, 0x2F01, 0x0010, 0x1000, 0x0025, 0x1000, 0x0025, 0x1000, 0x0025, 0x200D, 0x000C, 0xF9FF, 0xFFF3, 0xFB51, 0xFFF6, 0x200D, 0x0001, 0xF9F0, 0xFFF0, 0xFB49, 0x0000, 0x280D, 0x0002, 0xF9CD, 0xFFF1, 0xFB5F, 0x0017, 0x2003, 0x0001, 0xF9DF, 0x0000, 0x2003, 0x0001, 0xF9DE, 0x0000, 0x200F, 0x0001, 0xF9DD, 0xFFFF, 0xF9C0, 0xFFF3, 0xFB80, 0x0021, 0x0000, 0x0000, 0x0000,
};
