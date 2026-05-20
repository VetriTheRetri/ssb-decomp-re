/* AnimJoint data for relocData file 1519 (FTCaptainAnimRunBrake) */
/* 2864 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimRunBrake_joint1[78];
extern u16 dFTCaptainAnimRunBrake_joint2[56];
extern u16 dFTCaptainAnimRunBrake_joint4[98];
extern u16 dFTCaptainAnimRunBrake_joint5[94];
extern u16 dFTCaptainAnimRunBrake_joint6[46];
extern u16 dFTCaptainAnimRunBrake_joint7[26];
extern u16 dFTCaptainAnimRunBrake_joint8[18];
extern u16 dFTCaptainAnimRunBrake_joint10[44];
extern u16 dFTCaptainAnimRunBrake_joint11[100];
extern u16 dFTCaptainAnimRunBrake_joint12[56];
extern u16 dFTCaptainAnimRunBrake_joint13[22];
extern u16 dFTCaptainAnimRunBrake_joint14[10];
extern u16 dFTCaptainAnimRunBrake_joint16[36];
extern u16 dFTCaptainAnimRunBrake_joint17[130];
extern u16 dFTCaptainAnimRunBrake_joint19[70];
extern u16 dFTCaptainAnimRunBrake_joint21[144];
extern u16 dFTCaptainAnimRunBrake_joint22[144];
extern u16 dFTCaptainAnimRunBrake_joint24[58];
extern u16 dFTCaptainAnimRunBrake_joint25[152];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimRunBrake_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimRunBrake_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimRunBrake_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimRunBrake_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimRunBrake_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimRunBrake_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimRunBrake_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimRunBrake_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimRunBrake_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimRunBrake_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimRunBrake_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimRunBrake_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimRunBrake_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimRunBrake_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimRunBrake_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimRunBrake_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimRunBrake_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimRunBrake_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimRunBrake_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimRunBrake_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimRunBrake_joint1[78] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1253, 107, 0, 375,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 243, 413,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 1319, 2,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 5), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), 261, 305,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 1), 1064, -859,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), 414, 314,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 861, -47,
	ftAnimSetValT(FT_ANIM_TRAX, 20), 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 398, -224,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 1033, 68,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 13), 0, -206,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), 1600, 1033,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 1600, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimRunBrake_joint2[56] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 148, 9,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 28), 4, -76, 9,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 154, -360, -106,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -111, -177,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 360, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -85, -93, -529, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -278, 0, -395, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 0, 0, 107, 53, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 107, 0, 4, -76, 9,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimRunBrake_joint4[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 258, -1, -312, -63, 65, 0, 1, -45, -72, 1, 69, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 7), -106, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 5), 640, 66, -592, -28, -380, -85, 31, -136,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1509, 1, -1502, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 2), -602, 17, -42, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -510, -2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), -48, 13, -49, 16,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 20), -31,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 20), 0, 17, 47, 89,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1188, -72, -630, -1, -1086, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 434, -107, -583, 67, -272, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 189, 1, 0, 106, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 189, 0, 0, 0, -31, 47,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimRunBrake_joint5[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1469, 28, -1483, 9, 833, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1356, 38, -1325, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 818, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 914, 97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1020, -90,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1298, 104, -1360, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1148, 74, -1670, -151, 887, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 900, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1148, 0, -1664, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), -1194, -12, -1347, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 910, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 1073, 12,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1211, -21, -1388, -44,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1368, -1614,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1084, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1084,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1368, -1614, 1084,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimRunBrake_joint6[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -837, 91,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -764, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -822, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -861, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -868, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -691, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -701, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -914, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -910, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -797, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -797,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimRunBrake_joint7[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 38, -17, -4, -2, 6, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), -804, 85, -89, -3, -387, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2435, -89, -388,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2435, -89, -388,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimRunBrake_joint8[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 187, 0, -62, 0, 8, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimRunBrake_joint10[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -612, -34, 163, 46, -188, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 487, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -1225, -41, -1274, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1151, 56, -1324, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -381, 77, -459, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0, 0, -94, 0, 3,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimRunBrake_joint11[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 56, -31, 419, -49, 155, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 81, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 4, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 123, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 228, 121,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 676, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 136, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 47, -10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -32, -15, 711, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 110, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 70, 14, 807, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -101, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 799, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 554, 8,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 127, 15,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 12), 144,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 564, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 592, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -121, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -129, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, 144, 592,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimRunBrake_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -372, 117,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -254, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -344, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -687, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -687, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -626, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -738, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -809, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -867, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -907, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1024, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimRunBrake_joint13[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 379, 5, -20, 5, 98, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), 270, 275, 62,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 270, 275, 62,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimRunBrake_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimRunBrake_joint16[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 263, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 488, 7, 128, 1, -147, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 424, -26, 30, -6, -143, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTCaptainAnimRunBrake_joint17[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 148, -76, -95, 109, 37, -129,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -33, -58, 54, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -91, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -386, -325,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -921, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -45, 89, 1, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 303, 72, -53, -58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -853, 132,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -485, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 291, 0, -111, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 301, 40, -119, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 372, 7, 20, 107, -586, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 114, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -750, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 316, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 313, -3,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 19), 191,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 110, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 110, -35,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -787, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -812, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -714, 104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -472, 65,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 70, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 70, -472,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 70, -472,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimRunBrake_joint19[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 101, 312,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 413, 353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 807, 303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1021, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 957, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 638, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 379, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 608, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 680, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 683, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 739, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 914, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 800, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 646, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -100,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 445,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 445,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimRunBrake_joint21[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1553, 91, 1670, -34, 1436, -123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1397, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1725, 30, 1250, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1706, -157, 1378, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1410, -241, 1264, -56, 1428, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1540, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1222, -48, 1365, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1336, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1405, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1533, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1148, -47, 1591, 15, 1448, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1412, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1241, 65, 1425, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1533, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1280, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1314, -18,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1368, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1325, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1306, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1464, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1623, 78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1688, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1369, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1650, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1440, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1439, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1481, 21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1481, 1650, 1688,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1481, 1650, 1688,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimRunBrake_joint22[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1637, 7, 1450, -1, 525, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1624, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1395, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 882, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 956, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1622, 55, 920, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1736, 23, 1341, -40, 924, -107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1289, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1670, -118, 705, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1499, -118, 569, -117,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 409, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1432, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 937, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1332, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 884, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 549, 101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 642, 106,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 947, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1084, 281, 829, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1511, 291, 1278, 291,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1753, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 932, 59, 1413, 97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1483, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1498, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1782, 10,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 5), 1768,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1531, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, 1531,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1768, 1498, 1531,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimRunBrake_joint24[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1180, -28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 965, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 845, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1024, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1119, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1258, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1254, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 989, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 940, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 874, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 797, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 541, -73,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 541,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 541,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimRunBrake_joint25[152] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1528, -7, -1714, 17, -1439, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1636, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1504, 92, -1823, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1371, 80, -1934, -85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1915, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1342, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1479, -119, -1774, -112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1924, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1580, -186, -1806, 73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1590, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1852, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1799, 11, -1877, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1786, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1829, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1763, 118,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1556, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1553, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1608, 163, -1812, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1895, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1366, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1368, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1212, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1577, 2, -1875, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1562, -36, -2008, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1231, -29, -1604, -52, -2016, -5,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1447, -1973,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1949, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1888, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1888,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1447, -1973, -1888,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
