/* AnimJoint data for relocData file 1638 (FTCaptainAnimAttackAirN) */
/* 2544 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimAttackAirN_joint1[48];
extern u16 dFTCaptainAnimAttackAirN_joint2[10];
extern u16 dFTCaptainAnimAttackAirN_joint4[66];
extern u16 dFTCaptainAnimAttackAirN_joint5[164];
extern u16 dFTCaptainAnimAttackAirN_joint6[68];
extern u16 dFTCaptainAnimAttackAirN_joint7[10];
extern u16 dFTCaptainAnimAttackAirN_joint8[26];
extern u16 dFTCaptainAnimAttackAirN_joint10[8];
extern u16 dFTCaptainAnimAttackAirN_joint11[126];
extern u16 dFTCaptainAnimAttackAirN_joint12[70];
extern u16 dFTCaptainAnimAttackAirN_joint13[10];
extern u16 dFTCaptainAnimAttackAirN_joint14[10];
extern u16 dFTCaptainAnimAttackAirN_joint16[24];
extern u16 dFTCaptainAnimAttackAirN_joint17[156];
extern u16 dFTCaptainAnimAttackAirN_joint19[56];
extern u16 dFTCaptainAnimAttackAirN_joint21[84];
extern u16 dFTCaptainAnimAttackAirN_joint22[122];
extern u16 dFTCaptainAnimAttackAirN_joint24[58];
extern u16 dFTCaptainAnimAttackAirN_joint25[106];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimAttackAirN_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimAttackAirN_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirN_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirN_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimAttackAirN_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirN_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirN_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirN_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirN_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimAttackAirN_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirN_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirN_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirN_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirN_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimAttackAirN_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirN_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimAttackAirN_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimAttackAirN_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimAttackAirN_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimAttackAirN_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimAttackAirN_joint1[48] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), -1,
	ftAnimSetValRate(FT_ANIM_TRAY), 1225, 1554,
	ftAnimSetValBlock(FT_ANIM_TRAX), -55,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1578, 3, 0, 1,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), -4,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -11,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 2), -4,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 1300, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 2), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 26), -4, -9, 1300, -12,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 26), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 20), -55, -85, 1225, -30,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 20), -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimAttackAirN_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 240, 95, 49, 4, -76, 9,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimAttackAirN_joint4[66] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 242, -284, -182, 81, -12, 4,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -261, 1, 0, 152, 0, 29, 5, 87, -3, 69, -80, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 251, 0, 426, 0, 134, 0, 43, 0, 2, 0, 49, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 251, 0, 426, 0, 134, 0, 43, 0, 2, 0, 49, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -182, -39, -12, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 242, 0, -31, 47,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimAttackAirN_joint5[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 274, -266, -120, -35, -606, 346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8, -121, -156, 34, -259, -358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 32, 27, -51, -10, -1322, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 62, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -176, -102, -207, 764,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -256, -40, 205, 206,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -256, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 205, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 202, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 205, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -256, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -267, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 62, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), 61, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 64, -18, 204, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -80, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 351, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 403, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 555, -46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -264, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -268, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -104, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -186, 20,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 491, -90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 180, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -151, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 220, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -300, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -167, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -63, -227,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -527, -91,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 255, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 274, 19, -120, 46, -606, -79,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimAttackAirN_joint6[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1109, -181,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1291, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -962, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -841, 478,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 417,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -174, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -294, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1174, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1253, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1276, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1197, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1109, 88,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimAttackAirN_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 191, -97, -323, 424, 0, 0,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimAttackAirN_joint8[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, 46, 113, -98, -38, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 73, 67, -487, -276, -147, -29,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 73, -487, -147,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -153, 113, -38,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimAttackAirN_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimAttackAirN_joint11[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, -114, 249, 19, 628, -791,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 19, -44, 269, -117, -162, -909,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 45, 93, 15, -72, -1190, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 288, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 206, -118, -131, 691,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -190, -198, 192, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -189, 0, 289, 0, 195, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -189, 0, 195, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 192, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 23), -190, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -190, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -99, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 199, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 212, 45,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 288, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 256, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 296, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 472, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -69, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 124, 9,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 493, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 614, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, 9, 249, -6, 628, 14,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimAttackAirN_joint12[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -631, -464,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1095, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1131, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -945, 565,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 23), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -152, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -220, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -569, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -591, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -611, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, -19,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimAttackAirN_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -5, 167, 63, 424, 0, 0,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimAttackAirN_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 39,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimAttackAirN_joint16[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 255,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -191, -210, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 419, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 419, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 255, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 42), 255,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimAttackAirN_joint17[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 55, -137, 81, 31, -557, -98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 75, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -82, -62, -656, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -70, 20, -156, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -41, -19, -109, -795, -500, -509,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, -33, -1515, -700, -1174, -336,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -108, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1510, 4, -1173, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -1522, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1172, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -1175, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -108, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 21), -109, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, -134, -1514, 329, -1173, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -379, 68, -862, 467, -746, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 28, 168, -579, 154, -1085, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -42, -72, -553, 13, -994, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -116, -73, -551, 3, -912, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -268, 51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -148, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -678, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -692, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -606, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -212, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 24, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -78, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 74, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 55, 30, 81, 7, -557, 48,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimAttackAirN_joint19[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 237, 835,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1073, 410,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1058, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1331, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1346, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 1346, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1346, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1346, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1320, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 528, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 447, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 237, -117,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimAttackAirN_joint21[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, -41, -2, 0, 513, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 49), -2, 0, 513, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -36, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 19, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -74, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -65, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -116, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -111, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), -36, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -68, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 304, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -6, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -14, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 11, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 54, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 7, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -10, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 5, 16, -2, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 513,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimAttackAirN_joint22[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, -98, 289, -47, 2391, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -111, -18, 241, -102, 2621, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -50, 76, 83, -94, 2996, -243,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 98, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 53, -66, 2134, -418,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -48, -51, 2159, 12,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 2), -48,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 9), 2159,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 98,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 24), 98,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 23), -48,
	ftAnimBlock(0, 7),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 16), 2159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 98, 5, -48, 13, 2159, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 100, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 230, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2089, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2092, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 2341, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2368, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 2391, -1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 91, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 13, -26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 259, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, -27, 289, 29, 2391, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimAttackAirN_joint24[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 875, 275,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1150, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1147, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1359, -573,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -679,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 24), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 278, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 414, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 533, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 539, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 855, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 875, 19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimAttackAirN_joint25[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -58, -57, 7, -154, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -212, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -37, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -61, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -26, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -159, 19, -240, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 12, 85, -99, -30, -153, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -99, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 12, 0, -153, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 44), -154, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 12, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 12, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -99, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), -58, 1,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 12, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -19, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -6, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -47, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -72, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -33, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, 31, -57, 1, -154, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
