/* AnimJoint data for relocData file 1536 (FTCaptainAnimDamaged1) */
/* 2304 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimDamaged1_joint1[48];
extern u16 dFTCaptainAnimDamaged1_joint2[48];
extern u16 dFTCaptainAnimDamaged1_joint4[58];
extern u16 dFTCaptainAnimDamaged1_joint5[92];
extern u16 dFTCaptainAnimDamaged1_joint6[52];
extern u16 dFTCaptainAnimDamaged1_joint7[40];
extern u16 dFTCaptainAnimDamaged1_joint8[24];
extern u16 dFTCaptainAnimDamaged1_joint10[46];
extern u16 dFTCaptainAnimDamaged1_joint11[94];
extern u16 dFTCaptainAnimDamaged1_joint12[44];
extern u16 dFTCaptainAnimDamaged1_joint13[28];
extern u16 dFTCaptainAnimDamaged1_joint14[10];
extern u16 dFTCaptainAnimDamaged1_joint16[48];
extern u16 dFTCaptainAnimDamaged1_joint17[88];
extern u16 dFTCaptainAnimDamaged1_joint19[44];
extern u16 dFTCaptainAnimDamaged1_joint21[96];
extern u16 dFTCaptainAnimDamaged1_joint22[96];
extern u16 dFTCaptainAnimDamaged1_joint24[44];
extern u16 dFTCaptainAnimDamaged1_joint25[102];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimDamaged1_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimDamaged1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimDamaged1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimDamaged1_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamaged1_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimDamaged1_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimDamaged1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimDamaged1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimDamaged1_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamaged1_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimDamaged1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimDamaged1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimDamaged1_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimDamaged1_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamaged1_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimDamaged1_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamaged1_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamaged1_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimDamaged1_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamaged1_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimDamaged1_joint1[48] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 1600, 110,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1445, 19, -208, -1584,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), -35,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 103, 1607, -594,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 129, 4, -509,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 97, -68, 1449, -55, -734, 470,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 32, 1550, -108,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 1600, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimDamaged1_joint2[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 107, 0, 4, -76, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 249, -68, 78, -54, 3, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -206, -70, -56, -54, 123, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -330, 22, -373, 17, 258, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 107, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimDamaged1_joint4[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 189, 0, 0, 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 55, 36, 257, -120, -141, 33, 96, -313, -13, 35, -54, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 300, 27, -360, -30, 100, -3, -117, -47, -18, -28, 102, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 281, -12, 6, 39, -172, -10, 47, 102, -42, -11, 100, -47,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 189, 0, 0, 0, -31, 47,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimDamaged1_joint5[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 239, 219, 5, -239, -524, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 459, 103, -233, 24, -502, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 445, -23, 55, 119, -342, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 335, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 10, -359, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, 58, -329, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 123, -13, -314, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 310, -31, 50, -88, -268, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 177, -23, -263, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -163, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -280, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 176, 38, -342, 33, -321, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 253, 31, -214, 174, -452, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, -13, 5, 219, -524, -71,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimDamaged1_joint6[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, 77,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -720, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -695, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -876, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -770, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -648, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -703, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -814, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -803, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -789, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -854, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimDamaged1_joint7[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -515, -2, -333, 419, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 562, 371, 79, 9, -111, 179,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 424, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 419, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 227, -97, 16, -7, 24, -20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -515, -2, -333,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimDamaged1_joint8[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 360, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -402, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 30, 92,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimDamaged1_joint10[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 35, 0, -64, 0, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 105, 23, -193, -42, -213, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 105, -16, -193, 30, -213, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -16, 0, 30, 0, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimDamaged1_joint11[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -129, 133, 144, 173, 592, -570,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3, 75, 317, 63, 21, -255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 22, 18, 271, -58, 81, 88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -117, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, -38, 198, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 194, 4, 241, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 325, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 242, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 147, -129,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -210, -174,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -265, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -413, -93, 329, 3, -365, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -452, 151, 331, -46, -397, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -111, 161, 236, -93, 173, 494,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, -17, 144, -92, 592, 418,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimDamaged1_joint12[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, 74,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -823, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -837, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -886, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -887, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -727, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -643, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1069, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 45,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimDamaged1_joint13[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 388, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 2, 275, -9, 62, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 302, 169, 235,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 275, 62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimDamaged1_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimDamaged1_joint16[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 89, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 291, 178, 118, -190, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 534, -41, 217, -16, -107, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -71, -58, 40, -23, -297, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimDamaged1_joint17[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -77, 70, -76, -472, -242,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 64, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, -16, -715, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 37, 39, -400, 297,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 59, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 17, -52, -120, 157,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -208, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -84, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -90, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 27, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -97, 44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -255, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -327, 17, -107, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -220, 125, -293, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -76, 205, -25, 83, -440, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 267, 70, 95, -472, -31,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimDamaged1_joint19[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, -123,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 322, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 133, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 371, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 505, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -60,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimDamaged1_joint21[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1481, 24, -1566, -72, 1688, 101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1908, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1506, 50, -1638, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1583, 27, -1559, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1373, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1500, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2038, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2059, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2080, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2106, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1323, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1369, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1504, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1516, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1480, 119, -1557, -28, 2083, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, 73, -1574, -50, 1794, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1626, -63, -1658, 3, 1673, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1481, -145, -1566, 91, 1688, 15,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimDamaged1_joint22[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1448, 18, 1498, -63, -1685, -469,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1429, 147, 1434, -169, -2154, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1153, 105, 1159, -152, -1810, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1219, -97, 1129, -19, -1612, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1348, -144, 1119, 10, -1695, -110,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1312, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1632, -100, -1952, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1708, -65, -2031, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1788, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1388, 43, -2078, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1398, -42, -2102, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1795, 110, 1304, -9, -1941, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1568, 173, 1379, 97, -1688, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1448, 120, 1498, 118, -1685, 3,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimDamaged1_joint24[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, 124,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 666, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 642, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 523, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 543, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 749, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 782, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 738, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 628, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -86,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimDamaged1_joint25[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 161, -101, 365, -73, -279, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -182, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 60, -56, 291, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 48, 0, -57, -176,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 57, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, -16, -88, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -87, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -91, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -109, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 30, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 77, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -96, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -124, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -88, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 113, 85, -96, 70, -151, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 249, 42, 52, 191, -238, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 198, -43, 285, 156, -283, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, -37, 365, 79, -279, 3,
	ftAnimEnd(),
	0x0000, 0x0000,
};
