/* AnimJoint data for relocData file 1619 (FTCaptainAnimJab1) */
/* 2656 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimJab1_joint1[78];
extern u16 dFTCaptainAnimJab1_joint2[50];
extern u16 dFTCaptainAnimJab1_joint4[62];
extern u16 dFTCaptainAnimJab1_joint5[158];
extern u16 dFTCaptainAnimJab1_joint6[72];
extern u16 dFTCaptainAnimJab1_joint7[26];
extern u16 dFTCaptainAnimJab1_joint8[40];
extern u16 dFTCaptainAnimJab1_joint10[34];
extern u16 dFTCaptainAnimJab1_joint11[128];
extern u16 dFTCaptainAnimJab1_joint12[56];
extern u16 dFTCaptainAnimJab1_joint13[34];
extern u16 dFTCaptainAnimJab1_joint14[10];
extern u16 dFTCaptainAnimJab1_joint16[14];
extern u16 dFTCaptainAnimJab1_joint17[106];
extern u16 dFTCaptainAnimJab1_joint19[56];
extern u16 dFTCaptainAnimJab1_joint21[94];
extern u16 dFTCaptainAnimJab1_joint22[106];
extern u16 dFTCaptainAnimJab1_joint24[48];
extern u16 dFTCaptainAnimJab1_joint25[106];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimJab1_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimJab1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimJab1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimJab1_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimJab1_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimJab1_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimJab1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimJab1_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimJab1_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimJab1_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimJab1_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimJab1_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimJab1_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimJab1_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimJab1_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimJab1_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimJab1_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimJab1_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimJab1_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimJab1_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimJab1_joint1[78] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1541, -238, 0, 20,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 319,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1475, -273, 81, 363,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), 1,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -870, 813,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1380, -712, 190, 849,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), 3,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -27, -15,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1380, 10, 190, -1,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 3), 3,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 259, -297,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1575, 292, 81, -229,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 3), 1,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1600, 18, 18, -59,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 3), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 1600, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 8), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimJab1_joint2[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 107, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 271, -101, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -296, -201, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -332, -8, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -332, 5, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -296, 29, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -153, 36, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 107, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimJab1_joint4[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 189, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 202, 25, 180, -7, 73, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 292, 67, -28, -96, -11, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 404, 27, -109, -20, -43, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 404, -18, -109, 13, -43, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 292, -35, -28, 17, -11, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 189, -9, -4, 2, -1, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 189, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimJab1_joint5[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2977, -32, 5, 171, 2692, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3009, -8, 177, -50, 2877, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2994, -137, -95, -200, 3115, 438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3284, -440, -222, 21, 3755, 332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3874, -437, -51, -190, 3780, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -4212, 39, 3843, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -604, -441,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -935, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4080, 96, -1100, -155, 3718, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -4055, -60, 3748, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1246, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1039, 77,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4140, -63, 3886, 110,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -4219, -57, 4021, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1023, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1093, -72,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4297, -57, 4121, 71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 4207, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -4450, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1193, -82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1529, -52,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4236, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 4299, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4494, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -4579, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1575, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1604, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4585, -6, -1614, -10, 4301, 2,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimJab1_joint6[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, -76,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -874, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1069, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1026, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1195, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -587, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -417, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -219, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -358, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -592, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -602, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -721, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -985, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -976, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -931, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -804, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimJab1_joint7[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2435, -89, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 3018, 53, -77, 1, 31, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 3018, -32, -77, 0, 31, -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 2435, -89, -388,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimJab1_joint8[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 360, -108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -92, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 30, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 17), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimJab1_joint10[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -199, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 271, 157,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 271,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 271, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 97, -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimJab1_joint11[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -129, -127, 144, -51, 592, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 44, 24, 627, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -256, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -352, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -151, 117, 140, 62, 638, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -117, 43, 169, 58, 224, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -65, 83, 258, 74, 257, 93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 180, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 50, 58, 412, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 51, 1, 418, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 52, -42, 435, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -85, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 335, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 465, 46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -105, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -104, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 177, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 146, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 510, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 595, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -116, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -125, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, -3, 144, -2, 592, -3,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimJab1_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, 98,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -926, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -867, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1125, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1279, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1380, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1339, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1290, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1211, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1107, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1092, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1036, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimJab1_joint13[34] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 272, 4, 243, -57, 42, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 287, 1, 44, -22, -79, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 287, 0, 44, 12, -79, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 270, 275, 62,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimJab1_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 22),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimJab1_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 18, 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 22), 0, 18, 0, -3,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimJab1_joint17[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, 18, 70, 62, -472, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 134, -83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -567, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 209, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 130, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 52, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -34, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -195, -102, -531, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -239, -17, -586, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -161, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -585, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -548, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 47, 0, -490, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -464, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 180, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -141, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 67, 6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -466, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -472, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 186, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 190, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 0, 70, 3, -472, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimJab1_joint19[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 497, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 615, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 722, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 882, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 884, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 884, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 809, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 699, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 475, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 464, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 446, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimJab1_joint21[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -126, -9, -42, 47, 80, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 82, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -136, 16, 5, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -93, 19, 98, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -108, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -164, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -149, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -79, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -175, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -172, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -127, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -147, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 39, 11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -156, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -46, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 50, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 79, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, 1, -42, 4, 80, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimJab1_joint22[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 160, 74, 110, -8, -76, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -41, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 150, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 235, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 308, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -112, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -126, -109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -326, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -204, -48, 116, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -205, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 152, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -327, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -200, 44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -196, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 56, 23,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 155, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 112, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -161, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -78, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 79, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 157, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 2, 110, -2, -76, 1,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimJab1_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 648, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 688, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 869, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 872, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 832, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 768, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 556, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 554, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 542, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimJab1_joint25[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1447, 0, 1243, -37, 1328, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1289, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1423, 23, 1313, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1390, 75, 1451, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1451, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1273, 58, 1352, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1372, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1272, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1441, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1456, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1430, -27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1403, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1349, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1408, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1248, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1346, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1329, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1442, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1446, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1447, 0, 1243, -5, 1328, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
