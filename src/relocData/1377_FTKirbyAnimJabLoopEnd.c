/* AnimJoint data for relocData file 1377 (FTKirbyAnimJabLoopEnd) */
/* 1296 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimJabLoopEnd_joint1[26];
extern u16 dFTKirbyAnimJabLoopEnd_joint2[10];
extern u16 dFTKirbyAnimJabLoopEnd_joint3[42];
extern u16 dFTKirbyAnimJabLoopEnd_joint5[38];
extern u16 dFTKirbyAnimJabLoopEnd_joint6[86];
extern u16 dFTKirbyAnimJabLoopEnd_joint7[14];
extern u16 dFTKirbyAnimJabLoopEnd_joint9[38];
extern u16 dFTKirbyAnimJabLoopEnd_joint10[76];
extern u16 dFTKirbyAnimJabLoopEnd_joint11[14];
extern u16 dFTKirbyAnimJabLoopEnd_joint13[10];
extern u16 dFTKirbyAnimJabLoopEnd_joint14[50];
extern u16 dFTKirbyAnimJabLoopEnd_joint16[14];
extern u16 dFTKirbyAnimJabLoopEnd_joint18[50];
extern u16 dFTKirbyAnimJabLoopEnd_joint19[56];
extern u16 dFTKirbyAnimJabLoopEnd_joint21[14];
extern u16 dFTKirbyAnimJabLoopEnd_joint22[66];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimJabLoopEnd_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimJabLoopEnd_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimJabLoopEnd_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimJabLoopEnd_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimJabLoopEnd_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimJabLoopEnd_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimJabLoopEnd_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimJabLoopEnd_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimJabLoopEnd_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimJabLoopEnd_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimJabLoopEnd_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimJabLoopEnd_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimJabLoopEnd_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimJabLoopEnd_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimJabLoopEnd_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimJabLoopEnd_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimJabLoopEnd_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimJabLoopEnd_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 660, 360,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 840, -80, 120, -480,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 600, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimJabLoopEnd_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimJabLoopEnd_joint3[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 89, 536, 312, 4505, 4505, 3276,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 0, -8, 0, -53,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 312, -96, 4096, -68, 4096, -409, 4096, 341,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 240, 4300, 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 0, 0, 312, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimJabLoopEnd_joint5[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 357, -180, -60, 120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 0, -35,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -180, 160, -60, 80, 60, -160,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -60, 205, 0, 68, 0, -68,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimJabLoopEnd_joint6[86] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 151, -128, -1085, -37, -50, 180,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1068, 93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -138, -549,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -160, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -224, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 115, -511, -966, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1380, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1247, -529, -845, -513,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1431, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -944, 177,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -892, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -818, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1388, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1386, 0, -1553, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 13, -1387, -1, -1608, -54,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimJabLoopEnd_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimJabLoopEnd_joint9[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 536, 268, 60, -180,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), -60, 240,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -53, 0, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 3), 60,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 60, -68, 0, 68,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimJabLoopEnd_joint10[76] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1561, 124, 626, -20, -1364, 106,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -978, 45, -854, 71,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 369, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 288, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 416, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -954, 0, -779, 116,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -928, 71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -56, 108,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 371, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 254, -53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -843, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 39, 217, -36, 0, 56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimJabLoopEnd_joint11[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimJabLoopEnd_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimJabLoopEnd_joint14[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -348, 21, -205, -1, 186, -22,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -10, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -302, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 201, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 237, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 237, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -11, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -19, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, -2, -302, 0, 233, -4,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimJabLoopEnd_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimJabLoopEnd_joint18[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -263, 14, -86, 20, -3113, 39,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -176, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -310, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -3094, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3237, -109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3313, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -190, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -181, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -309, 0, -176, 4, -3316, -3,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimJabLoopEnd_joint19[56] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -255, -2, 442, -32, 335, -57,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 291, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 23, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 181, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 210, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 233, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 302, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 302, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 27, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 23, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -1, 302, 0, 233, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimJabLoopEnd_joint21[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimJabLoopEnd_joint22[66] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1541, -23, -1572, -69, -945, 4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1526, 104, -1847, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1040, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1272, -217,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1704, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1407, 92, -1830, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -1294, -5, -1783, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1708, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1708, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, -4, -1785, -1, -1708, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
