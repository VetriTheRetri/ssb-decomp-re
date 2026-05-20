/* AnimJoint data for relocData file 1432 (FTKirbyAnimInhaleEnd) */
/* 1616 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimInhaleEnd_joint1[44];
extern u16 dFTKirbyAnimInhaleEnd_joint2[16];
extern u16 dFTKirbyAnimInhaleEnd_joint3[34];
extern u16 dFTKirbyAnimInhaleEnd_joint4[42];
extern u16 dFTKirbyAnimInhaleEnd_joint6[42];
extern u16 dFTKirbyAnimInhaleEnd_joint7[110];
extern u16 dFTKirbyAnimInhaleEnd_joint8[16];
extern u16 dFTKirbyAnimInhaleEnd_joint10[42];
extern u16 dFTKirbyAnimInhaleEnd_joint11[112];
extern u16 dFTKirbyAnimInhaleEnd_joint12[16];
extern u16 dFTKirbyAnimInhaleEnd_joint13[10];
extern u16 dFTKirbyAnimInhaleEnd_joint15[40];
extern u16 dFTKirbyAnimInhaleEnd_joint16[50];
extern u16 dFTKirbyAnimInhaleEnd_joint18[14];
extern u16 dFTKirbyAnimInhaleEnd_joint20[48];
extern u16 dFTKirbyAnimInhaleEnd_joint21[38];
extern u16 dFTKirbyAnimInhaleEnd_joint23[14];
extern u16 dFTKirbyAnimInhaleEnd_joint24[48];
extern u16 dFTKirbyAnimInhaleEnd_joint25[22];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTKirbyAnimInhaleEnd_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimInhaleEnd_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimInhaleEnd_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimInhaleEnd_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimInhaleEnd_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTKirbyAnimInhaleEnd_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleEnd_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimInhaleEnd_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTKirbyAnimInhaleEnd_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleEnd_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimInhaleEnd_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTKirbyAnimInhaleEnd_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTKirbyAnimInhaleEnd_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleEnd_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTKirbyAnimInhaleEnd_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleEnd_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleEnd_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTKirbyAnimInhaleEnd_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleEnd_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTKirbyAnimInhaleEnd_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTKirbyAnimInhaleEnd_joint1[44] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 840, 120, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 480, -287, 4300, 40, 3276, -163, 4300, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 480, 64, 4300, -27, 3276, 109, 4300, -27,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 600, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimInhaleEnd_joint2[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimInhaleEnd_joint3[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4505, 4915, 4505,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 312, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 178, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 178, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTKirbyAnimInhaleEnd_joint4[42] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 285, 5455, 5324, 2996,
	ftAnimSetValRate(FT_ANIM_TRAY), -10, 62,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 1), 21, 95,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 1925, 122, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 285,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 28, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 285,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 28, 304,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 28, 304, 1925, 122, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimInhaleEnd_joint6[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 268, 89, -120, -60, 120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 89, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 89, -60, -60, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -5, 0, -5,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 15), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -60, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimInhaleEnd_joint7[110] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1053, 47, -594, 14, 1470, -72,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -469, -17, 1137, -144,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -926, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -876, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -554, 561, -569, -85, 968, -345,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -319, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 246, 491, 447, -345,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 427, 171, 277, -144,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -5, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 588, 156,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 891, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -310, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -221, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 871, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 805, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 0, -220, 1, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimInhaleEnd_joint8[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimInhaleEnd_joint10[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -268, -89, 120, -60, 120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -89, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -89, 60, -60, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 5, 0, 5,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 15), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 60, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimInhaleEnd_joint11[112] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1053, -41, 594, -9, 1470, -66,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1138, -147,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 932, -67, 547, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 876, -188, 480, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 640, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 554, -561, 970, -345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -246, -491, 447, -346,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -427, -170, 550, -89, 277, -143,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 281, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -5, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -587, -156,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -891, 16,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -871, 20, 268, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -805, 1, 221, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 0, 217, -4, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimInhaleEnd_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimInhaleEnd_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimInhaleEnd_joint15[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -279, 412, 120,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 3), -93, 91, 30, -175,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 412,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 4), 312,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 178, 38,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 178, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTKirbyAnimInhaleEnd_joint16[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -56, 1, -240, 0, 317, -6,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -302, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -24, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 237, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 233, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 237, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -302, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -302, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 2, -302, 0, 233, -4,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimInhaleEnd_joint18[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimInhaleEnd_joint20[48] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1900, 2, 1631, 11, -1456, -25,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1760, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -1918, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1720, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1712, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1704, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1760, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 1784, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 0, 1785, 0, -1708, -3,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimInhaleEnd_joint21[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 54, 0, 240, 7, 313, -6,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 19), 21, -1, 302, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 233, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 233, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 233, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, 0, 302, 0, 233, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTKirbyAnimInhaleEnd_joint23[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 19), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTKirbyAnimInhaleEnd_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 291, 2, 22, 10, 148, -21,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 151, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 309, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -107, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -107, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -99, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 151, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 176, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, 0, 176, 0, -99, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTKirbyAnimInhaleEnd_joint25[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 1800,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 18), 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
