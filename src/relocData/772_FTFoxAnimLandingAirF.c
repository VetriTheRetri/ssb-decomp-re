/* AnimJoint data for relocData file 772 (FTFoxAnimLandingAirF) */
/* 2384 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimLandingAirF_joint1[102];
extern u16 dFTFoxAnimLandingAirF_joint2[10];
extern u16 dFTFoxAnimLandingAirF_joint4[22];
extern u16 dFTFoxAnimLandingAirF_joint5[130];
extern u16 dFTFoxAnimLandingAirF_joint7[54];
extern u16 dFTFoxAnimLandingAirF_joint10[58];
extern u16 dFTFoxAnimLandingAirF_joint11[122];
extern u16 dFTFoxAnimLandingAirF_joint12[48];
extern u16 dFTFoxAnimLandingAirF_joint13[72];
extern u16 dFTFoxAnimLandingAirF_joint15[10];
extern u16 dFTFoxAnimLandingAirF_joint16[72];
extern u16 dFTFoxAnimLandingAirF_joint18[24];
extern u16 dFTFoxAnimLandingAirF_joint20[74];
extern u16 dFTFoxAnimLandingAirF_joint21[106];
extern u16 dFTFoxAnimLandingAirF_joint23[46];
extern u16 dFTFoxAnimLandingAirF_joint24[100];
extern u16 dFTFoxAnimLandingAirF_joint25[50];
extern u16 dFTFoxAnimLandingAirF_joint26[40];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimLandingAirF_joints[] = {
	(u32)dFTFoxAnimLandingAirF_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimLandingAirF_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimLandingAirF_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimLandingAirF_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimLandingAirF_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTFoxAnimLandingAirF_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimLandingAirF_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimLandingAirF_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimLandingAirF_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimLandingAirF_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimLandingAirF_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimLandingAirF_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimLandingAirF_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimLandingAirF_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimLandingAirF_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimLandingAirF_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimLandingAirF_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimLandingAirF_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimLandingAirF_joint1[102] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -790, 2, -4, 0, 68, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 58, 186, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 6), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -735, 39,
	ftAnimSetValRateT(FT_ANIM_TRAX, 9), 54, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -2, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 7, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 185,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 300, 261,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), -115, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -13, 43,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_TRAX, 13), 48, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 462, 137,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 12), 11, 161,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 0, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 0, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 13), 912, 324,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 0, -18,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_TRAX, 8), 48, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), -20, -156,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimLandingAirF_joint2[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimLandingAirF_joint4[22] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -11, 10, 47, 3, 5, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 156, 3, 81, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 468, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 309, -21,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimLandingAirF_joint5[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1150, 292, -254, -216, -1743, -325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1442, 406, -470, -67, -2069, -412,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1962, 375, -388, 156, -2568, -294,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2348, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 2437, 282, 31, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2758, 267, 0, -84,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -196, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3230, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2340, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3053, -95,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -207, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -166, -40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3265, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 3053, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3084, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -2970, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2931, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -3094, 51,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3049, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 3059, 49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -207, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -184, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3014, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -2883, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3107, 48, -165, 19, -2958, -74,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimLandingAirF_joint7[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, -282,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -727, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -807, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -465, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -193, 229,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -461, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -599, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -917, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -888, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -713, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 154,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimLandingAirF_joint10[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -35, 82, 29, 4, -11, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 43, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 296, 3, -21, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 152, -12, -68, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 4, 5,
	ftAnimBlock(0, 9),
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -53, -72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -65, 1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 58, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -113, 16, 136, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -72, -2,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimLandingAirF_joint11[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2714, -439, 1473, -381, -89, -528,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3153, -529, 1091, -102, -617, -528,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3773, -437, 1267, 228, -1146, -254,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1707, 78, -914, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4028, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4256, -188,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -4576, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1703, -46, -686, 159,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1517, -21, -1064, -146,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4602, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -4677, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1496, -22, -1212, -144,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1305, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1474, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1334, 115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1115, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4651, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -4656, -34,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1117, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1215, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1312, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1334, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4692, -36, 1336, 2, -1271, -55,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimLandingAirF_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -632,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -632, -438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -876, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -946, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -809, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -251, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -176, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -514, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -601, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -699, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 104,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimLandingAirF_joint13[72] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, -65, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, 0, -36, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -90, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 120, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1, 2,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -43, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -17, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 215, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 92, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -34, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 0, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 0, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, -47,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimLandingAirF_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimLandingAirF_joint16[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -131, -2, -359, 27, -302, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -225, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), -314, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -338, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -410, -73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -674, 58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -191, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -185, -53,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -607, 74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -110, 82,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -240, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -353, -53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -278, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -51, -223, 55, -26, 83,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimLandingAirF_joint18[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1317, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1187, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1155, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 511, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -157,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimLandingAirF_joint20[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -320, 12, 255, -27, -720, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 45, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 183, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -371, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -254, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -205, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 77, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 43, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 176, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 119, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -205, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -143, 76,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 30, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 40, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, 6, 125, 6, -56, 87,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimLandingAirF_joint21[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1605, 128, 1580, -3, 1666, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1314, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1106, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1675, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1513, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1288, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1277, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1307, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1314, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1668, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1076, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1228, 27,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1368, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1558, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1647, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1310, 14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1256, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1440, 28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1590, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1705, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1297, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1264, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1253, 10, 1470, 30, 1743, 37,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimLandingAirF_joint23[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 411, 303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 897, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1015, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1308, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1270, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1050, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1013, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 446, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 331, -115,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimLandingAirF_joint24[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 60, -34, 45, -89, 201, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -131, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 154, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 164, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -53, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -382, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -409, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -653, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -142, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -171, 5,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 214, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 265, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -725, -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -477, 52,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 242, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 41, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -162, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -105, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -422, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -301, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, -24, -102, 3, -226, 74,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimLandingAirF_joint25[50] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 758, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 85, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 472, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -200, -52,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 132, 23, 0, 7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 229, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 328, 9, 73, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -28, 219, -27, 0, -13,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimLandingAirF_joint26[40] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -331, -12, -319, -17, 144, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -198, -12, -276, 11, 199, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -486, 1, -181, 11, 86, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -178, -122, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
