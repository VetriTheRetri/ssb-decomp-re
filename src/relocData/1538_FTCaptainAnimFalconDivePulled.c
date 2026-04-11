/* AnimJoint data for relocData file 1538 (FTCaptainAnimFalconDivePulled) */
/* 4704 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimFalconDivePulled_joint1[132];
extern u16 dFTCaptainAnimFalconDivePulled_joint2[204];
extern u16 dFTCaptainAnimFalconDivePulled_joint4[156];
extern u16 dFTCaptainAnimFalconDivePulled_joint5[218];
extern u16 dFTCaptainAnimFalconDivePulled_joint6[92];
extern u16 dFTCaptainAnimFalconDivePulled_joint7[56];
extern u16 dFTCaptainAnimFalconDivePulled_joint8[98];
extern u16 dFTCaptainAnimFalconDivePulled_joint10[24];
extern u16 dFTCaptainAnimFalconDivePulled_joint11[198];
extern u16 dFTCaptainAnimFalconDivePulled_joint12[72];
extern u16 dFTCaptainAnimFalconDivePulled_joint13[40];
extern u16 dFTCaptainAnimFalconDivePulled_joint14[10];
extern u16 dFTCaptainAnimFalconDivePulled_joint16[90];
extern u16 dFTCaptainAnimFalconDivePulled_joint17[170];
extern u16 dFTCaptainAnimFalconDivePulled_joint19[80];
extern u16 dFTCaptainAnimFalconDivePulled_joint21[198];
extern u16 dFTCaptainAnimFalconDivePulled_joint22[182];
extern u16 dFTCaptainAnimFalconDivePulled_joint24[282];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimFalconDivePulled_joints[] = {
	(u32)dFTCaptainAnimFalconDivePulled_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimFalconDivePulled_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimFalconDivePulled_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimFalconDivePulled_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimFalconDivePulled_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimFalconDivePulled_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimFalconDivePulled_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimFalconDivePulled_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimFalconDivePulled_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimFalconDivePulled_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimFalconDivePulled_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimFalconDivePulled_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimFalconDivePulled_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimFalconDivePulled_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimFalconDivePulled_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimFalconDivePulled_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimFalconDivePulled_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimFalconDivePulled_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF043B, /* [24] END */
};

