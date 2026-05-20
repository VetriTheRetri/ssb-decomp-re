/* AnimJoint data for relocData file 1333 (FTKirbyAnimThrownDK) */
/* 2048 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimThrownDK_joint2[52];
extern u16 dFTKirbyAnimThrownDK_joint3[12];
extern u16 dFTKirbyAnimThrownDK_joint4[50];
extern u16 dFTKirbyAnimThrownDK_joint6[28];
extern u16 dFTKirbyAnimThrownDK_joint7[112];
extern u16 dFTKirbyAnimThrownDK_joint8[16];
extern u16 dFTKirbyAnimThrownDK_joint10[28];
extern u16 dFTKirbyAnimThrownDK_joint11[114];
extern u16 dFTKirbyAnimThrownDK_joint12[16];
extern u16 dFTKirbyAnimThrownDK_joint14[12];
extern u16 dFTKirbyAnimThrownDK_joint15[118];
extern u16 dFTKirbyAnimThrownDK_joint17[16];
extern u16 dFTKirbyAnimThrownDK_joint19[146];
extern u16 dFTKirbyAnimThrownDK_joint20[118];
extern u16 dFTKirbyAnimThrownDK_joint22[16];
extern u16 dFTKirbyAnimThrownDK_joint23[124];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTKirbyAnimThrownDK_joints[] = {
	NULL, /* [0] NULL */
	(AObjEvent32 *)dFTKirbyAnimThrownDK_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimThrownDK_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimThrownDK_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTKirbyAnimThrownDK_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTKirbyAnimThrownDK_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimThrownDK_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTKirbyAnimThrownDK_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTKirbyAnimThrownDK_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimThrownDK_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTKirbyAnimThrownDK_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTKirbyAnimThrownDK_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTKirbyAnimThrownDK_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTKirbyAnimThrownDK_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTKirbyAnimThrownDK_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTKirbyAnimThrownDK_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTKirbyAnimThrownDK_joint23, /* [22] joint 23 */
};

/* Joint 2 */
u16 dFTKirbyAnimThrownDK_joint2[52] = {
	ftAnimSetValRate(FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 335, -87, 4096, 35, 4096, 35, 4096, -89,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 1608, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 275, 39,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4505, 4505, 3072,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 395, 50, 4096, -32, 4096, -32, 4096, 81,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 18), 4096, 35, 4096, 35, 4096, -89,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 12), 395, -26,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 335, -87,
	ftAnimLoop(0x6800, -102),
};

/* Joint 3 */
u16 dFTKirbyAnimThrownDK_joint3[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimThrownDK_joint4[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 17, 0, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 89, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 89, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -178, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -178, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 0, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -89, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 0, 9,
	ftAnimLoop(0x6800, -96),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimThrownDK_joint6[28] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -240, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 0, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 0, 11,
	ftAnimLoop(0x6800, -54),
};

/* Joint 7 */
u16 dFTKirbyAnimThrownDK_joint7[112] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2412, -91, -1435, 23, 0, -115,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2739, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1278, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -355, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -613, -206,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -57, 222,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2744, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -2676, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2463, 199, -1324, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2139, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1494, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 153, 179,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 481, 27,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2140, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -2372, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 501, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 138, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1507, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -1432, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1436, -1, 94, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1435, 0, 49, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, -39, -1435, 0, 0, -49,
	ftAnimLoop(0x6800, -220),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimThrownDK_joint8[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimLoop(0x6800, -30),
};

/* Joint 10 */
u16 dFTKirbyAnimThrownDK_joint10[28] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 0, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 240, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 0, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 0, -11,
	ftAnimLoop(0x6800, -54),
};

/* Joint 11 */
u16 dFTKirbyAnimThrownDK_joint11[114] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 101, 172, 15, 1608, -131,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1095, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 175, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1223, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 968, -197,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 2026, 89,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1094, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 805, -133,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 162, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 139, -23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 674, -109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 539, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2092, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2014, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 119, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 151, -21,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 545, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 748, 54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 126, -16, 2010, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 167, 6, 1677, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 55, 172, 5, 1608, -69,
	ftAnimLoop(0x6800, -224),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimThrownDK_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 14 */
u16 dFTKirbyAnimThrownDK_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimThrownDK_joint15[118] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1485, -33, -1279, 0, -1612, 59,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1436, 110,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1279, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1357, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1477, -140,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2059, 109,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1313, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1068, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1259, -172, -1897, 164,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1278, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1720, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1882, -161,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2021, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1100, 125, -1295, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1526, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1280, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1845, 179,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1587, -24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1533, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1479, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1610, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1623, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1485, -5, -1279, 0, -1612, 10,
	ftAnimLoop(0x6800, -232),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimThrownDK_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimThrownDK_joint19[146] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -290, 36, 145, 22, -2671, 38,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 206, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 22, -47, -2415, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -40, -79, -2436, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2640, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -532, 78,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 175, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -54, 76,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2717, -104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2885, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -415, 103,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -363, -107,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 42, 105, -2749, 164,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 167, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2481, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -506, -104, -2544, -68,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2840, -80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -263, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 29, -113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 152, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2878, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2587, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -240, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -292, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 155, -2, -2608, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 140, 0, -2673, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -290, 2, 145, 5, -2671, 2,
	ftAnimLoop(0x6800, -288),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimThrownDK_joint20[118] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -123, 47, 328, 0, -4, 82,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -133, -55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 329, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 270, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 216, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -308, -163,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -210, -118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -640, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 314, -13, -465, -107,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -277, 177,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 326, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -534, 154,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -116, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -98, 129,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -215, -149,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -153, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -495, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -368, -109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -92, 93,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -481, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -181, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -123, 58, 328, 1, -4, 87,
	ftAnimLoop(0x6800, -232),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimThrownDK_joint22[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTKirbyAnimThrownDK_joint23[124] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 290, -45, -145, -27, 545, 47,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -172, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -42, 18, 801, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -16, 32, 783, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 399, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 684, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -205, 21, 709, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 94, -30, 368, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 555, 110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 275, -23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 35, -76, 335, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 747, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -188, 71,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 268, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 496, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 701, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 519, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -76, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -114, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 461, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 322, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 290, -32, -145, -31, 545, 26,
	ftAnimLoop(0x6800, -236),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
