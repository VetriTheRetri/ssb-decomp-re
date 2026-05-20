/* AnimJoint data for relocData file 1425 (FTKirbyAnimInhaleStartGround) */
/* 1488 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimInhaleStartGround_joint1[42];
extern u16 dFTKirbyAnimInhaleStartGround_joint2[16];
extern u16 dFTKirbyAnimInhaleStartGround_joint3[44];
extern u16 dFTKirbyAnimInhaleStartGround_joint4[42];
extern u16 dFTKirbyAnimInhaleStartGround_joint6[34];
extern u16 dFTKirbyAnimInhaleStartGround_joint7[96];
extern u16 dFTKirbyAnimInhaleStartGround_joint8[14];
extern u16 dFTKirbyAnimInhaleStartGround_joint10[34];
extern u16 dFTKirbyAnimInhaleStartGround_joint11[96];
extern u16 dFTKirbyAnimInhaleStartGround_joint12[16];
extern u16 dFTKirbyAnimInhaleStartGround_joint13[10];
extern u16 dFTKirbyAnimInhaleStartGround_joint15[32];
extern u16 dFTKirbyAnimInhaleStartGround_joint16[46];
extern u16 dFTKirbyAnimInhaleStartGround_joint18[14];
extern u16 dFTKirbyAnimInhaleStartGround_joint20[48];
extern u16 dFTKirbyAnimInhaleStartGround_joint21[28];
extern u16 dFTKirbyAnimInhaleStartGround_joint23[14];
extern u16 dFTKirbyAnimInhaleStartGround_joint24[48];
extern u16 dFTKirbyAnimInhaleStartGround_joint25[20];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTKirbyAnimInhaleStartGround_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimInhaleStartGround_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimInhaleStartGround_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimInhaleStartGround_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimInhaleStartGround_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTKirbyAnimInhaleStartGround_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleStartGround_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimInhaleStartGround_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTKirbyAnimInhaleStartGround_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleStartGround_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimInhaleStartGround_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTKirbyAnimInhaleStartGround_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTKirbyAnimInhaleStartGround_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleStartGround_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTKirbyAnimInhaleStartGround_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleStartGround_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleStartGround_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTKirbyAnimInhaleStartGround_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleStartGround_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTKirbyAnimInhaleStartGround_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTKirbyAnimInhaleStartGround_joint1[42] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 480, -64, 4300, 27, 3276, -109, 4300, 27,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 480, 288, 4300, -40, 3276, 163, 4300, -40,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 840, 120, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimInhaleStartGround_joint2[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimInhaleStartGround_joint3[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 312,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 178, 11, -89, -5,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), -120,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 178, -17, -89, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 0, 0, 0, 4505, 4915, 4505,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTKirbyAnimInhaleStartGround_joint4[42] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 28, 304, 1925, 122, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 28, 304, 1925, 122, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 28, -14,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 5455, 5324, 2996,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 285,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 21, -104,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 285,
	ftAnimSetValRateT(FT_ANIM_TRAY, 1), -10, -63,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 285,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimInhaleStartGround_joint6[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 10), -178, -178, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 5), -178, -178, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 268, 89, -120, -60, 120,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimInhaleStartGround_joint7[96] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 4, -217, -1, 0, -11,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -256, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1067, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -556, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -585, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -585, 47,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 3072,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -242, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -407, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1065, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1033, -199,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -504, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 664, -489, -658, -160, -138, 405,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -726, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 55, -830, 306, 756,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -996, -554, 1373, 582,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1053, -57, -594, 131, 1470, 97,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTKirbyAnimInhaleStartGround_joint8[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimInhaleStartGround_joint10[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 10), 178, 178, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 5), 178, 178, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -268, -89, 120, -60, 120,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimInhaleStartGround_joint11[96] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, -4, 217, 4, 0, -11,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -587, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 221, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1062, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 10), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 3072,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -578, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 210, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 393, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1061, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1028, 219,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -497, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -617, 531, 663, 163, -87, 446,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 718, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 35, 774, 395, 694,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 930, 509, 1301, 537,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1054, 123, 594, -123, 1470, 169,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTKirbyAnimInhaleStartGround_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimInhaleStartGround_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimInhaleStartGround_joint15[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 312, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 15), 312,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 10), 178, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 5), 178, -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 5), 412,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 3), -93, -91, 30, 383,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 2), -279, 120,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTKirbyAnimInhaleStartGround_joint16[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -302,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -23, 0, 237, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -246, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -53, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 238, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 306, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -241, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -56, -2, -240, 0, 317, 10,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimInhaleStartGround_joint18[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimInhaleStartGround_joint20[48] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, 0, 1785, 0, -1704, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1761, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -1897, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -1718, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1703, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1485, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1744, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1642, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1900, -2, 1631, -11, -1456, 29,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimInhaleStartGround_joint21[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, 2, 302, 0, 233, 4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 54, 0, 247, -11, 306, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 54, 0, 240, -7, 313, 6,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTKirbyAnimInhaleStartGround_joint23[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTKirbyAnimInhaleStartGround_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 0, 176, 0, -99, 3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 152, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 294, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -110, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -98, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 127, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 137, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 33, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 291, -2, 22, -10, 148, 21,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTKirbyAnimInhaleStartGround_joint25[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 18), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 1800,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