/* Joint 1 */
u16 dFTCaptainAnimFalconDivePulled_joint1[132] = {
	ftAnimSetValAfter(FT_ANIM_ROTY), 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 1600, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -72, 0, 0, 1426, 538, -485, -1277,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), -26,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), -638, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -216, -22, 0, 54, 1802, 888,
	ftAnimSetValRateT(FT_ANIM_TRAX, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 1), -236, -6, 1880, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY, 8), -273, -2, 1849, -81,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 9), -639, 131,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAX, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 0, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -254, 18,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1753, -734,
	ftAnimSetValRateT(FT_ANIM_TRAX, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1671, -339, -602, 362,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1630, -101, -506, 201,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1622, -16, -514, 369,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 11), 29, 88,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 13), 0, 1600,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 0, 9,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 4), 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimFalconDivePulled_joint2[204] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -76, 11, 9, 4,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 107, 0, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 1), -239, -160, 91, 3,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), -127, -193,
	ftAnimSetValRateT(FT_ANIM_TRAX, 9), 6, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 344, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 1), 0, 0, -214, -83, 0, 35, 91, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 2), -42, -25, -480, -6, 10, 0, -82, -592,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), -294, -307,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -175, 3, -477, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAZ, 1), 0, -2, -137, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAZ, 4), 0, 0, -140, -42,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -448, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 0, 50,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 6, 3, -424, -564, -168, 218,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 7, 3, -567, -269, -34, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 8, 5, -522, 490, -61, -470,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 16), 107,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 8, 5, -448, 580, -148, -785,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 9, 7, -382, 190, -250, -392,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), -398, -30,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 4), 223,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 14), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 11, 9, -325, 8,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 13, 6, -246, 623,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -404, -11, -24, 1233,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), 13, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), 13, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 12, -7, -403, 219, 200, 957,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 11, -8, -350, 339, 206, -271,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 7), 4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -279, 323, 100, -298,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -76, 11, 9, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimFalconDivePulled_joint4[156] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 189, 0, 0, 26,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -31, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 242, -270, -38, 16, 91, 52,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -24, 82,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -16, 44, -646,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -352, -34, 32, 89, 104, 61, -4, -266, -20, 61, -113, -529,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 222, 9, 270, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -409, 51,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -96, -2, -109,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 221, -4, 256, -4,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -65, -10, -144,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -379, 24,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -6, 5, 68,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 185, -24, 236, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 0, 155,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 0, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 169, -88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 443, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 65, -10,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 16), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, -14, 94,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 10, 140,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), -112,
	ftAnimSetValT(FT_ANIM_TRAY, 2), -111,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 461, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -13, -138, 86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 411, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 189, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, -31, 47,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimFalconDivePulled_joint5[218] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 239, 137, 5, 192, -524, 273,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 462, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 198, -147, -250, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -289, -259, -102, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -155, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 477, 15, -319, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 284, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -277, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -235, 22, -180, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -94, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -232, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -114, 51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -33, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 263, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 205, -80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 47, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -59, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -16, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, -8, -67, -90, 230, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 37, -83, 159, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -198, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -242, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -134, -187, 258, 76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 333, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -337, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -418, -27, 44, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -135, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -393, 83, 274, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -252, 112, 82, -181,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -145, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -154, 5, -88, -131,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -63, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -181, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -127, 34, -262, -70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -376, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -76, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 50, 121, -105, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 224, 35, -70, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -443, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -517, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 239, 7, -18, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, 0, 5, 24, -524, -6,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimFalconDivePulled_joint6[92] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, -229,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1027, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1079, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1113, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1178, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1234, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1233, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1189, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1159, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1056, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -879, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -773, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -812, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -874, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -939, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1088, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1040, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -962, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -946, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -843, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimFalconDivePulled_joint7[56] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 2701, -2, -333, 419, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3432, 71, 136, 27, -158, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 424, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 419, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 3058, -35, 136, -8, -158, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 2844, -20, 0, -6, 0, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 2639, -34, 0, 0, 0, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 2701, -2, -333,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimFalconDivePulled_joint8[98] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 360, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 195, 0, -21, 0, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 391, -217, -42, -81, -359, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -101, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -178, -146, -36, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -324, 0, 99, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 63, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 121, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -88, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -36, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 445, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -115, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 378, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 6, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 251, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -24, -53, -15, 9,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -216, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimFalconDivePulled_joint10[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -337, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -80, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 13), 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimFalconDivePulled_joint11[198] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1479, -444, 1464, -388, 2200, -1336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1034, -121, 1076, -227, 863, -564,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1235, 390, 1009, 12, 1070, 428,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1815, 367, 1100, 177, 1720, 492,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1969, 71, 1365, 186, 2056, 219,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1481, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1958, -9, 2158, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1951, -5, 2183, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1971, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2194, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1481, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1473, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1994, 13, 1483, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1398, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1899, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2196, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2281, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1369, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1473, 76,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1939, 54, 2250, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2009, -58, 1551, -37, 2178, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1822, -101, 1397, -123, 2208, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1806, -19, 1305, -116, 2101, -157,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1076, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1783, -65, 1893, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1676, -56, 1703, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1671, 4, 1118, 66, 1723, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1403, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2163, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1666, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1607, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1494, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1440, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1457, 12, 2194, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1479, -15, 1464, 6, 2200, 6,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimFalconDivePulled_joint12[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, 176,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -847, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -936, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1134, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1168, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1080, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1034, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -918, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -911, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -877, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1006, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1091, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1092, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1227, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1202, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1057, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimFalconDivePulled_joint13[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 281, 2, 8, -53, -82, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 281, 0, 8, 2, -82, 2,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 25), 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 42, 6, -42, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 141, 18, 44, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 275, 62,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimFalconDivePulled_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimFalconDivePulled_joint16[90] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, -4, 0, -3,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -11, 0, -3, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 63, -40, -7, 135, -134, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -117, -87, 394, -1, -426, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -529, 10, -17, -50, -91, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -26, 127, -41, 3, -258, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 330, 25, 7, 3, -40, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 148, -3, -16, 1, -71, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -67, -77, 14, 4, -148, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -76, 7, -3, -1, -259, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 0, -4, 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTCaptainAnimFalconDivePulled_joint17[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1349, -339, -1763, 361, 1150, -394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1689, -93, -1401, 113, 755, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1536, -41, -1536, -42, 1188, 339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1772, -181, -1486, 57, 1435, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1900, -50, -1422, 58, 1498, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1360, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1872, 21, 1488, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1857, 12, 1514, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1783, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1587, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1549, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1749, 20, -1365, -13, 1502, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1390, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1742, 19, 1484, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1709, 25, 1406, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1665, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1401, -14, 1342, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1579, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1211, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1639, 11, 1097, -107,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 857, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1631, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1586, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1538, 34, -1636, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1766, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1518, 32, 893, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1426, 12, 904, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1417, 11, 947, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1361, 17, 1127, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1349, 12, -1763, 2, 1150, 23,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimFalconDivePulled_joint19[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, -73,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 371, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 493, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 325, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 334, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 477, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 579, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 636, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 700, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 826, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 681, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 681, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 743, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 817, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 785, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 747, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 481, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -36,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimFalconDivePulled_joint21[198] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1481, 218, -1566, -123, -1528, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1700, 4, -1690, -30, -1419, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1491, -12, -1626, 32, -1475, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1674, 169, -1625, 4, -1184, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1831, 63, -1618, 5, -1037, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1550, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1801, -32, -1071, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1767, -45, -1118, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1459, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1231, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1297, -94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1540, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1495, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1527, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1450, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1415, -15, -1599, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1599, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1420, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1479, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1544, -17, -1577, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1474, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1559, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1485, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1507, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1490, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1586, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1484, -22, -1534, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1464, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1463, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1478, 5, -1696, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1649, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1481, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1477, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1573, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1621, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1540, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1495, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1487, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1481, -5, -1566, 7, -1528, 11,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimFalconDivePulled_joint22[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 269, -148, 123, 19, -51, -746,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 121, 45, 143, 107, -798, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 360, 116, 337, 80, -189, 377,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 353, -35, 303, -26, -44, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 289, -44, 285, -10, -74, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -38, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 306, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 213, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 188, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 52, -62,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -98, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 319, 20, -165, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 369, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -13, -88, -191, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -123, -75, -280, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -164, -11, 369, 3, -362, -80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -68, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 443, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -532, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -668, -113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -568, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -93, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 44, 144,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 464, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 374, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 233, 133, -277, 180,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 337, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -208, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -199, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -50, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 355, 14, 341, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 136, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 321, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 286, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 269, -16, 123, -12, -51, -1,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimFalconDivePulled_joint24[282] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, 144,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 685, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 647, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 383, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 361, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 441, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 488, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 607, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 689, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 773, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 816, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 919, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 971, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 994, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1018, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 979, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 931, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 820, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 776, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 747, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 700, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 550, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -8,
	ftAnimEnd(),
	0x0000, 0x200E, 0x00A1, 0xFFE8, 0x016D, 0xFFF7, 0xFEE9, 0x0083, 0x2805, 0x0002, 0x0129, 0xFFA9, 0x200B, 0x0001, 0x0089, 0xFFF9, 0xFF6C, 0x0059, 0x200B, 0x0001, 0x0092, 0xFFAE, 0xFF9C, 0x002F, 0x2809, 0x0002, 0xFFE4, 0x0009, 0x2007, 0x0001, 0xFFE5, 0xFF9F, 0x00B3, 0xFF9A, 0x2007, 0x0001, 0xFFD0, 0xFFEC, 0x005C, 0xFFD4, 0x2803, 0x0002, 0xFFCE, 0x0016, 0x200D, 0x0001, 0x005A, 0x0003, 0xFFE0, 0xFFFC, 0x2809, 0x0004, 0xFF93, 0xFFD5, 0x2805, 0x0005, 0x0099, 0x0001, 0x0801, 0x0001, 0x2003, 0x0001, 0xFFE9, 0x0019, 0x2803, 0x0003, 0xFFF6, 0xFFFA, 0x0801, 0x0002, 0x2009, 0x0001, 0xFF63, 0xFFD0, 0x2809, 0x0005, 0xFECB, 0xFFF5, 0x2007, 0x0001, 0xFFF7, 0x0018, 0x0098, 0xFFFE, 0x2805, 0x0006, 0x0075, 0xFFF4, 0x2003, 0x0002, 0x0069, 0x0020, 0x2003, 0x0001, 0x0067, 0xFFE2, 0x2803, 0x0002, 0xFFCE, 0xFFA0, 0x0801, 0x0001, 0x2009, 0x0001, 0xFEC2, 0x0014, 0x200B, 0x0001, 0xFF6C, 0xFFDE, 0xFEF4, 0x0025, 0x2803, 0x0002, 0xFFE0, 0x0057, 0x200D, 0x0001, 0x006A, 0xFFF9, 0xFF0D, 0x0013, 0x280D, 0x0004, 0x007D, 0xFFF7, 0xFED9, 0xFFDF, 0x0801, 0x0001, 0x2003, 0x0001, 0x0038, 0x0050, 0x2003, 0x0001, 0x0081, 0x0058, 0x2003, 0x0001, 0x00E9, 0x0030, 0x2803, 0x0003, 0x0090, 0x0010, 0x200D, 0x0001, 0x0073, 0xFFF8, 0xFEB9, 0xFFE6, 0x2809, 0x0005, 0xFED0, 0x0013, 0x2005, 0x0002, 0x007C, 0x0022, 0x2007, 0x0001, 0x00CF, 0x0021, 0x00B2, 0x003C, 0x2807, 0x0003, 0x00AE, 0xFFEF, 0x015D, 0x001D, 0x0801, 0x0002, 0x2009, 0x0001, 0xFEE2, 0x000C, 0x200F, 0x0001, 0x00A1, 0xFFF4, 0x016D, 0x000F, 0xFEE9, 0x0007, 0x0000,
};
