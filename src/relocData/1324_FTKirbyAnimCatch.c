/* AnimJoint data for relocData file 1324 (FTKirbyAnimCatch) */
/* 1920 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimCatch_joint1[44];
extern u16 dFTKirbyAnimCatch_joint2[24];
extern u16 dFTKirbyAnimCatch_joint3[34];
extern u16 dFTKirbyAnimCatch_joint5[38];
extern u16 dFTKirbyAnimCatch_joint6[140];
extern u16 dFTKirbyAnimCatch_joint7[16];
extern u16 dFTKirbyAnimCatch_joint9[26];
extern u16 dFTKirbyAnimCatch_joint10[114];
extern u16 dFTKirbyAnimCatch_joint11[24];
extern u16 dFTKirbyAnimCatch_joint13[10];
extern u16 dFTKirbyAnimCatch_joint14[90];
extern u16 dFTKirbyAnimCatch_joint16[46];
extern u16 dFTKirbyAnimCatch_joint18[94];
extern u16 dFTKirbyAnimCatch_joint19[82];
extern u16 dFTKirbyAnimCatch_joint21[14];
extern u16 dFTKirbyAnimCatch_joint22[96];
extern u16 dFTKirbyAnimCatch_joint23[22];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTKirbyAnimCatch_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimCatch_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimCatch_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimCatch_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimCatch_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimCatch_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimCatch_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimCatch_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimCatch_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimCatch_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimCatch_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimCatch_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimCatch_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimCatch_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimCatch_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimCatch_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimCatch_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTKirbyAnimCatch_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimCatch_joint1[44] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 6), 480,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 68, 4096, -273, 4096, 68,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4300, 3276, 4300,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 10), 600,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, -40, 4096, 163, 4096, -40,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimCatch_joint2[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -268, 0, 0, -312,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 600, 640,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), 720,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 600, -822,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimCatch_joint3[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 178, 69, -178, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 625, 59, -446, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 536, -89, -446, 63,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimCatch_joint5[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -268, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -180, 60, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -357, 26, 0, 143, 0, -47, 0, 143,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimCatch_joint6[140] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2412, -57, -217, -159, 0, 19,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 254, 451,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2470, -640, -377, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3694, -893, -651, -144,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -4464, -224,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -530, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 923, 463,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1181, 236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4705, -181, 1395, 170,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -5022, -268, 1654, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -563, -11,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -108, 132,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5365, -94, 2102, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5212, 111, 2046, -44,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5141, 34, 2014, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -5206, -78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2581, 304,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 15, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -127, -47,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -5330, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5580, -149, -122, -46, 2964, 317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5629, -49, -220, -98, 3216, 252,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimCatch_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimCatch_joint9[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -178, 178, 120, 60, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimCatch_joint10[114] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 40, 217, 19, 0, 17,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 314, 57,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 677, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -373, 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -137, 197,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 242, 227,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 364, 111,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 538, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 570, 171, 665, -40, 939, 195,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 279, -165,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 421, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 800, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 633, -150,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 357, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 131, -164,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -346, -352,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 333, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 409, -59, 276, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -752, -228, 214, -95, -16, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, -51, 217, 3, 0, 16,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimCatch_joint11[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -210,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimCatch_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimCatch_joint14[90] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, 78, -302, -62, 237, -124,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -376, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 55, 174, 112, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 325, 193, -202, -215,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 165, -74, -133, 89,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -312, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -275, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 115, -37, -60, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 332, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -193, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -311, -68, -276, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -395, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 391, -82, -276, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 167, -206, -36, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, -188, -302, 93, 233, 269,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimCatch_joint16[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 426, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 461, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 601, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 597, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 392, -298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimCatch_joint18[94] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, -35, 1785, 52, -1704, 35,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -2014, 59, 1925, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1669, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1500, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1443, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1685, -187,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1956, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1958, 57, 1773, -112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1709, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2046, -106,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2011, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1689, 334,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1718, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1778, 16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2156, -1, -1286, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2049, 119, -1482, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 131, 1785, 6, -1708, -225,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimCatch_joint19[82] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 25, 302, 14, 237, 31,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 332, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 325, -18, 552, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 304, -139, 588, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 425, 12, 46, -131, 781, 133,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 239, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 41, 46, 855, 69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 647, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 142, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 239, 1, 123, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 153, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 179, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 153, 61, 586, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 23, -130, 302, 149, 237, -349,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimCatch_joint21[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimCatch_joint22[96] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 20, 176, 5, -96, -1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 498, -11, 159, -50, 176, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 471, -181, 116, -155, 220, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 136, -261, -150, -145, 132, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -52, -128, -174, -58, 568, 334,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -172, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -266, 1, 801, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -171, 89, 1058, 185,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -62, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1282, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1380, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -183, 185, -299, -1, 969, -614,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 197, 246, -65, 238, 151, -532,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, 111, 176, 242, -96, -247,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTKirbyAnimCatch_joint23[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 600, 1680,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
