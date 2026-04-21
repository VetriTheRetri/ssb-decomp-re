/* AnimJoint data for relocData file 1250 (FTLinkAnimUpSpecialAir) */
/* 3984 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimUpSpecialAir_joint1[66];
extern u16 dFTLinkAnimUpSpecialAir_joint2[118];
extern u16 dFTLinkAnimUpSpecialAir_joint4[70];
extern u16 dFTLinkAnimUpSpecialAir_joint5[250];
extern u16 dFTLinkAnimUpSpecialAir_joint6[88];
extern u16 dFTLinkAnimUpSpecialAir_joint9[54];
extern u16 dFTLinkAnimUpSpecialAir_joint10[146];
extern u16 dFTLinkAnimUpSpecialAir_joint11[64];
extern u16 dFTLinkAnimUpSpecialAir_joint12[26];
extern u16 dFTLinkAnimUpSpecialAir_joint13[26];
extern u16 dFTLinkAnimUpSpecialAir_joint16[26];
extern u16 dFTLinkAnimUpSpecialAir_joint17[56];
extern u16 dFTLinkAnimUpSpecialAir_joint18[56];
extern u16 dFTLinkAnimUpSpecialAir_joint20[100];
extern u16 dFTLinkAnimUpSpecialAir_joint21[162];
extern u16 dFTLinkAnimUpSpecialAir_joint23[64];
extern u16 dFTLinkAnimUpSpecialAir_joint25[130];
extern u16 dFTLinkAnimUpSpecialAir_joint26[194];
extern u16 dFTLinkAnimUpSpecialAir_joint28[72];
extern u16 dFTLinkAnimUpSpecialAir_joint29[166];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimUpSpecialAir_joints[] = {
	(u32)dFTLinkAnimUpSpecialAir_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimUpSpecialAir_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimUpSpecialAir_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimUpSpecialAir_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimUpSpecialAir_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimUpSpecialAir_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimUpSpecialAir_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimUpSpecialAir_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimUpSpecialAir_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimUpSpecialAir_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimUpSpecialAir_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimUpSpecialAir_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimUpSpecialAir_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimUpSpecialAir_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimUpSpecialAir_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimUpSpecialAir_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimUpSpecialAir_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimUpSpecialAir_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimUpSpecialAir_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	(u32)dFTLinkAnimUpSpecialAir_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimUpSpecialAir_joint1[66] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 16084, 0, 744, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 16084, -268,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 37, 49, 680, -85, -240, -320,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 37, -9, 680, 57, -240, 466,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 31, 0, 716, 3, 51, 31,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -622, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 52), 0, -149, 31, 0, 716, 3, 51, 31,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -33, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), 0, 0, 744, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimUpSpecialAir_joint2[118] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 32, 274,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 58,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 40, 1, 276, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 3), 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 40, -5, 276, -87, -24, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -24, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 14, 0, -158, -8,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 52), 14, 0, -158, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -37, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 52), -37, 0,
	ftAnimBlock(0, 49),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 19, 0, -268, -10,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -44, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 19, 0, -268, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -44, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 14, 0, -158, 18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -37, 3,
	ftAnimBlock(0, 7),
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 20), 32, 274,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 20), 58,
	ftAnimBlock(0, 17),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimUpSpecialAir_joint4[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 315, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 695, 63, 601, 72, 115, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 695, -68, 601, -146, 115, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 423, -345, 15, -503, -111, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4, -7, -405, -7, 25, 2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 52), 4, 0, -405, 0, 25, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 11, 0, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 670, 7, -442, 14, -625, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 315, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimUpSpecialAir_joint5[250] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1300, -143, 1869, 44, -1261, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 2158, 316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1156, -131, -1285, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1036, -403, -1476, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 349, -251, 2547, 250, -1002, 109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 2513, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 532, 99, -1257, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 349, -404, -1002, 524,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -260, -362, -206, 632,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -373, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2501, -7, 263, 242,
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), 2504, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 278, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -233, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -369, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 22), 216, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 266, 49, -289, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 18), 130, -90, -252, 87,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2499, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 2540, 1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 37, -90, -163, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), -389, 25, 328, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -351, 54, 322, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 273, 224, -154, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2537, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 2768, 43,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 478, 167, -331, -142,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 977, 90, -801, -105,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2806, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 2729, -8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1073, 95, -916, -117,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 1440, 33, -1435, -48,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2717, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 2494, -27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1483, 65, -1492, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1829, 417, -1860, -424,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2406, 422, 2496, 37, -2442, -424,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 2899, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2807, 35, -2821, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2834, 24, -2834, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 2906, 4, -2868, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2926, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 2953, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2908, 2, 2956, 3, -2870, -2,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimUpSpecialAir_joint6[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -744, -62,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -670, 288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -230, 331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -230, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -383, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -42, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -34, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -366, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -390, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -740, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -719, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -677, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -703, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -760, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -808, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -814, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -778, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -753, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -744, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimUpSpecialAir_joint9[54] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 278, 266, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -4, -47, -49, -52, 534, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -4, 9, -49, 292, 534, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 45, 0, 1413, 27, 998, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 52), 45, 0, 1413, 0, 998, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 37, 0, 1406, 0, 871, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 278, 266, 193,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimUpSpecialAir_joint10[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 488, 28, 60, 35, 163, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 290, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 633, 267, 249, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1051, 380, 139, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 297, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1394, 140, 422, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 290, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1332, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1051, -597, 139, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 137, -642, 230, -93, 261, -207,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -240, -5, 90, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -275, -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -296, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -244, -4, 78, -12, -315, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 61), -194, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 67), -214, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 52), 117, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 128, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 148, -15,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -186, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 196, 51,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -214, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 161, 3,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 246, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 487, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 133, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 61, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 488, 0, 60, 0, 163, 1,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimUpSpecialAir_joint11[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -616, 21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -302, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -302, -458,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -924, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -581, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -369, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 38), -362, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -332, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -601, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -608, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -615, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimUpSpecialAir_joint12[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, -209, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, -209, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 94), 0, -209, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTLinkAnimUpSpecialAir_joint13[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1114, -804, 494,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1427, 52, -882, -13, 280, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1427, -3, -882, 0, 280, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 94), 1114, -804, 494,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTLinkAnimUpSpecialAir_joint16[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1508, 346, -843,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1959, 75, -239, -97, -501, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1959, -4, -239, 6, -501, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 94), 1508, 346, -843,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimUpSpecialAir_joint17[56] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -274, -45, -370, -34, 216, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -274, 67, -370, 113, 216, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 61, 6, 197, 9, 54, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 38), 0, 0, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 61, 8, 197, 13, 54, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 295, -1, 475, -9, 378, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, -163, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimUpSpecialAir_joint18[56] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -199, -33, -191, 1, 272, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -199, 40, -191, 86, 272, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 5, 4, 242, 4, -44, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 38), 0, 0, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 5, 0, 242, 7, -44, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -30, 0, 242, -11, -44, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, -199, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimUpSpecialAir_joint20[100] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 97, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 236, -14, -380, 49, -51, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -15, -5, 393, 128, -72, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 199, 474, -75,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -15, 393, -72,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 199, 474, -75,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -15, 393, -72,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 199, 474, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -15, -7, 393, -11, -72, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), -6, 2, 164, -12, -30, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 71, 14, -24, -22, 38, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 260, 11, -266, -29, 7, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 249, -11, -467, 31, -25, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 56, -7, 299, 23, 38, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 97, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimUpSpecialAir_joint21[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 30, -103, 139, -361, -782, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -297, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -56, 49, -390, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 27, 52, -356, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -8, 35, -338, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -133, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -34, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 92, 4, -319, -48, -351, -298,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -14, -15, -451, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -632, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -642, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 44), -558, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -29, -14, -465, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), 21, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 34), -398, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -398, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -235, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 23, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -98, -8,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -799, 18,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -215, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -25, 5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -105, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 30, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -780, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -826, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -845, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -787, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -18, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 137, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 30, 0, 139, 2, -782, 4,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimUpSpecialAir_joint23[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1205, -12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 809, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 609, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 484, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 910, 358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1202, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1214, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 44), 1199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 811, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 747, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 460, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 517, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1202, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1205, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimUpSpecialAir_joint25[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2081, 725, -1425, 14, 1678, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1283, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1466, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2807, 543,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3169, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3215, 782,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4734, 812,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4840, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4919, 161, -1296, -114,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 5489, 176, -1735, -117,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1497, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 1500, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 5515, 24, -1747, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 33), 5440, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 42), -1750, -1,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1500, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 58), 1644, 4,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5439, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 32), 5535, 7,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1751, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 47), -1425, 0,
	ftAnimBlock(0, 23),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5541, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 5292, 11,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1649, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1678, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5298, 6, -1425, 0, 1678, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimUpSpecialAir_joint26[194] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 301, -63, 318, 0, -270, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -329, -90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 106, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -651, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -634, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -514, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -412, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -150, 166, 44, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -79, 33, -102, -77, -284, 120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -262, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -104, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -109, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 54), -92, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -252, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 45), -242, -10,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -107, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 42), -74, -4,
	ftAnimBlock(0, 39),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -253, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -287, 34,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -79, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -516, -132,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -92, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 296, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -637, -101,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -540, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -260, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -552, -101,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 292, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 444, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -463, 64, -649, -83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -76, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -492, 41,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 445, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 320, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -27, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 299, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -452, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -272, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 301, 2, 318, -1, -270, 2,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimUpSpecialAir_joint28[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 845, 18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 778, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 668, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 598, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 718, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 552, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 539, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 40), 353, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 369, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 552, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 597, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 719, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 639, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 771, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 801, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 846, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimUpSpecialAir_joint29[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -647, -371, -89, 26, 252, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 152, -114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), -289, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1318, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1271, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -964, 598,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -74, 468,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -27, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -558, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -530, 21, 29, -65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -5, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -516, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 38), -576, 11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -10, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 67), -33, -4,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -307, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -60, 47,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -565, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -530, 11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -13, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 273, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -511, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 16, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 306, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 761, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 708, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 175, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 148, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -310, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 272, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 253, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -38, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -89, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -385, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -644, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -647, -2, -89, 0, 252, 0,
	ftAnimEnd(),
};
