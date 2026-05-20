/* AnimJoint data for relocData file 1544 (FTCaptainAnimDamaged5) */
/* 2656 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimDamaged5_joint1[50];
extern u16 dFTCaptainAnimDamaged5_joint2[34];
extern u16 dFTCaptainAnimDamaged5_joint4[78];
extern u16 dFTCaptainAnimDamaged5_joint5[132];
extern u16 dFTCaptainAnimDamaged5_joint6[56];
extern u16 dFTCaptainAnimDamaged5_joint7[22];
extern u16 dFTCaptainAnimDamaged5_joint8[48];
extern u16 dFTCaptainAnimDamaged5_joint10[10];
extern u16 dFTCaptainAnimDamaged5_joint11[140];
extern u16 dFTCaptainAnimDamaged5_joint12[60];
extern u16 dFTCaptainAnimDamaged5_joint13[26];
extern u16 dFTCaptainAnimDamaged5_joint14[16];
extern u16 dFTCaptainAnimDamaged5_joint16[30];
extern u16 dFTCaptainAnimDamaged5_joint17[122];
extern u16 dFTCaptainAnimDamaged5_joint19[56];
extern u16 dFTCaptainAnimDamaged5_joint21[126];
extern u16 dFTCaptainAnimDamaged5_joint22[108];
extern u16 dFTCaptainAnimDamaged5_joint24[48];
extern u16 dFTCaptainAnimDamaged5_joint25[116];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimDamaged5_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimDamaged5_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimDamaged5_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimDamaged5_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamaged5_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimDamaged5_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimDamaged5_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimDamaged5_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimDamaged5_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamaged5_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimDamaged5_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimDamaged5_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimDamaged5_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimDamaged5_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamaged5_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimDamaged5_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamaged5_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamaged5_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimDamaged5_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamaged5_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimDamaged5_joint1[50] = {
	ftAnimSetValAfter(FT_ANIM_ROTY), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 1600, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 109, 226,
	ftAnimSetValT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 1798, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 678, 38,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 1376, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 994, 0, -3, 1360, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 438,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), 3457,
	ftAnimSetValBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, -55, 1249, -164,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimDamaged5_joint2[34] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 107, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 4, -76, 9,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 173, 209, 71,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 269, 480, 226,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 543, 510, 465,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -15, 107, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimDamaged5_joint4[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 189, 0, -31, 47,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 268, -76, 0, -82, -25, 213, 93, -194,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -41, -12, -31, 4, 48, 12, -24, -76,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -405, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), 4, 31, 12, -15, 8, -33, -107, 9,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -423, -184,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 671, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -182, -12,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -70, -12, -40, -40, 0, 155,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, -31, 47,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 242,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimDamaged5_joint5[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 239, -359, 5, 12, 2692, 509,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -119, -122, 18, -67, 3202, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6, 132, -129, -110, 3041, -199,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 151, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -172, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2803, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2763, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 2394, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 152, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 73, 15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -161, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -37, -7,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2404, 90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2714, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 102, 81, -56, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 631, 46, -173, -68,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2636, -90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2474, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 580, -108, -221, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 321, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -149, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2569, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2602, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 285, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 276, -8, -138, 10, 2590, -11,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimDamaged5_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, -320,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1117, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1102, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -979, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -968, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -791, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -814, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -602, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -301, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -491, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -654, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1032, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1061, -29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimDamaged5_joint7[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -515, -2, -333, 420, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), -97, -323, 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -3, -20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 26), 191,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimDamaged5_joint8[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 0, -36,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 11, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -110, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -33, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 54, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 82, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 97, -32,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 4), -153,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 113, -38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimDamaged5_joint10[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimDamaged5_joint11[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1479, 177, 1464, 144, -1016, -1253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1656, -298, 1608, 12, -2270, -801,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 881, -380, 1489, -91, -2619, -263,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2816, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1498, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 896, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 897, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 688, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2832, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -3031, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1501, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1283, -11,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 668, 67, -3028, 99,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1112, 202, -2503, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1278, 81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1621, 43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1227, 94, -2428, 142,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1369, 63, -2063, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1532, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1469, -82,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1427, 162, -1803, 431,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1695, 192, 1370, -34, -1200, 439,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1812, 40, 1399, -3, -924, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1775, -36, 1363, -36, -938, -13,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimDamaged5_joint12[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, 672,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -351, 338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -348, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -607, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -508, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -461, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -494, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -441, 236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -98, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -519, -356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -810, -282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1221, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -925, 259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -703, 221,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimDamaged5_joint13[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 270, 275, 62, 388, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 269, -9, 274, -3, 62, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -5, 167, 63,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimDamaged5_joint14[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 1538, -1003, 119, 85, 49, 39,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimDamaged5_joint16[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 2, 7, 15, 6, -258, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 141, 9, 127, 0, -366, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 0, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 255, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTCaptainAnimDamaged5_joint17[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -388, 70, -213, -472, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -197, 77, -143, -3, -757, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 345, 338, 63, 11, -397, 331,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 498, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -120, -97, -94, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -130, -15, -51, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -222, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 37, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 496, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 534, -15,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -235, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -314, -28,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 50, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 518, -73, 75, 44, -344, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 386, -217, 139, -104, -527, -272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 84, -230, -133, -139, -889, -192,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 19, 49, -680, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -140, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 38, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 86, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 57, 38, 81, -5, -534, 146,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimDamaged5_joint19[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, 719,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1165, 366,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1179, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 885, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 855, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1033, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1005, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 965, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1148, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1282, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1133, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 483, -325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 192, -290,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimDamaged5_joint21[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -126, 375, -42, 13, 80, -121,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 39, 109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 89, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 248, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -270, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -119, 110, 177, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -50, 70, 368, 96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -118, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 370, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 73, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 61, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -10, 16,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -129, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -112, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 62, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 18, -7,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -103, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1, 55, 10, -102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -337, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 8, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 150, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -223, 241,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 465, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 67, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 25, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8, -17, -3, 7, 549, 83,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimDamaged5_joint22[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 160, -113, 110, 6, -76, -172,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 9, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 455, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -311, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -147, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -111, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 12, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 308, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -117, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -424, -69,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 292, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 103, -116,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 487, 16, -499, -99,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 304, -114, -782, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -15, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -63, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 201, -47, -817, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 276, 22, -863, 38,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -36, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -15, 21, 288, 12, -829, 33,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimDamaged5_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, -537,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 443, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 435, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 761, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 838, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1255, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1113, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 950, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 868, -82,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimDamaged5_joint25[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 161, -177, 365, -487, -279, 390,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -75, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -122, -247, 110, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -128, 42, 100, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 37, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 54, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 16, 64, 174, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 182, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -56, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 39, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -54, -6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 183, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 178, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -71, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -284, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -305, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -78, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 177, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -215, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -38, 53, -230, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 19, -16, -157, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, -24, -58, -3, -134, 23,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
