/* AnimJoint data for relocData file 1310 (FTKirbyAnimTechF) */
/* 2336 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimTechF_joint1[24];
extern u16 dFTKirbyAnimTechF_joint2[82];
extern u16 dFTKirbyAnimTechF_joint3[102];
extern u16 dFTKirbyAnimTechF_joint4[32];
extern u16 dFTKirbyAnimTechF_joint6[64];
extern u16 dFTKirbyAnimTechF_joint7[198];
extern u16 dFTKirbyAnimTechF_joint8[16];
extern u16 dFTKirbyAnimTechF_joint10[70];
extern u16 dFTKirbyAnimTechF_joint11[172];
extern u16 dFTKirbyAnimTechF_joint12[14];
extern u16 dFTKirbyAnimTechF_joint14[20];
extern u16 dFTKirbyAnimTechF_joint15[24];
extern u16 dFTKirbyAnimTechF_joint17[14];
extern u16 dFTKirbyAnimTechF_joint19[114];
extern u16 dFTKirbyAnimTechF_joint20[26];
extern u16 dFTKirbyAnimTechF_joint22[14];
extern u16 dFTKirbyAnimTechF_joint23[136];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTKirbyAnimTechF_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimTechF_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimTechF_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimTechF_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimTechF_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTKirbyAnimTechF_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTKirbyAnimTechF_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimTechF_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTKirbyAnimTechF_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTKirbyAnimTechF_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimTechF_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTKirbyAnimTechF_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTKirbyAnimTechF_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTKirbyAnimTechF_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTKirbyAnimTechF_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTKirbyAnimTechF_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTKirbyAnimTechF_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTKirbyAnimTechF_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimTechF_joint1[24] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, -379,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 6), 0, 952,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 3411,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 14), 4196, 1138,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 12), 4800, 11,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 8), 4800,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimTechF_joint2[82] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 780,
	ftAnimSetValRate(FT_ANIM_ROTX), 1519, -33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1519, 39,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), 780,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3552, 594,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 720, -869,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -869,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 576, -102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 8936, 168,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 647, 526,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 585, -274,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 608, 3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 609, 486,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 951, 237,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 7), 9650,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 589, 20,
	ftAnimBlock(0, 5),
	ftAnimSetValT(FT_ANIM_ROTX, 9), 9650,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), 600, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimTechF_joint3[102] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_TRAY), -312,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, -140,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), -110, -151,
	ftAnimSetValT(FT_ANIM_ROTY, 21), 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 40), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), -312,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 271,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), -49, 44,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), -351,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 2), -342,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), -356,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 211,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), -306, 45,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 1), 32,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -48,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), -8, -285,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), -341, -123,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 78,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), 20, 148,
	ftAnimBlock(0, 2),
	ftAnimSetValBlockT(FT_ANIM_TRAY, 2), -339,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 104,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), -297, 221,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_TRAZ, 21), 0,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_TRAY, 20), -312,
	ftAnimBlock(0, 1),
	ftAnimSetValBlockT(FT_ANIM_ROTY, 10), -268,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 9), -268,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimTechF_joint4[32] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 312, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 20, 1, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 159, 12, -80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimTechF_joint6[64] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), -120, -120,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 31, 0, -8, 1, 126, -6,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 25), -120, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 31, 0, -8, 1, 126, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 4, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 21, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 47, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 36, -1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 0, 0,
	ftAnimBlock(0, 7),
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 15), 0, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimTechF_joint7[198] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2249, 15, -476, 0, -1629, 6,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -448, 13,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 26), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -2173, 16, -1633, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2178, 87, -1630, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1867, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1922, -41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -448, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -798, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1852, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1776, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1970, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2080, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1458, -54, -2400, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2292, -163, -1511, 202,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -779, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -416, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2213, 88, -1545, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1570, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1651, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1678, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1348, 121, -1853, -83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1282, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -423, -37, -1845, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -700, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1933, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1221, 204, -2022, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -873, 419, -2406, -450,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 14), 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -381, 302, -2923, -308,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -158, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -624, 70, -3022, -76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -230, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3076, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -3213, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -32, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 631, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 687, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 785, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 19, -220, 9, -3216, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTKirbyAnimTechF_joint8[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimTechF_joint10[70] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), 120, -120,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 30, 0, 7, -1, -127, 6,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 25), 120, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 30, 0, 7, -1, -127, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 24, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -63, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -60, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -21, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1, 0,
	ftAnimBlock(0, 13),
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 15), 0, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimTechF_joint11[172] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 692, 33, 1128, -4, -18, 36,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4014,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 358, -102, 1156, -7,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 26), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -55, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -20, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -241, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 258, -56, 1114, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 179, -65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 836, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -287, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -340, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 71, -3, -429, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 281, -20, -98, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 854, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1113, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 231, -66, -80, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -39, -151, -95, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -246, -121, -243, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -575, -267, -601, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1089, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 933, 48,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -946, -319, -994, -333,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1612, -157,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1496, -27,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 14), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 988, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1369, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1786, -167,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2395, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1516, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1606, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, -17, 1391, 21, -1608, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTKirbyAnimTechF_joint12[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimTechF_joint14[20] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, -1072,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 204, -120, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -1247, 225, -1310,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -804, 0, -1072,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTKirbyAnimTechF_joint15[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 35, 0, -319, 0, 133, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 39), 38, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 39), -319, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 38, 0, -319, 0, 129, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimTechF_joint17[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 39), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimTechF_joint19[114] = {
	ftAnimSetValAfter(FT_ANIM_SCAZ), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1865, -6, 1576, 52, -1350, -61,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY), 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY, 8), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -1959, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1674, -41, -1511, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1632, -28, -1465, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1792, 4, -1751, -11,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY), -815, -879,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 2), 3276, 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 30), 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1792, -3, -1756, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 1419, -29, -1310, 27,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1970, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1895, 20,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1403, 22, -1294, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1790, 35, -1687, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1895, 0, 1793, 2, -1696, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1907, -2, 1786, -1, -1705, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1909, -2, 1785, 0, -1704, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimTechF_joint20[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -38, 2, 319, 0, 129, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 39), -38, 0, 129, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 39), 319,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -38, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 319, 129,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimTechF_joint22[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 39), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTKirbyAnimTechF_joint23[136] = {
	ftAnimSetValAfter(FT_ANIM_SCAZ), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1407, 10, -1572, -48, -1369, -59,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1670, 44,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY, 8), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -1313, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1571, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1522, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1616, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1625, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1780, -2,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY), -726, -1029,
	ftAnimSetVal0RateT(FT_ANIM_SCAY, 2), 3072,
	ftAnimSetValRateT(FT_ANIM_SCAX, 2), 3276, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1699, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -1221, 22,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 30), 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1779, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1583, 10,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1317, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1310, 1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1574, -16, -1202, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1788, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1686, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1695, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1708, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1788, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1785, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1309, 1, -1785, 0, -1708, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
