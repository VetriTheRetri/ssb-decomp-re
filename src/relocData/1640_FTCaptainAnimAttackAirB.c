/* AnimJoint data for relocData file 1640 (FTCaptainAnimAttackAirB) */
/* 3168 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimAttackAirB_joint1[46];
extern u16 dFTCaptainAnimAttackAirB_joint2[48];
extern u16 dFTCaptainAnimAttackAirB_joint4[90];
extern u16 dFTCaptainAnimAttackAirB_joint5[238];
extern u16 dFTCaptainAnimAttackAirB_joint6[80];
extern u16 dFTCaptainAnimAttackAirB_joint7[34];
extern u16 dFTCaptainAnimAttackAirB_joint10[54];
extern u16 dFTCaptainAnimAttackAirB_joint11[174];
extern u16 dFTCaptainAnimAttackAirB_joint12[80];
extern u16 dFTCaptainAnimAttackAirB_joint13[16];
extern u16 dFTCaptainAnimAttackAirB_joint14[10];
extern u16 dFTCaptainAnimAttackAirB_joint16[8];
extern u16 dFTCaptainAnimAttackAirB_joint17[154];
extern u16 dFTCaptainAnimAttackAirB_joint19[48];
extern u16 dFTCaptainAnimAttackAirB_joint21[116];
extern u16 dFTCaptainAnimAttackAirB_joint22[168];
extern u16 dFTCaptainAnimAttackAirB_joint24[56];
extern u16 dFTCaptainAnimAttackAirB_joint25[114];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimAttackAirB_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimAttackAirB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirB_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimAttackAirB_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirB_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirB_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimAttackAirB_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirB_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirB_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirB_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirB_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimAttackAirB_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirB_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimAttackAirB_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimAttackAirB_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirB_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimAttackAirB_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimAttackAirB_joint1[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY), 0, 1219,
	ftAnimSetValRate(FT_ANIM_TRAZ), -1, 633,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1437, 656, 160, 7,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1436, -83, -271, -305,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 29), 1219,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 29), -1, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 77, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 1679, 404,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 3216, 9,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimAttackAirB_joint2[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 240, 95, 49,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -490, 0, -55, -4, -57, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -60, 2, -55, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -486,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -380, 26, -24, 8, -11, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -302, 38, 0, 7, -18, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 240, 95, 49,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimAttackAirB_joint4[90] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 242, -182, -12, 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 649, 9, 30, 74, 103, 60, 4, -14, -108, 62, 142, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 308, -11, 356, 33, 426, 0, -12, -12, 22, 95, 49, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 628, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 270, 1, 424, -1, -12, 40, 22, -50, 49, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 227, -2, 99, -57, 73, 5, -83, -23, 20, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 239, 8, 377, -57, -205, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 290, 0, 183, -66, -217, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 242, -182, -12,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimAttackAirB_joint5[238] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 274, 90, -120, -5, -606, -154,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 687, 178,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -152, -41, -1144, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -198, -4, -1253, -97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1242, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 878, 193, -160, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1075, -241, -94, -407,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 273, 913, 392,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 394, -370, -974, -436, -842, 206, 7254, 185, 7293, 21, 5469, -25,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4128, -13, 4138, -11, 4138, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 334, -59, -966, 6, -829, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1119, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 275, -50, -805, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 263, 57, -714, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 9), 4096, 0, 4096, -1, 4096, -3,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 355, 142, -757, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -865, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1089, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1154, -109,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1530, -96,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 17), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -712, 119,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -631, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1181, 111, -1532, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1470, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1311, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1143, -225, -822, -131,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1010, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 859, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 806, -38, -1416, 106,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1047, 534,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1257, 222, -1101, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -970, 62, -1430, -592,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1852, 515, -1132, -166, -2285, -525,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2077, 149, -1304, -152, -2481, -126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1459, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2151, 26, -2538, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1923, -62, -2261, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1882, -40, -1487, -27, -2215, 46,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimAttackAirB_joint6[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1109, 29,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1080, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -884, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -773, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -765, 384,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 380,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -699, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -803, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -726, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -266, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -636, -308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -883, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -736, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -838, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1067, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1109, -41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimAttackAirB_joint7[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -97, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -417, -87, 315, 73, -304, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -441, -23, 433, -17, -462, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -670, 21, 122, -18, -479, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 191, -97, -323,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimAttackAirB_joint10[54] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, 113, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 596, 54, 667, 18, 615, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 1146, 13, 558, 4, 1285, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 889, -287, 759, 38, 998, -292,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 218, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -119, 5, -31, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -163, -4, 62, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -153, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 113, -38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimAttackAirB_joint11[174] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3083, -657, 249, 290, -2588, -588,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3730, -511,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3740, -265, 540, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3613, 10, 297, -245,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3828, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 50, -84, -4198, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 128, 93, -4144, 63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 438, 392,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3927, -102, -4072, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -4156, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4033, -246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4420, -195, 1022, 301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4425, -13, 1041, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4447, -27, 1056, 13, -4161, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -4564, 98, -4341, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 1145, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1143, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1024, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4467, 53, -4335, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -4477, 83, -4411, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4290, 181, -4204, 208,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3913, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -4345, -49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1280, 269,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1901, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3944, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -4141, -95,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1877, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1404, -69,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4389, -43, -4233, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -4643, -64, -4204, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4691, -48, 1358, -46, -4196, 8,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimAttackAirB_joint12[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -631, -194,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -825, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1138, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -768, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -808, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1008, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -950, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -409, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -385, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -511, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -419, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -548, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -709, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -948, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -955, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -537, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -581, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -629, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimAttackAirB_joint13[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, 167, 63,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 584, -174, -362,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -5, 167, 63,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimAttackAirB_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 39,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimAttackAirB_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 255, 0, 0,
	ftAnimBlock(0, 36),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTCaptainAnimAttackAirB_joint17[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, 4, 77, -11, -560, -217,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 262, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -163, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -796, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -644, 199,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 27, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 199, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 132, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -192, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -140, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -69, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -89, 5,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 132, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -92, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -83, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -42, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -119, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -89, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -224, -111, -131, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -356, 47, -74, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -50, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -327, -155,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -273, 152, -114, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 158, 112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 106, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -501, -112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -597, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 173, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 63, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 96, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 79, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, -4, 77, -2, -560, 36,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimAttackAirB_joint19[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 243, 515,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1117, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1225, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1036, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1036, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1041, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1017, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 699, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 752, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 343, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 243, -99,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimAttackAirB_joint21[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1611, 22, 1611, -24, 2121, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1471, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1661, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1779, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1769, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1689, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1484, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1617, -29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1666, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1734, 59,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1712, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1973, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1682, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1392, 51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1596, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1610, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1348, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1448, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1998, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2118, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1612, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1567, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1593, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1611, -17, 1611, 0, 2121, 3,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimAttackAirB_joint22[168] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1605, -103, 1293, 49, 782, -124,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -1608, -4, 1475, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 658, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 802, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1246, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1300, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1610, 1, 1520, 34, 1329, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1563, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1606, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1208, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1209, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1179, -81,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1545, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1428, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1652, -105,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2004, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1045, -172,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 788, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2051, -43, 1512, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2260, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1567, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 836, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1098, 17,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2297, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1729, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1548, -53, 1085, -89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1222, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 856, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 917, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 806, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1235, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1295, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1691, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1618, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1605, 13, 1293, -2, 782, -24,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimAttackAirB_joint24[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 873, 292,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1436, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1442, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1348, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1347, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1415, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1402, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1075, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1102, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 887, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 883, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 869, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 873, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimAttackAirB_joint25[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1631, -259, -1526, -11, 1456, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1682, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1680, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1371, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1359, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1535, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1544, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1527, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1684, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 1535, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1682, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1650, -4,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1557, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1806, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1894, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1757, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1526, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1465, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1663, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1540, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1644, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1692, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1663, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1638, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1631, -7, -1526, 14, 1456, -8,
	ftAnimEnd(),
};
