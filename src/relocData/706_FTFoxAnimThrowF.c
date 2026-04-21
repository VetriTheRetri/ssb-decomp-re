/* AnimJoint data for relocData file 706 (FTFoxAnimThrowF) */
/* 3584 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimThrowF_joint1[46];
extern u16 dFTFoxAnimThrowF_joint2[36];
extern u16 dFTFoxAnimThrowF_joint4[50];
extern u16 dFTFoxAnimThrowF_joint5[172];
extern u16 dFTFoxAnimThrowF_joint6[78];
extern u16 dFTFoxAnimThrowF_joint7[10];
extern u16 dFTFoxAnimThrowF_joint8[62];
extern u16 dFTFoxAnimThrowF_joint10[10];
extern u16 dFTFoxAnimThrowF_joint11[162];
extern u16 dFTFoxAnimThrowF_joint12[76];
extern u16 dFTFoxAnimThrowF_joint13[40];
extern u16 dFTFoxAnimThrowF_joint15[10];
extern u16 dFTFoxAnimThrowF_joint16[164];
extern u16 dFTFoxAnimThrowF_joint18[80];
extern u16 dFTFoxAnimThrowF_joint20[188];
extern u16 dFTFoxAnimThrowF_joint21[128];
extern u16 dFTFoxAnimThrowF_joint23[78];
extern u16 dFTFoxAnimThrowF_joint24[146];
extern u16 dFTFoxAnimThrowF_joint25[42];
extern u16 dFTFoxAnimThrowF_joint26[44];
extern u16 dFTFoxAnimThrowF_joint27[116];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimThrowF_joints[] = {
	(u32)dFTFoxAnimThrowF_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimThrowF_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimThrowF_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimThrowF_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimThrowF_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimThrowF_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimThrowF_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimThrowF_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimThrowF_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimThrowF_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimThrowF_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimThrowF_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimThrowF_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimThrowF_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimThrowF_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimThrowF_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimThrowF_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimThrowF_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimThrowF_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimThrowF_joint26, /* [25] joint 26 */
	(u32)dFTFoxAnimThrowF_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimThrowF_joint1[46] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 900, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 360, 1020, 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 540, -60,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 540, -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1020, 480,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 15, 720, -34, 420, -288,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 20), 49, 912,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 120, -176,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 15), -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimThrowF_joint2[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 268, -1072,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -268, 214,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 536, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 25), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimThrowF_joint4[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, 402, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 89, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 178, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 357, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 446, 268, 268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 621, -48, 148, -1, 220, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -35, -15, 254, 0, 60, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 309, 156, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimThrowF_joint5[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1244, -410, -1232, 959, -1091, 295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 833, -62, -272, 148, -796, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1118, 24, -935, 185, -1087, -125,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -976, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 882, -148, 97, 561,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 822, -30, 186, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 764, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 30, 109, -920, 89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -664, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 406, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 603, -55, 406, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 653, 13, 35, -768,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 630, 434, -1130, -533, -643, -331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1522, 508, -1031, 28, -1327, -412,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1322, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1648, 42, -1468, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1572, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1393, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1384, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1171, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1564, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1410, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1350, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1501, -58,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1081, 111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1298, -46,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1545, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1448, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1425, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1494, 7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1335, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, 4, -1443, 5, -1349, -13,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimThrowF_joint6[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -895, 895,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 69,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -756,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -332, -263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -526, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -495, -423,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -846, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -303, 388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -547, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -646, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -571, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -559, 11,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimThrowF_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 35),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimThrowF_joint8[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -134, 17,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -178, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 89, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 268, -357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 251, 30, -233, 28, -9, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 513, 23, -129, 47, -43, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 368, -36, 1, 15, -51, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -113, 136, -72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimThrowF_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 35),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimThrowF_joint11[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2431, -129, 1434, -443, -2436, -167,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2605, -38, -2627, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 991, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1591, 296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2636, 304, 1584, -561, -2672, 154,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1390, 340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 469, -598, -2319, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 388, -26, -2367, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1316, -70, 415, 26, -2440, -117,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1682, 195,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 420, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2603, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2407, 647,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1138, 218, -1307, 531,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1245, -81, 662, 123, -1345, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 542, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1301, -52, -1443, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1345, -14, -1738, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1362, 152, -1691, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1041, 147, 879, 308, -1226, 294,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1348, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1066, 45, -1102, 132,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -939, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -915, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -962, -49, 1346, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), -1472, -6, 1335, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -961, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1263, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, -3, 1335, 0, -1272, -8,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimThrowF_joint12[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -235, -328,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -564, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -492,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -991, -408,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -816, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -695, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -835, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -908, 317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -200, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -362, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -686, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -774, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1307, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1287, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -637, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -605, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimThrowF_joint13[40] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 102, 46, 416,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -135, 169, 473,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 117, -5, 410,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimThrowF_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 35),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimThrowF_joint16[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1391, 83, -1409, -41, 1403, 160,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1532, 133, 1634, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1450, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1650, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1229, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1742, 20, 1449, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1573, -56, 1559, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1629, -105, 907, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1363, -101, 1026, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1427, 79, -1393, -148, 1177, 119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1511, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1427, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1372, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1354, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 970, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1436, -147, 806, -98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1037, -118,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 866, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1287, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1297, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 978, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 893, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 911, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1276, 15,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1265, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1230, -39,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1004, 105,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1232, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1299, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1623, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1270, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1392, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1231, -1, -1401, -8, 1637, 13,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimThrowF_joint18[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 427, -188,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1053, 308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1099, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1141, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1128, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 641, -564,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 735, 437,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 835, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 766, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 518, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 457, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 658, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 637, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 347, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 328, -18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimThrowF_joint20[188] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -16, -75, 35, -67, -90, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -39, 58, -99, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -91, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 127, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -115, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 84, 41, 5, -196,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 127, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -492, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -30, 165, -266, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -689, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 216, 59, 280, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 21, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 88, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 18, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -532, 332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 22, 19, -23, 199,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 234, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -133, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -419, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 50, 109, -377, 125,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 431, 137, 29, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 415, 126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 422, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 512, 95, 117, 110,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 750, -16, 506, -19,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 414, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 196, -40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 732, -23, 473, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -65, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 222, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 132, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 160, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 100, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -61, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -54, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1, -1, 96, -4, -50, 3,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimThrowF_joint21[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 383, 86, 137, -77, 56, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -6, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 469, 1, 2, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 386, -50, 261, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 367, -126, 21, -184, 315, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, -100, -374, 61, 676, -360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 167, -4, 145, 249, -405, -521,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 123, -32, 125, -20, -367, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 142, 78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -105, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 104, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 47, 62,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 226, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 323, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -42, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -266, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 98, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 125, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -262, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 192, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 321, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 346, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 347, 0, 123, -2, 198, 5,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimThrowF_joint23[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 396, 305,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 701, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 537, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 422, -265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1133, 563,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1132, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1129, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1128, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 641, -561,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -320,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 265, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 648, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 300, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 290, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimThrowF_joint24[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 36, -152, -59, 133, -292, 135,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -90, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 73, -21, -156, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -102, -64, -207, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -72, -178, -30, -285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -41, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -164, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, 40, -411, -74, -617, -313,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 16, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -222, 146, -657, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -118, 75, -684, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 130, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -532, 331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -26, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -54, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -129, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -215, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 222, 66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 81, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -66, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -344, -97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -399, 23,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 64, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -89, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -50, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 43, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -375, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -214, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 44, 1, -90, -1, -209, 5,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimThrowF_joint25[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 410, 219, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -499, -68, 646, -131, -427, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 55, -570, -71, 89, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 96, 0, 63, 0, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 0, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 865, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 219, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimThrowF_joint26[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -237, -122, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 90, 176, 381, -74, -297, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1176, -7, -715, -31, -1538, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, -81, 0, 71, 0, 153,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 363, -8, 0, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -178, -122, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTFoxAnimThrowF_joint27[116] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1608, 0, 60, 600,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 536, -321,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -573, -3466, 28, -355, 444, -2737,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -28, -355, -84, -4177,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), -866,
	ftAnimSetValRateT(FT_ANIM_TRAX, 1), -600, 2157,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -60, -600,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -327, 1919, 180, 1919, -430, 1679,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 1), -180, 1173,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), -120, 420,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 3), 420,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 30), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), -151, -355, -137, 659,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), -208, -355, -15, 1270,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 1), 180, 1609,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), -240,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAX, 2), 1072, -240,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 240, -1440, 387, 1200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 60, 480,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
