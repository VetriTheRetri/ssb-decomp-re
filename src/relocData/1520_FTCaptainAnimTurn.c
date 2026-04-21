/* AnimJoint data for relocData file 1520 (FTCaptainAnimTurn) */
/* 1792 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimTurn_joint1[44];
extern u16 dFTCaptainAnimTurn_joint2[20];
extern u16 dFTCaptainAnimTurn_joint4[74];
extern u16 dFTCaptainAnimTurn_joint5[82];
extern u16 dFTCaptainAnimTurn_joint6[14];
extern u16 dFTCaptainAnimTurn_joint7[8];
extern u16 dFTCaptainAnimTurn_joint8[8];
extern u16 dFTCaptainAnimTurn_joint10[18];
extern u16 dFTCaptainAnimTurn_joint11[54];
extern u16 dFTCaptainAnimTurn_joint12[16];
extern u16 dFTCaptainAnimTurn_joint13[8];
extern u16 dFTCaptainAnimTurn_joint14[10];
extern u16 dFTCaptainAnimTurn_joint16[14];
extern u16 dFTCaptainAnimTurn_joint17[100];
extern u16 dFTCaptainAnimTurn_joint19[48];
extern u16 dFTCaptainAnimTurn_joint21[98];
extern u16 dFTCaptainAnimTurn_joint22[96];
extern u16 dFTCaptainAnimTurn_joint24[36];
extern u16 dFTCaptainAnimTurn_joint25[98];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimTurn_joints[] = {
	(u32)dFTCaptainAnimTurn_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimTurn_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimTurn_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimTurn_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimTurn_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimTurn_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimTurn_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimTurn_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimTurn_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimTurn_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimTurn_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimTurn_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimTurn_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimTurn_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimTurn_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimTurn_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimTurn_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimTurn_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTCaptainAnimTurn_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimTurn_joint1[44] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1600, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValT(FT_ANIM_TRAX, 3), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 3), -1,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 6), 1201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 79, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 712, 362,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 9), 0, 0,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 6), 1600,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1608, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimTurn_joint2[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 107, 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 107, 109,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimTurn_joint4[74] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 361, 0, 241, 47, 173,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY), 189, 0, -31,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 61, 225, -36, -58, 91, 112,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), -142,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 353, 193,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 628, 62,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 120, -62, 113,
	ftAnimBlock(0, 1),
	ftAnimSetValAfterT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 627, -54,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, -31, 47,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), 189,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 0, -338,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimTurn_joint5[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 239, 60, 5, -44, -524, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -155, -2, -672, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 300, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 422, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 516, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 522, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 535, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -157, -1, -675, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -160, -13, -682, -32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 537, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 635, -14, -187, 5, -745, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -51, 77, -558, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 508, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 319, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, -79, 5, 57, -524, 34,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimTurn_joint6[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -797,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -797, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimTurn_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2435, -89, -388,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimTurn_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimTurn_joint10[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 369, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 330, -36,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimTurn_joint11[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -129, 49, 144, -54, 592, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -25, -7, 22, 8, 530, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -35, 4, 35, -6, 539, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 600, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -5, -27, -3, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -40, -39, 40, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -84, -44, 93, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, -44, 144, 50, 592, -8,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimTurn_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, -14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1025, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimTurn_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimTurn_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimTurn_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimTurn_joint17[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, 8, 70, 35, -472, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -635, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 199, -101, 105, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -11, -119, 13, -112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -202, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -39, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 171, 136, -741, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 186, -133, -791, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -217, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -265, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -32, -128, -582, 178,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 16, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -282, 52, -434, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -160, 113, -333, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 192, 101, -55, 99, -437, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 219, 0, 37, 62, -479, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 190, -29, 70, 32, -472, 6,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimTurn_joint19[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, 94,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 690, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 846, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 902, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1041, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1229, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1070, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 837, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 714, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 554, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -109,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimTurn_joint21[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1481, -21, -1566, -39, -1528, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1738, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1460, 54, -1605, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1590, 73, -1814, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1606, -83, -1726, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1423, -131, -1776, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1343, 6, -1470, 153, -1669, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2165, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1437, 133, -1469, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1611, 136, -1468, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1710, -140, -1523, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1330, -214, -1277, 129, -1851, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1281, 46, -1264, -79, -1616, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1424, 100, -1437, -151, -1578, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1481, 57, -1566, -128, -1528, 49,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimTurn_joint22[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 160, -9, 110, -8, -76, -162,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -483, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 150, -47, 101, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 65, -67, 46, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -37, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 133, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 121, -39, -538, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -51, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -554, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -86, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -97, 59, -62, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -73, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 32, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4, -13, -572, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 39, 90, 102, -506, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 74, 77, 131, 9, -278, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 86, 110, -20, -76, 201,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimTurn_joint24[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, 138,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1052, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1078, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1052, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 955, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 943, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 768, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -227,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimTurn_joint25[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 161, -97, 365, -93, -279, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -411, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 64, -65, 271, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 30, -74, 272, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -84, -68, 155, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -106, -4, 111, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -25, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 149, 18, -425, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -333, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 148, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 137, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -57, -9, 22, -122,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 40, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -107, -33, -227, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -303, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -45, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 139, 60, 219, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, 22, 365, 145, -279, 23,
	ftAnimEnd(),
	0x0000, 0x0000,
};
