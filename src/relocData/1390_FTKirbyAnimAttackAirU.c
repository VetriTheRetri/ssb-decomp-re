/* AnimJoint data for relocData file 1390 (FTKirbyAnimAttackAirU) */
/* 1920 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimAttackAirU_joint1[62];
extern u16 dFTKirbyAnimAttackAirU_joint2[18];
extern u16 dFTKirbyAnimAttackAirU_joint3[22];
extern u16 dFTKirbyAnimAttackAirU_joint5[26];
extern u16 dFTKirbyAnimAttackAirU_joint6[114];
extern u16 dFTKirbyAnimAttackAirU_joint7[22];
extern u16 dFTKirbyAnimAttackAirU_joint9[26];
extern u16 dFTKirbyAnimAttackAirU_joint10[118];
extern u16 dFTKirbyAnimAttackAirU_joint11[24];
extern u16 dFTKirbyAnimAttackAirU_joint13[10];
extern u16 dFTKirbyAnimAttackAirU_joint14[88];
extern u16 dFTKirbyAnimAttackAirU_joint16[24];
extern u16 dFTKirbyAnimAttackAirU_joint18[120];
extern u16 dFTKirbyAnimAttackAirU_joint19[86];
extern u16 dFTKirbyAnimAttackAirU_joint21[30];
extern u16 dFTKirbyAnimAttackAirU_joint22[126];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimAttackAirU_joints[] = {
	(u32)dFTKirbyAnimAttackAirU_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimAttackAirU_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimAttackAirU_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimAttackAirU_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimAttackAirU_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimAttackAirU_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimAttackAirU_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimAttackAirU_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimAttackAirU_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimAttackAirU_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimAttackAirU_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimAttackAirU_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimAttackAirU_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimAttackAirU_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimAttackAirU_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimAttackAirU_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimAttackAirU_joint1[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 600, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), -357,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4505, 204, 2867, -511, 4505, 204,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4915, -117, 2048, 351, 4915, -117,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, -136, 4096, 341, 4096, -136,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 595,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 65), 16084,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 60), 4096, 4096, 4096,
	ftAnimBlock(0, 55),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 16084,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimAttackAirU_joint2[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 57), -804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 20), -268,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimAttackAirU_joint3[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 72), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimAttackAirU_joint5[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -120, -120, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 268, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 268, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 70), 178,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimAttackAirU_joint6[114] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -572, -93, -609, 117, -1891, 102,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -804, -1608,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -174, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -162, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -257, -93,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -804, -1608,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 56), -1606, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 69), -801, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -372, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -383, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -382, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 46), -354, 9,
	ftAnimBlock(0, 44),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1599, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1371, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -345, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -216, -22,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -804, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -804, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -262, -72, -1389, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -580, -61, -1789, -143,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -664, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -568, 95, -612, -31, -1895, -106,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimAttackAirU_joint7[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 39), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimAttackAirU_joint9[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 120, -120, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -268, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -268, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 70), -178,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimAttackAirU_joint10[118] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2177, 98, -2220, 122, -286, 107,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 4), 2412,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1782, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1767, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1862, -93,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 2412,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 56), 2, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 69), 2409, 2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1981, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1991, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1987, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 45), -1972, 8,
	ftAnimBlock(0, 44),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 8, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 237, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1962, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1824, -21,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2412, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2412, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1867, -74, 218, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2188, -60, -180, -141,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2272, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2180, -92, -2218, -29, -283, -102,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimAttackAirU_joint11[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 45), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimAttackAirU_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 80),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimAttackAirU_joint14[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 295, 13, 2914, 6, 237, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 2959, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 125, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 57, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -110, -109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -21, 341,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2937, -63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 2763, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 520, 312, 125, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 65), 121, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 607, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 609, 1, 2762, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 62), 609, -4, 2767, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 604, -15, 2765, 7, 125, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 333, -61, 2896, 30, 226, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 297, -36, 2916, 20, 233, 6,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimAttackAirU_joint16[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 45), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimAttackAirU_joint18[120] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -322, -48, -158, 28, -2864, 27,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2567, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 259, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -492, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -337, 169,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -249, -323,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2554, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2718, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 217, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -740, -342, -206, -295,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -962, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -374, -86, -2530, 103,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -386, -1, -2491, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -970, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 61), -947, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -387, 0, -2488, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 61), -374, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 60), -2527, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -935, 54, -2530, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -362, 75, -2848, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -366, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -190, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -322, 40, -158, 31, -2867, -18,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimAttackAirU_joint19[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -297, -9, 300, -2, 233, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 258, 13, 119, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -59, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 112, 109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 19, -340,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 279, 61, 121, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 453, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 66), 121, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -522, -311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -607, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -609, -1, 454, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 62), -609, 2, 449, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -606, 15, 447, -7, 123, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -333, 62, 320, -29, 226, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -297, 36, 300, -20, 233, 6,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimAttackAirU_joint21[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 42), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimAttackAirU_joint22[126] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1286, 48, -1766, 28, -1259, 35,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -955, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1349, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1116, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1270, -168,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1358, 323,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -949, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1113, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1391, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -867, 342, -1815, -295,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -645, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1983, -86, -922, 105,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1995, -1, -883, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -638, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 61), -661, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1996, 0, -879, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 61), -1983, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 60), -918, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -673, -54, -925, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1245, -75, -1240, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1975, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1798, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1286, -40, -1766, 31, -1259, -18,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
