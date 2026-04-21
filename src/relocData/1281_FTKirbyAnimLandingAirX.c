/* AnimJoint data for relocData file 1281 (FTKirbyAnimLandingAirX) */
/* 1072 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimLandingAirX_joint1[38];
extern u16 dFTKirbyAnimLandingAirX_joint2[10];
extern u16 dFTKirbyAnimLandingAirX_joint3[24];
extern u16 dFTKirbyAnimLandingAirX_joint5[30];
extern u16 dFTKirbyAnimLandingAirX_joint6[52];
extern u16 dFTKirbyAnimLandingAirX_joint7[16];
extern u16 dFTKirbyAnimLandingAirX_joint9[30];
extern u16 dFTKirbyAnimLandingAirX_joint10[58];
extern u16 dFTKirbyAnimLandingAirX_joint11[16];
extern u16 dFTKirbyAnimLandingAirX_joint13[10];
extern u16 dFTKirbyAnimLandingAirX_joint14[38];
extern u16 dFTKirbyAnimLandingAirX_joint16[14];
extern u16 dFTKirbyAnimLandingAirX_joint18[48];
extern u16 dFTKirbyAnimLandingAirX_joint19[38];
extern u16 dFTKirbyAnimLandingAirX_joint21[16];
extern u16 dFTKirbyAnimLandingAirX_joint22[54];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimLandingAirX_joints[] = {
	(u32)dFTKirbyAnimLandingAirX_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimLandingAirX_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimLandingAirX_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimLandingAirX_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimLandingAirX_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimLandingAirX_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimLandingAirX_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimLandingAirX_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimLandingAirX_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimLandingAirX_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimLandingAirX_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimLandingAirX_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimLandingAirX_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimLandingAirX_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimLandingAirX_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimLandingAirX_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimLandingAirX_joint1[38] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, -268, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 300, -480, 4915, 327, 2048, -819, 4915, 327,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 300, 342, 4915, -234, 2048, 585, 4915, -234,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 600, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimLandingAirX_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimLandingAirX_joint3[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 89, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 89, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimLandingAirX_joint5[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 178, -120, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 0, -35, 0, 192, 0, 192,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimLandingAirX_joint6[52] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -568, -200, -612, -774, 1321, 240,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -768, -106, -1387, -401, 1561, 115,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 7), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -781, -4, -1415, -11, 1552, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -798, -10, -1387, 1, 1597, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, -5, -1387, 0, 1608, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimLandingAirX_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimLandingAirX_joint9[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -178, 120, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 0, 35, 0, -192, 0, 192,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimLandingAirX_joint10[58] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2180, 196, 998, -777, 2933, 236,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 221, -402, 3170, 113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2389, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 7), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 192, -11, 3160, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 220, -1, 3206, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2386, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 2407, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, 5, 217, -3, 3216, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimLandingAirX_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimLandingAirX_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimLandingAirX_joint14[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -302,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 295, -381, 237, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -302, 0, 237, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -86, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -92, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -39, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 17, -302, 0, 233, -4,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimLandingAirX_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimLandingAirX_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1930, -14, 1766, -43, -1255, -445,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -1701, -224,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -1923, 8, 1770, 21,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1704, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1703, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 5, 1785, 15, -1708, -4,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimLandingAirX_joint19[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -297, 381, 300, 2, 233, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 302, 0, 233, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 84, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 92, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 36, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -15, 302, 0, 233, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimLandingAirX_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimLandingAirX_joint22[54] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1286, 14, -1766, 43, -1259, -445,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -1705, -222,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -1293, -8, -1770, -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1704, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1707, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, -5, -1785, -15, -1708, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
