/* AnimJoint data for relocData file 1355 (FTKirbyAnimLightItemPickup) */
/* 1264 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimLightItemPickup_joint1[44];
extern u16 dFTKirbyAnimLightItemPickup_joint2[10];
extern u16 dFTKirbyAnimLightItemPickup_joint3[28];
extern u16 dFTKirbyAnimLightItemPickup_joint5[42];
extern u16 dFTKirbyAnimLightItemPickup_joint6[86];
extern u16 dFTKirbyAnimLightItemPickup_joint7[14];
extern u16 dFTKirbyAnimLightItemPickup_joint9[38];
extern u16 dFTKirbyAnimLightItemPickup_joint10[84];
extern u16 dFTKirbyAnimLightItemPickup_joint11[16];
extern u16 dFTKirbyAnimLightItemPickup_joint13[10];
extern u16 dFTKirbyAnimLightItemPickup_joint14[50];
extern u16 dFTKirbyAnimLightItemPickup_joint16[14];
extern u16 dFTKirbyAnimLightItemPickup_joint18[46];
extern u16 dFTKirbyAnimLightItemPickup_joint19[52];
extern u16 dFTKirbyAnimLightItemPickup_joint21[54];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimLightItemPickup_joints[] = {
	(u32)dFTKirbyAnimLightItemPickup_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimLightItemPickup_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimLightItemPickup_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimLightItemPickup_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimLightItemPickup_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimLightItemPickup_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimLightItemPickup_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimLightItemPickup_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimLightItemPickup_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimLightItemPickup_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimLightItemPickup_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimLightItemPickup_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimLightItemPickup_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimLightItemPickup_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimLightItemPickup_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF0128, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimLightItemPickup_joint1[44] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 480, -239, 240, 479, 4300, 102, 3276, -409, 4300, 102,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 480, 159, 240, -319, 4300, -68, 3276, 273, 4300, -68,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 600, 0, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimLightItemPickup_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimLightItemPickup_joint3[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 357, 89, 536, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 357, -59, 536, -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimLightItemPickup_joint5[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 268, 67, 178, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -120, -120, 120,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 268, -44, 178, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -120, -120, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimLightItemPickup_joint6[86] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2412, -206, -217, -456, 0, -373,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2770, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -674, -467, -373, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1152, -245, -322, 6,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -319, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2735, -1, -1166, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2772, -148, -1150, 102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -926, -112,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3033, -714, -122, 777,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4201, -515, 1236, 833,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4063, 90, -1186, -230, 1544, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4021, 42, -1387, -201, 1608, 64,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimLightItemPickup_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimLightItemPickup_joint9[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 446, 111, 536, 134,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 60, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 446, -74, 536, -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 60, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimLightItemPickup_joint10[84] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, 62, 217, 185, 0, -280,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 400, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2475, -267, -280, -452,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1877, -326, -905, -321,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1822, -1, 374, 0, -924, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 393, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1874, 145, -909, 101,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2113, 304, -721, 324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2482, 174, -261, 334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2462, -35, 254, -87, -52, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, -49, 217, -37, 0, 52,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimLightItemPickup_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimLightItemPickup_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimLightItemPickup_joint14[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, -59, -302, 81, 237, 103,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -125, -29, 434, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -260, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -229, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -34, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -165, -50, 395, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -279, -38, 269, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 11, -302, -22, 237, -32,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimLightItemPickup_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimLightItemPickup_joint18[46] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, 63, 1785, -37, -1704, -106,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1811, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1896, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1569, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1601, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1784, 16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1740, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, -21, 1785, 0, -1704, 35,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimLightItemPickup_joint19[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 177, 302, 64, 237, 267,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 232, -24, 361, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 689, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 674, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 321, -130,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 196, -71, 366, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 90, -87, 335, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -69, 302, -32, 233, -88,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimLightItemPickup_joint21[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x0000, 0x280E, 0xFAEE, 0x005C, 0xF907, 0x0052, 0xF958, 0x0058, 0x4F00, 0x1000, 0x1000, 0x1000, 0x2807, 0x0007, 0xFB15, 0xFFD3, 0xF92A, 0xFFD8, 0x2009, 0x0001, 0xF9B0, 0x00B8, 0x2009, 0x0001, 0xFAC9, 0x00A4, 0x2009, 0x0005, 0xF95B, 0xFFD7, 0x200F, 0x0001, 0xFAEE, 0xFFD9, 0xF907, 0xFFDD, 0xF954, 0xFFF9, 0x0000, 0x0000, 0x0000,
};
