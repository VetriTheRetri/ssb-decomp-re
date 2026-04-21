/* AnimJoint data for relocData file 1076 (FTSamusAnimFSmashMidLow) */
/* 3120 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimFSmashMidLow_joint1[36];
extern u16 dFTSamusAnimFSmashMidLow_joint2[30];
extern u16 dFTSamusAnimFSmashMidLow_joint4[84];
extern u16 dFTSamusAnimFSmashMidLow_joint5[164];
extern u16 dFTSamusAnimFSmashMidLow_joint6[64];
extern u16 dFTSamusAnimFSmashMidLow_joint7[40];
extern u16 dFTSamusAnimFSmashMidLow_joint8[10];
extern u16 dFTSamusAnimFSmashMidLow_joint11[36];
extern u16 dFTSamusAnimFSmashMidLow_joint12[198];
extern u16 dFTSamusAnimFSmashMidLow_joint13[78];
extern u16 dFTSamusAnimFSmashMidLow_joint14[32];
extern u16 dFTSamusAnimFSmashMidLow_joint16[30];
extern u16 dFTSamusAnimFSmashMidLow_joint17[142];
extern u16 dFTSamusAnimFSmashMidLow_joint19[72];
extern u16 dFTSamusAnimFSmashMidLow_joint21[134];
extern u16 dFTSamusAnimFSmashMidLow_joint22[148];
extern u16 dFTSamusAnimFSmashMidLow_joint24[64];
extern u16 dFTSamusAnimFSmashMidLow_joint25[148];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTSamusAnimFSmashMidLow_joints[] = {
	(u32)dFTSamusAnimFSmashMidLow_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimFSmashMidLow_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimFSmashMidLow_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimFSmashMidLow_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimFSmashMidLow_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimFSmashMidLow_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimFSmashMidLow_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimFSmashMidLow_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimFSmashMidLow_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimFSmashMidLow_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimFSmashMidLow_joint14, /* [13] joint 14 */
	(u32)dFTSamusAnimFSmashMidLow_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTSamusAnimFSmashMidLow_joint17, /* [16] joint 17 */
	(u32)dFTSamusAnimFSmashMidLow_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimFSmashMidLow_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTSamusAnimFSmashMidLow_joint22, /* [21] joint 22 */
	(u32)dFTSamusAnimFSmashMidLow_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTSamusAnimFSmashMidLow_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTSamusAnimFSmashMidLow_joint1[36] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 1189, -388, -642, 517,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1017, -343, 776, 2837,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1017, 776,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 15, -1505,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 1202, 172, -2, -230,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 1600, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimFSmashMidLow_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 11), -402,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 0, 100,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimFSmashMidLow_joint4[84] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 0, 43, -214, 42, 89, 32, -53, 50, -12, -40, -6, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 519, 129, 504, 179, 387, 74, 75, 259, -60, -96, 42, 97,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 519, 504, 387, 75, -60, 42,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -49, 49, 22,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -132, -51, -162,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 2, -19, -361, -6, 16, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 26, -85, -11, 53, 65, -27,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -42, -9, 12, 4, 3, -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimFSmashMidLow_joint5[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1132, 4, -1722, 5, 1377, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1040, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -741, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -1461, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1434, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1432, -14, 996, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -706, -108, -1463, 242, 943, 261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -957, -125, -947, 257, 1520, 288,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 1520, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -957, -947,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -957, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1246, -163,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1520,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1520, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -868, -16, 1217, -184,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1367, -114, 1286, 31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1433, -150,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1413, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1434, -35, 1290, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 988, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1240, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1015, 194, -1343, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -833, -16, -1469, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 897, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 916, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -852, -22, -1514, -45, 922, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1722, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -1148, 0, 1264, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1144, 4, 1311, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1138, 6, 1349, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1132, 6, -1722, 0, 1377, 27,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTSamusAnimFSmashMidLow_joint6[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -714, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -771, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1175, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1175, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1175, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1242, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -961, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -866, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -326, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -274, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -630, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -674, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -710, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimFSmashMidLow_joint7[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 701, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -312, 0, 0, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -312, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 18,
	ftAnimSetValT(FT_ANIM_ROTZ, 27), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -49, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 701, 113,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimFSmashMidLow_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 42),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimFSmashMidLow_joint11[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 0, -32, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -384, -96, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -384, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -57, 14, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimFSmashMidLow_joint12[198] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, 2, -128, -21, -215, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -253, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -31, -53, 72, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -82, -31, 194, 108,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 64, -11, 364, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -210, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -83, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 26, -192, -127, 299, 397, -719,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -320, -173, 515, 321, -1075, -736,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -320, 515, -1075,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -320, -36, 515, 99,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1075,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1075, 212,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -198, 288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -394, 192, 715, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 65, 250, 615, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 106, 15, 536, -53, -74, 113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 541, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 456, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 176, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 290, 117,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 643, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 541, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 590, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 472, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 619, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 618, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 288, -311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 593, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 640, 8, 404, -263,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 70, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -89, -266, 66, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -210, 49, -74, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -152, 59, -78, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 46, 21, -204, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -20, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -124, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 11, -128, -3, -215, -11,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTSamusAnimFSmashMidLow_joint13[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1106, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1132, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1158, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1183, 579,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 591,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -560, -394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -788, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1165, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1139, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1085, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1143, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1135, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1047, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -616, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTSamusAnimFSmashMidLow_joint14[32] = {
	ftAnimSetVal(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 425, -203, -64,
	ftAnimSetFlags(FT_ANIM_ROTY),
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 425, -203, -64,
	ftAnimSetFlags(0),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 83, 45,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -47, 21,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 3), 422,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 27), 425, -203, -64,
	ftAnimBlock(0, 1),
	ftAnimSetFlagsT(FT_ANIM_ROTY, 26),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimFSmashMidLow_joint16[30] = {
	ftAnimSetVal(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 423, 203, 64,
	ftAnimSetFlags(FT_ANIM_ROTY),
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 423, 203, 64,
	ftAnimSetFlags(0),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -4, -90, -48,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 415, 34, -25,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 27), 423, 203, 64,
	ftAnimBlock(0, 1),
	ftAnimSetFlagsT(FT_ANIM_ROTY, 26),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimFSmashMidLow_joint17[142] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, -4, -27, -4, -389, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -293, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 117, 25, -533, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 140, 20, -558, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 168, -45, -668, -147,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -304, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 66, -51, -76, 113, -898, -114,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 66, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -76, 0, -898, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -47, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -898, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -817, 49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 41, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 95, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -763, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -854, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -851, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -642, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 90, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 75, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -59, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -27, 1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -395, 11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 81, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 86, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 1, -27, 0, -389, 6,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTSamusAnimFSmashMidLow_joint19[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 398, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 389, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 469, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 567, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 947, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 947, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 947, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 820, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 559, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 426, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 779, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 913, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 900, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 487, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTSamusAnimFSmashMidLow_joint21[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, 1, -28, 3, -41, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 132, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 135, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -156, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -198, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -242, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -232, 114, 96, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -14, 106, 129, -2, -19, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 61, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -18, -1, -19, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -28, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -19, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 109, 113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 300, 93,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -56, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -45, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 394, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 211, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 52, -5, 95, -100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 34, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -178, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -158, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -44, 4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -52, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -75, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 17, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -26, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 0, -28, -2, -41, 2,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimFSmashMidLow_joint22[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -4, 160, 5, -49, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 368, 32, -368, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 264, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 303, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 179, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 391, 11, -411, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 366, -38, -541, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 62, 31, 313, -143, -596, 560,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 242, 89, 80, -116, 579, 588,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 242, 0, 80, 0, 579, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 80, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 180, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 579, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 579, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 166, 55, 335, -199,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 167, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 131, -43, 179, -140,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -233, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -12, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 156, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 154, 7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -246, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -54, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -10, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 221, 10,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 160, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 160, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 4, 160, 0, -49, 4,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTSamusAnimFSmashMidLow_joint24[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 924, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 968, -381,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 160, -404,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 160, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 161, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 160, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 551, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 718, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 929, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 617, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 564, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 448, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTSamusAnimFSmashMidLow_joint25[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 142, 0, 193, -6, -213, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -30, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -273, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -103, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -182, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -144, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -75, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -64, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 9, 11, -38, 17, -287, 286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -42, -25, -108, -34, 300, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -42, 0, -108, 0, 300, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 20, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -4, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 300, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -43, -324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 87, 49, -347, -265,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -671, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 114, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 11, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 206, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -657, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -258, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 114, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 141, 0,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 199, -5, -235, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 195, -3, -219, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, 0, 193, -1, -213, 5,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
